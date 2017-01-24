include_directories(${PROJECT_SOURCE_DIR}/src)

add_library(db
  dbformat.cc
  filename.cc
  log_reader.cc
  log_writer.cc
  version_edit.cc
  write_batch.cc
  )

