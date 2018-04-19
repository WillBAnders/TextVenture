# pragma once

#include <string>
#include <utility>

class Item {

    public:

        Item(std::string name, std::string description) : name(std::move(name)), description(std::move(description)) {};
        std::string getName() const;
        std::string getDescription() const;
        int getQuantity() const;
        void setQuantity(int quantity);
        virtual void use() = 0; //TODO: Pass context

    private:

        std::string name;
        std::string description;
        int quantity = 0;

};