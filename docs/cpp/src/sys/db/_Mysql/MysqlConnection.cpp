#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
#ifndef INCLUDED_sys_db__Mysql_D
#include <sys/db/_Mysql/D.h>
#endif
#ifndef INCLUDED_sys_db__Mysql_MysqlConnection
#include <sys/db/_Mysql/MysqlConnection.h>
#endif
#ifndef INCLUDED_sys_db__Mysql_MysqlResultSet
#include <sys/db/_Mysql/MysqlResultSet.h>
#endif
namespace sys{
namespace db{
namespace _Mysql{

Void MysqlConnection_obj::__construct(Dynamic c)
{
HX_STACK_FRAME("sys.db._Mysql.MysqlConnection","new",0x687304d6,"sys.db._Mysql.MysqlConnection.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",112,0xe3bbc785)
HX_STACK_THIS(this)
HX_STACK_ARG(c,"c")
{
	HX_STACK_LINE(113)
	this->__c = c;
	HX_STACK_LINE(114)
	Dynamic tmp = c;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::String run(::String s){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",114,0xe3bbc785)
		HX_STACK_ARG(s,"s")
		{
			HX_STACK_LINE(114)
			::String tmp1 = ::String(s);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(114)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)


	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	int __ArgCount() const { return 1; }
	Dynamic run(Dynamic d){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",114,0xe3bbc785)
		HX_STACK_ARG(d,"d")
		{
			HX_STACK_LINE(114)
			Dynamic tmp1 = d;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(114)
			Dynamic tmp2 = ::Date_obj::new1(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(114)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)


	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	int __ArgCount() const { return 1; }
	::haxe::io::Bytes run(Array< unsigned char > b){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",114,0xe3bbc785)
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(114)
			::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofData(b);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(114)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(114)
	::sys::db::_Mysql::D_obj::set_conv_funs(tmp, Dynamic(new _Function_1_1()), Dynamic(new _Function_1_2()), Dynamic(new _Function_1_3()));
}
;
	return null();
}

//MysqlConnection_obj::~MysqlConnection_obj() { }

Dynamic MysqlConnection_obj::__CreateEmpty() { return  new MysqlConnection_obj; }
hx::ObjectPtr< MysqlConnection_obj > MysqlConnection_obj::__new(Dynamic c)
{  hx::ObjectPtr< MysqlConnection_obj > _result_ = new MysqlConnection_obj();
	_result_->__construct(c);
	return _result_;}

Dynamic MysqlConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MysqlConnection_obj > _result_ = new MysqlConnection_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *MysqlConnection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::sys::db::Connection_obj)) return operator ::sys::db::Connection_obj *();
	return super::__ToInterface(inType);
}

MysqlConnection_obj::operator ::sys::db::Connection_obj *()
	{ return new ::sys::db::Connection_delegate_< MysqlConnection_obj >(this); }
::sys::db::ResultSet MysqlConnection_obj::request( ::String s){
	HX_STACK_FRAME("sys.db._Mysql.MysqlConnection","request",0x6f9686c5,"sys.db._Mysql.MysqlConnection.request","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",117,0xe3bbc785)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(118)
	Dynamic tmp = this->__c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	Dynamic tmp2 = ::sys::db::_Mysql::D_obj::request(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(118)
	Dynamic r = tmp2;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(119)
	::sys::db::_Mysql::MysqlResultSet tmp3 = ::sys::db::_Mysql::MysqlResultSet_obj::__new(r);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(119)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(MysqlConnection_obj,request,return )

Void MysqlConnection_obj::close( ){
{
		HX_STACK_FRAME("sys.db._Mysql.MysqlConnection","close",0x5e10d5ae,"sys.db._Mysql.MysqlConnection.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",122,0xe3bbc785)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		Dynamic tmp = this->__c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		::sys::db::_Mysql::D_obj::close(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MysqlConnection_obj,close,(void))

::String MysqlConnection_obj::escape( ::String s){
	HX_STACK_FRAME("sys.db._Mysql.MysqlConnection","escape",0xbd32bccb,"sys.db._Mysql.MysqlConnection.escape","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",126,0xe3bbc785)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(127)
	Dynamic tmp = this->__c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	::String tmp2 = ::sys::db::_Mysql::D_obj::escape(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	::String tmp3 = ::String(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(127)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(MysqlConnection_obj,escape,return )

::String MysqlConnection_obj::quote( ::String s){
	HX_STACK_FRAME("sys.db._Mysql.MysqlConnection","quote",0x739fe132,"sys.db._Mysql.MysqlConnection.quote","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",130,0xe3bbc785)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(131)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	::String tmp1 = this->escape(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	::String tmp2 = (HX_HCSTRING("'","\x27","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(131)
	::String tmp3 = (tmp2 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(131)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(MysqlConnection_obj,quote,return )

Void MysqlConnection_obj::addValue( ::StringBuf s,Dynamic v){
{
		HX_STACK_FRAME("sys.db._Mysql.MysqlConnection","addValue",0x2f76855a,"sys.db._Mysql.MysqlConnection.addValue","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",134,0xe3bbc785)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(135)
		bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		if ((tmp)){
			HX_STACK_LINE(136)
			Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(136)
			s->add(tmp1);
		}
		else{
			HX_STACK_LINE(138)
			Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(138)
			bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::Bool >());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(138)
			if ((tmp2)){
				HX_STACK_LINE(139)
				Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(139)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(139)
				if ((tmp3)){
					HX_STACK_LINE(139)
					tmp4 = (int)1;
				}
				else{
					HX_STACK_LINE(139)
					tmp4 = (int)0;
				}
				HX_STACK_LINE(139)
				s->add(tmp4);
			}
			else{
				HX_STACK_LINE(141)
				int tmp3 = v->__GetType();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(141)
				int t = tmp3;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(142)
				bool tmp4 = (t == (int)255);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(142)
				if ((tmp4)){
					HX_STACK_LINE(143)
					Dynamic tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(143)
					s->add(tmp5);
				}
				else{
					HX_STACK_LINE(144)
					bool tmp5 = (t == (int)2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(144)
					if ((tmp5)){
						HX_STACK_LINE(145)
						Dynamic tmp6 = v->__Field(HX_HCSTRING("__GetInt","\x39","\x25","\xe3","\x7f"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(145)
						Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(145)
						if ((tmp6)){
							HX_STACK_LINE(145)
							tmp7 = (int)49;
						}
						else{
							HX_STACK_LINE(145)
							tmp7 = (int)48;
						}
						HX_STACK_LINE(145)
						s->add(tmp7);
					}
					else{
						HX_STACK_LINE(147)
						{
							HX_STACK_LINE(147)
							::String tmp6 = HX_HCSTRING("'","\x27","\x00","\x00","\x00");		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(147)
							s->b->push(tmp6);
						}
						HX_STACK_LINE(148)
						Dynamic tmp6 = v;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(148)
						::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(148)
						::String tmp8 = this->escape(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(148)
						s->add(tmp8);
						HX_STACK_LINE(149)
						{
							HX_STACK_LINE(149)
							::String tmp9 = HX_HCSTRING("'","\x27","\x00","\x00","\x00");		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(149)
							s->b->push(tmp9);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MysqlConnection_obj,addValue,(void))

int MysqlConnection_obj::lastInsertId( ){
	HX_STACK_FRAME("sys.db._Mysql.MysqlConnection","lastInsertId",0x025f1cb4,"sys.db._Mysql.MysqlConnection.lastInsertId","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",154,0xe3bbc785)
	HX_STACK_THIS(this)
	HX_STACK_LINE(155)
	::sys::db::ResultSet tmp = this->request(HX_HCSTRING("SELECT LAST_INSERT_ID()","\x9d","\x34","\x34","\x59"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	int tmp1 = tmp->getIntResult((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(MysqlConnection_obj,lastInsertId,return )

::String MysqlConnection_obj::dbName( ){
	HX_STACK_FRAME("sys.db._Mysql.MysqlConnection","dbName",0x7f260633,"sys.db._Mysql.MysqlConnection.dbName","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",159,0xe3bbc785)
	HX_STACK_THIS(this)
	HX_STACK_LINE(159)
	return HX_HCSTRING("MySQL","\xe2","\xbd","\x14","\xa6");
}


HX_DEFINE_DYNAMIC_FUNC0(MysqlConnection_obj,dbName,return )

Void MysqlConnection_obj::startTransaction( ){
{
		HX_STACK_FRAME("sys.db._Mysql.MysqlConnection","startTransaction",0x6bd2b666,"sys.db._Mysql.MysqlConnection.startTransaction","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",163,0xe3bbc785)
		HX_STACK_THIS(this)
		HX_STACK_LINE(163)
		this->request(HX_HCSTRING("START TRANSACTION","\xe0","\x28","\x18","\x3d"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MysqlConnection_obj,startTransaction,(void))

Void MysqlConnection_obj::commit( ){
{
		HX_STACK_FRAME("sys.db._Mysql.MysqlConnection","commit",0xa986e941,"sys.db._Mysql.MysqlConnection.commit","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",167,0xe3bbc785)
		HX_STACK_THIS(this)
		HX_STACK_LINE(167)
		this->request(HX_HCSTRING("COMMIT","\xf7","\x1b","\xb1","\x79"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MysqlConnection_obj,commit,(void))

Void MysqlConnection_obj::rollback( ){
{
		HX_STACK_FRAME("sys.db._Mysql.MysqlConnection","rollback",0xa388a7ee,"sys.db._Mysql.MysqlConnection.rollback","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Mysql.hx",171,0xe3bbc785)
		HX_STACK_THIS(this)
		HX_STACK_LINE(171)
		this->request(HX_HCSTRING("ROLLBACK","\x24","\x58","\xad","\x78"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MysqlConnection_obj,rollback,(void))

Dynamic MysqlConnection_obj::__use_date;


MysqlConnection_obj::MysqlConnection_obj()
{
}

void MysqlConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MysqlConnection);
	HX_MARK_MEMBER_NAME(__c,"__c");
	HX_MARK_END_CLASS();
}

void MysqlConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__c,"__c");
}

Dynamic MysqlConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__c") ) { return __c; }
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

bool MysqlConnection_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__use_date") ) { outValue = __use_date; return true;  }
	}
	return false;
}

Dynamic MysqlConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__c") ) { __c=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MysqlConnection_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__use_date") ) { __use_date=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void MysqlConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__c","\x43","\x69","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MysqlConnection_obj,__c),HX_HCSTRING("__c","\x43","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &MysqlConnection_obj::__use_date,HX_HCSTRING("__use_date","\x86","\xd7","\xea","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__c","\x43","\x69","\x48","\x00"),
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
	HX_MARK_MEMBER_NAME(MysqlConnection_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MysqlConnection_obj::__use_date,"__use_date");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MysqlConnection_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MysqlConnection_obj::__use_date,"__use_date");
};

#endif

hx::Class MysqlConnection_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__use_date","\x86","\xd7","\xea","\xcc"),
	::String(null()) };

void MysqlConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db._Mysql.MysqlConnection","\xe4","\xa1","\xf6","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MysqlConnection_obj::__GetStatic;
	__mClass->mSetStaticField = &MysqlConnection_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MysqlConnection_obj >;
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

void MysqlConnection_obj::__boot()
{
	__use_date= hx::ClassOf< ::Date >();
}

} // end namespace sys
} // end namespace db
} // end namespace _Mysql
