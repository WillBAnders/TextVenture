#include "Battler.h"

int Battler::getHealth() const {
    return health;
}

int Battler::getMaxHealth() const {
    return max_health;
}

int Battler::getEnergy() const {
    return energy;
}

int Battler::getMaxEnergy() const {
    return max_energy;
}

void Battler::setHealth(int health) {
    this->health = health;
}

void Battler::setEnergy(int energy) {
    this->energy = energy;
}

void Battler::setMaxEnergy(int max_energy) {
    this->max_energy = max_energy;
}

void Battler::setMaxHealth(int max_health) {
    this->max_health = max_health;
}