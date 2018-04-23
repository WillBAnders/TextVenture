#pragma once

#include <string>
#include <map>
#include "../data/entity/Stats.h"

/**
 * Represents Entity that can participate in battle.
 */
class Battler {

    public:

        explicit Battler(Stats stats) : stats(stats), health(stats.getHealth()), energy(stats.getEnergy()) {};
        int getHealth();
        void setHealth(int health);
        int getEnergy();
        void setEnergy(int energy);
        Stats getStats();
        virtual void attack(Battler *opponent) = 0;

    protected:

        Stats stats;

    private:

        int health;
        int energy;

};