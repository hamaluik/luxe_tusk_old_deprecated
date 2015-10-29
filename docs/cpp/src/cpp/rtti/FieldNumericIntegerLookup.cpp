#include <hxcpp.h>

#ifndef INCLUDED_cpp_rtti_FieldNumericIntegerLookup
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#endif
namespace cpp{
namespace rtti{


static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FieldNumericIntegerLookup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FieldNumericIntegerLookup_obj::__mClass,"__mClass");
};

#endif

hx::Class FieldNumericIntegerLookup_obj::__mClass;

void FieldNumericIntegerLookup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.rtti.FieldNumericIntegerLookup","\xf9","\x0e","\x68","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FieldNumericIntegerLookup_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
} // end namespace rtti
