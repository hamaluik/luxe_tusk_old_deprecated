#include <hxcpp.h>

#ifndef INCLUDED_tusk_debug_Assert
#include <tusk/debug/Assert.h>
#endif
namespace tusk{
namespace debug{

Void Assert_obj::__construct()
{
	return null();
}

//Assert_obj::~Assert_obj() { }

Dynamic Assert_obj::__CreateEmpty() { return  new Assert_obj; }
hx::ObjectPtr< Assert_obj > Assert_obj::__new()
{  hx::ObjectPtr< Assert_obj > _result_ = new Assert_obj();
	_result_->__construct();
	return _result_;}

Dynamic Assert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assert_obj > _result_ = new Assert_obj();
	_result_->__construct();
	return _result_;}

Dynamic Assert_obj::_assert;


Assert_obj::Assert_obj()
{
}

bool Assert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"assert") ) { outValue = _assert; return true;  }
	}
	return false;
}

bool Assert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"assert") ) { _assert=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Assert_obj::_assert,HX_HCSTRING("assert","\xc6","\x46","\x03","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assert_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assert_obj::_assert,"assert");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assert_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assert_obj::_assert,"assert");
};

#endif

hx::Class Assert_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("assert","\xc6","\x46","\x03","\x4c"),
	::String(null()) };

void Assert_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.debug.Assert","\xd6","\x1c","\xac","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assert_obj::__GetStatic;
	__mClass->mSetStaticField = &Assert_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assert_obj >;
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
} // end namespace debug
