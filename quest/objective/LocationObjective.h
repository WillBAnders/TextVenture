#pragma once

#include <string>
#include <utility>
#include "Objective.h"
#include "../../world/Location.h"

class LocationObjective : public Objective {

    public:

        LocationObjective(std::string description, Location *location) : Objective(std::move(description)), location(location) {};
        void check() override;

    private:

        Location *location;

};