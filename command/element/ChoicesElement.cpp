#include "ChoicesElement.h"

#include <algorithm>

void ChoicesElement::parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) {
    std::string next = args.next();
    try {
        std::transform(next.begin(), next.end(), next.begin(), ::tolower);
        ctx.putArg(getName(), map.at(next));
    } catch (std::out_of_range &e) {
        throw ParseException("Input " + next + " is not an available choice.");
    }
}