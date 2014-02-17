
/*
* CPP Wrapper for QFlags
*/

#include <instance_tracker.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QFlags_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QFlags_SMI: QFlags {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QFlags_SMI* SMIMake_QFlags(const QFlags& arg0) {
	QFlags_SMI* retVal = new QFlags_SMI(arg0);
	registerDInstance(retVal);
	return retVal;
};

private:
    QFlags_SMI(const QFlags& arg0): QFlags(arg0) {inhibitDestructorCallbackToD = false;};


public:
	
static QFlags_SMI* SMIMake_QFlags(int arg0) {
	QFlags_SMI* retVal = new QFlags_SMI(arg0);
	registerDInstance(retVal);
	return retVal;
};

private:
    QFlags_SMI(int arg0): QFlags(arg0) {inhibitDestructorCallbackToD = false;};


public:
	
static QFlags_SMI* SMIMake_QFlags() {
	QFlags_SMI* retVal = new QFlags_SMI();
	registerDInstance(retVal);
	return retVal;
};

private:
    QFlags_SMI(): QFlags() {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QFlags_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QFlags_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QFlags_SMI* QFlags_QFlags_SMIX1(const QFlags& arg0) {
	
	QFlags_SMI* obj = QFlags_SMI::SMIMake_QFlags(arg0);
	return obj;
}


extern "C" QFlags_SMI* QFlags_QFlags_SMIX5(int arg0) {
	
	QFlags_SMI* obj = QFlags_SMI::SMIMake_QFlags(arg0);
	return obj;
}


extern "C" QFlags_SMI* QFlags_QFlags_SMIX6() {
	
	QFlags_SMI* obj = QFlags_SMI::SMIMake_QFlags();
	return obj;
}


extern "C" QFlags& QFlags_operatorpipeequals_SMIX8(QFlags* self, QFlags f) {

	QFlags& retValue = self->operator|=(f);
	return retValue;

}

extern "C" QFlags* QFlags_operatorpipe_SMIX13(QFlags* self, QFlags f) {

	QFlags retValue = self->operator|(f);
	QFlags* copiedRetValue = new QFlags(retValue);
	return copiedRetValue;

}

extern "C" QFlags* QFlags_operatorpipe_SMIX26(QFlags* self, int f) {

	QFlags retValue = self->operator|(f);
	QFlags* copiedRetValue = new QFlags(retValue);
	return copiedRetValue;

}

extern "C" bool QFlags_operatorequals_SMIX31(QFlags* self, const QFlags& f) {

	bool retValue = self->operator==(f);
	return retValue;

}

extern "C" bool QFlags_operatornotequals_SMIX33(QFlags* self, const QFlags& f) {

	bool retValue = self->operator!=(f);
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QFlags_CPPObject(QFlags* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QFlags_SMI_CPPObject(QFlags_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QFlags
