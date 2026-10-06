cmake_minimum_required(VERSION 3.24)
project(wandering_native_bridge LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(SDK_DIR ${CMAKE_CURRENT_SOURCE_DIR}/sdk)
set(MINHOOK_DIR ${CMAKE_CURRENT_SOURCE_DIR}/work/minhook)
add_library(wandering_native_bridge SHARED
  bridge/bridge.cpp
  bridge/minhook/buffer.c
  bridge/minhook/hook.c
  bridge/minhook/trampoline.c
  bridge/minhook/hde/hde64.c
)
target_include_directories(wandering_native_bridge PRIVATE ${SDK_DIR} ${MINHOOK_DIR}/include ${MINHOOK_DIR}/src ${MINHOOK_DIR}/src/hde)
target_compile_definitions(wandering_native_bridge PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX)
if(MSVC)
  target_compile_options(wandering_native_bridge PRIVATE /EHsc /O2)
else()
  target_compile_options(wandering_native_bridge PRIVATE -O2)
endif()
set_target_properties(wandering_native_bridge PROPERTIES OUTPUT_NAME "wandering_native_bridge")
