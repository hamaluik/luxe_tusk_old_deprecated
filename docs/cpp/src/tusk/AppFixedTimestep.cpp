#include <hxcpp.h>

#ifndef INCLUDED_tusk_AppFixedTimestep
#include <tusk/AppFixedTimestep.h>
#endif
#ifndef INCLUDED_tusk_Snow
#include <tusk/Snow.h>
#endif
namespace tusk{

Void AppFixedTimestep_obj::__construct()
{
HX_STACK_FRAME("tusk.AppFixedTimestep","new",0x9368a753,"tusk.AppFixedTimestep.new","tusk/Tusk.hx",34,0xa7c05cef)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(35)
	this->alpha = ((Float)0.5);
	HX_STACK_LINE(36)
	::tusk::Snow tmp = ::tusk::Snow_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	this->app = tmp;
}
;
	return null();
}

//AppFixedTimestep_obj::~AppFixedTimestep_obj() { }

Dynamic AppFixedTimestep_obj::__CreateEmpty() { return  new AppFixedTimestep_obj; }
hx::ObjectPtr< AppFixedTimestep_obj > AppFixedTimestep_obj::__new()
{  hx::ObjectPtr< AppFixedTimestep_obj > _result_ = new AppFixedTimestep_obj();
	_result_->__construct();
	return _result_;}

Dynamic AppFixedTimestep_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppFixedTimestep_obj > _result_ = new AppFixedTimestep_obj();
	_result_->__construct();
	return _result_;}

Dynamic AppFixedTimestep_obj::config( Dynamic config){
	HX_STACK_FRAME("tusk.AppFixedTimestep","config",0x6d8619af,"tusk.AppFixedTimestep.config","tusk/Tusk.hx",38,0xa7c05cef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(38)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppFixedTimestep_obj,config,return )

Void AppFixedTimestep_obj::ready( ){
{
		HX_STACK_FRAME("tusk.AppFixedTimestep","ready",0x09e95a16,"tusk.AppFixedTimestep.ready","tusk/Tusk.hx",39,0xa7c05cef)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppFixedTimestep_obj,ready,(void))

Void AppFixedTimestep_obj::update( Float dt){
{
		HX_STACK_FRAME("tusk.AppFixedTimestep","update",0x2cb948f6,"tusk.AppFixedTimestep.update","tusk/Tusk.hx",40,0xa7c05cef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppFixedTimestep_obj,update,(void))


AppFixedTimestep_obj::AppFixedTimestep_obj()
{
}

void AppFixedTimestep_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppFixedTimestep);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_END_CLASS();
}

void AppFixedTimestep_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
}

Dynamic AppFixedTimestep_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppFixedTimestep_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::tusk::Snow >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppFixedTimestep_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::tusk::Snow*/ ,(int)offsetof(AppFixedTimestep_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsFloat,(int)offsetof(AppFixedTimestep_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppFixedTimestep_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppFixedTimestep_obj::__mClass,"__mClass");
};

#endif

hx::Class AppFixedTimestep_obj::__mClass;

void AppFixedTimestep_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.AppFixedTimestep","\xe1","\x01","\xf0","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AppFixedTimestep_obj >;
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
