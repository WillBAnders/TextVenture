#pragma once

#include "Entity.h"
#include "../Interactable.h"

/**
 * A NPC (non-playable character) in the word. These characters may not be battled.
 */
class NPC : public Entity, public Interactable {

    public:

        NPC(std::string name, std::string description) : Entity(std::move(name), std::move(description)) {};
        virtual void interact() = 0;

};