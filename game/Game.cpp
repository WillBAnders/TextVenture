#include "Game.h"

#include <iostream>

#include "locations/TownSquare.h"
#include "locations/WindmoreOutpost.h"
#include "locations/Temple.h"
#include "locations/Market.h"
#include "locations/Kitchen.h"
#include "locations/Kalorinian.h"
#include "commands/MoveCommand.h"
#include "quests/IntoTheWild.h"
#include "items/HealthPotion.h"
#include "commands/SearchCommand.h"
#include "commands/HelpCommand.h"
#include "commands/ExitCommand.h"

Player &Game::getPlayer() {
    return player;
}

World &Game::getWorld() {
    return world;
}

CommandManager &Game::getCommands() {
    return commands;
}

QuestManager &Game::getQuests() {
    return quests;
}

void Game::initialize() {
    world.addArea(new Area("Mirestone Village"));
    world.addArea(new Area("Tyras Castle"));
    world.addArea(new Area("Vanguard Forest")); // wilderness
    world.addArea(new Area("Forest"));
    world.addArea(new Area("Darkwood Thicket")); // forest before mountain
    world.addLocation(new TownSquare());
    world.addLocation(new Kitchen());
    world.addLocation(new Market());
    world.addLocation(new WindmoreOutpost());
    world.addLocation(new Kalorinian());
    world.addLocation(new Temple());
    commands.addCommand(new ExitCommand(), (std::vector<std::string>) {"exit", "quit"});
    commands.addCommand(new HelpCommand(), "help");
    commands.addCommand(new MoveCommand(), (std::vector<std::string>) {"move", "go"});
    commands.addCommand(new SearchCommand(), (std::vector<std::string>) {"search", "explore"});
}

void Game::start() {
    std::string input;
    print("Welcome to TextVenture!\n");
    player.setLocation(world.getLocation("Town Square"));
    while (true) {
        getline(std::cin, input);
        try {
            commands.process(input);
        } catch (CommandException &e) {
            print(e.what());
        }
    }
}