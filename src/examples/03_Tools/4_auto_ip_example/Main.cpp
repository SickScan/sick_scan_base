#include <iostream>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
#include "SSBL.h"

using namespace std;
using namespace ssbl;

int main(void) {
  // AutoIpHandler mHandler;

  mHandler.ScanNetwork();
}