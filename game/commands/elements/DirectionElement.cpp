#include "DirectionElement.h"

#include "../../../world/Compass.h"
#include "../../../Util.h"

DirectionElement *DirectionElement::get() {
    static auto *element = new DirectionElement();
    return element;
}

void DirectionElement::parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) {
    std::string next = args.next();
    std::string lower = Util::lowercase(next);
    if (Compass::getDirections().count(lower) == 0) {
        throw ParseException("Input " + next + " is not a direction.");
    }
    ctx.putArg(getName(), new Compass::Direction(Compass::getDirections().at(lower)));
}