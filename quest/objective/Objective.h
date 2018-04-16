#pragma once
#include <string>

class Objective
{
public:
  virtual void check();

protected:
  std::string name;
  std::string description;
};

