#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
#ifndef INCLUDED_sys_db__Sqlite_SqliteResultSet
#include <sys/db/_Sqlite/SqliteResultSet.h>
#endif
namespace sys{
namespace db{
namespace _Sqlite{

Void SqliteResultSet_obj::__construct(Dynamic r)
{
HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","new",0x31627399,"sys.db._Sqlite.SqliteResultSet.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",108,0xf219dfa9)
HX_STACK_THIS(this)
HX_STACK_ARG(r,"r")
{
	HX_STACK_LINE(109)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	this->cache = tmp;
	HX_STACK_LINE(110)
	this->r = r;
	HX_STACK_LINE(111)
	this->hasNext();
}
;
	return null();
}

//SqliteResultSet_obj::~SqliteResultSet_obj() { }

Dynamic SqliteResultSet_obj::__CreateEmpty() { return  new SqliteResultSet_obj; }
hx::ObjectPtr< SqliteResultSet_obj > SqliteResultSet_obj::__new(Dynamic r)
{  hx::ObjectPtr< SqliteResultSet_obj > _result_ = new SqliteResultSet_obj();
	_result_->__construct(r);
	return _result_;}

Dynamic SqliteResultSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SqliteResultSet_obj > _result_ = new SqliteResultSet_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *SqliteResultSet_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::sys::db::ResultSet_obj)) return operator ::sys::db::ResultSet_obj *();
	return super::__ToInterface(inType);
}

SqliteResultSet_obj::operator ::sys::db::ResultSet_obj *()
	{ return new ::sys::db::ResultSet_delegate_< SqliteResultSet_obj >(this); }
