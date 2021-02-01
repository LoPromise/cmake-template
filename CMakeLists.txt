project("Sample Project" C)
cmake_minimum_required(VERSION 3.0)

set(VERSION_MAJOR   0   CACHE STRING "Project major version number.")
set(VERSION_MINOR   0   CACHE STRING "Project minor version number.")
set(VERSION_PATCH   1   CACHE STRING "Project patch version number.")

add_subdirectory(components/module_a)
add_subdirectory(doc)

if(WITH_TEST)
    message("Building with Tests")
    include(CTest)
    add_subdirectory(external)
    add_subdirectory(test)
endif()
