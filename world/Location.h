# pragma once

#include <map>

#include "Area.h"
#include "Direction.h"

class Location {

    public:

        Location(Area *area, std::string name) : area(area), name(std::move(name)) {};
        Area *getArea() const;
        std::string getName() const;
        Location *getNeighbor(Direction direction) const;
        void addNeighbor(Direction direction, Location *location);

    private:

        Area *area;
        std::string name;
        std::map<Direction, Location *> neighbors = std::map<Direction, Location *>();

};