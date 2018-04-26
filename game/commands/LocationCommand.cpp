#include "LocationCommand.h"

#include "../Game.h"
#include "../../Util.h"

void LocationCommand::process(CommandContext ctx) const throw(CommandException) {
    Location *location = ctx.hasArg("location") ? static_cast<Location *>(ctx.getArg("location")) : Game::get().getPlayer().getLocation();
    Util::print(location->getName() + " (" + location->getArea()->getName() + ")");
    Util::print("Neighbors:");
    for (const auto &direction : Compass::getDirections()) {
        Location *neighbor = location->getNeighbor(direction.second);
        if (neighbor != nullptr) {
            Util::print(Compass::getName(direction.second) + ": " + neighbor->getName());
        }
    }
}