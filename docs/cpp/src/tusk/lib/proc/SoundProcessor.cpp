#include <hxcpp.h>

#ifndef INCLUDED_tusk_Entity
#include <tusk/Entity.h>
#endif
#ifndef INCLUDED_tusk_Matcher
#include <tusk/Matcher.h>
#endif
#ifndef INCLUDED_tusk_Processor
#include <tusk/Processor.h>
#endif
#ifndef INCLUDED_tusk_lib_proc_SoundProcessor
#include <tusk/lib/proc/SoundProcessor.h>
#endif
namespace tusk{
namespace lib{
namespace proc{

Void SoundProcessor_obj::__construct(Array< ::Dynamic > entities)
{
HX_STACK_FRAME("tusk.lib.proc.SoundProcessor","new",0xcab2752f,"tusk.lib.proc.SoundProcessor.new","tusk/lib/proc/SoundProcessor.hx",14,0x3329fa02)
HX_STACK_THIS(this)
HX_STACK_ARG(entities,"entities")
{
	HX_STACK_LINE(15)
	::tusk::Matcher tmp = ::tusk::Matcher_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	::tusk::Matcher tmp1 = tmp->include((int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	this->matcher = tmp1;
	HX_STACK_LINE(16)
	super::__construct(entities);
}
;
	return null();
}

//SoundProcessor_obj::~SoundProcessor_obj() { }

Dynamic SoundProcessor_obj::__CreateEmpty() { return  new SoundProcessor_obj; }
hx::ObjectPtr< SoundProcessor_obj > SoundProcessor_obj::__new(Array< ::Dynamic > entities)
{  hx::ObjectPtr< SoundProcessor_obj > _result_ = new SoundProcessor_obj();
	_result_->__construct(entities);
	return _result_;}

Dynamic SoundProcessor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundProcessor_obj > _result_ = new SoundProcessor_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void SoundProcessor_obj::onUpdate( Dynamic data){
{
		HX_STACK_FRAME("tusk.lib.proc.SoundProcessor","onUpdate",0x92a10959,"tusk.lib.proc.SoundProcessor.onUpdate","tusk/lib/proc/SoundProcessor.hx",23,0x3329fa02)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
	}
return null();
}


Void SoundProcessor_obj::___connectRoutes( ){
{
		HX_STACK_FRAME("tusk.lib.proc.SoundProcessor","___connectRoutes",0x23ec1786,"tusk.lib.proc.SoundProcessor.___connectRoutes","tusk/debug/Log.hx",133,0x3b3c630c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		Dynamic();
	}
return null();
}


Void SoundProcessor_obj::___disconnectRoutes( ){
{
		HX_STACK_FRAME("tusk.lib.proc.SoundProcessor","___disconnectRoutes",0x5042ea54,"tusk.lib.proc.SoundProcessor.___disconnectRoutes","tusk/debug/Log.hx",133,0x3b3c630c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		Dynamic();
	}
return null();
}



SoundProcessor_obj::SoundProcessor_obj()
{
}

Dynamic SoundProcessor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"___connectRoutes") ) { return ___connectRoutes_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"___disconnectRoutes") ) { return ___disconnectRoutes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("___connectRoutes","\xb5","\xd1","\x7a","\x1d"),
	HX_HCSTRING("___disconnectRoutes","\x85","\x77","\x35","\x54"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundProcessor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundProcessor_obj::__mClass,"__mClass");
};

#endif

hx::Class SoundProcessor_obj::__mClass;

void SoundProcessor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.lib.proc.SoundProcessor","\xbd","\xb1","\x8e","\x0d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundProcessor_obj >;
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
} // end namespace lib
} // end namespace proc
