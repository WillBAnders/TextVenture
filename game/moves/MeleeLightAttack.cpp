#include "MeleeLightAttack.h"

void MeleeLightAttack::attack(Battler user, Battler target) {
    target.setHealth((int) (target.getHealth() - 2 * user.getStats().melee_attack * (1 - target.getStats().melee_defense) / 100.0));
}