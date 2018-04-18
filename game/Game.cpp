#include "Game.h"
#include "locations/TownSquare.h"
#include "commands/Move.h"
#include "quests/IntoTheWild.h"
#include "items/HealthPotion.h"

Game::Game() {
    player.getInventory().addItem(new HealthPotion());
    world.addArea(new Area("Mirestone Village"));
    world.addLocation(new TownSquare());
    commands.addCommand(new Move(), "move");
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