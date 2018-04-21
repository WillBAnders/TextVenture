# pragma once

#include <string>
#include <utility>
#include "../entity/Stats.h"

class Item {

    public:

        enum class Type{CONSUMABLE, WEAPON};

        Item(std::string name, std::string description, Type type, Stats stats) : name(std::move(name)), description(std::move(description)), stats(stats) {};
        std::string getName() const;
        std::string getDescription() const;
        Type getType() const;
        Stats getStats() const;
        int getQuantity() const;
        void setQuantity(int quantity);

    private:

        std::string name;
        std::string description;
        Type type;
        Stats stats;
        int quantity = 0;

};