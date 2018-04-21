#include "Objective.h"
#include "CollectObjective.h"
#include "../../data/inventory/Item.h"

CollectObjective::CollectObjective(std::string description, Item *item, int quantity)
: Objective(), item(item), quantity(quantity)
{
}

CollectObjective::~CollectObjective()
{
}

void CollectObjective::check()
{
  // TODO
}