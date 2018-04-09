#ifndef COLLECTOBJECTIVE_H
#define COLLECTOBJECTIVE_H

#include "Objective.h"

class CollectObjective : public Objective
{
private:
  string item; // TODO: Reimplement as a todo type instead of string
  int quantity;

public:
  void check();
}

#endif