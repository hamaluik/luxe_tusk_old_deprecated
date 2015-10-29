#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
namespace sys{
namespace db{


static ::String sMemberFields[] = {
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_nfields","\x7e","\xf5","\xc1","\xe4"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("nfields","\x67","\x95","\xc7","\x5e"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("results","\xf6","\x58","\x57","\x6b"),
	HX_HCSTRING("getResult","\x13","\xf2","\xda","\x84"),
	HX_HCSTRING("getIntResult","\xb6","\x63","\xda","\x3c"),
	HX_HCSTRING("getFloatResult","\xa3","\x12","\x44","\x37"),
	HX_HCSTRING("getFieldsNames","\x99","\xad","\x6d","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ResultSet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ResultSet_obj::__mClass,"__mClass");
};

#endif

hx::Class ResultSet_obj::__mClass;

void ResultSet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db.ResultSet","\xb6","\x59","\xa4","\x87");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ResultSet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace db
