# pragma once

class Battler {

    public:

        Battler(int health, int energy) : health(health), energy(energy) {};
        int getHealth() const;
        int getMaxHealth() const;
        int getEnergy() const;
        int getMaxEnergy() const;
        void setHealth(int health);
        void setEnergy (int energy);
        void setMaxHealth (int max_health);
        void setMaxEnergy (int max_energy);

    private:

        int health;
        int max_health;
        int energy;
        int max_energy;

};