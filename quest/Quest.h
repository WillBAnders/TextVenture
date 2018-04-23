#pragma once

#include <vector>

#include "objective/Objective.h"
#include "../data/Nameable.h"
#include "../data/Describable.h"

/**
 * A quest containing a series of objectives that must be completed.
 */
class Quest : public Nameable, public Describable {

    public:

        Quest(std::string name, std::string description) : Nameable(std::move(name)), Describable(std::move(description)), objectives(std::move(objectives)) {};
        bool isComplete() const;
        void update();

    protected:

        std::vector<Objective *> objectives = std::vector<Objective *>();
        int progress = -1;

};