add_subdirectory(Stack)

add_library(Eval eval.c)
target_link_libraries(Eval PRIVATE algo_compiler_flags Eval_Stack)
target_include_directories(Eval INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})