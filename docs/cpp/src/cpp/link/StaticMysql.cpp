#include <hxcpp.h>

#ifndef INCLUDED_cpp_link_StaticMysql
#include <cpp/link/StaticMysql.h>
#endif
extern "C" int mysql_register_prims();
namespace cpp{
namespace link{

Void StaticMysql_obj::__construct()
{
	return null();
}

//StaticMysql_obj::~StaticMysql_obj() { }

Dynamic StaticMysql_obj::__CreateEmpty() { return  new StaticMysql_obj; }
hx::ObjectPtr< StaticMysql_obj > StaticMysql_obj::__new()
{  hx::ObjectPtr< StaticMysql_obj > _result_ = new StaticMysql_obj();
	_result_->__construct();
	return _result_;}

Dynamic StaticMysql_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StaticMysql_obj > _result_ = new StaticMysql_obj();
	_result_->__construct();
	return _result_;}

void StaticMysql_obj::__init__() {
HX_STACK_FRAME("cpp.link.StaticMysql","__init__",0x7944aa73,"cpp.link.StaticMysql.__init__","C:\\HaxeToolkit\\haxe\\std/cpp/link/StaticMysql.hx",14,0x27891f9a)
{
	HX_STACK_LINE(14)
	mysql_register_prims();;
}
}


StaticMysql_obj::StaticMysql_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticMysql_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticMysql_obj::__mClass,"__mClass");
};

#endif

hx::Class StaticMysql_obj::__mClass;

void StaticMysql_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.link.StaticMysql","\xab","\xc3","\x05","\x30");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StaticMysql_obj >;
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

} // end namespace cpp
} // end namespace link
