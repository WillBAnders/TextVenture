#include "Game.h"

#include <iostream>

#include "locations/TownSquare.h"
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
    world.addLocation(new TownSquare());
    commands.addCommand(new ExitCommand(), (std::vector<std::string>) {"exit", "quit"});
    commands.addCommand(new HelpCommand(), "help");
    commands.addCommand(new MoveCommand(), (std::vector<std::string>) {"move", "go"});
    commands.addCommand(new SearchCommand(), (std::vector<std::string>) {"search", "explore"});
    player.setLocation(world.getLocation("Town Square"));
}

void Game::start() {
    std::string input;
    print("Welcome to TextVenture!\n");
    while (true) {
        getline(std::cin, input);
        try {
            commands.process(input);
        } catch (CommandException &e) {
            print(e.what());
        }
    }
}