include_directories("D:/vcpkg/installed/x64-windows/include")
set(SRC_FILES Camera.cpp TrackBallInteractor.cpp)
add_library(trackball ${SRC_FILES})