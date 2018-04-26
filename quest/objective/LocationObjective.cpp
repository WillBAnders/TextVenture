#include "LocationObjective.h"

#include "../../game/Game.h"
#include "../../Util.h"

void LocationObjective::update() {
    complete |= Game::get().getPlayer().getLocation() == location;
}

void LocationObjective::print() const {
    Util::print(getDescription() + " (Enter location " + location->getName() + ")");
}