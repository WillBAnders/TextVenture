#pragma once

#include "Item.h"

/**
 * The equipment an entity can wear.
 */
class Equipment {

    public:

        Item *getWeapon() const;
        void setWeapon(Item *weapon);
        Item *getArmor() const;
        void setArmor(Item *armor);

    private:

        Item *weapon = nullptr;
        Item *armor = nullptr;

};