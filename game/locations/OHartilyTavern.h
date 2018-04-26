#pragma once

#include "../../world/Location.h"
#include "../Game.h"

class OHartilyTavern : public Location {

    public:

        OHartilyTavern() : Location("O'Hartily Tavern", Game::get().getWorld().getArea("Mirestone Village")) {};

};