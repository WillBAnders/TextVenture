#include "Item.h"
#include "../../Util.h"

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

void Item::print() const {
    Util::print(getName() + " x" + std::to_string(getQuantity()) + ": " + getDescription());
}