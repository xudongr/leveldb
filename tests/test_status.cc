#include "basic/status.h"
#include "util/cache.h"
#include "util/filter_policy.h"
#include "util/comparator.h"
#include "basic/write_batch.h"
#include <iostream>

using namespace leveldb;

int main() {
  std::cout << "hello world" << std::endl;
  Status s;
  std::cout << s.ToString() << std::endl;
  return 0;
}