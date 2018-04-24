#include "Player.h"

#include <iostream>

#include "../../command/registry/CommandManager.h"
#include "../../game/moves/LightAttack.h"
#include "../../game/moves/LungeAttack.h"
#include "../../game/moves/FuriousStrike.h"
#include "../../Util.h"
#include "../../game/Game.h"

void Player::setLocation(Location *location) {
    Player::location = location;
    Util::print("Entering location: " + location->getName() + " (" + location->getArea()->getName() + ")");
    location->onEnter();
}

Inventory &Player::getInventory() {
    return inventory;
}

const std::map<std::string, Move *> &Player::getMoves() const {
    return moves;
}

void Player::update() { //Updates the players stats, moves, and so on based on potential gear changes
    stats = Stats();
    stats.add(base_stats);
    stats.add(getEquipment().getWeapon()->getStats());
    if (getEquipment().getArmor() != nullptr) {
        stats.add(getEquipment().getArmor()->getStats());
    }
    moves.clear();
    moves["light attack"] = new LightAttack();
    moves["lunge attack"] = new LungeAttack();
    moves["furious strike"] = new FuriousStrike();
}

void Player::attack(Battler *opponent) { //Prompts the use to select a combat command
    while (true) {
        std::string input;
        getline(std::cin, input);
        try {
            Game::get().getBattleCommands().process(input);
            return;
        } catch (CommandException &e) {
            Util::print(e.what());
        }
    }
}

void Player::showMap() {

    Location *curr = Player::location;
    Location *n = curr->getNeighbor(Compass::Direction::NORTH);
    Location *e = curr->getNeighbor(Compass::Direction::EAST);
    Location *s = curr->getNeighbor(Compass::Direction::SOUTH);
    Location *w = curr->getNeighbor(Compass::Direction::WEST);

    std::cout << "North: " << n->getName() << " (" << n->getArea() << ")";
    std::cout << "East: " << e->getName() << " (" << e->getArea() << ")";
    std::cout << "South: " << s->getName() << " (" << s->getArea() << ")";
    std::cout << "West: " << w->getName() << " (" << w->getArea() << ")";
}