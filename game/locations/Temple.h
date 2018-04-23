#pragma once

#include "../../world/Location.h"
#include "../../TextVenture.h"

class Temple : public Location {

    public:

        Temple() : Location(getGame().getWorld().getArea("Mountain"), "Temple of Elders") {};
        void onEnter() override;

};