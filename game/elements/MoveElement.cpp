#include "MoveElement.h"

#include "../../command/element/StringElement.h"
#include "../Game.h"
#include "../../Util.h"

void MoveElement::parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) {
    std::string name = args.next();
    while (args.hasNext()) {
        name += " " + args.next();
    }
    try {
        ctx.putArg(getName(), Game::get().getPlayer().getMoves().at(Util::lowercase(name)));
    } catch (std::out_of_range &e) {
        throw ParseException("Input " + name + " is not an available move!");
    }
}