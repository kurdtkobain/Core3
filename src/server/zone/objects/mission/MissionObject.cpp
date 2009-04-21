/*
 *	server/zone/objects/mission/MissionObject.cpp generated by engine3 IDL compiler 0.55
 */

#include "MissionObject.h"

#include "MissionObjectImplementation.h"

#include "../scene/SceneObject.h"

#include "../player/Player.h"

#include "../tangible/TangibleObject.h"

#include "MissionObjective.h"

/*
 *	MissionObjectStub
 */

MissionObject::MissionObject(unsigned long long oid, Player* owner) : SceneObject(DummyConstructorParameter::instance()) {
	_impl = new MissionObjectImplementation(oid, owner);
	_impl->_setStub(this);
}

MissionObject::MissionObject(DummyConstructorParameter* param) : SceneObject(param) {
}

MissionObject::~MissionObject() {
}

void MissionObject::init() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->init();
}

void MissionObject::assetSetup() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->assetSetup();
}

void MissionObject::assetPart(bool award) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addBooleanParameter(award);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->assetPart(award);
}

void MissionObject::sendTo(Player* player, bool doClose) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->sendTo(player, doClose);
}

void MissionObject::sendDeltaTo(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->sendDeltaTo(player);
}

void MissionObject::doLinkToPlayer(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->doLinkToPlayer(player);
}

void MissionObject::sendDestroyTo(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->sendDestroyTo(player);
}

void MissionObject::setOwner(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setOwner(player);
}

Player* MissionObject::getOwner() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return (Player*) method.executeWithObjectReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getOwner();
}

void MissionObject::setDBKey(const String& tdbk) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addAsciiParameter(tdbk);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDBKey(tdbk);
}

String& MissionObject::getDBKey() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		method.executeWithAsciiReturn(_return_getDBKey);
		return _return_getDBKey;
	} else
		return ((MissionObjectImplementation*) _impl)->getDBKey();
}

void MissionObject::applyTerminalMask(int tam) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addSignedIntParameter(tam);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->applyTerminalMask(tam);
}

int MissionObject::getTerminalMask() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithSignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getTerminalMask();
}

void MissionObject::addDeliverItem(TangibleObject* item) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->addDeliverItem(item);
}

TangibleObject* MissionObject::getDeliverItem(unsigned long long oid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addUnsignedLongParameter(oid);

		return (TangibleObject*) method.executeWithObjectReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDeliverItem(oid);
}

void MissionObject::removeDeliverItem(SceneObject* item) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->removeDeliverItem(item);
}

void MissionObject::addAwardItem(TangibleObject* item) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->addAwardItem(item);
}

TangibleObject* MissionObject::getAwardItem(unsigned long long oid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addUnsignedLongParameter(oid);

		return (TangibleObject*) method.executeWithObjectReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getAwardItem(oid);
}

void MissionObject::removeAwardItem(SceneObject* item) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->removeAwardItem(item);
}

void MissionObject::setObjectiveDefaults(const String& od) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addAsciiParameter(od);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setObjectiveDefaults(od);
}

String& MissionObject::getObjectiveDefaults() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		method.executeWithAsciiReturn(_return_getObjectiveDefaults);
		return _return_getObjectiveDefaults;
	} else
		return ((MissionObjectImplementation*) _impl)->getObjectiveDefaults();
}

bool MissionObject::isInstantComplete() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithBooleanReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->isInstantComplete();
}

void MissionObject::setInstantComplete(bool temp) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addBooleanParameter(temp);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setInstantComplete(temp);
}

bool MissionObject::isComplete() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithBooleanReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->isComplete();
}

bool MissionObject::isFailure() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithBooleanReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->isFailure();
}

void MissionObject::addObjective(MissionObjective* mo, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addObjectParameter(mo);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->addObjective(mo, doLock);
}

void MissionObject::spawnObjectives(const String& objectives, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);
		method.addAsciiParameter(objectives);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->spawnObjectives(objectives, doLock);
}

