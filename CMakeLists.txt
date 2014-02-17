cmake_minimum_required (VERSION 2.8)

project(sqt CXX)

set(RDMD_EXECUTABLE rdmd)
set(RDMD_BUILD_ONLY --build-only)

set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/install)

add_subdirectory(build)
add_subdirectory(examples)


set(SMIDGEN_EXE ${CMAKE_SOURCE_DIR}/../Smidgen/smidgen/install/smidgen)

add_custom_target(sqt_generate ALL

             COMMAND ${SMIDGEN_EXE} 
                 ${CMAKE_CURRENT_SOURCE_DIR}/sip/qt.sip
                 ${CMAKE_CURRENT_SOURCE_DIR}/build
                 )
             

ENABLE_TESTING()  