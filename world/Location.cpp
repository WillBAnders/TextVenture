#include "Location.h"

Area *Location::getArea() const {
    return area;
}

Location *Location::getNeighbor(Compass::Direction direction) const {
    return neighbors.count(direction) > 0 ? neighbors.at(direction) : nullptr;
}