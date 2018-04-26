#pragma once

#include "../../world/Location.h"
#include "../Game.h"

class NorthGuardhouse : public Location {

    public:

        NorthGuardhouse() : Location("North Guardhouse", Game::get().getWorld().getArea("Mirestone Village")) {};
        void onEnter(ChangeLocationEvent &event) override;

};