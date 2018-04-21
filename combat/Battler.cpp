#include "Battler.h"

#include <algorithm>

Stats Battler::getStats() {
    return stats;
}

int Battler::getHealth() {
    return health;
}

void Battler::setHealth(int health) {
    Battler::health = std::min(health, stats.getHealth());
}

int Battler::getEnergy() {
    return energy;
}

void Battler::setEnergy(int energy) {
    Battler::energy = std::min(energy, stats.getEnergy());
}