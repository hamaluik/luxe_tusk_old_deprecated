#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_rtti_Meta
#include <haxe/rtti/Meta.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_Manager
#include <sys/db/Manager.h>
#endif
#ifndef INCLUDED_sys_db_Object
#include <sys/db/Object.h>
#endif
#ifndef INCLUDED_sys_db_RecordType
#include <sys/db/RecordType.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
namespace sys{
namespace db{

Void Manager_obj::__construct(::hx::Class classval)
{
HX_STACK_FRAME("sys.db.Manager","new",0xc6541310,"sys.db.Manager.new","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",63,0xacbc7d07)
HX_STACK_THIS(this)
HX_STACK_ARG(classval,"classval")
{
	HX_STACK_LINE(64)
	::hx::Class tmp = classval;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	Dynamic tmp1 = ::haxe::rtti::Meta_obj::getType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	cpp::ArrayBase m = tmp1->__Field(HX_HCSTRING("rtti","\xb7","\xbd","\xb2","\x4b"), hx::paccDynamic );		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(65)
	bool tmp2 = (m == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	if ((tmp2)){
		HX_STACK_LINE(65)
		::hx::Class tmp3 = classval;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		::String tmp5 = (HX_HCSTRING("Missing @rtti for class ","\xc2","\xe6","\x9d","\x1f") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(65)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(66)
	Dynamic tmp3 = m->__GetItem((int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(66)
	Dynamic tmp4 = ::haxe::Unserializer_obj::run(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	this->table_infos = tmp4;
	HX_STACK_LINE(67)
	Dynamic tmp5 = this->table_infos;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(67)
	::String tmp6 = tmp5->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(67)
	::String tmp7 = this->quoteField(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(67)
	this->table_name = tmp7;
	HX_STACK_LINE(68)
	Dynamic tmp8 = this->table_infos;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(68)
	this->table_keys = tmp8->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic );
	HX_STACK_LINE(70)
	this->class_proto = ((Dynamic)(classval));
}
;
	return null();
}

//Manager_obj::~Manager_obj() { }

Dynamic Manager_obj::__CreateEmpty() { return  new Manager_obj; }
hx::ObjectPtr< Manager_obj > Manager_obj::__new(::hx::Class classval)
{  hx::ObjectPtr< Manager_obj > _result_ = new Manager_obj();
	_result_->__construct(classval);
	return _result_;}

Dynamic Manager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Manager_obj > _result_ = new Manager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::List Manager_obj::all( Dynamic lock){
	HX_STACK_FRAME("sys.db.Manager","all",0xc64a3bd1,"sys.db.Manager.all","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",77,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lock,"lock")
	HX_STACK_LINE(78)
	::String tmp = this->table_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	::String tmp1 = (HX_HCSTRING("SELECT * FROM ","\xdc","\xbd","\x4a","\xff") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	Dynamic tmp2 = lock;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	::List tmp3 = this->unsafeObjects(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,all,return )

::List Manager_obj::dynamicSearch( Dynamic x,Dynamic lock){
	HX_STACK_FRAME("sys.db.Manager","dynamicSearch",0xb7d95af7,"sys.db.Manager.dynamicSearch","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",101,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(lock,"lock")
	HX_STACK_LINE(102)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	::StringBuf s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(103)
	s->add(HX_HCSTRING("SELECT * FROM ","\xdc","\xbd","\x4a","\xff"));
	HX_STACK_LINE(104)
	::String tmp1 = this->table_name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	s->add(tmp1);
	HX_STACK_LINE(105)
	s->add(HX_HCSTRING(" WHERE ","\x99","\x2e","\x6f","\x9e"));
	HX_STACK_LINE(106)
	::StringBuf tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	Dynamic tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(106)
	this->addCondition(tmp2,tmp3);
	HX_STACK_LINE(107)
	::String tmp4 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(107)
	Dynamic tmp5 = lock;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(107)
	::List tmp6 = this->unsafeObjects(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(107)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,dynamicSearch,return )

::String Manager_obj::quote( ::String s){
	HX_STACK_FRAME("sys.db.Manager","quote",0xd68c71ec,"sys.db.Manager.quote","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",110,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(111)
	::sys::db::Connection tmp = this->getCnx();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	::String tmp2 = tmp->quote(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,quote,return )

::haxe::io::Bytes Manager_obj::doUpdateCache( Dynamic x,::String name,Dynamic v){
	HX_STACK_FRAME("sys.db.Manager","doUpdateCache",0x02a1a85e,"sys.db.Manager.doUpdateCache","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",116,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(117)
	Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	::String tmp1 = (HX_HCSTRING("cache_","\xdd","\x5f","\xf2","\xb0") + name);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	Dynamic tmp2 = ::Reflect_obj::field(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	Dynamic cache = tmp2;		HX_STACK_VAR(cache,"cache");
	HX_STACK_LINE(120)
	bool tmp3 = (cache == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	if ((tmp3)){
		HX_STACK_LINE(121)
		Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		return tmp4;
	}
	HX_STACK_LINE(122)
	::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(122)
	Dynamic tmp5 = cache->__Field(HX_HCSTRING("v","\x76","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(122)
	::haxe::io::Bytes tmp6 = this->doSerialize(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(122)
	::haxe::io::Bytes v1 = tmp6;		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(125)
	::haxe::io::Bytes tmp7 = v1;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(125)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC3(Manager_obj,doUpdateCache,return )

Void Manager_obj::doInsert( Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","doInsert",0x9894c874,"sys.db.Manager.doInsert","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",138,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(139)
		Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		this->unmake(tmp);
		HX_STACK_LINE(140)
		::StringBuf tmp1 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		::StringBuf s = tmp1;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(141)
		::List tmp2 = ::List_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		::List fields = tmp2;		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(142)
		::List tmp3 = ::List_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		::List values = tmp3;		HX_STACK_VAR(values,"values");
		HX_STACK_LINE(143)
		Dynamic tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		Dynamic tmp5 = ::Reflect_obj::field(tmp4,HX_HCSTRING("__cache__","\xc2","\xd2","\x6f","\xa4"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		Dynamic cache = tmp5;		HX_STACK_VAR(cache,"cache");
		HX_STACK_LINE(144)
		bool tmp6 = (cache == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(144)
		if ((tmp6)){
			HX_STACK_LINE(146)
			Dynamic tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",146,0xacbc7d07)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(146)
			Dynamic tmp8 = _Function_2_1::Block();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			Dynamic tmp9 = cache = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			::Reflect_obj::setField(tmp7,HX_HCSTRING("__cache__","\xc2","\xd2","\x6f","\xa4"),tmp9);
		}
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(149)
			Dynamic tmp7 = this->table_infos;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			cpp::ArrayBase _g1 = tmp7->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(149)
			while((true)){
				HX_STACK_LINE(149)
				bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(149)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(149)
				if ((tmp9)){
					HX_STACK_LINE(149)
					break;
				}
				HX_STACK_LINE(149)
				Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(149)
				Dynamic f = tmp10;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(149)
				++(_g);
				HX_STACK_LINE(150)
				::String name = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(151)
				Dynamic tmp11 = f;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(151)
				::String tmp12 = ::sys::db::Manager_obj::getFieldName(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(151)
				::String fieldName = tmp12;		HX_STACK_VAR(fieldName,"fieldName");
				HX_STACK_LINE(152)
				Dynamic tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(152)
				::String tmp14 = fieldName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(152)
				Dynamic tmp15 = ::Reflect_obj::field(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(152)
				Dynamic v = tmp15;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(153)
				bool tmp16 = (v != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(153)
				if ((tmp16)){
					HX_STACK_LINE(154)
					::String tmp17 = name;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(154)
					::String tmp18 = this->quoteField(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(154)
					fields->add(tmp18);
					HX_STACK_LINE(155)
					{
						HX_STACK_LINE(155)
						::sys::db::RecordType _g2 = f->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(155)
						switch( (int)(_g2->__Index())){
							case (int)30: {
								HX_STACK_LINE(156)
								Dynamic tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(156)
								::String tmp20 = name;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(156)
								Dynamic tmp21 = v;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(156)
								::haxe::io::Bytes tmp22 = this->doUpdateCache(tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(156)
								v = tmp22;
							}
							;break;
							default: {
							}
						}
					}
					HX_STACK_LINE(159)
					Dynamic tmp19 = v;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(159)
					values->add(tmp19);
				}
				else{
					HX_STACK_LINE(160)
					bool tmp17 = f->__Field(HX_HCSTRING("isNull","\x91","\x63","\x75","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(160)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(160)
					if ((tmp18)){
						HX_STACK_LINE(162)
						{
							HX_STACK_LINE(162)
							::sys::db::RecordType _g2 = f->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(162)
							switch( (int)(_g2->__Index())){
								case (int)3: case (int)24: case (int)1: case (int)6: case (int)7: case (int)23: case (int)5: case (int)25: case (int)26: case (int)27: case (int)28: case (int)29: case (int)31: {
									HX_STACK_LINE(164)
									Dynamic tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(164)
									::String tmp20 = fieldName;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(164)
									::Reflect_obj::setField(tmp19,tmp20,(int)0);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(166)
									Dynamic tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(166)
									::String tmp20 = fieldName;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(166)
									::Reflect_obj::setField(tmp19,tmp20,false);
								}
								;break;
								case (int)13: case (int)15: case (int)9: case (int)14: case (int)21: {
									HX_STACK_LINE(168)
									Dynamic tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(168)
									::String tmp20 = fieldName;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(168)
									::Reflect_obj::setField(tmp19,tmp20,HX_HCSTRING("","\x00","\x00","\x00","\x00"));
								}
								;break;
								case (int)16: case (int)22: case (int)17: case (int)19: case (int)18: {
									HX_STACK_LINE(170)
									Dynamic tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(170)
									::String tmp20 = fieldName;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc((int)0);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(170)
									::Reflect_obj::setField(tmp19,tmp20,tmp21);
								}
								;break;
								case (int)10: case (int)11: case (int)12: {
								}
								;break;
								case (int)0: case (int)2: case (int)4: case (int)33: case (int)32: case (int)20: case (int)30: {
								}
								;break;
							}
						}
					}
				}
				HX_STACK_LINE(178)
				Dynamic tmp17 = cache;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(178)
				::String tmp18 = name;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(178)
				Dynamic tmp19 = v;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(178)
				::Reflect_obj::setField(tmp17,tmp18,tmp19);
			}
		}
		HX_STACK_LINE(180)
		s->add(HX_HCSTRING("INSERT INTO ","\x59","\x2b","\x3f","\x35"));
		HX_STACK_LINE(181)
		::String tmp7 = this->table_name;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(181)
		s->add(tmp7);
		HX_STACK_LINE(182)
		bool tmp8 = (fields->length > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(182)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(182)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(182)
		if ((tmp9)){
			HX_STACK_LINE(182)
			::sys::db::Connection tmp11 = ::sys::db::Manager_obj::cnx;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(182)
			::sys::db::Connection tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(182)
			::String tmp13 = tmp12->dbName();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(182)
			::String tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(182)
			tmp10 = (tmp14 != HX_HCSTRING("SQLite","\xec","\x38","\xa0","\x05"));
		}
		else{
			HX_STACK_LINE(182)
			tmp10 = true;
		}
		HX_STACK_LINE(182)
		if ((tmp10)){
			HX_STACK_LINE(184)
			s->add(HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));
			HX_STACK_LINE(185)
			::String tmp11 = fields->join(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(185)
			s->add(tmp11);
			HX_STACK_LINE(186)
			s->add(HX_HCSTRING(") VALUES (","\x41","\x5b","\x09","\x72"));
			HX_STACK_LINE(187)
			bool first = true;		HX_STACK_VAR(first,"first");
			HX_STACK_LINE(188)
			{
				HX_STACK_LINE(188)
				::_List::ListIterator tmp12 = ::_List::ListIterator_obj::__new(values->h);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(188)
				::_List::ListIterator _g = tmp12;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(188)
				while((true)){
					HX_STACK_LINE(188)
					bool tmp13 = (_g->head != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(188)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(188)
					if ((tmp14)){
						HX_STACK_LINE(188)
						break;
					}
					HX_STACK_LINE(188)
					Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(188)
					{
						HX_STACK_LINE(188)
						Dynamic tmp16 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(188)
						_g->val = tmp16;
						HX_STACK_LINE(188)
						Dynamic tmp17 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(188)
						_g->head = tmp17;
						HX_STACK_LINE(188)
						tmp15 = _g->val;
					}
					HX_STACK_LINE(188)
					Dynamic v = tmp15;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(189)
					bool tmp16 = first;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(189)
					if ((tmp16)){
						HX_STACK_LINE(190)
						first = false;
					}
					else{
						HX_STACK_LINE(192)
						s->add(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
					}
					HX_STACK_LINE(193)
					::sys::db::Connection tmp17 = this->getCnx();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(193)
					::StringBuf tmp18 = s;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(193)
					Dynamic tmp19 = v;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(193)
					tmp17->addValue(tmp18,tmp19);
				}
			}
			HX_STACK_LINE(195)
			s->add(HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(197)
			s->add(HX_HCSTRING(" DEFAULT VALUES","\xa1","\x19","\x0c","\x47"));
		}
		HX_STACK_LINE(199)
		::String tmp11 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(199)
		this->unsafeExecute(tmp11);
		HX_STACK_LINE(200)
		x->__FieldRef(HX_HCSTRING("_lock","\xca","\xb7","\xc8","\xfa")) = true;
		HX_STACK_LINE(202)
		int tmp12 = this->table_keys->length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(202)
		bool tmp13 = (tmp12 == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(202)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(202)
		if ((tmp13)){
			HX_STACK_LINE(202)
			Dynamic tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(202)
			::String tmp16 = this->table_keys->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(202)
			::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(202)
			Dynamic tmp18 = tmp15;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(202)
			::String tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(202)
			Dynamic tmp20 = ::Reflect_obj::field(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(202)
			Dynamic tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(202)
			tmp14 = (tmp21 == null());
		}
		else{
			HX_STACK_LINE(202)
			tmp14 = false;
		}
		HX_STACK_LINE(202)
		if ((tmp14)){
			HX_STACK_LINE(203)
			Dynamic tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(203)
			::String tmp16 = this->table_keys->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(203)
			::sys::db::Connection tmp17 = this->getCnx();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(203)
			int tmp18 = tmp17->lastInsertId();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(203)
			::Reflect_obj::setField(tmp15,tmp16,tmp18);
		}
		HX_STACK_LINE(204)
		Dynamic tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(204)
		this->addToCache(tmp15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,doInsert,(void))

bool Manager_obj::isBinary( ::sys::db::RecordType t){
	HX_STACK_FRAME("sys.db.Manager","isBinary",0xac1556db,"sys.db.Manager.isBinary","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",207,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(208)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	switch( (int)(t->__Index())){
		case (int)16: case (int)22: case (int)17: case (int)19: case (int)18: {
			HX_STACK_LINE(209)
			tmp = true;
		}
		;break;
		default: {
			HX_STACK_LINE(211)
			tmp = false;
		}
	}
	HX_STACK_LINE(208)
	return tmp;
	HX_STACK_LINE(208)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,isBinary,return )

bool Manager_obj::hasBinaryChanged( ::haxe::io::Bytes a,::haxe::io::Bytes b){
	HX_STACK_FRAME("sys.db.Manager","hasBinaryChanged",0x94d0de89,"sys.db.Manager.hasBinaryChanged","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",215,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(216)
	bool tmp = (a != b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	if ((tmp)){
		HX_STACK_LINE(216)
		bool tmp2 = (a == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(216)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(216)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(216)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(216)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(216)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(216)
		bool tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(216)
		if ((tmp9)){
			HX_STACK_LINE(216)
			bool tmp10 = (b == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(216)
			tmp8 = tmp10;
		}
		else{
			HX_STACK_LINE(216)
			tmp8 = true;
		}
		HX_STACK_LINE(216)
		bool tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(216)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(216)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(216)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(216)
		if ((tmp13)){
			HX_STACK_LINE(216)
			::haxe::io::Bytes tmp14 = b;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(216)
			::haxe::io::Bytes tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(216)
			::haxe::io::Bytes tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(216)
			int tmp17 = a->compare(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(216)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(216)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(216)
			tmp1 = (tmp19 != (int)0);
		}
		else{
			HX_STACK_LINE(216)
			tmp1 = true;
		}
	}
	else{
		HX_STACK_LINE(216)
		tmp1 = false;
	}
	HX_STACK_LINE(216)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,hasBinaryChanged,return )

Void Manager_obj::doUpdate( Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","doUpdate",0x81bd0b44,"sys.db.Manager.doUpdate","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",219,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(220)
		bool tmp = x->__Field(HX_HCSTRING("_lock","\xca","\xb7","\xc8","\xfa"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		if ((tmp1)){
			HX_STACK_LINE(221)
			HX_STACK_DO_THROW(HX_HCSTRING("Cannot update a not locked object","\x0f","\x50","\xc1","\x12"));
		}
		HX_STACK_LINE(222)
		Dynamic tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(222)
		::String tmp3 = this->getUpdateStatement(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(222)
		::String upd = tmp3;		HX_STACK_VAR(upd,"upd");
		HX_STACK_LINE(223)
		bool tmp4 = (upd == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(223)
		if ((tmp4)){
			HX_STACK_LINE(223)
			return null();
		}
		HX_STACK_LINE(224)
		::String tmp5 = upd;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(224)
		this->unsafeExecute(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,doUpdate,(void))

::String Manager_obj::getUpdateStatement( Dynamic x){
	HX_STACK_FRAME("sys.db.Manager","getUpdateStatement",0x982e4c40,"sys.db.Manager.getUpdateStatement","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",228,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(229)
	Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	this->unmake(tmp);
	HX_STACK_LINE(230)
	::StringBuf tmp1 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(230)
	::StringBuf s = tmp1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(231)
	s->add(HX_HCSTRING("UPDATE ","\xf7","\x95","\xa3","\x1d"));
	HX_STACK_LINE(232)
	::String tmp2 = this->table_name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(232)
	s->add(tmp2);
	HX_STACK_LINE(233)
	s->add(HX_HCSTRING(" SET ","\x7e","\xea","\xe3","\xa3"));
	HX_STACK_LINE(234)
	Dynamic tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(234)
	Dynamic tmp4 = ::Reflect_obj::field(tmp3,HX_HCSTRING("__cache__","\xc2","\xd2","\x6f","\xa4"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(234)
	Dynamic cache = tmp4;		HX_STACK_VAR(cache,"cache");
	HX_STACK_LINE(235)
	bool mod = false;		HX_STACK_VAR(mod,"mod");
	HX_STACK_LINE(236)
	{
		HX_STACK_LINE(236)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(236)
		Dynamic tmp5 = this->table_infos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(236)
		cpp::ArrayBase _g1 = tmp5->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(236)
		while((true)){
			HX_STACK_LINE(236)
			bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(236)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(236)
			if ((tmp7)){
				HX_STACK_LINE(236)
				break;
			}
			HX_STACK_LINE(236)
			Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(236)
			Dynamic f = tmp8;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(236)
			++(_g);
			HX_STACK_LINE(237)
			::String tmp9 = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(237)
			int tmp10 = this->table_keys->indexOf(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(237)
			bool tmp11 = (tmp10 >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(237)
			if ((tmp11)){
				HX_STACK_LINE(238)
				continue;
			}
			HX_STACK_LINE(239)
			::String name = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(240)
			Dynamic tmp12 = f;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(240)
			::String tmp13 = ::sys::db::Manager_obj::getFieldName(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(240)
			::String fieldName = tmp13;		HX_STACK_VAR(fieldName,"fieldName");
			HX_STACK_LINE(241)
			Dynamic tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(241)
			::String tmp15 = fieldName;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(241)
			Dynamic tmp16 = ::Reflect_obj::field(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(241)
			Dynamic v = tmp16;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(242)
			Dynamic tmp17 = cache;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(242)
			::String tmp18 = name;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(242)
			Dynamic tmp19 = ::Reflect_obj::field(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(242)
			Dynamic vc = tmp19;		HX_STACK_VAR(vc,"vc");
			HX_STACK_LINE(243)
			bool tmp20 = (cache == null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(243)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(243)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(243)
			if ((tmp21)){
				HX_STACK_LINE(243)
				tmp22 = (v != vc);
			}
			else{
				HX_STACK_LINE(243)
				tmp22 = true;
			}
			HX_STACK_LINE(243)
			if ((tmp22)){
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					::sys::db::RecordType _g2 = f->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(244)
					switch( (int)(_g2->__Index())){
						case (int)16: case (int)22: case (int)17: case (int)19: case (int)18: {
							HX_STACK_LINE(246)
							bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(246)
							{
								HX_STACK_LINE(246)
								::haxe::io::Bytes a = v;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(246)
								::haxe::io::Bytes b = vc;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(246)
								bool tmp24 = (a != b);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(246)
								if ((tmp24)){
									HX_STACK_LINE(246)
									bool tmp25 = (a == null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(246)
									bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(246)
									bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(246)
									bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(246)
									bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(246)
									bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(246)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(246)
									bool tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(246)
									if ((tmp32)){
										HX_STACK_LINE(246)
										bool tmp33 = (b == null());		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(246)
										tmp31 = tmp33;
									}
									else{
										HX_STACK_LINE(246)
										tmp31 = true;
									}
									HX_STACK_LINE(246)
									bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(246)
									bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(246)
									bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(246)
									bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(246)
									if ((tmp36)){
										HX_STACK_LINE(246)
										::haxe::io::Bytes tmp37 = b;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(246)
										::haxe::io::Bytes tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(246)
										::haxe::io::Bytes tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(246)
										int tmp40 = a->compare(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(246)
										int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(246)
										int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(246)
										tmp23 = (tmp42 != (int)0);
									}
									else{
										HX_STACK_LINE(246)
										tmp23 = true;
									}
								}
								else{
									HX_STACK_LINE(246)
									tmp23 = false;
								}
							}
							HX_STACK_LINE(246)
							bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(246)
							if ((tmp24)){
								HX_STACK_LINE(247)
								continue;
							}
						}
						;break;
						case (int)30: {
							HX_STACK_LINE(249)
							Dynamic tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(249)
							::String tmp24 = name;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(249)
							Dynamic tmp25 = v;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(249)
							::haxe::io::Bytes tmp26 = this->doUpdateCache(tmp23,tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(249)
							v = tmp26;
							HX_STACK_LINE(250)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(250)
							{
								HX_STACK_LINE(250)
								::haxe::io::Bytes a = v;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(250)
								::haxe::io::Bytes b = vc;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(250)
								bool tmp28 = (a != b);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(250)
								if ((tmp28)){
									HX_STACK_LINE(250)
									bool tmp29 = (a == null());		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(250)
									bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(250)
									bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(250)
									bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(250)
									bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(250)
									bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(250)
									bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(250)
									bool tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(250)
									if ((tmp36)){
										HX_STACK_LINE(250)
										bool tmp37 = (b == null());		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(250)
										tmp35 = tmp37;
									}
									else{
										HX_STACK_LINE(250)
										tmp35 = true;
									}
									HX_STACK_LINE(250)
									bool tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(250)
									bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(250)
									bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(250)
									bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(250)
									if ((tmp40)){
										HX_STACK_LINE(250)
										::haxe::io::Bytes tmp41 = b;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(250)
										::haxe::io::Bytes tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(250)
										::haxe::io::Bytes tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(250)
										int tmp44 = a->compare(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(250)
										int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(250)
										int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(250)
										tmp27 = (tmp46 != (int)0);
									}
									else{
										HX_STACK_LINE(250)
										tmp27 = true;
									}
								}
								else{
									HX_STACK_LINE(250)
									tmp27 = false;
								}
							}
							HX_STACK_LINE(250)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(250)
							if ((tmp28)){
								HX_STACK_LINE(251)
								continue;
							}
						}
						;break;
						default: {
						}
					}
				}
				HX_STACK_LINE(254)
				bool tmp23 = mod;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(254)
				if ((tmp23)){
					HX_STACK_LINE(255)
					s->add(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(257)
					mod = true;
				}
				HX_STACK_LINE(258)
				::String tmp24 = name;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(258)
				::String tmp25 = this->quoteField(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(258)
				s->add(tmp25);
				HX_STACK_LINE(259)
				s->add(HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));
				HX_STACK_LINE(260)
				::sys::db::Connection tmp26 = this->getCnx();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(260)
				::StringBuf tmp27 = s;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(260)
				Dynamic tmp28 = v;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(260)
				tmp26->addValue(tmp27,tmp28);
				HX_STACK_LINE(261)
				bool tmp29 = (cache != null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(261)
				if ((tmp29)){
					HX_STACK_LINE(262)
					Dynamic tmp30 = cache;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(262)
					::String tmp31 = name;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(262)
					Dynamic tmp32 = v;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(262)
					::Reflect_obj::setField(tmp30,tmp31,tmp32);
				}
			}
		}
	}
	HX_STACK_LINE(265)
	bool tmp5 = mod;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(265)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(265)
	if ((tmp6)){
		HX_STACK_LINE(266)
		return null();
	}
	HX_STACK_LINE(267)
	s->add(HX_HCSTRING(" WHERE ","\x99","\x2e","\x6f","\x9e"));
	HX_STACK_LINE(268)
	::StringBuf tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(268)
	Dynamic tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(268)
	this->addKeys(tmp7,tmp8);
	HX_STACK_LINE(269)
	::String tmp9 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(269)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,getUpdateStatement,return )

Void Manager_obj::doDelete( Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","doDelete",0x65904566,"sys.db.Manager.doDelete","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",272,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(273)
		::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		::StringBuf s = tmp;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(274)
		s->add(HX_HCSTRING("DELETE FROM ","\xc1","\x39","\xb7","\x6d"));
		HX_STACK_LINE(275)
		::String tmp1 = this->table_name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		s->add(tmp1);
		HX_STACK_LINE(276)
		s->add(HX_HCSTRING(" WHERE ","\x99","\x2e","\x6f","\x9e"));
		HX_STACK_LINE(277)
		::StringBuf tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(277)
		Dynamic tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(277)
		this->addKeys(tmp2,tmp3);
		HX_STACK_LINE(278)
		::String tmp4 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(278)
		this->unsafeExecute(tmp4);
		HX_STACK_LINE(279)
		Dynamic tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(279)
		this->removeFromCache(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,doDelete,(void))

Void Manager_obj::doLock( Dynamic i){
{
		HX_STACK_FRAME("sys.db.Manager","doLock",0x2625cc66,"sys.db.Manager.doLock","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",282,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(283)
		bool tmp = i->__Field(HX_HCSTRING("_lock","\xca","\xb7","\xc8","\xfa"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		if ((tmp)){
			HX_STACK_LINE(284)
			return null();
		}
		HX_STACK_LINE(285)
		::StringBuf tmp1 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(285)
		::StringBuf s = tmp1;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(286)
		s->add(HX_HCSTRING("SELECT * FROM ","\xdc","\xbd","\x4a","\xff"));
		HX_STACK_LINE(287)
		::String tmp2 = this->table_name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(287)
		s->add(tmp2);
		HX_STACK_LINE(288)
		s->add(HX_HCSTRING(" WHERE ","\x99","\x2e","\x6f","\x9e"));
		HX_STACK_LINE(289)
		::StringBuf tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(289)
		Dynamic tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(289)
		this->addKeys(tmp3,tmp4);
		HX_STACK_LINE(291)
		::String tmp5 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(291)
		Dynamic tmp6 = this->unsafeObject(tmp5,true);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(291)
		Dynamic tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(291)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(291)
		if ((tmp8)){
			HX_STACK_LINE(292)
			HX_STACK_DO_THROW(HX_HCSTRING("Could not lock object (was deleted ?); try restarting transaction","\xd3","\xc1","\x1e","\x42"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,doLock,(void))

::String Manager_obj::objectToString( Dynamic it){
	HX_STACK_FRAME("sys.db.Manager","objectToString",0xba09bddb,"sys.db.Manager.objectToString","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",295,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(it,"it")
	HX_STACK_LINE(296)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	::StringBuf s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(297)
	::String tmp1 = this->table_name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	s->add(tmp1);
	HX_STACK_LINE(298)
	int tmp2 = this->table_keys->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(298)
	bool tmp3 = (tmp2 == (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(298)
	if ((tmp3)){
		HX_STACK_LINE(299)
		s->add(HX_HCSTRING("#","\x23","\x00","\x00","\x00"));
		HX_STACK_LINE(300)
		Dynamic tmp4 = it;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(300)
		::String tmp5 = this->table_keys->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(300)
		Dynamic tmp6 = ::Reflect_obj::field(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(300)
		s->add(tmp6);
	}
	else{
		HX_STACK_LINE(302)
		s->add(HX_HCSTRING("(","\x28","\x00","\x00","\x00"));
		HX_STACK_LINE(303)
		bool first = true;		HX_STACK_VAR(first,"first");
		HX_STACK_LINE(304)
		{
			HX_STACK_LINE(304)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(304)
			Array< ::String > _g1 = this->table_keys;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(304)
			while((true)){
				HX_STACK_LINE(304)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(304)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(304)
				if ((tmp5)){
					HX_STACK_LINE(304)
					break;
				}
				HX_STACK_LINE(304)
				::String tmp6 = _g1->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(304)
				::String f = tmp6;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(304)
				++(_g);
				HX_STACK_LINE(305)
				bool tmp7 = first;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(305)
				if ((tmp7)){
					HX_STACK_LINE(306)
					first = false;
				}
				else{
					HX_STACK_LINE(308)
					s->add(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
				}
				HX_STACK_LINE(309)
				::String tmp8 = f;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(309)
				::String tmp9 = this->quoteField(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(309)
				s->add(tmp9);
				HX_STACK_LINE(310)
				s->add(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));
				HX_STACK_LINE(311)
				Dynamic tmp10 = it;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(311)
				::String tmp11 = f;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(311)
				Dynamic tmp12 = ::Reflect_obj::field(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(311)
				s->add(tmp12);
			}
		}
		HX_STACK_LINE(313)
		s->add(HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(315)
	::String tmp4 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(315)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,objectToString,return )

::haxe::io::Bytes Manager_obj::doSerialize( ::String field,Dynamic v){
	HX_STACK_FRAME("sys.db.Manager","doSerialize",0x56fb8f85,"sys.db.Manager.doSerialize","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",318,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(field,"field")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(319)
	::haxe::Serializer tmp = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	::haxe::Serializer s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(320)
	s->useEnumIndex = true;
	HX_STACK_LINE(321)
	Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(321)
	s->serialize(tmp1);
	HX_STACK_LINE(322)
	::String tmp2 = s->toString();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(322)
	::String str = tmp2;		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(326)
	::String tmp3 = str;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(326)
	::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::ofString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(326)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,doSerialize,return )

Dynamic Manager_obj::doUnserialize( ::String field,::haxe::io::Bytes b){
	HX_STACK_FRAME("sys.db.Manager","doUnserialize",0x568d894c,"sys.db.Manager.doUnserialize","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",330,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(field,"field")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(331)
	bool tmp = (b == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	if ((tmp)){
		HX_STACK_LINE(332)
		return null();
	}
	HX_STACK_LINE(333)
	::String str;		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(337)
	::String tmp1 = b->toString();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(337)
	str = tmp1;
	HX_STACK_LINE(339)
	bool tmp2 = (str == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(339)
	if ((tmp2)){
		HX_STACK_LINE(340)
		return null();
	}
	HX_STACK_LINE(341)
	::String tmp3 = str;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(341)
	Dynamic tmp4 = ::haxe::Unserializer_obj::run(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(341)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,doUnserialize,return )

Void Manager_obj::normalizeCache( Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","normalizeCache",0xea09aec5,"sys.db.Manager.normalizeCache","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",348,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(348)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(348)
		Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(348)
		Array< ::String > _g1 = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(348)
		while((true)){
			HX_STACK_LINE(348)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(348)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(348)
			if ((tmp2)){
				HX_STACK_LINE(348)
				break;
			}
			HX_STACK_LINE(348)
			::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(348)
			::String f = tmp3;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(348)
			++(_g);
			HX_STACK_LINE(350)
			Dynamic tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(350)
			::String tmp5 = f;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(350)
			Dynamic tmp6 = ::Reflect_obj::field(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(350)
			Dynamic val = tmp6;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(350)
			Dynamic tmp7 = this->table_infos;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(350)
			::String tmp8 = f;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(350)
			Dynamic tmp9 = tmp7->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(350)
			Dynamic info = tmp9;		HX_STACK_VAR(info,"info");
			HX_STACK_LINE(351)
			bool tmp10 = (info != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(351)
			if ((tmp10)){
				HX_STACK_LINE(353)
				bool tmp11 = (val != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(353)
				if ((tmp11)){
					HX_STACK_LINE(353)
					{
						HX_STACK_LINE(353)
						::sys::db::RecordType _g2 = info->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(353)
						switch( (int)(_g2->__Index())){
							case (int)10: {
								HX_STACK_LINE(354)
								Dynamic tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(354)
								bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::Date >());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(354)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(354)
								if ((tmp14)){
									HX_STACK_LINE(355)
									Dynamic tmp15 = val;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(355)
									bool tmp16 = ::Std_obj::is(tmp15,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(355)
									if ((tmp16)){
										HX_STACK_LINE(357)
										Dynamic tmp17 = val;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(357)
										::Date tmp18 = ::Date_obj::fromTime(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(357)
										val = tmp18;
									}
									else{
										HX_STACK_LINE(359)
										Dynamic tmp17 = val;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(359)
										::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(359)
										::String tmp19 = (tmp18 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(359)
										::String v = tmp19;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(360)
										int tmp20 = v.indexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(360)
										int index = tmp20;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(361)
										bool tmp21 = (index >= (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(361)
										if ((tmp21)){
											HX_STACK_LINE(362)
											int tmp22 = index;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(362)
											::String tmp23 = v.substr((int)0,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(362)
											v = tmp23;
										}
										HX_STACK_LINE(363)
										::String tmp22 = v;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(363)
										::Date tmp23 = ::Date_obj::fromString(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(363)
										val = tmp23;
									}
								}
								else{
								}
							}
							;break;
							case (int)11: {
								HX_STACK_LINE(354)
								Dynamic tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(354)
								bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::Date >());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(354)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(354)
								if ((tmp14)){
									HX_STACK_LINE(355)
									Dynamic tmp15 = val;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(355)
									bool tmp16 = ::Std_obj::is(tmp15,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(355)
									if ((tmp16)){
										HX_STACK_LINE(357)
										Dynamic tmp17 = val;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(357)
										::Date tmp18 = ::Date_obj::fromTime(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(357)
										val = tmp18;
									}
									else{
										HX_STACK_LINE(359)
										Dynamic tmp17 = val;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(359)
										::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(359)
										::String tmp19 = (tmp18 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(359)
										::String v = tmp19;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(360)
										int tmp20 = v.indexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(360)
										int index = tmp20;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(361)
										bool tmp21 = (index >= (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(361)
										if ((tmp21)){
											HX_STACK_LINE(362)
											int tmp22 = index;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(362)
											::String tmp23 = v.substr((int)0,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(362)
											v = tmp23;
										}
										HX_STACK_LINE(363)
										::String tmp22 = v;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(363)
										::Date tmp23 = ::Date_obj::fromString(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(363)
										val = tmp23;
									}
								}
								else{
								}
							}
							;break;
							case (int)16: {
								HX_STACK_LINE(365)
								Dynamic tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(365)
								bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(365)
								if ((tmp13)){
									HX_STACK_LINE(366)
									Dynamic tmp14 = val;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(366)
									::haxe::io::Bytes tmp15 = ::haxe::io::Bytes_obj::ofString(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(366)
									val = tmp15;
								}
								else{
								}
							}
							;break;
							case (int)17: case (int)18: case (int)19: case (int)30: {
								HX_STACK_LINE(365)
								Dynamic tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(365)
								bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(365)
								if ((tmp13)){
									HX_STACK_LINE(366)
									Dynamic tmp14 = val;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(366)
									::haxe::io::Bytes tmp15 = ::haxe::io::Bytes_obj::ofString(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(366)
									val = tmp15;
								}
								else{
								}
							}
							;break;
							case (int)9: {
								HX_STACK_LINE(367)
								Dynamic tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(367)
								bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(367)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(367)
								if ((tmp14)){
									HX_STACK_LINE(368)
									Dynamic tmp15 = val;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(368)
									::String tmp16 = ::Std_obj::string(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(368)
									::String tmp17 = (tmp16 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(368)
									val = tmp17;
								}
								else{
								}
							}
							;break;
							case (int)13: case (int)14: case (int)15: {
								HX_STACK_LINE(367)
								Dynamic tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(367)
								bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(367)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(367)
								if ((tmp14)){
									HX_STACK_LINE(368)
									Dynamic tmp15 = val;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(368)
									::String tmp16 = ::Std_obj::string(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(368)
									::String tmp17 = (tmp16 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(368)
									val = tmp17;
								}
								else{
								}
							}
							;break;
							case (int)8: {
								HX_STACK_LINE(374)
								Dynamic tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(374)
								bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::Bool >());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(374)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(374)
								if ((tmp14)){
									HX_STACK_LINE(375)
									Dynamic tmp15 = val;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(375)
									bool tmp16 = ::Std_obj::is(tmp15,hx::ClassOf< ::Int >());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(375)
									if ((tmp16)){
										HX_STACK_LINE(376)
										bool tmp17 = (val != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(376)
										val = tmp17;
									}
									else{
										HX_STACK_LINE(377)
										Dynamic tmp17 = val;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(377)
										bool tmp18 = ::Std_obj::is(tmp17,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(377)
										if ((tmp18)){
											HX_STACK_LINE(377)
											Dynamic tmp19 = val->__Field(HX_HCSTRING("toLowerCase","\x56","\x4c","\x64","\xb8"), hx::paccDynamic )();		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(377)
											Dynamic _g3 = tmp19;		HX_STACK_VAR(_g3,"_g3");
											HX_STACK_LINE(377)
											Dynamic tmp20 = _g3;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(377)
											Dynamic _switch_1 = (tmp20);
											if (  ( _switch_1==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_1==HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"))){
												HX_STACK_LINE(378)
												val = true;
											}
											else if (  ( _switch_1==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_1==HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb"))){
												HX_STACK_LINE(379)
												val = false;
											}
										}
									}
								}
								else{
								}
							}
							;break;
							case (int)7: {
								HX_STACK_LINE(381)
								Dynamic tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(381)
								bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(381)
								if ((tmp13)){
									HX_STACK_LINE(382)
									Dynamic tmp14 = val;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(382)
									Float tmp15 = ::Std_obj::parseFloat(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(382)
									val = tmp15;
								}
								else{
								}
							}
							;break;
							default: {
							}
						}
					}
				}
				HX_STACK_LINE(385)
				Dynamic tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(385)
				::String tmp13 = f;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(385)
				Dynamic tmp14 = val;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(385)
				::Reflect_obj::setField(tmp12,tmp13,tmp14);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,normalizeCache,(void))

Dynamic Manager_obj::cacheObject( Dynamic x,bool lock){
	HX_STACK_FRAME("sys.db.Manager","cacheObject",0x3ceb1d51,"sys.db.Manager.cacheObject","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",390,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(lock,"lock")
	HX_STACK_LINE(395)
	Dynamic tmp = this->class_proto;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(395)
	::hx::Class tmp1 = ((::hx::Class)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(395)
	Dynamic tmp2 = ::Type_obj::createEmptyInstance(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(395)
	Dynamic o = tmp2;		HX_STACK_VAR(o,"o");
	HX_STACK_LINE(396)
	o->__FieldRef(HX_HCSTRING("_manager","\xee","\xeb","\x79","\x4d")) = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(398)
	Dynamic tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(398)
	this->normalizeCache(tmp3);
	HX_STACK_LINE(399)
	{
		HX_STACK_LINE(399)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(399)
		Dynamic tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(399)
		Array< ::String > _g1 = ::Reflect_obj::fields(tmp4);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(399)
		while((true)){
			HX_STACK_LINE(399)
			bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(399)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(399)
			if ((tmp6)){
				HX_STACK_LINE(399)
				break;
			}
			HX_STACK_LINE(399)
			::String tmp7 = _g1->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(399)
			::String f = tmp7;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(399)
			++(_g);
			HX_STACK_LINE(401)
			Dynamic tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(401)
			::String tmp9 = f;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(401)
			Dynamic tmp10 = ::Reflect_obj::field(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(401)
			Dynamic val = tmp10;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(401)
			Dynamic tmp11 = this->table_infos;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(401)
			::String tmp12 = f;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(401)
			Dynamic tmp13 = tmp11->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(401)
			Dynamic info = tmp13;		HX_STACK_VAR(info,"info");
			HX_STACK_LINE(402)
			bool tmp14 = (info != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(402)
			if ((tmp14)){
				HX_STACK_LINE(404)
				Dynamic tmp15 = info;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(404)
				::String tmp16 = ::sys::db::Manager_obj::getFieldName(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(404)
				::String fieldName = tmp16;		HX_STACK_VAR(fieldName,"fieldName");
				HX_STACK_LINE(405)
				Dynamic tmp17 = o;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(405)
				::String tmp18 = fieldName;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(405)
				Dynamic tmp19 = val;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(405)
				::Reflect_obj::setField(tmp17,tmp18,tmp19);
			}
		}
	}
	HX_STACK_LINE(408)
	Dynamic tmp4 = o;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(408)
	Dynamic tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(408)
	::Reflect_obj::setField(tmp4,HX_HCSTRING("__cache__","\xc2","\xd2","\x6f","\xa4"),tmp5);
	HX_STACK_LINE(409)
	Dynamic tmp6 = o;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(409)
	this->addToCache(tmp6);
	HX_STACK_LINE(410)
	o->__FieldRef(HX_HCSTRING("_lock","\xca","\xb7","\xc8","\xfa")) = lock;
	HX_STACK_LINE(411)
	Dynamic tmp7 = o;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(411)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,cacheObject,return )

Void Manager_obj::make( Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","make",0xc290513e,"sys.db.Manager.make","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",414,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,make,(void))

Void Manager_obj::unmake( Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","unmake",0x7495cc17,"sys.db.Manager.unmake","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",417,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,unmake,(void))

::String Manager_obj::quoteField( ::String f){
	HX_STACK_FRAME("sys.db.Manager","quoteField",0x31b41b2e,"sys.db.Manager.quoteField","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",420,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(421)
	::haxe::ds::StringMap tmp = ::sys::db::Manager_obj::KEYWORDS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(421)
	::String tmp1 = f.toLowerCase();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(421)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(421)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(421)
	if ((tmp2)){
		HX_STACK_LINE(421)
		::String tmp4 = (HX_HCSTRING("`","\x60","\x00","\x00","\x00") + f);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(421)
		tmp3 = (tmp4 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(421)
		tmp3 = f;
	}
	HX_STACK_LINE(421)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,quoteField,return )

Void Manager_obj::addKeys( ::StringBuf s,Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","addKeys",0x12137f65,"sys.db.Manager.addKeys","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",424,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(425)
		bool first = true;		HX_STACK_VAR(first,"first");
		HX_STACK_LINE(426)
		{
			HX_STACK_LINE(426)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(426)
			Array< ::String > _g1 = this->table_keys;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(426)
			while((true)){
				HX_STACK_LINE(426)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(426)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(426)
				if ((tmp1)){
					HX_STACK_LINE(426)
					break;
				}
				HX_STACK_LINE(426)
				::String tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(426)
				::String k = tmp2;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(426)
				++(_g);
				HX_STACK_LINE(427)
				bool tmp3 = first;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(427)
				if ((tmp3)){
					HX_STACK_LINE(428)
					first = false;
				}
				else{
					HX_STACK_LINE(430)
					s->add(HX_HCSTRING(" AND ","\xa9","\xd9","\x04","\x98"));
				}
				HX_STACK_LINE(431)
				::String tmp4 = k;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(431)
				::String tmp5 = this->quoteField(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(431)
				s->add(tmp5);
				HX_STACK_LINE(432)
				s->add(HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));
				HX_STACK_LINE(433)
				Dynamic tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(433)
				::String tmp7 = k;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(433)
				Dynamic tmp8 = ::Reflect_obj::field(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(433)
				Dynamic f = tmp8;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(434)
				bool tmp9 = (f == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(434)
				if ((tmp9)){
					HX_STACK_LINE(435)
					::String tmp10 = (HX_HCSTRING("Missing key ","\xbb","\x6c","\x39","\xfc") + k);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(435)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(436)
				::sys::db::Connection tmp10 = this->getCnx();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(436)
				::StringBuf tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(436)
				Dynamic tmp12 = f;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(436)
				tmp10->addValue(tmp11,tmp12);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,addKeys,(void))

::sys::db::ResultSet Manager_obj::unsafeExecute( ::String sql){
	HX_STACK_FRAME("sys.db.Manager","unsafeExecute",0x4e619d5f,"sys.db.Manager.unsafeExecute","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",440,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sql,"sql")
	HX_STACK_LINE(441)
	::sys::db::Connection tmp = this->getCnx();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(441)
	::String tmp1 = sql;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	::sys::db::ResultSet tmp2 = tmp->request(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(441)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,unsafeExecute,return )

Dynamic Manager_obj::unsafeObject( ::String sql,bool lock){
	HX_STACK_FRAME("sys.db.Manager","unsafeObject",0x16fafed5,"sys.db.Manager.unsafeObject","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",444,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sql,"sql")
	HX_STACK_ARG(lock,"lock")
	HX_STACK_LINE(445)
	bool tmp = (lock != false);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(445)
	if ((tmp)){
		HX_STACK_LINE(446)
		lock = true;
		HX_STACK_LINE(447)
		::String tmp1 = this->getLockMode();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(447)
		hx::AddEq(sql,tmp1);
	}
	HX_STACK_LINE(449)
	::String tmp1 = sql;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(449)
	::sys::db::ResultSet tmp2 = this->unsafeExecute(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(449)
	::sys::db::ResultSet r = tmp2;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(450)
	bool tmp3 = r->hasNext();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(450)
	Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(450)
	if ((tmp3)){
		HX_STACK_LINE(450)
		tmp4 = r->next();
	}
	else{
		HX_STACK_LINE(450)
		tmp4 = null();
	}
	HX_STACK_LINE(450)
	Dynamic r1 = tmp4;		HX_STACK_VAR(r1,"r1");
	HX_STACK_LINE(451)
	bool tmp5 = (r1 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(451)
	if ((tmp5)){
		HX_STACK_LINE(452)
		return null();
	}
	HX_STACK_LINE(453)
	Dynamic tmp6 = r1;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(453)
	this->normalizeCache(tmp6);
	HX_STACK_LINE(454)
	Dynamic tmp7 = r1;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(454)
	bool tmp8 = lock;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(454)
	Dynamic tmp9 = this->getFromCache(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(454)
	Dynamic c = tmp9;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(455)
	bool tmp10 = (c != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(455)
	if ((tmp10)){
		HX_STACK_LINE(456)
		Dynamic tmp11 = c;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(456)
		return tmp11;
	}
	HX_STACK_LINE(457)
	Dynamic tmp11 = r1;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(457)
	bool tmp12 = lock;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(457)
	Dynamic tmp13 = this->cacheObject(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(457)
	r1 = tmp13;
	HX_STACK_LINE(458)
	Dynamic tmp14 = r1;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(458)
	this->make(tmp14);
	HX_STACK_LINE(459)
	Dynamic tmp15 = r1;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(459)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,unsafeObject,return )

::List Manager_obj::unsafeObjects( ::String sql,bool lock){
	HX_STACK_FRAME("sys.db.Manager","unsafeObjects",0x04a3fbfe,"sys.db.Manager.unsafeObjects","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",462,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sql,"sql")
	HX_STACK_ARG(lock,"lock")
	HX_STACK_LINE(463)
	bool tmp = (lock != false);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(463)
	if ((tmp)){
		HX_STACK_LINE(464)
		lock = true;
		HX_STACK_LINE(465)
		::String tmp1 = this->getLockMode();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(465)
		hx::AddEq(sql,tmp1);
	}
	HX_STACK_LINE(467)
	::String tmp1 = sql;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(467)
	::sys::db::ResultSet tmp2 = this->unsafeExecute(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(467)
	::List tmp3 = tmp2->results();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(467)
	::List l = tmp3;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(468)
	::List tmp4 = ::List_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(468)
	::List l2 = tmp4;		HX_STACK_VAR(l2,"l2");
	HX_STACK_LINE(469)
	{
		HX_STACK_LINE(469)
		::_List::ListIterator tmp5 = ::_List::ListIterator_obj::__new(l->h);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(469)
		::_List::ListIterator _g = tmp5;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(469)
		while((true)){
			HX_STACK_LINE(469)
			bool tmp6 = (_g->head != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(469)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(469)
			if ((tmp7)){
				HX_STACK_LINE(469)
				break;
			}
			HX_STACK_LINE(469)
			Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(469)
				Dynamic tmp9 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(469)
				_g->val = tmp9;
				HX_STACK_LINE(469)
				Dynamic tmp10 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(469)
				_g->head = tmp10;
				HX_STACK_LINE(469)
				tmp8 = _g->val;
			}
			HX_STACK_LINE(469)
			Dynamic x = tmp8;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(470)
			Dynamic tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(470)
			this->normalizeCache(tmp9);
			HX_STACK_LINE(471)
			Dynamic tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(471)
			bool tmp11 = lock;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(471)
			Dynamic tmp12 = this->getFromCache(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(471)
			Dynamic c = tmp12;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(472)
			bool tmp13 = (c != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(472)
			if ((tmp13)){
				HX_STACK_LINE(473)
				Dynamic tmp14 = c;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(473)
				l2->add(tmp14);
			}
			else{
				HX_STACK_LINE(475)
				Dynamic tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(475)
				bool tmp15 = lock;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(475)
				Dynamic tmp16 = this->cacheObject(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(475)
				x = tmp16;
				HX_STACK_LINE(476)
				Dynamic tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(476)
				this->make(tmp17);
				HX_STACK_LINE(477)
				Dynamic tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(477)
				l2->add(tmp18);
			}
		}
	}
	HX_STACK_LINE(480)
	::List tmp5 = l2;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(480)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,unsafeObjects,return )

int Manager_obj::unsafeCount( ::String sql){
	HX_STACK_FRAME("sys.db.Manager","unsafeCount",0xce69d979,"sys.db.Manager.unsafeCount","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",483,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sql,"sql")
	HX_STACK_LINE(484)
	::String tmp = sql;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(484)
	::sys::db::ResultSet tmp1 = this->unsafeExecute(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(484)
	int tmp2 = tmp1->getIntResult((int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(484)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,unsafeCount,return )

Void Manager_obj::unsafeDelete( ::String sql){
{
		HX_STACK_FRAME("sys.db.Manager","unsafeDelete",0x6c944041,"sys.db.Manager.unsafeDelete","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",487,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sql,"sql")
		HX_STACK_LINE(488)
		::String tmp = sql;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(488)
		this->unsafeExecute(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,unsafeDelete,(void))

Dynamic Manager_obj::unsafeGet( Dynamic id,Dynamic lock){
	HX_STACK_FRAME("sys.db.Manager","unsafeGet",0xd5fbb6c0,"sys.db.Manager.unsafeGet","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",491,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(lock,"lock")
	HX_STACK_LINE(492)
	bool tmp = (lock == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(492)
	if ((tmp)){
		HX_STACK_LINE(492)
		lock = true;
	}
	HX_STACK_LINE(493)
	int tmp1 = this->table_keys->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(493)
	bool tmp2 = (tmp1 != (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(493)
	if ((tmp2)){
		HX_STACK_LINE(494)
		HX_STACK_DO_THROW(HX_HCSTRING("Invalid number of keys","\x6f","\xb8","\x18","\x27"));
	}
	HX_STACK_LINE(495)
	bool tmp3 = (id == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(495)
	if ((tmp3)){
		HX_STACK_LINE(496)
		return null();
	}
	HX_STACK_LINE(497)
	Dynamic tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(497)
	::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(497)
	::String tmp6 = this->table_name;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(497)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(497)
	Dynamic tmp8 = this->getFromCacheKey(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(497)
	Dynamic x = tmp8;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(498)
	bool tmp9 = (x != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(498)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(498)
	if ((tmp9)){
		HX_STACK_LINE(498)
		Dynamic tmp11 = lock;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(498)
		Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(498)
		Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(498)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(498)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(498)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(498)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(498)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(498)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(498)
		if ((tmp19)){
			HX_STACK_LINE(498)
			tmp10 = x->__Field(HX_HCSTRING("_lock","\xca","\xb7","\xc8","\xfa"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(498)
			tmp10 = true;
		}
	}
	else{
		HX_STACK_LINE(498)
		tmp10 = false;
	}
	HX_STACK_LINE(498)
	if ((tmp10)){
		HX_STACK_LINE(499)
		Dynamic tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(499)
		return tmp11;
	}
	HX_STACK_LINE(500)
	::StringBuf tmp11 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(500)
	::StringBuf s = tmp11;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(501)
	s->add(HX_HCSTRING("SELECT * FROM ","\xdc","\xbd","\x4a","\xff"));
	HX_STACK_LINE(502)
	::String tmp12 = this->table_name;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(502)
	s->add(tmp12);
	HX_STACK_LINE(503)
	s->add(HX_HCSTRING(" WHERE ","\x99","\x2e","\x6f","\x9e"));
	HX_STACK_LINE(504)
	::String tmp13 = this->table_keys->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(504)
	::String tmp14 = this->quoteField(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(504)
	s->add(tmp14);
	HX_STACK_LINE(505)
	s->add(HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));
	HX_STACK_LINE(506)
	::sys::db::Connection tmp15 = this->getCnx();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(506)
	::StringBuf tmp16 = s;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(506)
	Dynamic tmp17 = id;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(506)
	tmp15->addValue(tmp16,tmp17);
	HX_STACK_LINE(507)
	::String tmp18 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(507)
	Dynamic tmp19 = lock;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(507)
	Dynamic tmp20 = this->unsafeObject(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(507)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,unsafeGet,return )

Dynamic Manager_obj::unsafeGetWithKeys( Dynamic keys,Dynamic lock){
	HX_STACK_FRAME("sys.db.Manager","unsafeGetWithKeys",0x921531fa,"sys.db.Manager.unsafeGetWithKeys","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",510,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(keys,"keys")
	HX_STACK_ARG(lock,"lock")
	HX_STACK_LINE(511)
	bool tmp = (lock == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(511)
	if ((tmp)){
		HX_STACK_LINE(511)
		lock = true;
	}
	HX_STACK_LINE(512)
	Dynamic tmp1 = keys;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(512)
	::String tmp2 = this->makeCacheKey(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(512)
	Dynamic tmp3 = this->getFromCacheKey(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(512)
	Dynamic x = tmp3;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(513)
	bool tmp4 = (x != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(513)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(513)
	if ((tmp4)){
		HX_STACK_LINE(513)
		Dynamic tmp6 = lock;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(513)
		Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(513)
		Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(513)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(513)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(513)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(513)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(513)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(513)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(513)
		if ((tmp14)){
			HX_STACK_LINE(513)
			tmp5 = x->__Field(HX_HCSTRING("_lock","\xca","\xb7","\xc8","\xfa"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(513)
			tmp5 = true;
		}
	}
	else{
		HX_STACK_LINE(513)
		tmp5 = false;
	}
	HX_STACK_LINE(513)
	if ((tmp5)){
		HX_STACK_LINE(514)
		Dynamic tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(514)
		return tmp6;
	}
	HX_STACK_LINE(515)
	::StringBuf tmp6 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(515)
	::StringBuf s = tmp6;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(516)
	s->add(HX_HCSTRING("SELECT * FROM ","\xdc","\xbd","\x4a","\xff"));
	HX_STACK_LINE(517)
	::String tmp7 = this->table_name;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(517)
	s->add(tmp7);
	HX_STACK_LINE(518)
	s->add(HX_HCSTRING(" WHERE ","\x99","\x2e","\x6f","\x9e"));
	HX_STACK_LINE(519)
	::StringBuf tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(519)
	Dynamic tmp9 = keys;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(519)
	this->addKeys(tmp8,tmp9);
	HX_STACK_LINE(520)
	::String tmp10 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(520)
	Dynamic tmp11 = lock;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(520)
	Dynamic tmp12 = this->unsafeObject(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(520)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,unsafeGetWithKeys,return )

Dynamic Manager_obj::unsafeGetId( Dynamic o){
	HX_STACK_FRAME("sys.db.Manager","unsafeGetId",0x156726bb,"sys.db.Manager.unsafeGetId","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",523,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(524)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(524)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(524)
	if ((tmp)){
		HX_STACK_LINE(524)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(524)
		Dynamic tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(524)
		::String tmp3 = this->table_keys->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(524)
		tmp1 = ::Reflect_obj::field(tmp2,tmp3);
	}
	HX_STACK_LINE(524)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,unsafeGetId,return )

Void Manager_obj::addCondition( ::StringBuf s,Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","addCondition",0xdba1f28a,"sys.db.Manager.addCondition","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",536,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(537)
		bool first = true;		HX_STACK_VAR(first,"first");
		HX_STACK_LINE(538)
		bool tmp = (x != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(538)
		if ((tmp)){
			HX_STACK_LINE(539)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(539)
			Dynamic tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(539)
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(539)
			while((true)){
				HX_STACK_LINE(539)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(539)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(539)
				if ((tmp3)){
					HX_STACK_LINE(539)
					break;
				}
				HX_STACK_LINE(539)
				::String tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(539)
				::String f = tmp4;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(539)
				++(_g);
				HX_STACK_LINE(540)
				bool tmp5 = first;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(540)
				if ((tmp5)){
					HX_STACK_LINE(541)
					first = false;
				}
				else{
					HX_STACK_LINE(543)
					s->add(HX_HCSTRING(" AND ","\xa9","\xd9","\x04","\x98"));
				}
				HX_STACK_LINE(544)
				::String tmp6 = f;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(544)
				::String tmp7 = this->quoteField(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(544)
				s->add(tmp7);
				HX_STACK_LINE(545)
				Dynamic tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(545)
				::String tmp9 = f;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(545)
				Dynamic tmp10 = ::Reflect_obj::field(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(545)
				Dynamic d = tmp10;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(546)
				bool tmp11 = (d == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(546)
				if ((tmp11)){
					HX_STACK_LINE(547)
					s->add(HX_HCSTRING(" IS NULL","\x5d","\x0a","\x2e","\xd2"));
				}
				else{
					HX_STACK_LINE(549)
					s->add(HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));
					HX_STACK_LINE(550)
					::sys::db::Connection tmp12 = this->getCnx();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(550)
					::StringBuf tmp13 = s;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(550)
					Dynamic tmp14 = d;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(550)
					tmp12->addValue(tmp13,tmp14);
				}
			}
		}
		HX_STACK_LINE(553)
		bool tmp1 = first;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(553)
		if ((tmp1)){
			HX_STACK_LINE(554)
			s->add(HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,addCondition,(void))

::hx::Class Manager_obj::dbClass( ){
	HX_STACK_FRAME("sys.db.Manager","dbClass",0xd7b1028a,"sys.db.Manager.dbClass","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",559,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_LINE(560)
	Dynamic tmp = this->class_proto;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(560)
	::hx::Class tmp1 = ((::hx::Class)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(560)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,dbClass,return )

Dynamic Manager_obj::dbInfos( ){
	HX_STACK_FRAME("sys.db.Manager","dbInfos",0x4d6eb297,"sys.db.Manager.dbInfos","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",563,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_LINE(564)
	Dynamic tmp = this->table_infos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,dbInfos,return )

::sys::db::Connection Manager_obj::getCnx( ){
	HX_STACK_FRAME("sys.db.Manager","getCnx",0xb18543c7,"sys.db.Manager.getCnx","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",567,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_LINE(568)
	::sys::db::Connection tmp = ::sys::db::Manager_obj::cnx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(568)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,getCnx,return )

::String Manager_obj::getLockMode( ){
	HX_STACK_FRAME("sys.db.Manager","getLockMode",0xbc83a254,"sys.db.Manager.getLockMode","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",571,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_LINE(572)
	::String tmp = ::sys::db::Manager_obj::lockMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(572)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,getLockMode,return )

Void Manager_obj::forceUpdate( Dynamic o,::String field){
{
		HX_STACK_FRAME("sys.db.Manager","forceUpdate",0xf387e104,"sys.db.Manager.forceUpdate","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",581,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o,"o")
		HX_STACK_ARG(field,"field")
		HX_STACK_LINE(583)
		Dynamic tmp = o;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(583)
		Dynamic tmp1 = ::Reflect_obj::field(tmp,HX_HCSTRING("__cache__","\xc2","\xd2","\x6f","\xa4"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(583)
		::String tmp2 = field;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(583)
		::Reflect_obj::setField(tmp1,tmp2,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,forceUpdate,(void))

Void Manager_obj::initRelation( Dynamic r){
{
		HX_STACK_FRAME("sys.db.Manager","initRelation",0xbaa5253c,"sys.db.Manager.initRelation","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",600,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(602)
		::String tmp = r->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(602)
		::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(602)
		Dynamic spod = tmp1;		HX_STACK_VAR(spod,"spod");
		HX_STACK_LINE(603)
		bool tmp2 = (spod == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(603)
		if ((tmp2)){
			HX_STACK_LINE(603)
			::String tmp3 = (HX_HCSTRING("Missing spod type ","\x12","\x7f","\xe5","\xa3") + r->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(603)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(604)
		::sys::db::Manager manager = spod->__Field(HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"), hx::paccDynamic );		HX_STACK_VAR(manager,"manager");
		HX_STACK_LINE(605)
		::String tmp3 = (HX_HCSTRING("__","\x20","\x53","\x00","\x00") + r->__Field(HX_HCSTRING("prop","\xa3","\xc7","\x5e","\x4a"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(605)
		::String hprop = tmp3;		HX_STACK_VAR(hprop,"hprop");
		HX_STACK_LINE(606)
		::String hkey = r->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic );		HX_STACK_VAR(hkey,"hkey");
		HX_STACK_LINE(607)
		bool lock = r->__Field(HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"), hx::paccDynamic );		HX_STACK_VAR(lock,"lock");
		HX_STACK_LINE(608)
		bool tmp4 = (manager == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(608)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(608)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(608)
		if ((tmp5)){
			HX_STACK_LINE(608)
			tmp6 = (manager->table_keys == null());
		}
		else{
			HX_STACK_LINE(608)
			tmp6 = true;
		}
		HX_STACK_LINE(608)
		if ((tmp6)){
			HX_STACK_LINE(608)
			::String tmp7 = this->table_name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(608)
			::String tmp8 = (HX_HCSTRING("Invalid manager for relation ","\x11","\x61","\x1d","\x44") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(608)
			::String tmp9 = (tmp8 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(608)
			::String tmp10 = r->__Field(HX_HCSTRING("prop","\xa3","\xc7","\x5e","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(608)
			::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(608)
			HX_STACK_DO_THROW(tmp11);
		}
		HX_STACK_LINE(609)
		int tmp7 = manager->table_keys->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(609)
		bool tmp8 = (tmp7 != (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(609)
		if ((tmp8)){
			HX_STACK_LINE(609)
			::String tmp9 = (HX_HCSTRING("Relation ","\xc4","\x0d","\x1e","\x86") + r->__Field(HX_HCSTRING("prop","\xa3","\xc7","\x5e","\x4a"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(609)
			::String tmp10 = (tmp9 + HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(609)
			::String tmp11 = r->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(609)
			::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(609)
			::String tmp13 = (tmp12 + HX_HCSTRING(") on a multiple key table","\xc6","\x90","\xd2","\xf9"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(609)
			HX_STACK_DO_THROW(tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,initRelation,(void))

Dynamic Manager_obj::__get( Dynamic x,::String prop,::String key,Dynamic lock){
	HX_STACK_FRAME("sys.db.Manager","__get",0x6ac53026,"sys.db.Manager.__get","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",639,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(prop,"prop")
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(lock,"lock")
	HX_STACK_LINE(640)
	Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(640)
	::String tmp1 = prop;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(640)
	Dynamic tmp2 = ::Reflect_obj::field(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(640)
	Dynamic v = tmp2;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(641)
	bool tmp3 = (v != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(641)
	if ((tmp3)){
		HX_STACK_LINE(642)
		Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(642)
		return tmp4;
	}
	HX_STACK_LINE(643)
	Dynamic tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(643)
	::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(643)
	Dynamic tmp6 = ::Reflect_obj::field(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(643)
	Dynamic tmp7 = lock;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(643)
	Dynamic tmp8 = this->unsafeGet(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(643)
	Dynamic y = tmp8;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(644)
	Dynamic tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(644)
	::String tmp10 = prop;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(644)
	Dynamic tmp11 = v;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(644)
	::Reflect_obj::setField(tmp9,tmp10,tmp11);
	HX_STACK_LINE(645)
	Dynamic tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(645)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC4(Manager_obj,__get,return )

Dynamic Manager_obj::__set( Dynamic x,::String prop,::String key,Dynamic v){
	HX_STACK_FRAME("sys.db.Manager","__set",0x6ace4b32,"sys.db.Manager.__set","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",648,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(prop,"prop")
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(649)
	Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(649)
	::String tmp1 = prop;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(649)
	Dynamic tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(649)
	::Reflect_obj::setField(tmp,tmp1,tmp2);
	HX_STACK_LINE(650)
	bool tmp3 = (v == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(650)
	if ((tmp3)){
		HX_STACK_LINE(651)
		Dynamic tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(651)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(651)
		::Reflect_obj::setField(tmp4,tmp5,null());
	}
	else{
		HX_STACK_LINE(653)
		Dynamic tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(653)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(653)
		Dynamic tmp6 = v;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(653)
		::String tmp7 = this->table_keys->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(653)
		Dynamic tmp8 = ::Reflect_obj::field(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(653)
		::Reflect_obj::setField(tmp4,tmp5,tmp8);
	}
	HX_STACK_LINE(654)
	Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(654)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC4(Manager_obj,__set,return )

::String Manager_obj::makeCacheKey( Dynamic x){
	HX_STACK_FRAME("sys.db.Manager","makeCacheKey",0xbf1377db,"sys.db.Manager.makeCacheKey","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",661,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(662)
	int tmp = this->table_keys->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(662)
	bool tmp1 = (tmp == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(662)
	if ((tmp1)){
		HX_STACK_LINE(663)
		Dynamic tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(663)
		::String tmp3 = this->table_keys->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(663)
		Dynamic tmp4 = ::Reflect_obj::field(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(663)
		Dynamic k = tmp4;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(664)
		bool tmp5 = (k == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(664)
		if ((tmp5)){
			HX_STACK_LINE(665)
			::String tmp6 = this->table_keys->__get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(665)
			::String tmp7 = (HX_HCSTRING("Missing key ","\xbb","\x6c","\x39","\xfc") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(665)
			HX_STACK_DO_THROW(tmp7);
		}
		HX_STACK_LINE(666)
		Dynamic tmp6 = k;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(666)
		::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(666)
		::String tmp8 = this->table_name;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(666)
		::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(666)
		return tmp9;
	}
	HX_STACK_LINE(668)
	::StringBuf tmp2 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(668)
	::StringBuf s = tmp2;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(669)
	{
		HX_STACK_LINE(669)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(669)
		Array< ::String > _g1 = this->table_keys;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(669)
		while((true)){
			HX_STACK_LINE(669)
			bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(669)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(669)
			if ((tmp4)){
				HX_STACK_LINE(669)
				break;
			}
			HX_STACK_LINE(669)
			::String tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(669)
			::String k = tmp5;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(669)
			++(_g);
			HX_STACK_LINE(670)
			Dynamic tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(670)
			::String tmp7 = k;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(670)
			Dynamic tmp8 = ::Reflect_obj::field(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(670)
			Dynamic v = tmp8;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(671)
			bool tmp9 = (k == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(671)
			if ((tmp9)){
				HX_STACK_LINE(672)
				::String tmp10 = (HX_HCSTRING("Missing key ","\xbb","\x6c","\x39","\xfc") + k);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(672)
				HX_STACK_DO_THROW(tmp10);
			}
			HX_STACK_LINE(673)
			Dynamic tmp10 = v;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(673)
			s->add(tmp10);
			HX_STACK_LINE(674)
			s->add(HX_HCSTRING("#","\x23","\x00","\x00","\x00"));
		}
	}
	HX_STACK_LINE(676)
	::String tmp3 = this->table_name;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(676)
	s->add(tmp3);
	HX_STACK_LINE(677)
	::String tmp4 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(677)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,makeCacheKey,return )

Void Manager_obj::addToCache( Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","addToCache",0xc33d85f6,"sys.db.Manager.addToCache","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",680,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(681)
		::haxe::ds::StringMap tmp = ::sys::db::Manager_obj::object_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(681)
		Dynamic tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(681)
		::String tmp2 = this->makeCacheKey(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(681)
		Dynamic tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(681)
		tmp->set(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,addToCache,(void))

Void Manager_obj::removeFromCache( Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","removeFromCache",0x916daa44,"sys.db.Manager.removeFromCache","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",684,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(685)
		::haxe::ds::StringMap tmp = ::sys::db::Manager_obj::object_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(685)
		Dynamic tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(685)
		::String tmp2 = this->makeCacheKey(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(685)
		tmp->remove(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,removeFromCache,(void))

Dynamic Manager_obj::getFromCacheKey( ::String key){
	HX_STACK_FRAME("sys.db.Manager","getFromCacheKey",0xb7d3b86d,"sys.db.Manager.getFromCacheKey","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",688,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(689)
	::haxe::ds::StringMap tmp = ::sys::db::Manager_obj::object_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(689)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(689)
	::sys::db::Object tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(689)
	Dynamic tmp3 = ((Dynamic)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(689)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,getFromCacheKey,return )

Dynamic Manager_obj::getFromCache( Dynamic x,bool lock){
	HX_STACK_FRAME("sys.db.Manager","getFromCache",0xe50e0852,"sys.db.Manager.getFromCache","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",692,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(lock,"lock")
	HX_STACK_LINE(693)
	::haxe::ds::StringMap tmp = ::sys::db::Manager_obj::object_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(693)
	Dynamic tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(693)
	::String tmp2 = this->makeCacheKey(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(693)
	::sys::db::Object tmp3 = tmp->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(693)
	Dynamic c = tmp3;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(694)
	bool tmp4 = (c != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(694)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(694)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(694)
	if ((tmp5)){
		HX_STACK_LINE(694)
		tmp6 = lock;
	}
	else{
		HX_STACK_LINE(694)
		tmp6 = false;
	}
	HX_STACK_LINE(694)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(694)
	if ((tmp6)){
		HX_STACK_LINE(694)
		tmp7 = !(c->__Field(HX_HCSTRING("_lock","\xca","\xb7","\xc8","\xfa"), hx::paccDynamic ));
	}
	else{
		HX_STACK_LINE(694)
		tmp7 = false;
	}
	HX_STACK_LINE(694)
	if ((tmp7)){
		HX_STACK_LINE(696)
		{
			HX_STACK_LINE(696)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(696)
			Dynamic tmp8 = c;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(696)
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp8);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(696)
			while((true)){
				HX_STACK_LINE(696)
				bool tmp9 = (_g < _g1->length);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(696)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(696)
				if ((tmp10)){
					HX_STACK_LINE(696)
					break;
				}
				HX_STACK_LINE(696)
				::String tmp11 = _g1->__get(_g);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(696)
				::String f = tmp11;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(696)
				++(_g);
				HX_STACK_LINE(697)
				Dynamic tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(697)
				::String tmp13 = f;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(697)
				::Reflect_obj::deleteField(tmp12,tmp13);
			}
		}
		HX_STACK_LINE(698)
		{
			HX_STACK_LINE(698)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(698)
			Dynamic tmp8 = this->table_infos;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(698)
			cpp::ArrayBase _g1 = tmp8->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(698)
			while((true)){
				HX_STACK_LINE(698)
				bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(698)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(698)
				if ((tmp10)){
					HX_STACK_LINE(698)
					break;
				}
				HX_STACK_LINE(698)
				Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(698)
				Dynamic f = tmp11;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(698)
				++(_g);
				HX_STACK_LINE(700)
				::String name = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(701)
				Dynamic tmp12 = f;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(701)
				::String tmp13 = ::sys::db::Manager_obj::getFieldName(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(701)
				::String fieldName = tmp13;		HX_STACK_VAR(fieldName,"fieldName");
				HX_STACK_LINE(702)
				Dynamic tmp14 = c;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(702)
				::String tmp15 = fieldName;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(702)
				Dynamic tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(702)
				::String tmp17 = name;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(702)
				Dynamic tmp18 = ::Reflect_obj::field(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(702)
				::Reflect_obj::setField(tmp14,tmp15,tmp18);
			}
		}
		HX_STACK_LINE(705)
		c->__FieldRef(HX_HCSTRING("_lock","\xca","\xb7","\xc8","\xfa")) = true;
		HX_STACK_LINE(708)
		c->__FieldRef(HX_HCSTRING("_manager","\xee","\xeb","\x79","\x4d")) = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(711)
		Dynamic tmp8 = c;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(711)
		Dynamic tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(711)
		::Reflect_obj::setField(tmp8,HX_HCSTRING("__cache__","\xc2","\xd2","\x6f","\xa4"),tmp9);
		HX_STACK_LINE(713)
		Dynamic tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(713)
		this->make(tmp10);
	}
	HX_STACK_LINE(715)
	Dynamic tmp8 = c;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(715)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,getFromCache,return )

::sys::db::Connection Manager_obj::cnx;

::String Manager_obj::lockMode;

::String Manager_obj::cache_field;

::haxe::ds::StringMap Manager_obj::object_cache;

::List Manager_obj::init_list;

::haxe::ds::StringMap Manager_obj::KEYWORDS;

::sys::db::Connection Manager_obj::set_cnx( ::sys::db::Connection c){
	HX_STACK_FRAME("sys.db.Manager","set_cnx",0xa89133c0,"sys.db.Manager.set_cnx","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",50,0xacbc7d07)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(51)
	::sys::db::Manager_obj::cnx = c;
	HX_STACK_LINE(52)
	bool tmp = (c != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	if ((tmp)){
		HX_STACK_LINE(52)
		::String tmp2 = c->dbName();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		tmp1 = (tmp3 == HX_HCSTRING("MySQL","\xe2","\xbd","\x14","\xa6"));
	}
	else{
		HX_STACK_LINE(52)
		tmp1 = false;
	}
	HX_STACK_LINE(52)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	if ((tmp1)){
		HX_STACK_LINE(52)
		tmp2 = HX_HCSTRING(" FOR UPDATE","\x80","\x2e","\x09","\x87");
	}
	else{
		HX_STACK_LINE(52)
		tmp2 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(52)
	::sys::db::Manager_obj::lockMode = tmp2;
	HX_STACK_LINE(53)
	::sys::db::Connection tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,set_cnx,return )

::String Manager_obj::getFieldName( Dynamic field){
	HX_STACK_FRAME("sys.db.Manager","getFieldName",0xcfbe9bff,"sys.db.Manager.getFieldName","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",129,0xacbc7d07)
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(130)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	{
		HX_STACK_LINE(130)
		::sys::db::RecordType _g = field->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(130)
		switch( (int)(_g->__Index())){
			case (int)30: case (int)31: {
				HX_STACK_LINE(132)
				tmp = (HX_HCSTRING("data_","\xf5","\x0e","\x88","\xd4") + field->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));
			}
			;break;
			default: {
				HX_STACK_LINE(134)
				tmp = field->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
			}
		}
	}
	HX_STACK_LINE(130)
	return tmp;
	HX_STACK_LINE(130)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,getFieldName,return )

::String Manager_obj::nullCompare( ::String a,::String b,bool eq){
	HX_STACK_FRAME("sys.db.Manager","nullCompare",0xba80038e,"sys.db.Manager.nullCompare","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",527,0xacbc7d07)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(eq,"eq")
	HX_STACK_LINE(529)
	::sys::db::Connection tmp = ::sys::db::Manager_obj::cnx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(529)
	::String tmp1 = tmp->dbName();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(529)
	bool tmp2 = (tmp1 != HX_HCSTRING("MySQL","\xe2","\xbd","\x14","\xa6"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(529)
	if ((tmp2)){
		HX_STACK_LINE(530)
		::String tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(530)
		bool tmp4 = eq;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(530)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(530)
		if ((tmp4)){
			HX_STACK_LINE(530)
			tmp5 = HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00");
		}
		else{
			HX_STACK_LINE(530)
			tmp5 = HX_HCSTRING(" != ","\x84","\x13","\x40","\x15");
		}
		HX_STACK_LINE(530)
		::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(530)
		::String tmp7 = b;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(530)
		::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(530)
		return tmp8;
	}
	HX_STACK_LINE(531)
	::String tmp3 = (a + HX_HCSTRING(" <=> ","\x03","\xdd","\xa9","\x94"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(531)
	::String tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(531)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(531)
	::String sql = tmp5;		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(532)
	bool tmp6 = eq;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(532)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(532)
	if ((tmp7)){
		HX_STACK_LINE(532)
		::String tmp8 = (HX_HCSTRING("NOT(","\xd5","\xdf","\xca","\x33") + sql);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(532)
		::String tmp9 = (tmp8 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(532)
		sql = tmp9;
	}
	HX_STACK_LINE(533)
	::String tmp8 = sql;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(533)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Manager_obj,nullCompare,return )

Void Manager_obj::initialize( ){
{
		HX_STACK_FRAME("sys.db.Manager","initialize",0x3ad5a4a0,"sys.db.Manager.initialize","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",588,0xacbc7d07)
		HX_STACK_LINE(589)
		::List tmp = ::sys::db::Manager_obj::init_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(589)
		::List l = tmp;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(590)
		::List tmp1 = ::List_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(590)
		::sys::db::Manager_obj::init_list = tmp1;
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(591)
			::_List::ListIterator tmp2 = ::_List::ListIterator_obj::__new(l->h);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(591)
			::_List::ListIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(591)
			while((true)){
				HX_STACK_LINE(591)
				bool tmp3 = (_g->head != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(591)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(591)
				if ((tmp4)){
					HX_STACK_LINE(591)
					break;
				}
				HX_STACK_LINE(591)
				Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(591)
				{
					HX_STACK_LINE(591)
					Dynamic tmp6 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(591)
					_g->val = tmp6;
					HX_STACK_LINE(591)
					Dynamic tmp7 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(591)
					_g->head = tmp7;
					HX_STACK_LINE(591)
					tmp5 = _g->val;
				}
				HX_STACK_LINE(591)
				::sys::db::Manager m = ((::sys::db::Manager)(tmp5));		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(592)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(592)
				cpp::ArrayBase _g11 = m->table_infos->__Field(HX_HCSTRING("relations","\x37","\x2e","\x4b","\xe4"), hx::paccDynamic );		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(592)
				while((true)){
					HX_STACK_LINE(592)
					bool tmp6 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(592)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(592)
					if ((tmp7)){
						HX_STACK_LINE(592)
						break;
					}
					HX_STACK_LINE(592)
					Dynamic tmp8 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(592)
					Dynamic r = tmp8;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(592)
					++(_g1);
					HX_STACK_LINE(593)
					Dynamic tmp9 = r;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(593)
					m->initRelation(tmp9);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,initialize,(void))

Void Manager_obj::cleanup( ){
{
		HX_STACK_FRAME("sys.db.Manager","cleanup",0x3a1166d4,"sys.db.Manager.cleanup","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",596,0xacbc7d07)
		HX_STACK_LINE(597)
		::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(597)
		::sys::db::Manager_obj::object_cache = tmp;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,cleanup,(void))

::String Manager_obj::quoteAny( Dynamic v){
	HX_STACK_FRAME("sys.db.Manager","quoteAny",0x16403c60,"sys.db.Manager.quoteAny","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",720,0xacbc7d07)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(721)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(721)
	::StringBuf s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(722)
	::sys::db::Connection tmp1 = ::sys::db::Manager_obj::cnx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(722)
	::StringBuf tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(722)
	Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(722)
	tmp1->addValue(tmp2,tmp3);
	HX_STACK_LINE(723)
	::String tmp4 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(723)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,quoteAny,return )

::String Manager_obj::quoteList( ::String v,Dynamic it){
	HX_STACK_FRAME("sys.db.Manager","quoteList",0x6936206a,"sys.db.Manager.quoteList","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",726,0xacbc7d07)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(it,"it")
	HX_STACK_LINE(727)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(727)
	::StringBuf b = tmp;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(728)
	bool first = true;		HX_STACK_VAR(first,"first");
	HX_STACK_LINE(729)
	bool tmp1 = (it != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(729)
	if ((tmp1)){
		HX_STACK_LINE(730)
		Dynamic tmp2 = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(730)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp2);  __it->hasNext(); ){
			Dynamic v1 = __it->next();
			{
				HX_STACK_LINE(731)
				bool tmp3 = first;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(731)
				if ((tmp3)){
					HX_STACK_LINE(731)
					first = false;
				}
				else{
					HX_STACK_LINE(731)
					::String tmp4 = HX_HCSTRING(",","\x2c","\x00","\x00","\x00");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(731)
					b->b->push(tmp4);
				}
				HX_STACK_LINE(732)
				::sys::db::Connection tmp4 = ::sys::db::Manager_obj::cnx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(732)
				::StringBuf tmp5 = b;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(732)
				Dynamic tmp6 = v1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(732)
				tmp4->addValue(tmp5,tmp6);
			}
;
		}
	}
	HX_STACK_LINE(734)
	bool tmp2 = first;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(734)
	if ((tmp2)){
		HX_STACK_LINE(735)
		return HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79");
	}
	HX_STACK_LINE(736)
	::String tmp3 = (v + HX_HCSTRING(" IN (","\x4d","\x6f","\x4e","\x9d"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(736)
	::String tmp4 = b->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(736)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(736)
	::String tmp6 = (tmp5 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(736)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,quoteList,return )

::String Manager_obj::__depends( ){
	HX_STACK_FRAME("sys.db.Manager","__depends",0x4712e117,"sys.db.Manager.__depends","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",740,0xacbc7d07)
	HX_STACK_LINE(740)
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::alloc((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(740)
	::String tmp1 = tmp->toString();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(740)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,__depends,return )


Manager_obj::Manager_obj()
{
}

void Manager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Manager);
	HX_MARK_MEMBER_NAME(table_infos,"table_infos");
	HX_MARK_MEMBER_NAME(table_name,"table_name");
	HX_MARK_MEMBER_NAME(table_keys,"table_keys");
	HX_MARK_MEMBER_NAME(class_proto,"class_proto");
	HX_MARK_MEMBER_NAME(get,"get");
	HX_MARK_MEMBER_NAME(select,"select");
	HX_MARK_MEMBER_NAME(search,"search");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(_delete,"delete");
	HX_MARK_END_CLASS();
}

void Manager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(table_infos,"table_infos");
	HX_VISIT_MEMBER_NAME(table_name,"table_name");
	HX_VISIT_MEMBER_NAME(table_keys,"table_keys");
	HX_VISIT_MEMBER_NAME(class_proto,"class_proto");
	HX_VISIT_MEMBER_NAME(get,"get");
	HX_VISIT_MEMBER_NAME(select,"select");
	HX_VISIT_MEMBER_NAME(search,"search");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(_delete,"delete");
}

Dynamic Manager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { return all_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		if (HX_FIELD_EQ(inName,"quote") ) { return quote_dyn(); }
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"select") ) { return select; }
		if (HX_FIELD_EQ(inName,"search") ) { return search; }
		if (HX_FIELD_EQ(inName,"delete") ) { return _delete; }
		if (HX_FIELD_EQ(inName,"doLock") ) { return doLock_dyn(); }
		if (HX_FIELD_EQ(inName,"unmake") ) { return unmake_dyn(); }
		if (HX_FIELD_EQ(inName,"getCnx") ) { return getCnx_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addKeys") ) { return addKeys_dyn(); }
		if (HX_FIELD_EQ(inName,"dbClass") ) { return dbClass_dyn(); }
		if (HX_FIELD_EQ(inName,"dbInfos") ) { return dbInfos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"doInsert") ) { return doInsert_dyn(); }
		if (HX_FIELD_EQ(inName,"isBinary") ) { return isBinary_dyn(); }
		if (HX_FIELD_EQ(inName,"doUpdate") ) { return doUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"doDelete") ) { return doDelete_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"unsafeGet") ) { return unsafeGet_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"table_name") ) { return table_name; }
		if (HX_FIELD_EQ(inName,"table_keys") ) { return table_keys; }
		if (HX_FIELD_EQ(inName,"quoteField") ) { return quoteField_dyn(); }
		if (HX_FIELD_EQ(inName,"addToCache") ) { return addToCache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"table_infos") ) { return table_infos; }
		if (HX_FIELD_EQ(inName,"class_proto") ) { return class_proto; }
		if (HX_FIELD_EQ(inName,"doSerialize") ) { return doSerialize_dyn(); }
		if (HX_FIELD_EQ(inName,"cacheObject") ) { return cacheObject_dyn(); }
		if (HX_FIELD_EQ(inName,"unsafeCount") ) { return unsafeCount_dyn(); }
		if (HX_FIELD_EQ(inName,"unsafeGetId") ) { return unsafeGetId_dyn(); }
		if (HX_FIELD_EQ(inName,"getLockMode") ) { return getLockMode_dyn(); }
		if (HX_FIELD_EQ(inName,"forceUpdate") ) { return forceUpdate_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"unsafeObject") ) { return unsafeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"unsafeDelete") ) { return unsafeDelete_dyn(); }
		if (HX_FIELD_EQ(inName,"addCondition") ) { return addCondition_dyn(); }
		if (HX_FIELD_EQ(inName,"initRelation") ) { return initRelation_dyn(); }
		if (HX_FIELD_EQ(inName,"makeCacheKey") ) { return makeCacheKey_dyn(); }
		if (HX_FIELD_EQ(inName,"getFromCache") ) { return getFromCache_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dynamicSearch") ) { return dynamicSearch_dyn(); }
		if (HX_FIELD_EQ(inName,"doUpdateCache") ) { return doUpdateCache_dyn(); }
		if (HX_FIELD_EQ(inName,"doUnserialize") ) { return doUnserialize_dyn(); }
		if (HX_FIELD_EQ(inName,"unsafeExecute") ) { return unsafeExecute_dyn(); }
		if (HX_FIELD_EQ(inName,"unsafeObjects") ) { return unsafeObjects_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectToString") ) { return objectToString_dyn(); }
		if (HX_FIELD_EQ(inName,"normalizeCache") ) { return normalizeCache_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeFromCache") ) { return removeFromCache_dyn(); }
		if (HX_FIELD_EQ(inName,"getFromCacheKey") ) { return getFromCacheKey_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasBinaryChanged") ) { return hasBinaryChanged_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unsafeGetWithKeys") ) { return unsafeGetWithKeys_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getUpdateStatement") ) { return getUpdateStatement_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Manager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnx") ) { outValue = cnx; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_cnx") ) { outValue = set_cnx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cleanup") ) { outValue = cleanup_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lockMode") ) { outValue = lockMode; return true;  }
		if (HX_FIELD_EQ(inName,"KEYWORDS") ) { outValue = KEYWORDS; return true;  }
		if (HX_FIELD_EQ(inName,"quoteAny") ) { outValue = quoteAny_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"init_list") ) { outValue = init_list; return true;  }
		if (HX_FIELD_EQ(inName,"quoteList") ) { outValue = quoteList_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__depends") ) { outValue = __depends_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nullCompare") ) { outValue = nullCompare_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"object_cache") ) { outValue = object_cache; return true;  }
		if (HX_FIELD_EQ(inName,"getFieldName") ) { outValue = getFieldName_dyn(); return true;  }
	}
	return false;
}

Dynamic Manager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { get=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"select") ) { select=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"search") ) { search=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"delete") ) { _delete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"table_name") ) { table_name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"table_keys") ) { table_keys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"table_infos") ) { table_infos=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"class_proto") ) { class_proto=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Manager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnx") ) { if (inCallProp == hx::paccAlways)  ioValue = set_cnx(ioValue); else cnx=ioValue.Cast< ::sys::db::Connection >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lockMode") ) { lockMode=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"KEYWORDS") ) { KEYWORDS=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"init_list") ) { init_list=ioValue.Cast< ::List >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"object_cache") ) { object_cache=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void Manager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("table_infos","\x14","\xa6","\xa7","\x44"));
	outFields->push(HX_HCSTRING("table_name","\x5c","\xe3","\xb0","\xdd"));
	outFields->push(HX_HCSTRING("table_keys","\x05","\x53","\xb8","\xdb"));
	outFields->push(HX_HCSTRING("class_proto","\x61","\xa4","\x2b","\x07"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Manager_obj,table_infos),HX_HCSTRING("table_infos","\x14","\xa6","\xa7","\x44")},
	{hx::fsString,(int)offsetof(Manager_obj,table_name),HX_HCSTRING("table_name","\x5c","\xe3","\xb0","\xdd")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Manager_obj,table_keys),HX_HCSTRING("table_keys","\x05","\x53","\xb8","\xdb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Manager_obj,class_proto),HX_HCSTRING("class_proto","\x61","\xa4","\x2b","\x07")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Manager_obj,get),HX_HCSTRING("get","\x96","\x80","\x4e","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Manager_obj,select),HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Manager_obj,search),HX_HCSTRING("search","\x68","\x9f","\xf7","\x62")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Manager_obj,count),HX_HCSTRING("count","\xcf","\x44","\x63","\x4a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Manager_obj,_delete),HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::sys::db::Connection*/ ,(void *) &Manager_obj::cnx,HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00")},
	{hx::fsString,(void *) &Manager_obj::lockMode,HX_HCSTRING("lockMode","\xee","\x6c","\x85","\x8d")},
	{hx::fsString,(void *) &Manager_obj::cache_field,HX_HCSTRING("cache_field","\xbd","\x93","\x87","\xe6")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Manager_obj::object_cache,HX_HCSTRING("object_cache","\x82","\x79","\x71","\xe2")},
	{hx::fsObject /*::List*/ ,(void *) &Manager_obj::init_list,HX_HCSTRING("init_list","\x2d","\xe3","\x28","\x83")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Manager_obj::KEYWORDS,HX_HCSTRING("KEYWORDS","\x6a","\x55","\x26","\xd9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("table_infos","\x14","\xa6","\xa7","\x44"),
	HX_HCSTRING("table_name","\x5c","\xe3","\xb0","\xdd"),
	HX_HCSTRING("table_keys","\x05","\x53","\xb8","\xdb"),
	HX_HCSTRING("class_proto","\x61","\xa4","\x2b","\x07"),
	HX_HCSTRING("all","\x21","\xf9","\x49","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a"),
	HX_HCSTRING("search","\x68","\x9f","\xf7","\x62"),
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a"),
	HX_HCSTRING("dynamicSearch","\x47","\xdc","\x48","\x81"),
	HX_HCSTRING("quote","\x3c","\x23","\xf2","\x5d"),
	HX_HCSTRING("doUpdateCache","\xae","\x29","\x11","\xcc"),
	HX_HCSTRING("doInsert","\x24","\xc9","\xf4","\x31"),
	HX_HCSTRING("isBinary","\x8b","\x57","\x75","\x45"),
	HX_HCSTRING("hasBinaryChanged","\x39","\x0f","\x29","\x94"),
	HX_HCSTRING("doUpdate","\xf4","\x0b","\x1d","\x1b"),
	HX_HCSTRING("getUpdateStatement","\xf0","\x08","\x78","\x42"),
	HX_HCSTRING("doDelete","\x16","\x46","\xf0","\xfe"),
	HX_HCSTRING("doLock","\x16","\x41","\xbb","\x17"),
	HX_HCSTRING("objectToString","\x8b","\x62","\x2b","\x32"),
	HX_HCSTRING("doSerialize","\xd5","\x1c","\xf1","\x4d"),
	HX_HCSTRING("doUnserialize","\x9c","\x0a","\xfd","\x1f"),
	HX_HCSTRING("normalizeCache","\x75","\x53","\x2b","\x62"),
	HX_HCSTRING("cacheObject","\xa1","\xaa","\xe0","\x33"),
	HX_HCSTRING("make","\xee","\x39","\x56","\x48"),
	HX_HCSTRING("unmake","\xc7","\x40","\x2b","\x66"),
	HX_HCSTRING("quoteField","\xde","\xa7","\x99","\xe3"),
	HX_HCSTRING("addKeys","\xb5","\x24","\x44","\x83"),
	HX_HCSTRING("unsafeExecute","\xaf","\x1e","\xd1","\x17"),
	HX_HCSTRING("unsafeObject","\x85","\x17","\xe1","\x36"),
	HX_HCSTRING("unsafeObjects","\x4e","\x7d","\x13","\xce"),
	HX_HCSTRING("unsafeCount","\xc9","\x66","\x5f","\xc5"),
	HX_HCSTRING("unsafeDelete","\xf1","\x58","\x7a","\x8c"),
	HX_HCSTRING("unsafeGet","\x10","\x50","\x9c","\x70"),
	HX_HCSTRING("unsafeGetWithKeys","\x4a","\x9b","\xe7","\xff"),
	HX_HCSTRING("unsafeGetId","\x0b","\xb4","\x5c","\x0c"),
	HX_HCSTRING("addCondition","\x3a","\x0b","\x88","\xfb"),
	HX_HCSTRING("dbClass","\xda","\xa7","\xe1","\x48"),
	HX_HCSTRING("dbInfos","\xe7","\x57","\x9f","\xbe"),
	HX_HCSTRING("getCnx","\x77","\xb8","\x1a","\xa3"),
	HX_HCSTRING("getLockMode","\xa4","\x2f","\x79","\xb3"),
	HX_HCSTRING("forceUpdate","\x54","\x6e","\x7d","\xea"),
	HX_HCSTRING("initRelation","\xec","\x3d","\x8b","\xda"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	HX_HCSTRING("makeCacheKey","\x8b","\x90","\xf9","\xde"),
	HX_HCSTRING("addToCache","\xa6","\x12","\x23","\x75"),
	HX_HCSTRING("removeFromCache","\x94","\x1f","\xbc","\x36"),
	HX_HCSTRING("getFromCacheKey","\xbd","\x2d","\x22","\x5d"),
	HX_HCSTRING("getFromCache","\x02","\x21","\xf4","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Manager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Manager_obj::cnx,"cnx");
	HX_MARK_MEMBER_NAME(Manager_obj::lockMode,"lockMode");
	HX_MARK_MEMBER_NAME(Manager_obj::cache_field,"cache_field");
	HX_MARK_MEMBER_NAME(Manager_obj::object_cache,"object_cache");
	HX_MARK_MEMBER_NAME(Manager_obj::init_list,"init_list");
	HX_MARK_MEMBER_NAME(Manager_obj::KEYWORDS,"KEYWORDS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Manager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Manager_obj::cnx,"cnx");
	HX_VISIT_MEMBER_NAME(Manager_obj::lockMode,"lockMode");
	HX_VISIT_MEMBER_NAME(Manager_obj::cache_field,"cache_field");
	HX_VISIT_MEMBER_NAME(Manager_obj::object_cache,"object_cache");
	HX_VISIT_MEMBER_NAME(Manager_obj::init_list,"init_list");
	HX_VISIT_MEMBER_NAME(Manager_obj::KEYWORDS,"KEYWORDS");
};

#endif

hx::Class Manager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00"),
	HX_HCSTRING("lockMode","\xee","\x6c","\x85","\x8d"),
	HX_HCSTRING("cache_field","\xbd","\x93","\x87","\xe6"),
	HX_HCSTRING("object_cache","\x82","\x79","\x71","\xe2"),
	HX_HCSTRING("init_list","\x2d","\xe3","\x28","\x83"),
	HX_HCSTRING("KEYWORDS","\x6a","\x55","\x26","\xd9"),
	HX_HCSTRING("set_cnx","\x10","\xd9","\xc1","\x19"),
	HX_HCSTRING("getFieldName","\xaf","\xb4","\xa4","\xef"),
	HX_HCSTRING("nullCompare","\xde","\x90","\x75","\xb1"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("cleanup","\x24","\x0c","\x42","\xab"),
	HX_HCSTRING("quoteAny","\x10","\x3d","\xa0","\xaf"),
	HX_HCSTRING("quoteList","\xba","\xb9","\xd6","\x03"),
	HX_HCSTRING("__depends","\x67","\x7a","\xb3","\xe1"),
	::String(null()) };

void Manager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db.Manager","\x1e","\x8b","\x71","\x22");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Manager_obj::__GetStatic;
	__mClass->mSetStaticField = &Manager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Manager_obj >;
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

void Manager_obj::__boot()
{
	cache_field= HX_HCSTRING("__cache__","\xc2","\xd2","\x6f","\xa4");
	object_cache= ::haxe::ds::StringMap_obj::__new();
	init_list= ::List_obj::__new();
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",43,0xacbc7d07)
		{
			HX_STACK_LINE(44)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(44)
			::haxe::ds::StringMap h = tmp;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(45)
				Array< ::String > _g1 = HX_HCSTRING("ADD|ALL|ALTER|ANALYZE|AND|AS|ASC|ASENSITIVE|BEFORE|BETWEEN|BIGINT|BINARY|BLOB|BOTH|BY|CALL|CASCADE|CASE|CHANGE|CHAR|CHARACTER|CHECK|COLLATE|COLUMN|CONDITION|CONSTRAINT|CONTINUE|CONVERT|CREATE|CROSS|CURRENT_DATE|CURRENT_TIME|CURRENT_TIMESTAMP|CURRENT_USER|CURSOR|DATABASE|DATABASES|DAY_HOUR|DAY_MICROSECOND|DAY_MINUTE|DAY_SECOND|DEC|DECIMAL|DECLARE|DEFAULT|DELAYED|DELETE|DESC|DESCRIBE|DETERMINISTIC|DISTINCT|DISTINCTROW|DIV|DOUBLE|DROP|DUAL|EACH|ELSE|ELSEIF|ENCLOSED|ESCAPED|EXISTS|EXIT|EXPLAIN|FALSE|FETCH|FLOAT|FLOAT4|FLOAT8|FOR|FORCE|FOREIGN|FROM|FULLTEXT|GRANT|GROUP|HAVING|HIGH_PRIORITY|HOUR_MICROSECOND|HOUR_MINUTE|HOUR_SECOND|IF|IGNORE|IN|INDEX|INFILE|INNER|INOUT|INSENSITIVE|INSERT|INT|INT1|INT2|INT3|INT4|INT8|INTEGER|INTERVAL|INTO|IS|ITERATE|JOIN|KEY|KEYS|KILL|LEADING|LEAVE|LEFT|LIKE|LIMIT|LINES|LOAD|LOCALTIME|LOCALTIMESTAMP|LOCK|LONG|LONGBLOB|LONGTEXT|LOOP|LOW_PRIORITY|MATCH|MEDIUMBLOB|MEDIUMINT|MEDIUMTEXT|MIDDLEINT|MINUTE_MICROSECOND|MINUTE_SECOND|MOD|MODIFIES|NATURAL|NOT|NO_WRITE_TO_BINLOG|NULL|NUMERIC|ON|OPTIMIZE|OPTION|OPTIONALLY|OR|ORDER|OUT|OUTER|OUTFILE|PRECISION|PRIMARY|PROCEDURE|PURGE|READ|READS|REAL|REFERENCES|REGEXP|RELEASE|RENAME|REPEAT|REPLACE|REQUIRE|RESTRICT|RETURN|REVOKE|RIGHT|RLIKE|SCHEMA|SCHEMAS|SECOND_MICROSECOND|SELECT|SENSITIVE|SEPARATOR|SET|SHOW|SMALLINT|SONAME|SPATIAL|SPECIFIC|SQL|SQLEXCEPTION|SQLSTATE|SQLWARNING|SQL_BIG_RESULT|SQL_CALC_FOUND_ROWS|SQL_SMALL_RESULT|SSL|STARTING|STRAIGHT_JOIN|TABLE|TERMINATED|THEN|TINYBLOB|TINYINT|TINYTEXT|TO|TRAILING|TRIGGER|TRUE|UNDO|UNION|UNIQUE|UNLOCK|UNSIGNED|UPDATE|USAGE|USE|USING|UTC_DATE|UTC_TIME|UTC_TIMESTAMP|VALUES|VARBINARY|VARCHAR|VARCHARACTER|VARYING|WHEN|WHERE|WHILE|WITH|WRITE|XOR|YEAR_MONTH|ZEROFILL|ASENSITIVE|CALL|CONDITION|CONNECTION|CONTINUE|CURSOR|DECLARE|DETERMINISTIC|EACH|ELSEIF|EXIT|FETCH|GOTO|INOUT|INSENSITIVE|ITERATE|LABEL|LEAVE|LOOP|MODIFIES|OUT|READS|RELEASE|REPEAT|RETURN|SCHEMA|SCHEMAS|SENSITIVE|SPECIFIC|SQL|SQLEXCEPTION|SQLSTATE|SQLWARNING|TRIGGER|UNDO|UPGRADE|WHILE","\xcc","\xf6","\x6e","\x2e").split(HX_HCSTRING("|","\x7c","\x00","\x00","\x00"));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(45)
				while((true)){
					HX_STACK_LINE(45)
					bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(45)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(45)
					if ((tmp2)){
						HX_STACK_LINE(45)
						break;
					}
					HX_STACK_LINE(45)
					::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(45)
					::String k = tmp3;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(45)
					++(_g);
					HX_STACK_LINE(46)
					::String tmp4 = k.toLowerCase();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(46)
					h->set(tmp4,true);
				}
			}
			HX_STACK_LINE(47)
			return h;
		}
		return null();
	}
};
	KEYWORDS= _Function_0_1::Block();
}

} // end namespace sys
} // end namespace db
