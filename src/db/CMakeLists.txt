include_directories(${PROJECT_SOURCE_DIR}/src)

add_library(db
  dbformat.cc
  filename.cc
  log_reader.cc
  log_writer.cc
  version_edit.cc
  table_cache.cc
  builder.cc
  memtable.cc
  write_batch.cc
  db_iter.cc
  db_impl.cc
  version_set.cc
  dumpfile.cc
  db_bench.cc
  repair.cc
  c.cc
  leveldbutil.cc
  )

target_link_libraries(db
  table
  util
  )

