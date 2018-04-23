#pragma once

#include "../../combat/Move.H"

class FuriousStrike : Move {

    public:

        FuriousStrike() : Move("Furious Strike", "Deliver a mighty melee blow", 12) {};
        void attack(Battler user, Battler target) override;

};