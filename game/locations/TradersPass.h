#pragma once


#include "../../world/Location.h"
#include "../Game.h"

class TradersPass : public Location {

    public:

        TradersPass() : Location("Front Grounds", Game::get().getWorld().getArea("Vanguard Forest")) {};
        void onEnter() override;

};