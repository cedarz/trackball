# find_package(GLFW REQUIRED)
include_directories("D:/vcpkg/installed/x64-windows/include")
# set(LIBS ${LIBS} ${GLFW_LIBRARY} src examples)
link_directories("D:/vcpkg/installed/x64-windows/debug/lib")

add_executable(demo  example.cpp RenderWindowGLFW.cpp)

target_link_libraries(demo glfw3dll.lib renderer trackball glad)