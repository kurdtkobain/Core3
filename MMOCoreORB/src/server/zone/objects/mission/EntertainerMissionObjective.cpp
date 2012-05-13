/*
 *	server/zone/objects/mission/EntertainerMissionObjective.cpp generated by engine3 IDL compiler 0.60
 */

#include "EntertainerMissionObjective.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/mission/MissionObserver.h"

#include "server/zone/objects/area/MissionSpawnActiveArea.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	EntertainerMissionObjectiveStub
 */

enum {RPC_FINALIZE__ = 6,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_ACTIVATE__,RPC_ABORT__,RPC_COMPLETE__,RPC_SETISENTERTAINING__BOOL_,RPC_CLEARLOCATIONACTIVEAREAANDOBSERVERS__,RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_,RPC_STARTCOMPLETETASK__,};

EntertainerMissionObjective::EntertainerMissionObjective(MissionObject* mission) : MissionObjective(DummyConstructorParameter::instance()) {
	EntertainerMissionObjectiveImplementation* _implementation = new EntertainerMissionObjectiveImplementation(mission);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("EntertainerMissionObjective");
}

EntertainerMissionObjective::EntertainerMissionObjective(DummyConstructorParameter* param) : MissionObjective(param) {
	_setClassName("EntertainerMissionObjective");
}

EntertainerMissionObjective::~EntertainerMissionObjective() {
}



void EntertainerMissionObjective::initializeTransientMembers() {
	EntertainerMissionObjectiveImplementation* _implementation = static_cast<EntertainerMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void EntertainerMissionObjective::activate() {
	EntertainerMissionObjectiveImplementation* _implementation = static_cast<EntertainerMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__);

		method.executeWithVoidReturn();
	} else
		_implementation->activate();
}

void EntertainerMissionObjective::abort() {
	EntertainerMissionObjectiveImplementation* _implementation = static_cast<EntertainerMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ABORT__);

		method.executeWithVoidReturn();
	} else
		_implementation->abort();
}

void EntertainerMissionObjective::complete() {
	EntertainerMissionObjectiveImplementation* _implementation = static_cast<EntertainerMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMPLETE__);

		method.executeWithVoidReturn();
	} else
		_implementation->complete();
}

void EntertainerMissionObjective::setIsEntertaining(bool value) {
	EntertainerMissionObjectiveImplementation* _implementation = static_cast<EntertainerMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETISENTERTAINING__BOOL_);
		method.addBooleanParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setIsEntertaining(value);
}

void EntertainerMissionObjective::clearLocationActiveAreaAndObservers() {
	EntertainerMissionObjectiveImplementation* _implementation = static_cast<EntertainerMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARLOCATIONACTIVEAREAANDOBSERVERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->clearLocationActiveAreaAndObservers();
}

int EntertainerMissionObjective::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	EntertainerMissionObjectiveImplementation* _implementation = static_cast<EntertainerMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addObjectParameter(observer);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

void EntertainerMissionObjective::startCompleteTask() {
	EntertainerMissionObjectiveImplementation* _implementation = static_cast<EntertainerMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STARTCOMPLETETASK__);

		method.executeWithVoidReturn();
	} else
		_implementation->startCompleteTask();
}

Vector3 EntertainerMissionObjective::getEndPosition() {
	EntertainerMissionObjectiveImplementation* _implementation = static_cast<EntertainerMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getEndPosition();
}

DistributedObjectServant* EntertainerMissionObjective::_getImplementation() {

	_updated = true;
	return _impl;
}

void EntertainerMissionObjective::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	EntertainerMissionObjectiveImplementation
 */

EntertainerMissionObjectiveImplementation::EntertainerMissionObjectiveImplementation(DummyConstructorParameter* param) : MissionObjectiveImplementation(param) {
	_initializeImplementation();
}


EntertainerMissionObjectiveImplementation::~EntertainerMissionObjectiveImplementation() {
	EntertainerMissionObjectiveImplementation::finalize();
}


