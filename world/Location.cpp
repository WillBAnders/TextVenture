#include "Location.h"
#include "../Util.h"

Area *Location::getArea() const {
    return area;
}

Location *Location::getNeighbor(Compass::Direction direction) const {
    return neighbors.count(direction) > 0 ? neighbors.at(direction) : nullptr;
}

void Location::onEnter(ChangeLocationEvent &event) {
    Util::print("Entering location: " + getName() + " (" + getArea()->getName() + ")");
}

void Location::onLeave(ChangeLocationEvent &event) {}

void Location::onSearch() {
    Util::print("There doesn't seem to be anything special here...");
}