#pragma once

#include "../../data/entity/NPC.h"

class VillageGuard : public NPC {

    public:

        VillageGuard();
        void interact() override;

};