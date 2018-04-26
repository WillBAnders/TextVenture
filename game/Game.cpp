#include "Game.h"

#include <iostream>

#include "commands/ExitCommand.h"
#include "commands/HelpCommand.h"
#include "items/Items.h"
#include "locations/Locations.h"
#include "../Util.h"
#include "commands/InventoryCommand.h"
#include "commands/MoveCommand.h"
#include "commands/AttackCommand.h"
#include "commands/EquipmentCommand.h"
#include "commands/ItemCommand.h"
#include "commands/LocationCommand.h"
#include "commands/QuestCommand.h"
#include "quests/Quests.h"
#include "commands/EquipCommand.h"
#include "entities/WildBoar.h"

Game &Game::get() {
    static Game game(Util::getString("Enter your name:"));
    return game;
}

Player &Game::getPlayer() {
    return player;
}

World &Game::getWorld() {
    return world;
}

CommandManager &Game::getCommands() {
    return commands;
}

CommandManager &Game::getBattleCommands() {
    return battle_commands;
}

QuestManager &Game::getQuests() {
    return quests;
}

Battle &Game::getBattle() {
    return *battle;
}

void Game::initialize() { //Initializes areas, locations, commands, items, and the player
    world.addArea(new Area("Mirestone Village", "An ancient village created by Elder Gods long ago."));
    world.addArea(new Area("Tyras Castle", "The castle of King Tyras, a cruel and ruthless ruler."));
    world.addArea(new Area("Vanguard Forest", "A forest south of Mirestone home to many plants, animals, and travelers."));
    world.addLocation(Locations::clearing());
    world.addLocation(Locations::drawbridge());
    world.addLocation(Locations::frontGrounds());
    world.addLocation(Locations::garden());
    world.addLocation(Locations::greatHall());
    world.addLocation(Locations::mainKitchen());
    world.addLocation(Locations::market());
    world.addLocation(Locations::northGuardhouse());
    world.addLocation(Locations::oHartilyTavern());
    world.addLocation(Locations::tradersPass());
    world.addLocation(Locations::tyrasSquare());
    world.addLocation(Locations::windmoreOutpost());
    world.addNeighbors(Locations::tyrasSquare(), Locations::northGuardhouse(), Compass::Direction::NORTH);
    world.addNeighbors(Locations::tyrasSquare(), Locations::frontGrounds(), Compass::Direction::EAST);
    world.addNeighbors(Locations::tyrasSquare(), Locations::drawbridge(), Compass::Direction::SOUTH);
    world.addNeighbors(Locations::tyrasSquare(), Locations::market(), Compass::Direction::WEST);
    world.addNeighbors(Locations::market(), Locations::oHartilyTavern(), Compass::Direction::NORTHWEST);
    world.addNeighbors(Locations::frontGrounds(), Locations::greatHall(), Compass::Direction::NORTH);
    world.addNeighbors(Locations::frontGrounds(), Locations::garden(), Compass::Direction::SOUTHEAST);
    world.addNeighbors(Locations::greatHall(), Locations::mainKitchen(), Compass::Direction::WEST);
    world.addNeighbors(Locations::drawbridge(), Locations::tradersPass(), Compass::Direction::SOUTH);
    world.addNeighbors(Locations::tradersPass(), Locations::clearing(), Compass::Direction::EAST);
    world.addNeighbors(Locations::tradersPass(), Locations::windmoreOutpost(), Compass::Direction::SOUTHWEST);
    commands.addCommand(new EquipCommand(), {"equip"});
    commands.addCommand(new EquipmentCommand(), {"equipment"});
    commands.addCommand(new ExitCommand(), {"exit", "quit"});
    commands.addCommand(new HelpCommand(), {"help", "commands"});
    commands.addCommand(new InventoryCommand(), {"inventory", "inv"});
    commands.addCommand(new ItemCommand(), {"item"});
    commands.addCommand(new LocationCommand(), {"location"});
    commands.addCommand(new MoveCommand(), {"move", "go", "travel"});
    commands.addCommand(new QuestCommand(), {"quest"});
    battle_commands.addCommand(new AttackCommand(), {"attack", "use"});
    battle_commands.addCommand(new ExitCommand(), {"exit", "quit"});
    quests.addQuest(Quests::intoTheWild());
    Items::healthPotion()->setQuantity(3);
    Items::energyPotion()->setQuantity(2);
    player.getInventory().addItem(Items::healthPotion());
    player.getInventory().addItem(Items::energyPotion());
}

void Game::start() { //Starts the game cycle
    initialize();
    std::string input;
    player.setLocation(Locations::tyrasSquare());
    while (true) { //Infinite loop, however the exit command escapes this
        input = Util::getString("\n>");
        try {
            if (!input.empty()) {
                commands.process(input);
            }
            player.update();
            quests.update();
        } catch (CommandException &e) {
            Util::print(e.what());
        }
    }
}

void Game::startBattle(Enemy *enemy) {
    battle = new Battle(&player, enemy);
    battle->start();
}