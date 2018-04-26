#include "DefeatObjective.h"

#include "../../Util.h"

void DefeatObjective::update() {
    //TODO
}

void DefeatObjective::print() const {
    Util::print(getDescription() + " (Defeat enemy " + enemy->getName() + " " + std::to_string(progress) + "/" + std::to_string(quantity) + ")");
}