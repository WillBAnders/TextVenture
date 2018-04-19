#include "Test.h"

#include <cassert>
#include <iostream>
#include <utility>
#include "../command/element/SequentialElement.h"
#include "../command/element/ChoicesElement.h"
#include "../world/Compass.h"
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
            assert(ctx.hasArg("direction") && *static_cast<Compass::Direction *>(ctx.getArg("direction")) == Compass::NORTHEAST);
            assert(ctx.hasArg("distance") && *static_cast<int *>(ctx.getArg("distance")) == 3);
        }

};

void testCommandSystem() {
    ChoicesElement direction("direction", Compass::getDirections());
    IntElement distance("distance", 1, 5);
    SequentialElement element({&direction, &distance});
    TestCommand command("Example", "Usage", &element);
    CommandManager manager;
    manager.addCommand(&command, "move");
    try {
        manager.process("move northeast 3");
    } catch (CommandException &e) {
        cout << e.what() << endl;
        assert(false);
    }
}

class TestItem : public Item {

    public:

        TestItem(std::string name, std::string description) : Item(std::move(name), std::move(description)) {};
        void use() override {
            setQuantity(getQuantity() - 1);
        }

};

void testDataSystem() {
    Inventory inventory;
    inventory.addItem(new TestItem("Name", "Description"));
    assert(inventory.getItem("Name") != nullptr);
    inventory.getItem("Name")->setQuantity(4);
    assert(inventory.getItem("Name")->getQuantity() == 4);
    inventory.getItem("Name")->use();
    assert(inventory.getItem("Name")->getQuantity() == 3);
}

void testWorldSystem() {
    World world;
    world.addArea(new Area("Area"));
    assert(world.getArea("Area") != nullptr);
    world.addLocation(new Location(world.getArea("Area"), "Location"));
    assert(world.getLocation("Location") != nullptr);
    world.addLocation(new Location(world.getArea("Area"), "Neighbor"));
    world.getLocation("Location")->addNeighbor(Compass::EAST, world.getLocation("Neighbor"));
    assert(world.getLocation("Location")->getNeighbor(Compass::EAST)->getName() == "Neighbor");
}