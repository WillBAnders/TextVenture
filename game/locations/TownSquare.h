#pragma once

#include "../../world/Location.h"
#include "../../TextVenture.h"

class TownSquare : public Location {

    public:

        TownSquare() : Location(getGame().getWorld().getArea("Mirestone Village"), "Town Square") {};
        void onEnter() override;

};