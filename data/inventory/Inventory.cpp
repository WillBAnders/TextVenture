#include "Inventory.h"

#include <algorithm>

Item *Inventory::getItem(std::string name) const {
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    return items.count(name) > 0 ? items.at(name) : nullptr;
}

void Inventory::addItem(Item *item) {
    std::string name = item->getName();
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    items[name] = item;
}