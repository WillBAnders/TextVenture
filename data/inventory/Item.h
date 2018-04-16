# pragma once

#include <string>
#include <utility>

class Item {

    public:

        Item(std::string name, std::string description, int quantity) : name(std::move(name)), description(std::move(description)), quantity(quantity) {};
        std::string getName() const;
        std::string getDescription() const;
        int getQuantity() const;
        void setQuantity(int quantity);
        void use(); //TODO: Pass context

    private:

        std::string name;
        std::string description;
        int quantity = 0;

};