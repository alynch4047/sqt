cmake_minimum_required(VERSION 2.8.9)

project(sqtwrappers)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

add_subdirectory(qtcore)
add_subdirectory(qtwidget)

add_executable(tryqt ${CMAKE_CURRENT_SOURCE_DIR}/try_qt.cpp)
qt5_use_modules(tryqt Core Widgets)

