#pragma once

#include <string>

#include "../Nameable.h"
#include "../Describable.h"
#include "../inventory/Equipment.h"
#include "../../world/Location.h"

/**
 * An entity in the world. All entities have a location and equipment, though is more for consistency than usage.
 */
class Entity : public Nameable, public Describable {

    public:

        Entity(std::string name, std::string description) : Nameable(std::move(name)), Describable(std::move(description)) {};
        Location *getLocation() const;
        Equipment &getEquipment();

    protected:

        Location *location;
        Equipment equipment = Equipment();

};