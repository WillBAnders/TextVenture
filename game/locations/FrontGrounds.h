#pragma once

#include "../../world/Location.h"
#include "../Game.h"

class FrontGrounds : public Location {

    public:

        FrontGrounds() : Location("Front Grounds", Game::get().getWorld().getArea("Tyras Castle"), 3, 0) {};
        void onEnter() override;

};