#pragma once

#include <vector>

#include "Objective.h"

class MultiObjective : public Objective {

    public:

        MultiObjective(const std::string &description, std::vector<Objective> objectives) : Objective(description), objectives(std::move(objectives)) {};
        void check() override;

    private:

        std::vector<Objective> objectives;

};