void MissionObject::serializeObjectives(String& ret, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addAsciiParameter(ret);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->serializeObjectives(ret, doLock);
}

int MissionObject::updateStatus(int type, unsigned int objCrc, const String& str, String& updateStr, int increment, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addSignedIntParameter(type);
		method.addUnsignedIntParameter(objCrc);
		method.addAsciiParameter(str);
		method.addAsciiParameter(updateStr);
		method.addSignedIntParameter(increment);
		method.addBooleanParameter(doLock);

		return method.executeWithSignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->updateStatus(type, objCrc, str, updateStr, increment, doLock);
}

void MissionObject::checkComplete(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->checkComplete(doLock);
}

void MissionObject::setTypeStr(const String& tstr) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);
		method.addAsciiParameter(tstr);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTypeStr(tstr);
}

String& MissionObject::getTypeStr() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		method.executeWithAsciiReturn(_return_getTypeStr);
		return _return_getTypeStr;
	} else
		return ((MissionObjectImplementation*) _impl)->getTypeStr();
}

void MissionObject::setDescKey(int tdk) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);
		method.addSignedIntParameter(tdk);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDescKey(tdk);
}

unsigned int MissionObject::getDescKey() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDescKey();
}

void MissionObject::setTitleKey(int ttk) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);
		method.addSignedIntParameter(ttk);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTitleKey(ttk);
}

unsigned int MissionObject::getTitleKey() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getTitleKey();
}

void MissionObject::setDifficultyLevel(unsigned int tdlv) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);
		method.addUnsignedIntParameter(tdlv);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDifficultyLevel(tdlv);
}

unsigned int MissionObject::getDifficultyLevel() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDifficultyLevel();
}

void MissionObject::setDestX(float tdx) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);
		method.addFloatParameter(tdx);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDestX(tdx);
}

float MissionObject::getDestX() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);

		return method.executeWithFloatReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDestX();
}

void MissionObject::setDestY(float tdy) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);
		method.addFloatParameter(tdy);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDestY(tdy);
}

float MissionObject::getDestY() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 47);

		return method.executeWithFloatReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDestY();
}

void MissionObject::setDestPlanetCrc(unsigned int tpc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 48);
		method.addUnsignedIntParameter(tpc);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDestPlanetCrc(tpc);
}

unsigned int MissionObject::getDestPlanetCrc() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 49);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDestPlanetCrc();
}

void MissionObject::setCreatorName(const UnicodeString& tcn) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 50);
		method.addUnicodeParameter(tcn);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setCreatorName(tcn);
}

UnicodeString& MissionObject::getCreatorName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 51);

		method.executeWithUnicodeReturn(_return_getCreatorName);
		return _return_getCreatorName;
	} else
		return ((MissionObjectImplementation*) _impl)->getCreatorName();
}

void MissionObject::setReward(unsigned int tr) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 52);
		method.addUnsignedIntParameter(tr);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setReward(tr);
}

unsigned int MissionObject::getReward() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 53);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getReward();
}

void MissionObject::setTargetX(float ttx) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 54);
		method.addFloatParameter(ttx);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTargetX(ttx);
}

float MissionObject::getTargetX() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 55);

		return method.executeWithFloatReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getTargetX();
}

void MissionObject::setTargetY(float tty) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 56);
		method.addFloatParameter(tty);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTargetY(tty);
}

float MissionObject::getTargetY() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 57);

		return method.executeWithFloatReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getTargetY();
}

void MissionObject::setTargetPlanetCrc(unsigned int tpc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 58);
		method.addUnsignedIntParameter(tpc);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTargetPlanetCrc(tpc);
}

unsigned int MissionObject::getTargetPlanetCrc() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 59);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getTargetPlanetCrc();
}

void MissionObject::setTargetName(const String& tds) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 60);
		method.addAsciiParameter(tds);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTargetName(tds);
}

String& MissionObject::getTargetName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 61);

		method.executeWithAsciiReturn(_return_getTargetName);
		return _return_getTargetName;
	} else
		return ((MissionObjectImplementation*) _impl)->getTargetName();
}

