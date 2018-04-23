#pragma once

class Stats {

        friend class Player;

    public:

        Stats() : Stats(0, 0, 0, 0, 0) {};
        Stats(int health, int energy, int attack, int defense, int speed) : health(health), energy(energy), attack(attack), defense(defense), speed(speed) {};
        int getHealth();
        int getEnergy();
        int getAttack();
        int getDefense();
        int getSpeed();
        void add(Stats stats);

    private:

        int health;
        int energy;
        int attack;
        int defense;
        int speed;

};