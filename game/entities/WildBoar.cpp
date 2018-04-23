#include "WildBoar.h"
#include "../moves/LightAttack.h"
#include "../../Util.h"

void WildBoar::attack(Battler *opponent) {
    static LightAttack attack = LightAttack();
    int health = opponent->getHealth();
    attack.attack(this, opponent);
    Util::print("The wild boar used Light Attack and dealt " + std::to_string(health - opponent->getHealth()) + " damage! (-2 energy)");
}