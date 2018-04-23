#include "HealthPotion.h"
#include "../../TextVenture.h"

// gives +20 health to the Player
void HealthPotion::use(){
    getGame().getPlayer().setHealth(getGame().getPlayer().getHealth() + 20);
}