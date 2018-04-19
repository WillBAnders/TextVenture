# pragma once

#include <string>
#include <map>

class Compass {

    public:

        enum Direction {NORTH, NORTHEAST, EAST, SOUTHEAST, SOUTH, SOUTHWEST, WEST, NORTHWEST};

        static std::map<std::string, void *> getDirections();
        static std::string getName(Direction direction);
        static Direction getOpposite(Direction direction);

};