#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
#ifndef INCLUDED_sys_db__Sqlite_SqliteConnection
#include <sys/db/_Sqlite/SqliteConnection.h>
#endif
#ifndef INCLUDED_sys_db__Sqlite_SqliteResultSet
#include <sys/db/_Sqlite/SqliteResultSet.h>
#endif
namespace sys{
namespace db{
namespace _Sqlite{

Void SqliteConnection_obj::__construct(::String file)
{
HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","new",0xf8a8646e,"sys.db._Sqlite.SqliteConnection.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",28,0xf219dfa9)
HX_STACK_THIS(this)
HX_STACK_ARG(file,"file")
{
	HX_STACK_LINE(29)
	::String tmp = file;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Dynamic tmp1 = ::sys::db::_Sqlite::SqliteConnection_obj::_connect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	this->c = tmp1;
}
;
	return null();
}

//SqliteConnection_obj::~SqliteConnection_obj() { }

Dynamic SqliteConnection_obj::__CreateEmpty() { return  new SqliteConnection_obj; }
hx::ObjectPtr< SqliteConnection_obj > SqliteConnection_obj::__new(::String file)
{  hx::ObjectPtr< SqliteConnection_obj > _result_ = new SqliteConnection_obj();
	_result_->__construct(file);
	return _result_;}

Dynamic SqliteConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SqliteConnection_obj > _result_ = new SqliteConnection_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *SqliteConnection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::sys::db::Connection_obj)) return operator ::sys::db::Connection_obj *();
	return super::__ToInterface(inType);
}

SqliteConnection_obj::operator ::sys::db::Connection_obj *()
	{ return new ::sys::db::Connection_delegate_< SqliteConnection_obj >(this); }
