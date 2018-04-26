#include "EquipCommand.h"

#include "../../data/inventory/Item.h"
#include "../Game.h"
#include "../../Util.h"

void EquipCommand::process(CommandContext ctx) const throw(CommandException) {
    Item *item = static_cast<Item *>(ctx.getArg("item"));
    if (item->getType() == Item::Type::WEAPON) {
        Game::get().getPlayer().getEquipment().setWeapon(item);
        Util::print("Equipped " + item->getName() + " as your weapon.");
    } else if (item->getType() == Item::Type::ARMOR) {
        Game::get().getPlayer().getEquipment().setArmor(item);
        Util::print("Equipped " + item->getName() + " as your armor.");
    } else {
        throw CommandException("The item " + item->getName() + " is not equipable!");
    }
}