cmake_minimum_required(VERSION 3.12)
project(tl_compiler)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(
    /usr/local/include/antlr4-runtime
    frontend/
)

# Update the link directory to point to where the new ANTLR 4.13.2 libraries are installed
link_directories(/usr/local/lib)  # New ANTLR runtime is in /usr/local/lib

# Add executable
add_executable(tl_compiler
    src/main.cpp
    frontend/TLLexer.cpp
    frontend/TLParser.cpp
    frontend/TLBaseVisitor.cpp
    frontend/TLVisitor.cpp
)

# Link libraries
target_link_libraries(tl_compiler
    antlr4-runtime
)
