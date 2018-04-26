#pragma once

#include "../../world/Location.h"
#include "../Game.h"

class WindmoreOutpost : public Location {

    public:

        WindmoreOutpost() : Location("Windmore Outpost", Game::get().getWorld().getArea("Vanguard Forest")) {};
        void onEnter() override;

};