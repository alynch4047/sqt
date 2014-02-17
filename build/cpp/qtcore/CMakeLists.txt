cmake_minimum_required(VERSION 2.8.9)

project(qtcore)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Core)

if(1)
add_library(qtcorewrapper SHARED 
        package_wrapper.cpp
        instance_tracker.cpp
  	    QCoreApplication_wrapper.cpp
		QPoint_wrapper.cpp
		QPointF_wrapper.cpp
		QRect_wrapper.cpp
		QRectF_wrapper.cpp
		QSize_wrapper.cpp
		QSizeF_wrapper.cpp
		QObject_wrapper.cpp
		QMetaObject_wrapper.cpp
		QEvent_wrapper.cpp
		QTimerEvent_wrapper.cpp
		QChildEvent_wrapper.cpp
		QDynamicPropertyChangeEvent_wrapper.cpp
		QLine_wrapper.cpp
		QLineF_wrapper.cpp
		QGenericArgument_wrapper.cpp
		QGenericReturnArgument_wrapper.cpp
		
		QMetaObject_Connection_wrapper.cpp
		
)

# Use the Core module from Qt 5.
qt5_use_modules(qtcorewrapper Core)

install(TARGETS qtcorewrapper
        DESTINATION libs)


endif()