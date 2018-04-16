# pragma once

#include <string>
#include <map>

#include "Location.h"

class World {

    public:

        Area *getArea(std::string name) const;
        Location *getLocation(std::string name) const;
        void addArea(Area *area);
        void addLocation(Location *location);

    private:

        std::map<std::string, Area *> areas = std::map<std::string, Area *>();
        std::map<std::string, Location *> locations = std::map<std::string, Location *>();

};