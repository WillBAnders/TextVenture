#include "InventoryCommand.h"

#include <iostream>

#include "../../TextVenture.h"
#include "../../data/inventory/Inventory.h"
#include "../../Util.h"

void InventoryCommand::process(CommandContext ctx) const throw(CommandException) {
    Util::print("Your Inventory: ");
    Game::get().getPlayer().getInventory().print();
}