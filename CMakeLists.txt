cmake_minimum_required(VERSION 3.10)
project( traversable VERSION 0.0.1 )

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin )
set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib )
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib )

if( ${CMAKE_BINARY_DIR} STREQUAL ${CMAKE_SOURCE_DIR} )
    message( FATAL_ERROR "
    In-Source builds is not allowed, 
    You should create a seperated directory for build files")
endif()

find_package(Threads REQUIRED)


add_executable( main 
    src/main.cpp
)



enable_testing()
find_package(GTest REQUIRED)

set( TEST_WORKING_DIRECTORY  ${CMAKE_BINARY_DIR}/test )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${TEST_WORKING_DIRECTORY} )

include_directories( ${CMAKE_SOURCE_DIR}/include ${GTEST_INCLUDE_DIRS} )

add_executable( insertTest
    test/InsertSortTest.cpp )
target_link_libraries( insertTest ${GTEST_BOTH_LIBRARIES} Threads::Threads )

add_test( InsertTest insertTest
    WORKING_DIRECTORY ${TEST_WORKING_DIRECTORY}
)


add_executable( selectionSortTest
    test/SelectionSortTest.cpp )
target_link_libraries( selectionSortTest ${GTEST_BOTH_LIBRARIES} Threads::Threads )

add_test( SelectionSortTest selectionSortTest
    WORKING_DIRECTORY ${TEST_WORKING_DIRECTORY}
)

add_executable( bubbleTest
    test/BubbleSortTest.cpp )

target_link_libraries( bubbleTest ${GTEST_BOTH_LIBRARIES} Threads::Threads )

add_test( BubbleTest bubbleTest
    WORKING_DIRECTORY ${TEST_WORKING_DIRECTORY}
)


add_executable( quickSortTest
    test/QuickSortTest.cpp )

target_link_libraries( quickSortTest ${GTEST_BOTH_LIBRARIES} Threads::Threads )

add_test( BubbleTest quickSortTest
    WORKING_DIRECTORY ${TEST_WORKING_DIRECTORY}
)