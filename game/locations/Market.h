#pragma once

#include "../../world/Location.h"
#include "../Game.h"

class Market : public Location {

    public:

        Market() : Location("Market", Game::get().getWorld().getArea("Mirestone Village")) {};

};