# pragma once

#include <map>

#include "Area.h"
#include "Compass.h"
#include "../data/event/ChangeLocationEvent.h"

class ChangeLocationEvent;

/**
 * A location with the world.
 */
class Location : public Nameable {

        friend class World;

    public:

        Location(std::string name, Area *area) : Nameable(std::move(name)), area(area) {};
        Area *getArea() const;
        Location *getNeighbor(Compass::Direction direction) const;
        virtual void onEnter(ChangeLocationEvent &event);
        virtual void onLeave(ChangeLocationEvent &event);
        virtual void onSearch();

    private:

        Area *area;
        std::map<Compass::Direction, Location *> neighbors = std::map<Compass::Direction, Location *>();

};