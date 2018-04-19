#include "MoveCommand.h"
#include "../../world/Compass.h"
#include "../../world/Location.h"
#include "../../TextVenture.h"

void MoveCommand::process(CommandContext ctx) const throw(CommandException) {
    Compass::Direction direction = *static_cast<Compass::Direction *>(ctx.getArg("direction"));
    Location *current = getGame().getPlayer().getLocation();
    Location *neighbor = current->getNeighbor(direction);
    if (neighbor == nullptr) {
        throw CommandException(getName(), "There is not a location in that direction.");
    }
    getGame().getPlayer().setLocation(neighbor);
}