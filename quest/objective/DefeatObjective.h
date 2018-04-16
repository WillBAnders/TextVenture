#pragma once

#include "Objective.h"

class DefeatObjective : public Objective {

    public:

        DefeatObjective(const std::string &description, std::string enemy, int quantity) : Objective(description), enemy(std::move(enemy)), quantity(quantity) {};
        void check() override;

    private:

        std::string enemy; // TODO: Reimplement as enemy type instead of std::string
        int quantity;

};