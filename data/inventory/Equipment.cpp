#include "Equipment.h"
#include "../../Util.h"

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

void Equipment::print() const {
    Util::print("Weapon: " + (weapon != nullptr ? "" + weapon->getName() : "None"), 30);
    Util::print("Armor: " + (armor != nullptr ? "" + armor->getName() : "None"), 30);
}