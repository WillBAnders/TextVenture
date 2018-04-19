#pragma once

#include <vector>
#include "Objective.h"

class MultiObjective : public Objective
{
public:
  MultiObjective();
  void check() override;

private:
  std::vector<Objective> objectives;
};
