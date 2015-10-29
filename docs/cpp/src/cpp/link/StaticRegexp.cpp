#include <hxcpp.h>

#ifndef INCLUDED_cpp_link_StaticRegexp
#include <cpp/link/StaticRegexp.h>
#endif
extern "C" int regexp_register_prims();
namespace cpp{
namespace link{

Void StaticRegexp_obj::__construct()
{
	return null();
}

//StaticRegexp_obj::~StaticRegexp_obj() { }

Dynamic StaticRegexp_obj::__CreateEmpty() { return  new StaticRegexp_obj; }
hx::ObjectPtr< StaticRegexp_obj > StaticRegexp_obj::__new()
{  hx::ObjectPtr< StaticRegexp_obj > _result_ = new StaticRegexp_obj();
	_result_->__construct();
	return _result_;}

Dynamic StaticRegexp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StaticRegexp_obj > _result_ = new StaticRegexp_obj();
	_result_->__construct();
	return _result_;}

void StaticRegexp_obj::__init__() {
HX_STACK_FRAME("cpp.link.StaticRegexp","__init__",0x73c7f15e,"cpp.link.StaticRegexp.__init__","C:\\HaxeToolkit\\haxe\\std/cpp/link/StaticRegexp.hx",13,0x6c31bf17)
{
	HX_STACK_LINE(13)
	regexp_register_prims();;
}
}


StaticRegexp_obj::StaticRegexp_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticRegexp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticRegexp_obj::__mClass,"__mClass");
};

#endif

hx::Class StaticRegexp_obj::__mClass;

void StaticRegexp_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.link.StaticRegexp","\x20","\x06","\xd3","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StaticRegexp_obj >;
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

} // end namespace cpp
} // end namespace link
