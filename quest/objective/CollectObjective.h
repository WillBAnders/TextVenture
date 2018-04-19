#pragma once

#include "Objective.h"

class CollectObjective : public Objective
{
public:
  CollectObjective();
  void check() override;

private:
  std::string item; // TODO: Reimplement as a todo type instead of std::string
  int quantity;
};
