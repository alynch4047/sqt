
QApplication *qApp {
%AccessCode
    // Qt implements this has a #define to a function call so we have to handle
    // it like this.
    return qApp;
%End
};
typedef QList<QWidget *> QWidgetList;

class QApplication : QGuiApplication
{
%TypeHeaderCode
#include <qapplication.h>
%End

%ConvertToSubClassCode
    static struct class_graph {
        const char *name;
        sipTypeDef **type;
        int yes, no;
    } graph[] = {
        {sipName_QShortcut, &sipType_QShortcut, -1, 1},
        {sipName_QGraphicsTransform, &sipType_QGraphicsTransform, 26, 2},
        {sipName_QStyle, &sipType_QStyle, 28, 3},
        {sipName_QWidget, &sipType_QWidget, 29, 4},
        {sipName_QMouseEventTransition, &sipType_QMouseEventTransition, -1, 5},
        {sipName_QFileSystemModel, &sipType_QFileSystemModel, -1, 6},
        {sipName_QAction, &sipType_QAction, 100, 7},
        {sipName_QPlainTextDocumentLayout, &sipType_QPlainTextDocumentLayout, -1, 8},
        {sipName_QDataWidgetMapper, &sipType_QDataWidgetMapper, -1, 9},
        {sipName_QLayout, &sipType_QLayout, 101, 10},
        {sipName_QButtonGroup, &sipType_QButtonGroup, -1, 11},
        {sipName_QActionGroup, &sipType_QActionGroup, -1, 12},
        {sipName_QCompleter, &sipType_QCompleter, -1, 13},
        {sipName_QScroller, &sipType_QScroller, -1, 14},
        {sipName_QKeyEventTransition, &sipType_QKeyEventTransition, -1, 15},
        {sipName_QGraphicsObject, &sipType_QGraphicsObject, 107, 16},
        {sipName_QUndoGroup, &sipType_QUndoGroup, -1, 17},
        {sipName_QAbstractItemDelegate, &sipType_QAbstractItemDelegate, 110, 18},
        {sipName_QApplication, &sipType_QApplication, -1, 19},
        {sipName_QDirModel, &sipType_QDirModel, -1, 20},
        {sipName_QGraphicsAnchor, &sipType_QGraphicsAnchor, -1, 21},
        {sipName_QUndoStack, &sipType_QUndoStack, -1, 22},
        {sipName_QSystemTrayIcon, &sipType_QSystemTrayIcon, -1, 23},
        {sipName_QGraphicsScene, &sipType_QGraphicsScene, -1, 24},
        {sipName_QGraphicsEffect, &sipType_QGraphicsEffect, 112, 25},
        {sipName_QGesture, &sipType_QGesture, 116, -1},
        {sipName_QGraphicsScale, &sipType_QGraphicsScale, -1, 27},
        {sipName_QGraphicsRotation, &sipType_QGraphicsRotation, -1, -1},
        {sipName_QCommonStyle, &sipType_QCommonStyle, -1, -1},
        {sipName_QDesktopWidget, &sipType_QDesktopWidget, -1, 30},
        {sipName_QToolBar, &sipType_QToolBar, -1, 31},
        {sipName_QTabWidget, &sipType_QTabWidget, -1, 32},
        {sipName_QStatusBar, &sipType_QStatusBar, -1, 33},
        {sipName_QLineEdit, &sipType_QLineEdit, -1, 34},
        {sipName_QDockWidget, &sipType_QDockWidget, -1, 35},
        {sipName_QProgressBar, &sipType_QProgressBar, -1, 36},
        {sipName_QGroupBox, &sipType_QGroupBox, -1, 37},
        {sipName_QTabBar, &sipType_QTabBar, -1, 38},
        {sipName_QSizeGrip, &sipType_QSizeGrip, -1, 39},
        {sipName_QAbstractButton, &sipType_QAbstractButton, 56, 40},
        {sipName_QRubberBand, &sipType_QRubberBand, -1, 41},
        {sipName_QSplashScreen, &sipType_QSplashScreen, -1, 42},
        {sipName_QMenu, &sipType_QMenu, -1, 43},
        {sipName_QComboBox, &sipType_QComboBox, 61, 44},
        {sipName_QMenuBar, &sipType_QMenuBar, -1, 45},
        {sipName_QMainWindow, &sipType_QMainWindow, -1, 46},
        {sipName_QAbstractSlider, &sipType_QAbstractSlider, 62, 47},
        {sipName_QAbstractSpinBox, &sipType_QAbstractSpinBox, 65, 48},
        {sipName_QFrame, &sipType_QFrame, 70, 49},
        {sipName_QFocusFrame, &sipType_QFocusFrame, -1, 50},
        {sipName_QCalendarWidget, &sipType_QCalendarWidget, -1, 51},
        {sipName_QDialogButtonBox, &sipType_QDialogButtonBox, -1, 52},
        {sipName_QSplitterHandle, &sipType_QSplitterHandle, -1, 53},
        {sipName_QWizardPage, &sipType_QWizardPage, -1, 54},
        {sipName_QMdiSubWindow, &sipType_QMdiSubWindow, -1, 55},
        {sipName_QDialog, &sipType_QDialog, 92, -1},
        {sipName_QRadioButton, &sipType_QRadioButton, -1, 57},
        {sipName_QPushButton, &sipType_QPushButton, 60, 58},
        {sipName_QCheckBox, &sipType_QCheckBox, -1, 59},
        {sipName_QToolButton, &sipType_QToolButton, -1, -1},
        {sipName_QCommandLinkButton, &sipType_QCommandLinkButton, -1, -1},
        {sipName_QFontComboBox, &sipType_QFontComboBox, -1, -1},
        {sipName_QScrollBar, &sipType_QScrollBar, -1, 63},
        {sipName_QSlider, &sipType_QSlider, -1, 64},
        {sipName_QDial, &sipType_QDial, -1, -1},
        {sipName_QSpinBox, &sipType_QSpinBox, -1, 66},
        {sipName_QDoubleSpinBox, &sipType_QDoubleSpinBox, -1, 67},
        {sipName_QDateTimeEdit, &sipType_QDateTimeEdit, 68, -1},
        {sipName_QDateEdit, &sipType_QDateEdit, -1, 69},
        {sipName_QTimeEdit, &sipType_QTimeEdit, -1, -1},
        {sipName_QToolBox, &sipType_QToolBox, -1, 71},
        {sipName_QAbstractScrollArea, &sipType_QAbstractScrollArea, 76, 72},
        {sipName_QLabel, &sipType_QLabel, -1, 73},
        {sipName_QSplitter, &sipType_QSplitter, -1, 74},
        {sipName_QLCDNumber, &sipType_QLCDNumber, -1, 75},
        {sipName_QStackedWidget, &sipType_QStackedWidget, -1, -1},
        {sipName_QAbstractItemView, &sipType_QAbstractItemView, 82, 77},
        {sipName_QMdiArea, &sipType_QMdiArea, -1, 78},
        {sipName_QGraphicsView, &sipType_QGraphicsView, -1, 79},
        {sipName_QPlainTextEdit, &sipType_QPlainTextEdit, -1, 80},
        {sipName_QScrollArea, &sipType_QScrollArea, -1, 81},
        {sipName_QTextEdit, &sipType_QTextEdit, 91, -1},
        {sipName_QColumnView, &sipType_QColumnView, -1, 83},
        {sipName_QTreeView, &sipType_QTreeView, 87, 84},
        {sipName_QHeaderView, &sipType_QHeaderView, -1, 85},
        {sipName_QListView, &sipType_QListView, 88, 86},
        {sipName_QTableView, &sipType_QTableView, 90, -1},
        {sipName_QTreeWidget, &sipType_QTreeWidget, -1, -1},
        {sipName_QUndoView, &sipType_QUndoView, -1, 89},
        {sipName_QListWidget, &sipType_QListWidget, -1, -1},
        {sipName_QTableWidget, &sipType_QTableWidget, -1, -1},
        {sipName_QTextBrowser, &sipType_QTextBrowser, -1, -1},
        {sipName_QWizard, &sipType_QWizard, -1, 93},
        {sipName_QErrorMessage, &sipType_QErrorMessage, -1, 94},
        {sipName_QInputDialog, &sipType_QInputDialog, -1, 95},
        {sipName_QColorDialog, &sipType_QColorDialog, -1, 96},
        {sipName_QMessageBox, &sipType_QMessageBox, -1, 97},
        {sipName_QFileDialog, &sipType_QFileDialog, -1, 98},
        {sipName_QProgressDialog, &sipType_QProgressDialog, -1, 99},
        {sipName_QFontDialog, &sipType_QFontDialog, -1, -1},
        {sipName_QWidgetAction, &sipType_QWidgetAction, -1, -1},
        {sipName_QStackedLayout, &sipType_QStackedLayout, -1, 102},
        {sipName_QGridLayout, &sipType_QGridLayout, -1, 103},
        {sipName_QBoxLayout, &sipType_QBoxLayout, 105, 104},
        {sipName_QFormLayout, &sipType_QFormLayout, -1, -1},
        {sipName_QVBoxLayout, &sipType_QVBoxLayout, -1, 106},
        {sipName_QHBoxLayout, &sipType_QHBoxLayout, -1, -1},
        {sipName_QGraphicsTextItem, &sipType_QGraphicsTextItem, -1, 108},
        {sipName_QGraphicsWidget, &sipType_QGraphicsWidget, 109, -1},
        {sipName_QGraphicsProxyWidget, &sipType_QGraphicsProxyWidget, -1, -1},
        {sipName_QStyledItemDelegate, &sipType_QStyledItemDelegate, -1, 111},
        {sipName_QItemDelegate, &sipType_QItemDelegate, -1, -1},
        {sipName_QGraphicsColorizeEffect, &sipType_QGraphicsColorizeEffect, -1, 113},
        {sipName_QGraphicsBlurEffect, &sipType_QGraphicsBlurEffect, -1, 114},
        {sipName_QGraphicsDropShadowEffect, &sipType_QGraphicsDropShadowEffect, -1, 115},
        {sipName_QGraphicsOpacityEffect, &sipType_QGraphicsOpacityEffect, -1, -1},
        {sipName_QSwipeGesture, &sipType_QSwipeGesture, -1, 117},
        {sipName_QTapAndHoldGesture, &sipType_QTapAndHoldGesture, -1, 118},
        {sipName_QPinchGesture, &sipType_QPinchGesture, -1, 119},
        {sipName_QTapGesture, &sipType_QTapGesture, -1, 120},
        {sipName_QPanGesture, &sipType_QPanGesture, -1, -1},
    };
    
