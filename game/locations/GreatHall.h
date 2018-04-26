#pragma once

#include "../../world/Location.h"
#include "../Game.h"

class GreatHall : public Location {

    public:

        GreatHall() : Location("Great Hall", Game::get().getWorld().getArea("Tyras Castle")) {};
        void onEnter() override;

};