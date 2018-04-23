#pragma once

#include "../../combat/Move.h"

class FuriousStrike : public Move {

    public:

        FuriousStrike() : Move("Furious Strike", "Deliver a mighty melee blow", 12) {};
        void attack(Battler *user, Battler *target) override;

};