#include "MultiObjective.h"

void MultiObjective::update() {
    complete = true;
    for (const auto &objective : objectives) {
        objective->update();
        complete |= objective->isComplete();
    }
}

void MultiObjective::print() const {
    for (const auto &objective : objectives) {
        objective->print();
    }
}