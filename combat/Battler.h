#pragma once

class Battler {

    public:

        struct Stats {
            int max_health;
            int max_energy;
            int melee_attack;
            int ranged_attack;
            int magic_attack;
            int melee_defense;
            int ranged_defense;
            int magic_defense;
        };

        explicit Battler(Stats stats) : stats(stats), health(stats.max_health), energy(stats.max_energy) {};
        int getHealth();
        void setHealth(int health);
        int getEnergy();
        void setEnergy(int energy);
        const Stats getStats();

    protected:

        Stats &getMutableStats();

    private:

        Stats stats;
        int health;
        int energy;

};