    int i = 0;
    
    sipType = NULL;
    
    do
    {
        struct class_graph *cg = &graph[i];
    
        if (cg->name != NULL && sipCpp->inherits(cg->name))
        {
            sipType = *cg->type;
            i = cg->yes;
        }
        else
            i = cg->no;
    }
    while (i >= 0);
%End

public:

	QApplication(int& argc, char** argv);

    QApplication(SIP_PYLIST argv /DocType="list-of-str"/) /PostHook=__pyQtQAppHook__/ [(int &argc, char **argv, int = ApplicationFlags)];
%MethodCode
        // The Python interface is a list of argument strings that is modified.
        
        int argc;
        char **argv;
        
        // Convert the list.
        if ((argv = pyqt5_from_argv_list(a0, argc)) == NULL)
            sipIsErr = 1;
        else
        {
            // Create it now the arguments are right.
            static int nargc;
            nargc = argc;
        
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQApplication(nargc, argv, QCoreApplication::ApplicationFlags);
            Py_END_ALLOW_THREADS
        
            // Now modify the original list.
            pyqt5_update_argv_list(a0, argc, argv);
        }
%End

    virtual ~QApplication();
    static QStyle *style();
    static void setStyle(QStyle * /Transfer/);
    static QStyle *setStyle(const QString &);

