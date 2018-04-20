#pragma once

#include "../../combat/Move.h"

class RangedLightAttack : Move {

    public:

        RangedLightAttack() : Move("Light Attack", "A standard ranged attack", 2) {};
        void attack(Battler user, Battler target) override;

};