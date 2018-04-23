#include "Stats.h"

int Stats::getHealth() const {
    return health;
}

int Stats::getEnergy() const {
    return energy;
}

int Stats::getAttack() const {
    return attack;
}

int Stats::getDefense() const {
    return defense;
}

int Stats::getSpeed() const {
    return speed;
}

void Stats::add(Stats stats) {
    Stats::health += stats.health;
    Stats::energy += stats.energy;
    Stats::attack += stats.attack;
    Stats::defense += stats.defense;
    Stats::speed += stats.speed;
}