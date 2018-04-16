#include "MultiObjective.h"

void MultiObjective::check() {
    for (auto &objective : objectives) {
        objective.check();
    }
}