#include <hxcpp.h>

#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_tusk_Entity
#include <tusk/Entity.h>
#endif
#ifndef INCLUDED_tusk_Matcher
#include <tusk/Matcher.h>
#endif
#ifndef INCLUDED_tusk_Processor
#include <tusk/Processor.h>
#endif
namespace tusk{

Void Processor_obj::__construct(Array< ::Dynamic > entities)
{
HX_STACK_FRAME("tusk.Processor","new",0xf760304f,"tusk.Processor.new","tusk/Processor.hx",12,0xcae10b82)
HX_STACK_THIS(this)
HX_STACK_ARG(entities,"entities")
{
	HX_STACK_LINE(23)
	this->enabled = true;
	HX_STACK_LINE(50)
	bool tmp = (entities != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	if ((tmp)){
		HX_STACK_LINE(51)
		::tusk::Matcher tmp1 = this->matcher;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		this->entities = tmp1->matchEntities(entities);
	}
	else{
		HX_STACK_LINE(54)
		this->entities = Array_obj< ::Dynamic >::__new();
	}
}
;
	return null();
}

//Processor_obj::~Processor_obj() { }

Dynamic Processor_obj::__CreateEmpty() { return  new Processor_obj; }
hx::ObjectPtr< Processor_obj > Processor_obj::__new(Array< ::Dynamic > entities)
{  hx::ObjectPtr< Processor_obj > _result_ = new Processor_obj();
	_result_->__construct(entities);
	return _result_;}

Dynamic Processor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Processor_obj > _result_ = new Processor_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool Processor_obj::set_enabled( bool enabled){
	HX_STACK_FRAME("tusk.Processor","set_enabled",0x76fcd293,"tusk.Processor.set_enabled","tusk/Processor.hx",24,0xcae10b82)
	HX_STACK_THIS(this)
	HX_STACK_ARG(enabled,"enabled")
	HX_STACK_LINE(25)
	bool tmp = this->enabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	bool tmp1 = enabled;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	if ((tmp2)){
		HX_STACK_LINE(26)
		this->enabled = enabled;
		HX_STACK_LINE(27)
		bool tmp3 = this->enabled;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		if ((tmp3)){
			HX_STACK_LINE(28)
			this->onEnabled();
		}
		else{
			HX_STACK_LINE(31)
			this->onDisabled();
		}
	}
	HX_STACK_LINE(34)
	bool tmp3 = this->enabled;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Processor_obj,set_enabled,return )

Void Processor_obj::___connectRoutes( ){
{
		HX_STACK_FRAME("tusk.Processor","___connectRoutes",0xc0afe866,"tusk.Processor.___connectRoutes","tusk/Processor.hx",41,0xcae10b82)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Processor_obj,___connectRoutes,(void))

Void Processor_obj::___disconnectRoutes( ){
{
		HX_STACK_FRAME("tusk.Processor","___disconnectRoutes",0xdfd0e574,"tusk.Processor.___disconnectRoutes","tusk/Processor.hx",43,0xcae10b82)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Processor_obj,___disconnectRoutes,(void))

Void Processor_obj::onEnabled( ){
{
		HX_STACK_FRAME("tusk.Processor","onEnabled",0x67833a51,"tusk.Processor.onEnabled","tusk/Processor.hx",61,0xcae10b82)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Processor_obj,onEnabled,(void))

Void Processor_obj::onDisabled( ){
{
		HX_STACK_FRAME("tusk.Processor","onDisabled",0xbaa121ac,"tusk.Processor.onDisabled","tusk/Processor.hx",66,0xcae10b82)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Processor_obj,onDisabled,(void))

Void Processor_obj::onStart( Dynamic data){
{
		HX_STACK_FRAME("tusk.Processor","onStart",0x35359632,"tusk.Processor.onStart","tusk/Processor.hx",72,0xcae10b82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Processor_obj,onStart,(void))

Void Processor_obj::onDestroy( Dynamic data){
{
		HX_STACK_FRAME("tusk.Processor","onDestroy",0x0dd862ca,"tusk.Processor.onDestroy","tusk/Processor.hx",78,0xcae10b82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Processor_obj,onDestroy,(void))

Void Processor_obj::onUpdate( Dynamic data){
{
		HX_STACK_FRAME("tusk.Processor","onUpdate",0xdab8fa39,"tusk.Processor.onUpdate","tusk/Processor.hx",84,0xcae10b82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Processor_obj,onUpdate,(void))

Void Processor_obj::onRender( Dynamic data){
{
		HX_STACK_FRAME("tusk.Processor","onRender",0x58dcdf86,"tusk.Processor.onRender","tusk/Processor.hx",90,0xcae10b82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Processor_obj,onRender,(void))

Void Processor_obj::hxSerialize( ::haxe::Serializer s){
{
		HX_STACK_FRAME("tusk.Processor","hxSerialize",0x7c6d679f,"tusk.Processor.hxSerialize","tusk/Processor.hx",97,0xcae10b82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(98)
		bool tmp = this->enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		s->serialize(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Processor_obj,hxSerialize,(void))

Void Processor_obj::hxUnserialize( ::haxe::Unserializer u){
{
		HX_STACK_FRAME("tusk.Processor","hxUnserialize",0x1e391be6,"tusk.Processor.hxUnserialize","tusk/Processor.hx",106,0xcae10b82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(u,"u")
		HX_STACK_LINE(107)
		Dynamic tmp = u->unserialize();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		this->set_enabled(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Processor_obj,hxUnserialize,(void))


Processor_obj::Processor_obj()
{
}

void Processor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Processor);
	HX_MARK_MEMBER_NAME(entities,"entities");
	HX_MARK_MEMBER_NAME(matcher,"matcher");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_END_CLASS();
}

void Processor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entities,"entities");
	HX_VISIT_MEMBER_NAME(matcher,"matcher");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
}

Dynamic Processor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"matcher") ) { return matcher; }
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"onStart") ) { return onStart_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { return entities; }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"onRender") ) { return onRender_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onEnabled") ) { return onEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"onDestroy") ) { return onDestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onDisabled") ) { return onDisabled_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return set_enabled_dyn(); }
		if (HX_FIELD_EQ(inName,"hxSerialize") ) { return hxSerialize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hxUnserialize") ) { return hxUnserialize_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"___connectRoutes") ) { return ___connectRoutes_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"___disconnectRoutes") ) { return ___disconnectRoutes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Processor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"matcher") ) { matcher=inValue.Cast< ::tusk::Matcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return set_enabled(inValue);enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { entities=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Processor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("entities","\x41","\x96","\x95","\x92"));
	outFields->push(HX_HCSTRING("matcher","\xf2","\x3c","\x7c","\x89"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Processor_obj,entities),HX_HCSTRING("entities","\x41","\x96","\x95","\x92")},
	{hx::fsObject /*::tusk::Matcher*/ ,(int)offsetof(Processor_obj,matcher),HX_HCSTRING("matcher","\xf2","\x3c","\x7c","\x89")},
	{hx::fsBool,(int)offsetof(Processor_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("entities","\x41","\x96","\x95","\x92"),
	HX_HCSTRING("matcher","\xf2","\x3c","\x7c","\x89"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("set_enabled","\xa4","\x6b","\x98","\x0e"),
	HX_HCSTRING("___connectRoutes","\xb5","\xd1","\x7a","\x1d"),
	HX_HCSTRING("___disconnectRoutes","\x85","\x77","\x35","\x54"),
	HX_HCSTRING("onEnabled","\x22","\xbd","\xdb","\x55"),
	HX_HCSTRING("onDisabled","\xbb","\x15","\xbb","\x59"),
	HX_HCSTRING("onStart","\xc3","\x12","\x49","\x1a"),
	HX_HCSTRING("onDestroy","\x9b","\xe5","\x30","\xfc"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("onRender","\xd5","\x61","\xd6","\xe4"),
	HX_HCSTRING("hxSerialize","\xb0","\x00","\x09","\x14"),
	HX_HCSTRING("hxUnserialize","\x37","\xdb","\xb9","\x86"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Processor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Processor_obj::__mClass,"__mClass");
};

#endif

hx::Class Processor_obj::__mClass;

void Processor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.Processor","\xdd","\x5c","\xb8","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Processor_obj >;
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

} // end namespace tusk
