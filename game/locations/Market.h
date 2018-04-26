#pragma once

#include "../../world/Location.h"
#include "../Game.h"

class Market : public Location {

    public:

        Market() : Location("Market", Game::get().getWorld().getArea("Mirestone Village"), 0, 1) {};
        void onEnter() override;

};