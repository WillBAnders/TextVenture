#include "CollectObjective.h"

#include "../../Util.h"

void CollectObjective::update() {
    complete |= item->getQuantity() >= quantity;
}

void CollectObjective::print() const {
    Util::print(getDescription() + " (Collect item " + item->getName() + " " + std::to_string(progress) + "/" + std::to_string(quantity) + ")");
}
