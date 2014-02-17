
/*
* CPP Wrapper for QWidget
*/

#include <instance_tracker.h>

#include <qwidget.h>
#include <QVariant>

// Headers for converters
#include <Qt>
#include <QString>


// Externs for converters
extern int convertQFlagsToInt(Qt::WindowFlags toConvert);
extern Qt::WindowFlags convertIntToQFlags(int toConvert);
extern char* convertQStringToPChar(QString toConvert);
extern QString convertPCharToQString(char* toConvert);
// End of header section for converters
// Functions that upcast pointers to a base class

extern "C" QPaintDevice* castQWidgetAsQPaintDevice(QWidget* obj) {
	return obj;
}


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" int SMID_QWidget_devType_SMIX5(void* wrappedObject);
extern "C" void SMID_QWidget_setVisible_SMIX117(void* wrappedObject, bool visible);
extern "C" QSize* SMID_QWidget_sizeHint_SMIX141(void* wrappedObject);
extern "C" QSize* SMID_QWidget_minimumSizeHint_SMIX142(void* wrappedObject);
extern "C" int SMID_QWidget_heightForWidth_SMIX145(void* wrappedObject, int arg0);
extern "C" bool SMID_QWidget_event_SMIX179(void* wrappedObject, QEvent* arg0);
extern "C" void SMID_QWidget_mousePressEvent_SMIX180(void* wrappedObject, QMouseEvent* arg0);
extern "C" void SMID_QWidget_mouseReleaseEvent_SMIX181(void* wrappedObject, QMouseEvent* arg0);
extern "C" void SMID_QWidget_mouseDoubleClickEvent_SMIX182(void* wrappedObject, QMouseEvent* arg0);
extern "C" void SMID_QWidget_mouseMoveEvent_SMIX183(void* wrappedObject, QMouseEvent* arg0);
extern "C" void SMID_QWidget_wheelEvent_SMIX184(void* wrappedObject, QWheelEvent* arg0);
extern "C" void SMID_QWidget_keyPressEvent_SMIX185(void* wrappedObject, QKeyEvent* arg0);
extern "C" void SMID_QWidget_keyReleaseEvent_SMIX186(void* wrappedObject, QKeyEvent* arg0);
extern "C" void SMID_QWidget_focusInEvent_SMIX187(void* wrappedObject, QFocusEvent* arg0);
extern "C" void SMID_QWidget_focusOutEvent_SMIX188(void* wrappedObject, QFocusEvent* arg0);
extern "C" void SMID_QWidget_enterEvent_SMIX189(void* wrappedObject, QEvent* arg0);
extern "C" void SMID_QWidget_leaveEvent_SMIX190(void* wrappedObject, QEvent* arg0);
extern "C" void SMID_QWidget_paintEvent_SMIX191(void* wrappedObject, QPaintEvent* arg0);
extern "C" void SMID_QWidget_moveEvent_SMIX192(void* wrappedObject, QMoveEvent* arg0);
extern "C" void SMID_QWidget_resizeEvent_SMIX193(void* wrappedObject, QResizeEvent* arg0);
extern "C" void SMID_QWidget_closeEvent_SMIX194(void* wrappedObject, QCloseEvent* arg0);
extern "C" void SMID_QWidget_contextMenuEvent_SMIX195(void* wrappedObject, QContextMenuEvent* arg0);
extern "C" void SMID_QWidget_tabletEvent_SMIX196(void* wrappedObject, QTabletEvent* arg0);
extern "C" void SMID_QWidget_actionEvent_SMIX197(void* wrappedObject, QActionEvent* arg0);
extern "C" void SMID_QWidget_dragEnterEvent_SMIX198(void* wrappedObject, QDragEnterEvent* arg0);
extern "C" void SMID_QWidget_dragMoveEvent_SMIX199(void* wrappedObject, QDragMoveEvent* arg0);
extern "C" void SMID_QWidget_dragLeaveEvent_SMIX200(void* wrappedObject, QDragLeaveEvent* arg0);
extern "C" void SMID_QWidget_dropEvent_SMIX201(void* wrappedObject, QDropEvent* arg0);
extern "C" void SMID_QWidget_showEvent_SMIX202(void* wrappedObject, QShowEvent* arg0);
extern "C" void SMID_QWidget_hideEvent_SMIX203(void* wrappedObject, QHideEvent* arg0);
extern "C" void SMID_QWidget_changeEvent_SMIX204(void* wrappedObject, QEvent* arg0);
extern "C" void SMID_QWidget_inputMethodEvent_SMIX206(void* wrappedObject, QInputMethodEvent* arg0);
extern "C" QPaintDevice* SMID_QWidget_redirected_SMIX287(void* wrappedObject, QPoint* offset);
extern "C" QPainter* SMID_QWidget_sharedPainter_SMIX288(void* wrappedObject);
extern "C" void SMID_QWidget_initPainter_SMIX289(void* wrappedObject, QPainter* painter);
extern "C" void SMID_QWidget_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QWidget_SMI: QWidget {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QWidget_SMI* SMIMake_QWidget(QWidget* parent, Qt::WindowFlags flags) {
	QWidget_SMI* retVal = new QWidget_SMI(parent, flags);
	registerDInstance(retVal);
	return retVal;
};

private:
    QWidget_SMI(QWidget* parent, Qt::WindowFlags flags): QWidget(parent, flags) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:

int devType_fromDBase() {
	return QWidget::devType();
}	
int devType() {
	// This can only be called from a C++ instance, never from a D instance
	
	int retValue = SMID_QWidget_devType_SMIX5(this);
	return retValue;
}	

void setVisible_fromDBase(bool visible) {
	return QWidget::setVisible(visible);
}	
void setVisible(bool visible) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_setVisible_SMIX117(this, visible);
}	

