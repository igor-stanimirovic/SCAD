find_package(OpenGL REQUIRED)

add_library(renderer STATIC
    renderer.cpp
)

target_link_libraries(renderer
    PUBLIC
    OpenGL::GL
)