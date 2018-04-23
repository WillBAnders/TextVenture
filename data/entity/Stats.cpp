#include "Stats.h"

int Stats::getHealth() {
    return health;
}

int Stats::getEnergy() {
    return energy;
}

int Stats::getAttack() {
    return attack;
}

int Stats::getDefense() {
    return defense;
}

int Stats::getSpeed() {
    return speed;
}

void Stats::add(Stats stats) {
    Stats::health += stats.health;
    Stats::energy += stats.energy;
    Stats::attack += stats.attack;
    Stats::defense += stats.defense;
    Stats::speed += stats.speed;
}