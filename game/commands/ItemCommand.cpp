#include "ItemCommand.h"

#include "../Game.h"

void ItemCommand::process(CommandContext ctx) const throw(CommandException) {
    Item *item = Game::get().getPlayer().getInventory().getItem(ctx.getString("item"));
    if (item == nullptr) {
        throw CommandException("You don't have an item by the name " + ctx.getString("item") + ".");
    }
    item->print();
}