#include <hxcpp.h>

#ifndef INCLUDED_tusk_macros_AutoSerializer
#include <tusk/macros/AutoSerializer.h>
#endif
namespace tusk{
namespace macros{

Void AutoSerializer_obj::__construct()
{
	return null();
}

//AutoSerializer_obj::~AutoSerializer_obj() { }

Dynamic AutoSerializer_obj::__CreateEmpty() { return  new AutoSerializer_obj; }
hx::ObjectPtr< AutoSerializer_obj > AutoSerializer_obj::__new()
{  hx::ObjectPtr< AutoSerializer_obj > _result_ = new AutoSerializer_obj();
	_result_->__construct();
	return _result_;}

Dynamic AutoSerializer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AutoSerializer_obj > _result_ = new AutoSerializer_obj();
	_result_->__construct();
	return _result_;}

Dynamic AutoSerializer_obj::apply;


AutoSerializer_obj::AutoSerializer_obj()
{
}

bool AutoSerializer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { outValue = apply; return true;  }
	}
	return false;
}

bool AutoSerializer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { apply=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &AutoSerializer_obj::apply,HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AutoSerializer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AutoSerializer_obj::apply,"apply");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AutoSerializer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AutoSerializer_obj::apply,"apply");
};

#endif

hx::Class AutoSerializer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	::String(null()) };

void AutoSerializer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.macros.AutoSerializer","\xd3","\x08","\xc8","\x0f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AutoSerializer_obj::__GetStatic;
	__mClass->mSetStaticField = &AutoSerializer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AutoSerializer_obj >;
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
} // end namespace macros
