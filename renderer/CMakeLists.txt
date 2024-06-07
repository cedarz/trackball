find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIR})

include_directories("D:/vcpkg/installed/x64-windows/include")

add_library(renderer Animator.cpp Renderer.cpp RendererOpenGL1.cpp)

