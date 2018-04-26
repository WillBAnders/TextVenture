#pragma once

#include "../../combat/Move.h"

class LightAttack : public Move {

    public:

        LightAttack() : Move("Light Attack", "A standard light attack", 2) {};
        void attack(Battler *user, Battler *target) override;

};