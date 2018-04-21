#pragma once

#include "Objective.h"

#include <utility>
#include "../../data/inventory/Item.h"

class CollectObjective : public Objective {

    public:

        CollectObjective(std::string description, Item *item, int quantity);
        ~CollectObjective();
        void check() override;

    private:

        Item *item;
        int quantity;

};
