#include "FuriousStrike.h"

#include <cmath>

void FuriousStrike::attack(Battler *user, Battler *target) {
    int damage = (int) (((5 + (sqrt(((user->getStats().getAttack()*user->getStats().getAttack())) / 4.0) + 84))) * (sqrt(user->getStats().getHealth()/10.0)) * (1 - target->getStats().getDefense() / 100.0));
    target->setHealth(target->getHealth() - damage);
    user->setEnergy(user->getEnergy() - getEnergy());
}