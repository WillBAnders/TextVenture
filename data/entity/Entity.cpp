#include "Entity.h"

Location *Entity::getLocation() const {
    return location;
}

Equipment &Entity::getEquipment() {
    return equipment;
}