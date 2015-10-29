#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_sys_db__Mysql_D
#include <sys/db/_Mysql/D.h>
#endif
namespace sys{
namespace db{
namespace _Mysql{

Void D_obj::__construct()
{
	return null();
}

//D_obj::~D_obj() { }

Dynamic D_obj::__CreateEmpty() { return  new D_obj; }
hx::ObjectPtr< D_obj > D_obj::__new()
{  hx::ObjectPtr< D_obj > _result_ = new D_obj();
	_result_->__construct();
	return _result_;}

Dynamic D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< D_obj > _result_ = new D_obj();
	_result_->__construct();
	return _result_;}

Dynamic D_obj::load( ::String fun,int args){
	HX_STACK_FRAME("sys.db._Mysql.D","load",0x9e1581ec,"sys.db._Mysql.D.load","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",26,0xe3bbc785)
	HX_STACK_ARG(fun,"fun")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(27)
	::String tmp = ::sys::db::_Mysql::D_obj::lib;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::String tmp1 = fun;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	int tmp2 = args;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	Dynamic tmp3 = ::cpp::Lib_obj::load(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(D_obj,load,return )

::String D_obj::lib;

Dynamic D_obj::connect;

Dynamic D_obj::select_db;

Dynamic D_obj::request;

Dynamic D_obj::close;

Dynamic D_obj::escape;

Dynamic D_obj::set_conv_funs;

Dynamic D_obj::result_get_length;

Dynamic D_obj::result_get_nfields;

Dynamic D_obj::result_next;

Dynamic D_obj::result_get;

Dynamic D_obj::result_get_int;

Dynamic D_obj::result_get_float;

Dynamic D_obj::result_fields_names;


D_obj::D_obj()
{
}

bool D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { outValue = lib; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { outValue = close; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { outValue = escape; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { outValue = connect; return true;  }
		if (HX_FIELD_EQ(inName,"request") ) { outValue = request; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"select_db") ) { outValue = select_db; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"result_get") ) { outValue = result_get; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"result_next") ) { outValue = result_next; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_conv_funs") ) { outValue = set_conv_funs; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"result_get_int") ) { outValue = result_get_int; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"result_get_float") ) { outValue = result_get_float; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"result_get_length") ) { outValue = result_get_length; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"result_get_nfields") ) { outValue = result_get_nfields; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"result_fields_names") ) { outValue = result_fields_names; return true;  }
	}
	return false;
}

bool D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lib") ) { lib=ioValue.Cast< ::String >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { close=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { escape=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { connect=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"request") ) { request=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"select_db") ) { select_db=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"result_get") ) { result_get=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"result_next") ) { result_next=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_conv_funs") ) { set_conv_funs=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"result_get_int") ) { result_get_int=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"result_get_float") ) { result_get_float=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"result_get_length") ) { result_get_length=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"result_get_nfields") ) { result_get_nfields=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"result_fields_names") ) { result_fields_names=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &D_obj::lib,HX_HCSTRING("lib","\x45","\x4f","\x52","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &D_obj::connect,HX_HCSTRING("connect","\xea","\x3b","\x80","\x15")},
	{hx::fsObject /*Dynamic*/ ,(void *) &D_obj::select_db,HX_HCSTRING("select_db","\x21","\x58","\x13","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &D_obj::request,HX_HCSTRING("request","\x4f","\xdf","\x84","\x44")},
	{hx::fsObject /*Dynamic*/ ,(void *) &D_obj::close,HX_HCSTRING("close","\xb8","\x17","\x63","\x48")},
	{hx::fsObject /*Dynamic*/ ,(void *) &D_obj::escape,HX_HCSTRING("escape","\x81","\x43","\xda","\xda")},
	{hx::fsObject /*Dynamic*/ ,(void *) &D_obj::set_conv_funs,HX_HCSTRING("set_conv_funs","\xa2","\x6e","\xd0","\x69")},
	{hx::fsObject /*Dynamic*/ ,(void *) &D_obj::result_get_length,HX_HCSTRING("result_get_length","\x11","\x0c","\xdf","\x66")},
	{hx::fsObject /*Dynamic*/ ,(void *) &D_obj::result_get_nfields,HX_HCSTRING("result_get_nfields","\xdc","\x63","\x78","\x73")},
	{hx::fsObject /*Dynamic*/ ,(void *) &D_obj::result_next,HX_HCSTRING("result_next","\xd5","\xf6","\x74","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &D_obj::result_get,HX_HCSTRING("result_get","\xf4","\x60","\x80","\xc5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &D_obj::result_get_int,HX_HCSTRING("result_get_int","\xe4","\x3c","\x11","\xba")},
	{hx::fsObject /*Dynamic*/ ,(void *) &D_obj::result_get_float,HX_HCSTRING("result_get_float","\xd1","\x9c","\xfb","\x92")},
	{hx::fsObject /*Dynamic*/ ,(void *) &D_obj::result_fields_names,HX_HCSTRING("result_fields_names","\x24","\x2a","\xe8","\xd1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(D_obj::lib,"lib");
	HX_MARK_MEMBER_NAME(D_obj::connect,"connect");
	HX_MARK_MEMBER_NAME(D_obj::select_db,"select_db");
	HX_MARK_MEMBER_NAME(D_obj::request,"request");
	HX_MARK_MEMBER_NAME(D_obj::close,"close");
	HX_MARK_MEMBER_NAME(D_obj::escape,"escape");
	HX_MARK_MEMBER_NAME(D_obj::set_conv_funs,"set_conv_funs");
	HX_MARK_MEMBER_NAME(D_obj::result_get_length,"result_get_length");
	HX_MARK_MEMBER_NAME(D_obj::result_get_nfields,"result_get_nfields");
	HX_MARK_MEMBER_NAME(D_obj::result_next,"result_next");
	HX_MARK_MEMBER_NAME(D_obj::result_get,"result_get");
	HX_MARK_MEMBER_NAME(D_obj::result_get_int,"result_get_int");
	HX_MARK_MEMBER_NAME(D_obj::result_get_float,"result_get_float");
	HX_MARK_MEMBER_NAME(D_obj::result_fields_names,"result_fields_names");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(D_obj::lib,"lib");
	HX_VISIT_MEMBER_NAME(D_obj::connect,"connect");
	HX_VISIT_MEMBER_NAME(D_obj::select_db,"select_db");
	HX_VISIT_MEMBER_NAME(D_obj::request,"request");
	HX_VISIT_MEMBER_NAME(D_obj::close,"close");
	HX_VISIT_MEMBER_NAME(D_obj::escape,"escape");
	HX_VISIT_MEMBER_NAME(D_obj::set_conv_funs,"set_conv_funs");
	HX_VISIT_MEMBER_NAME(D_obj::result_get_length,"result_get_length");
	HX_VISIT_MEMBER_NAME(D_obj::result_get_nfields,"result_get_nfields");
	HX_VISIT_MEMBER_NAME(D_obj::result_next,"result_next");
	HX_VISIT_MEMBER_NAME(D_obj::result_get,"result_get");
	HX_VISIT_MEMBER_NAME(D_obj::result_get_int,"result_get_int");
	HX_VISIT_MEMBER_NAME(D_obj::result_get_float,"result_get_float");
	HX_VISIT_MEMBER_NAME(D_obj::result_fields_names,"result_fields_names");
};

#endif

hx::Class D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("lib","\x45","\x4f","\x52","\x00"),
	HX_HCSTRING("connect","\xea","\x3b","\x80","\x15"),
	HX_HCSTRING("select_db","\x21","\x58","\x13","\x8e"),
	HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	HX_HCSTRING("set_conv_funs","\xa2","\x6e","\xd0","\x69"),
	HX_HCSTRING("result_get_length","\x11","\x0c","\xdf","\x66"),
	HX_HCSTRING("result_get_nfields","\xdc","\x63","\x78","\x73"),
	HX_HCSTRING("result_next","\xd5","\xf6","\x74","\x0f"),
	HX_HCSTRING("result_get","\xf4","\x60","\x80","\xc5"),
	HX_HCSTRING("result_get_int","\xe4","\x3c","\x11","\xba"),
	HX_HCSTRING("result_get_float","\xd1","\x9c","\xfb","\x92"),
	HX_HCSTRING("result_fields_names","\x24","\x2a","\xe8","\xd1"),
	::String(null()) };

void D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db._Mysql.D","\x68","\x8e","\x8b","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &D_obj::__GetStatic;
	__mClass->mSetStaticField = &D_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< D_obj >;
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

void D_obj::__boot()
{
	lib= HX_HCSTRING("mysql5","\xd3","\x2b","\xbc","\x8c");
	connect= ::sys::db::_Mysql::D_obj::load(HX_HCSTRING("mysql_connect","\x8d","\x39","\x4a","\xd8"),(int)1);
	select_db= ::sys::db::_Mysql::D_obj::load(HX_HCSTRING("select_db","\x21","\x58","\x13","\x8e"),(int)2);
	request= ::sys::db::_Mysql::D_obj::load(HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"),(int)2);
	close= ::sys::db::_Mysql::D_obj::load(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),(int)1);
	escape= ::sys::db::_Mysql::D_obj::load(HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),(int)2);
	set_conv_funs= ::sys::db::_Mysql::D_obj::load(HX_HCSTRING("set_conv_funs","\xa2","\x6e","\xd0","\x69"),(int)4);
	result_get_length= ::sys::db::_Mysql::D_obj::load(HX_HCSTRING("result_get_length","\x11","\x0c","\xdf","\x66"),(int)1);
	result_get_nfields= ::sys::db::_Mysql::D_obj::load(HX_HCSTRING("result_get_nfields","\xdc","\x63","\x78","\x73"),(int)1);
	result_next= ::sys::db::_Mysql::D_obj::load(HX_HCSTRING("result_next","\xd5","\xf6","\x74","\x0f"),(int)1);
	result_get= ::sys::db::_Mysql::D_obj::load(HX_HCSTRING("result_get","\xf4","\x60","\x80","\xc5"),(int)2);
	result_get_int= ::sys::db::_Mysql::D_obj::load(HX_HCSTRING("result_get_int","\xe4","\x3c","\x11","\xba"),(int)2);
	result_get_float= ::sys::db::_Mysql::D_obj::load(HX_HCSTRING("result_get_float","\xd1","\x9c","\xfb","\x92"),(int)2);
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",43,0xe3bbc785)
		{
			HX_STACK_LINE(43)
			::String tmp = ::sys::db::_Mysql::D_obj::lib;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(43)
			return ::cpp::Lib_obj::loadLazy(tmp,HX_HCSTRING("result_get_fields_names","\xad","\xaf","\x63","\xba"),(int)1);
		}
		return null();
	}
};
	result_fields_names= _Function_0_1::Block();
}

} // end namespace sys
} // end namespace db
} // end namespace _Mysql
