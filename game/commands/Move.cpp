#include "Move.h"
#include "../../world/Direction.h"
#include "../../world/Location.h"
#include "../../TextVenture.h"

void Move::process(CommandContext ctx) const throw(CommandException) {
    Direction direction = *static_cast<Direction *>(ctx.getArg("direction"));
    Location *current = getGame().getPlayer().getLocation();
    Location *neighbor = current->getNeighbor(direction);
    if (neighbor == nullptr) {
        throw CommandException(getName(), "There is not a location in that direction.");
    }
    getGame().getPlayer().setLocation(neighbor);
}