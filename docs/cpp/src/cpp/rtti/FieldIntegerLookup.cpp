#include <hxcpp.h>

#ifndef INCLUDED_cpp_rtti_FieldIntegerLookup
#include <cpp/rtti/FieldIntegerLookup.h>
#endif
namespace cpp{
namespace rtti{


static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FieldIntegerLookup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FieldIntegerLookup_obj::__mClass,"__mClass");
};

#endif

hx::Class FieldIntegerLookup_obj::__mClass;

void FieldIntegerLookup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.rtti.FieldIntegerLookup","\xea","\x35","\xb7","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FieldIntegerLookup_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
} // end namespace rtti
