include_directories(${PROJECT_SOURCE_DIR}/src)

add_library(table
  iterator.cc
  block.cc
  block_builder.cc
  format.cc
  filter_block.cc
  table_builder.cc
  two_level_iterator.cc
  table.cc
  merger.cc
  )

target_link_libraries(table
  basic
  )