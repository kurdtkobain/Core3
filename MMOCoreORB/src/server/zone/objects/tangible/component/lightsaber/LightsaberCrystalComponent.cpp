/*
 *	server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.cpp generated by engine3 IDL compiler 0.60
 */

#include "LightsaberCrystalComponent.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

/*
 *	LightsaberCrystalComponentStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_FILLOBJECTMENURESPONSE__OBJECTMENURESPONSE_CREATUREOBJECT_,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_TUNECRYSTAL__CREATUREOBJECT_,RPC_UPDATECRYSTAL__INT_,RPC_GETMINIMUMDAMAGE__,RPC_GETMAXIMUMDAMAGE__,RPC_GETFORCECOST__,RPC_GETSACHEALTH__,RPC_GETATTACKSPEED__,RPC_GETSACACTION__,RPC_GETSACMIND__,RPC_GETWOUNDCHANCE__,RPC_GETOWNER__,RPC_GETQUALITY__,RPC_SETQUALITY__INT_,RPC_GETCOLOR__,RPC_SETCOLOR__INT_,RPC_SETOWNER__STRING_,RPC_SETMINIMUMDAMAGE__INT_,RPC_SETMAXIMUMDAMAGE__INT_,RPC_SETFORCECOST__INT_,RPC_SETSACHEALTH__INT_,RPC_SETSACACTION__INT_,RPC_SETSACMIND__INT_,RPC_SETATTACKSPEED__FLOAT_,RPC_SETWOUNDCHANCE__INT_,RPC_ISLIGHTSABERCRYSTALOBJECT__};

LightsaberCrystalComponent::LightsaberCrystalComponent() : Component(DummyConstructorParameter::instance()) {
	LightsaberCrystalComponentImplementation* _implementation = new LightsaberCrystalComponentImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("LightsaberCrystalComponent");
}

LightsaberCrystalComponent::LightsaberCrystalComponent(DummyConstructorParameter* param) : Component(param) {
	_setClassName("LightsaberCrystalComponent");
}

LightsaberCrystalComponent::~LightsaberCrystalComponent() {
}



void LightsaberCrystalComponent::initializeTransientMembers() {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void LightsaberCrystalComponent::loadTemplateData(SharedObjectTemplate* templateData) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void LightsaberCrystalComponent::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(values, firstUpdate);
}

void LightsaberCrystalComponent::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void LightsaberCrystalComponent::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FILLOBJECTMENURESPONSE__OBJECTMENURESPONSE_CREATUREOBJECT_);
		method.addObjectParameter(menuResponse);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int LightsaberCrystalComponent::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void LightsaberCrystalComponent::tuneCrystal(CreatureObject* player) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_TUNECRYSTAL__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->tuneCrystal(player);
}

void LightsaberCrystalComponent::updateCrystal(int value) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATECRYSTAL__INT_);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->updateCrystal(value);
}

int LightsaberCrystalComponent::getMinimumDamage() {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMINIMUMDAMAGE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getMinimumDamage();
}

int LightsaberCrystalComponent::getMaximumDamage() {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMAXIMUMDAMAGE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getMaximumDamage();
}

int LightsaberCrystalComponent::getForceCost() {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETFORCECOST__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getForceCost();
}

int LightsaberCrystalComponent::getSacHealth() {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSACHEALTH__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getSacHealth();
}

float LightsaberCrystalComponent::getAttackSpeed() {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETATTACKSPEED__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getAttackSpeed();
}

int LightsaberCrystalComponent::getSacAction() {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSACACTION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getSacAction();
}

int LightsaberCrystalComponent::getSacMind() {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSACMIND__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getSacMind();
}

int LightsaberCrystalComponent::getWoundChance() {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETWOUNDCHANCE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getWoundChance();
}

String LightsaberCrystalComponent::getOwner() {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOWNER__);

		String _return_getOwner;
		method.executeWithAsciiReturn(_return_getOwner);
		return _return_getOwner;
	} else
		return _implementation->getOwner();
}

int LightsaberCrystalComponent::getQuality() {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETQUALITY__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getQuality();
}

void LightsaberCrystalComponent::setQuality(int qual) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETQUALITY__INT_);
		method.addSignedIntParameter(qual);

		method.executeWithVoidReturn();
	} else
		_implementation->setQuality(qual);
}

int LightsaberCrystalComponent::getColor() {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCOLOR__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getColor();
}

void LightsaberCrystalComponent::setColor(int value) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETCOLOR__INT_);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setColor(value);
}

void LightsaberCrystalComponent::setOwner(String& value) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETOWNER__STRING_);
		method.addAsciiParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setOwner(value);
}

void LightsaberCrystalComponent::setMinimumDamage(int value) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETMINIMUMDAMAGE__INT_);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setMinimumDamage(value);
}

void LightsaberCrystalComponent::setMaximumDamage(int value) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETMAXIMUMDAMAGE__INT_);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setMaximumDamage(value);
}

void LightsaberCrystalComponent::setForceCost(int value) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETFORCECOST__INT_);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setForceCost(value);
}

void LightsaberCrystalComponent::setSacHealth(int value) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSACHEALTH__INT_);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setSacHealth(value);
}

void LightsaberCrystalComponent::setSacAction(int value) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSACACTION__INT_);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setSacAction(value);
}

void LightsaberCrystalComponent::setSacMind(int value) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSACMIND__INT_);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setSacMind(value);
}

void LightsaberCrystalComponent::setAttackSpeed(float value) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETATTACKSPEED__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setAttackSpeed(value);
}

void LightsaberCrystalComponent::setWoundChance(int value) {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETWOUNDCHANCE__INT_);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setWoundChance(value);
}

bool LightsaberCrystalComponent::isLightsaberCrystalObject() {
	LightsaberCrystalComponentImplementation* _implementation = static_cast<LightsaberCrystalComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISLIGHTSABERCRYSTALOBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isLightsaberCrystalObject();
}

DistributedObjectServant* LightsaberCrystalComponent::_getImplementation() {

	_updated = true;
	return _impl;
}

void LightsaberCrystalComponent::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	LightsaberCrystalComponentImplementation
 */

