#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_Mysql
#include <sys/db/Mysql.h>
#endif
#ifndef INCLUDED_sys_db__Mysql_D
#include <sys/db/_Mysql/D.h>
#endif
#ifndef INCLUDED_sys_db__Mysql_MysqlConnection
#include <sys/db/_Mysql/MysqlConnection.h>
#endif
namespace sys{
namespace db{

Void Mysql_obj::__construct()
{
	return null();
}

//Mysql_obj::~Mysql_obj() { }

Dynamic Mysql_obj::__CreateEmpty() { return  new Mysql_obj; }
hx::ObjectPtr< Mysql_obj > Mysql_obj::__new()
{  hx::ObjectPtr< Mysql_obj > _result_ = new Mysql_obj();
	_result_->__construct();
	return _result_;}

Dynamic Mysql_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mysql_obj > _result_ = new Mysql_obj();
	_result_->__construct();
	return _result_;}

::sys::db::Connection Mysql_obj::connect( Dynamic params){
	HX_STACK_FRAME("sys.db.Mysql","connect",0x2cf3750f,"sys.db.Mysql.connect","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",186,0xe3bbc785)
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(188)
	::String tmp = params->__Field(HX_HCSTRING("host","\x68","\xcf","\x12","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	bool tmp1 = (params->__Field(HX_HCSTRING("port","\x81","\x83","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	if ((tmp1)){
		HX_STACK_LINE(189)
		tmp2 = (int)3306;
	}
	else{
		HX_STACK_LINE(189)
		tmp2 = params->__Field(HX_HCSTRING("port","\x81","\x83","\x5c","\x4a"), hx::paccDynamic );
	}
	HX_STACK_LINE(190)
	::String tmp3 = params->__Field(HX_HCSTRING("user","\x4b","\x92","\xad","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(191)
	::String tmp4 = params->__Field(HX_HCSTRING("pass","\xd1","\xe4","\x51","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(192)
	bool tmp5 = (params->__Field(HX_HCSTRING("socket","\xb3","\x8b","\x46","\x26"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(192)
	::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(192)
	if ((tmp5)){
		HX_STACK_LINE(192)
		tmp6 = null();
	}
	else{
		HX_STACK_LINE(192)
		tmp6 = params->__Field(HX_HCSTRING("socket","\xb3","\x8b","\x46","\x26"), hx::paccDynamic );
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp6,::String &tmp,::String &tmp4,Dynamic &tmp2,::String &tmp3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",187,0xe3bbc785)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("host","\x68","\xcf","\x12","\x45") , tmp,false);
				__result->Add(HX_HCSTRING("port","\x81","\x83","\x5c","\x4a") , tmp2,false);
				__result->Add(HX_HCSTRING("user","\x4b","\x92","\xad","\x4d") , tmp3,false);
				__result->Add(HX_HCSTRING("pass","\xd1","\xe4","\x51","\x4a") , tmp4,false);
				__result->Add(HX_HCSTRING("socket","\xb3","\x8b","\x46","\x26") , tmp6,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(187)
	Dynamic tmp7 = _Function_1_1::Block(tmp6,tmp,tmp4,tmp2,tmp3);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(187)
	Dynamic o = tmp7;		HX_STACK_VAR(o,"o");
	HX_STACK_LINE(194)
	Dynamic tmp8 = o;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(194)
	Dynamic tmp9 = ::sys::db::_Mysql::D_obj::connect(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(194)
	Dynamic c = tmp9;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(195)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(196)
		Dynamic tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(196)
		::String tmp11 = params->__Field(HX_HCSTRING("database","\x3b","\x9b","\xab","\x95"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(196)
		::sys::db::_Mysql::D_obj::select_db(tmp10,tmp11);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(198)
				Dynamic tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(198)
				::sys::db::_Mysql::D_obj::close(tmp10);
				HX_STACK_LINE(199)
				Dynamic tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(199)
				::cpp::Lib_obj::rethrow(tmp11);
			}
		}
	}
	HX_STACK_LINE(201)
	::sys::db::_Mysql::MysqlConnection tmp10 = ::sys::db::_Mysql::MysqlConnection_obj::__new(c);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(201)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mysql_obj,connect,return )


Mysql_obj::Mysql_obj()
{
}

bool Mysql_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { outValue = connect_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mysql_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mysql_obj::__mClass,"__mClass");
};

#endif

hx::Class Mysql_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("connect","\xea","\x3b","\x80","\x15"),
	::String(null()) };

void Mysql_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db.Mysql","\x93","\x6c","\x77","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mysql_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Mysql_obj >;
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
