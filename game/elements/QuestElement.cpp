#include "QuestElement.h"

#include "../Game.h"

void QuestElement::parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) {
    std::string name = args.next();
    while (args.hasNext()) {
        name += " " + args.next();
    }
    Quest *quest = Game::get().getQuests().getQuest(name);
    if (quest == nullptr) {
        throw ParseException("Input " + name + " is not an available quest.");
    }
    ctx.putArg(getName(), quest);
}