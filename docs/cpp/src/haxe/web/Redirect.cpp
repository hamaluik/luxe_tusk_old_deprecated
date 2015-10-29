#include <hxcpp.h>

#ifndef INCLUDED_haxe_web_Redirect
#include <haxe/web/Redirect.h>
#endif
namespace haxe{
namespace web{

Void Redirect_obj::__construct()
{
HX_STACK_FRAME("haxe.web.Redirect","new",0x76e2bb90,"haxe.web.Redirect.new","C:\\HaxeToolkit\\haxe\\std/haxe/web/Dispatch.hx",65,0x23767a19)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Redirect_obj::~Redirect_obj() { }

Dynamic Redirect_obj::__CreateEmpty() { return  new Redirect_obj; }
hx::ObjectPtr< Redirect_obj > Redirect_obj::__new()
{  hx::ObjectPtr< Redirect_obj > _result_ = new Redirect_obj();
	_result_->__construct();
	return _result_;}

Dynamic Redirect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Redirect_obj > _result_ = new Redirect_obj();
	_result_->__construct();
	return _result_;}


Redirect_obj::Redirect_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Redirect_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Redirect_obj::__mClass,"__mClass");
};

#endif

hx::Class Redirect_obj::__mClass;

void Redirect_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.web.Redirect","\x9e","\xf3","\x61","\x3b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Redirect_obj >;
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
} // end namespace web
