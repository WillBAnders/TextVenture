#pragma once
#include <string>

class Objective
{
public:
  Objective() {};
  virtual ~Objective() {};
  virtual void check() = 0;
  virtual std::string getTitle() = 0;
  virtual std::string getDescription() = 0;

protected:
  std::string title;
  std::string description;
};
