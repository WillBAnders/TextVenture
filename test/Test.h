# pragma once

#include "../command/element/CommandElement.h"

void test();
void testChoicesElement();
void testSequentialElement();
CommandContext parse(CommandElement &element, std::string command);