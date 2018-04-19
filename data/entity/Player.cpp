#include "Player.h"

Location *Player::getLocation() const {
    return location;
}

void Player::setLocation(Location *location) {
    Player::location = location;
}

Inventory &Player::getInventory() {
    return inventory;
}