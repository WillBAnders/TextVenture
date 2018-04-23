#include "MultiObjective.h"

void MultiObjective::update() {
    complete = true;
    for (const auto &objective : objectives) {
        objective->update();
        complete |= objective->isComplete();
    }
}
