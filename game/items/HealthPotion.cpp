#include "HealthPotion.h"

#include "../Game.h"

void HealthPotion::consume() {
    Game::get().getPlayer().setHealth(Game::get().getPlayer().getHealth() + 20);
    setQuantity(getQuantity() - 1);
}