#include "Battler.h"

#include <algorithm>

const Battler::Stats Battler::getStats() {
    return stats;
}

int Battler::getHealth() {
    return health;
}

void Battler::setHealth(int health) {
    Battler::health = std::min(health, stats.max_health);
}

int Battler::getEnergy() {
    return energy;
}

void Battler::setEnergy(int energy) {
    Battler::energy = std::min(energy, stats.max_energy);
}

Battler::Stats &Battler::getMutableStats() {
    return stats;
}