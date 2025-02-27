include(cmake/csfml.cmake)
include(cmake/cubic_bezier_splines.cmake)

add_library(
        cubic_bezier_splines_visualizer STATIC
        source/cubic_bezier_splines_visualizer.c
        source/window/window.c
        source/window/event_handler/event_handler.c
        source/window/renderer/renderer.c
        source/window/renderer/sub_renderers/splines/splines.c
        source/window/renderer/sub_renderers/grid/grid.c
        source/spline_registry/spline_registry.c
        source/math/math.c
)
target_compile_options(cubic_bezier_splines_visualizer PRIVATE ${CBSV_COMPILE_OPTIONS})
target_include_directories(cubic_bezier_splines_visualizer PUBLIC source/include PRIVATE source)
target_link_libraries(cubic_bezier_splines_visualizer PUBLIC cubic_bezier_splines csfml-system csfml-window csfml-graphics)