#include "Items.h"

HealthPotion *Items::healthPotion() {
    static auto HEALTH_POTION = new HealthPotion();
    return HEALTH_POTION;
}

EnergyPotion *Items::energyPotion() {
    static auto ENERGY_POTION = new EnergyPotion();
    return ENERGY_POTION;
}

Item *Items::guardsmanSet() {
    static auto *GUARDSMAN_SET = new Item("Guardsman Sword & Shield", "A sword and shield used by the guards of Tyras Castle", Item::Type::WEAPON, Stats(20, 10, 10, 5, 0));
    return GUARDSMAN_SET;
}

Item *Items::rangerSet() {
    static auto *RANGER_SET = new Item("Ranger Bow & Quiver", "A bow and quiver used by the Rangers of Vanguard Forest.", Item::Type::WEAPON, Stats(15, 10, 15, 0, 5));
    return RANGER_SET;
}

Item *Items::pheonixSet() {
    static auto *PHEONIX_SET = new Item("Pheonix Staff & Spellbook", "A staff and spellbook used by wandering mages from faraway lands.", Item::Type::WEAPON, Stats(10, 25, 20, -5, 10));
    return PHEONIX_SET;
}