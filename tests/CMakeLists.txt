include_directories(${PROJECT_SOURCE_DIR}/src)
include_directories(.)

add_executable(test_status test_status.cc)
target_link_libraries(test_status basic)

add_executable(test_port test_port.cc)
target_link_libraries(test_port port)

add_executable(test_hash test_hash.cc)
target_link_libraries(test_hash util)

add_executable(test_cache test_cache.cc)
target_link_libraries(test_cache util)

add_executable(test_env test_env.cc)
target_link_libraries(test_env util)

add_executable(test_coding test_coding.cc)
target_link_libraries(test_coding util)

add_executable(test_crc32c test_crc32c.cc)
target_link_libraries(test_crc32c util)

add_executable(test_bloom test_bloom.cc)
target_link_libraries(test_bloom util)

add_executable(test_arena test_arena.cc)
target_link_libraries(test_arena util)

add_executable(test_filter_block test_filter_block.cc)
target_link_libraries(test_filter_block table util)

add_executable(test_log test_log.cc)
target_link_libraries(test_log db util)

add_executable(test_dbformat test_dbformat.cc)
target_link_libraries(test_dbformat db util)

add_executable(test_filename test_filename.cc)
target_link_libraries(test_filename db util)

add_executable(test_skiplist test_skiplist.cc)
target_link_libraries(test_skiplist db util)

add_executable(test_write_batch test_write_batch.cc)
target_link_libraries(test_write_batch db util)

add_executable(test_db test_db.cc)
target_link_libraries(test_db db util)

add_executable(test_corruption test_corruption.cc)
target_link_libraries(test_corruption db util)

add_executable(test_version_edit test_version_edit.cc)
target_link_libraries(test_version_edit db util)

add_executable(test_version_set test_version_set.cc)
target_link_libraries(test_version_set db util)

add_executable(test_recovery test_recovery.cc)
target_link_libraries(test_recovery db util)

add_executable(test_fault_injection test_fault_injection.cc)
target_link_libraries(test_fault_injection db util)

add_executable(test_c test_c.c)
target_link_libraries(test_c db util)

add_executable(test_autocompact test_autocompact.cc)
target_link_libraries(test_autocompact db util)

add_executable(test_ test.cpp)
target_link_libraries(test_ db)

add_executable(test_histogram test_histogram.cc)
target_link_libraries(test_histogram util )