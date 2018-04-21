#pragma once

#include "../data/entity/Stats.h"

class Battler {

    public:

        explicit Battler(Stats stats) : stats(stats), health(stats.getHealth()), energy(stats.getEnergy()) {};
        int getHealth();
        void setHealth(int health);
        int getEnergy();
        void setEnergy(int energy);
        Stats getStats();

    protected:

        Stats stats;

    private:

        int health;
        int energy;

};