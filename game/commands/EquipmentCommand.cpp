#include "EquipmentCommand.h"

#include "../Game.h"

void EquipmentCommand::process(CommandContext ctx) const throw(CommandException) {
    Game::get().getPlayer().getEquipment().print();
}