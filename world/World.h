# pragma once

#include <map>
#include <string>

#include "Location.h"

/**
 * The world itself, containing all areas and locations.
 */
class World {

    public:

        Area *getArea(const std::string &name) const;
        Location *getLocation(const std::string &name) const;
        Location *getLocationByCoords(int x, int y) const;
        void addArea(Area *area);
        void addLocation(Location *location);
        void addNeighbors(Location *location, Location *neighbor, Compass::Direction direction);

    private:

        std::map<std::string, Area *> areas = std::map<std::string, Area *>();
        std::map<std::string, Location *> locations = std::map<std::string, Location *>();

};