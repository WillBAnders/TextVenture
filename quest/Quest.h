#pragma once

#include <vector>

#include "objective/Objective.h"

class Quest {

    public:

        Quest(std::string name, std::string description) : name(std::move(name)), description(std::move(description)) {};
        std::string getName() const;
        std::string getDescription() const;
        bool isComplete() const;
        void offer();
        void start();
        void check();

    protected:

        int progress;
        std::vector<Objective> prereqs = std::vector<Objective>();
        std::vector<Objective> objectives = std::vector<Objective>();

    private:

        std::string name;
        std::string description;

};