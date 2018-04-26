#pragma once

#include "../../command/element/IntElement.h"
#include "../../command/element/OptionalElement.h"
#include "../../command/element/StringElement.h"
#include "../../command/element/SequentialElement.h"
#include "../../world/Compass.h"
#include "DirectionElement.h"
#include "LocationElement.h"
#include "MoveElement.h"
#include "QuestElement.h"

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
        static DirectionElement *direction();
        static LocationElement *location();
        static MoveElement *move();
        static QuestElement *quest();

};