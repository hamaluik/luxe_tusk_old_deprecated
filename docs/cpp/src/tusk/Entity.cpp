#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_tusk_AppFixedTimestep
#include <tusk/AppFixedTimestep.h>
#endif
#ifndef INCLUDED_tusk_Component
#include <tusk/Component.h>
#endif
#ifndef INCLUDED_tusk_Entity
#include <tusk/Entity.h>
#endif
#ifndef INCLUDED_tusk_Tusk
#include <tusk/Tusk.h>
#endif
#ifndef INCLUDED_tusk_debug_Exception
#include <tusk/debug/Exception.h>
#endif
#ifndef INCLUDED_tusk_debug_ExceptionType
#include <tusk/debug/ExceptionType.h>
#endif
namespace tusk{

Void Entity_obj::__construct(Array< ::Dynamic > components)
{
HX_STACK_FRAME("tusk.Entity","new",0x10427baa,"tusk.Entity.new","tusk/Entity.hx",23,0x27ae9ee5)
HX_STACK_THIS(this)
HX_STACK_ARG(components,"components")
{
	HX_STACK_LINE(24)
	::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	this->components = tmp;
	HX_STACK_LINE(25)
	bool tmp1 = (components != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	if ((tmp1)){
		HX_STACK_LINE(26)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		while((true)){
			HX_STACK_LINE(26)
			bool tmp2 = (_g < components->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			if ((tmp3)){
				HX_STACK_LINE(26)
				break;
			}
			HX_STACK_LINE(26)
			::tusk::Component tmp4 = components->__get(_g).StaticCast< ::tusk::Component >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(26)
			::tusk::Component component = tmp4;		HX_STACK_VAR(component,"component");
			HX_STACK_LINE(26)
			++(_g);
			HX_STACK_LINE(27)
			::haxe::ds::IntMap tmp5 = this->components;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(27)
			int tmp6 = component->get__tid();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(27)
			::tusk::Component tmp7 = component;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(27)
			tmp5->set(tmp6,tmp7);
		}
	}
	HX_STACK_LINE(30)
	int tmp2 = ::tusk::Entity_obj::nextID;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	this->id = tmp2;
	HX_STACK_LINE(31)
	(::tusk::Entity_obj::nextID)++;
	HX_STACK_LINE(32)
	::tusk::Tusk_obj::addEntity(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new(Array< ::Dynamic > components)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(components);
	return _result_;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool Entity_obj::hasType( int tid){
	HX_STACK_FRAME("tusk.Entity","hasType",0xdc142b7e,"tusk.Entity.hasType","tusk/Entity.hx",39,0x27ae9ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tid,"tid")
	HX_STACK_LINE(40)
	::haxe::ds::IntMap tmp = this->components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	int tmp1 = tid;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,hasType,return )

bool Entity_obj::has( ::tusk::Component component){
	HX_STACK_FRAME("tusk.Entity","has",0x103deaa4,"tusk.Entity.has","tusk/Entity.hx",47,0x27ae9ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(component,"component")
	HX_STACK_LINE(48)
	int tmp = component->get__tid();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	bool tmp1 = this->hasType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,has,return )

::tusk::Component Entity_obj::get( int tid){
	HX_STACK_FRAME("tusk.Entity","get",0x103d2be0,"tusk.Entity.get","tusk/Entity.hx",57,0x27ae9ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tid,"tid")
	HX_STACK_LINE(58)
	::haxe::ds::IntMap tmp = this->components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	int tmp1 = tid;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	::tusk::Component tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,get,return )

::tusk::Entity Entity_obj::push( ::tusk::Component component){
	HX_STACK_FRAME("tusk.Entity","push",0x2b484750,"tusk.Entity.push","tusk/Entity.hx",67,0x27ae9ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(component,"component")
	HX_STACK_LINE(68)
	::tusk::Component tmp = component;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	::hx::Class tmp1 = ::Type_obj::getClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	::String tmp2 = ::Type_obj::getClassName(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	::String componentName = tmp2;		HX_STACK_VAR(componentName,"componentName");
	HX_STACK_LINE(69)
	::tusk::Component tmp3 = component;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	bool tmp4 = this->has(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(69)
	if ((tmp4)){
		HX_STACK_LINE(70)
		::String tmp5 = (HX_HCSTRING("Can't add component '","\xc2","\xe1","\x40","\x78") + componentName);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		::String tmp6 = (tmp5 + HX_HCSTRING("' because entity already has it!","\x7e","\xd5","\x96","\x17"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(70)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),70,HX_HCSTRING("tusk.Entity","\xb8","\x1e","\xe5","\xa3"),HX_HCSTRING("push","\xda","\x11","\x61","\x4a"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(70)
		::tusk::debug::Exception tmp8 = ::tusk::debug::Exception_obj::__new(tmp6,null(),null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(70)
		HX_STACK_DO_THROW(tmp8);
	}
	HX_STACK_LINE(72)
	::haxe::ds::IntMap tmp5 = this->components;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(72)
	int tmp6 = component->get__tid();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(72)
	::tusk::Component tmp7 = component;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(72)
	tmp5->set(tmp6,tmp7);
	HX_STACK_LINE(73)
	::tusk::Tusk_obj::entityChanged(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(74)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,push,return )

::tusk::Entity Entity_obj::removeType( int tid){
	HX_STACK_FRAME("tusk.Entity","removeType",0xeec9df14,"tusk.Entity.removeType","tusk/Entity.hx",81,0x27ae9ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tid,"tid")
	HX_STACK_LINE(82)
	::haxe::ds::IntMap tmp = this->components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	int tmp1 = tid;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	bool tmp2 = tmp->remove(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	if ((tmp2)){
		HX_STACK_LINE(83)
		::tusk::Tusk_obj::entityChanged(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(85)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,removeType,return )

::tusk::Entity Entity_obj::remove( ::tusk::Component component){
	HX_STACK_FRAME("tusk.Entity","remove",0x55c09b3a,"tusk.Entity.remove","tusk/Entity.hx",92,0x27ae9ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(component,"component")
	HX_STACK_LINE(93)
	int tmp = component->get__tid();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	::tusk::Entity tmp1 = this->removeType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,remove,return )

Void Entity_obj::hxSerialize( ::haxe::Serializer s){
{
		HX_STACK_FRAME("tusk.Entity","hxSerialize",0xfce305fa,"tusk.Entity.hxSerialize","tusk/Entity.hx",101,0x27ae9ee5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(102)
		::haxe::ds::IntMap tmp = this->components;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		s->serialize(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,hxSerialize,(void))

Void Entity_obj::hxUnserialize( ::haxe::Unserializer u){
{
		HX_STACK_FRAME("tusk.Entity","hxUnserialize",0xde174701,"tusk.Entity.hxUnserialize","tusk/Entity.hx",110,0x27ae9ee5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(u,"u")
		HX_STACK_LINE(111)
		Dynamic tmp = u->unserialize();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		this->components = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,hxUnserialize,(void))

int Entity_obj::nextID;


Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(components,"components");
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(components,"components");
}

Dynamic Entity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasType") ) { return hasType_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { return components; }
		if (HX_FIELD_EQ(inName,"removeType") ) { return removeType_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hxSerialize") ) { return hxSerialize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hxUnserialize") ) { return hxUnserialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Entity_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"nextID") ) { outValue = nextID; return true;  }
	}
	return false;
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { components=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Entity_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"nextID") ) { nextID=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Entity_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Entity_obj,components),HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Entity_obj::nextID,HX_HCSTRING("nextID","\x8e","\x27","\x64","\x72")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a"),
	HX_HCSTRING("hasType","\x34","\x13","\x4d","\x1c"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("removeType","\x1e","\x2d","\x28","\xca"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("hxSerialize","\xb0","\x00","\x09","\x14"),
	HX_HCSTRING("hxUnserialize","\x37","\xdb","\xb9","\x86"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Entity_obj::nextID,"nextID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Entity_obj::nextID,"nextID");
};

#endif

hx::Class Entity_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nextID","\x8e","\x27","\x64","\x72"),
	::String(null()) };

void Entity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.Entity","\xb8","\x1e","\xe5","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Entity_obj::__GetStatic;
	__mClass->mSetStaticField = &Entity_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Entity_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Entity_obj::__boot()
{
	nextID= (int)0;
}

} // end namespace tusk