int SqliteResultSet_obj::get_length( ){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","get_length",0x97262a96,"sys.db._Sqlite.SqliteResultSet.get_length","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",114,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	int tmp = this->get_nfields();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	if ((tmp1)){
		HX_STACK_LINE(116)
		while((true)){
			HX_STACK_LINE(117)
			Dynamic tmp2 = this->r;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(117)
			Dynamic tmp3 = ::sys::db::_Sqlite::SqliteResultSet_obj::result_next(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(117)
			Dynamic c = tmp3;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(118)
			bool tmp4 = (c == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(118)
			if ((tmp4)){
				HX_STACK_LINE(119)
				break;
			}
			HX_STACK_LINE(120)
			::List tmp5 = this->cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(120)
			Dynamic tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(120)
			tmp5->add(tmp6);
		}
		HX_STACK_LINE(122)
		::List tmp2 = this->cache;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		return tmp3;
	}
	HX_STACK_LINE(124)
	Dynamic tmp2 = this->r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(124)
	int tmp3 = ::sys::db::_Sqlite::SqliteResultSet_obj::result_get_length(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(124)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteResultSet_obj,get_length,return )

int SqliteResultSet_obj::get_nfields( ){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","get_nfields",0x816bf9b7,"sys.db._Sqlite.SqliteResultSet.get_nfields","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",127,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	int tmp1 = ::sys::db::_Sqlite::SqliteResultSet_obj::result_get_nfields(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteResultSet_obj,get_nfields,return )

bool SqliteResultSet_obj::hasNext( ){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","hasNext",0x0ab9d926,"sys.db._Sqlite.SqliteResultSet.hasNext","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",131,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	Dynamic tmp = this->next();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	Dynamic c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(133)
	bool tmp1 = (c == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	if ((tmp1)){
		HX_STACK_LINE(134)
		return false;
	}
	HX_STACK_LINE(135)
	::List tmp2 = this->cache;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	Dynamic tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(135)
	tmp2->push(tmp3);
	HX_STACK_LINE(136)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteResultSet_obj,hasNext,return )

Dynamic SqliteResultSet_obj::next( ){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","next",0x04c2b39a,"sys.db._Sqlite.SqliteResultSet.next","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",139,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	::List tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	Dynamic tmp1 = tmp->pop();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	Dynamic c = tmp1;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(141)
	bool tmp2 = (c != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	if ((tmp2)){
		HX_STACK_LINE(142)
		Dynamic tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		return tmp3;
	}
	HX_STACK_LINE(143)
	Dynamic tmp3 = this->r;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	Dynamic tmp4 = ::sys::db::_Sqlite::SqliteResultSet_obj::result_next(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteResultSet_obj,next,return )

::List SqliteResultSet_obj::results( ){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","results",0x5dca8caf,"sys.db._Sqlite.SqliteResultSet.results","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",146,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	::List l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(148)
	while((true)){
		HX_STACK_LINE(149)
		Dynamic tmp1 = this->next();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		Dynamic c = tmp1;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(150)
		bool tmp2 = (c == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		if ((tmp2)){
			HX_STACK_LINE(151)
			break;
		}
		HX_STACK_LINE(152)
		Dynamic tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		l->add(tmp3);
	}
	HX_STACK_LINE(154)
	::List tmp1 = l;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteResultSet_obj,results,return )

::String SqliteResultSet_obj::getResult( int n){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","getResult",0x614d460c,"sys.db._Sqlite.SqliteResultSet.getResult","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",157,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(158)
	Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	::String tmp2 = ::sys::db::_Sqlite::SqliteResultSet_obj::result_get(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(158)
	::String tmp3 = ::String(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(158)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SqliteResultSet_obj,getResult,return )

int SqliteResultSet_obj::getIntResult( int n){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","getIntResult",0xb4f4115d,"sys.db._Sqlite.SqliteResultSet.getIntResult","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",161,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(162)
	Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	int tmp2 = ::sys::db::_Sqlite::SqliteResultSet_obj::result_get_int(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(162)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(SqliteResultSet_obj,getIntResult,return )

Float SqliteResultSet_obj::getFloatResult( int n){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","getFloatResult",0x2b61b80a,"sys.db._Sqlite.SqliteResultSet.getFloatResult","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",165,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(166)
	Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(166)
	Float tmp2 = ::sys::db::_Sqlite::SqliteResultSet_obj::result_get_float(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(SqliteResultSet_obj,getFloatResult,return )

Array< ::String > SqliteResultSet_obj::getFieldsNames( ){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","getFieldsNames",0x708b5300,"sys.db._Sqlite.SqliteResultSet.getFieldsNames","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",170,0xf219dfa9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteResultSet_obj,getFieldsNames,return )

Dynamic SqliteResultSet_obj::result_next;

Dynamic SqliteResultSet_obj::result_get_length;

Dynamic SqliteResultSet_obj::result_get_nfields;

Dynamic SqliteResultSet_obj::result_get;

Dynamic SqliteResultSet_obj::result_get_int;

Dynamic SqliteResultSet_obj::result_get_float;


SqliteResultSet_obj::SqliteResultSet_obj()
{
}

void SqliteResultSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SqliteResultSet);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(nfields,"nfields");
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_END_CLASS();
}

void SqliteResultSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(nfields,"nfields");
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(cache,"cache");
}

Dynamic SqliteResultSet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nfields") ) { return inCallProp == hx::paccAlways ? get_nfields() : nfields; }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		if (HX_FIELD_EQ(inName,"results") ) { return results_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getResult") ) { return getResult_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_nfields") ) { return get_nfields_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getIntResult") ) { return getIntResult_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFloatResult") ) { return getFloatResult_dyn(); }
		if (HX_FIELD_EQ(inName,"getFieldsNames") ) { return getFieldsNames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SqliteResultSet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"result_get") ) { outValue = result_get; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"result_next") ) { outValue = result_next; return true;  }
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
	}
	return false;
}

Dynamic SqliteResultSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::List >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nfields") ) { nfields=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SqliteResultSet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"result_get") ) { result_get=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"result_next") ) { result_next=ioValue.Cast< Dynamic >(); return true; }
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
	}
	return false;
}

void SqliteResultSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("nfields","\x67","\x95","\xc7","\x5e"));
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SqliteResultSet_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(SqliteResultSet_obj,nfields),HX_HCSTRING("nfields","\x67","\x95","\xc7","\x5e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SqliteResultSet_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{hx::fsObject /*::List*/ ,(int)offsetof(SqliteResultSet_obj,cache),HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &SqliteResultSet_obj::result_next,HX_HCSTRING("result_next","\xd5","\xf6","\x74","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SqliteResultSet_obj::result_get_length,HX_HCSTRING("result_get_length","\x11","\x0c","\xdf","\x66")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SqliteResultSet_obj::result_get_nfields,HX_HCSTRING("result_get_nfields","\xdc","\x63","\x78","\x73")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SqliteResultSet_obj::result_get,HX_HCSTRING("result_get","\xf4","\x60","\x80","\xc5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SqliteResultSet_obj::result_get_int,HX_HCSTRING("result_get_int","\xe4","\x3c","\x11","\xba")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SqliteResultSet_obj::result_get_float,HX_HCSTRING("result_get_float","\xd1","\x9c","\xfb","\x92")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("nfields","\x67","\x95","\xc7","\x5e"),
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_nfields","\x7e","\xf5","\xc1","\xe4"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("results","\xf6","\x58","\x57","\x6b"),
	HX_HCSTRING("getResult","\x13","\xf2","\xda","\x84"),
	HX_HCSTRING("getIntResult","\xb6","\x63","\xda","\x3c"),
	HX_HCSTRING("getFloatResult","\xa3","\x12","\x44","\x37"),
	HX_HCSTRING("getFieldsNames","\x99","\xad","\x6d","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SqliteResultSet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SqliteResultSet_obj::result_next,"result_next");
	HX_MARK_MEMBER_NAME(SqliteResultSet_obj::result_get_length,"result_get_length");
	HX_MARK_MEMBER_NAME(SqliteResultSet_obj::result_get_nfields,"result_get_nfields");
	HX_MARK_MEMBER_NAME(SqliteResultSet_obj::result_get,"result_get");
	HX_MARK_MEMBER_NAME(SqliteResultSet_obj::result_get_int,"result_get_int");
	HX_MARK_MEMBER_NAME(SqliteResultSet_obj::result_get_float,"result_get_float");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SqliteResultSet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SqliteResultSet_obj::result_next,"result_next");
	HX_VISIT_MEMBER_NAME(SqliteResultSet_obj::result_get_length,"result_get_length");
	HX_VISIT_MEMBER_NAME(SqliteResultSet_obj::result_get_nfields,"result_get_nfields");
	HX_VISIT_MEMBER_NAME(SqliteResultSet_obj::result_get,"result_get");
	HX_VISIT_MEMBER_NAME(SqliteResultSet_obj::result_get_int,"result_get_int");
	HX_VISIT_MEMBER_NAME(SqliteResultSet_obj::result_get_float,"result_get_float");
};

#endif

hx::Class SqliteResultSet_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("result_next","\xd5","\xf6","\x74","\x0f"),
	HX_HCSTRING("result_get_length","\x11","\x0c","\xdf","\x66"),
	HX_HCSTRING("result_get_nfields","\xdc","\x63","\x78","\x73"),
	HX_HCSTRING("result_get","\xf4","\x60","\x80","\xc5"),
	HX_HCSTRING("result_get_int","\xe4","\x3c","\x11","\xba"),
	HX_HCSTRING("result_get_float","\xd1","\x9c","\xfb","\x92"),
	::String(null()) };

void SqliteResultSet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db._Sqlite.SqliteResultSet","\x27","\xb3","\x30","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SqliteResultSet_obj::__GetStatic;
	__mClass->mSetStaticField = &SqliteResultSet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SqliteResultSet_obj >;
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

void SqliteResultSet_obj::__boot()
{
	result_next= ::cpp::Lib_obj::load(HX_HCSTRING("sqlite","\xcc","\x28","\x05","\x53"),HX_HCSTRING("result_next","\xd5","\xf6","\x74","\x0f"),(int)1);
	result_get_length= ::cpp::Lib_obj::load(HX_HCSTRING("sqlite","\xcc","\x28","\x05","\x53"),HX_HCSTRING("result_get_length","\x11","\x0c","\xdf","\x66"),(int)1);
	result_get_nfields= ::cpp::Lib_obj::load(HX_HCSTRING("sqlite","\xcc","\x28","\x05","\x53"),HX_HCSTRING("result_get_nfields","\xdc","\x63","\x78","\x73"),(int)1);
	result_get= ::cpp::Lib_obj::load(HX_HCSTRING("sqlite","\xcc","\x28","\x05","\x53"),HX_HCSTRING("result_get","\xf4","\x60","\x80","\xc5"),(int)2);
	result_get_int= ::cpp::Lib_obj::load(HX_HCSTRING("sqlite","\xcc","\x28","\x05","\x53"),HX_HCSTRING("result_get_int","\xe4","\x3c","\x11","\xba"),(int)2);
	result_get_float= ::cpp::Lib_obj::load(HX_HCSTRING("sqlite","\xcc","\x28","\x05","\x53"),HX_HCSTRING("result_get_float","\xd1","\x9c","\xfb","\x92"),(int)2);
}

} // end namespace sys
} // end namespace db
} // end namespace _Sqlite
