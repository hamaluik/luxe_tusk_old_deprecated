#include <hxcpp.h>

#ifndef INCLUDED_haxe_remoting_FlashJsConnection
#include <haxe/remoting/FlashJsConnection.h>
#endif
namespace haxe{
namespace remoting{

Void FlashJsConnection_obj::__construct()
{
	return null();
}

//FlashJsConnection_obj::~FlashJsConnection_obj() { }

Dynamic FlashJsConnection_obj::__CreateEmpty() { return  new FlashJsConnection_obj; }
hx::ObjectPtr< FlashJsConnection_obj > FlashJsConnection_obj::__new()
{  hx::ObjectPtr< FlashJsConnection_obj > _result_ = new FlashJsConnection_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlashJsConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlashJsConnection_obj > _result_ = new FlashJsConnection_obj();
	_result_->__construct();
	return _result_;}


FlashJsConnection_obj::FlashJsConnection_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlashJsConnection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlashJsConnection_obj::__mClass,"__mClass");
};

#endif

hx::Class FlashJsConnection_obj::__mClass;

void FlashJsConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.FlashJsConnection","\x54","\xd1","\x03","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlashJsConnection_obj >;
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

} // end namespace haxe
} // end namespace remoting
