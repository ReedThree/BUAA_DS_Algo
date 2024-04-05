add_executable(testEvalRPNCalc testEvalRPNCalc.c)
target_link_libraries(testEvalRPNCalc PRIVATE asan ubsan algo_compiler_flags Eval Eval_Stack)

add_executable(testEvalInfixToRPN testEvalInfixToRPN.c)
target_link_libraries(testEvalInfixToRPN PRIVATE asan ubsan algo_compiler_flags Eval Eval_Stack)

add_executable(testEvalCalc testEvalCalc.c)
target_link_libraries(testEvalCalc PRIVATE asan ubsan algo_compiler_flags Eval Eval_Stack)

add_test(NAME testEvalRPNCalc COMMAND bash -c "${CMAKE_CURRENT_SOURCE_DIR}/outputCompare.sh ${CMAKE_CURRENT_BINARY_DIR}/testEvalRPNCalc X ${CMAKE_CURRENT_SOURCE_DIR}/EvalRPNCalc.out")
add_test(NAME testEvalInfixToRPN COMMAND bash -c "${CMAKE_CURRENT_SOURCE_DIR}/outputCompare.sh ${CMAKE_CURRENT_BINARY_DIR}/testEvalInfixToRPN X ${CMAKE_CURRENT_SOURCE_DIR}/EvalInfixToRPN.out")
add_test(NAME testEvalCalc COMMAND bash -c "${CMAKE_CURRENT_SOURCE_DIR}/outputCompare.sh ${CMAKE_CURRENT_BINARY_DIR}/testEvalCalc X ${CMAKE_CURRENT_SOURCE_DIR}/EvalCalc.out")