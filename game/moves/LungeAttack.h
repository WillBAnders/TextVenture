#pragma once

#include "../../combat/Move.H"

class LungeAttack : Move {

    public:

        LungeAttack() : Move("Lunge Attack", "A quick lunge at the target dealing damage", 0) {};
        void attack(Battler user, Battler target) override;

};