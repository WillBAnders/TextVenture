# pragma once

#include <string>
#include <utility>
#include "Battler.h"

class Move {

    public:

        Move(std::string name, std::string description, int energy) : name(std::move(name)), description(std::move(description)), energy(energy) {};
        std::string getName();
        std::string getDescription();
        int getEnergy();
        virtual void attack(Battler user, Battler target) = 0;

    private:

        std::string name;
        std::string description;
        int energy;

};