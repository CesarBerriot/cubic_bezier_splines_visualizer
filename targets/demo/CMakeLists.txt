add_executable(cubic_bezier_splines_visualizer_demo WIN32 source/main.c)
target_compile_options(cubic_bezier_splines_visualizer_demo PRIVATE ${CBSV_COMPILE_OPTIONS})
target_link_options(cubic_bezier_splines_visualizer_demo PRIVATE -static)
target_link_libraries(cubic_bezier_splines_visualizer_demo PRIVATE cubic_bezier_splines_visualizer)


if(${BUILD_SHARED_LIBS})
    # https://github.com/SFML/SFML/pull/2745
    # Once this gets fixed, CMAKE_RUNTIME_OUTPUT_DIRECTORY will suffice.
    add_custom_command(TARGET cubic_bezier_splines_visualizer_demo POST_BUILD COMMAND "${CMAKE_COMMAND}" -E copy_directory "$<TARGET_FILE_DIR:sfml-system>" "$<TARGET_FILE_DIR:cubic_bezier_splines_visualizer_demo>")
    add_custom_command(TARGET cubic_bezier_splines_visualizer_demo POST_BUILD COMMAND "${CMAKE_COMMAND}" -E copy_directory "$<TARGET_FILE_DIR:csfml-system>" "$<TARGET_FILE_DIR:cubic_bezier_splines_visualizer_demo>")

    get_filename_component(MINGW_BIN_DIR ${CMAKE_C_COMPILER} DIRECTORY)
    add_custom_command(TARGET cubic_bezier_splines_visualizer_demo POST_BUILD COMMAND "${CMAKE_COMMAND}" -E copy "${MINGW_BIN_DIR}/libgcc_s_seh-1.dll" "$<TARGET_FILE_DIR:cubic_bezier_splines_visualizer_demo>/libgcc_s_seh-1.dll")
    add_custom_command(TARGET cubic_bezier_splines_visualizer_demo POST_BUILD COMMAND "${CMAKE_COMMAND}" -E copy "${MINGW_BIN_DIR}/libstdc++-6.dll" "$<TARGET_FILE_DIR:cubic_bezier_splines_visualizer_demo>/libstdc++-6.dll")
    add_custom_command(TARGET cubic_bezier_splines_visualizer_demo POST_BUILD COMMAND "${CMAKE_COMMAND}" -E copy "${MINGW_BIN_DIR}/libwinpthread-1.dll" "$<TARGET_FILE_DIR:cubic_bezier_splines_visualizer_demo>/libwinpthread-1.dll")
endif()