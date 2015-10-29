#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_Manager
#include <sys/db/Manager.h>
#endif
#ifndef INCLUDED_sys_db_RecordType
#include <sys/db/RecordType.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
#ifndef INCLUDED_sys_db_TableCreate
#include <sys/db/TableCreate.h>
#endif
namespace sys{
namespace db{

Void TableCreate_obj::__construct()
{
	return null();
}

//TableCreate_obj::~TableCreate_obj() { }

Dynamic TableCreate_obj::__CreateEmpty() { return  new TableCreate_obj; }
hx::ObjectPtr< TableCreate_obj > TableCreate_obj::__new()
{  hx::ObjectPtr< TableCreate_obj > _result_ = new TableCreate_obj();
	_result_->__construct();
	return _result_;}

Dynamic TableCreate_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TableCreate_obj > _result_ = new TableCreate_obj();
	_result_->__construct();
	return _result_;}

::String TableCreate_obj::autoInc( ::String dbName){
	HX_STACK_FRAME("sys.db.TableCreate","autoInc",0xc6f7001c,"sys.db.TableCreate.autoInc","C:\\HaxeToolkit\\haxe\\std/sys/db/TableCreate.hx",27,0x33a364ea)
	HX_STACK_ARG(dbName,"dbName")
	HX_STACK_LINE(29)
	bool tmp = (dbName == HX_HCSTRING("SQLite","\xec","\x38","\xa0","\x05"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	if ((tmp)){
		HX_STACK_LINE(29)
		tmp1 = HX_HCSTRING("PRIMARY KEY AUTOINCREMENT","\x61","\xfa","\xe0","\x14");
	}
	else{
		HX_STACK_LINE(29)
		tmp1 = HX_HCSTRING("AUTO_INCREMENT","\xff","\xd9","\x58","\x77");
	}
	HX_STACK_LINE(29)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TableCreate_obj,autoInc,return )

::String TableCreate_obj::getTypeSQL( ::sys::db::RecordType t,::String dbName){
	HX_STACK_FRAME("sys.db.TableCreate","getTypeSQL",0x094fdc31,"sys.db.TableCreate.getTypeSQL","C:\\HaxeToolkit\\haxe\\std/sys/db/TableCreate.hx",32,0x33a364ea)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(dbName,"dbName")
	HX_STACK_LINE(33)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	switch( (int)(t->__Index())){
		case (int)0: {
			HX_STACK_LINE(34)
			::String tmp1 = dbName;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(34)
			::String tmp2 = ::sys::db::TableCreate_obj::autoInc(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			tmp = (HX_HCSTRING("INTEGER ","\xc2","\xd8","\xaf","\x7a") + tmp2);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(35)
			::String tmp1 = dbName;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			::String tmp2 = ::sys::db::TableCreate_obj::autoInc(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			tmp = (HX_HCSTRING("INTEGER UNSIGNED ","\x89","\xe4","\x43","\xfd") + tmp2);
		}
		;break;
		case (int)1: case (int)20: {
			HX_STACK_LINE(36)
			tmp = HX_HCSTRING("INTEGER","\x9e","\x91","\xef","\x96");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(37)
			tmp = HX_HCSTRING("INTEGER UNSIGNED","\xb7","\x5b","\x8c","\xdd");
		}
		;break;
		case (int)24: {
			HX_STACK_LINE(38)
			tmp = HX_HCSTRING("TINYINT","\xcf","\x33","\x65","\xf9");
		}
		;break;
		case (int)25: case (int)31: {
			HX_STACK_LINE(39)
			tmp = HX_HCSTRING("TINYINT UNSIGNED","\x66","\x6b","\x93","\xf2");
		}
		;break;
		case (int)26: {
			HX_STACK_LINE(40)
			tmp = HX_HCSTRING("SMALLINT","\x88","\x22","\x6a","\xff");
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(41)
			tmp = HX_HCSTRING("SMALLINT UNSIGNED","\x8d","\x5d","\x51","\x3d");
		}
		;break;
		case (int)28: {
			HX_STACK_LINE(42)
			tmp = HX_HCSTRING("MEDIUMINT","\x7a","\x9f","\x22","\x3d");
		}
		;break;
		case (int)29: {
			HX_STACK_LINE(43)
			tmp = HX_HCSTRING("MEDIUMINT UNSIGNED","\x5b","\xb2","\x0e","\x61");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(44)
			tmp = HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(45)
			tmp = HX_HCSTRING("DOUBLE","\x11","\xd7","\x4d","\xe5");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(46)
			tmp = HX_HCSTRING("TINYINT(1)","\x91","\x5c","\x8e","\x72");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(33)
			int tmp1 = (::sys::db::RecordType(t))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(33)
			int n = tmp1;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				::String tmp2 = (HX_HCSTRING("VARCHAR(","\x6b","\xe8","\xca","\x52") + n);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(47)
				tmp = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
			}
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(48)
			tmp = HX_HCSTRING("DATE","\x2e","\x1e","\x24","\x2d");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(49)
			tmp = HX_HCSTRING("DATETIME","\x3b","\x61","\xb7","\x48");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(50)
			tmp = HX_HCSTRING("TIMESTAMP DEFAULT 0","\x07","\x73","\x28","\xe6");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(51)
			tmp = HX_HCSTRING("TINYTEXT","\xad","\xa9","\x66","\x46");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(52)
			tmp = HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37");
		}
		;break;
		case (int)15: case (int)21: {
			HX_STACK_LINE(53)
			tmp = HX_HCSTRING("MEDIUMTEXT","\xa2","\x73","\x67","\x48");
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(54)
			tmp = HX_HCSTRING("BLOB","\x5d","\x05","\xda","\x2b");
		}
		;break;
		case (int)18: case (int)22: case (int)30: {
			HX_STACK_LINE(55)
			tmp = HX_HCSTRING("MEDIUMBLOB","\x52","\xe4","\x86","\x3c");
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(56)
			tmp = HX_HCSTRING("LONGBLOB","\xd9","\xe0","\x3c","\x0d");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(57)
			tmp = HX_HCSTRING("BIGINT","\x2f","\xf8","\xf3","\x9a");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(58)
			::String tmp1 = dbName;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(58)
			::String tmp2 = ::sys::db::TableCreate_obj::autoInc(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			tmp = (HX_HCSTRING("BIGINT ","\x11","\x31","\x85","\xfa") + tmp2);
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(33)
			int tmp1 = (::sys::db::RecordType(t))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(33)
			int n = tmp1;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(59)
			{
				HX_STACK_LINE(59)
				::String tmp2 = (HX_HCSTRING("BINARY(","\x07","\x99","\x0c","\xfd") + n);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(59)
				tmp = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
			}
		}
		;break;
		case (int)23: {
			HX_STACK_LINE(33)
			bool tmp1 = (::sys::db::RecordType(t))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(33)
			bool _auto = tmp1;		HX_STACK_VAR(_auto,"auto");
			HX_STACK_LINE(33)
			Array< ::String > fl = (::sys::db::RecordType(t))->__Param(0);		HX_STACK_VAR(fl,"fl");
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				bool tmp2 = _auto;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				::sys::db::RecordType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				if ((tmp2)){
					HX_STACK_LINE(60)
					bool tmp4 = (fl->length <= (int)8);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(60)
					if ((tmp4)){
						HX_STACK_LINE(60)
						tmp3 = ::sys::db::RecordType_obj::DTinyUInt;
					}
					else{
						HX_STACK_LINE(60)
						bool tmp5 = (fl->length <= (int)16);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(60)
						if ((tmp5)){
							HX_STACK_LINE(60)
							tmp3 = ::sys::db::RecordType_obj::DSmallUInt;
						}
						else{
							HX_STACK_LINE(60)
							bool tmp6 = (fl->length <= (int)24);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(60)
							if ((tmp6)){
								HX_STACK_LINE(60)
								tmp3 = ::sys::db::RecordType_obj::DMediumUInt;
							}
							else{
								HX_STACK_LINE(60)
								tmp3 = ::sys::db::RecordType_obj::DInt;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(60)
					tmp3 = ::sys::db::RecordType_obj::DInt;
				}
				HX_STACK_LINE(60)
				::String tmp4 = dbName;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(60)
				tmp = ::sys::db::TableCreate_obj::getTypeSQL(tmp3,tmp4);
			}
		}
		;break;
		case (int)33: case (int)32: {
			HX_STACK_LINE(61)
			HX_STACK_DO_THROW(HX_HCSTRING("assert","\xc6","\x46","\x03","\x4c"));
		}
		;break;
	}
	HX_STACK_LINE(33)
	return tmp;
	HX_STACK_LINE(33)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TableCreate_obj,getTypeSQL,return )

Void TableCreate_obj::create( ::sys::db::Manager manager,::String engine){
{
		HX_STACK_FRAME("sys.db.TableCreate","create",0xbdae682f,"sys.db.TableCreate.create","C:\\HaxeToolkit\\haxe\\std/sys/db/TableCreate.hx",65,0x33a364ea)
		HX_STACK_ARG(manager,"manager")
		HX_STACK_ARG(engine,"engine")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::sys::db::Manager,manager)
		int __ArgCount() const { return 1; }
		::String run(::String v){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/sys/db/TableCreate.hx",66,0x33a364ea)
			HX_STACK_ARG(v,"v")
			{
				HX_STACK_LINE(67)
				::String tmp = v;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(67)
				::String tmp1 = manager->quoteField(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(67)
				return tmp1;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(66)
		Dynamic quote =  Dynamic(new _Function_1_1(manager));		HX_STACK_VAR(quote,"quote");
		HX_STACK_LINE(69)
		::sys::db::Connection tmp = manager->getCnx();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		::sys::db::Connection cnx = tmp;		HX_STACK_VAR(cnx,"cnx");
		HX_STACK_LINE(70)
		bool tmp1 = (cnx == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		if ((tmp1)){
			HX_STACK_LINE(71)
			HX_STACK_DO_THROW(HX_HCSTRING("SQL Connection not initialized on Manager","\x35","\xdc","\x54","\x5d"));
		}
		HX_STACK_LINE(72)
		::String tmp2 = cnx->dbName();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		::String dbName = tmp2;		HX_STACK_VAR(dbName,"dbName");
		HX_STACK_LINE(73)
		Dynamic tmp3 = manager->dbInfos();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		Dynamic infos = tmp3;		HX_STACK_VAR(infos,"infos");
		HX_STACK_LINE(74)
		::String tmp4 = infos->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		::String tmp5 = quote(tmp4).Cast< ::String >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(74)
		::String tmp6 = (HX_HCSTRING("CREATE TABLE ","\x16","\x5d","\xeb","\xe2") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(74)
		::String tmp7 = (tmp6 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(74)
		::String sql = tmp7;		HX_STACK_VAR(sql,"sql");
		HX_STACK_LINE(75)
		Array< ::String > decls = Array_obj< ::String >::__new();		HX_STACK_VAR(decls,"decls");
		HX_STACK_LINE(76)
		bool hasID = false;		HX_STACK_VAR(hasID,"hasID");
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(77)
			cpp::ArrayBase _g1 = infos->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(77)
			while((true)){
				HX_STACK_LINE(77)
				bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(77)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(77)
				if ((tmp9)){
					HX_STACK_LINE(77)
					break;
				}
				HX_STACK_LINE(77)
				Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(77)
				Dynamic f = tmp10;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(77)
				++(_g);
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					::sys::db::RecordType _g2 = f->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(78)
					switch( (int)(_g2->__Index())){
						case (int)0: {
							HX_STACK_LINE(80)
							hasID = true;
						}
						;break;
						case (int)2: case (int)4: {
							HX_STACK_LINE(82)
							hasID = true;
							HX_STACK_LINE(83)
							bool tmp11 = (dbName == HX_HCSTRING("SQLite","\xec","\x38","\xa0","\x05"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(83)
							if ((tmp11)){
								HX_STACK_LINE(84)
								::sys::db::RecordType tmp12 = f->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(84)
								::String tmp13 = ::Std_obj::string(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(84)
								::String tmp14 = tmp13.substr((int)1,null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(84)
								::String tmp15 = (HX_HCSTRING("S","\x53","\x00","\x00","\x00") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(84)
								::String tmp16 = (tmp15 + HX_HCSTRING(" is not supported by ","\x14","\x3a","\xac","\xf6"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(84)
								::String tmp17 = dbName;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(84)
								::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(84)
								::String tmp19 = (tmp18 + HX_HCSTRING(" : use SId instead","\x11","\x54","\x0e","\xdd"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(84)
								HX_STACK_DO_THROW(tmp19);
							}
						}
						;break;
						default: {
						}
					}
				}
				HX_STACK_LINE(87)
				::String tmp11 = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(87)
				::String tmp12 = quote(tmp11).Cast< ::String >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(87)
				::String tmp13 = (tmp12 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(87)
				::sys::db::RecordType tmp14 = f->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(87)
				::String tmp15 = dbName;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(87)
				::String tmp16 = ::sys::db::TableCreate_obj::getTypeSQL(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(87)
				::String tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(87)
				bool tmp18 = f->__Field(HX_HCSTRING("isNull","\x91","\x63","\x75","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(87)
				::String tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(87)
				if ((tmp18)){
					HX_STACK_LINE(87)
					tmp19 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(87)
					tmp19 = HX_HCSTRING(" NOT NULL","\xf4","\xd0","\x47","\xd7");
				}
				HX_STACK_LINE(87)
				::String tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(87)
				decls->push(tmp20);
			}
		}
		HX_STACK_LINE(89)
		bool tmp8 = (dbName != HX_HCSTRING("SQLite","\xec","\x38","\xa0","\x05"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(89)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(89)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(89)
		if ((tmp9)){
			HX_STACK_LINE(89)
			bool tmp11 = hasID;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(89)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(89)
			tmp10 = !(tmp12);
		}
		else{
			HX_STACK_LINE(89)
			tmp10 = true;
		}
		HX_STACK_LINE(89)
		if ((tmp10)){
			HX_STACK_LINE(90)
			Dynamic tmp11 = quote;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(90)
			::List tmp12 = ::Lambda_obj::map(infos->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic ),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(90)
			::String tmp13 = tmp12->join(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(90)
			::String tmp14 = (HX_HCSTRING("PRIMARY KEY (","\x49","\xe4","\x0d","\xf0") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(90)
			::String tmp15 = (tmp14 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(90)
			decls->push(tmp15);
		}
		HX_STACK_LINE(91)
		::String tmp11 = decls->join(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(91)
		hx::AddEq(sql,tmp11);
		HX_STACK_LINE(92)
		hx::AddEq(sql,HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
		HX_STACK_LINE(93)
		bool tmp12 = (engine != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(93)
		if ((tmp12)){
			HX_STACK_LINE(94)
			::String tmp13 = (HX_HCSTRING("ENGINE=","\x3b","\x56","\x0e","\x77") + engine);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(94)
			hx::AddEq(sql,tmp13);
		}
		HX_STACK_LINE(95)
		::String tmp13 = sql;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(95)
		cnx->request(tmp13);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TableCreate_obj,create,(void))

bool TableCreate_obj::exists( ::sys::db::Manager manager){
	HX_STACK_FRAME("sys.db.TableCreate","exists",0x017f1f0f,"sys.db.TableCreate.exists","C:\\HaxeToolkit\\haxe\\std/sys/db/TableCreate.hx",98,0x33a364ea)
	HX_STACK_ARG(manager,"manager")
	HX_STACK_LINE(99)
	::sys::db::Connection tmp = manager->getCnx();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	::sys::db::Connection cnx = tmp;		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(100)
	bool tmp1 = (cnx == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	if ((tmp1)){
		HX_STACK_LINE(101)
		HX_STACK_DO_THROW(HX_HCSTRING("SQL Connection not initialized on Manager","\x35","\xdc","\x54","\x5d"));
	}
	HX_STACK_LINE(102)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(103)
		Dynamic tmp2 = manager->dbInfos();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		::String tmp3 = tmp2->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		::String tmp4 = (HX_HCSTRING("SELECT * FROM `","\x04","\x63","\x1b","\x62") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		::String tmp5 = (tmp4 + HX_HCSTRING("` LIMIT 1","\x2c","\x54","\x9d","\x4f"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		cnx->request(tmp5);
		HX_STACK_LINE(104)
		return true;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(106)
				return false;
			}
		}
	}
	HX_STACK_LINE(102)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TableCreate_obj,exists,return )


TableCreate_obj::TableCreate_obj()
{
}

bool TableCreate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"autoInc") ) { outValue = autoInc_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getTypeSQL") ) { outValue = getTypeSQL_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TableCreate_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TableCreate_obj::__mClass,"__mClass");
};

#endif

hx::Class TableCreate_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("autoInc","\xaf","\xf4","\x74","\x9d"),
	HX_HCSTRING("getTypeSQL","\x7e","\xc5","\x2c","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	::String(null()) };

void TableCreate_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db.TableCreate","\xdb","\xb6","\x46","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TableCreate_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TableCreate_obj >;
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
