#include <iostream>
#include "OptionalElement.h"

void OptionalElement::parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) {
    try {
        delegate->parse(args, ctx);
    } catch (ParseException &e) {
        if (def != nullptr) {
            ctx.putArg(getName(), def);
        }
    }
}