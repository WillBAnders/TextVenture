#pragma once

#include "../../world/Location.h"
#include "../Game.h"

class MainKitchen : public Location {

    public:

        MainKitchen() : Location("Main Kitchen", Game::get().getWorld().getArea("Tyras Castle"), 6, 0) {};
        void onEnter() override;

};