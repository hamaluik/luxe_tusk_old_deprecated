#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
#ifndef INCLUDED_sys_db__Mysql_D
#include <sys/db/_Mysql/D.h>
#endif
#ifndef INCLUDED_sys_db__Mysql_MysqlResultSet
#include <sys/db/_Mysql/MysqlResultSet.h>
#endif
namespace sys{
namespace db{
namespace _Mysql{

Void MysqlResultSet_obj::__construct(Dynamic r)
{
HX_STACK_FRAME("sys.db._Mysql.MysqlResultSet","new",0xb14fd831,"sys.db._Mysql.MysqlResultSet.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",55,0xe3bbc785)
HX_STACK_THIS(this)
HX_STACK_ARG(r,"r")
{
	HX_STACK_LINE(55)
	this->__r = r;
}
;
	return null();
}

//MysqlResultSet_obj::~MysqlResultSet_obj() { }

Dynamic MysqlResultSet_obj::__CreateEmpty() { return  new MysqlResultSet_obj; }
hx::ObjectPtr< MysqlResultSet_obj > MysqlResultSet_obj::__new(Dynamic r)
{  hx::ObjectPtr< MysqlResultSet_obj > _result_ = new MysqlResultSet_obj();
	_result_->__construct(r);
	return _result_;}

Dynamic MysqlResultSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MysqlResultSet_obj > _result_ = new MysqlResultSet_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *MysqlResultSet_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::sys::db::ResultSet_obj)) return operator ::sys::db::ResultSet_obj *();
	return super::__ToInterface(inType);
}

MysqlResultSet_obj::operator ::sys::db::ResultSet_obj *()
	{ return new ::sys::db::ResultSet_delegate_< MysqlResultSet_obj >(this); }
