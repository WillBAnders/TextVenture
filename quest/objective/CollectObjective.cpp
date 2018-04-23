#include "CollectObjective.h"

void CollectObjective::update() {
    complete |= item->getQuantity() >= quantity;
}