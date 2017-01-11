include_directories(${PROJECT_SOURCE_DIR}/src)

add_library(table
  iterator.cc
  block.cc
  )

target_link_libraries(table
  basic
  )