void MissionObject::setDepictedObjCrc(unsigned int tsdc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 62);
		method.addUnsignedIntParameter(tsdc);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDepictedObjCrc(tsdc);
}

unsigned int MissionObject::getDepictedObjCrc() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 63);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDepictedObjCrc();
}

void MissionObject::setDescriptionStf(const String& tds) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 64);
		method.addAsciiParameter(tds);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDescriptionStf(tds);
}

String& MissionObject::getDescriptionStf() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 65);

		method.executeWithAsciiReturn(_return_getDescriptionStf);
		return _return_getDescriptionStf;
	} else
		return ((MissionObjectImplementation*) _impl)->getDescriptionStf();
}

void MissionObject::setDescription(const String& tds) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 66);
		method.addAsciiParameter(tds);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDescription(tds);
}

String& MissionObject::getDescription() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 67);

		method.executeWithAsciiReturn(_return_getDescription);
		return _return_getDescription;
	} else
		return ((MissionObjectImplementation*) _impl)->getDescription();
}

void MissionObject::setTitleStf(const String& tts) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 68);
		method.addAsciiParameter(tts);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTitleStf(tts);
}

String& MissionObject::getTitleStf() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 69);

		method.executeWithAsciiReturn(_return_getTitleStf);
		return _return_getTitleStf;
	} else
		return ((MissionObjectImplementation*) _impl)->getTitleStf();
}

void MissionObject::setTitle(const String& tts) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 70);
		method.addAsciiParameter(tts);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTitle(tts);
}

String& MissionObject::getTitle() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 71);

		method.executeWithAsciiReturn(_return_getTitle);
		return _return_getTitle;
	} else
		return ((MissionObjectImplementation*) _impl)->getTitle();
}

void MissionObject::setRefreshCount(unsigned int trc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 72);
		method.addUnsignedIntParameter(trc);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setRefreshCount(trc);
}

unsigned int MissionObject::getRefreshCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 73);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getRefreshCount();
}

void MissionObject::setTypeCrc(unsigned int ttc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 74);
		method.addUnsignedIntParameter(ttc);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTypeCrc(ttc);
}

unsigned int MissionObject::getTypeCrc() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 75);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getTypeCrc();
}

/*
 *	MissionObjectAdapter
 */

