#pragma once

#include "Objective.h"

<<<<<<< HEAD
class CollectObjective : public Objective
{
public:
  CollectObjective();
  void check() override;

private:
  std::string item; // TODO: Reimplement as a todo type instead of std::string
  int quantity;
=======
#include <utility>
#include "../../data/inventory/Item.h"

class CollectObjective : public Objective {

    public:

        CollectObjective(std::string description, Item *item, int quantity) : Objective(std::move(description)), item(item), quantity(quantity) {};
        void check() override;

    private:

        Item *item;
        int quantity;

>>>>>>> 6d884e4298d67d5fabf1c99dbe93d7c0219820f1
};
