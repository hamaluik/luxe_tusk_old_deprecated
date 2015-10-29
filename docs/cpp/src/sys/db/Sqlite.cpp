#include <hxcpp.h>

#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_Sqlite
#include <sys/db/Sqlite.h>
#endif
#ifndef INCLUDED_sys_db__Sqlite_SqliteConnection
#include <sys/db/_Sqlite/SqliteConnection.h>
#endif
namespace sys{
namespace db{

Void Sqlite_obj::__construct()
{
	return null();
}

//Sqlite_obj::~Sqlite_obj() { }

Dynamic Sqlite_obj::__CreateEmpty() { return  new Sqlite_obj; }
hx::ObjectPtr< Sqlite_obj > Sqlite_obj::__new()
{  hx::ObjectPtr< Sqlite_obj > _result_ = new Sqlite_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sqlite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sqlite_obj > _result_ = new Sqlite_obj();
	_result_->__construct();
	return _result_;}

::sys::db::Connection Sqlite_obj::open( ::String file){
	HX_STACK_FRAME("sys.db.Sqlite","open",0x1432cbdd,"sys.db.Sqlite.open","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",184,0xf219dfa9)
	HX_STACK_ARG(file,"file")
	HX_STACK_LINE(185)
	::sys::db::_Sqlite::SqliteConnection tmp = ::sys::db::_Sqlite::SqliteConnection_obj::__new(file);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sqlite_obj,open,return )


Sqlite_obj::Sqlite_obj()
{
}

bool Sqlite_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { outValue = open_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sqlite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sqlite_obj::__mClass,"__mClass");
};

#endif

hx::Class Sqlite_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("open","\xca","\x03","\xb4","\x49"),
	::String(null()) };

void Sqlite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db.Sqlite","\x3b","\x91","\x50","\x26");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sqlite_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sqlite_obj >;
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

} // end namespace sys
} // end namespace db
