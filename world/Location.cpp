#include "Location.h"

Area *Location::getArea() const {
    return area;
}

std::string Location::getName() const {
    return name;
}

Location *Location::getNeighbor(Compass::Direction direction) const {
    return neighbors.count(direction) > 0 ? neighbors.at(direction) : nullptr;
}

void Location::addNeighbor(Compass::Direction direction, Location *location) {
    neighbors[direction] = location;
}