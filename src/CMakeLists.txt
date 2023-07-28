################################################################################
## Gorillas++
## Copyright (c) 2023 Ryan Clarke
################################################################################

add_executable(gorillas)

include(GNUInstallDirs)

set_target_properties(gorillas PROPERTIES
    CXX_EXTENSIONS OFF
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/${CMAKE_BUILD_TYPE}/${CMAKE_INSTALL_BINDIR}"
)

target_sources(gorillas PRIVATE
    gorillas.cpp
    gorillas.hpp
    main.cpp
    sprites.hpp
    sprites.cpp
)

target_compile_features(gorillas PRIVATE cxx_std_23)
target_compile_options(gorillas PRIVATE
    "-Wall"
    "-Wextra"
    "-Wconversion"
    "-Wold-style-cast"
)
target_link_libraries(gorillas PRIVATE retro::retro)


################################################################################
install(TARGETS gorillas RUNTIME)
