#include <hxcpp.h>

#ifndef INCLUDED_tusk_Files
#include <tusk/Files.h>
#endif
namespace tusk{

Void Files_obj::__construct()
{
	return null();
}

//Files_obj::~Files_obj() { }

Dynamic Files_obj::__CreateEmpty() { return  new Files_obj; }
hx::ObjectPtr< Files_obj > Files_obj::__new()
{  hx::ObjectPtr< Files_obj > _result_ = new Files_obj();
	_result_->__construct();
	return _result_;}

Dynamic Files_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Files_obj > _result_ = new Files_obj();
	_result_->__construct();
	return _result_;}


Files_obj::Files_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Files_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Files_obj::__mClass,"__mClass");
};

#endif

hx::Class Files_obj::__mClass;

void Files_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.Files","\x82","\x1c","\x66","\x95");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Files_obj >;
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
