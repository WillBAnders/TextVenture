#pragma once

#include "../../world/Location.h"
#include "../../TextVenture.h"

class Kitchen : public Location {

    public:

        Kitchen() : Location(getGame().getWorld().getArea("Tyras Castle"), "Kitchen") {};
        void onEnter() override;

};