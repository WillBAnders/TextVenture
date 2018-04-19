#pragma once

#include "../Quest.h"
#include "Objective.h"

class CompleteObjective : public Objective
{
public:
  CompleteObjective() {};
  ~CompleteObjective() {};
  void check() override;
  std::string getTitle() override;
  std::string getDescription() override;
};
