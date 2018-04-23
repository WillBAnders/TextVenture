#include "EnergyPotion.h"

#include "../Game.h"

void EnergyPotion::consume() {
    Game::get().getPlayer().setEnergy(Game::get().getPlayer().getStats().getEnergy() / 2);
    setQuantity(getQuantity() - 1);
}