/*
 *	server/zone/objects/tangible/fishing/FishingPoleObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef FISHINGPOLEOBJECT_H_
#define FISHINGPOLEOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace fishing {

class FishingPoleObject : public TangibleObject {
public:
	FishingPoleObject();

	void initializeTransientMembers();

	int getQuality();

	void setQuality(int value);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	int canAddObject(SceneObject* object, int containmentType, String& errorDescription);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void doFishing(CreatureObject* player);

	String getText(CreatureObject* player);

	bool removeObject(SceneObject* object, SceneObject* destination, bool notifyClient = false);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	FishingPoleObject(DummyConstructorParameter* param);

	virtual ~FishingPoleObject();

	friend class FishingPoleObjectHelper;
};

} // namespace fishing
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::fishing;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace fishing {

class FishingPoleObjectImplementation : public TangibleObjectImplementation {
protected:
	int quality;

public:
	FishingPoleObjectImplementation();

	FishingPoleObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	int getQuality();

	void setQuality(int value);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	int canAddObject(SceneObject* object, int containmentType, String& errorDescription);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void doFishing(CreatureObject* player);

	String getText(CreatureObject* player);

	virtual bool removeObject(SceneObject* object, SceneObject* destination, bool notifyClient = false);

	WeakReference<FishingPoleObject*> _this;

	operator const FishingPoleObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~FishingPoleObjectImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class FishingPoleObject;
};

class FishingPoleObjectAdapter : public TangibleObjectAdapter {
public:
	FishingPoleObjectAdapter(FishingPoleObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int getQuality();

	void setQuality(int value);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	int canAddObject(SceneObject* object, int containmentType, String& errorDescription);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void doFishing(CreatureObject* player);

	String getText(CreatureObject* player);

	bool removeObject(SceneObject* object, SceneObject* destination, bool notifyClient);

};

class FishingPoleObjectHelper : public DistributedObjectClassHelper, public Singleton<FishingPoleObjectHelper> {
	static FishingPoleObjectHelper* staticInitializer;

public:
	FishingPoleObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<FishingPoleObjectHelper>;
};

} // namespace fishing
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::fishing;

#endif /*FISHINGPOLEOBJECT_H_*/
