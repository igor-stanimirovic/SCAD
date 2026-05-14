add_executable(SCAD_APP main.cpp)

target_link_libraries(SCAD_APP PRIVATE core ui renderer)

find_program(WINDEPLOYQT_EXECUTABLE windeployqt)

add_custom_command(TARGET SCAD_APP POST_BUILD
    COMMAND ${WINDEPLOYQT_EXECUTABLE}
            $<TARGET_FILE:SCAD_APP>
)