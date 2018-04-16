#include "Test.h"

#include <cassert>
#include <iostream>

#include "../command/element/SequentialElement.h"
#include "../command/element/ChoicesElement.h"
#include "../world/Direction.h"
#include "../command/element/IntElement.h"
#include "../command/Command.h"
#include "../command/CommandException.h"
#include "../command/registry/CommandManager.h"
#include "../data/inventory/Inventory.h"
#include "../world/Area.h"
#include "../world/Location.h"
#include "../world/World.h"

using namespace std;

void test() {
    testCommandSystem();
    testDataSystem();
    testWorldSystem();
}

class TestCommand : public Command {

    public:

        TestCommand(string name, string usage, CommandElement *element) : Command(std::move(name), std::move(usage), element) {};
        void process(CommandContext ctx) const throw(CommandException) override {
            assert(ctx.hasArg("direction") && *static_cast<Direction *>(ctx.getArg("direction")) == Direction::NORTHEAST);
            assert(ctx.hasArg("distance") && *static_cast<int *>(ctx.getArg("distance")) == 3);
        }

};

const std::map<std::string, void *> directions = {
        {"north", new Direction(NORTH)},
        {"northeast", new Direction(NORTHEAST)},
        {"east", new Direction(EAST)},
        {"southeast", new Direction(SOUTHEAST)},
        {"south", new Direction(SOUTH)},
        {"southwest", new Direction(SOUTHWEST)},
        {"west", new Direction(WEST)},
        {"northwest", new Direction(NORTHWEST)}};

void testCommandSystem() {
    ChoicesElement direction("direction", directions);
    IntElement distance("distance", 1, 5);
    SequentialElement element("elements", {&direction, &distance});
    TestCommand command("Example", "Usage", &element);
    CommandManager manager;
    manager.addCommand(command, "move");
    try {
        manager.process("move northeast 3");
    } catch (CommandException &e) {
        cout << e.what() << endl;
        assert(false);
    }
}

void testDataSystem() {
    Inventory inventory;
    inventory.addItem(new Item("Name", "Description", 3));
    assert(inventory.getItem("Name") != nullptr);
    inventory.getItem("Name")->setQuantity(1);
    assert(inventory.getItem("Name")->getQuantity() == 1);
}

void testWorldSystem() {
    World world;
    world.addArea(new Area("Area"));
    assert(world.getArea("Area") != nullptr);
    world.addLocation(new Location(world.getArea("Area"), "Location"));
    assert(world.getLocation("Location") != nullptr);
    world.addLocation(new Location(world.getArea("Area"), "Neighbor"));
    world.getLocation("Location")->addNeighbor(Direction::EAST, world.getLocation("Neighbor"));
    assert(world.getLocation("Location")->getNeighbor(Direction::EAST)->getName() == "Neighbor");
}