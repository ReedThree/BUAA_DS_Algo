add_executable(testKMP testKMP.c)
target_link_libraries(testKMP PRIVATE asan ubsan algo_compiler_flags KMP_Search)

add_test(NAME testKMPSingleSubStr_1 COMMAND bash -c "${CMAKE_CURRENT_SOURCE_DIR}/outputCompare.sh ${CMAKE_CURRENT_BINARY_DIR}/testKMP ${CMAKE_CURRENT_SOURCE_DIR}/SingleSubStr_1.in ${CMAKE_CURRENT_SOURCE_DIR}/SingleSubStr_1.out")
add_test(NAME testKMPSingleSubStr_2 COMMAND bash -c "${CMAKE_CURRENT_SOURCE_DIR}/outputCompare.sh ${CMAKE_CURRENT_BINARY_DIR}/testKMP ${CMAKE_CURRENT_SOURCE_DIR}/SingleSubStr_2.in ${CMAKE_CURRENT_SOURCE_DIR}/SingleSubStr_2.out")
add_test(NAME testKMPMatchEveryPos COMMAND bash -c "${CMAKE_CURRENT_SOURCE_DIR}/outputCompare.sh ${CMAKE_CURRENT_BINARY_DIR}/testKMP ${CMAKE_CURRENT_SOURCE_DIR}/MatchEveryPos.in ${CMAKE_CURRENT_SOURCE_DIR}/MatchEveryPos.out")
add_test(NAME testKMPNormal_1 COMMAND bash -c "${CMAKE_CURRENT_SOURCE_DIR}/outputCompare.sh ${CMAKE_CURRENT_BINARY_DIR}/testKMP ${CMAKE_CURRENT_SOURCE_DIR}/Normal_1.in ${CMAKE_CURRENT_SOURCE_DIR}/Normal_1.out")
add_test(NAME testKMPNormal_2 COMMAND bash -c "${CMAKE_CURRENT_SOURCE_DIR}/outputCompare.sh ${CMAKE_CURRENT_BINARY_DIR}/testKMP ${CMAKE_CURRENT_SOURCE_DIR}/Normal_2.in ${CMAKE_CURRENT_SOURCE_DIR}/Normal_2.out")
add_test(NAME testKMPNotFound COMMAND bash -c "${CMAKE_CURRENT_SOURCE_DIR}/outputCompare.sh ${CMAKE_CURRENT_BINARY_DIR}/testKMP ${CMAKE_CURRENT_SOURCE_DIR}/NotFound.in ${CMAKE_CURRENT_SOURCE_DIR}/NotFound.out")
add_test(NAME testKMPHuge COMMAND bash -c "${CMAKE_CURRENT_SOURCE_DIR}/outputCompare.sh ${CMAKE_CURRENT_BINARY_DIR}/testKMP ${CMAKE_CURRENT_SOURCE_DIR}/Huge.in ${CMAKE_CURRENT_SOURCE_DIR}/Huge.out")