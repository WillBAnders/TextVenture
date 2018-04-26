#pragma once


#include "../../world/Location.h"
#include "../Game.h"

class Clearing : public Location {

    public:

        Clearing() : Location("Clearing", Game::get().getWorld().getArea("Vanguard Forest")) {};
        void onEnter() override;

};