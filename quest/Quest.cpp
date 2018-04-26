#include <iostream>
#include "Quest.h"
#include "../Util.h"

bool Quest::isOffered() const {
    return progress != -1;
}

bool Quest::isActive() const {
    return isOffered() && !isComplete();
}

bool Quest::isComplete() const {
    return progress == objectives.size();
}

void Quest::offer() {
    if (offerable) {
        Util::print("You have been offered a quest:");
        print();
        if (Util::getBool("Accept the quest?")) {
            Util::print("You have accepted the quest.");
        } else {
            Util::print("You have declined the quest.");
            return;
        }
    } else {
        Util::print("You have been given a quest:");
        print();
    }
    progress = 0;
    update();
}

void Quest::update() {
    if (isActive()) {
        for (const auto &objective : objectives) {
            objective->update();
            if (!objective->isComplete()) { //Current progress
                return;
            }
            progress++;
        }
        Util::print("Quest complete: " + getName());
    }
}

void Quest::print() const {
    Util::print("Name: " + getName());
    Util::print("Complete: " + std::string((isComplete() ? "true" : "false")));
    if (isActive()) {
        objectives.at(progress)->print();
    }
}