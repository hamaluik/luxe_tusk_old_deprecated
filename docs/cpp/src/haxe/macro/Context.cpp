#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Context
#include <haxe/macro/Context.h>
#endif
namespace haxe{
namespace macro{

Void Context_obj::__construct()
{
	return null();
}

//Context_obj::~Context_obj() { }

Dynamic Context_obj::__CreateEmpty() { return  new Context_obj; }
hx::ObjectPtr< Context_obj > Context_obj::__new()
{  hx::ObjectPtr< Context_obj > _result_ = new Context_obj();
	_result_->__construct();
	return _result_;}

Dynamic Context_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context_obj > _result_ = new Context_obj();
	_result_->__construct();
	return _result_;}


Context_obj::Context_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context_obj::__mClass,"__mClass");
};

#endif

hx::Class Context_obj::__mClass;

void Context_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.macro.Context","\x25","\x81","\x2a","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context_obj >;
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
} // end namespace macro
