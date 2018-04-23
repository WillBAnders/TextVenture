#pragma once

#include "Objective.h"
#include "../../data/Interactable.h"

/**
 * An objective for interacting with something.
 */
class InteractObjective : public Objective {

    public:

        InteractObjective(const std::string &description, Interactable *interactable) : Objective(description), interactable(interactable) {};
        void update() override;

    private:

        Interactable *interactable;

};