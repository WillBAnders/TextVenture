#include "RangedLightAttack.h"

void RangedLightAttack::attack(Battler user, Battler target) {
    target.setHealth((int) (target.getHealth() - 2 * user.getStats().ranged_attack * (1 - target.getStats().ranged_defense) / 100.0));
}