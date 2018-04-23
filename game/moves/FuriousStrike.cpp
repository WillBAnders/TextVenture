#include "FuriousStrike.h"
#include<math.h>

void FuriousStrike::attack(Battler user, Battler target) {
    target.setHealth((target.getHealth()) - ((5 + (sqrt(((user.getStats().getAttack()*user.getStats().getAttack()))/4) + 84))) * (sqrt(user.getStats().getHealth()/10)) * (1 - (target.getStats().getDefense()/100)));
}