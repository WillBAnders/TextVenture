# pragma once

#include <map>
#include <utility>

#include "Area.h"
#include "Compass.h"

/**
 * A location with the world.
 */
class Location : public Nameable {

        friend class World;

    public:

        Location(std::string name, Area *area, int xCoordinate, int yCoordinate);
        Area *getArea() const;
        int getX();
        int getY();
        Location *getNeighbor(Compass::Direction direction) const;
        virtual void onEnter() = 0;

    private:

        Area *area;
        std::pair<int, int> coordinates = std::pair<int, int>();
        std::map<Compass::Direction, Location *> neighbors = std::map<Compass::Direction, Location *>();

};