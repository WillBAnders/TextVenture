#pragma once

#include "Objective.h"

class InteractObjective : public Objective {

    public:

        InteractObjective(const std::string &description, std::string object) : Objective(std::move(description)), object(std::move(object)) {};
        void check() override;

    private:

        std::string object; // TODO: Reimplement as Interactable type

};