# pragma once

#include <map>

#include "Area.h"
#include "Compass.h"

class Location {

    public:

        Location(Area *area, std::string name) : area(area), name(std::move(name)) {};
        Area *getArea() const;
        std::string getName() const;
        Location *getNeighbor(Compass::Direction direction) const;
        void addNeighbor(Compass::Direction direction, Location *location);

    private:

        Area *area;
        std::string name;
        std::map<Compass::Direction, Location *> neighbors = std::map<Compass::Direction, Location *>();

};