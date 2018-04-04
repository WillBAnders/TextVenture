#include "Test.h"

#include <iostream>
#include <cassert>

#include "../command/element/ChoicesElement.h"
#include "../command/element/IntElement.h"
#include "../command/element/SequentialElement.h"
#include "../command/element/StringElement.h"

using namespace std;

void test() {
    testChoicesElement();
    testSequentialElement();
}

void testChoicesElement() {
    enum Direction {NORTH, EAST, SOUTH, WEST};
    ChoicesElement element("direction", {{"north", new Direction(NORTH)}, {"east", new Direction(EAST)}, {"south", new Direction(SOUTH)}, {"west", new Direction(WEST)}});
    CommandContext ctx = parse(element, "SOUTH");
    assert(ctx.hasArg("direction") && *static_cast<Direction *>(ctx.getArg("direction")) == SOUTH);
}

void testSequentialElement() {
    SequentialElement element("person", {new StringElement("name"), new IntElement("age", 1, 100)});
    CommandContext ctx = parse(element, "Austin 42");
    assert(ctx.hasArg("name") && *static_cast<string *>(ctx.getArg("name")) == "Austin");
    assert(ctx.hasArg("age") && *static_cast<int *>(ctx.getArg("age")) == 42);
}

CommandContext parse(CommandElement &element, string command) {
    ParsingContext args(std::move(command));
    CommandContext ctx;
    try {
        element.parse(args, ctx);
    } catch (ParseException &e) {
        cout << "Error parsing argument: " << e.what() << endl;
        assert(false);
    }
    return ctx;
}