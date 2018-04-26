#pragma once

#include <map>

/**
 * A class containing a variety of utility functions
 */
class Util
{

public:
  static void print(const std::string &message);
  static void printLogo();
  static std::string getString(const std::string &prompt);
  static std::string lowercase(const std::string &string);
  //template <typename T> static T *getEntry(const std::map<std::string, T *> &map, const std::string &key);
};