QSize sizeHint_fromDBase() {
	return QWidget::sizeHint();
}	
QSize sizeHint() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QWidget_sizeHint_SMIX141(this);
	return *((QSize*) retValue);
}	

QSize minimumSizeHint_fromDBase() {
	return QWidget::minimumSizeHint();
}	
QSize minimumSizeHint() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QWidget_minimumSizeHint_SMIX142(this);
	return *((QSize*) retValue);
}	

int heightForWidth_fromDBase(int arg0) {
	return QWidget::heightForWidth(arg0);
}	
int heightForWidth(int arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	int retValue = SMID_QWidget_heightForWidth_SMIX145(this, arg0);
	return retValue;
}	

bool event_fromDBase(QEvent* arg0) {
	return QWidget::event(arg0);
}	
bool event(QEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QWidget_event_SMIX179(this, arg0);
	return retValue;
}	

void mousePressEvent_fromDBase(QMouseEvent* arg0) {
	return QWidget::mousePressEvent(arg0);
}	
void mousePressEvent(QMouseEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_mousePressEvent_SMIX180(this, arg0);
}	

void mouseReleaseEvent_fromDBase(QMouseEvent* arg0) {
	return QWidget::mouseReleaseEvent(arg0);
}	
void mouseReleaseEvent(QMouseEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_mouseReleaseEvent_SMIX181(this, arg0);
}	

void mouseDoubleClickEvent_fromDBase(QMouseEvent* arg0) {
	return QWidget::mouseDoubleClickEvent(arg0);
}	
void mouseDoubleClickEvent(QMouseEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_mouseDoubleClickEvent_SMIX182(this, arg0);
}	

void mouseMoveEvent_fromDBase(QMouseEvent* arg0) {
	return QWidget::mouseMoveEvent(arg0);
}	
void mouseMoveEvent(QMouseEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_mouseMoveEvent_SMIX183(this, arg0);
}	

void wheelEvent_fromDBase(QWheelEvent* arg0) {
	return QWidget::wheelEvent(arg0);
}	
void wheelEvent(QWheelEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_wheelEvent_SMIX184(this, arg0);
}	

void keyPressEvent_fromDBase(QKeyEvent* arg0) {
	return QWidget::keyPressEvent(arg0);
}	
void keyPressEvent(QKeyEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_keyPressEvent_SMIX185(this, arg0);
}	

void keyReleaseEvent_fromDBase(QKeyEvent* arg0) {
	return QWidget::keyReleaseEvent(arg0);
}	
void keyReleaseEvent(QKeyEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_keyReleaseEvent_SMIX186(this, arg0);
}	

void focusInEvent_fromDBase(QFocusEvent* arg0) {
	return QWidget::focusInEvent(arg0);
}	
void focusInEvent(QFocusEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_focusInEvent_SMIX187(this, arg0);
}	

void focusOutEvent_fromDBase(QFocusEvent* arg0) {
	return QWidget::focusOutEvent(arg0);
}	
void focusOutEvent(QFocusEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_focusOutEvent_SMIX188(this, arg0);
}	

void enterEvent_fromDBase(QEvent* arg0) {
	return QWidget::enterEvent(arg0);
}	
void enterEvent(QEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_enterEvent_SMIX189(this, arg0);
}	

void leaveEvent_fromDBase(QEvent* arg0) {
	return QWidget::leaveEvent(arg0);
}	
void leaveEvent(QEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_leaveEvent_SMIX190(this, arg0);
}	

void paintEvent_fromDBase(QPaintEvent* arg0) {
	return QWidget::paintEvent(arg0);
}	
void paintEvent(QPaintEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_paintEvent_SMIX191(this, arg0);
}	

void moveEvent_fromDBase(QMoveEvent* arg0) {
	return QWidget::moveEvent(arg0);
}	
void moveEvent(QMoveEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_moveEvent_SMIX192(this, arg0);
}	

void resizeEvent_fromDBase(QResizeEvent* arg0) {
	return QWidget::resizeEvent(arg0);
}	
void resizeEvent(QResizeEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_resizeEvent_SMIX193(this, arg0);
}	

void closeEvent_fromDBase(QCloseEvent* arg0) {
	return QWidget::closeEvent(arg0);
}	
void closeEvent(QCloseEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_closeEvent_SMIX194(this, arg0);
}	

void contextMenuEvent_fromDBase(QContextMenuEvent* arg0) {
	return QWidget::contextMenuEvent(arg0);
}	
void contextMenuEvent(QContextMenuEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_contextMenuEvent_SMIX195(this, arg0);
}	

void tabletEvent_fromDBase(QTabletEvent* arg0) {
	return QWidget::tabletEvent(arg0);
}	
void tabletEvent(QTabletEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_tabletEvent_SMIX196(this, arg0);
}	

void actionEvent_fromDBase(QActionEvent* arg0) {
	return QWidget::actionEvent(arg0);
}	
void actionEvent(QActionEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_actionEvent_SMIX197(this, arg0);
}	

void dragEnterEvent_fromDBase(QDragEnterEvent* arg0) {
	return QWidget::dragEnterEvent(arg0);
}	
void dragEnterEvent(QDragEnterEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_dragEnterEvent_SMIX198(this, arg0);
}	

void dragMoveEvent_fromDBase(QDragMoveEvent* arg0) {
	return QWidget::dragMoveEvent(arg0);
}	
void dragMoveEvent(QDragMoveEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_dragMoveEvent_SMIX199(this, arg0);
}	

void dragLeaveEvent_fromDBase(QDragLeaveEvent* arg0) {
	return QWidget::dragLeaveEvent(arg0);
}	
void dragLeaveEvent(QDragLeaveEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_dragLeaveEvent_SMIX200(this, arg0);
}	