Void SqliteConnection_obj::close( ){
{
		HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","close",0x6e0f4b46,"sys.db._Sqlite.SqliteConnection.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",32,0xf219dfa9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		Dynamic tmp = this->c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::sys::db::_Sqlite::SqliteConnection_obj::_close(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteConnection_obj,close,(void))

::sys::db::ResultSet SqliteConnection_obj::request( ::String s){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","request",0x544f925d,"sys.db._Sqlite.SqliteConnection.request","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",37,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(37)
	try
	{
	HX_STACK_CATCHABLE(::String, 0);
	{
		HX_STACK_LINE(38)
		Dynamic tmp = this->c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		Dynamic tmp2 = ::sys::db::_Sqlite::SqliteConnection_obj::_request(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		::sys::db::_Sqlite::SqliteResultSet tmp3 = ::sys::db::_Sqlite::SqliteResultSet_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		return tmp3;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String e = __e;{
				HX_STACK_LINE(40)
				::String tmp = (HX_HCSTRING("Error while executing ","\xb5","\x68","\x57","\x8c") + s);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(40)
				::String tmp1 = (tmp + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(40)
				::String tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(40)
				::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(40)
				::String tmp4 = (tmp3 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(40)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(37)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SqliteConnection_obj,request,return )

::String SqliteConnection_obj::escape( ::String s){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","escape",0xabdb2c33,"sys.db._Sqlite.SqliteConnection.escape","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",44,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(45)
	::String tmp = s.split(HX_HCSTRING("'","\x27","\x00","\x00","\x00"))->join(HX_HCSTRING("''","\x20","\x22","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(SqliteConnection_obj,escape,return )

::String SqliteConnection_obj::quote( ::String s){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","quote",0x839e56ca,"sys.db._Sqlite.SqliteConnection.quote","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",48,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(49)
	int tmp = s.indexOf(HX_HCSTRING("\x00""","\x00","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	bool tmp1 = (tmp >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	if ((tmp1)){
		HX_STACK_LINE(50)
		::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		::String tmp3 = ::sys::db::_Sqlite::SqliteConnection_obj::_encode(tmp2,HX_HCSTRING("0123456789ABCDEF","\x68","\x2a","\x58","\xa2"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		::String tmp4 = ::String(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		::String tmp5 = (HX_HCSTRING("x'","\xaf","\x68","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		::String tmp6 = (tmp5 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		return tmp6;
	}
	HX_STACK_LINE(51)
	::String tmp2 = s.split(HX_HCSTRING("'","\x27","\x00","\x00","\x00"))->join(HX_HCSTRING("''","\x20","\x22","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	::String tmp3 = (HX_HCSTRING("'","\x27","\x00","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	::String tmp4 = (tmp3 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(SqliteConnection_obj,quote,return )

Void SqliteConnection_obj::addValue( ::StringBuf s,Dynamic v){
{
		HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","addValue",0x6ca79ec2,"sys.db._Sqlite.SqliteConnection.addValue","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",54,0xf219dfa9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(55)
		bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		if ((tmp)){
			HX_STACK_LINE(56)
			Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(56)
			s->add(tmp1);
		}
		else{
			HX_STACK_LINE(58)
			Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(58)
			bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::Bool >());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			if ((tmp2)){
				HX_STACK_LINE(59)
				Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(59)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(59)
				if ((tmp3)){
					HX_STACK_LINE(59)
					tmp4 = (int)1;
				}
				else{
					HX_STACK_LINE(59)
					tmp4 = (int)0;
				}
				HX_STACK_LINE(59)
				s->add(tmp4);
			}
			else{
				HX_STACK_LINE(61)
				int tmp3 = v->__GetType();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(61)
				int t = tmp3;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(62)
				bool tmp4 = (t == (int)255);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(62)
				if ((tmp4)){
					HX_STACK_LINE(63)
					Dynamic tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(63)
					s->add(tmp5);
				}
				else{
					HX_STACK_LINE(64)
					bool tmp5 = (t == (int)2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(64)
					if ((tmp5)){
						HX_STACK_LINE(65)
						Dynamic tmp6 = v->__Field(HX_HCSTRING("__GetInt","\x39","\x25","\xe3","\x7f"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(65)
						s->add(tmp6);
					}
					else{
						HX_STACK_LINE(67)
						Dynamic tmp6 = v;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(67)
						::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(67)
						::String tmp8 = this->quote(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(67)
						s->add(tmp8);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SqliteConnection_obj,addValue,(void))

int SqliteConnection_obj::lastInsertId( ){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","lastInsertId",0x123d0a1c,"sys.db._Sqlite.SqliteConnection.lastInsertId","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",71,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	Dynamic tmp = this->c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	int tmp1 = ::sys::db::_Sqlite::SqliteConnection_obj::_last_id(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteConnection_obj,lastInsertId,return )

::String SqliteConnection_obj::dbName( ){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","dbName",0x6dce759b,"sys.db._Sqlite.SqliteConnection.dbName","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",76,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	return HX_HCSTRING("SQLite","\xec","\x38","\xa0","\x05");
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteConnection_obj,dbName,return )

Void SqliteConnection_obj::startTransaction( ){
{
		HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","startTransaction",0x075777ce,"sys.db._Sqlite.SqliteConnection.startTransaction","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",80,0xf219dfa9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		this->request(HX_HCSTRING("BEGIN TRANSACTION","\x27","\xad","\x5f","\xe2"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteConnection_obj,startTransaction,(void))

Void SqliteConnection_obj::commit( ){
{
		HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","commit",0x982f58a9,"sys.db._Sqlite.SqliteConnection.commit","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",83,0xf219dfa9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		this->request(HX_HCSTRING("COMMIT","\xf7","\x1b","\xb1","\x79"));
		HX_STACK_LINE(85)
		this->startTransaction();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteConnection_obj,commit,(void))

Void SqliteConnection_obj::rollback( ){
{
		HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","rollback",0xe0b9c156,"sys.db._Sqlite.SqliteConnection.rollback","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",88,0xf219dfa9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		this->request(HX_HCSTRING("ROLLBACK","\x24","\x58","\xad","\x78"));
		HX_STACK_LINE(90)
		this->startTransaction();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteConnection_obj,rollback,(void))

Dynamic SqliteConnection_obj::_encode;

Dynamic SqliteConnection_obj::_connect;

Dynamic SqliteConnection_obj::_close;

Dynamic SqliteConnection_obj::_request;

Dynamic SqliteConnection_obj::_last_id;


SqliteConnection_obj::SqliteConnection_obj()
{
}

void SqliteConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SqliteConnection);
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_END_CLASS();
}

void SqliteConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(c,"c");
}

Dynamic SqliteConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"quote") ) { return quote_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { return escape_dyn(); }
		if (HX_FIELD_EQ(inName,"dbName") ) { return dbName_dyn(); }
		if (HX_FIELD_EQ(inName,"commit") ) { return commit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return request_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addValue") ) { return addValue_dyn(); }
		if (HX_FIELD_EQ(inName,"rollback") ) { return rollback_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastInsertId") ) { return lastInsertId_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"startTransaction") ) { return startTransaction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SqliteConnection_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_close") ) { outValue = _close; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_encode") ) { outValue = _encode; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_connect") ) { outValue = _connect; return true;  }
		if (HX_FIELD_EQ(inName,"_request") ) { outValue = _request; return true;  }
		if (HX_FIELD_EQ(inName,"_last_id") ) { outValue = _last_id; return true;  }
	}
	return false;
}

Dynamic SqliteConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SqliteConnection_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_close") ) { _close=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_encode") ) { _encode=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_connect") ) { _connect=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"_request") ) { _request=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"_last_id") ) { _last_id=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void SqliteConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SqliteConnection_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &SqliteConnection_obj::_encode,HX_HCSTRING("_encode","\xb5","\x03","\x5b","\x68")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SqliteConnection_obj::_connect,HX_HCSTRING("_connect","\x6b","\x95","\x38","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SqliteConnection_obj::_close,HX_HCSTRING("_close","\xf9","\x5e","\x4a","\x44")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SqliteConnection_obj::_request,HX_HCSTRING("_request","\xd0","\x38","\x3d","\x7e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SqliteConnection_obj::_last_id,HX_HCSTRING("_last_id","\xe5","\x5a","\x6e","\x11")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("c","\x63","\x00","\x00","\x00"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"),
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
	HX_MARK_MEMBER_NAME(SqliteConnection_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SqliteConnection_obj::_encode,"_encode");
	HX_MARK_MEMBER_NAME(SqliteConnection_obj::_connect,"_connect");
	HX_MARK_MEMBER_NAME(SqliteConnection_obj::_close,"_close");
	HX_MARK_MEMBER_NAME(SqliteConnection_obj::_request,"_request");
	HX_MARK_MEMBER_NAME(SqliteConnection_obj::_last_id,"_last_id");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SqliteConnection_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SqliteConnection_obj::_encode,"_encode");
	HX_VISIT_MEMBER_NAME(SqliteConnection_obj::_connect,"_connect");
	HX_VISIT_MEMBER_NAME(SqliteConnection_obj::_close,"_close");
	HX_VISIT_MEMBER_NAME(SqliteConnection_obj::_request,"_request");
	HX_VISIT_MEMBER_NAME(SqliteConnection_obj::_last_id,"_last_id");
};

#endif

hx::Class SqliteConnection_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_encode","\xb5","\x03","\x5b","\x68"),
	HX_HCSTRING("_connect","\x6b","\x95","\x38","\x4f"),
	HX_HCSTRING("_close","\xf9","\x5e","\x4a","\x44"),
	HX_HCSTRING("_request","\xd0","\x38","\x3d","\x7e"),
	HX_HCSTRING("_last_id","\xe5","\x5a","\x6e","\x11"),
	::String(null()) };

void SqliteConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db._Sqlite.SqliteConnection","\x7c","\x55","\xee","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SqliteConnection_obj::__GetStatic;
	__mClass->mSetStaticField = &SqliteConnection_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SqliteConnection_obj >;
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

void SqliteConnection_obj::__boot()
{
	_encode= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("base_encode","\xc4","\xaf","\x10","\xed"),(int)2);
	_connect= ::cpp::Lib_obj::load(HX_HCSTRING("sqlite","\xcc","\x28","\x05","\x53"),HX_HCSTRING("sqlite_connect","\x37","\x6a","\x05","\x80"),(int)1);
	_close= ::cpp::Lib_obj::load(HX_HCSTRING("sqlite","\xcc","\x28","\x05","\x53"),HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),(int)1);
	_request= ::cpp::Lib_obj::load(HX_HCSTRING("sqlite","\xcc","\x28","\x05","\x53"),HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"),(int)2);
	_last_id= ::cpp::Lib_obj::load(HX_HCSTRING("sqlite","\xcc","\x28","\x05","\x53"),HX_HCSTRING("last_insert_id","\xf8","\x45","\xfc","\xf1"),(int)1);
}

} // end namespace sys
} // end namespace db
} // end namespace _Sqlite
