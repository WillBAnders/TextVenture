#include "HealthPotion.h"
#include "../../TextVenture.h"

Player &getPlayer();

void HealthPotion::use(){
    //TODO: Set player health
    getPlayer().setHealth(getPlayer().getHealth() + 20);

    if (getPlayer().getMaxHealth() <= getPlayer().getHealth()){
        getPlayer().setHealth(getPlayer().getMaxHealth());
    }

}

void EnergyPotion::use(){
    getPlayer().setEnergy(static_cast<int>((getPlayer().getEnergy() * .5) + getPlayer().getEnergy()));
}

void DamagePotion::use(){
    //TODO: ATTACK DAMAGE
}

void SwordShield::use(){

}