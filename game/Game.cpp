#include "Game.h"
#include "locations/TownSquare.h"
#include "commands/MoveCommand.h"
#include "quests/IntoTheWild.h"
#include "items/HealthPotion.h"
#include "commands/SearchCommand.h"
#include "commands/HelpCommand.h"

Game::Game() {
    player.getInventory().addItem(new HealthPotion());
    world.addArea(new Area("Mirestone Village"));
    world.addLocation(new TownSquare());
    commands.addCommand(new HelpCommand(), "help");
    commands.addCommand(new MoveCommand(), (std::vector<std::string>) {"move", "go"});
    commands.addCommand(new SearchCommand(), (std::vector<std::string>) {"search", "explore"});
    quests.addQuest(new IntoTheWild());
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

QuestManager &Game::getQuests() {
    return quests;
}