find_package(Qt6 REQUIRED COMPONENTS Widgets OpenGLWidgets)

add_library(ui STATIC
    mainwindow.cpp
    "mainwindow.h")

target_include_directories(ui 
    PUBLIC .)

target_link_libraries(ui
    PUBLIC
    Qt6::Widgets
    Qt6::OpenGLWidgets
)