LightsaberCrystalComponentImplementation::LightsaberCrystalComponentImplementation(DummyConstructorParameter* param) : ComponentImplementation(param) {
	_initializeImplementation();
}


LightsaberCrystalComponentImplementation::~LightsaberCrystalComponentImplementation() {
}


void LightsaberCrystalComponentImplementation::finalize() {
}

void LightsaberCrystalComponentImplementation::_initializeImplementation() {
	_setClassHelper(LightsaberCrystalComponentHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void LightsaberCrystalComponentImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<LightsaberCrystalComponent*>(stub);
	ComponentImplementation::_setStub(stub);
}

DistributedObjectStub* LightsaberCrystalComponentImplementation::_getStub() {
	return _this;
}

LightsaberCrystalComponentImplementation::operator const LightsaberCrystalComponent*() {
	return _this;
}

void LightsaberCrystalComponentImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void LightsaberCrystalComponentImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void LightsaberCrystalComponentImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void LightsaberCrystalComponentImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void LightsaberCrystalComponentImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void LightsaberCrystalComponentImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void LightsaberCrystalComponentImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void LightsaberCrystalComponentImplementation::_serializationHelperMethod() {
	ComponentImplementation::_serializationHelperMethod();

	_setClassName("LightsaberCrystalComponent");

}

void LightsaberCrystalComponentImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(LightsaberCrystalComponentImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool LightsaberCrystalComponentImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ComponentImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "LightsaberCrystalComponent.postTuneName") {
		TypeInfo<String >::parseFromBinaryStream(&postTuneName, stream);
		return true;
	}

	if (_name == "LightsaberCrystalComponent.color") {
		TypeInfo<int >::parseFromBinaryStream(&color, stream);
		return true;
	}

	if (_name == "LightsaberCrystalComponent.quality") {
		TypeInfo<int >::parseFromBinaryStream(&quality, stream);
		return true;
	}

	if (_name == "LightsaberCrystalComponent.owner") {
		TypeInfo<String >::parseFromBinaryStream(&owner, stream);
		return true;
	}

	if (_name == "LightsaberCrystalComponent.attackSpeed") {
		TypeInfo<float >::parseFromBinaryStream(&attackSpeed, stream);
		return true;
	}

	if (_name == "LightsaberCrystalComponent.minimumDamage") {
		TypeInfo<int >::parseFromBinaryStream(&minimumDamage, stream);
		return true;
	}

	if (_name == "LightsaberCrystalComponent.maximumDamage") {
		TypeInfo<int >::parseFromBinaryStream(&maximumDamage, stream);
		return true;
	}

	if (_name == "LightsaberCrystalComponent.forceCost") {
		TypeInfo<int >::parseFromBinaryStream(&forceCost, stream);
		return true;
	}

	if (_name == "LightsaberCrystalComponent.sacHealth") {
		TypeInfo<int >::parseFromBinaryStream(&sacHealth, stream);
		return true;
	}

	if (_name == "LightsaberCrystalComponent.sacAction") {
		TypeInfo<int >::parseFromBinaryStream(&sacAction, stream);
		return true;
	}

	if (_name == "LightsaberCrystalComponent.sacMind") {
		TypeInfo<int >::parseFromBinaryStream(&sacMind, stream);
		return true;
	}

	if (_name == "LightsaberCrystalComponent.woundChance") {
		TypeInfo<int >::parseFromBinaryStream(&woundChance, stream);
		return true;
	}

	if (_name == "LightsaberCrystalComponent.crystalType") {
		TypeInfo<String >::parseFromBinaryStream(&crystalType, stream);
		return true;
	}


	return false;
}

void LightsaberCrystalComponentImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = LightsaberCrystalComponentImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int LightsaberCrystalComponentImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ComponentImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "LightsaberCrystalComponent.postTuneName";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&postTuneName, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "LightsaberCrystalComponent.color";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&color, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "LightsaberCrystalComponent.quality";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&quality, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "LightsaberCrystalComponent.owner";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&owner, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "LightsaberCrystalComponent.attackSpeed";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&attackSpeed, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "LightsaberCrystalComponent.minimumDamage";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&minimumDamage, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "LightsaberCrystalComponent.maximumDamage";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&maximumDamage, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "LightsaberCrystalComponent.forceCost";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&forceCost, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "LightsaberCrystalComponent.sacHealth";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&sacHealth, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "LightsaberCrystalComponent.sacAction";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&sacAction, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "LightsaberCrystalComponent.sacMind";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&sacMind, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "LightsaberCrystalComponent.woundChance";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&woundChance, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "LightsaberCrystalComponent.crystalType";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&crystalType, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 13;
}

LightsaberCrystalComponentImplementation::LightsaberCrystalComponentImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		attackSpeed = 0.0;
	attackSpeed = 0.0;
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		minimumDamage = 0;
	minimumDamage = 0;
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		maximumDamage = 0;
	maximumDamage = 0;
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		forceCost = 0;
	forceCost = 0;
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		sacHealth = 0;
	sacHealth = 0;
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		sacAction = 0;
	sacAction = 0;
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		sacMind = 0;
	sacMind = 0;
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		woundChance = 0;
	woundChance = 0;
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		color = 0;
	color = 0;
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		quality = 0;
	quality = 0;
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		postTuneName = "";
	postTuneName = "";
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		Logger.setLoggingName("LightsaberCrystal");
	Logger::setLoggingName("LightsaberCrystal");
}

int LightsaberCrystalComponentImplementation::getMinimumDamage() {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		return minimumDamage;
	return minimumDamage;
}

