#pragma once

#include <map>
#include <string>

#include "../data/Nameable.h"
#include "../data/Describable.h"

class Location; //Circular dependency, so forward definition

/**
 * An area in the world which contains multiple locations.
 */
class Area : public Nameable, public Describable {

        friend class World;

    public:

        explicit Area(std::string name, std::string description) : Nameable(std::move(name)), Describable(std::move(description)) {};
        Location *getLocation(std::string name) const;
        const std::map<std::string, Location *> getLocations() const;

    private:

        std::map<std::string, Location *> locations;

};