
include_directories("D:/vcpkg/installed/x64-windows/include")

link_directories("D:/vcpkg/installed/x64-windows/debug/lib")

file(GLOB SRC_FILES *.h *.cpp )
add_executable(demo  ${SRC_FILES})

target_link_libraries(demo glfw3dll.lib trackball glad)