#include "MoveCommand.h"

#include "../../world/Compass.h"
#include "../../world/Location.h"
#include "../Game.h"

void MoveCommand::process(CommandContext ctx) const throw(CommandException) {
    Compass::Direction direction = *static_cast<Compass::Direction *>(ctx.getArg("direction"));
    Location *current = Game::get().getPlayer().getLocation();
    Location *neighbor = current->getNeighbor(direction);
    if (neighbor == nullptr) {
        throw CommandException("There is not a location in that direction.", getUsage());
    }
    Game::get().getPlayer().setLocation(neighbor);
}