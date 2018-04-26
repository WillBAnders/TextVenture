#include "MoveCommand.h"

#include "../../world/Compass.h"
#include "../../world/Location.h"
#include "../Game.h"
#include <iostream>

void MoveCommand::process(CommandContext ctx) const throw(CommandException) {
    Compass::Direction direction = *static_cast<Compass::Direction *>(ctx.getArg("direction"));
    Location *current = Game::get().getPlayer().getLocation();
    // Location *neighbor = current->getNeighbor(direction);

    Location *target;
    switch(direction) {
      case Compass::Direction::NORTH:
        target = Game::get().getWorld().getLocationByCoords(current->getX(), current->getY()+1);
        break;
      case Compass::Direction::SOUTH:
        target = Game::get().getWorld().getLocationByCoords(current->getX(), current->getY()-1);
        break;
      case Compass::Direction::EAST:
        target = Game::get().getWorld().getLocationByCoords(current->getX()+1, current->getY());
        break;
      case Compass::Direction::WEST:
        target = Game::get().getWorld().getLocationByCoords(current->getX()-1, current->getY());
        break;
      default:
        target = nullptr;
    }

    if (target == nullptr) {
        throw CommandException(getName(), "There is not a location in that direction.");
    }
    Game::get().getPlayer().setLocation(target);
}