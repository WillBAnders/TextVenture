#pragma once

#include "../../world/Location.h"
#include "../../TextVenture.h"

class Market : public Location {

    public:

        Market() : Location(getGame().getWorld().getArea("Mirestone Village"), "Market") {};

        void onEnter();

};