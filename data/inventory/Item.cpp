#include "Item.h"

std::string Item::getName() const {
    return name;
}

std::string Item::getDescription() const {
    return description;
}

Item::Type Item::getType() const {
    return type;
}

Stats Item::getStats() const {
    return stats;
}

int Item::getQuantity() const {
    return quantity;
}

void Item::setQuantity(int quantity) {
    Item::quantity = quantity;
}