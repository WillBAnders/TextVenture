#include "LocationObjective.h"

#include "../../game/Game.h"

void LocationObjective::update() {
    complete |= Game::get().getPlayer().getLocation() == location;
}