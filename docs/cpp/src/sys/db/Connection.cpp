#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
namespace sys{
namespace db{


static ::String sMemberFields[] = {
	HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	HX_HCSTRING("quote","\x3c","\x23","\xf2","\x5d"),
	HX_HCSTRING("addValue","\x90","\xa5","\x15","\xab"),
	HX_HCSTRING("lastInsertId","\xea","\x8f","\xb1","\x23"),
	HX_HCSTRING("dbName","\xe9","\x8c","\xcd","\x9c"),
	HX_HCSTRING("startTransaction","\x9c","\xfc","\x7d","\xca"),
	HX_HCSTRING("commit","\xf7","\x6f","\x2e","\xc7"),
	HX_HCSTRING("rollback","\x24","\xc8","\x27","\x1f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Connection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Connection_obj::__mClass,"__mClass");
};

#endif

hx::Class Connection_obj::__mClass;

void Connection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db.Connection","\x0d","\x6c","\xac","\x5f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Connection_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace db
