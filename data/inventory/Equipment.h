#pragma once

#include "Item.h"
#include "../Printable.h"

/**
 * The equipment an entity can wear.
 */
class Equipment : public Printable {

    public:

        Item *getWeapon() const;
        void setWeapon(Item *weapon);
        Item *getArmor() const;
        void setArmor(Item *armor);
        void print() const override;

    private:

        Item *weapon = nullptr;
        Item *armor = nullptr;

};