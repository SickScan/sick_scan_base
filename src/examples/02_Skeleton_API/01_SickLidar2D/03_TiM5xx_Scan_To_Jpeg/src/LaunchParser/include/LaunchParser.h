#ifndef LAUNCHPARSER_H
#define LAUNCHPARSER_H

#include <algorithm>  // for std::min

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <cstdio>
#include <cstdlib>
#include <iostream>

#include <map>
#include <string>
#include <vector>
#include "tinystr.h"
#include "tinyxml.h"


class LaunchParser {
 public:
  LaunchParser(){};
  bool parseFile(std::string launchFileFullName,
                 std::vector<std::string>& nameVec,
                 std::vector<std::string>& typeVec,
                 std::vector<std::string>& valVec);
  static bool getTagVal(std::string tagVal, std::string& tag, std::string& val);
};

#endif  // LAUNCHPARSER_H
