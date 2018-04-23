#pragma once

#include "../../world/Location.h"
#include "../../TextVenture.h"

class WindmoreOutpost : public Location {

    public:

        WindmoreOutpost() : Location(getGame().getWorld().getArea("Vanguard Forest"), "Windmore Outpost") {};
        void onEnter() override;

};