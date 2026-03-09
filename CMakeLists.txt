cmake_minimum_required(VERSION 3.19)
project(Calculator LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)
qt_standard_project_setup()

qt_add_executable(Calculator
    WIN32 MACOSX_BUNDLE
    src/main.cpp
    src/mainwindow.cpp
    src/mainwindow.h
    src/mainwindow.ui
    src/BasicCalculate.cpp
    src/BasicCalculate.h
    src/Error_Handling.h
    src/Error_Handling.cpp
    src/Types.h
    resources/images.qrc
)

target_link_libraries(Calculator
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)
install(TARGETS Calculator
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET Calculator
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})