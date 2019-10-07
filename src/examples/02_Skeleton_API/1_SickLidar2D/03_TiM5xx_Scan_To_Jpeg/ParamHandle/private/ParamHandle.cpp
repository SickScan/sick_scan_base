#pragma warning(disable : 4996)
#pragma warning(disable : 4267)

#define _USE_MATH_DEFINES
#include <math.h>
#include <map>
#include <string>

#include "../include/ParamHandle.h"

std::string unknownNode = "????";

class MapStringSingleton {
 public:
  // Some accessor functions for the class, itself
  bool hasTag(std::string tag) {
    std::map<std::string, std::string>::const_iterator find =
        mMapString.find(tag);
    if (find != mMapString.end()) {
      return (true);
    } else {
      return (false);
    }
  }
  std::string getVal(std::string tag) const {
    std::string s;
    std::map<std::string, std::string>::const_iterator find =
        mMapString.find(tag);
    if (find != mMapString.end()) {
      // If we find it return the value.
      return find->second;
    }
    return ("");
  }

  void setVal(std::string tag, std::string val) { mMapString[tag] = val; }

  // The magic function, which allows access to the class from anywhere
  // To get the value of the instance of the class, call:
  //     StringSingleton::Instance().GetString();
  static MapStringSingleton& Instance() {
    // This line only runs once, thus creating the only instance in existence
    static MapStringSingleton* instance = new MapStringSingleton;
    // dereferencing the variable here, saves the caller from having to use
    // the arrow operator, and removes temptation to try and delete the
    // returned instance.
    return *instance;  // always returns the same instance
  }

 private:
  // We need to make some given functions private to finish the definition of
  // the singleton
  MapStringSingleton() {
  }  // default constructor available only to members or friends of this class

  // Note that the next two functions are not given bodies, thus any attempt
  // to call them implicitly will return as compiler errors. This prevents
  // accidental copying of the only instance of the class.
  MapStringSingleton(
      const MapStringSingleton& old);  // disallow copy constructor
  const MapStringSingleton& operator=(
      const MapStringSingleton& old);  // disallow assignment operator

  // Note that although this should be allowed,
  // some compilers may not implement private destructors
  // This prevents others from deleting our one single instance, which was
  // otherwise created on the heap
  ~MapStringSingleton() {}

 private:  // private data for an instance of this class
  std::map<std::string, std::string> mMapString;
};

void ParamHandle::setParam(const std::string& key, int d) const {
  char szTmp[255];
  MapStringSingleton& single = MapStringSingleton::Instance();
  sprintf(szTmp, "%d", d);
  single.setVal(key, szTmp);
}

void ParamHandle::setParam(const std::string& key, double d) const {
  char szTmp[255];
  MapStringSingleton& single = MapStringSingleton::Instance();
  sprintf(szTmp, "%le", d);
  single.setVal(key, szTmp);

  //	00530   return param::set(resolveName(key), d);
}

void ParamHandle::setParam(const std::string& key, bool b) const {
  MapStringSingleton& single = MapStringSingleton::Instance();
  single.setVal(key, b ? "true" : "false");
}
void ParamHandle::setParam(const std::string& key, const std::string& s) const {
  MapStringSingleton& single = MapStringSingleton::Instance();
  single.setVal(key, s);
}

void ParamHandle::setParam(const std::string& key, const char* s) const {
  MapStringSingleton& single = MapStringSingleton::Instance();
  single.setVal(key, s);
}

bool ParamHandle::getParam(const std::string& key, std::string& s) const {
  bool fnd = true;
  MapStringSingleton& single = MapStringSingleton::Instance();
  fnd = single.hasTag(key);
  s = single.getVal(key);
  return (fnd);
}

bool ParamHandle::getParam(const std::string& key, double& d) const {
  bool fnd = true;
  double dummy = 0.0;
  std::string s;
  MapStringSingleton& single = MapStringSingleton::Instance();
  fnd = single.hasTag(key);
  if (fnd) {
    s = single.getVal(key);
    sscanf(s.c_str(), "%le", &dummy);
    d = dummy;
  }
  return (fnd);
}
bool ParamHandle::getParam(const std::string& key, int& d) const {
  bool fnd = true;
  int dummy = -1;
  std::string s;
  MapStringSingleton& single = MapStringSingleton::Instance();
  fnd = single.hasTag(key);
  if (fnd) {
    s = single.getVal(key);
    sscanf(s.c_str(), "%d", &dummy);
    d = dummy;
  }
  return (fnd);
}
bool ParamHandle::getParam(const std::string& key, bool& d) const {
  bool fnd = true;
  bool dummy = false;
  std::string s;
  MapStringSingleton& single = MapStringSingleton::Instance();
  fnd = single.hasTag(key);
  if (fnd) {
    s = single.getVal(key);
    if (s.length() > 0) {
      if (s[0] == '1' || s[0] == 't' || s[0] == 'T') dummy = true;
    } else {
      dummy = false;
    }
    d = dummy;
  }
  return (fnd);
}
