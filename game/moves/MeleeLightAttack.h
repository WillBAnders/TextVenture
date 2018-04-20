#pragma once

#include "../../combat/Move.h"

class MeleeLightAttack : Move {

    public:

        MeleeLightAttack() : Move("Light Attack", "A standard melee attack", 2) {};
        void attack(Battler user, Battler target) override;

};