MissionObjectAdapter::MissionObjectAdapter(MissionObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* MissionObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		init();
		break;
	case 7:
		assetSetup();
		break;
	case 8:
		assetPart(inv->getBooleanParameter());
		break;
	case 9:
		sendTo((Player*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 10:
		sendDeltaTo((Player*) inv->getObjectParameter());
		break;
	case 11:
		doLinkToPlayer((Player*) inv->getObjectParameter());
		break;
	case 12:
		sendDestroyTo((Player*) inv->getObjectParameter());
		break;
	case 13:
		setOwner((Player*) inv->getObjectParameter());
		break;
	case 14:
		resp->insertLong(getOwner()->_getObjectID());
		break;
	case 15:
		setDBKey(inv->getAsciiParameter(_param0_setDBKey__String_));
		break;
	case 16:
		resp->insertAscii(getDBKey());
		break;
	case 17:
		applyTerminalMask(inv->getSignedIntParameter());
		break;
	case 18:
		resp->insertSignedInt(getTerminalMask());
		break;
	case 19:
		addDeliverItem((TangibleObject*) inv->getObjectParameter());
		break;
	case 20:
		resp->insertLong(getDeliverItem(inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case 21:
		removeDeliverItem((SceneObject*) inv->getObjectParameter());
		break;
	case 22:
		addAwardItem((TangibleObject*) inv->getObjectParameter());
		break;
	case 23:
		resp->insertLong(getAwardItem(inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case 24:
		removeAwardItem((SceneObject*) inv->getObjectParameter());
		break;
	case 25:
		setObjectiveDefaults(inv->getAsciiParameter(_param0_setObjectiveDefaults__String_));
		break;
	case 26:
		resp->insertAscii(getObjectiveDefaults());
		break;
	case 27:
		resp->insertBoolean(isInstantComplete());
		break;
	case 28:
		setInstantComplete(inv->getBooleanParameter());
		break;
	case 29:
		resp->insertBoolean(isComplete());
		break;
	case 30:
		resp->insertBoolean(isFailure());
		break;
	case 31:
		addObjective((MissionObjective*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 32:
		spawnObjectives(inv->getAsciiParameter(_param0_spawnObjectives__String_bool_), inv->getBooleanParameter());
		break;
	case 33:
		serializeObjectives(inv->getAsciiParameter(_param0_serializeObjectives__String_bool_), inv->getBooleanParameter());
		break;
	case 34:
		resp->insertSignedInt(updateStatus(inv->getSignedIntParameter(), inv->getUnsignedIntParameter(), inv->getAsciiParameter(_param2_updateStatus__int_int_String_String_int_bool_), inv->getAsciiParameter(_param3_updateStatus__int_int_String_String_int_bool_), inv->getSignedIntParameter(), inv->getBooleanParameter()));
		break;
	case 35:
		checkComplete(inv->getBooleanParameter());
		break;
	case 36:
		setTypeStr(inv->getAsciiParameter(_param0_setTypeStr__String_));
		break;
	case 37:
		resp->insertAscii(getTypeStr());
		break;
	case 38:
		setDescKey(inv->getSignedIntParameter());
		break;
	case 39:
		resp->insertInt(getDescKey());
		break;
	case 40:
		setTitleKey(inv->getSignedIntParameter());
		break;
	case 41:
		resp->insertInt(getTitleKey());
		break;
	case 42:
		setDifficultyLevel(inv->getUnsignedIntParameter());
		break;
	case 43:
		resp->insertInt(getDifficultyLevel());
		break;
	case 44:
		setDestX(inv->getFloatParameter());
		break;
	case 45:
		resp->insertFloat(getDestX());
		break;
	case 46:
		setDestY(inv->getFloatParameter());
		break;
	case 47:
		resp->insertFloat(getDestY());
		break;
	case 48:
		setDestPlanetCrc(inv->getUnsignedIntParameter());
		break;
	case 49:
		resp->insertInt(getDestPlanetCrc());
		break;
	case 50:
		setCreatorName(inv->getUnicodeParameter(_param0_setCreatorName__UnicodeString_));
		break;
	case 51:
		resp->insertUnicode(getCreatorName());
		break;
	case 52:
		setReward(inv->getUnsignedIntParameter());
		break;
	case 53:
		resp->insertInt(getReward());
		break;
	case 54:
		setTargetX(inv->getFloatParameter());
		break;
	case 55:
		resp->insertFloat(getTargetX());
		break;
	case 56:
		setTargetY(inv->getFloatParameter());
		break;
	case 57:
		resp->insertFloat(getTargetY());
		break;
	case 58:
		setTargetPlanetCrc(inv->getUnsignedIntParameter());
		break;
	case 59:
		resp->insertInt(getTargetPlanetCrc());
		break;
	case 60:
		setTargetName(inv->getAsciiParameter(_param0_setTargetName__String_));
		break;
	case 61:
		resp->insertAscii(getTargetName());
		break;
	case 62:
		setDepictedObjCrc(inv->getUnsignedIntParameter());
		break;
	case 63:
		resp->insertInt(getDepictedObjCrc());
		break;
	case 64:
		setDescriptionStf(inv->getAsciiParameter(_param0_setDescriptionStf__String_));
		break;
	case 65:
		resp->insertAscii(getDescriptionStf());
		break;
	case 66:
		setDescription(inv->getAsciiParameter(_param0_setDescription__String_));
		break;
	case 67:
		resp->insertAscii(getDescription());
		break;
	case 68:
		setTitleStf(inv->getAsciiParameter(_param0_setTitleStf__String_));
		break;
	case 69:
		resp->insertAscii(getTitleStf());
		break;
	case 70:
		setTitle(inv->getAsciiParameter(_param0_setTitle__String_));
		break;
	case 71:
		resp->insertAscii(getTitle());
		break;
	case 72:
		setRefreshCount(inv->getUnsignedIntParameter());
		break;
	case 73:
		resp->insertInt(getRefreshCount());
		break;
	case 74:
		setTypeCrc(inv->getUnsignedIntParameter());
		break;
	case 75:
		resp->insertInt(getTypeCrc());
		break;
	default:
		return NULL;
	}

	return resp;
}

void MissionObjectAdapter::init() {
	return ((MissionObjectImplementation*) impl)->init();
}

void MissionObjectAdapter::assetSetup() {
	return ((MissionObjectImplementation*) impl)->assetSetup();
}

void MissionObjectAdapter::assetPart(bool award) {
	return ((MissionObjectImplementation*) impl)->assetPart(award);
}

void MissionObjectAdapter::sendTo(Player* player, bool doClose) {
	return ((MissionObjectImplementation*) impl)->sendTo(player, doClose);
}

void MissionObjectAdapter::sendDeltaTo(Player* player) {
	return ((MissionObjectImplementation*) impl)->sendDeltaTo(player);
}

void MissionObjectAdapter::doLinkToPlayer(Player* player) {
	return ((MissionObjectImplementation*) impl)->doLinkToPlayer(player);
}

void MissionObjectAdapter::sendDestroyTo(Player* player) {
	return ((MissionObjectImplementation*) impl)->sendDestroyTo(player);
}

void MissionObjectAdapter::setOwner(Player* player) {
	return ((MissionObjectImplementation*) impl)->setOwner(player);
}

Player* MissionObjectAdapter::getOwner() {
	return ((MissionObjectImplementation*) impl)->getOwner();
}

void MissionObjectAdapter::setDBKey(const String& tdbk) {
	return ((MissionObjectImplementation*) impl)->setDBKey(tdbk);
}

String& MissionObjectAdapter::getDBKey() {
	return ((MissionObjectImplementation*) impl)->getDBKey();
}

void MissionObjectAdapter::applyTerminalMask(int tam) {
	return ((MissionObjectImplementation*) impl)->applyTerminalMask(tam);
}

int MissionObjectAdapter::getTerminalMask() {
	return ((MissionObjectImplementation*) impl)->getTerminalMask();
}

void MissionObjectAdapter::addDeliverItem(TangibleObject* item) {
	return ((MissionObjectImplementation*) impl)->addDeliverItem(item);
}

TangibleObject* MissionObjectAdapter::getDeliverItem(unsigned long long oid) {
	return ((MissionObjectImplementation*) impl)->getDeliverItem(oid);
}

void MissionObjectAdapter::removeDeliverItem(SceneObject* item) {
	return ((MissionObjectImplementation*) impl)->removeDeliverItem(item);
}

void MissionObjectAdapter::addAwardItem(TangibleObject* item) {
	return ((MissionObjectImplementation*) impl)->addAwardItem(item);
}

TangibleObject* MissionObjectAdapter::getAwardItem(unsigned long long oid) {
	return ((MissionObjectImplementation*) impl)->getAwardItem(oid);
}

void MissionObjectAdapter::removeAwardItem(SceneObject* item) {
	return ((MissionObjectImplementation*) impl)->removeAwardItem(item);
}

void MissionObjectAdapter::setObjectiveDefaults(const String& od) {
	return ((MissionObjectImplementation*) impl)->setObjectiveDefaults(od);
}

String& MissionObjectAdapter::getObjectiveDefaults() {
	return ((MissionObjectImplementation*) impl)->getObjectiveDefaults();
}

bool MissionObjectAdapter::isInstantComplete() {
	return ((MissionObjectImplementation*) impl)->isInstantComplete();
}

void MissionObjectAdapter::setInstantComplete(bool temp) {
	return ((MissionObjectImplementation*) impl)->setInstantComplete(temp);
}

bool MissionObjectAdapter::isComplete() {
	return ((MissionObjectImplementation*) impl)->isComplete();
}

bool MissionObjectAdapter::isFailure() {
	return ((MissionObjectImplementation*) impl)->isFailure();
}

void MissionObjectAdapter::addObjective(MissionObjective* mo, bool doLock) {
	return ((MissionObjectImplementation*) impl)->addObjective(mo, doLock);
}

void MissionObjectAdapter::spawnObjectives(const String& objectives, bool doLock) {
	return ((MissionObjectImplementation*) impl)->spawnObjectives(objectives, doLock);
}

void MissionObjectAdapter::serializeObjectives(String& ret, bool doLock) {
	return ((MissionObjectImplementation*) impl)->serializeObjectives(ret, doLock);
}

int MissionObjectAdapter::updateStatus(int type, unsigned int objCrc, const String& str, String& updateStr, int increment, bool doLock) {
	return ((MissionObjectImplementation*) impl)->updateStatus(type, objCrc, str, updateStr, increment, doLock);
}

void MissionObjectAdapter::checkComplete(bool doLock) {
	return ((MissionObjectImplementation*) impl)->checkComplete(doLock);
}

void MissionObjectAdapter::setTypeStr(const String& tstr) {
	return ((MissionObjectImplementation*) impl)->setTypeStr(tstr);
}

String& MissionObjectAdapter::getTypeStr() {
	return ((MissionObjectImplementation*) impl)->getTypeStr();
}

void MissionObjectAdapter::setDescKey(int tdk) {
	return ((MissionObjectImplementation*) impl)->setDescKey(tdk);
}

unsigned int MissionObjectAdapter::getDescKey() {
	return ((MissionObjectImplementation*) impl)->getDescKey();
}

void MissionObjectAdapter::setTitleKey(int ttk) {
	return ((MissionObjectImplementation*) impl)->setTitleKey(ttk);
}

unsigned int MissionObjectAdapter::getTitleKey() {
	return ((MissionObjectImplementation*) impl)->getTitleKey();
}

void MissionObjectAdapter::setDifficultyLevel(unsigned int tdlv) {
	return ((MissionObjectImplementation*) impl)->setDifficultyLevel(tdlv);
}

unsigned int MissionObjectAdapter::getDifficultyLevel() {
	return ((MissionObjectImplementation*) impl)->getDifficultyLevel();
}

void MissionObjectAdapter::setDestX(float tdx) {
	return ((MissionObjectImplementation*) impl)->setDestX(tdx);
}

float MissionObjectAdapter::getDestX() {
	return ((MissionObjectImplementation*) impl)->getDestX();
}

void MissionObjectAdapter::setDestY(float tdy) {
	return ((MissionObjectImplementation*) impl)->setDestY(tdy);
}

float MissionObjectAdapter::getDestY() {
	return ((MissionObjectImplementation*) impl)->getDestY();
}

void MissionObjectAdapter::setDestPlanetCrc(unsigned int tpc) {
	return ((MissionObjectImplementation*) impl)->setDestPlanetCrc(tpc);
}

unsigned int MissionObjectAdapter::getDestPlanetCrc() {
	return ((MissionObjectImplementation*) impl)->getDestPlanetCrc();
}

void MissionObjectAdapter::setCreatorName(const UnicodeString& tcn) {
	return ((MissionObjectImplementation*) impl)->setCreatorName(tcn);
}

UnicodeString& MissionObjectAdapter::getCreatorName() {
	return ((MissionObjectImplementation*) impl)->getCreatorName();
}

void MissionObjectAdapter::setReward(unsigned int tr) {
	return ((MissionObjectImplementation*) impl)->setReward(tr);
}

unsigned int MissionObjectAdapter::getReward() {
	return ((MissionObjectImplementation*) impl)->getReward();
}

void MissionObjectAdapter::setTargetX(float ttx) {
	return ((MissionObjectImplementation*) impl)->setTargetX(ttx);
}

float MissionObjectAdapter::getTargetX() {
	return ((MissionObjectImplementation*) impl)->getTargetX();
}

void MissionObjectAdapter::setTargetY(float tty) {
	return ((MissionObjectImplementation*) impl)->setTargetY(tty);
}

float MissionObjectAdapter::getTargetY() {
	return ((MissionObjectImplementation*) impl)->getTargetY();
}

void MissionObjectAdapter::setTargetPlanetCrc(unsigned int tpc) {
	return ((MissionObjectImplementation*) impl)->setTargetPlanetCrc(tpc);
}

unsigned int MissionObjectAdapter::getTargetPlanetCrc() {
	return ((MissionObjectImplementation*) impl)->getTargetPlanetCrc();
}

void MissionObjectAdapter::setTargetName(const String& tds) {
	return ((MissionObjectImplementation*) impl)->setTargetName(tds);
}

String& MissionObjectAdapter::getTargetName() {
	return ((MissionObjectImplementation*) impl)->getTargetName();
}

void MissionObjectAdapter::setDepictedObjCrc(unsigned int tsdc) {
	return ((MissionObjectImplementation*) impl)->setDepictedObjCrc(tsdc);
}

unsigned int MissionObjectAdapter::getDepictedObjCrc() {
	return ((MissionObjectImplementation*) impl)->getDepictedObjCrc();
}

void MissionObjectAdapter::setDescriptionStf(const String& tds) {
	return ((MissionObjectImplementation*) impl)->setDescriptionStf(tds);
}

String& MissionObjectAdapter::getDescriptionStf() {
	return ((MissionObjectImplementation*) impl)->getDescriptionStf();
}

void MissionObjectAdapter::setDescription(const String& tds) {
	return ((MissionObjectImplementation*) impl)->setDescription(tds);
}

String& MissionObjectAdapter::getDescription() {
	return ((MissionObjectImplementation*) impl)->getDescription();
}

void MissionObjectAdapter::setTitleStf(const String& tts) {
	return ((MissionObjectImplementation*) impl)->setTitleStf(tts);
}

String& MissionObjectAdapter::getTitleStf() {
	return ((MissionObjectImplementation*) impl)->getTitleStf();
}

void MissionObjectAdapter::setTitle(const String& tts) {
	return ((MissionObjectImplementation*) impl)->setTitle(tts);
}

String& MissionObjectAdapter::getTitle() {
	return ((MissionObjectImplementation*) impl)->getTitle();
}

void MissionObjectAdapter::setRefreshCount(unsigned int trc) {
	return ((MissionObjectImplementation*) impl)->setRefreshCount(trc);
}

unsigned int MissionObjectAdapter::getRefreshCount() {
	return ((MissionObjectImplementation*) impl)->getRefreshCount();
}

void MissionObjectAdapter::setTypeCrc(unsigned int ttc) {
	return ((MissionObjectImplementation*) impl)->setTypeCrc(ttc);
}

unsigned int MissionObjectAdapter::getTypeCrc() {
	return ((MissionObjectImplementation*) impl)->getTypeCrc();
}

/*
 *	MissionObjectHelper
 */

MissionObjectHelper* MissionObjectHelper::staticInitializer = MissionObjectHelper::instance();

MissionObjectHelper::MissionObjectHelper() {
	className = "MissionObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void MissionObjectHelper::finalizeHelper() {
	MissionObjectHelper::finalize();
}

DistributedObject* MissionObjectHelper::instantiateObject() {
	return new MissionObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionObjectAdapter((MissionObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	MissionObjectServant
 */

MissionObjectServant::MissionObjectServant(unsigned long long oid, int type) : SceneObjectImplementation(oid, type) {
	_classHelper = MissionObjectHelper::instance();
}

MissionObjectServant::~MissionObjectServant() {
}

void MissionObjectServant::_setStub(DistributedObjectStub* stub) {
	_this = (MissionObject*) stub;
	SceneObjectServant::_setStub(stub);
}

DistributedObjectStub* MissionObjectServant::_getStub() {
	return _this;
}