int MysqlResultSet_obj::get_length( ){
	HX_STACK_FRAME("sys.db._Mysql.MysqlResultSet","get_length",0x496108fe,"sys.db._Mysql.MysqlResultSet.get_length","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",58,0xe3bbc785)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	Dynamic tmp = this->__r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	int tmp1 = ::sys::db::_Mysql::D_obj::result_get_length(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(MysqlResultSet_obj,get_length,return )

int MysqlResultSet_obj::get_nfields( ){
	HX_STACK_FRAME("sys.db._Mysql.MysqlResultSet","get_nfields",0xc2b3b64f,"sys.db._Mysql.MysqlResultSet.get_nfields","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",62,0xe3bbc785)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	Dynamic tmp = this->__r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	int tmp1 = ::sys::db::_Mysql::D_obj::result_get_nfields(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(MysqlResultSet_obj,get_nfields,return )

bool MysqlResultSet_obj::hasNext( ){
	HX_STACK_FRAME("sys.db._Mysql.MysqlResultSet","hasNext",0x1c1169be,"sys.db._Mysql.MysqlResultSet.hasNext","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",66,0xe3bbc785)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	Dynamic tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	if ((tmp1)){
		HX_STACK_LINE(68)
		Dynamic tmp2 = this->next();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		this->cache = tmp2;
	}
	HX_STACK_LINE(69)
	Dynamic tmp2 = this->cache;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(MysqlResultSet_obj,hasNext,return )

Dynamic MysqlResultSet_obj::next( ){
	HX_STACK_FRAME("sys.db._Mysql.MysqlResultSet","next",0x748d5402,"sys.db._Mysql.MysqlResultSet.next","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",72,0xe3bbc785)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	Dynamic tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	Dynamic c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(74)
	bool tmp1 = (c != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	if ((tmp1)){
		HX_STACK_LINE(75)
		this->cache = null();
		HX_STACK_LINE(76)
		Dynamic tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		return tmp2;
	}
	HX_STACK_LINE(78)
	Dynamic tmp2 = this->__r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	Dynamic tmp3 = ::sys::db::_Mysql::D_obj::result_next(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	c = tmp3;
	HX_STACK_LINE(79)
	Dynamic tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(79)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(MysqlResultSet_obj,next,return )

::List MysqlResultSet_obj::results( ){
	HX_STACK_FRAME("sys.db._Mysql.MysqlResultSet","results",0x6f221d47,"sys.db._Mysql.MysqlResultSet.results","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",82,0xe3bbc785)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	::List l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(84)
	while((true)){
		HX_STACK_LINE(84)
		bool tmp1 = this->hasNext();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		if ((tmp2)){
			HX_STACK_LINE(84)
			break;
		}
		HX_STACK_LINE(85)
		Dynamic tmp3 = this->next();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		l->add(tmp3);
	}
	HX_STACK_LINE(86)
	::List tmp1 = l;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(MysqlResultSet_obj,results,return )

::String MysqlResultSet_obj::getResult( int n){
	HX_STACK_FRAME("sys.db._Mysql.MysqlResultSet","getResult",0x241c2ca4,"sys.db._Mysql.MysqlResultSet.getResult","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",89,0xe3bbc785)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(90)
	Dynamic tmp = this->__r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	::String tmp2 = ::sys::db::_Mysql::D_obj::result_get(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	::String tmp3 = ::String(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(90)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(MysqlResultSet_obj,getResult,return )

int MysqlResultSet_obj::getIntResult( int n){
	HX_STACK_FRAME("sys.db._Mysql.MysqlResultSet","getIntResult",0x927159c5,"sys.db._Mysql.MysqlResultSet.getIntResult","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",93,0xe3bbc785)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(94)
	Dynamic tmp = this->__r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	int tmp2 = ::sys::db::_Mysql::D_obj::result_get_int(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(MysqlResultSet_obj,getIntResult,return )

Float MysqlResultSet_obj::getFloatResult( int n){
	HX_STACK_FRAME("sys.db._Mysql.MysqlResultSet","getFloatResult",0x590fea72,"sys.db._Mysql.MysqlResultSet.getFloatResult","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",97,0xe3bbc785)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(98)
	Dynamic tmp = this->__r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	Float tmp2 = ::sys::db::_Mysql::D_obj::result_get_float(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(MysqlResultSet_obj,getFloatResult,return )

Array< ::String > MysqlResultSet_obj::getFieldsNames( ){
	HX_STACK_FRAME("sys.db._Mysql.MysqlResultSet","getFieldsNames",0x9e398568,"sys.db._Mysql.MysqlResultSet.getFieldsNames","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",101,0xe3bbc785)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	Dynamic tmp = this->__r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	Array< ::String > a = ::sys::db::_Mysql::D_obj::result_fields_names(tmp);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(103)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(MysqlResultSet_obj,getFieldsNames,return )


MysqlResultSet_obj::MysqlResultSet_obj()
{
}

void MysqlResultSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MysqlResultSet);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(nfields,"nfields");
	HX_MARK_MEMBER_NAME(__r,"__r");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_END_CLASS();
}

void MysqlResultSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(nfields,"nfields");
	HX_VISIT_MEMBER_NAME(__r,"__r");
	HX_VISIT_MEMBER_NAME(cache,"cache");
}

Dynamic MysqlResultSet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__r") ) { return __r; }
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

Dynamic MysqlResultSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__r") ) { __r=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nfields") ) { nfields=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MysqlResultSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("nfields","\x67","\x95","\xc7","\x5e"));
	outFields->push(HX_HCSTRING("__r","\x52","\x69","\x48","\x00"));
	outFields->push(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MysqlResultSet_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(MysqlResultSet_obj,nfields),HX_HCSTRING("nfields","\x67","\x95","\xc7","\x5e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MysqlResultSet_obj,__r),HX_HCSTRING("__r","\x52","\x69","\x48","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MysqlResultSet_obj,cache),HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("nfields","\x67","\x95","\xc7","\x5e"),
	HX_HCSTRING("__r","\x52","\x69","\x48","\x00"),
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
	HX_MARK_MEMBER_NAME(MysqlResultSet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MysqlResultSet_obj::__mClass,"__mClass");
};

#endif

hx::Class MysqlResultSet_obj::__mClass;

void MysqlResultSet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db._Mysql.MysqlResultSet","\xbf","\xeb","\x39","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MysqlResultSet_obj >;
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
} // end namespace _Mysql
