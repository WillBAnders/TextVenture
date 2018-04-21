#pragma once

#include "Objective.h"

class CompleteObjective : public Objective
{
public:
  CompleteObjective(std::string title, std::string description);
  ~CompleteObjective();
  void check() override;
  std::string getTitle() override;
  std::string getDescription() override;
};
