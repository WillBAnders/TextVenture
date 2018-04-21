#pragma once

#include <map>
#include "Quest.h"

class QuestManager
{
public:
  QuestManager();

  Quest getQuest(std::string name) const;
  void addQuest(Quest *q);
  void check();

private:
  std::map<std::string, Quest> quests;
};