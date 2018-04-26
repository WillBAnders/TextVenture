#pragma once

#include <vector>

#include "Objective.h"

/**
 * An objective containing multiple sub-objectives at the same time.
 */
class MultiObjective : public Objective {

    public:

        MultiObjective(const std::string &description, std::vector<Objective *> objectives) : Objective(description), objectives(std::move(objectives)) {};
        void update() override;
        void print() const override;

    private:

        std::vector<Objective *> objectives;

};
