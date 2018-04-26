#pragma once

#include "../../world/Location.h"
#include "../Game.h"

class Garden : public Location {

    public:

        Garden() : Location("Garden", Game::get().getWorld().getArea("Tyras Castle"), 4, 0) {};
        void onEnter() override;

};