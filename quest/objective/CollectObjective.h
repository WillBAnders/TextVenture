#pragma once

#include "Objective.h"
#include "../../data/inventory/Item.h"

/**
 * An objective for collecting items.
 */
class CollectObjective : public Objective {

    public:

        CollectObjective(const std::string &description, Item *item, int quantity) : Objective(description), item(item), quantity(quantity) {};
        void update() override;

    private:

        Item *item;
        int quantity;

};
