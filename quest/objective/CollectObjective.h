#pragma once

#include "Objective.h"

#include <utility>
#include "../../data/inventory/Item.h"

class CollectObjective : public Objective {

    public:

        CollectObjective(std::string description, Item *item, int quantity) : Objective(std::move(description)), item(item), quantity(quantity) {};
        void check() override;

    private:

        Item *item;
        int quantity;

};

