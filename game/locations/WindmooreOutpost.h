#pragma once

#include "../../world/Location.h"
#include "../../TextVenture.h"

class WindmooreOutpost : public Location {

    public:

        WindmooreOutpost() : Location(getGame().getWorld().getArea("Vanguard Forest"), "Windmoore Outpost") {};

        void onEnter();

};