void dropEvent_fromDBase(QDropEvent* arg0) {
	return QWidget::dropEvent(arg0);
}	
void dropEvent(QDropEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_dropEvent_SMIX201(this, arg0);
}	

void showEvent_fromDBase(QShowEvent* arg0) {
	return QWidget::showEvent(arg0);
}	
void showEvent(QShowEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_showEvent_SMIX202(this, arg0);
}	

void hideEvent_fromDBase(QHideEvent* arg0) {
	return QWidget::hideEvent(arg0);
}	
void hideEvent(QHideEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_hideEvent_SMIX203(this, arg0);
}	

void changeEvent_fromDBase(QEvent* arg0) {
	return QWidget::changeEvent(arg0);
}	
void changeEvent(QEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_changeEvent_SMIX204(this, arg0);
}	

void inputMethodEvent_fromDBase(QInputMethodEvent* arg0) {
	return QWidget::inputMethodEvent(arg0);
}	
void inputMethodEvent(QInputMethodEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_inputMethodEvent_SMIX206(this, arg0);
}	

void updateMicroFocus_fromDBase() {
	return QWidget::updateMicroFocus();
}
void destroy_fromDBase(bool destroyWindow, bool destroySubWindows) {
	return QWidget::destroy(destroyWindow, destroySubWindows);
}
bool focusNextChild_fromDBase() {
	return QWidget::focusNextChild();
}
bool focusPreviousChild_fromDBase() {
	return QWidget::focusPreviousChild();
}
QPaintDevice* redirected_fromDBase(QPoint* offset) {
	return QWidget::redirected(offset);
}	
QPaintDevice* redirected(QPoint* offset) {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QWidget_redirected_SMIX287(this, offset);
	return (QPaintDevice*) retValue;
}	

QPainter* sharedPainter_fromDBase() {
	return QWidget::sharedPainter();
}	
QPainter* sharedPainter() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QWidget_sharedPainter_SMIX288(this);
	return (QPainter*) retValue;
}	

void initPainter_fromDBase(QPainter* painter) {
	return QWidget::initPainter(painter);
}	
void initPainter(QPainter* painter) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QWidget_initPainter_SMIX289(this, painter);
}	


// Destructor
~QWidget_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QWidget_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QWidget_SMI* QWidget_QWidget_SMIX3(QWidget* parent, int flags___SMI) {
	Qt::WindowFlags flags = convertIntToQFlags(flags___SMI);

	QWidget_SMI* obj = QWidget_SMI::SMIMake_QWidget(parent, flags);
	return obj;
}


extern "C" int QWidget_devType_SMIX5(QWidget* self) {

	if (isCreatedByD(self))  {
	int retValue = (( QWidget_SMI*) self)->devType_fromDBase();
	return retValue;
	} else {
	int retValue = self->devType();
	return retValue;
	}

}

extern "C" bool QWidget_isEnabledTo_SMIX8(QWidget* self, const QWidget* arg0) {

	bool retValue = self->isEnabledTo(arg0);
	return retValue;

}

extern "C" void QWidget_setEnabled_SMIX10(QWidget* self, bool arg0) {

	self->setEnabled(arg0);

}

extern "C" void QWidget_setDisabled_SMIX11(QWidget* self, bool arg0) {

	self->setDisabled(arg0);

}

extern "C" void QWidget_setWindowModified_SMIX12(QWidget* self, bool arg0) {

	self->setWindowModified(arg0);

}

extern "C" QRect* QWidget_frameGeometry_SMIX14(QWidget* self) {

	QRect retValue = self->frameGeometry();
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" QRect* QWidget_normalGeometry_SMIX15(QWidget* self) {

	QRect retValue = self->normalGeometry();
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" int QWidget_x_SMIX16(QWidget* self) {

	int retValue = self->x();
	return retValue;

}

extern "C" int QWidget_y_SMIX17(QWidget* self) {

	int retValue = self->y();
	return retValue;

}

