## Copyright (c) 2018-2020 Advanced Micro Devices, Inc. All rights reserved.
cmake_minimum_required(VERSION 3.5.1)

set(DEPTH "../../../../")

set(GPA_PROJECT_NAME D3D12ColorCube)
set(ProjectName ${GPA_PROJECT_NAME})

include (${GPA_CMAKE_MODULES_DIR}/common.cmake)

include_directories(${GPA_PUBLIC_HEADER}
                    ${GPA_SRC_COMMON})

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/cube_sample.cc
            ${CMAKE_CURRENT_SOURCE_DIR}/cube_sample.h
            ${CMAKE_CURRENT_SOURCE_DIR}/../sample.cc
            ${CMAKE_CURRENT_SOURCE_DIR}/../sample.h)

add_executable(${GPA_PROJECT_NAME} WIN32 ${SOURCES})
add_dependencies(${GPA_PROJECT_NAME} GPUPerfAPIDX12)
ADD_GPA_USER_COMPILE_DEFINITIONS()
target_link_libraries(${GPA_PROJECT_NAME} dxgi.lib
                                          d3d12.lib
                                          D3DCompiler.lib
                                          dxguid.lib)

# CMake copy command doesn't supports wildcards, we need to specify fully-qualified file names
add_custom_command(TARGET ${GPA_PROJECT_NAME} POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_LIST_DIR}/Shaders.hlsl ${GPA_OUTPUT_DIR}/$<CONFIG>/ VERBATIM)

set_target_properties(${GPA_PROJECT_NAME} PROPERTIES FOLDER "Examples/DX12")

SET_EXECUTABLE_NAME(${GPA_PROJECT_NAME})

source_group("Shaders" FILES ${CMAKE_CURRENT_SOURCE_DIR}/Shaders.hlsl)