# pragma once

#include "BattleManager.h"

class Battler {

    public:

        Battler(int health, int energy) : health(health), energy(energy) {};
        int getHealth() const;
        int getMaxHealth() const;
        int getEnergy() const;
        int getMaxEnergy() const;

    private:

        int health;
        int max_health;
        int energy;
        int max_energy;

};