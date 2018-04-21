#include "Equipment.h"

Item Equipment::getWeapon() const {
    return weapon;
}

void Equipment::setWeapon(Item weapon) {
    Equipment::weapon = weapon;
}