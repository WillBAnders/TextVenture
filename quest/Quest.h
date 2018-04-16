#pragma once

#include <vector>

#include "objective/Objective.h"

class Quest {

    public:

        Quest(std::string name, std::string description, std::vector<Objective> prereqs, std::vector<Objective> objectives) : name(std::move(name)), description(std::move(description)), prereqs(std::move(prereqs)), objectives(std::move(objectives)) {};
        std::string getName() const;
        std::string getDescription() const;
        bool isComplete() const;
        void offer();
        void start();
        void check();

    private:

        std::string name;
        std::string description;
        std::vector<Objective> prereqs;
        std::vector<Objective> objectives;
        int progress;

};