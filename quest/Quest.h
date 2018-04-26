#pragma once

#include <vector>

#include "objective/Objective.h"
#include "../data/Nameable.h"
#include "../data/Describable.h"
#include "../data/Printable.h"

/**
 * A quest containing a series of objectives that must be completed.
 */
class Quest : public Nameable, public Describable, public Printable {

    public:

        Quest(std::string name, std::string description, bool offerable) : Nameable(std::move(name)), Describable(std::move(description)), offerable(offerable) {};
        bool isOffered() const;
        bool isActive() const;
        bool isComplete() const;
        void offer();
        void update();
        void print() const override;

    protected:

        bool offerable;
        std::vector<Objective *> objectives = std::vector<Objective *>();
        int progress = -1;

};