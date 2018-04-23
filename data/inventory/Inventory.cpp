#include "Inventory.h"

#include "../../Util.h"

Item *Inventory::getItem(std::string name) const {
    std::string lower = Util::lowercase(name);
    return items.count(lower) > 0 ? items.at(lower) : nullptr;
}

void Inventory::addItem(Item *item) {
    items[Util::lowercase(item->getName())] = item;
}

void Inventory::print() const { //Prints each items name, quantity, and description
    for (const auto &item : items) {
        Util::print(item.second->getName() + " x" + std::to_string(item.second->getQuantity()) + ": " + item.second->getDescription());
    }
}