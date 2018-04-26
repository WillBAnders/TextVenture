#include "LightAttack.h"

#include "../../Util.h"
#include "../../data/entity/Entity.h"

void LightAttack::attack(Battler *user, Battler *target) {
    int damage = (int) (user->getStats().getAttack() / 3.0 * (1 - target->getStats().getDefense() / 100.0));
    target->setHealth(target->getHealth() - damage);
    user->setEnergy(user->getEnergy() - getEnergy());
}