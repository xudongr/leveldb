#include "util/histogram.h"
#include <iostream>

using namespace leveldb;

int main() {
  Histogram h;
  h.Add(100);
  std::cout << h.ToString() << std::endl;
  return 0;
}