extern "C" QPoint* QWidget_pos_SMIX18(QWidget* self) {

	QPoint retValue = self->pos();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QSize* QWidget_frameSize_SMIX19(QWidget* self) {

	QSize retValue = self->frameSize();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" QRect* QWidget_childrenRect_SMIX20(QWidget* self) {

	QRect retValue = self->childrenRect();
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" QSize* QWidget_minimumSize_SMIX22(QWidget* self) {

	QSize retValue = self->minimumSize();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" QSize* QWidget_maximumSize_SMIX23(QWidget* self) {

	QSize retValue = self->maximumSize();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" void QWidget_setMinimumSize_SMIX24(QWidget* self, int minw, int minh) {

	self->setMinimumSize(minw, minh);

}

extern "C" void QWidget_setMaximumSize_SMIX25(QWidget* self, int maxw, int maxh) {

	self->setMaximumSize(maxw, maxh);

}

extern "C" void QWidget_setMinimumWidth_SMIX26(QWidget* self, int minw) {

	self->setMinimumWidth(minw);

}

extern "C" void QWidget_setMinimumHeight_SMIX27(QWidget* self, int minh) {

	self->setMinimumHeight(minh);

}

extern "C" void QWidget_setMaximumWidth_SMIX28(QWidget* self, int maxw) {

	self->setMaximumWidth(maxw);

}

extern "C" void QWidget_setMaximumHeight_SMIX29(QWidget* self, int maxh) {

	self->setMaximumHeight(maxh);

}

extern "C" QSize* QWidget_sizeIncrement_SMIX30(QWidget* self) {

	QSize retValue = self->sizeIncrement();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" void QWidget_setSizeIncrement_SMIX31(QWidget* self, int w, int h) {

	self->setSizeIncrement(w, h);

}

extern "C" QSize* QWidget_baseSize_SMIX32(QWidget* self) {

	QSize retValue = self->baseSize();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" void QWidget_setBaseSize_SMIX33(QWidget* self, int basew, int baseh) {

	self->setBaseSize(basew, baseh);

}

extern "C" void QWidget_setFixedSize_SMIX34(QWidget* self, const QSize& arg0) {

	self->setFixedSize(arg0);

}

extern "C" void QWidget_setFixedSize_SMIX35(QWidget* self, int w, int h) {

	self->setFixedSize(w, h);

}

extern "C" void QWidget_setFixedWidth_SMIX36(QWidget* self, int w) {

	self->setFixedWidth(w);

}

extern "C" void QWidget_setFixedHeight_SMIX37(QWidget* self, int h) {

	self->setFixedHeight(h);

}

extern "C" QPoint* QWidget_mapToGlobal_SMIX38(QWidget* self, const QPoint& arg0) {

	QPoint retValue = self->mapToGlobal(arg0);
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QWidget_mapFromGlobal_SMIX39(QWidget* self, const QPoint& arg0) {

	QPoint retValue = self->mapFromGlobal(arg0);
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QWidget_mapToParent_SMIX40(QWidget* self, const QPoint& arg0) {

	QPoint retValue = self->mapToParent(arg0);
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QWidget_mapFromParent_SMIX41(QWidget* self, const QPoint& arg0) {

	QPoint retValue = self->mapFromParent(arg0);
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QWidget_mapTo_SMIX42(QWidget* self, const QWidget* arg0, const QPoint& arg1) {

	QPoint retValue = self->mapTo(arg0, arg1);
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QWidget_mapFrom_SMIX43(QWidget* self, const QWidget* arg0, const QPoint& arg1) {

	QPoint retValue = self->mapFrom(arg0, arg1);
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QWidget* QWidget_window_SMIX44(QWidget* self) {

	QWidget* retValue = self->window();
	return retValue;

}

extern "C" void QWidget_unsetCursor_SMIX54(QWidget* self) {

	self->unsetCursor();

}

extern "C" void QWidget_clearMask_SMIX58(QWidget* self) {

	self->clearMask();

}

extern "C" void QWidget_setWindowTitle_SMIX59(QWidget* self, char* arg0___SMI) {
	QString arg0 = convertPCharToQString(arg0___SMI);

	self->setWindowTitle(arg0);

}

extern "C" char* QWidget_windowTitle_SMIX60(QWidget* self)  {

	QString retValue = self->windowTitle();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" void QWidget_setWindowIconText_SMIX63(QWidget* self, char* arg0___SMI) {
	QString arg0 = convertPCharToQString(arg0___SMI);

	self->setWindowIconText(arg0);

}

extern "C" char* QWidget_windowIconText_SMIX64(QWidget* self)  {

	QString retValue = self->windowIconText();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" void QWidget_setWindowRole_SMIX65(QWidget* self, char* arg0___SMI) {
	QString arg0 = convertPCharToQString(arg0___SMI);

	self->setWindowRole(arg0);

}

extern "C" char* QWidget_windowRole_SMIX66(QWidget* self)  {

	QString retValue = self->windowRole();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" bool QWidget_isWindowModified_SMIX69(QWidget* self) {

	bool retValue = self->isWindowModified();
	return retValue;

}

extern "C" void QWidget_setToolTip_SMIX70(QWidget* self, char* arg0___SMI) {
	QString arg0 = convertPCharToQString(arg0___SMI);

	self->setToolTip(arg0);

}

extern "C" char* QWidget_toolTip_SMIX71(QWidget* self)  {

	QString retValue = self->toolTip();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" void QWidget_setStatusTip_SMIX72(QWidget* self, char* arg0___SMI) {
	QString arg0 = convertPCharToQString(arg0___SMI);

	self->setStatusTip(arg0);

}

extern "C" char* QWidget_statusTip_SMIX73(QWidget* self)  {

	QString retValue = self->statusTip();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" void QWidget_setWhatsThis_SMIX74(QWidget* self, char* arg0___SMI) {
	QString arg0 = convertPCharToQString(arg0___SMI);

	self->setWhatsThis(arg0);

}

extern "C" char* QWidget_whatsThis_SMIX75(QWidget* self)  {

	QString retValue = self->whatsThis();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" void QWidget_setLayoutDirection_SMIX76(QWidget* self, int direction___SMI) {
	Qt::LayoutDirection direction = (Qt::LayoutDirection) direction___SMI;

	self->setLayoutDirection(direction);

}

extern "C" int QWidget_layoutDirection_SMIX77(QWidget* self)  {

	Qt::LayoutDirection retValue = self->layoutDirection();
	int convertedRetValue = (int) retValue;
	return convertedRetValue;

}

extern "C" void QWidget_unsetLayoutDirection_SMIX78(QWidget* self) {

	self->unsetLayoutDirection();

}

extern "C" bool QWidget_isRightToLeft_SMIX79(QWidget* self) {

	bool retValue = self->isRightToLeft();
	return retValue;

}

extern "C" bool QWidget_isLeftToRight_SMIX80(QWidget* self) {

	bool retValue = self->isLeftToRight();
	return retValue;

}

extern "C" void QWidget_setFocus_SMIX82(QWidget* self) {

	self->setFocus();

}

extern "C" bool QWidget_isActiveWindow_SMIX84(QWidget* self) {

	bool retValue = self->isActiveWindow();
	return retValue;

}

extern "C" void QWidget_activateWindow_SMIX85(QWidget* self) {

	self->activateWindow();

}

extern "C" void QWidget_clearFocus_SMIX86(QWidget* self) {

	self->clearFocus();

}

extern "C" void QWidget_setFocus_SMIX87(QWidget* self, int reason___SMI) {
	Qt::FocusReason reason = (Qt::FocusReason) reason___SMI;

	self->setFocus(reason);

}

extern "C" int QWidget_focusPolicy_SMIX88(QWidget* self)  {

	Qt::FocusPolicy retValue = self->focusPolicy();
	int convertedRetValue = (int) retValue;
	return convertedRetValue;

}

extern "C" void QWidget_setFocusPolicy_SMIX89(QWidget* self, int policy___SMI) {
	Qt::FocusPolicy policy = (Qt::FocusPolicy) policy___SMI;

	self->setFocusPolicy(policy);

}

extern "C" bool QWidget_hasFocus_SMIX90(QWidget* self) {

	bool retValue = self->hasFocus();
	return retValue;

}

extern "C" void QWidget_setTabOrder_SMIX91(QWidget* arg0, QWidget* arg1) {

	QWidget::setTabOrder(arg0, arg1);

}

extern "C" void QWidget_setFocusProxy_SMIX92(QWidget* self, QWidget* arg0) {

	self->setFocusProxy(arg0);

}

extern "C" QWidget* QWidget_focusProxy_SMIX93(QWidget* self) {

	QWidget* retValue = self->focusProxy();
	return retValue;

}

extern "C" int QWidget_contextMenuPolicy_SMIX94(QWidget* self)  {

	Qt::ContextMenuPolicy retValue = self->contextMenuPolicy();
	int convertedRetValue = (int) retValue;
	return convertedRetValue;

}

extern "C" void QWidget_setContextMenuPolicy_SMIX95(QWidget* self, int policy___SMI) {
	Qt::ContextMenuPolicy policy = (Qt::ContextMenuPolicy) policy___SMI;

	self->setContextMenuPolicy(policy);

}

extern "C" void QWidget_grabMouse_SMIX96(QWidget* self) {

	self->grabMouse();

}

extern "C" void QWidget_releaseMouse_SMIX98(QWidget* self) {

	self->releaseMouse();

}

extern "C" void QWidget_grabKeyboard_SMIX99(QWidget* self) {

	self->grabKeyboard();

}

extern "C" void QWidget_releaseKeyboard_SMIX100(QWidget* self) {

	self->releaseKeyboard();

}

extern "C" void QWidget_releaseShortcut_SMIX102(QWidget* self, int id) {

	self->releaseShortcut(id);

}

extern "C" void QWidget_setShortcutEnabled_SMIX103(QWidget* self, int id, bool enabled) {

	self->setShortcutEnabled(id, enabled);

}

extern "C" QWidget* QWidget_mouseGrabber_SMIX104() {

	QWidget* retValue = QWidget::mouseGrabber();
	return retValue;

}

extern "C" QWidget* QWidget_keyboardGrabber_SMIX105() {

	QWidget* retValue = QWidget::keyboardGrabber();
	return retValue;

}

extern "C" void QWidget_setUpdatesEnabled_SMIX106(QWidget* self, bool enable) {

	self->setUpdatesEnabled(enable);

}

extern "C" void QWidget_update_SMIX108(QWidget* self) {

	self->update();

}

extern "C" void QWidget_repaint_SMIX109(QWidget* self) {

	self->repaint();

}

extern "C" void QWidget_update_SMIX111(QWidget* self, const QRect& arg0) {

	self->update(arg0);

}

extern "C" void QWidget_repaint_SMIX113(QWidget* self, int x, int y, int w, int h) {

	self->repaint(x, y, w, h);

}

extern "C" void QWidget_repaint_SMIX114(QWidget* self, const QRect& arg0) {

	self->repaint(arg0);

}

extern "C" void QWidget_setVisible_SMIX117(QWidget* self, bool visible) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->setVisible_fromDBase(visible);
	} else {
	self->setVisible(visible);
	}

}

extern "C" void QWidget_setHidden_SMIX118(QWidget* self, bool hidden) {

	self->setHidden(hidden);

}

extern "C" void QWidget_show_SMIX119(QWidget* self) {

	self->show();

}

extern "C" void QWidget_hide_SMIX120(QWidget* self) {

	self->hide();

}

extern "C" void QWidget_showMinimized_SMIX121(QWidget* self) {

	self->showMinimized();

}

extern "C" void QWidget_showMaximized_SMIX122(QWidget* self) {

	self->showMaximized();

}

extern "C" void QWidget_showFullScreen_SMIX123(QWidget* self) {

	self->showFullScreen();

}

extern "C" void QWidget_showNormal_SMIX124(QWidget* self) {

	self->showNormal();

}

extern "C" bool QWidget_close_SMIX125(QWidget* self) {

	bool retValue = self->close();
	return retValue;

}

extern "C" void QWidget_raise_SMIX126(QWidget* self) {

	self->raise();

}

extern "C" void QWidget_lower_SMIX127(QWidget* self) {

	self->lower();

}

extern "C" void QWidget_stackUnder_SMIX129(QWidget* self, QWidget* arg0) {

	self->stackUnder(arg0);

}

extern "C" void QWidget_move_SMIX130(QWidget* self, const QPoint& arg0) {

	self->move(arg0);

}

extern "C" void QWidget_resize_SMIX131(QWidget* self, const QSize& arg0) {

	self->resize(arg0);

}

extern "C" void QWidget_setGeometry_SMIX132(QWidget* self, const QRect& arg0) {

	self->setGeometry(arg0);

}

extern "C" void QWidget_adjustSize_SMIX133(QWidget* self) {

	self->adjustSize();

}

extern "C" bool QWidget_isVisibleTo_SMIX134(QWidget* self, const QWidget* arg0) {

	bool retValue = self->isVisibleTo(arg0);
	return retValue;

}

extern "C" bool QWidget_isMinimized_SMIX135(QWidget* self) {

	bool retValue = self->isMinimized();
	return retValue;

}

extern "C" bool QWidget_isMaximized_SMIX136(QWidget* self) {

	bool retValue = self->isMaximized();
	return retValue;

}

extern "C" bool QWidget_isFullScreen_SMIX137(QWidget* self) {

	bool retValue = self->isFullScreen();
	return retValue;

}

extern "C" QSize* QWidget_sizeHint_SMIX141(QWidget* self) {

	if (isCreatedByD(self))  {
	QSize retValue = (( QWidget_SMI*) self)->sizeHint_fromDBase();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	} else {
	QSize retValue = self->sizeHint();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	}

}

extern "C" QSize* QWidget_minimumSizeHint_SMIX142(QWidget* self) {

	if (isCreatedByD(self))  {
	QSize retValue = (( QWidget_SMI*) self)->minimumSizeHint_fromDBase();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	} else {
	QSize retValue = self->minimumSizeHint();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	}

}

extern "C" int QWidget_heightForWidth_SMIX145(QWidget* self, int arg0) {

	if (isCreatedByD(self))  {
	int retValue = (( QWidget_SMI*) self)->heightForWidth_fromDBase(arg0);
	return retValue;
	} else {
	int retValue = self->heightForWidth(arg0);
	return retValue;
	}

}

extern "C" void QWidget_setContentsMargins_SMIX147(QWidget* self, int left, int top, int right, int bottom) {

	self->setContentsMargins(left, top, right, bottom);

}

extern "C" void QWidget_getContentsMargins_SMIX148(QWidget* self, int* left, int* top, int* right, int* bottom) {

	self->getContentsMargins(left, top, right, bottom);

}

extern "C" QRect* QWidget_contentsRect_SMIX149(QWidget* self) {

	QRect retValue = self->contentsRect();
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" QLayout* QWidget_layout_SMIX150(QWidget* self) {

	QLayout* retValue = self->layout();
	return retValue;

}

extern "C" void QWidget_setLayout_SMIX151(QWidget* self, QLayout* arg0) {

	self->setLayout(arg0);

}

extern "C" void QWidget_updateGeometry_SMIX153(QWidget* self) {

	self->updateGeometry();

}

extern "C" void QWidget_setParent_SMIX154(QWidget* self, QWidget* parent) {

	self->setParent(parent);

}

extern "C" void QWidget_setParent_SMIX155(QWidget* self, QWidget* parent, int f___SMI) {
	Qt::WindowFlags f = convertIntToQFlags(f___SMI);

	self->setParent(parent, f);

}

extern "C" void QWidget_scroll_SMIX156(QWidget* self, int dx, int dy) {

	self->scroll(dx, dy);

}

extern "C" void QWidget_scroll_SMIX157(QWidget* self, int dx, int dy, const QRect& arg2) {

	self->scroll(dx, dy, arg2);

}

extern "C" QWidget* QWidget_focusWidget_SMIX158(QWidget* self) {

	QWidget* retValue = self->focusWidget();
	return retValue;

}

extern "C" QWidget* QWidget_nextInFocusChain_SMIX159(QWidget* self) {

	QWidget* retValue = self->nextInFocusChain();
	return retValue;

}

extern "C" bool QWidget_acceptDrops_SMIX160(QWidget* self) {

	bool retValue = self->acceptDrops();
	return retValue;

}

extern "C" void QWidget_setAcceptDrops_SMIX161(QWidget* self, bool on) {

	self->setAcceptDrops(on);

}

extern "C" void QWidget_setWindowFlags_SMIX168(QWidget* self, int type___SMI) {
	Qt::WindowFlags type = convertIntToQFlags(type___SMI);

	self->setWindowFlags(type);

}

extern "C" void QWidget_overrideWindowFlags_SMIX169(QWidget* self, int type___SMI) {
	Qt::WindowFlags type = convertIntToQFlags(type___SMI);

	self->overrideWindowFlags(type);

}

extern "C" QWidget* QWidget_childAt_SMIX171(QWidget* self, const QPoint& p) {

	QWidget* retValue = self->childAt(p);
	return retValue;

}

extern "C" void QWidget_setAttribute_SMIX172(QWidget* self, int attribute___SMI, bool on) {
	Qt::WidgetAttribute attribute = (Qt::WidgetAttribute) attribute___SMI;

	self->setAttribute(attribute, on);

}

extern "C" void QWidget_ensurePolished_SMIX174(QWidget* self) {

	self->ensurePolished();

}

extern "C" bool QWidget_isAncestorOf_SMIX175(QWidget* self, const QWidget* child) {

	bool retValue = self->isAncestorOf(child);
	return retValue;

}

extern "C" bool QWidget_event_SMIX179(QWidget* self, QEvent* arg0) {

	if (isCreatedByD(self))  {
	bool retValue = (( QWidget_SMI*) self)->event_fromDBase(arg0);
	return retValue;
	}

}

extern "C" void QWidget_mousePressEvent_SMIX180(QWidget* self, QMouseEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->mousePressEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_mouseReleaseEvent_SMIX181(QWidget* self, QMouseEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->mouseReleaseEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_mouseDoubleClickEvent_SMIX182(QWidget* self, QMouseEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->mouseDoubleClickEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_mouseMoveEvent_SMIX183(QWidget* self, QMouseEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->mouseMoveEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_wheelEvent_SMIX184(QWidget* self, QWheelEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->wheelEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_keyPressEvent_SMIX185(QWidget* self, QKeyEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->keyPressEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_keyReleaseEvent_SMIX186(QWidget* self, QKeyEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->keyReleaseEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_focusInEvent_SMIX187(QWidget* self, QFocusEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->focusInEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_focusOutEvent_SMIX188(QWidget* self, QFocusEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->focusOutEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_enterEvent_SMIX189(QWidget* self, QEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->enterEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_leaveEvent_SMIX190(QWidget* self, QEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->leaveEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_paintEvent_SMIX191(QWidget* self, QPaintEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->paintEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_moveEvent_SMIX192(QWidget* self, QMoveEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->moveEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_resizeEvent_SMIX193(QWidget* self, QResizeEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->resizeEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_closeEvent_SMIX194(QWidget* self, QCloseEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->closeEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_contextMenuEvent_SMIX195(QWidget* self, QContextMenuEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->contextMenuEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_tabletEvent_SMIX196(QWidget* self, QTabletEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->tabletEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_actionEvent_SMIX197(QWidget* self, QActionEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->actionEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_dragEnterEvent_SMIX198(QWidget* self, QDragEnterEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->dragEnterEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_dragMoveEvent_SMIX199(QWidget* self, QDragMoveEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->dragMoveEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_dragLeaveEvent_SMIX200(QWidget* self, QDragLeaveEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->dragLeaveEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_dropEvent_SMIX201(QWidget* self, QDropEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->dropEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_showEvent_SMIX202(QWidget* self, QShowEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->showEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_hideEvent_SMIX203(QWidget* self, QHideEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->hideEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_changeEvent_SMIX204(QWidget* self, QEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->changeEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_inputMethodEvent_SMIX206(QWidget* self, QInputMethodEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->inputMethodEvent_fromDBase(arg0);
	}

}

extern "C" void QWidget_updateMicroFocus_SMIX210(QWidget* self) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->updateMicroFocus_fromDBase();
	}

}

extern "C" void QWidget_destroy__SMIX212(QWidget* self, bool destroyWindow, bool destroySubWindows) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->destroy_fromDBase(destroyWindow, destroySubWindows);
	}

}

extern "C" bool QWidget_focusNextChild_SMIX214(QWidget* self) {

	if (isCreatedByD(self))  {
	bool retValue = (( QWidget_SMI*) self)->focusNextChild_fromDBase();
	return retValue;
	}

}

extern "C" bool QWidget_focusPreviousChild_SMIX215(QWidget* self) {

	if (isCreatedByD(self))  {
	bool retValue = (( QWidget_SMI*) self)->focusPreviousChild_fromDBase();
	return retValue;
	}

}

extern "C" QWidget* QWidget_childAt_SMIX217(QWidget* self, int ax, int ay) {

	QWidget* retValue = self->childAt(ax, ay);
	return retValue;

}

extern "C" int QWidget_windowType_SMIX218(QWidget* self)  {

	Qt::WindowType retValue = self->windowType();
	int convertedRetValue = (int) retValue;
	return convertedRetValue;

}

extern "C" int QWidget_windowFlags_SMIX219(QWidget* self)  {

	Qt::WindowFlags retValue = self->windowFlags();
	int convertedRetValue = convertQFlagsToInt(retValue);
	return convertedRetValue;

}

extern "C" bool QWidget_isWindow_SMIX221(QWidget* self) {

	bool retValue = self->isWindow();
	return retValue;

}

extern "C" bool QWidget_isEnabled_SMIX222(QWidget* self) {

	bool retValue = self->isEnabled();
	return retValue;

}

extern "C" bool QWidget_isModal_SMIX223(QWidget* self) {

	bool retValue = self->isModal();
	return retValue;

}

extern "C" int QWidget_minimumWidth_SMIX224(QWidget* self) {

	int retValue = self->minimumWidth();
	return retValue;

}

extern "C" int QWidget_minimumHeight_SMIX225(QWidget* self) {

	int retValue = self->minimumHeight();
	return retValue;

}

extern "C" int QWidget_maximumWidth_SMIX226(QWidget* self) {

	int retValue = self->maximumWidth();
	return retValue;

}

extern "C" int QWidget_maximumHeight_SMIX227(QWidget* self) {

	int retValue = self->maximumHeight();
	return retValue;

}

extern "C" void QWidget_setMinimumSize_SMIX228(QWidget* self, const QSize& s) {

	self->setMinimumSize(s);

}

extern "C" void QWidget_setMaximumSize_SMIX229(QWidget* self, const QSize& s) {

	self->setMaximumSize(s);

}

extern "C" void QWidget_setSizeIncrement_SMIX230(QWidget* self, const QSize& s) {

	self->setSizeIncrement(s);

}

extern "C" void QWidget_setBaseSize_SMIX231(QWidget* self, const QSize& s) {

	self->setBaseSize(s);

}

extern "C" void QWidget_setMouseTracking_SMIX235(QWidget* self, bool enable) {

	self->setMouseTracking(enable);

}

extern "C" bool QWidget_hasMouseTracking_SMIX236(QWidget* self) {

	bool retValue = self->hasMouseTracking();
	return retValue;

}

extern "C" bool QWidget_underMouse_SMIX237(QWidget* self) {

	bool retValue = self->underMouse();
	return retValue;

}

extern "C" bool QWidget_updatesEnabled_SMIX238(QWidget* self) {

	bool retValue = self->updatesEnabled();
	return retValue;

}

extern "C" void QWidget_update_SMIX239(QWidget* self, int ax, int ay, int aw, int ah) {

	self->update(ax, ay, aw, ah);

}

extern "C" bool QWidget_isVisible_SMIX240(QWidget* self) {

	bool retValue = self->isVisible();
	return retValue;

}

extern "C" bool QWidget_isHidden_SMIX241(QWidget* self) {

	bool retValue = self->isHidden();
	return retValue;

}

extern "C" void QWidget_move_SMIX242(QWidget* self, int ax, int ay) {

	self->move(ax, ay);

}

extern "C" void QWidget_resize_SMIX243(QWidget* self, int w, int h) {

	self->resize(w, h);

}

extern "C" void QWidget_setGeometry_SMIX244(QWidget* self, int ax, int ay, int aw, int ah) {

	self->setGeometry(ax, ay, aw, ah);

}

extern "C" QRect* QWidget_rect_SMIX245(QWidget* self) {

	QRect retValue = self->rect();
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" const QRect& QWidget_geometry_SMIX246(QWidget* self) {

	const QRect& retValue = const_cast<const QRect&> (self->geometry());
	return retValue;

}

extern "C" QSize* QWidget_size_SMIX247(QWidget* self) {

	QSize retValue = self->size();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" int QWidget_width_SMIX248(QWidget* self) {

	int retValue = self->width();
	return retValue;

}

extern "C" int QWidget_height_SMIX249(QWidget* self) {

	int retValue = self->height();
	return retValue;

}

extern "C" QWidget* QWidget_parentWidget_SMIX250(QWidget* self) {

	QWidget* retValue = self->parentWidget();
	return retValue;

}

extern "C" bool QWidget_testAttribute_SMIX252(QWidget* self, int attribute___SMI) {
	Qt::WidgetAttribute attribute = (Qt::WidgetAttribute) attribute___SMI;

	bool retValue = self->testAttribute(attribute);
	return retValue;

}

extern "C" int QWidget_windowModality_SMIX253(QWidget* self)  {

	Qt::WindowModality retValue = self->windowModality();
	int convertedRetValue = (int) retValue;
	return convertedRetValue;

}

extern "C" void QWidget_setWindowModality_SMIX254(QWidget* self, int windowModality___SMI) {
	Qt::WindowModality windowModality = (Qt::WindowModality) windowModality___SMI;

	self->setWindowModality(windowModality);

}

extern "C" bool QWidget_autoFillBackground_SMIX255(QWidget* self) {

	bool retValue = self->autoFillBackground();
	return retValue;

}

extern "C" void QWidget_setAutoFillBackground_SMIX256(QWidget* self, bool enabled) {

	self->setAutoFillBackground(enabled);

}

extern "C" void QWidget_setStyleSheet_SMIX257(QWidget* self, char* styleSheet___SMI) {
	QString styleSheet = convertPCharToQString(styleSheet___SMI);

	self->setStyleSheet(styleSheet);

}

extern "C" char* QWidget_styleSheet_SMIX258(QWidget* self)  {

	QString retValue = self->styleSheet();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" void QWidget_setShortcutAutoRepeat_SMIX259(QWidget* self, int id, bool enabled) {

	self->setShortcutAutoRepeat(id, enabled);

}

extern "C" void QWidget_unsetLocale_SMIX268(QWidget* self) {

	self->unsetLocale();

}

extern "C" QWidget* QWidget_nativeParentWidget_SMIX270(QWidget* self) {

	QWidget* retValue = self->nativeParentWidget();
	return retValue;

}

extern "C" void QWidget_setWindowFilePath_SMIX271(QWidget* self, char* filePath___SMI) {
	QString filePath = convertPCharToQString(filePath___SMI);

	self->setWindowFilePath(filePath);

}

extern "C" char* QWidget_windowFilePath_SMIX272(QWidget* self)  {

	QString retValue = self->windowFilePath();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" void QWidget_ungrabGesture_SMIX277(QWidget* self, int type___SMI) {
	Qt::GestureType type = (Qt::GestureType) type___SMI;

	self->ungrabGesture(type);

}

extern "C" QWidget* QWidget_previousInFocusChain_SMIX280(QWidget* self) {

	QWidget* retValue = self->previousInFocusChain();
	return retValue;

}

extern "C" QPaintDevice* QWidget_redirected_SMIX287(QWidget* self, QPoint* offset) {

	if (isCreatedByD(self))  {
	QPaintDevice* retValue = (( QWidget_SMI*) self)->redirected_fromDBase(offset);
	return retValue;
	}

}

extern "C" QPainter* QWidget_sharedPainter_SMIX288(QWidget* self) {

	if (isCreatedByD(self))  {
	QPainter* retValue = (( QWidget_SMI*) self)->sharedPainter_fromDBase();
	return retValue;
	}

}

extern "C" void QWidget_initPainter_SMIX289(QWidget* self, QPainter* painter) {

	if (isCreatedByD(self))  {
	(( QWidget_SMI*) self)->initPainter_fromDBase(painter);
	}

}

extern "C" int QWidget_widthMM_SMIX7(QWidget* self) {

	int retValue = self->widthMM();
	return retValue;

}

extern "C" int QWidget_heightMM_SMIX8(QWidget* self) {

	int retValue = self->heightMM();
	return retValue;

}

extern "C" int QWidget_logicalDpiX_SMIX9(QWidget* self) {

	int retValue = self->logicalDpiX();
	return retValue;

}

extern "C" int QWidget_logicalDpiY_SMIX10(QWidget* self) {

	int retValue = self->logicalDpiY();
	return retValue;

}

extern "C" int QWidget_physicalDpiX_SMIX11(QWidget* self) {

	int retValue = self->physicalDpiX();
	return retValue;

}

extern "C" int QWidget_physicalDpiY_SMIX12(QWidget* self) {

	int retValue = self->physicalDpiY();
	return retValue;

}

extern "C" int QWidget_depth_SMIX13(QWidget* self) {

	int retValue = self->depth();
	return retValue;

}

extern "C" bool QWidget_paintingActive_SMIX14(QWidget* self) {

	bool retValue = self->paintingActive();
	return retValue;

}

extern "C" int QWidget_colorCount_SMIX15(QWidget* self) {

	int retValue = self->colorCount();
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QWidget_CPPObject(QWidget* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QWidget_SMI_CPPObject(QWidget_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QWidget
