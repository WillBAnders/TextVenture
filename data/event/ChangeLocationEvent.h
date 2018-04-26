#pragma once

#include "Event.h"
#include "../../world/Location.h"

class ChangeLocationEvent : public Event {

    public:

        ChangeLocationEvent(Location *prev, Location *next) : prev(prev), next(next) {};
        Location *getPrevLoc();
        Location *getNextLoc();

    private:

        Location *prev;
        Location *next;

};