#pragma once

#include "../../world/Location.h"
#include "../Game.h"

class TyrasSquare : public Location {

    public:

        TyrasSquare() : Location("Tyras Square", Game::get().getWorld().getArea("Mirestone Village")) {};
        void onEnter(ChangeLocationEvent &event) override;
        void onLeave(ChangeLocationEvent &event) override;

};