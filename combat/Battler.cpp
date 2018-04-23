#include "Battler.h"

Stats Battler::getStats() {
    return stats;
}

int Battler::getHealth() {
    return health;
}

void Battler::setHealth(int health) {
    Battler::health = health <= 0 ? 0 : std::min(health, stats.getHealth()); //Ensures health is in range [0, max_health]
}

int Battler::getEnergy() {
    return energy;
}

void Battler::setEnergy(int energy) {
    Battler::energy = energy <= 0 ? 0 : std::min(energy, stats.getEnergy()); //Ensures energy is in range [0, max_health]
}