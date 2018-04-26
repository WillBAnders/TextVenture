#include "Test.h"

#include <cassert>
#include <iostream>
#include <utility>
#include <vector>
#include "../command/element/SequentialElement.h"
#include "../world/Compass.h"
#include "../command/element/IntElement.h"
#include "../command/Command.h"
#include "../command/CommandException.h"
#include "../command/registry/CommandManager.h"
#include "../data/inventory/Inventory.h"
#include "../world/Area.h"
#include "../world/Location.h"
#include "../world/World.h"
#include "../quest/Quest.h"
#include "../quest/objective/Objective.h"
#include "../game/Game.h"
#include "../data/inventory/Consumeable.h"
#include "../game/commands/elements/Elements.h"
#include "../game/commands/elements/DirectionElement.h"
#include "../game/quests/IntoTheWild.h"
#include "../game/quests/objectives/Objectives.h"

using namespace std;

void test() {
    testCommandSystem();
    testDataSystem();
    testWorldSystem();
    testQuestSystem();
}

class TestCommand : public Command {

    public:

        TestCommand(string name, string description, string usage, CommandElement *element) : Command(std::move(name), std::move(description), std::move(usage), element) {};
        void process(CommandContext ctx) const throw(CommandException) override {
            assert(ctx.hasArg("direction") && *static_cast<Compass::Direction *>(ctx.getArg("direction")) == Compass::Direction::NORTHEAST);
            assert(ctx.hasArg("distance") && *static_cast<int *>(ctx.getArg("distance")) == 3);
        }

};

void testCommandSystem() {
    SequentialElement element({Elements::integer("distance", 1, 5), DirectionElement::get()});
    TestCommand command("Example", "Description", "Usage", &element);
    CommandManager manager;
    manager.addCommand(&command, {"move"});
    try {
        manager.process("move northeast 3");
    } catch (CommandException &e) {
        cout << e.what() << endl;
        assert(false); //No exception should have been thrown
    }
}

class TestItem : public Item, Consumable {

    public:

        TestItem(std::string name, std::string description) : Item(std::move(name), std::move(description), Type::CONSUMABLE, Stats()) {};
        void consume() override {
            setQuantity(getQuantity() - 1);
        }

};

void testDataSystem() {
    Inventory inventory;
    inventory.addItem(new TestItem("Name", "Description"));
    assert(inventory.getItem("Name") != nullptr);
    inventory.getItem("Name")->setQuantity(4);
    assert(inventory.getItem("Name")->getQuantity() == 4);
    ((Consumable *) inventory.getItem("Name"))->consume();
    assert(inventory.getItem("Name")->getQuantity() == 3);
}

class TestLocation : public Location {

    public:

        TestLocation(std::string name, Area *area) : Location(name, area) {};
        void onEnter() override {
            assert(Game::get().getPlayer().getLocation() == this);
        }

};

void testWorldSystem() {
    World world;
    world.addArea(new Area("Area", "Description"));
    assert(world.getArea("Area") != nullptr);
    world.addLocation(new TestLocation("Location", world.getArea("Area")));
    assert(world.getLocation("Location") != nullptr);
    world.addLocation(new TestLocation("Neighbor", world.getArea("Area")));
}

class TestQuest : public Quest {

    public:

        TestQuest(std::string name, std::string description) : Quest(std::move(name), std::move(description)) {
            objectives.push_back(Objectives::location("Enter Location", Game::get().getWorld().getLocation("Location")));
        }

};

void testQuestSystem() {
    TestQuest quest("Quest", "Description");
    Game::get().getPlayer().setLocation(Game::get().getWorld().getLocation("Location"));
    quest.update();
    assert(quest.isComplete());
}