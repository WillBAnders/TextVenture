# pragma once

#include <string>
#include <map>

class Direction {

        enum {NORTH, NORTHEAST, EAST, SOUTHEAST, SOUTH, SOUTHWEST, WEST, NORTHWEST};

    public:

        static const std::map<std::string, Direction> direction = {
                {"north", NORTH},
                {"northeast", NORTHEAST},
                {"east", EAST},
                {"southeast", SOUTHEAST},
                {"south", SOUTH},
                {"southwest", SOUTHWEST},
                {"west", WEST},
                {"northwest", NORTHWEST}};

};