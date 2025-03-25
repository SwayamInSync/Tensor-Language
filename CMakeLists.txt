cmake_minimum_required(VERSION 3.12)
project(tl_compiler)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)


find_package(xtensor REQUIRED)
find_package(xtensor-blas REQUIRED)
find_package(BLAS REQUIRED)
find_package(LAPACK REQUIRED)


# Include directories
include_directories(
    /usr/local/include/antlr4-runtime
    src/frontend/
)

# Update the link directory to point to where the new ANTLR 4.13.2 libraries are installed
link_directories(/usr/local/lib)  # New ANTLR runtime is in /usr/local/lib

# Add executable
add_executable(tl_compiler
    main.cpp
    src/frontend/TLLexer.cpp
    src/frontend/TLParser.cpp
    src/frontend/TLBaseVisitor.cpp
    src/frontend/TLVisitor.cpp
)

# Link libraries
target_link_libraries(tl_compiler
    antlr4-runtime
    xtensor
    xtensor-blas
    ${BLAS_LIBRARIES}
    ${LAPACK_LIBRARIES}
)
