# pragma once

#include <string>
#include <utility>

class Move {

        enum Type {Attack, Status};

    public:

        Move(Type type, std::string name, std::string description) : type(type), name(std::move(name)), description(std::move(description)) {};
        Type getType();
        std::string getName();
        std::string getDescription();
        virtual void use() = 0; //TODO: Pass battle context

    private:

        Type type;
        std::string name;
        std::string description;

};