#include "RangedLightAttack.h"

void RangedLightAttack::attack(Battler user, Battler target) {
    target.setHealth((int) (target.getHealth() - 2 * user.getStats().getAttack() * (1 - target.getStats().getDefense()) / 100.0));
}