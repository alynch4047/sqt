
/*
* CPP Wrapper for QMetaObject
*/

#include <instance_tracker.h>

#include <qobjectdefs.h>

// Headers for converters
using namespace std;

// Externs for converters
extern char* convertPCharToPChar(char* toConvert);
extern char* convertPCharToPCharArgument(char* toConvert);
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QMetaObject_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QMetaObject_SMI: QMetaObject {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QMetaObject_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QMetaObject_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" char* QMetaObject_className_SMIX2(QMetaObject* self)  {

	char* retValue = const_cast<char*> (self->className());
	char* convertedRetValue = convertPCharToPChar(retValue);
	return convertedRetValue;

}

extern "C" const QMetaObject* QMetaObject_superClass_SMIX3(QMetaObject* self) {

	const QMetaObject* retValue = const_cast<const QMetaObject*> (self->superClass());
	return retValue;

}

extern "C" int QMetaObject_methodOffset_SMIX5(QMetaObject* self) {

	int retValue = self->methodOffset();
	return retValue;

}

extern "C" int QMetaObject_enumeratorOffset_SMIX6(QMetaObject* self) {

	int retValue = self->enumeratorOffset();
	return retValue;

}

extern "C" int QMetaObject_propertyOffset_SMIX7(QMetaObject* self) {

	int retValue = self->propertyOffset();
	return retValue;

}

extern "C" int QMetaObject_classInfoOffset_SMIX8(QMetaObject* self) {

	int retValue = self->classInfoOffset();
	return retValue;

}

extern "C" int QMetaObject_methodCount_SMIX9(QMetaObject* self) {

	int retValue = self->methodCount();
	return retValue;

}

extern "C" int QMetaObject_enumeratorCount_SMIX10(QMetaObject* self) {

	int retValue = self->enumeratorCount();
	return retValue;

}

extern "C" int QMetaObject_propertyCount_SMIX11(QMetaObject* self) {

	int retValue = self->propertyCount();
	return retValue;

}

extern "C" int QMetaObject_classInfoCount_SMIX12(QMetaObject* self) {

	int retValue = self->classInfoCount();
	return retValue;

}

extern "C" int QMetaObject_indexOfMethod_SMIX13(QMetaObject* self, char* method___SMI) {
	char* method = convertPCharToPCharArgument(method___SMI);

	int retValue = self->indexOfMethod(method);
	return retValue;

}

extern "C" int QMetaObject_indexOfSignal_SMIX14(QMetaObject* self, char* signal___SMI) {
	char* signal = convertPCharToPCharArgument(signal___SMI);

	int retValue = self->indexOfSignal(signal);
	return retValue;

}

extern "C" int QMetaObject_indexOfSlot_SMIX15(QMetaObject* self, char* slot___SMI) {
	char* slot = convertPCharToPCharArgument(slot___SMI);

	int retValue = self->indexOfSlot(slot);
	return retValue;

}

extern "C" int QMetaObject_indexOfEnumerator_SMIX16(QMetaObject* self, char* name___SMI) {
	char* name = convertPCharToPCharArgument(name___SMI);

	int retValue = self->indexOfEnumerator(name);
	return retValue;

}

extern "C" int QMetaObject_indexOfProperty_SMIX17(QMetaObject* self, char* name___SMI) {
	char* name = convertPCharToPCharArgument(name___SMI);

	int retValue = self->indexOfProperty(name);
	return retValue;

}

extern "C" int QMetaObject_indexOfClassInfo_SMIX18(QMetaObject* self, char* name___SMI) {
	char* name = convertPCharToPCharArgument(name___SMI);

	int retValue = self->indexOfClassInfo(name);
	return retValue;

}

extern "C" bool QMetaObject_checkConnectArgs_SMIX23(char* signal___SMI, char* method___SMI) {
	char* signal = convertPCharToPCharArgument(signal___SMI);
	char* method = convertPCharToPCharArgument(method___SMI);

	bool retValue = QMetaObject::checkConnectArgs(signal, method);
	return retValue;

}

extern "C" void QMetaObject_connectSlotsByName_SMIX24(QObject* o) {

	QMetaObject::connectSlotsByName(o);

}

extern "C" int QMetaObject_constructorCount_SMIX28(QMetaObject* self) {

	int retValue = self->constructorCount();
	return retValue;

}

extern "C" int QMetaObject_indexOfConstructor_SMIX29(QMetaObject* self, char* constructor___SMI) {
	char* constructor = convertPCharToPCharArgument(constructor___SMI);

	int retValue = self->indexOfConstructor(constructor);
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QMetaObject_CPPObject(QMetaObject* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QMetaObject_SMI_CPPObject(QMetaObject_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QMetaObject
