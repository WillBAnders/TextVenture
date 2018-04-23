#include "LungeAttack.h"

void LungeAttack::attack(Battler user, Battler target) {
    target.setHealth((target.getHealth() - ((user.getStats().getAttack()/6) + (user.getStats().getHealth()/40)) * (1 - (target.getStats().getDefense()))/100.0));
}