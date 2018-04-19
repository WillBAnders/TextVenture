#pragma once

#include "Objective.h"

class DefeatObjective : public Objective
{
public:
  DefeatObjective();
  void check() override;

private:
  std::string enemy; // TODO: Reimplement as enemy type instead of std::string
  int quantity;
};
