#pragma once

#include <map>

#include "Item.h"
#include "../Printable.h"

/**
 * The inventory for the player, which contains a map of items.
 */
class Inventory : public Printable {

    public:

        Item *getItem(std::string name) const;
        void addItem(Item *item);
        void print() const override;

    private:

        std::map<std::string, Item *> items = std::map<std::string, Item *>();

};