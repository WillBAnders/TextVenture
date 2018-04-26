#include "Game.h"

#include <iostream>

#include "locations/TyrasSquare.h"
#include "locations/WindmoreOutpost.h"
#include "locations/Market.h"
#include "locations/MainKitchen.h"
#include "commands/MoveCommand.h"
#include "quests/IntoTheWild.h"
#include "items/HealthPotion.h"
#include "commands/HelpCommand.h"
#include "commands/ExitCommand.h"
#include "commands/AttackCommand.h"
#include "../Util.h"
#include "entities/WildBoar.h"
#include "locations/FrontGrounds.h"
#include "locations/Garden.h"
#include "locations/GreatHall.h"
#include "locations/OHartilyTavern.h"
#include "items/Items.h"
#include "locations/Clearing.h"
#include "locations/Drawbridge.h"
#include "commands/InventoryCommand.h"

Game &Game::get()
{
  static Game game(Util::getString("Enter your name"));
  return game;
}

Player &Game::getPlayer()
{
  return player;
}

World &Game::getWorld()
{
  return world;
}

CommandManager &Game::getCommands()
{
  return commands;
}

CommandManager &Game::getBattleCommands()
{
  return battle_commands;
}

QuestManager &Game::getQuests()
{
  return quests;
}

Battle &Game::getBattle()
{
  return *battle;
}

void Game::initialize()
{ //Initializes areas, locations, commands, items, and the player
  // Main Area's
  world.addArea(new Area("Mirestone Village", "An ancient village created by Elder Gods long ago."));
  world.addArea(new Area("Tyras Castle", "The castle of King Tyras, a cruel and ruthless ruler."));
  world.addArea(new Area("Vanguard Forest", "A forest south of Mirestone home to many plants, animals, and travelers."));

  // Extra Locations
  world.addLocation(new Clearing());
  world.addLocation(new Drawbridge());
  world.addLocation(new FrontGrounds());
  world.addLocation(new Garden());
  world.addLocation(new GreatHall());
  world.addLocation(new MainKitchen());
  world.addLocation(new Market());
  world.addLocation(new OHartilyTavern());
  world.addLocation(new TyrasSquare());
  world.addLocation(new WindmoreOutpost());

  // // Connect locations
  // world.addNeighbors(world.getLocation("Front Grounds"), world.getLocation("Garden"), Compass::Direction::SOUTHEAST);
  // world.addNeighbors(world.getLocation("Front Grounds"), world.getLocation("Great Hall"), Compass::Direction::NORTH);
  // world.addNeighbors(world.getLocation("Great Hall"), world.getLocation("Main Kitchen"), Compass::Direction::WEST);
  // world.addNeighbors(world.getLocation("Market"), world.getLocation("Tyras Square"), Compass::Direction::EAST);
  // world.addNeighbors(world.getLocation("Market"), world.getLocation("O'Hartily Tavern"), Compass::Direction::NORTHWEST);
  // world.addNeighbors(world.getLocation("Tyras Square"), world.getLocation("Windmore Outpost"), Compass::Direction::SOUTH);

  // Add in basic commands
  commands.addCommand(new ExitCommand(), {"exit", "quit"});
  commands.addCommand(new HelpCommand(), {"help", "commands"});
  commands.addCommand(new InventoryCommand(), {"inventory", "inv"});
  commands.addCommand(new MoveCommand(), {"move", "go"});

  // Add battle specific commands
  battle_commands.addCommand(new AttackCommand(), {"attack", "use"});
  battle_commands.addCommand(new ExitCommand(), {"exit", "quit"});

  // Initialize items
  Items::healthPotion()->setQuantity(3);
  Items::energyPotion()->setQuantity(2);
  Items::guardsmanSet()->setQuantity(1);

  // Add items to the player
  player.getInventory().addItem(Items::healthPotion());
  player.getInventory().addItem(Items::energyPotion());
  player.getInventory().addItem(Items::guardsmanSet());
  player.getEquipment().setWeapon(Items::guardsmanSet());

  // Set the players beginning location
  player.setLocation(world.getLocation("Tyras Square"));

  // Update the player with the initialization data
  player.update();
}

void Game::start()
{ //Starts the game cycle
  std::string input;
  Util::print("Welcome, " + player.getName() + ", to TextVenture!");
  Util::print("(Type 'help' for a list of available commands)\n");
  Util::printLogo();
  initialize();
  while (true)
  { //Infinite loop, however the exit command escapes this
    // Collect user input
    getline(std::cin, input);

    // Handle (in)valid input
    try
    {
      commands.process(input);
    }
    catch (CommandException &e)
    {
      Util::print(e.what());
    }
  }
}