#include <iostream>
#include "Quest.h"
#include "../Util.h"

void Quest::update() {
    for (const auto &objective : objectives) {
        objective->update();
        if (!objective->isComplete()) { //Current progress
            break;
        }
        progress++;
    }
    Util::print("Quest complete: " + getName());
}

bool Quest::isComplete() const {
    return progress == objectives.size();
}