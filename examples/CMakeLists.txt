cmake_minimum_required (VERSION 2.8)

set(SQT_BUILD ${CMAKE_SOURCE_DIR}/build)


add_custom_target(sqt_example ALL
   COMMAND env LD_LIBRARY_PATH=${SQT_BUILD}/cpp ${RDMD_EXECUTABLE} -gc -debug ${RDMD_BUILD_ONLY}
            -I${SQT_BUILD}/d
            -J${SQT_BUILD}/d/qtcore
            -L${SQT_BUILD}/cpp/qtcore/libqtcorewrapper.so
            -L${SQT_BUILD}/cpp/qtwidget/libqtwidgetwrapper.so
             ${CMAKE_CURRENT_SOURCE_DIR}/test_sqt.d
    DEPENDS qtcorewrapper qtwidgetwrapper
           )  
