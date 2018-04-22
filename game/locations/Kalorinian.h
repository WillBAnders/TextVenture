#pragma once

#include "../../world/Location.h"
#include "../../TextVenture.h"

class Kalorinian : public Location {

    public:

        Kalorinian() : Location(getGame().getWorld().getArea("Mountain"), "Kalorinian Plateau") {};

        void onEnter();

};