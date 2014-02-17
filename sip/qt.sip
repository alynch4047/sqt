
// Top level sip file that declares all the modules

%Include qt_linux_x86_64.conf

%Converter qstring.converter 
%Converter windowtype.converter 
%Converter ppchar.converter 

%ConvertersDHeaderCode
import std.conv;
public import std.string: toStringz;
string CToDString(char* cstring) {
	return to!string(cstring);
}
%End

%DontWrapDoubleUnderscoreMethods

%GetClassNameCCode
#include <QObject>
#include <QMetaObject>
#include <QEvent>
#include <iostream>
#include <string.h>

extern "C" const char* getClassNameC(char* baseClassName, void* wrappedObject) {
	//std::cout << "base class name is " <<  baseClassName << std::endl;
	if (strcmp(baseClassName, "QEvent") == 0) {
		QEvent* event = (QEvent*) wrappedObject;
		//std::cout << "event type is " <<  event->type() << std::endl;
		switch (event->type())
	    {
	    
	    case QEvent::Timer:
	        return "QTimerEvent";
	    
	    case QEvent::ChildAdded:
	    case QEvent::ChildPolished:
	    case QEvent::ChildRemoved:
	        return "QChildEvent";
	    
	    case QEvent::DynamicPropertyChange:
	        return "QDynamicPropertyChangeEvent";
	    
	    case QEvent::StateMachineSignal:
	        return "QStateMachine.SignalEvent";
	    
	    case QEvent::StateMachineWrapped:
	        return "QStateMachine.WrappedEvent";
	        
	case QEvent::ActionAdded:
	    case QEvent::ActionChanged:
	    case QEvent::ActionRemoved:
	        return "QActionEvent";
	        
	    
	    case QEvent::Close:
	        return "QCloseEvent";
	        
	    
	    case QEvent::ContextMenu:
	        return "QContextMenuEvent";
	        
	    
	    case QEvent::DragEnter:
	        return "QDragEnterEvent";
	        
	    
	    case QEvent::DragLeave:
	        return "QDragLeaveEvent";
	        
	    
	    case QEvent::DragMove:
	        return "QDragMoveEvent";
	        
	    
	    case QEvent::Drop:
	        return "QDropEvent";
	        
	    
	    case QEvent::Enter:
	        return "QEnterEvent";
	        
	    
	    case QEvent::FileOpen:
	        return "QFileOpenEvent";
	        
	    
	    case QEvent::FocusIn:
	    case QEvent::FocusOut:
	        return "QFocusEvent";
	        
	    
	    case QEvent::Hide:
	        return "QHideEvent";
	        
	    
	    case QEvent::HoverEnter:
	    case QEvent::HoverLeave:
	    case QEvent::HoverMove:
	        return "QHoverEvent";
	        
	    
	    case QEvent::IconDrag:
	        return "QIconDragEvent";
	        
	    
	    case QEvent::InputMethod:
	        return "QInputMethodEvent";
	        
	    
	    case QEvent::KeyPress:
	    case QEvent::KeyRelease:
	    case QEvent::ShortcutOverride:
	        return "QKeyEvent";
	        
	    
	    case QEvent::MouseButtonDblClick:
	    case QEvent::MouseButtonPress:
	    case QEvent::MouseButtonRelease:
	    case QEvent::MouseMove:
	        return "QMouseEvent";
	        
	    
	    case QEvent::Move:
	        return "QMoveEvent";
	        
	    
	    case QEvent::Paint:
	        return "QPaintEvent";
	        
	    
	    case QEvent::Resize:
	        return "QResizeEvent";
	        
	    
	    case QEvent::Shortcut:
	        return "QShortcutEvent";
	        
	    
	    case QEvent::Show:
	        return "QShowEvent";
	        
	    
	    case QEvent::StatusTip:
	        return "QStatusTipEvent";
	        
	    
	    case QEvent::TabletMove:
	    case QEvent::TabletPress:
	    case QEvent::TabletRelease:
	    case QEvent::TabletEnterProximity:
	    case QEvent::TabletLeaveProximity:
	        return "QTabletEvent";
	        
	    
	    case QEvent::ToolTip:
	    case QEvent::WhatsThis:
	        return "QHelpEvent";
	        
	    
	    case QEvent::WhatsThisClicked:
	        return "QWhatsThisClickedEvent";
	        
	    
	    case QEvent::Wheel:
	        return "QWheelEvent";
	        
	    
	    case QEvent::WindowStateChange:
	        return "QWindowStateChangeEvent";
	        
	    
	    case QEvent::TouchBegin:
	    case QEvent::TouchUpdate:
	    case QEvent::TouchEnd:
	        return "QTouchEvent";
	        
	    
	    case QEvent::InputMethodQuery:
	        return "QInputMethodQueryEvent";
	        
	    
	    case QEvent::Expose:
	        return "QExposeEvent";
	        
	    
	    case QEvent::ScrollPrepare:
	        return "QScrollPrepareEvent";
	        
	    
	    case QEvent::Scroll:
	        return "QScrollEvent";
	        	        
	    
	    default:
	        return "UnknownEvent";
	    }
	}
    return "UnknownQt";
	//QObject* obj = (QObject*) wrappedObject;
	//return obj->metaObject()->className();
}
%End

%Include qtcore/qtcore_mod.sip
%Include qtwidget/qtwidget_mod.sip
