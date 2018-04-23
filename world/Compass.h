# pragma once

#include <map>
#include <string>

/**
 * A utility class for working with directions.
 */
class Compass {

    public:

        enum class Direction {NORTH, NORTHEAST, EAST, SOUTHEAST, SOUTH, SOUTHWEST, WEST, NORTHWEST};

        static const std::map<std::string, Direction> &getDirections();
        static std::string getName(Direction direction);
        static Direction getOpposite(Direction direction);

};