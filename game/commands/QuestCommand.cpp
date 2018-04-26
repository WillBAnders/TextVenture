#include "QuestCommand.h"

#include "../../quest/Quest.h"

void QuestCommand::process(CommandContext ctx) const throw(CommandException) {
    Quest *quest = static_cast<Quest *>(ctx.getArg("quest"));
    quest->print();
}