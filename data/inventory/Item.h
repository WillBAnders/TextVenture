# pragma once

#include <string>

#include "../entity/Stats.h"
#include "../Nameable.h"
#include "../Describable.h"
#include "../Printable.h"

/**
 * An item in the game. Note that some items (such as weapons), are not consumable (see Consumable.h)
 */
class Item : public Nameable, public Describable, public Printable {

    public:

        enum class Type{CONSUMABLE, WEAPON, ARMOR};

        Item(std::string name, std::string description, Type type, Stats stats) : Nameable(std::move(name)), Describable(std::move(description)), type(type), stats(stats) {};
        Type getType() const;
        Stats getStats() const;
        int getQuantity() const;
        void setQuantity(int quantity);
        void print() const override;

    private:

        Type type;
        Stats stats;
        int quantity = 0;

};