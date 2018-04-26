#pragma once

#include <string>

#include "../../data/Nameable.h"
#include "../../data/Describable.h"
#include "../../data/Printable.h"

/**
 * An objective in a quest.
 */
class Objective : public Describable, public Printable {

    public:

        Objective(std::string description) : Describable(std::move(description)) {};
        bool isComplete() const;
        virtual void update() = 0;
        virtual void print() const override = 0;

    protected:

        bool complete = false;

};
