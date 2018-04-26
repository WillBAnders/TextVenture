#include "World.h"

#include <algorithm>

#include "../Util.h"

Area *World::getArea(const std::string &name) const {
    std::string lower = Util::lowercase(name);
    return areas.count(lower) > 0 ? areas.at(lower) : nullptr;
}

Location *World::getLocation(const std::string &name) const {
    std::string lower = Util::lowercase(name);
    return locations.count(lower) > 0 ? locations.at(lower) : nullptr;
}

void World::addArea(Area *area) {
    areas[Util::lowercase(area->getName())] = area;
}

void World::addLocation(Location *location) {
    std::string name = Util::lowercase(location->getName());
    locations[name] = location;
    location->getArea()->locations[name] = location;
    getLocation(name);
}

void World::addNeighbors(Location *location, Location *neighbor, Compass::Direction direction) {
    location->neighbors[direction] = neighbor;
    neighbor->neighbors[Compass::getOpposite(direction)] = location;
}