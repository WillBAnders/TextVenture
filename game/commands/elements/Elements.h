#pragma once

#include "../../../command/element/IntElement.h"
#include "../../../command/element/StringElement.h"
#include "../../../command/element/SequentialElement.h"
#include "../../../world/Compass.h"
#include "../../../command/element/OptionalElement.h"

/**
 * A series of factory methods for creating CommandElements
 */
class Elements {

    public:

        static StringElement *string(std::string name, bool remaining);
        static IntElement *integer(std::string name, int min, int max);
        static OptionalElement *optional(CommandElement *delegate, void *def);
        static SequentialElement *sequential(std::vector<CommandElement *> elements);
        static SequentialElement *empty();

};