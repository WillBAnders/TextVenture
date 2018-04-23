#pragma once

#include "../../combat/Move.h"

class LungeAttack : public Move {

    public:

        LungeAttack() : Move("Lunge Attack", "A quick lunge at the target dealing damage", 3) {};
        void attack(Battler *user, Battler *target) override;

};