    enum ColorSpec
    {
        NormalColor,
        CustomColor,
        ManyColor,
    };

    static int colorSpec();
    static void setColorSpec(int);
    static QPalette palette();
    static QPalette palette(const QWidget *);
    static QPalette palette(const char *className);
    static void setPalette(const QPalette &, const char *className = 0);
    static QFont font();
    static QFont font(const QWidget *);
    static QFont font(const char *className);
    static void setFont(const QFont &, const char *className = 0);
    static QFontMetrics fontMetrics();
    static void setWindowIcon(const QIcon &icon);
    static QIcon windowIcon();
    static QWidgetList allWidgets();
    static QWidgetList topLevelWidgets();
    static QDesktopWidget *desktop();
    static QWidget *activePopupWidget();
    static QWidget *activeModalWidget();
    static QWidget *focusWidget();
    static QWidget *activeWindow();
    static void setActiveWindow(QWidget *act);
    static QWidget *widgetAt(const QPoint &p);
    static QWidget *widgetAt(int x, int y);
    static QWidget *topLevelAt(const QPoint &p);
    static QWidget *topLevelAt(int x, int y);
    static void beep();
    static void alert(QWidget *widget, int msecs = 0) /ReleaseGIL/;
    static void setCursorFlashTime(int);
    static int cursorFlashTime();
    static void setDoubleClickInterval(int);
    static int doubleClickInterval();
    static void setKeyboardInputInterval(int);
    static int keyboardInputInterval();
    static void setWheelScrollLines(int);
    static int wheelScrollLines();
    static void setGlobalStrut(const QSize &);
    static QSize globalStrut();
    static void setStartDragTime(int ms);
    static int startDragTime();
    static void setStartDragDistance(int l);
    static int startDragDistance();
    static bool isEffectEnabled(Qt::UIEffect);
    static void setEffectEnabled(Qt::UIEffect, bool enabled = true);
    static int exec() /PostHook=__pyQtPostEventLoopHook__,PreHook=__pyQtPreEventLoopHook__,PyName=exec_,ReleaseGIL/;
%If (Py_v3)
    static int exec() /PostHook=__pyQtPostEventLoopHook__,PreHook=__pyQtPreEventLoopHook__,ReleaseGIL/;
%End
    virtual bool notify(QObject *, QEvent *) /ReleaseGIL/;
    bool autoSipEnabled() const;
    QString styleSheet() const;

signals:
    void focusChanged(QWidget *old, QWidget *now);

public slots:
    static void aboutQt();
    static void closeAllWindows();
    void setAutoSipEnabled(const bool enabled);
    void setStyleSheet(const QString &sheet);

protected:
    virtual bool event(QEvent *);

private:
    QApplication(const QApplication &);
};

