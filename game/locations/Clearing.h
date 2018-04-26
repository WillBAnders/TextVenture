#pragma once


#include "../../world/Location.h"
#include "../Game.h"

class Clearing : public Location {

    public:

        Clearing() : Location("Clearing", Game::get().getWorld().getArea("Vanguard Forest"), 1, 0) {};
        void onEnter() override;

};