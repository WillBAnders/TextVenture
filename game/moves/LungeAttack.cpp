#include "LungeAttack.h"

void LungeAttack::attack(Battler *user, Battler *target) {
    int damage = (int) (((user->getStats().getAttack() / 2.0) + (user->getStats().getHealth() / 40.0)) * (1 - target->getStats().getDefense() / 100.0));
    target->setHealth(target->getHealth() - damage);
    user->setEnergy(user->getEnergy() - getEnergy());
}