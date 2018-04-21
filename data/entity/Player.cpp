#include "Player.h"

Location *Player::getLocation() const {
    return location;
}

void Player::setLocation(Location *location) {
    Player::location = location;
    location->onEnter();
}

Inventory &Player::getInventory() {
    return inventory;
}

Equipment &Player::getEquipment() {
    return equipment;
}

void Player::update() {
    stats = Stats();
    stats.add(base_stats);
    stats.add(getEquipment().getWeapon().getStats());
}
