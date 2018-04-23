#pragma once

/**
 * The stats of an entity that may battle.
 */
class Stats {

    public:

        Stats() : Stats(0, 0, 0, 0, 0) {};
        Stats(int health, int energy, int attack, int defense, int speed) : health(health), energy(energy), attack(attack), defense(defense), speed(speed) {};
        int getHealth() const;
        int getEnergy() const;
        int getAttack() const;
        int getDefense() const;
        int getSpeed() const;
        void add(Stats stats);

    private:

        int health;
        int energy;
        int attack;
        int defense;
        int speed;

};