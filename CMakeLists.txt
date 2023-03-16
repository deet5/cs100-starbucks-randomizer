cmake_minimum_required(VERSION 3.15)
project(starbucks_sampler)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS --coverage)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

# Reference: https://github.com/google/googletest/tree/main/googletest#incorporating-into-an-existing-cmake-project
# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download)
if (result)
    message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif ()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download)
if (result)
    message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif ()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
        ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
        EXCLUDE_FROM_ALL)

# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories("${gtest_SOURCE_DIR}/include")
endif ()

set(SOURCE_FILES 
src/User.cpp 
src/Weather.cpp 
src/Drink.cpp
src/Refresher.cpp
src/CremeFrappuccino.cpp
src/HotChocolate.cpp
src/CoffeeSyrup.cpp

src/ChaiTea.cpp
src/Americano.cpp
src/Coffee.cpp
src/Latte.cpp
src/Espresso.cpp
src/RefresherFlavor.cpp
src/CremeFrappuccinoFlavor.cpp
src/CaffGenerator.cpp
src/Randomizer.cpp
src/NonCaffGenerator.cpp
src/NonCafAndCaf.cpp

)
add_executable(starbucks_sampler main.cpp ${SOURCE_FILES})

set(TEST_FILES 
test/userTest.cpp
test/weatherTest.cpp
test/DrinkTest.cpp
test/chaiTest.cpp
test/CremeFrapTest.cpp
test/RefresherTest.cpp
test/testCoffees.cpp
test/refreshFlavorTest.cpp
test/coffeeSyrupTest.cpp
test/hotChocolateTest.cpp
test/americanoTest.cpp
test/expressoTest.cpp
test/generatorTest.cpp
test/latteTest.cpp
test/nonCaffAndCafGenTest.cpp
test/randomizerTest.cpp
test/refreshFlavorTest.cpp
test/testCaffGen.cpp
test/testCremeFrapFlavor.cpp
test/testEspresso.cpp
test/testNonCaffGen.cpp
)
add_executable(test ${TEST_FILES} ${SOURCE_FILES})

target_link_libraries(test gtest gtest_main)
