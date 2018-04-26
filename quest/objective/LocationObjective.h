#pragma once

#include <string>
#include <utility>
#include "Objective.h"
#include "../../world/Location.h"

/**
 * An objective for entering a location.
 */
class LocationObjective : public Objective {

    public:

        LocationObjective(const std::string &description, Location *location) : Objective(description), location(location) {};
        void update();
        void print() const override;

    private:

        Location *location;

};