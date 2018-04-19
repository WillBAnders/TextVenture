#pragma once

#include "../../command/element/IntElement.h"
#include "../../command/element/StringElement.h"
#include "../../command/element/ChoicesElement.h"
#include "../../command/element/SequentialElement.h"
#include "../../world/Compass.h"

class Elements {

    public:

        static StringElement *string(std::string name);
        static IntElement *integer(std::string name, int min, int max);
        static ChoicesElement *choices(std::string name, std::map<std::string, void *> map);
        static SequentialElement *sequential(std::vector<CommandElement *> elements);
        static SequentialElement *empty();
        static IntElement *quantity();
        static ChoicesElement *direction();

};