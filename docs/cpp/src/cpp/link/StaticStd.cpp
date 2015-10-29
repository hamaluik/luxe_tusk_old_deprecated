#include <hxcpp.h>

#ifndef INCLUDED_cpp_link_StaticStd
#include <cpp/link/StaticStd.h>
#endif
extern "C" int std_register_prims();
namespace cpp{
namespace link{

Void StaticStd_obj::__construct()
{
	return null();
}

//StaticStd_obj::~StaticStd_obj() { }

Dynamic StaticStd_obj::__CreateEmpty() { return  new StaticStd_obj; }
hx::ObjectPtr< StaticStd_obj > StaticStd_obj::__new()
{  hx::ObjectPtr< StaticStd_obj > _result_ = new StaticStd_obj();
	_result_->__construct();
	return _result_;}

Dynamic StaticStd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StaticStd_obj > _result_ = new StaticStd_obj();
	_result_->__construct();
	return _result_;}

void StaticStd_obj::__init__() {
HX_STACK_FRAME("cpp.link.StaticStd","__init__",0x57078812,"cpp.link.StaticStd.__init__","C:\\HaxeToolkit\\haxe\\std/cpp/link/StaticStd.hx",14,0x1e3fe439)
{
	HX_STACK_LINE(14)
	std_register_prims();;
}
}


StaticStd_obj::StaticStd_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticStd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticStd_obj::__mClass,"__mClass");
};

#endif

hx::Class StaticStd_obj::__mClass;

void StaticStd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.link.StaticStd","\xec","\x15","\x31","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StaticStd_obj >;
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
