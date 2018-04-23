# pragma once

#include <map>

#include "Area.h"
#include "Compass.h"

/**
 * A location with the world.
 */
class Location : public Nameable {

        friend class World;

    public:

        Location(std::string name, Area *area) : Nameable(std::move(name)), area(area) {};
        Area *getArea() const;
        Location *getNeighbor(Compass::Direction direction) const;
        virtual void onEnter() = 0;

    private:

        Area *area;
        std::map<Compass::Direction, Location *> neighbors = std::map<Compass::Direction, Location *>();

};