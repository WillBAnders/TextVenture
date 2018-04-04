#include "SequentialElement.h"

void SequentialElement::parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) {
    for (const auto &element : elements) {
        element->parse(args, ctx);
    }
}