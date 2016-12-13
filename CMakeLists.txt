cmake_minimum_required(VERSION 2.6)

set(PROJECT_NAME code_challenges)
set(SOURCE_DIR src)
set(LIBRARIES_DIR libs)

set(SOURCE ${SOURCE_DIR}/main.cpp)

project(${PROJECT_NAME})

include(CheckCXXCompilerFlag)
	CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
	CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
	message(FATAL_ERROR "Compiler ${CMAKE_CXX_COMPILER} has no C++11 support.")
endif()

include_directories(include)

###############################################################################
### DEPENDENCIES ##############################################################
###############################################################################

###############################################################################
### TESTING ###################################################################
###############################################################################

enable_testing()

set(PROJECT_TEST_NAME ${PROJECT_NAME}_test)

add_subdirectory(${LIBRARIES_DIR}/gtest-1.7.0)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

file(GLOB TEST_SRC_FILES test/*.cpp)
add_executable(${PROJECT_TEST_NAME} ${TEST_SRC_FILES})
target_link_libraries(${PROJECT_TEST_NAME} ${LIBRARIES} gtest gtest_main)
add_test(${PROJECT_TEST_NAME} ${PROJECT_TEST_NAME})

###############################################################################
### PROJECT ###################################################################
###############################################################################

add_executable(${PROJECT_NAME} ${SOURCE})

foreach(LIBRARY ${LIBRARIES})
	add_subdirectory("${LIBRARIES_DIR}/${LIBRARY}")
endforeach(LIBRARY)

target_link_libraries(${PROJECT_NAME} ${LIBRARIES})

