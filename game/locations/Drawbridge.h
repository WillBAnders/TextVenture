#pragma once

#include "../../world/Location.h"
#include "../Game.h"

class Drawbridge : public Location {

    public:

        Drawbridge() : Location("Drawbridge", Game::get().getWorld().getArea("Mirestone Village")) {};

};