int LightsaberCrystalComponentImplementation::getMaximumDamage() {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		return maximumDamage;
	return maximumDamage;
}

int LightsaberCrystalComponentImplementation::getForceCost() {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		return forceCost;
	return forceCost;
}

int LightsaberCrystalComponentImplementation::getSacHealth() {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		return sacHealth;
	return sacHealth;
}

float LightsaberCrystalComponentImplementation::getAttackSpeed() {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		return attackSpeed;
	return attackSpeed;
}

int LightsaberCrystalComponentImplementation::getSacAction() {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		return sacAction;
	return sacAction;
}

int LightsaberCrystalComponentImplementation::getSacMind() {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		return sacMind;
	return sacMind;
}

int LightsaberCrystalComponentImplementation::getWoundChance() {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		return woundChance;
	return woundChance;
}

String LightsaberCrystalComponentImplementation::getOwner() {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		return owner;
	return owner;
}

int LightsaberCrystalComponentImplementation::getQuality() {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		return quality;
	return quality;
}

void LightsaberCrystalComponentImplementation::setQuality(int qual) {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		quality = qual;
	quality = qual;
}

int LightsaberCrystalComponentImplementation::getColor() {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		return color;
	return color;
}

void LightsaberCrystalComponentImplementation::setColor(int value) {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		color = value;
	color = value;
}

void LightsaberCrystalComponentImplementation::setOwner(String& value) {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		owner = value;
	owner = value;
}

void LightsaberCrystalComponentImplementation::setMinimumDamage(int value) {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		minimumDamage = value;
	minimumDamage = value;
}

void LightsaberCrystalComponentImplementation::setMaximumDamage(int value) {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		maximumDamage = value;
	maximumDamage = value;
}

void LightsaberCrystalComponentImplementation::setForceCost(int value) {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		forceCost = value;
	forceCost = value;
}

void LightsaberCrystalComponentImplementation::setSacHealth(int value) {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		sacHealth = value;
	sacHealth = value;
}

void LightsaberCrystalComponentImplementation::setSacAction(int value) {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		sacAction = value;
	sacAction = value;
}

void LightsaberCrystalComponentImplementation::setSacMind(int value) {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		sacMind = value;
	sacMind = value;
}

void LightsaberCrystalComponentImplementation::setAttackSpeed(float value) {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		attackSpeed = value;
	attackSpeed = value;
}

void LightsaberCrystalComponentImplementation::setWoundChance(int value) {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		woundChance = value;
	woundChance = value;
}

bool LightsaberCrystalComponentImplementation::isLightsaberCrystalObject() {
	// server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.idl():  		return true;
	return true;
}

