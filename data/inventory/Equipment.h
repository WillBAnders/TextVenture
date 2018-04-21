#pragma once

#include "../../game/items/GuardsmanSet.h"

class Equipment {

    public:

        Item getWeapon() const;
        void setWeapon(Item weapon);

    private:

        Item weapon = GuardsmanSet();

};