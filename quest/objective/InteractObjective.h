#pragma once

#include "Objective.h"

class InteractObjective : public Objective
{
public:
  InteractObjective();
  void check() override;

private:
  std::string object; // TODO: Reimplement as Interactable type
};

