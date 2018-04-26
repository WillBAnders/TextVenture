#include <utility>
#include "Location.h"

Location::Location(std::string name, Area *area, int xCoordinate, int yCoordinate) : Nameable(std::move(name)), area(area) {
  coordinates.first = xCoordinate;
  coordinates.second = yCoordinate;
}

Area *Location::getArea() const {
    return area;
}

int Location::getX() {
  return coordinates.first;
}

int Location::getY() {
  return coordinates.second;
}

Location *Location::getNeighbor(Compass::Direction direction) const {
    return neighbors.count(direction) > 0 ? neighbors.at(direction) : nullptr;
}