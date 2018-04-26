#include "ItemElement.h"

#include "../../data/inventory/Item.h"
#include "../Game.h"

void ItemElement::parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) {
    std::string name = args.next();
    while (args.hasNext()) {
        name += " " + args.next();
    }
    Item *item = Game::get().getPlayer().getInventory().getItem(name);
    if (item == nullptr) {
        throw ParseException("Input " + name + " is not an available item.");
    }
    ctx.putArg(getName(), item);
}