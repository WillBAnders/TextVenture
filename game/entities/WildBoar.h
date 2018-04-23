#pragma once

#include "../../data/entity/Enemy.h"

class WildBoar : public Enemy {

    public:

        WildBoar() : Enemy("Wild Boar", "While aggressive, a wild boar shouldn't be much of a threat alone.", Stats(30, 15, 10, 5, 5)) {};
        void attack(Battler *opponent) override;

};