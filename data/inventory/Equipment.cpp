#include "Equipment.h"

Item *Equipment::getWeapon() const {
    return weapon;
}

void Equipment::setWeapon(Item *weapon) {
    Equipment::weapon = weapon;
}

Item *Equipment::getArmor() const {
    return armor;
}

void Equipment::setArmor(Item *armor) {
    Equipment::armor = armor;
}