#pragma once

class Stats {

        friend class Player;

    public:

        Stats() : Stats(0, 0, 0, 0) {};
        Stats(int health, int energy, int attack, int defense) : health(health), energy(energy), attack(attack), defense(defense) {};
        int getHealth();
        int getEnergy();
        int getAttack();
        int getDefense();
        void add(Stats stats);

    private:

        int health;
        int energy;
        int attack;
        int defense;

};