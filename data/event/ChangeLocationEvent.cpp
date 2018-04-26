#include "ChangeLocationEvent.h"

Location *ChangeLocationEvent::getPrevLoc() {
    return prev;
}

Location *ChangeLocationEvent::getNextLoc() {
    return next;
}