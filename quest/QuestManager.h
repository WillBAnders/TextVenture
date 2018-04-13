#pragma once

#include <map>
#include "Quest.h"

class QuestManager
{
public:
  QuestManager(std::map<std::string, Quest> quests);

  Quest getQuest(std::string name) const;
  void check();

private:
  std::map<std::string, Quest> quests;
};