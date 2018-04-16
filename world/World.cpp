#include "World.h"

#include <algorithm>

Area *World::getArea(std::string name) const {
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    return areas.count(name) > 0 ? areas.at(name) : nullptr;
}

Location *World::getLocation(std::string name) const {
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    return locations.count(name) > 0 ? locations.at(name) : nullptr;
}

void World::addArea(Area *area) {
    std::string name = area->getName();
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    areas[name] = area;
}

void World::addLocation(Location *location) {
    std::string name = location->getName();
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    locations[name] = location;
}