%ModuleHeaderCode
// Imports from QtCore.
typedef char **(*pyqt5_from_argv_list_t)(PyObject *, int &);
extern pyqt5_from_argv_list_t pyqt5_from_argv_list;

typedef sipErrorState (*pyqt5_get_connection_parts_t)(PyObject *, QObject *, const char *, bool, QObject **, QByteArray &);
extern pyqt5_get_connection_parts_t pyqt5_get_connection_parts;

typedef sipErrorState (*pyqt5_get_pyqtsignal_parts_t)(PyObject *, QObject **, QByteArray &);
extern pyqt5_get_pyqtsignal_parts_t pyqt5_get_pyqtsignal_parts;

typedef void (*pyqt5_update_argv_list_t)(PyObject *, int, char **);
extern pyqt5_update_argv_list_t pyqt5_update_argv_list;

// This is needed for Qt v5.0.0.
#if defined(B0)
#undef B0
#endif
%End

%ModuleCode
// Imports from QtCore.
pyqt5_from_argv_list_t pyqt5_from_argv_list;
pyqt5_get_connection_parts_t pyqt5_get_connection_parts;
pyqt5_get_pyqtsignal_parts_t pyqt5_get_pyqtsignal_parts;
pyqt5_update_argv_list_t pyqt5_update_argv_list;
%End

%PostInitialisationCode
// Imports from QtCore.
pyqt5_from_argv_list = (pyqt5_from_argv_list_t)sipImportSymbol("pyqt5_from_argv_list");
pyqt5_get_connection_parts = (pyqt5_get_connection_parts_t)sipImportSymbol("pyqt5_get_connection_parts");
pyqt5_get_pyqtsignal_parts = (pyqt5_get_pyqtsignal_parts_t)sipImportSymbol("pyqt5_get_pyqtsignal_parts");
pyqt5_update_argv_list = (pyqt5_update_argv_list_t)sipImportSymbol("pyqt5_update_argv_list");
%End

