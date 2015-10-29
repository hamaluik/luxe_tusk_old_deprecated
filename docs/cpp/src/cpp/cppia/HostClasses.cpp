#include <hxcpp.h>

#ifndef INCLUDED_cpp_cppia_HostClasses
#include <cpp/cppia/HostClasses.h>
#endif
namespace cpp{
namespace cppia{

Void HostClasses_obj::__construct()
{
	return null();
}

//HostClasses_obj::~HostClasses_obj() { }

Dynamic HostClasses_obj::__CreateEmpty() { return  new HostClasses_obj; }
hx::ObjectPtr< HostClasses_obj > HostClasses_obj::__new()
{  hx::ObjectPtr< HostClasses_obj > _result_ = new HostClasses_obj();
	_result_->__construct();
	return _result_;}

Dynamic HostClasses_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HostClasses_obj > _result_ = new HostClasses_obj();
	_result_->__construct();
	return _result_;}


HostClasses_obj::HostClasses_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HostClasses_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HostClasses_obj::__mClass,"__mClass");
};

#endif

hx::Class HostClasses_obj::__mClass;

void HostClasses_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.cppia.HostClasses","\xc0","\x78","\xe5","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HostClasses_obj >;
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
} // end namespace cppia
