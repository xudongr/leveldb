include_directories(${PROJECT_SOURCE_DIR}/src)

add_library(util
  filter_policy.cc
  coding.cc
  hash.cc
  cache.cc
  env.cc
  testutil.cc
  testharness.cc
  env_posix.cc
  logging.cc
  comparator.cc
  histogram.cc
  options.cc
  crc32c.cc
  bloom.cc
  arena.cc
  )

target_link_libraries(util
  port
  basic
  )