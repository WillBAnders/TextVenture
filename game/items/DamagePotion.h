#pragma once

#include "../../data/inventory/Item.h"



class DamagePotion : public Item {

public:

    DamagePotion() : Item("Elixir of Might", "Increases damage done by 10% for the duration of the fight", Type::CONSUMABLE, Stats(0,0,0,0)) {};
    void use();

};
