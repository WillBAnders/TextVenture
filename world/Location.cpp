#include "Location.h"

Area *Location::getArea() const {
    return area;
}

std::string Location::getName() const {
    return name;
}

// returns the neighboring Location given a Direction
Location *Location::getNeighbor(Compass::Direction direction) const {
    return neighbors.count(direction) > 0 ? neighbors.at(direction) : nullptr;
}

// adds a neighbor to its Direction respective to a Location
void Location::addNeighbor(Compass::Direction direction, Location *location) {
    neighbors[direction] = location;
}