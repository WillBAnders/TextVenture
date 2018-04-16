#pragma once

#include "Quest.h"
#include "Objective.h"

class CompleteObjective : public Objective
{
public:
  CompleteObjective();
  void check() override;

private:
  Quest quest;
}

