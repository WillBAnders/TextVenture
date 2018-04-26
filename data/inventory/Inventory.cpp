#include "Inventory.h"

#include "../../Util.h"

Item *Inventory::getItem(std::string name) const {
    std::string lower = Util::lowercase(name);
    return items.count(lower) > 0 ? items.at(lower) : nullptr;
}

void Inventory::addItem(Item *item) {
    items[Util::lowercase(item->getName())] = item;
}

void Inventory::print() const { //Prints each item
    for (const auto &item : items) {
        item.second->print();
    }
}