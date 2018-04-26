#include "Event.h"

bool Event::isCanceled() {
    return canceled;
}

void Event::setCanceled(bool canceled) {
    Event::canceled = canceled;
}