/*
 *	LightsaberCrystalComponentAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


LightsaberCrystalComponentAdapter::LightsaberCrystalComponentAdapter(LightsaberCrystalComponent* obj) : ComponentAdapter(obj) {
}

void LightsaberCrystalComponentAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_FILLOBJECTMENURESPONSE__OBJECTMENURESPONSE_CREATUREOBJECT_:
		{
			fillObjectMenuResponse(static_cast<ObjectMenuResponse*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		}
		break;
	case RPC_TUNECRYSTAL__CREATUREOBJECT_:
		{
			tuneCrystal(static_cast<CreatureObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_UPDATECRYSTAL__INT_:
		{
			updateCrystal(inv->getSignedIntParameter());
		}
		break;
	case RPC_GETMINIMUMDAMAGE__:
		{
			resp->insertSignedInt(getMinimumDamage());
		}
		break;
	case RPC_GETMAXIMUMDAMAGE__:
		{
			resp->insertSignedInt(getMaximumDamage());
		}
		break;
	case RPC_GETFORCECOST__:
		{
			resp->insertSignedInt(getForceCost());
		}
		break;
	case RPC_GETSACHEALTH__:
		{
			resp->insertSignedInt(getSacHealth());
		}
		break;
	case RPC_GETATTACKSPEED__:
		{
			resp->insertFloat(getAttackSpeed());
		}
		break;
	case RPC_GETSACACTION__:
		{
			resp->insertSignedInt(getSacAction());
		}
		break;
	case RPC_GETSACMIND__:
		{
			resp->insertSignedInt(getSacMind());
		}
		break;
	case RPC_GETWOUNDCHANCE__:
		{
			resp->insertSignedInt(getWoundChance());
		}
		break;
	case RPC_GETOWNER__:
		{
			resp->insertAscii(getOwner());
		}
		break;
	case RPC_GETQUALITY__:
		{
			resp->insertSignedInt(getQuality());
		}
		break;
	case RPC_SETQUALITY__INT_:
		{
			setQuality(inv->getSignedIntParameter());
		}
		break;
	case RPC_GETCOLOR__:
		{
			resp->insertSignedInt(getColor());
		}
		break;
	case RPC_SETCOLOR__INT_:
		{
			setColor(inv->getSignedIntParameter());
		}
		break;
	case RPC_SETOWNER__STRING_:
		{
			String value; 
			setOwner(inv->getAsciiParameter(value));
		}
		break;
	case RPC_SETMINIMUMDAMAGE__INT_:
		{
			setMinimumDamage(inv->getSignedIntParameter());
		}
		break;
	case RPC_SETMAXIMUMDAMAGE__INT_:
		{
			setMaximumDamage(inv->getSignedIntParameter());
		}
		break;
	case RPC_SETFORCECOST__INT_:
		{
			setForceCost(inv->getSignedIntParameter());
		}
		break;
	case RPC_SETSACHEALTH__INT_:
		{
			setSacHealth(inv->getSignedIntParameter());
		}
		break;
	case RPC_SETSACACTION__INT_:
		{
			setSacAction(inv->getSignedIntParameter());
		}
		break;
	case RPC_SETSACMIND__INT_:
		{
			setSacMind(inv->getSignedIntParameter());
		}
		break;
	case RPC_SETATTACKSPEED__FLOAT_:
		{
			setAttackSpeed(inv->getFloatParameter());
		}
		break;
	case RPC_SETWOUNDCHANCE__INT_:
		{
			setWoundChance(inv->getSignedIntParameter());
		}
		break;
	case RPC_ISLIGHTSABERCRYSTALOBJECT__:
		{
			resp->insertBoolean(isLightsaberCrystalObject());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void LightsaberCrystalComponentAdapter::initializeTransientMembers() {
	(static_cast<LightsaberCrystalComponent*>(stub))->initializeTransientMembers();
}

void LightsaberCrystalComponentAdapter::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	(static_cast<LightsaberCrystalComponent*>(stub))->fillObjectMenuResponse(menuResponse, player);
}

int LightsaberCrystalComponentAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<LightsaberCrystalComponent*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void LightsaberCrystalComponentAdapter::tuneCrystal(CreatureObject* player) {
	(static_cast<LightsaberCrystalComponent*>(stub))->tuneCrystal(player);
}

void LightsaberCrystalComponentAdapter::updateCrystal(int value) {
	(static_cast<LightsaberCrystalComponent*>(stub))->updateCrystal(value);
}

int LightsaberCrystalComponentAdapter::getMinimumDamage() {
	return (static_cast<LightsaberCrystalComponent*>(stub))->getMinimumDamage();
}

int LightsaberCrystalComponentAdapter::getMaximumDamage() {
	return (static_cast<LightsaberCrystalComponent*>(stub))->getMaximumDamage();
}

int LightsaberCrystalComponentAdapter::getForceCost() {
	return (static_cast<LightsaberCrystalComponent*>(stub))->getForceCost();
}

int LightsaberCrystalComponentAdapter::getSacHealth() {
	return (static_cast<LightsaberCrystalComponent*>(stub))->getSacHealth();
}

float LightsaberCrystalComponentAdapter::getAttackSpeed() {
	return (static_cast<LightsaberCrystalComponent*>(stub))->getAttackSpeed();
}

int LightsaberCrystalComponentAdapter::getSacAction() {
	return (static_cast<LightsaberCrystalComponent*>(stub))->getSacAction();
}

int LightsaberCrystalComponentAdapter::getSacMind() {
	return (static_cast<LightsaberCrystalComponent*>(stub))->getSacMind();
}

int LightsaberCrystalComponentAdapter::getWoundChance() {
	return (static_cast<LightsaberCrystalComponent*>(stub))->getWoundChance();
}

String LightsaberCrystalComponentAdapter::getOwner() {
	return (static_cast<LightsaberCrystalComponent*>(stub))->getOwner();
}

int LightsaberCrystalComponentAdapter::getQuality() {
	return (static_cast<LightsaberCrystalComponent*>(stub))->getQuality();
}

void LightsaberCrystalComponentAdapter::setQuality(int qual) {
	(static_cast<LightsaberCrystalComponent*>(stub))->setQuality(qual);
}

int LightsaberCrystalComponentAdapter::getColor() {
	return (static_cast<LightsaberCrystalComponent*>(stub))->getColor();
}

void LightsaberCrystalComponentAdapter::setColor(int value) {
	(static_cast<LightsaberCrystalComponent*>(stub))->setColor(value);
}

void LightsaberCrystalComponentAdapter::setOwner(String& value) {
	(static_cast<LightsaberCrystalComponent*>(stub))->setOwner(value);
}

void LightsaberCrystalComponentAdapter::setMinimumDamage(int value) {
	(static_cast<LightsaberCrystalComponent*>(stub))->setMinimumDamage(value);
}

void LightsaberCrystalComponentAdapter::setMaximumDamage(int value) {
	(static_cast<LightsaberCrystalComponent*>(stub))->setMaximumDamage(value);
}

void LightsaberCrystalComponentAdapter::setForceCost(int value) {
	(static_cast<LightsaberCrystalComponent*>(stub))->setForceCost(value);
}

void LightsaberCrystalComponentAdapter::setSacHealth(int value) {
	(static_cast<LightsaberCrystalComponent*>(stub))->setSacHealth(value);
}

void LightsaberCrystalComponentAdapter::setSacAction(int value) {
	(static_cast<LightsaberCrystalComponent*>(stub))->setSacAction(value);
}

void LightsaberCrystalComponentAdapter::setSacMind(int value) {
	(static_cast<LightsaberCrystalComponent*>(stub))->setSacMind(value);
}

void LightsaberCrystalComponentAdapter::setAttackSpeed(float value) {
	(static_cast<LightsaberCrystalComponent*>(stub))->setAttackSpeed(value);
}

void LightsaberCrystalComponentAdapter::setWoundChance(int value) {
	(static_cast<LightsaberCrystalComponent*>(stub))->setWoundChance(value);
}

bool LightsaberCrystalComponentAdapter::isLightsaberCrystalObject() {
	return (static_cast<LightsaberCrystalComponent*>(stub))->isLightsaberCrystalObject();
}

/*
 *	LightsaberCrystalComponentHelper
 */

LightsaberCrystalComponentHelper* LightsaberCrystalComponentHelper::staticInitializer = LightsaberCrystalComponentHelper::instance();

LightsaberCrystalComponentHelper::LightsaberCrystalComponentHelper() {
	className = "LightsaberCrystalComponent";

	Core::getObjectBroker()->registerClass(className, this);
}

void LightsaberCrystalComponentHelper::finalizeHelper() {
	LightsaberCrystalComponentHelper::finalize();
}

DistributedObject* LightsaberCrystalComponentHelper::instantiateObject() {
	return new LightsaberCrystalComponent(DummyConstructorParameter::instance());
}

DistributedObjectServant* LightsaberCrystalComponentHelper::instantiateServant() {
	return new LightsaberCrystalComponentImplementation();
}

DistributedObjectAdapter* LightsaberCrystalComponentHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new LightsaberCrystalComponentAdapter(static_cast<LightsaberCrystalComponent*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

