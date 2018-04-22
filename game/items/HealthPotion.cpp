#include "HealthPotion.h"
#include "../../TextVenture.h"

// gives +20 health to the Player
void HealthPotion::use(){
    getGame().getPlayer().setHealth(getGame().getPlayer().getHealth() + 20);
}


// gives +5 energy to the Player
void EnergyPotion::use(){
    getGame().getPlayer().setEnergy(getGame().getPlayer().getEnergy() + 5);
}

void DamagePotion::use(){
    //TODO: ATTACK DAMAGE
}
