#include "InventoryCommand.h"

#include <iostream>

#include "../../TextVenture.h"
#include "../../data/inventory/Inventory.h"

void InventoryCommand::process(CommandContext ctx) const throw(CommandException) {
    Game::get().getPlayer().getInventory().print();
}