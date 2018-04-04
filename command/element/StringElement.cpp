#include "StringElement.h"

void StringElement::parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) {
    std::string next = args.next();
    if (remaining) {
        while (args.hasNext()) {
            next += " " + args.next();
        }
    }
    ctx.putArg(getName(), new std::string(next));
}