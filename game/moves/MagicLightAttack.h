#pragma once

#include "../../combat/Move.h"

class MagicLightAttack : Move {

    public:

        MagicLightAttack() : Move("Light Attack", "A standard magic attack", 2) {};
        void attack(Battler user, Battler target) override;

};