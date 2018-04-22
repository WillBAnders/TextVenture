#include "HealthPotion.h"
#include "../../TextVenture.h"

void HealthPotion::use(){
    getGame().getPlayer().setHealth(getGame().getPlayer().getHealth() + 20);
}

/*
void EnergyPotion::use(){
    getGame().getPlayer().setEnergy(getGame().getPlayer().getEnergy() + 5);
}

void DamagePotion::use(){
    //TODO: ATTACK DAMAGE
}
*/