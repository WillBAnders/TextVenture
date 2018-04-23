#include "StringElement.h"

void StringElement::parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) {
    std::string next = args.next();
    if (remaining) {
        while (args.hasNext()) { //Append any remaining arguments
            next += " " + args.next();
        }
    }
    ctx.putArg(getName(), new std::string(next));
}