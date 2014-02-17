cmake_minimum_required(VERSION 2.8.9)

project(qtwidget)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Core)
find_package(Qt5Widgets)


if(1)
add_library(qtwidgetwrapper SHARED 
        package_wrapper.cpp
        instance_tracker.cpp
		QPainter_wrapper.cpp
		QPaintDevice_wrapper.cpp
		QInputEvent_wrapper.cpp
		QMouseEvent_wrapper.cpp
		QHoverEvent_wrapper.cpp
		QWheelEvent_wrapper.cpp
		QTabletEvent_wrapper.cpp
		QKeyEvent_wrapper.cpp
		QFocusEvent_wrapper.cpp
		QPaintEvent_wrapper.cpp
		QMoveEvent_wrapper.cpp
		QResizeEvent_wrapper.cpp
		QCloseEvent_wrapper.cpp
		QIconDragEvent_wrapper.cpp
		QShowEvent_wrapper.cpp
		QHideEvent_wrapper.cpp
		QContextMenuEvent_wrapper.cpp
		QInputMethodEvent_wrapper.cpp
		QInputMethodQueryEvent_wrapper.cpp
		QDropEvent_wrapper.cpp
		QDragMoveEvent_wrapper.cpp
		QDragEnterEvent_wrapper.cpp
		QDragLeaveEvent_wrapper.cpp
		QHelpEvent_wrapper.cpp
		QStatusTipEvent_wrapper.cpp
		QWhatsThisClickedEvent_wrapper.cpp
		QActionEvent_wrapper.cpp
		QFileOpenEvent_wrapper.cpp
		QShortcutEvent_wrapper.cpp
		QWindowStateChangeEvent_wrapper.cpp
		QTouchEvent_wrapper.cpp
		QExposeEvent_wrapper.cpp
		QScrollPrepareEvent_wrapper.cpp
		QScrollEvent_wrapper.cpp
		QEnterEvent_wrapper.cpp
		QApplication_wrapper.cpp
		QBoxLayout_wrapper.cpp
		QHBoxLayout_wrapper.cpp
		QVBoxLayout_wrapper.cpp
		QLayout_wrapper.cpp
		QWidget_wrapper.cpp
		QLineEdit_wrapper.cpp
		QGuiApplication_wrapper.cpp
		QLabel_wrapper.cpp
        QAbstractButton_wrapper.cpp
        QPushButton_wrapper.cpp		
		
		QPainter_PixmapFragment_wrapper.cpp
		QTouchEvent_TouchPoint_wrapper.cpp
)

# Use the Core module from Qt 5.
qt5_use_modules(qtwidgetwrapper Core Widgets)

install(TARGETS qtwidgetwrapper
        DESTINATION libs)


endif()