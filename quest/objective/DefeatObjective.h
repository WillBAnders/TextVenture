#pragma once

#include "Objective.h"
#include "../../data/entity/Enemy.h"

/**
 * An objective for defeating an enemy.
 */
class DefeatObjective : public Objective {

    public:

        DefeatObjective(const std::string &description, Enemy *enemy, int quantity) : Objective(description), enemy(enemy), quantity(quantity) {};
        void update() override;

    private:

        Enemy *enemy;
        int quantity;

};