void EntertainerMissionObjectiveImplementation::_initializeImplementation() {
	_setClassHelper(EntertainerMissionObjectiveHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void EntertainerMissionObjectiveImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<EntertainerMissionObjective*>(stub);
	MissionObjectiveImplementation::_setStub(stub);
}

DistributedObjectStub* EntertainerMissionObjectiveImplementation::_getStub() {
	return _this;
}

EntertainerMissionObjectiveImplementation::operator const EntertainerMissionObjective*() {
	return _this;
}

void EntertainerMissionObjectiveImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void EntertainerMissionObjectiveImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void EntertainerMissionObjectiveImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void EntertainerMissionObjectiveImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void EntertainerMissionObjectiveImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void EntertainerMissionObjectiveImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void EntertainerMissionObjectiveImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void EntertainerMissionObjectiveImplementation::_serializationHelperMethod() {
	MissionObjectiveImplementation::_serializationHelperMethod();

	_setClassName("EntertainerMissionObjective");

}

void EntertainerMissionObjectiveImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(EntertainerMissionObjectiveImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool EntertainerMissionObjectiveImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (MissionObjectiveImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "EntertainerMissionObjective.inMissionArea") {
		TypeInfo<bool >::parseFromBinaryStream(&inMissionArea, stream);
		return true;
	}

	if (_name == "EntertainerMissionObjective.isEntertaining") {
		TypeInfo<bool >::parseFromBinaryStream(&isEntertaining, stream);
		return true;
	}

	if (_name == "EntertainerMissionObjective.locationActiveArea") {
		TypeInfo<ManagedReference<ActiveArea* > >::parseFromBinaryStream(&locationActiveArea, stream);
		return true;
	}

	if (_name == "EntertainerMissionObjective.completeTask") {
		TypeInfo<Reference<CompleteMissionAfterCertainTimeTask* > >::parseFromBinaryStream(&completeTask, stream);
		return true;
	}


	return false;
}

void EntertainerMissionObjectiveImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = EntertainerMissionObjectiveImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int EntertainerMissionObjectiveImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = MissionObjectiveImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "EntertainerMissionObjective.inMissionArea";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&inMissionArea, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "EntertainerMissionObjective.isEntertaining";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&isEntertaining, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "EntertainerMissionObjective.locationActiveArea";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<ActiveArea* > >::toBinaryStream(&locationActiveArea, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "EntertainerMissionObjective.completeTask";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Reference<CompleteMissionAfterCertainTimeTask* > >::toBinaryStream(&completeTask, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 4;
}

EntertainerMissionObjectiveImplementation::EntertainerMissionObjectiveImplementation(MissionObject* mission) : MissionObjectiveImplementation(mission) {
	_initializeImplementation();
	// server/zone/objects/mission/EntertainerMissionObjective.idl():  		inMissionArea = false;
	inMissionArea = false;
	// server/zone/objects/mission/EntertainerMissionObjective.idl():  		isEntertaining = false;
	isEntertaining = false;
	// server/zone/objects/mission/EntertainerMissionObjective.idl():  		locationActiveArea = null;
	locationActiveArea = NULL;
	// server/zone/objects/mission/EntertainerMissionObjective.idl():  		completeTask = null;
	completeTask = NULL;
	// server/zone/objects/mission/EntertainerMissionObjective.idl():  		Logger.setLoggingName("EntertainerMissionObjective");
	Logger::setLoggingName("EntertainerMissionObjective");
}

void EntertainerMissionObjectiveImplementation::finalize() {
}

void EntertainerMissionObjectiveImplementation::initializeTransientMembers() {
	// server/zone/objects/mission/EntertainerMissionObjective.idl():  		super.initializeTransientMembers();
	MissionObjectiveImplementation::initializeTransientMembers();
	// server/zone/objects/mission/EntertainerMissionObjective.idl():  		Logger.setLoggingName("MissionObject");
	Logger::setLoggingName("MissionObject");
}

/*
 *	EntertainerMissionObjectiveAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


EntertainerMissionObjectiveAdapter::EntertainerMissionObjectiveAdapter(EntertainerMissionObjective* obj) : MissionObjectiveAdapter(obj) {
}

void EntertainerMissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_FINALIZE__:
		{
			finalize();
		}
		break;
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_ACTIVATE__:
		{
			activate();
		}
		break;
	case RPC_ABORT__:
		{
			abort();
		}
		break;
	case RPC_COMPLETE__:
		{
			complete();
		}
		break;
	case RPC_SETISENTERTAINING__BOOL_:
		{
			setIsEntertaining(inv->getBooleanParameter());
		}
		break;
	case RPC_CLEARLOCATIONACTIVEAREAANDOBSERVERS__:
		{
			clearLocationActiveAreaAndObservers();
		}
		break;
	case RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		{
			resp->insertSignedInt(notifyObserverEvent(static_cast<MissionObserver*>(inv->getObjectParameter()), inv->getUnsignedIntParameter(), static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()), inv->getSignedLongParameter()));
		}
		break;
	case RPC_STARTCOMPLETETASK__:
		{
			startCompleteTask();
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void EntertainerMissionObjectiveAdapter::finalize() {
	(static_cast<EntertainerMissionObjective*>(stub))->finalize();
}

void EntertainerMissionObjectiveAdapter::initializeTransientMembers() {
	(static_cast<EntertainerMissionObjective*>(stub))->initializeTransientMembers();
}

void EntertainerMissionObjectiveAdapter::activate() {
	(static_cast<EntertainerMissionObjective*>(stub))->activate();
}

void EntertainerMissionObjectiveAdapter::abort() {
	(static_cast<EntertainerMissionObjective*>(stub))->abort();
}

void EntertainerMissionObjectiveAdapter::complete() {
	(static_cast<EntertainerMissionObjective*>(stub))->complete();
}

void EntertainerMissionObjectiveAdapter::setIsEntertaining(bool value) {
	(static_cast<EntertainerMissionObjective*>(stub))->setIsEntertaining(value);
}

void EntertainerMissionObjectiveAdapter::clearLocationActiveAreaAndObservers() {
	(static_cast<EntertainerMissionObjective*>(stub))->clearLocationActiveAreaAndObservers();
}

int EntertainerMissionObjectiveAdapter::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<EntertainerMissionObjective*>(stub))->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

void EntertainerMissionObjectiveAdapter::startCompleteTask() {
	(static_cast<EntertainerMissionObjective*>(stub))->startCompleteTask();
}

/*
 *	EntertainerMissionObjectiveHelper
 */

EntertainerMissionObjectiveHelper* EntertainerMissionObjectiveHelper::staticInitializer = EntertainerMissionObjectiveHelper::instance();

EntertainerMissionObjectiveHelper::EntertainerMissionObjectiveHelper() {
	className = "EntertainerMissionObjective";

	Core::getObjectBroker()->registerClass(className, this);
}

void EntertainerMissionObjectiveHelper::finalizeHelper() {
	EntertainerMissionObjectiveHelper::finalize();
}

DistributedObject* EntertainerMissionObjectiveHelper::instantiateObject() {
	return new EntertainerMissionObjective(DummyConstructorParameter::instance());
}

DistributedObjectServant* EntertainerMissionObjectiveHelper::instantiateServant() {
	return new EntertainerMissionObjectiveImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* EntertainerMissionObjectiveHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new EntertainerMissionObjectiveAdapter(static_cast<EntertainerMissionObjective*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

