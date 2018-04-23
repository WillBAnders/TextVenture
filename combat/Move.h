# pragma once

#include <string>
#include <utility>
#include "Battler.h"
#include "../data/Nameable.h"
#include "../data/Describable.h"

/**
 * A move that can be used in battle. This currently supports 'attacks', but should be extended for status move support.
 */
class Move : public Nameable, public Describable {

    public:

        Move(std::string name, std::string description, int energy) : Nameable(std::move(name)), Describable(std::move(description)), energy(energy) {};
        int getEnergy() const;
        virtual void attack(Battler *user, Battler *target) = 0;

    private:

        int energy;

};