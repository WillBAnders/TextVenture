#include "MagicLightAttack.h"

void MagicLightAttack::attack(Battler user, Battler target) {
    target.setHealth((int) (target.getHealth() - 2 * user.getStats().magic_attack * (1 - target.getStats().magic_defense) / 100.0));
}