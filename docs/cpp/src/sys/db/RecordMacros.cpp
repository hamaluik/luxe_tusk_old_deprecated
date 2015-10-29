#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_macro_Binop
#include <haxe/macro/Binop.h>
#endif
#ifndef INCLUDED_haxe_macro_ComplexType
#include <haxe/macro/ComplexType.h>
#endif
#ifndef INCLUDED_haxe_macro_Constant
#include <haxe/macro/Constant.h>
#endif
#ifndef INCLUDED_haxe_macro_ExprDef
#include <haxe/macro/ExprDef.h>
#endif
#ifndef INCLUDED_haxe_macro_FieldKind
#include <haxe/macro/FieldKind.h>
#endif
#ifndef INCLUDED_haxe_macro_Type
#include <haxe/macro/Type.h>
#endif
#ifndef INCLUDED_haxe_macro_TypeParam
#include <haxe/macro/TypeParam.h>
#endif
#ifndef INCLUDED_haxe_macro_Unop
#include <haxe/macro/Unop.h>
#endif
#ifndef INCLUDED_haxe_macro_VarAccess
#include <haxe/macro/VarAccess.h>
#endif
#ifndef INCLUDED_sys_db_Manager
#include <sys/db/Manager.h>
#endif
#ifndef INCLUDED_sys_db_RecordMacros
#include <sys/db/RecordMacros.h>
#endif
#ifndef INCLUDED_sys_db_RecordType
#include <sys/db/RecordType.h>
#endif
namespace sys{
namespace db{

Void RecordMacros_obj::__construct(Dynamic c)
{
HX_STACK_FRAME("sys.db.RecordMacros","new",0xf9c1de79,"sys.db.RecordMacros.new","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",53,0x502e5710)
HX_STACK_THIS(this)
HX_STACK_ARG(c,"c")
{
	HX_STACK_LINE(54)
	Dynamic tmp = ::sys::db::RecordMacros_obj::GLOBAL;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	if ((tmp1)){
		HX_STACK_LINE(55)
		Dynamic tmp2 = ::sys::db::RecordMacros_obj::GLOBAL;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		this->g = tmp2;
	}
	else{
		HX_STACK_LINE(57)
		Dynamic tmp2 = this->initGlobals();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		this->g = tmp2;
		HX_STACK_LINE(58)
		Dynamic tmp3 = this->g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		::sys::db::RecordMacros_obj::GLOBAL = tmp3;
	}
	HX_STACK_LINE(60)
	Dynamic tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	Dynamic tmp3 = this->getRecordInfos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	this->inf = tmp3;
}
;
	return null();
}

//RecordMacros_obj::~RecordMacros_obj() { }

Dynamic RecordMacros_obj::__CreateEmpty() { return  new RecordMacros_obj; }
hx::ObjectPtr< RecordMacros_obj > RecordMacros_obj::__new(Dynamic c)
{  hx::ObjectPtr< RecordMacros_obj > _result_ = new RecordMacros_obj();
	_result_->__construct(c);
	return _result_;}

Dynamic RecordMacros_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RecordMacros_obj > _result_ = new RecordMacros_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic RecordMacros_obj::initGlobals( ){
	HX_STACK_FRAME("sys.db.RecordMacros","initGlobals",0xb162c399,"sys.db.RecordMacros.initGlobals","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",64,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	::haxe::ds::StringMap cache = tmp;		HX_STACK_VAR(cache,"cache");
	HX_STACK_LINE(66)
	::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	::haxe::ds::StringMap types = tmp1;		HX_STACK_VAR(types,"types");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		Array< ::String > _g1 = ::Type_obj::getEnumConstructs(hx::ClassOf< ::sys::db::RecordType >());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(67)
		while((true)){
			HX_STACK_LINE(67)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			if ((tmp3)){
				HX_STACK_LINE(67)
				break;
			}
			HX_STACK_LINE(67)
			::String tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			::String c = tmp4;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(67)
			++(_g);
			HX_STACK_LINE(68)
			::String tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			Dynamic tmp6 = ::Reflect_obj::field(hx::ClassOf< ::sys::db::RecordType >(),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(68)
			Dynamic e = tmp6;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(69)
			Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::sys::db::RecordType >());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(69)
			if ((tmp8)){
				HX_STACK_LINE(70)
				::String tmp9 = c.substr((int)1,null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(70)
				::String tmp10 = (HX_HCSTRING("S","\x53","\x00","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(70)
				Dynamic tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(70)
				types->set(tmp10,tmp11);
			}
		}
	}
	HX_STACK_LINE(72)
	types->remove(HX_HCSTRING("SNull","\x7a","\xf0","\x29","\xfe"));
	HX_STACK_LINE(73)
	::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	::haxe::ds::StringMap functions = tmp2;		HX_STACK_VAR(functions,"functions");
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",75,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("now","\x16","\xd9","\x53","\x00"),false);
					__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , Array_obj< ::Dynamic >::__new(),false);
					__result->Add(HX_HCSTRING("ret","\x61","\xd9","\x56","\x00") , ::sys::db::RecordType_obj::DDateTime,false);
					__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , HX_HCSTRING("NOW($)","\x77","\x02","\x1e","\xe6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(75)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_2_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",76,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("curDate","\xce","\xc7","\x78","\xad"),false);
					__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , Array_obj< ::Dynamic >::__new(),false);
					__result->Add(HX_HCSTRING("ret","\x61","\xd9","\x56","\x00") , ::sys::db::RecordType_obj::DDate,false);
					__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , HX_HCSTRING("CURDATE($)","\xdf","\xb6","\x16","\x44"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(76)
		Dynamic tmp4 = _Function_2_2::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_2_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",77,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("seconds","\x7f","\xb6","\x8d","\x5a"),false);
					__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , Array_obj< ::Dynamic >::__new().Add(::sys::db::RecordType_obj::DFloat),false);
					__result->Add(HX_HCSTRING("ret","\x61","\xd9","\x56","\x00") , ::sys::db::RecordType_obj::DInterval,false);
					__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , HX_HCSTRING("INTERVAL $ SECOND","\x2b","\xa6","\xc5","\x52"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(77)
		Dynamic tmp5 = _Function_2_3::Block();		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_2_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",78,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("minutes","\x1f","\x97","\xde","\x53"),false);
					__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , Array_obj< ::Dynamic >::__new().Add(::sys::db::RecordType_obj::DFloat),false);
					__result->Add(HX_HCSTRING("ret","\x61","\xd9","\x56","\x00") , ::sys::db::RecordType_obj::DInterval,false);
					__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , HX_HCSTRING("INTERVAL $ MINUTE","\x8b","\xb9","\x85","\x41"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(78)
		Dynamic tmp6 = _Function_2_4::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_2_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",79,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("hours","\xcf","\x2e","\x64","\x2b"),false);
					__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , Array_obj< ::Dynamic >::__new().Add(::sys::db::RecordType_obj::DFloat),false);
					__result->Add(HX_HCSTRING("ret","\x61","\xd9","\x56","\x00") , ::sys::db::RecordType_obj::DInterval,false);
					__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , HX_HCSTRING("INTERVAL $ HOUR","\x1b","\xd8","\x07","\x07"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(79)
		Dynamic tmp7 = _Function_2_5::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_2_6{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",80,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("days","\x97","\x5a","\x63","\x42"),false);
					__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , Array_obj< ::Dynamic >::__new().Add(::sys::db::RecordType_obj::DFloat),false);
					__result->Add(HX_HCSTRING("ret","\x61","\xd9","\x56","\x00") , ::sys::db::RecordType_obj::DInterval,false);
					__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , HX_HCSTRING("INTERVAL $ DAY","\x25","\xdf","\x2a","\x01"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(80)
		Dynamic tmp8 = _Function_2_6::Block();		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_2_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",81,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("months","\x33","\x91","\x6e","\xc7"),false);
					__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , Array_obj< ::Dynamic >::__new().Add(::sys::db::RecordType_obj::DFloat),false);
					__result->Add(HX_HCSTRING("ret","\x61","\xd9","\x56","\x00") , ::sys::db::RecordType_obj::DInterval,false);
					__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , HX_HCSTRING("INTERVAL $ MONTH","\x49","\xd8","\xd0","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(81)
		Dynamic tmp9 = _Function_2_7::Block();		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_2_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",82,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("years","\x16","\xbc","\x88","\xee"),false);
					__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , Array_obj< ::Dynamic >::__new().Add(::sys::db::RecordType_obj::DFloat),false);
					__result->Add(HX_HCSTRING("ret","\x61","\xd9","\x56","\x00") , ::sys::db::RecordType_obj::DInterval,false);
					__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , HX_HCSTRING("INTERVAL $ YEAR","\xb4","\xd0","\x3c","\x12"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(82)
		Dynamic tmp10 = _Function_2_8::Block();		HX_STACK_VAR(tmp10,"tmp10");
		struct _Function_2_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",83,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("date","\x2e","\x56","\x63","\x42"),false);
					__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , Array_obj< ::Dynamic >::__new().Add(::sys::db::RecordType_obj::DDateTime),false);
					__result->Add(HX_HCSTRING("ret","\x61","\xd9","\x56","\x00") , ::sys::db::RecordType_obj::DDate,false);
					__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , HX_HCSTRING("DATE($)","\x3f","\xec","\x48","\x94"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(83)
		Dynamic tmp11 = _Function_2_9::Block();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(74)
		cpp::ArrayBase _g1 = cpp::ArrayBase_obj::__new().Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp8).Add(tmp9).Add(tmp10).Add(tmp11);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		while((true)){
			HX_STACK_LINE(74)
			bool tmp12 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(74)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(74)
			if ((tmp13)){
				HX_STACK_LINE(74)
				break;
			}
			HX_STACK_LINE(74)
			Dynamic tmp14 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(74)
			Dynamic f = tmp14;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(74)
			++(_g);
			HX_STACK_LINE(85)
			::String tmp15 = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(85)
			Dynamic tmp16 = f;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(85)
			functions->set(tmp15,tmp16);
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::ds::StringMap &functions,::haxe::ds::StringMap &cache,::haxe::ds::StringMap &types){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",86,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41") , cache,false);
				__result->Add(HX_HCSTRING("types","\x79","\x70","\xcb","\x1a") , types,false);
				__result->Add(HX_HCSTRING("functions","\x5b","\x0a","\x03","\xb4") , functions,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(86)
	Dynamic tmp3 = _Function_1_1::Block(functions,cache,types);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(86)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(RecordMacros_obj,initGlobals,return )

HX_BEGIN_DEFAULT_FUNC(__default_error,RecordMacros_obj)
Dynamic run(::String msg,Dynamic pos){
	HX_STACK_FRAME("sys.db.RecordMacros","error",0x2eca5221,"sys.db.RecordMacros.error","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",89,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(msg,"msg")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(93)
	::String tmp = msg;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	HX_STACK_DO_THROW(tmp);
	HX_STACK_LINE(95)
	return null();
}
HX_END_LOCAL_FUNC2(return )
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default__typeof,RecordMacros_obj)
::haxe::macro::Type run(Dynamic e){
	HX_STACK_FRAME("sys.db.RecordMacros","typeof",0xc80bfdd8,"sys.db.RecordMacros.typeof","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",98,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(102)
	HX_STACK_DO_THROW(HX_HCSTRING("not implemented","\x35","\x16","\xa6","\xd3"));
	HX_STACK_LINE(103)
	return null();
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_follow,RecordMacros_obj)
::haxe::macro::Type run(::haxe::macro::Type t,Dynamic once){
	HX_STACK_FRAME("sys.db.RecordMacros","follow",0x6a6b98f8,"sys.db.RecordMacros.follow","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",107,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(once,"once")
	HX_STACK_LINE(111)
	HX_STACK_DO_THROW(HX_HCSTRING("not implemented","\x35","\x16","\xa6","\xd3"));
	HX_STACK_LINE(112)
	return null();
}
HX_END_LOCAL_FUNC2(return )
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_getManager,RecordMacros_obj)
::sys::db::RecordMacros run(::haxe::macro::Type t,Dynamic p){
	HX_STACK_FRAME("sys.db.RecordMacros","getManager",0xeb9fef7e,"sys.db.RecordMacros.getManager","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",116,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(120)
	HX_STACK_DO_THROW(HX_HCSTRING("not implemented","\x35","\x16","\xa6","\xd3"));
	HX_STACK_LINE(121)
	return null();
}
HX_END_LOCAL_FUNC2(return )
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_resolveType,RecordMacros_obj)
::haxe::macro::Type run(::String name,::String module){
	HX_STACK_FRAME("sys.db.RecordMacros","resolveType",0xcd0366df,"sys.db.RecordMacros.resolveType","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",125,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(module,"module")
	HX_STACK_LINE(139)
	HX_STACK_DO_THROW(HX_HCSTRING("not implemented","\x35","\x16","\xa6","\xd3"));
	HX_STACK_LINE(140)
	return null();
}
HX_END_LOCAL_FUNC2(return )
HX_END_DEFAULT_FUNC

Dynamic RecordMacros_obj::makeInt( ::haxe::macro::Type t){
	HX_STACK_FRAME("sys.db.RecordMacros","makeInt",0xa5ad823a,"sys.db.RecordMacros.makeInt","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",144,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(145)
	switch( (int)(t->__Index())){
		case (int)2: {
			HX_STACK_LINE(145)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(145)
			Dynamic c = tmp;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(147)
				::String tmp1 = c->toString();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(147)
				::String name = tmp1;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(148)
				::String tmp2 = name.charAt((int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(148)
				bool tmp3 = (tmp2 == HX_HCSTRING("I","\x49","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(148)
				if ((tmp3)){
					HX_STACK_LINE(149)
					::String tmp4 = name.substr((int)1,null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(149)
					Dynamic tmp5 = ::Std_obj::parseInt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(149)
					return tmp5;
				}
			}
		}
		;break;
		default: {
		}
	}
	HX_STACK_LINE(152)
	::haxe::macro::Type tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	::String tmp2 = (HX_HCSTRING("Unsupported ","\xeb","\x1d","\xa5","\x87") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	HX_STACK_DO_THROW(tmp2);
	HX_STACK_LINE(152)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,makeInt,return )

Dynamic RecordMacros_obj::makeRecord( ::haxe::macro::Type t){
	HX_STACK_FRAME("sys.db.RecordMacros","makeRecord",0xd8392226,"sys.db.RecordMacros.makeRecord","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",155,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(156)
	switch( (int)(t->__Index())){
		case (int)2: {
			HX_STACK_LINE(156)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(156)
			Dynamic c = tmp;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(157)
			{
				HX_STACK_LINE(158)
				::String tmp1 = c->toString();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(158)
				::String name = tmp1;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(159)
				Dynamic tmp2 = c->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(159)
				Dynamic cl = tmp2;		HX_STACK_VAR(cl,"cl");
				HX_STACK_LINE(160)
				Dynamic csup = cl->__Field(HX_HCSTRING("superClass","\xbd","\xa8","\x07","\xa8"), hx::paccDynamic );		HX_STACK_VAR(csup,"csup");
				HX_STACK_LINE(161)
				while((true)){
					HX_STACK_LINE(161)
					bool tmp3 = (csup != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(161)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(161)
					if ((tmp4)){
						HX_STACK_LINE(161)
						break;
					}
					HX_STACK_LINE(162)
					::String tmp5 = csup->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic )->toString();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(162)
					bool tmp6 = (tmp5 == HX_HCSTRING("sys.db.Object","\x2e","\xe7","\x8a","\xe8"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(162)
					if ((tmp6)){
						HX_STACK_LINE(163)
						Dynamic tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(163)
						return tmp7;
					}
					HX_STACK_LINE(164)
					Dynamic tmp7 = csup->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(164)
					csup = tmp7->__Field(HX_HCSTRING("superClass","\xbd","\xa8","\x07","\xa8"), hx::paccDynamic );
				}
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(156)
			Array< ::Dynamic > p = (::haxe::macro::Type(t))->__Param(1);		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(156)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(156)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(166)
			{
				HX_STACK_LINE(167)
				::String tmp1 = t1->toString();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(167)
				::String name = tmp1;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(168)
				bool tmp2 = (p->length == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(168)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(168)
				if ((tmp2)){
					HX_STACK_LINE(168)
					bool tmp4 = (name == HX_HCSTRING("Null","\xa7","\xca","\xe7","\x33"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(168)
					bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(168)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(168)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(168)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(168)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(168)
					if ((tmp9)){
						HX_STACK_LINE(168)
						tmp3 = (name == HX_HCSTRING("sys.db.SNull","\x0b","\x3b","\x74","\x60"));
					}
					else{
						HX_STACK_LINE(168)
						tmp3 = true;
					}
				}
				else{
					HX_STACK_LINE(168)
					tmp3 = false;
				}
				HX_STACK_LINE(168)
				if ((tmp3)){
					HX_STACK_LINE(169)
					this->isNull = true;
					HX_STACK_LINE(170)
					::haxe::macro::Type tmp4 = p->__get((int)0).StaticCast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(170)
					Dynamic tmp5 = this->makeRecord(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(170)
					return tmp5;
				}
			}
		}
		;break;
		default: {
		}
	}
	HX_STACK_LINE(174)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,makeRecord,return )

Array< ::String > RecordMacros_obj::getFlags( ::haxe::macro::Type t){
	HX_STACK_FRAME("sys.db.RecordMacros","getFlags",0x782e7218,"sys.db.RecordMacros.getFlags","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",178,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(178)
	switch( (int)(t->__Index())){
		case (int)1: {
			HX_STACK_LINE(178)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(178)
			Dynamic e = tmp;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(180)
				Dynamic tmp1 = e->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(180)
				Array< ::String > cl = tmp1->__Field(HX_HCSTRING("names","\xc8","\x8f","\x84","\x96"), hx::paccDynamic );		HX_STACK_VAR(cl,"cl");
				HX_STACK_LINE(181)
				bool tmp2 = (cl->length > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(181)
				if ((tmp2)){
					HX_STACK_LINE(182)
					::String tmp3 = cl->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(182)
					::String prefix = tmp3;		HX_STACK_VAR(prefix,"prefix");
					HX_STACK_LINE(183)
					{
						HX_STACK_LINE(183)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(183)
						while((true)){
							HX_STACK_LINE(183)
							bool tmp4 = (_g < cl->length);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(183)
							bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(183)
							if ((tmp5)){
								HX_STACK_LINE(183)
								break;
							}
							HX_STACK_LINE(183)
							::String tmp6 = cl->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(183)
							::String c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(183)
							++(_g);
							HX_STACK_LINE(184)
							while((true)){
								HX_STACK_LINE(184)
								bool tmp7 = (prefix.length > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(184)
								bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(184)
								if ((tmp7)){
									HX_STACK_LINE(184)
									int tmp9 = prefix.length;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(184)
									int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(184)
									::String tmp11 = c.substr((int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(184)
									::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(184)
									::String tmp13 = prefix;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(184)
									tmp8 = (tmp12 != tmp13);
								}
								else{
									HX_STACK_LINE(184)
									tmp8 = false;
								}
								HX_STACK_LINE(184)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(184)
								if ((tmp9)){
									HX_STACK_LINE(184)
									break;
								}
								HX_STACK_LINE(185)
								::String tmp10 = prefix.substr((int)0,(int)-1);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(185)
								prefix = tmp10;
							}
						}
					}
					HX_STACK_LINE(186)
					{
						HX_STACK_LINE(186)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(186)
						int _g = cl->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(186)
						while((true)){
							HX_STACK_LINE(186)
							bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(186)
							bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(186)
							if ((tmp5)){
								HX_STACK_LINE(186)
								break;
							}
							HX_STACK_LINE(186)
							int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(186)
							int i = tmp6;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(187)
							::String tmp7 = cl->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(187)
							int tmp8 = prefix.length;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(187)
							::String tmp9 = tmp7.substr(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(187)
							cl[i] = tmp9;
						}
					}
				}
				HX_STACK_LINE(189)
				bool tmp3 = (cl->length > (int)31);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(189)
				if ((tmp3)){
					HX_STACK_LINE(189)
					HX_STACK_DO_THROW(HX_HCSTRING("Too many flags","\x32","\x6b","\x9b","\x93"));
				}
				HX_STACK_LINE(190)
				return cl;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(192)
			HX_STACK_DO_THROW(HX_HCSTRING("Flags parameter should be an enum","\xd4","\x31","\x84","\x3d"));
		}
	}
	HX_STACK_LINE(178)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,getFlags,return )

::sys::db::RecordType RecordMacros_obj::makeType( ::haxe::macro::Type t){
	HX_STACK_FRAME("sys.db.RecordMacros","makeType",0x59721f0f,"sys.db.RecordMacros.makeType","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",196,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(197)
	switch( (int)(t->__Index())){
		case (int)2: {
			HX_STACK_LINE(197)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(197)
			Dynamic c = tmp;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(198)
			{
				HX_STACK_LINE(199)
				::String tmp1 = c->toString();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(199)
				::String name = tmp1;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(200)
				::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(200)
				::sys::db::RecordType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(200)
				::String _switch_1 = (tmp2);
				if (  ( _switch_1==HX_HCSTRING("Int","\xcf","\xc4","\x37","\x00"))){
					HX_STACK_LINE(201)
					tmp3 = ::sys::db::RecordType_obj::DInt;
				}
				else if (  ( _switch_1==HX_HCSTRING("Float","\x7c","\x35","\xc4","\x95"))){
					HX_STACK_LINE(202)
					tmp3 = ::sys::db::RecordType_obj::DFloat;
				}
				else if (  ( _switch_1==HX_HCSTRING("String","\xf1","\x9c","\xc4","\x45"))){
					HX_STACK_LINE(203)
					tmp3 = ::sys::db::RecordType_obj::DText;
				}
				else if (  ( _switch_1==HX_HCSTRING("Date","\x4e","\x82","\x3c","\x2d"))){
					HX_STACK_LINE(204)
					tmp3 = ::sys::db::RecordType_obj::DDateTime;
				}
				else if (  ( _switch_1==HX_HCSTRING("haxe.io.Bytes","\x0b","\x53","\x6f","\x9f"))){
					HX_STACK_LINE(205)
					tmp3 = ::sys::db::RecordType_obj::DBinary;
				}
				else  {
					HX_STACK_LINE(206)
					::String tmp4 = (HX_HCSTRING("Unsupported Record Type ","\xc2","\xc3","\xd7","\xab") + name);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(206)
					HX_STACK_DO_THROW(tmp4);
				}
;
;
				HX_STACK_LINE(200)
				return tmp3;
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(197)
			Array< ::Dynamic > p = (::haxe::macro::Type(t))->__Param(1);		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(197)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(197)
			Dynamic a = tmp;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(208)
			{
				HX_STACK_LINE(209)
				::String tmp1 = a->toString();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(209)
				::String name = tmp1;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(210)
				::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(210)
				::sys::db::RecordType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(210)
				::String _switch_2 = (tmp2);
				if (  ( _switch_2==HX_HCSTRING("Int","\xcf","\xc4","\x37","\x00"))){
					HX_STACK_LINE(211)
					tmp3 = ::sys::db::RecordType_obj::DInt;
				}
				else if (  ( _switch_2==HX_HCSTRING("Float","\x7c","\x35","\xc4","\x95"))){
					HX_STACK_LINE(212)
					tmp3 = ::sys::db::RecordType_obj::DFloat;
				}
				else if (  ( _switch_2==HX_HCSTRING("Bool","\x4a","\xb0","\xf4","\x2b"))){
					HX_STACK_LINE(213)
					tmp3 = ::sys::db::RecordType_obj::DBool;
				}
				else  {
					HX_STACK_LINE(214)
					Dynamic tmp4 = a->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(214)
					bool tmp5 = tmp4->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"), hx::paccDynamic )(HX_HCSTRING(":coreType","\xf3","\x41","\x0c","\xe5"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(214)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(214)
					if ((tmp6)){
						HX_STACK_LINE(215)
						Dynamic tmp7 = a->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(215)
						Dynamic a1 = tmp7;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(219)
						::haxe::macro::Type tmp8 = a1->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(219)
						tmp3 = this->makeType(tmp8);
					}
					else{
						HX_STACK_LINE(221)
						::String tmp7 = (HX_HCSTRING("Unsupported Record Type ","\xc2","\xc3","\xd7","\xab") + name);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(221)
						HX_STACK_DO_THROW(tmp7);
					}
				}
;
;
				HX_STACK_LINE(210)
				return tmp3;
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(197)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(197)
			Dynamic e = tmp;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(224)
				::String tmp1 = e->toString();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(224)
				::String name = tmp1;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(225)
				::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(225)
				::sys::db::RecordType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(225)
				::String _switch_3 = (tmp2);
				if (  ( _switch_3==HX_HCSTRING("Bool","\x4a","\xb0","\xf4","\x2b"))){
					HX_STACK_LINE(226)
					tmp3 = ::sys::db::RecordType_obj::DBool;
				}
				else  {
					HX_STACK_LINE(228)
					::String tmp4 = (HX_HCSTRING("Unsupported Record Type ","\xc2","\xc3","\xd7","\xab") + name);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(228)
					::String tmp5 = (tmp4 + HX_HCSTRING(" (enums must be wrapped with SData or SEnum)","\xec","\x1b","\xd3","\x12"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(228)
					HX_STACK_DO_THROW(tmp5);
				}
;
;
				HX_STACK_LINE(225)
				return tmp3;
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(197)
			Array< ::Dynamic > p = (::haxe::macro::Type(t))->__Param(1);		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(197)
			Dynamic tmp = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(197)
			Dynamic td = tmp;		HX_STACK_VAR(td,"td");
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(231)
				::String tmp1 = td->toString();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(231)
				::String name = tmp1;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(232)
				::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(232)
				bool tmp3 = ::StringTools_obj::startsWith(tmp2,HX_HCSTRING("sys.db.","\x0f","\xbf","\x1b","\x65"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(232)
				if ((tmp3)){
					HX_STACK_LINE(233)
					::String tmp4 = name.substr((int)7,null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(233)
					name = tmp4;
				}
				HX_STACK_LINE(234)
				Dynamic tmp4 = this->g;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(234)
				::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(234)
				::sys::db::RecordType tmp6 = tmp4->__Field(HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(234)
				::sys::db::RecordType k = tmp6;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(235)
				bool tmp7 = (k != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(235)
				if ((tmp7)){
					HX_STACK_LINE(235)
					::sys::db::RecordType tmp8 = k;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(235)
					return tmp8;
				}
				HX_STACK_LINE(236)
				bool tmp8 = (p->length == (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(236)
				if ((tmp8)){
					HX_STACK_LINE(237)
					::String tmp9 = name;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(237)
					::String _switch_4 = (tmp9);
					if (  ( _switch_4==HX_HCSTRING("SString","\x84","\x1d","\x3a","\xc1"))){
						HX_STACK_LINE(238)
						::haxe::macro::Type tmp10 = p->__get((int)0).StaticCast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(238)
						Dynamic tmp11 = this->makeInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(238)
						::sys::db::RecordType tmp12 = ::sys::db::RecordType_obj::DString(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(238)
						return tmp12;
					}
					else if (  ( _switch_4==HX_HCSTRING("SBytes","\x18","\x6b","\x64","\x80"))){
						HX_STACK_LINE(239)
						::haxe::macro::Type tmp10 = p->__get((int)0).StaticCast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(239)
						Dynamic tmp11 = this->makeInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(239)
						::sys::db::RecordType tmp12 = ::sys::db::RecordType_obj::DBytes(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(239)
						return tmp12;
					}
					else if (  ( _switch_4==HX_HCSTRING("SNull","\x7a","\xf0","\x29","\xfe")) ||  ( _switch_4==HX_HCSTRING("Null","\xa7","\xca","\xe7","\x33"))){
						HX_STACK_LINE(240)
						this->isNull = true;
						HX_STACK_LINE(240)
						::haxe::macro::Type tmp10 = p->__get((int)0).StaticCast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(240)
						::sys::db::RecordType tmp11 = this->makeType(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(240)
						return tmp11;
					}
					else if (  ( _switch_4==HX_HCSTRING("SFlags","\xf4","\x8d","\x58","\xc5"))){
						HX_STACK_LINE(241)
						::haxe::macro::Type tmp10 = p->__get((int)0).StaticCast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(241)
						::sys::db::RecordType tmp11 = ::sys::db::RecordType_obj::DFlags(this->getFlags(tmp10),false);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(241)
						return tmp11;
					}
					else if (  ( _switch_4==HX_HCSTRING("SSmallFlags","\x33","\x43","\x7b","\xec"))){
						HX_STACK_LINE(242)
						::haxe::macro::Type tmp10 = p->__get((int)0).StaticCast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(242)
						::sys::db::RecordType tmp11 = ::sys::db::RecordType_obj::DFlags(this->getFlags(tmp10),true);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(242)
						return tmp11;
					}
					else if (  ( _switch_4==HX_HCSTRING("SData","\x1d","\xa8","\x7e","\xf7"))){
						HX_STACK_LINE(243)
						return ::sys::db::RecordType_obj::DData;
					}
					else if (  ( _switch_4==HX_HCSTRING("SEnum","\xf4","\xbc","\x31","\xf8"))){
						HX_STACK_LINE(245)
						{
							HX_STACK_LINE(245)
							::haxe::macro::Type tmp10 = p->__get((int)0).StaticCast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(245)
							::haxe::macro::Type _g = tmp10;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(245)
							switch( (int)(_g->__Index())){
								case (int)1: {
									HX_STACK_LINE(245)
									Dynamic tmp11 = (::haxe::macro::Type(_g))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(245)
									Dynamic en = tmp11;		HX_STACK_VAR(en,"en");
									HX_STACK_LINE(246)
									{
										HX_STACK_LINE(247)
										Dynamic tmp12 = en->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(247)
										Dynamic e = tmp12;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(248)
										int count = (int)0;		HX_STACK_VAR(count,"count");
										HX_STACK_LINE(248)
										bool hasParam = false;		HX_STACK_VAR(hasParam,"hasParam");
										HX_STACK_LINE(249)
										Dynamic tmp13 = e->__Field(HX_HCSTRING("constructs","\x7c","\xbc","\xff","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(249)
										for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp13);  __it->hasNext(); ){
											Dynamic c = __it->next();
											{
												HX_STACK_LINE(250)
												(count)++;
												HX_STACK_LINE(251)
												{
													HX_STACK_LINE(251)
													::haxe::macro::Type _g1 = c->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(251)
													switch( (int)(_g1->__Index())){
														case (int)4: {
															HX_STACK_LINE(253)
															hasParam = true;
														}
														;break;
														default: {
														}
													}
												}
											}
;
										}
										HX_STACK_LINE(257)
										bool tmp14 = hasParam;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(257)
										if ((tmp14)){
											HX_STACK_LINE(258)
											HX_STACK_DO_THROW(HX_HCSTRING("You can't use SEnum if the enum have parameters, try SData instead","\x7a","\x40","\x82","\xd7"));
										}
										HX_STACK_LINE(259)
										bool tmp15 = (count >= (int)256);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(259)
										if ((tmp15)){
											HX_STACK_LINE(260)
											HX_STACK_DO_THROW(HX_HCSTRING("Too many enum constructors","\x23","\xdb","\xa6","\xfa"));
										}
										HX_STACK_LINE(261)
										::String tmp16 = en->toString();		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(261)
										::sys::db::RecordType tmp17 = ::sys::db::RecordType_obj::DEnum(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(261)
										return tmp17;
									}
								}
								;break;
								default: {
								}
							}
						}
					}
					else  {
					}
;
;
				}
				HX_STACK_LINE(267)
				::haxe::macro::Type tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(267)
				::haxe::macro::Type tmp10 = this->follow(tmp9,true);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(267)
				::sys::db::RecordType tmp11 = this->makeType(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(267)
				return tmp11;
			}
		}
		;break;
		default: {
		}
	}
	HX_STACK_LINE(270)
	::haxe::macro::Type tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	::String tmp2 = (HX_HCSTRING("Unsupported Record Type ","\xc2","\xc3","\xd7","\xab") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(270)
	HX_STACK_DO_THROW(tmp2);
	HX_STACK_LINE(270)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,makeType,return )

::String RecordMacros_obj::makeIdent( Dynamic e){
	HX_STACK_FRAME("sys.db.RecordMacros","makeIdent",0x8716e0fb,"sys.db.RecordMacros.makeIdent","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",273,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(274)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	{
		HX_STACK_LINE(274)
		::haxe::macro::ExprDef _g = e->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(274)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(274)
				::haxe::macro::Constant tmp1 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(274)
				::haxe::macro::Constant c = tmp1;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(276)
				switch( (int)(c->__Index())){
					case (int)3: {
						HX_STACK_LINE(276)
						::String tmp2 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(276)
						::String s = tmp2;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(277)
						tmp = s;
					}
					;break;
					default: {
						HX_STACK_LINE(278)
						Dynamic tmp2 = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(278)
						tmp = this->error(HX_HCSTRING("Identifier expected","\xef","\x28","\x40","\x15"),tmp2);
					}
				}
			}
			;break;
			default: {
				HX_STACK_LINE(280)
				Dynamic tmp1 = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(280)
				tmp = this->error(HX_HCSTRING("Identifier expected","\xef","\x28","\x40","\x15"),tmp1);
			}
		}
	}
	HX_STACK_LINE(274)
	return tmp;
	HX_STACK_LINE(274)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,makeIdent,return )

Dynamic RecordMacros_obj::getRecordInfos( Dynamic c){
	HX_STACK_FRAME("sys.db.RecordMacros","getRecordInfos",0x9ecb6d85,"sys.db.RecordMacros.getRecordInfos","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",284,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(285)
	::String tmp = c->toString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	::String cname = tmp;		HX_STACK_VAR(cname,"cname");
	HX_STACK_LINE(286)
	Dynamic tmp1 = this->g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	::String tmp2 = cname;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(286)
	Dynamic tmp3 = tmp1->__Field(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(286)
	Dynamic i = tmp3;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(287)
	bool tmp4 = (i != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(287)
	if ((tmp4)){
		HX_STACK_LINE(287)
		Dynamic tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(287)
		return tmp5;
	}
	HX_STACK_LINE(290)
	::String tmp5 = cname.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"))->pop();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(292)
	::haxe::ds::StringMap tmp6 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(288)
	::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp5,::haxe::ds::StringMap &tmp7){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",288,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("key","\x9f","\x89","\x51","\x00") , null(),false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp5,false);
				__result->Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65") , tmp7,false);
				__result->Add(HX_HCSTRING("relations","\x37","\x2e","\x4b","\xe4") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("indexes","\x00","\x5c","\xbf","\xe0") , cpp::ArrayBase_obj::__new(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(288)
	Dynamic tmp8 = _Function_1_1::Block(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(288)
	i = tmp8;
	HX_STACK_LINE(296)
	Dynamic tmp9 = this->g;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(296)
	::String tmp10 = cname;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(296)
	Dynamic tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(296)
	tmp9->__Field(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp10,tmp11);
	HX_STACK_LINE(297)
	Dynamic tmp12 = c->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(297)
	Dynamic c1 = tmp12;		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(298)
	::haxe::ds::StringMap tmp13 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(298)
	::haxe::ds::StringMap fieldsPos = tmp13;		HX_STACK_VAR(fieldsPos,"fieldsPos");
	HX_STACK_LINE(299)
	cpp::ArrayBase fields = c1->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(300)
	Dynamic csup = c1->__Field(HX_HCSTRING("superClass","\xbd","\xa8","\x07","\xa8"), hx::paccDynamic );		HX_STACK_VAR(csup,"csup");
	HX_STACK_LINE(301)
	while((true)){
		HX_STACK_LINE(301)
		bool tmp14 = (csup != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(301)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(301)
		if ((tmp15)){
			HX_STACK_LINE(301)
			break;
		}
		HX_STACK_LINE(302)
		Dynamic tmp16 = csup->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(302)
		Dynamic c2 = tmp16;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(303)
		bool tmp17 = c2->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"), hx::paccDynamic )(HX_HCSTRING(":skipFields","\x12","\xcf","\xf6","\x1a"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(303)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(303)
		if ((tmp18)){
			HX_STACK_LINE(304)
			fields = c2->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )()->__Field(HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"), hx::paccDynamic )(fields);
		}
		HX_STACK_LINE(305)
		csup = c2->__Field(HX_HCSTRING("superClass","\xbd","\xa8","\x07","\xa8"), hx::paccDynamic );
	}
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(307)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(307)
		while((true)){
			HX_STACK_LINE(307)
			bool tmp14 = (_g < fields->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(307)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(307)
			if ((tmp15)){
				HX_STACK_LINE(307)
				break;
			}
			HX_STACK_LINE(307)
			Dynamic tmp16 = fields->__GetItem(_g);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(307)
			Dynamic f = tmp16;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(307)
			++(_g);
			HX_STACK_LINE(308)
			::String tmp17 = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(308)
			Dynamic tmp18 = f->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(308)
			fieldsPos->set(tmp17,tmp18);
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				::haxe::macro::FieldKind _g1 = f->__Field(HX_HCSTRING("kind","\x54","\xe1","\x09","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(309)
				switch( (int)(_g1->__Index())){
					case (int)1: {
						HX_STACK_LINE(312)
						continue;
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(309)
						::haxe::macro::VarAccess tmp19 = (::haxe::macro::FieldKind(_g1))->__Param(1);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(309)
						::haxe::macro::VarAccess s = tmp19;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(309)
						::haxe::macro::VarAccess tmp20 = (::haxe::macro::FieldKind(_g1))->__Param(0);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(309)
						::haxe::macro::VarAccess g = tmp20;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(315)
							bool tmp21 = f->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"), hx::paccDynamic )(HX_HCSTRING(":skip","\xb9","\xbb","\x92","\xb1"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(315)
							if ((tmp21)){
								HX_STACK_LINE(316)
								continue;
							}
							HX_STACK_LINE(318)
							bool tmp22 = f->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"), hx::paccDynamic )(HX_HCSTRING(":relation","\xf6","\x80","\x86","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(318)
							if ((tmp22)){
								HX_STACK_LINE(319)
								::haxe::macro::VarAccess tmp23 = g;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(319)
								bool tmp24 = ::Type_obj::enumEq(tmp23,::haxe::macro::VarAccess_obj::AccCall);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(319)
								bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(319)
								bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(319)
								bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(319)
								bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(319)
								if ((tmp27)){
									HX_STACK_LINE(319)
									::haxe::macro::VarAccess tmp29 = s;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(319)
									::haxe::macro::VarAccess tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(319)
									bool tmp31 = ::Type_obj::enumEq(tmp30,::haxe::macro::VarAccess_obj::AccCall);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(319)
									bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(319)
									bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(319)
									tmp28 = !(tmp33);
								}
								else{
									HX_STACK_LINE(319)
									tmp28 = true;
								}
								HX_STACK_LINE(319)
								if ((tmp28)){
									HX_STACK_LINE(320)
									Dynamic tmp29 = f->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(320)
									this->error(HX_HCSTRING("Relation should be (dynamic,dynamic)","\xeb","\xd4","\xc1","\x59"),tmp29);
								}
								HX_STACK_LINE(321)
								{
									HX_STACK_LINE(321)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(321)
									cpp::ArrayBase _g3 = f->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(321)
									while((true)){
										HX_STACK_LINE(321)
										bool tmp29 = (_g2 < _g3->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(321)
										bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(321)
										if ((tmp30)){
											HX_STACK_LINE(321)
											break;
										}
										HX_STACK_LINE(321)
										Dynamic tmp31 = _g3->__GetItem(_g2);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(321)
										Dynamic m = tmp31;		HX_STACK_VAR(m,"m");
										HX_STACK_LINE(321)
										++(_g2);
										HX_STACK_LINE(322)
										bool tmp32 = (m->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) != HX_HCSTRING(":relation","\xf6","\x80","\x86","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(322)
										if ((tmp32)){
											HX_STACK_LINE(322)
											continue;
										}
										HX_STACK_LINE(323)
										int tmp33 = m->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(323)
										bool tmp34 = (tmp33 == (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(323)
										if ((tmp34)){
											HX_STACK_LINE(323)
											Dynamic tmp35 = m->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(323)
											this->error(HX_HCSTRING("Missing relation key","\x55","\x57","\xef","\xa9"),tmp35);
										}
										HX_STACK_LINE(324)
										cpp::ArrayBase params = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(params,"params");
										HX_STACK_LINE(325)
										{
											HX_STACK_LINE(325)
											int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
											HX_STACK_LINE(325)
											cpp::ArrayBase _g5 = m->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic );		HX_STACK_VAR(_g5,"_g5");
											HX_STACK_LINE(325)
											while((true)){
												HX_STACK_LINE(325)
												bool tmp35 = (_g4 < _g5->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(325)
												bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(325)
												if ((tmp36)){
													HX_STACK_LINE(325)
													break;
												}
												HX_STACK_LINE(325)
												Dynamic tmp37 = _g5->__GetItem(_g4);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(325)
												Dynamic p = tmp37;		HX_STACK_VAR(p,"p");
												HX_STACK_LINE(325)
												++(_g4);
												HX_STACK_LINE(326)
												Dynamic tmp38 = p;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(326)
												::String tmp39 = this->makeIdent(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(326)
												Dynamic tmp40 = p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
												struct _Function_11_1{
													inline static Dynamic Block( Dynamic &tmp40,::String &tmp39){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",326,0x502e5710)
														{
															hx::Anon __result = hx::Anon_obj::Create();
															__result->Add(HX_HCSTRING("i","\x69","\x00","\x00","\x00") , tmp39,false);
															__result->Add(HX_HCSTRING("p","\x70","\x00","\x00","\x00") , tmp40,false);
															return __result;
														}
														return null();
													}
												};
												HX_STACK_LINE(326)
												Dynamic tmp41 = _Function_11_1::Block(tmp40,tmp39);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(326)
												params->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp41);
											}
										}
										HX_STACK_LINE(327)
										this->isNull = false;
										HX_STACK_LINE(328)
										::haxe::macro::Type tmp35 = f->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(328)
										Dynamic tmp36 = this->makeRecord(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(328)
										Dynamic t = tmp36;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(329)
										bool tmp37 = (t == null());		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(329)
										if ((tmp37)){
											HX_STACK_LINE(329)
											Dynamic tmp38 = f->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(329)
											this->error(HX_HCSTRING("Relation type should be a sys.db.Object","\x7d","\x8a","\xd2","\x7f"),tmp38);
										}
										HX_STACK_LINE(330)
										Dynamic tmp38 = t->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(330)
										::String mod = tmp38->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic );		HX_STACK_VAR(mod,"mod");
										HX_STACK_LINE(332)
										::String tmp39 = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(333)
										Dynamic tmp40 = params->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(333)
										::String tmp41 = tmp40->__Field(HX_HCSTRING("i","\x69","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(334)
										::String tmp42 = t->toString();		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(335)
										::String tmp43 = mod;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(338)
										bool tmp44 = this->isNull;		HX_STACK_VAR(tmp44,"tmp44");
										struct _Function_9_1{
											inline static Dynamic Block( ::String &tmp42,bool &tmp44,::String &tmp41,::String &tmp39,::String &tmp43){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",331,0x502e5710)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_HCSTRING("prop","\xa3","\xc7","\x5e","\x4a") , tmp39,false);
													__result->Add(HX_HCSTRING("key","\x9f","\x89","\x51","\x00") , tmp41,false);
													__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , tmp42,false);
													__result->Add(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0") , tmp43,false);
													__result->Add(HX_HCSTRING("cascade","\x34","\xb4","\x39","\x56") , false,false);
													__result->Add(HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47") , false,false);
													__result->Add(HX_HCSTRING("isNull","\x91","\x63","\x75","\x66") , tmp44,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(331)
										Dynamic tmp45 = _Function_9_1::Block(tmp42,tmp44,tmp41,tmp39,tmp43);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(331)
										Dynamic r = tmp45;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(341)
										{
											HX_STACK_LINE(341)
											int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
											HX_STACK_LINE(341)
											while((true)){
												HX_STACK_LINE(341)
												bool tmp46 = (_g4 < params->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(341)
												bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(341)
												if ((tmp47)){
													HX_STACK_LINE(341)
													break;
												}
												HX_STACK_LINE(341)
												Dynamic tmp48 = params->__GetItem(_g4);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(341)
												Dynamic p = tmp48;		HX_STACK_VAR(p,"p");
												HX_STACK_LINE(341)
												++(_g4);
												HX_STACK_LINE(342)
												::String _g5 = p->__Field(HX_HCSTRING("i","\x69","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g5,"_g5");
												HX_STACK_LINE(342)
												::String tmp49 = _g5;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(342)
												::String _switch_5 = (tmp49);
												if (  ( _switch_5==HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"))){
													HX_STACK_LINE(343)
													r->__FieldRef(HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47")) = true;
												}
												else if (  ( _switch_5==HX_HCSTRING("cascade","\x34","\xb4","\x39","\x56"))){
													HX_STACK_LINE(344)
													r->__FieldRef(HX_HCSTRING("cascade","\x34","\xb4","\x39","\x56")) = true;
												}
												else  {
													HX_STACK_LINE(345)
													Dynamic tmp50 = p->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(345)
													this->error(HX_HCSTRING("Unknown relation flag","\x5a","\x18","\x74","\x32"),tmp50);
												}
;
;
											}
										}
										HX_STACK_LINE(347)
										Dynamic tmp46 = r;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(347)
										i->__Field(HX_HCSTRING("relations","\x37","\x2e","\x4b","\xe4"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp46);
									}
								}
								HX_STACK_LINE(349)
								continue;
							}
							HX_STACK_LINE(351)
							switch( (int)(g->__Index())){
								case (int)4: {
									HX_STACK_LINE(353)
									bool tmp23 = f->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"), hx::paccDynamic )(HX_HCSTRING(":data","\x64","\xfb","\xa0","\xa7"));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(353)
									bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(353)
									if ((tmp24)){
										HX_STACK_LINE(354)
										Dynamic tmp25 = f->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(354)
										this->error(HX_HCSTRING("Relation should be defined with @:relation(key)","\x4d","\x34","\x3e","\xb1"),tmp25);
									}
								}
								;break;
								default: {
								}
							}
						}
					}
					;break;
				}
			}
			HX_STACK_LINE(358)
			this->isNull = false;
			HX_STACK_LINE(360)
			::String tmp19 = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(361)
			::sys::db::RecordType tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(361)
			try
			{
			HX_STACK_CATCHABLE(::String, 0);
			{
				HX_STACK_LINE(361)
				::haxe::macro::Type tmp21 = f->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(361)
				tmp20 = this->makeType(tmp21);
			}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(361)
						::String tmp21 = e;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(361)
						Dynamic tmp22 = f->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(361)
						tmp20 = this->error(tmp21,tmp22);
					}
				}
				else {
				    HX_STACK_DO_THROW(__e);
				}
			}
			HX_STACK_LINE(362)
			bool tmp21 = this->isNull;		HX_STACK_VAR(tmp21,"tmp21");
			struct _Function_3_1{
				inline static Dynamic Block( ::sys::db::RecordType &tmp20,::String &tmp19,bool &tmp21){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",359,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp19,false);
						__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp20,false);
						__result->Add(HX_HCSTRING("isNull","\x91","\x63","\x75","\x66") , tmp21,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(359)
			Dynamic tmp22 = _Function_3_1::Block(tmp20,tmp19,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(359)
			Dynamic fi = tmp22;		HX_STACK_VAR(fi,"fi");
			HX_STACK_LINE(364)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(364)
			{
				HX_STACK_LINE(364)
				::sys::db::RecordType _g1 = fi->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(364)
				switch( (int)(_g1->__Index())){
					case (int)0: case (int)2: case (int)4: {
						HX_STACK_LINE(365)
						tmp23 = true;
					}
					;break;
					default: {
						HX_STACK_LINE(366)
						tmp23 = (fi->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
					}
				}
			}
			HX_STACK_LINE(364)
			bool isId = tmp23;		HX_STACK_VAR(isId,"isId");
			HX_STACK_LINE(368)
			bool tmp24 = isId;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(368)
			if ((tmp24)){
				HX_STACK_LINE(369)
				{
					HX_STACK_LINE(369)
					::sys::db::RecordType _g1 = fi->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(369)
					switch( (int)(_g1->__Index())){
						case (int)1: {
							HX_STACK_LINE(372)
							fi->__FieldRef(HX_HCSTRING("t","\x74","\x00","\x00","\x00")) = ::sys::db::RecordType_obj::DId;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(374)
							fi->__FieldRef(HX_HCSTRING("t","\x74","\x00","\x00","\x00")) = ::sys::db::RecordType_obj::DUId;
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(376)
							fi->__FieldRef(HX_HCSTRING("t","\x74","\x00","\x00","\x00")) = ::sys::db::RecordType_obj::DBigId;
						}
						;break;
						default: {
						}
					}
				}
				HX_STACK_LINE(379)
				bool tmp25 = (i->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(379)
				if ((tmp25)){
					HX_STACK_LINE(379)
					i->__FieldRef(HX_HCSTRING("key","\x9f","\x89","\x51","\x00")) = Array_obj< ::String >::__new().Add(fi->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));
				}
				else{
					HX_STACK_LINE(379)
					Dynamic tmp26 = f->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(379)
					this->error(HX_HCSTRING("Multiple table id declaration","\xf7","\xf4","\x6d","\xe9"),tmp26);
				}
			}
			HX_STACK_LINE(381)
			Dynamic tmp25 = fi;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(381)
			i->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp25);
			HX_STACK_LINE(382)
			::String tmp26 = fi->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(382)
			Dynamic tmp27 = fi;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(382)
			i->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp26,tmp27);
		}
	}
	HX_STACK_LINE(385)
	{
		HX_STACK_LINE(385)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(385)
		cpp::ArrayBase _g1 = i->__Field(HX_HCSTRING("relations","\x37","\x2e","\x4b","\xe4"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(385)
		while((true)){
			HX_STACK_LINE(385)
			bool tmp14 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(385)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(385)
			if ((tmp15)){
				HX_STACK_LINE(385)
				break;
			}
			HX_STACK_LINE(385)
			Dynamic tmp16 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(385)
			Dynamic r = tmp16;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(385)
			++(_g);

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,r)
			int __ArgCount() const { return 1; }
			bool run(Dynamic f){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",386,0x502e5710)
				HX_STACK_ARG(f,"f")
				{
					HX_STACK_LINE(386)
					bool tmp17 = (f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == r->__Field(HX_HCSTRING("prop","\xa3","\xc7","\x5e","\x4a"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(386)
					return tmp17;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(386)
			Dynamic tmp17 = ::Lambda_obj::find(fields, Dynamic(new _Function_3_1(r)));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(386)
			Dynamic field = tmp17;		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(387)
			::String tmp18 = r->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(387)
			Dynamic tmp19 = i->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(387)
			Dynamic f = tmp19;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(388)
			::String tmp20 = r->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(388)
			::String tmp21 = r->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(388)
			::haxe::macro::Type tmp22 = this->resolveType(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(388)
			Dynamic tmp23 = this->makeRecord(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(388)
			Dynamic tmp24 = this->getRecordInfos(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(388)
			Dynamic relatedInf = tmp24;		HX_STACK_VAR(relatedInf,"relatedInf");
			HX_STACK_LINE(389)
			int tmp25 = relatedInf->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(389)
			bool tmp26 = (tmp25 > (int)1);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(389)
			if ((tmp26)){
				HX_STACK_LINE(390)
				::String tmp27 = (HX_HCSTRING("The relation ","\x55","\x31","\x48","\x5e") + r->__Field(HX_HCSTRING("prop","\xa3","\xc7","\x5e","\x4a"), hx::paccDynamic ));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(390)
				::String tmp28 = (tmp27 + HX_HCSTRING(" is invalid: Type ","\xdf","\x44","\x4a","\xf2"));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(390)
				::String tmp29 = r->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(390)
				::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(390)
				::String tmp31 = (tmp30 + HX_HCSTRING(" has multiple keys, which is not supported","\xe0","\xc7","\xf0","\x2f"));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(390)
				Dynamic tmp32 = field->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(390)
				this->error(tmp31,tmp32);
			}
			HX_STACK_LINE(391)
			::String tmp27 = relatedInf->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(391)
			::String relatedKey = tmp27;		HX_STACK_VAR(relatedKey,"relatedKey");
			HX_STACK_LINE(392)
			::sys::db::RecordType tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(392)
			{
				HX_STACK_LINE(392)
				::String tmp29 = relatedKey;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(392)
				Dynamic tmp30 = relatedInf->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(392)
				::sys::db::RecordType tmp31 = tmp30->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(392)
				::sys::db::RecordType _g2 = tmp31;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(392)
				{
					HX_STACK_LINE(392)
					::sys::db::RecordType t = _g2;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(392)
					::sys::db::RecordType t1 = _g2;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(392)
					switch( (int)(_g2->__Index())){
						case (int)0: {
							HX_STACK_LINE(394)
							tmp28 = ::sys::db::RecordType_obj::DInt;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(395)
							tmp28 = ::sys::db::RecordType_obj::DUInt;
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(396)
							tmp28 = ::sys::db::RecordType_obj::DBigInt;
						}
						;break;
						case (int)9: {
							HX_STACK_LINE(397)
							tmp28 = t;
						}
						;break;
						default: {
							HX_STACK_LINE(398)
							::sys::db::RecordType tmp32 = t1;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(398)
							::String tmp33 = ::Std_obj::string(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(398)
							::String tmp34 = (HX_HCSTRING("Unexpected id type ","\x30","\xee","\x01","\x4b") + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(398)
							::String tmp35 = (tmp34 + HX_HCSTRING(" for the relation. Use either SId, SInt, SUId, SUInt, SBigID, SBigInt or SString","\xed","\x64","\x77","\xaf"));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(398)
							Dynamic tmp36 = field->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(398)
							tmp28 = this->error(tmp35,tmp36);
						}
					}
				}
			}
			HX_STACK_LINE(392)
			::sys::db::RecordType relatedKeyType = tmp28;		HX_STACK_VAR(relatedKeyType,"relatedKeyType");
			HX_STACK_LINE(401)
			bool tmp29 = (f == null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(401)
			if ((tmp29)){
				struct _Function_4_1{
					inline static Dynamic Block( Dynamic &r,::sys::db::RecordType &relatedKeyType){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",402,0x502e5710)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , r->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic ),false);
							__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , relatedKeyType,false);
							__result->Add(HX_HCSTRING("isNull","\x91","\x63","\x75","\x66") , r->__Field(HX_HCSTRING("isNull","\x91","\x63","\x75","\x66"), hx::paccDynamic ),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(402)
				Dynamic tmp30 = _Function_4_1::Block(r,relatedKeyType);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(402)
				f = tmp30;
				HX_STACK_LINE(407)
				Dynamic tmp31 = f;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(407)
				i->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp31);
				HX_STACK_LINE(408)
				::String tmp32 = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(408)
				Dynamic tmp33 = f;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(408)
				i->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp32,tmp33);
			}
			else{
				HX_STACK_LINE(410)
				::String tmp30 = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(410)
				Dynamic tmp31 = fieldsPos->get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(410)
				Dynamic pos = tmp31;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(411)
				bool tmp32 = (f->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic ) != relatedKeyType);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(411)
				if ((tmp32)){
					HX_STACK_LINE(411)
					Dynamic tmp33 = pos;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(411)
					this->error(HX_HCSTRING("Relation source and field should have same type","\x19","\xc8","\xef","\xbc"),tmp33);
				}
				HX_STACK_LINE(412)
				bool tmp33 = (f->__Field(HX_HCSTRING("isNull","\x91","\x63","\x75","\x66"), hx::paccDynamic ) != r->__Field(HX_HCSTRING("isNull","\x91","\x63","\x75","\x66"), hx::paccDynamic ));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(412)
				if ((tmp33)){
					HX_STACK_LINE(412)
					Dynamic tmp34 = pos;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(412)
					this->error(HX_HCSTRING("Relation and field should have same nullability","\xe7","\x8a","\x6b","\x5a"),tmp34);
				}
			}
		}
	}
	HX_STACK_LINE(416)
	{
		HX_STACK_LINE(416)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(416)
		cpp::ArrayBase _g1 = c1->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(416)
		while((true)){
			HX_STACK_LINE(416)
			bool tmp14 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(416)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(416)
			if ((tmp15)){
				HX_STACK_LINE(416)
				break;
			}
			HX_STACK_LINE(416)
			Dynamic tmp16 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(416)
			Dynamic m = tmp16;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(416)
			++(_g);
			HX_STACK_LINE(417)
			::String _g2 = m->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(417)
			::String tmp17 = _g2;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(417)
			::String _switch_6 = (tmp17);
			if (  ( _switch_6==HX_HCSTRING(":id","\x95","\x5e","\x2c","\x00"))){
				HX_STACK_LINE(419)
				i->__FieldRef(HX_HCSTRING("key","\x9f","\x89","\x51","\x00")) = Array_obj< ::String >::__new();
				HX_STACK_LINE(420)
				{
					HX_STACK_LINE(420)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(420)
					cpp::ArrayBase _g4 = m->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic );		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(420)
					while((true)){
						HX_STACK_LINE(420)
						bool tmp18 = (_g3 < _g4->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(420)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(420)
						if ((tmp19)){
							HX_STACK_LINE(420)
							break;
						}
						HX_STACK_LINE(420)
						Dynamic tmp20 = _g4->__GetItem(_g3);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(420)
						Dynamic p = tmp20;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(420)
						++(_g3);
						HX_STACK_LINE(421)
						Dynamic tmp21 = p;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(421)
						::String tmp22 = this->makeIdent(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(421)
						::String id = tmp22;		HX_STACK_VAR(id,"id");
						HX_STACK_LINE(422)
						::String tmp23 = id;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(422)
						bool tmp24 = i->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(422)
						bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(422)
						if ((tmp25)){
							HX_STACK_LINE(423)
							Dynamic tmp26 = p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(423)
							this->error(HX_HCSTRING("This field does not exists","\xc8","\x86","\xff","\x5d"),tmp26);
						}
						HX_STACK_LINE(424)
						::String tmp26 = id;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(424)
						i->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp26);
					}
				}
				HX_STACK_LINE(426)
				int tmp18 = i->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(426)
				bool tmp19 = (tmp18 == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(426)
				if ((tmp19)){
					HX_STACK_LINE(426)
					Dynamic tmp20 = m->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(426)
					this->error(HX_HCSTRING("Invalid :id","\xcc","\xec","\xbb","\x76"),tmp20);
				}
				HX_STACK_LINE(427)
				int tmp20 = i->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(427)
				bool tmp21 = (tmp20 == (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(427)
				if ((tmp21)){
					HX_STACK_LINE(429)
					::String tmp22 = i->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(429)
					Dynamic tmp23 = i->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(429)
					Dynamic field = tmp23;		HX_STACK_VAR(field,"field");
					HX_STACK_LINE(430)
					{
						HX_STACK_LINE(430)
						::sys::db::RecordType _g3 = field->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(430)
						switch( (int)(_g3->__Index())){
							case (int)1: {
								HX_STACK_LINE(433)
								field->__FieldRef(HX_HCSTRING("t","\x74","\x00","\x00","\x00")) = ::sys::db::RecordType_obj::DId;
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(435)
								field->__FieldRef(HX_HCSTRING("t","\x74","\x00","\x00","\x00")) = ::sys::db::RecordType_obj::DUId;
							}
							;break;
							case (int)5: {
								HX_STACK_LINE(437)
								field->__FieldRef(HX_HCSTRING("t","\x74","\x00","\x00","\x00")) = ::sys::db::RecordType_obj::DBigId;
							}
							;break;
							default: {
							}
						}
					}
				}
			}
			else if (  ( _switch_6==HX_HCSTRING(":index","\x98","\x88","\xc7","\xee"))){
				HX_STACK_LINE(442)
				Array< ::String > idx = Array_obj< ::String >::__new();		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(443)
				{
					HX_STACK_LINE(443)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(443)
					cpp::ArrayBase _g4 = m->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic );		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(443)
					while((true)){
						HX_STACK_LINE(443)
						bool tmp18 = (_g3 < _g4->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(443)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(443)
						if ((tmp19)){
							HX_STACK_LINE(443)
							break;
						}
						HX_STACK_LINE(443)
						Dynamic tmp20 = _g4->__GetItem(_g3);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(443)
						Dynamic p = tmp20;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(443)
						++(_g3);
						HX_STACK_LINE(443)
						Dynamic tmp21 = p;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(443)
						::String tmp22 = this->makeIdent(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(443)
						idx->push(tmp22);
					}
				}
				HX_STACK_LINE(444)
				int tmp18 = (idx->length - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(444)
				::String tmp19 = idx->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(444)
				bool tmp20 = (tmp19 == HX_HCSTRING("unique","\x11","\x93","\x92","\x63"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(444)
				bool unique = tmp20;		HX_STACK_VAR(unique,"unique");
				HX_STACK_LINE(445)
				bool tmp21 = unique;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(445)
				if ((tmp21)){
					HX_STACK_LINE(445)
					idx->pop();
				}
				HX_STACK_LINE(446)
				bool tmp22 = (idx->length == (int)0);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(446)
				if ((tmp22)){
					HX_STACK_LINE(446)
					Dynamic tmp23 = m->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(446)
					this->error(HX_HCSTRING("Invalid :index","\xc1","\x76","\x3f","\xbc"),tmp23);
				}
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(447)
					int _g3 = idx->length;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(447)
					while((true)){
						HX_STACK_LINE(447)
						bool tmp23 = (_g4 < _g3);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(447)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(447)
						if ((tmp24)){
							HX_STACK_LINE(447)
							break;
						}
						HX_STACK_LINE(447)
						int tmp25 = (_g4)++;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(447)
						int k = tmp25;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(448)
						::String tmp26 = idx->__get(k);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(448)
						bool tmp27 = i->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(448)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(448)
						if ((tmp28)){
							HX_STACK_LINE(449)
							Dynamic tmp29 = m->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__GetItem(k);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(449)
							Dynamic tmp30 = tmp29->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(449)
							this->error(HX_HCSTRING("This field does not exists","\xc8","\x86","\xff","\x5d"),tmp30);
						}
					}
				}
				struct _Function_4_1{
					inline static Dynamic Block( Array< ::String > &idx,bool &unique){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",450,0x502e5710)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47") , idx,false);
							__result->Add(HX_HCSTRING("unique","\x11","\x93","\x92","\x63") , unique,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(450)
				Dynamic tmp23 = _Function_4_1::Block(idx,unique);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(450)
				i->__Field(HX_HCSTRING("indexes","\x00","\x5c","\xbf","\xe0"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
			}
			else if (  ( _switch_6==HX_HCSTRING(":table","\x94","\xa5","\x96","\x3b"))){
				HX_STACK_LINE(452)
				int tmp18 = m->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(452)
				bool tmp19 = (tmp18 != (int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(452)
				if ((tmp19)){
					HX_STACK_LINE(452)
					Dynamic tmp20 = m->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(452)
					this->error(HX_HCSTRING("Invalid :table","\xbd","\x93","\x0e","\x09"),tmp20);
				}
				HX_STACK_LINE(453)
				::String tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(453)
				{
					HX_STACK_LINE(453)
					Dynamic tmp21 = m->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(453)
					::haxe::macro::ExprDef _g3 = tmp21->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(453)
					switch( (int)(_g3->__Index())){
						case (int)0: {
							HX_STACK_LINE(453)
							::haxe::macro::Constant tmp22 = (::haxe::macro::ExprDef(_g3))->__Param(0);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(453)
							::haxe::macro::Constant c2 = tmp22;		HX_STACK_VAR(c2,"c2");
							HX_STACK_LINE(454)
							switch( (int)(c2->__Index())){
								case (int)2: {
									HX_STACK_LINE(454)
									::String tmp23 = (::haxe::macro::Constant(c2))->__Param(0);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(454)
									::String s = tmp23;		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(454)
									tmp20 = s;
								}
								;break;
								default: {
									HX_STACK_LINE(454)
									tmp20 = null();
								}
							}
						}
						;break;
						default: {
							HX_STACK_LINE(455)
							tmp20 = null();
						}
					}
				}
				HX_STACK_LINE(453)
				i->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = tmp20;
				HX_STACK_LINE(457)
				bool tmp21 = (i->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(457)
				if ((tmp21)){
					HX_STACK_LINE(457)
					Dynamic tmp22 = m->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(457)
					Dynamic tmp23 = tmp22->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(457)
					this->error(HX_HCSTRING("Invalid :table value","\xce","\x8a","\x3b","\xcb"),tmp23);
				}
			}
			else  {
			}
;
;
		}
	}
	HX_STACK_LINE(461)
	bool tmp14 = (i->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(461)
	if ((tmp14)){
		HX_STACK_LINE(462)
		Dynamic tmp15 = c1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(462)
		this->error(HX_HCSTRING("Table is missing unique id, use either SId, SUId, SBigID or @:id","\x0b","\x87","\x38","\x89"),tmp15);
	}
	HX_STACK_LINE(463)
	Dynamic tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(463)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,getRecordInfos,return )

::String RecordMacros_obj::quoteField( ::String f){
	HX_STACK_FRAME("sys.db.RecordMacros","quoteField",0x6c167ee5,"sys.db.RecordMacros.quoteField","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",466,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(467)
	Dynamic m = hx::ClassOf< ::sys::db::Manager >();		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(468)
	::String tmp = f.toLowerCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(468)
	bool tmp1 = m->__Field(HX_HCSTRING("KEYWORDS","\x6a","\x55","\x26","\xd9"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(468)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(468)
	if ((tmp1)){
		HX_STACK_LINE(468)
		::String tmp3 = (HX_HCSTRING("`","\x60","\x00","\x00","\x00") + f);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(468)
		tmp2 = (tmp3 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(468)
		tmp2 = f;
	}
	HX_STACK_LINE(468)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,quoteField,return )

Void RecordMacros_obj::initManager( Dynamic pos){
{
		HX_STACK_FRAME("sys.db.RecordMacros","initManager",0xb0eb5056,"sys.db.RecordMacros.initManager","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",471,0x502e5710)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(472)
		::haxe::macro::Constant tmp = ::haxe::macro::Constant_obj::CIdent(HX_HCSTRING("sys","\x0d","\xad","\x57","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(472)
		::haxe::macro::ExprDef tmp1 = ::haxe::macro::ExprDef_obj::EConst(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(472)
		Dynamic tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp2,::haxe::macro::ExprDef &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",472,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp1,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(472)
		Dynamic tmp3 = _Function_1_1::Block(tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(472)
		::haxe::macro::ExprDef tmp4 = ::haxe::macro::ExprDef_obj::EField(tmp3,HX_HCSTRING("db","\x7e","\x57","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(472)
		Dynamic tmp5 = pos;		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp5,::haxe::macro::ExprDef &tmp4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",472,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp4,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(472)
		Dynamic tmp6 = _Function_1_2::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(472)
		::haxe::macro::ExprDef tmp7 = ::haxe::macro::ExprDef_obj::EField(tmp6,HX_HCSTRING("Manager","\x4d","\xba","\x12","\xe1"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(472)
		Dynamic tmp8 = pos;		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_1_3{
			inline static Dynamic Block( ::haxe::macro::ExprDef &tmp7,Dynamic &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",472,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp7,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(472)
		Dynamic tmp9 = _Function_1_3::Block(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(472)
		this->manager = tmp9;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,initManager,(void))

Dynamic RecordMacros_obj::makeString( ::String s,Dynamic pos){
	HX_STACK_FRAME("sys.db.RecordMacros","makeString",0xeb7cd466,"sys.db.RecordMacros.makeString","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",475,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(476)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(476)
	::haxe::macro::Constant tmp1 = ::haxe::macro::Constant_obj::CString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(476)
	::haxe::macro::ExprDef tmp2 = ::haxe::macro::ExprDef_obj::EConst(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(476)
	Dynamic tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::macro::ExprDef &tmp2,Dynamic &tmp3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",476,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp2,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp3,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(476)
	Dynamic tmp4 = _Function_1_1::Block(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(476)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(RecordMacros_obj,makeString,return )

Dynamic RecordMacros_obj::makeOp( ::String op,Dynamic e1,Dynamic e2,Dynamic pos){
	HX_STACK_FRAME("sys.db.RecordMacros","makeOp",0x26a05e36,"sys.db.RecordMacros.makeOp","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",479,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e2,"e2")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(480)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(480)
	{
		HX_STACK_LINE(480)
		Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(480)
		::String tmp2 = op;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(480)
		::haxe::macro::Constant tmp3 = ::haxe::macro::Constant_obj::CString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(480)
		::haxe::macro::ExprDef tmp4 = ::haxe::macro::ExprDef_obj::EConst(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(480)
		Dynamic tmp5 = e1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp5,::haxe::macro::ExprDef &tmp4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",480,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp4,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(480)
		Dynamic tmp6 = _Function_2_1::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(480)
		::haxe::macro::ExprDef tmp7 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp1,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(480)
		Dynamic tmp8 = e1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_2_2{
			inline static Dynamic Block( ::haxe::macro::ExprDef &tmp7,Dynamic &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",480,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp7,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(480)
		Dynamic tmp9 = _Function_2_2::Block(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(480)
		Dynamic e11 = tmp9;		HX_STACK_VAR(e11,"e11");
		HX_STACK_LINE(480)
		Dynamic tmp10 = e11;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(480)
		Dynamic tmp11 = e2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(480)
		::haxe::macro::ExprDef tmp12 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(480)
		Dynamic tmp13 = pos;		HX_STACK_VAR(tmp13,"tmp13");
		struct _Function_2_3{
			inline static Dynamic Block( Dynamic &tmp13,::haxe::macro::ExprDef &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",480,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp12,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp13,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(480)
		tmp = _Function_2_3::Block(tmp13,tmp12);
	}
	HX_STACK_LINE(480)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC4(RecordMacros_obj,makeOp,return )

Dynamic RecordMacros_obj::sqlAdd( Dynamic e1,Dynamic e2,Dynamic pos){
	HX_STACK_FRAME("sys.db.RecordMacros","sqlAdd",0xc3bbc83a,"sys.db.RecordMacros.sqlAdd","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",483,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e2,"e2")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(484)
	Dynamic tmp = e1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(484)
	Dynamic tmp1 = e2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(484)
	::haxe::macro::ExprDef tmp2 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(484)
	Dynamic tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::macro::ExprDef &tmp2,Dynamic &tmp3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",484,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp2,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp3,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(484)
	Dynamic tmp4 = _Function_1_1::Block(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(484)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(RecordMacros_obj,sqlAdd,return )

Dynamic RecordMacros_obj::sqlAddString( Dynamic sql,::String s){
	HX_STACK_FRAME("sys.db.RecordMacros","sqlAddString",0x38634cab,"sys.db.RecordMacros.sqlAddString","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",487,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sql,"sql")
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(488)
	Dynamic tmp = sql;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(488)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(488)
	::haxe::macro::Constant tmp2 = ::haxe::macro::Constant_obj::CString(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(488)
	::haxe::macro::ExprDef tmp3 = ::haxe::macro::ExprDef_obj::EConst(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(488)
	Dynamic tmp4 = sql->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &tmp4,::haxe::macro::ExprDef &tmp3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",488,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp3,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp4,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(488)
	Dynamic tmp5 = _Function_1_1::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(488)
	::haxe::macro::ExprDef tmp6 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(488)
	Dynamic tmp7 = sql->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	struct _Function_1_2{
		inline static Dynamic Block( ::haxe::macro::ExprDef &tmp6,Dynamic &tmp7){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",488,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp6,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp7,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(488)
	Dynamic tmp8 = _Function_1_2::Block(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(488)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(RecordMacros_obj,sqlAddString,return )

Dynamic RecordMacros_obj::sqlQuoteValue( Dynamic v,::sys::db::RecordType t){
	HX_STACK_FRAME("sys.db.RecordMacros","sqlQuoteValue",0xd2c0a19c,"sys.db.RecordMacros.sqlQuoteValue","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",491,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(492)
	{
		HX_STACK_LINE(492)
		::haxe::macro::ExprDef _g = v->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(492)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(492)
				::haxe::macro::Constant tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(492)
				::haxe::macro::Constant c = tmp;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(494)
				switch( (int)(c->__Index())){
					case (int)0: case (int)1: {
						HX_STACK_LINE(495)
						Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(495)
						return tmp1;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(494)
						::String tmp1 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(494)
						::String s = tmp1;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(496)
						{
							HX_STACK_LINE(497)
							::EReg tmp2 = ::sys::db::RecordMacros_obj::simpleString;		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(497)
							::String tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(497)
							bool tmp4 = tmp2->match(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(497)
							if ((tmp4)){
								HX_STACK_LINE(497)
								::String tmp5 = (HX_HCSTRING("'","\x27","\x00","\x00","\x00") + s);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(497)
								::String tmp6 = (tmp5 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(497)
								::haxe::macro::Constant tmp7 = ::haxe::macro::Constant_obj::CString(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(497)
								::haxe::macro::ExprDef tmp8 = ::haxe::macro::ExprDef_obj::EConst(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(497)
								Dynamic tmp9 = v->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
								struct _Function_6_1{
									inline static Dynamic Block( Dynamic &tmp9,::haxe::macro::ExprDef &tmp8){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",497,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp8,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp9,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(497)
								Dynamic tmp10 = _Function_6_1::Block(tmp9,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(497)
								return tmp10;
							}
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(494)
						::String tmp1 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(494)
						::String n = tmp1;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(498)
						{
							HX_STACK_LINE(499)
							::String tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(499)
							::String _switch_7 = (tmp2);
							if (  ( _switch_7==HX_HCSTRING("null","\x87","\x9e","\x0e","\x49"))){
								HX_STACK_LINE(500)
								::haxe::macro::Constant tmp3 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING("NULL","\x87","\x66","\xcf","\x33"));		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(500)
								::haxe::macro::ExprDef tmp4 = ::haxe::macro::ExprDef_obj::EConst(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(500)
								Dynamic tmp5 = v->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
								struct _Function_6_1{
									inline static Dynamic Block( Dynamic &tmp5,::haxe::macro::ExprDef &tmp4){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",500,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp4,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(500)
								Dynamic tmp6 = _Function_6_1::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(500)
								return tmp6;
							}
							else if (  ( _switch_7==HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"))){
								HX_STACK_LINE(501)
								::haxe::macro::Constant tmp3 = ::haxe::macro::Constant_obj::CInt(HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"));		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(501)
								::haxe::macro::ExprDef tmp4 = ::haxe::macro::ExprDef_obj::EConst(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(501)
								Dynamic tmp5 = v->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
								struct _Function_6_1{
									inline static Dynamic Block( Dynamic &tmp5,::haxe::macro::ExprDef &tmp4){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",501,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp4,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(501)
								Dynamic tmp6 = _Function_6_1::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(501)
								return tmp6;
							}
							else if (  ( _switch_7==HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb"))){
								HX_STACK_LINE(502)
								::haxe::macro::Constant tmp3 = ::haxe::macro::Constant_obj::CInt(HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79"));		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(502)
								::haxe::macro::ExprDef tmp4 = ::haxe::macro::ExprDef_obj::EConst(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(502)
								Dynamic tmp5 = v->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
								struct _Function_6_1{
									inline static Dynamic Block( Dynamic &tmp5,::haxe::macro::ExprDef &tmp4){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",502,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp4,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(502)
								Dynamic tmp6 = _Function_6_1::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(502)
								return tmp6;
							}
						}
					}
					;break;
					default: {
					}
				}
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(508)
	Dynamic tmp = this->manager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(508)
	::haxe::macro::ExprDef tmp1 = ::haxe::macro::ExprDef_obj::EField(tmp,HX_HCSTRING("quoteAny","\x10","\x3d","\xa0","\xaf"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(508)
	Dynamic tmp2 = v->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &tmp2,::haxe::macro::ExprDef &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",508,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp1,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(508)
	Dynamic tmp3 = _Function_1_1::Block(tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(508)
	Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(508)
	::sys::db::RecordType tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(508)
	Dynamic tmp6 = this->ensureType(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(508)
	::haxe::macro::ExprDef tmp7 = ::haxe::macro::ExprDef_obj::ECall(tmp3,cpp::ArrayBase_obj::__new().Add(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(508)
	Dynamic tmp8 = v->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	struct _Function_1_2{
		inline static Dynamic Block( ::haxe::macro::ExprDef &tmp7,Dynamic &tmp8){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",508,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp7,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp8,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(508)
	Dynamic tmp9 = _Function_1_2::Block(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(508)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC2(RecordMacros_obj,sqlQuoteValue,return )

Dynamic RecordMacros_obj::sqlAddValue( Dynamic sql,Dynamic v,::sys::db::RecordType t){
	HX_STACK_FRAME("sys.db.RecordMacros","sqlAddValue",0x2c2814d7,"sys.db.RecordMacros.sqlAddValue","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",511,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sql,"sql")
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(512)
	Dynamic tmp = sql;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(512)
	Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(512)
	::sys::db::RecordType tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(512)
	Dynamic tmp3 = this->sqlQuoteValue(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(512)
	::haxe::macro::ExprDef tmp4 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(512)
	Dynamic tmp5 = sql->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &tmp5,::haxe::macro::ExprDef &tmp4){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",512,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp4,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(512)
	Dynamic tmp6 = _Function_1_1::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(512)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC3(RecordMacros_obj,sqlAddValue,return )

int RecordMacros_obj::unifyClass( ::sys::db::RecordType t){
	HX_STACK_FRAME("sys.db.RecordMacros","unifyClass",0x52336efc,"sys.db.RecordMacros.unifyClass","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",515,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(516)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(516)
	switch( (int)(t->__Index())){
		case (int)0: case (int)1: case (int)2: case (int)3: case (int)20: case (int)23: case (int)24: case (int)25: case (int)26: case (int)27: case (int)28: case (int)29: {
			HX_STACK_LINE(517)
			tmp = (int)0;
		}
		;break;
		case (int)4: case (int)5: case (int)6: case (int)7: {
			HX_STACK_LINE(518)
			tmp = (int)1;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(519)
			tmp = (int)2;
		}
		;break;
		case (int)9: case (int)13: case (int)14: case (int)15: case (int)21: {
			HX_STACK_LINE(520)
			tmp = (int)3;
		}
		;break;
		case (int)10: case (int)11: case (int)12: {
			HX_STACK_LINE(521)
			tmp = (int)4;
		}
		;break;
		case (int)16: case (int)17: case (int)18: case (int)19: case (int)22: case (int)30: {
			HX_STACK_LINE(522)
			tmp = (int)5;
		}
		;break;
		case (int)32: {
			HX_STACK_LINE(523)
			tmp = (int)6;
		}
		;break;
		case (int)33: {
			HX_STACK_LINE(524)
			tmp = (int)7;
		}
		;break;
		case (int)31: {
			HX_STACK_LINE(525)
			tmp = (int)-1;
		}
		;break;
	}
	HX_STACK_LINE(516)
	return tmp;
	HX_STACK_LINE(516)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,unifyClass,return )

bool RecordMacros_obj::tryUnify( ::sys::db::RecordType t,::sys::db::RecordType rt){
	HX_STACK_FRAME("sys.db.RecordMacros","tryUnify",0x2079454f,"sys.db.RecordMacros.tryUnify","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",529,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(rt,"rt")
	HX_STACK_LINE(530)
	bool tmp = (t == rt);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	if ((tmp)){
		HX_STACK_LINE(530)
		return true;
	}
	HX_STACK_LINE(531)
	::sys::db::RecordType tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(531)
	int tmp2 = this->unifyClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(531)
	int c = tmp2;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(532)
	bool tmp3 = (c < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(532)
	if ((tmp3)){
		HX_STACK_LINE(532)
		::sys::db::RecordType tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(532)
		::sys::db::RecordType tmp5 = rt;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(532)
		bool tmp6 = ::Type_obj::enumEq(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(532)
		return tmp6;
	}
	HX_STACK_LINE(533)
	::sys::db::RecordType tmp4 = rt;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(533)
	int tmp5 = this->unifyClass(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(533)
	int rc = tmp5;		HX_STACK_VAR(rc,"rc");
	HX_STACK_LINE(534)
	bool tmp6 = (c == rc);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(534)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(534)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(534)
	if ((tmp7)){
		HX_STACK_LINE(534)
		bool tmp9 = (c == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(534)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(534)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(534)
		if ((tmp11)){
			HX_STACK_LINE(534)
			tmp8 = (rc == (int)1);
		}
		else{
			HX_STACK_LINE(534)
			tmp8 = false;
		}
	}
	else{
		HX_STACK_LINE(534)
		tmp8 = true;
	}
	HX_STACK_LINE(534)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(RecordMacros_obj,tryUnify,return )

::String RecordMacros_obj::typeStr( ::sys::db::RecordType t){
	HX_STACK_FRAME("sys.db.RecordMacros","typeStr",0x425cecb0,"sys.db.RecordMacros.typeStr","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",537,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(538)
	::sys::db::RecordType tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(538)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(538)
	::String tmp2 = tmp1.substr((int)1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(538)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,typeStr,return )

bool RecordMacros_obj::canStringify( ::sys::db::RecordType t){
	HX_STACK_FRAME("sys.db.RecordMacros","canStringify",0x8d94c662,"sys.db.RecordMacros.canStringify","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",541,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(542)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(542)
	{
		HX_STACK_LINE(542)
		::sys::db::RecordType tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(542)
		int tmp2 = this->unifyClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(542)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(542)
		int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(542)
		switch( (int)(tmp3)){
			case (int)0: case (int)1: case (int)2: case (int)3: case (int)4: case (int)5: case (int)7: {
				HX_STACK_LINE(543)
				tmp = true;
			}
			;break;
			default: {
				HX_STACK_LINE(544)
				tmp = false;
			}
		}
	}
	HX_STACK_LINE(542)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,canStringify,return )

::haxe::macro::ComplexType RecordMacros_obj::convertType( ::sys::db::RecordType t){
	HX_STACK_FRAME("sys.db.RecordMacros","convertType",0x1b0ce166,"sys.db.RecordMacros.convertType","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",548,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(549)
	Array< ::String > pack = Array_obj< ::String >::__new();		HX_STACK_VAR(pack,"pack");
	HX_STACK_LINE(551)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(551)
	{
		HX_STACK_LINE(551)
		::sys::db::RecordType tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(551)
		int tmp2 = this->unifyClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(551)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(551)
		int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(551)
		switch( (int)(tmp3)){
			case (int)0: {
				HX_STACK_LINE(552)
				tmp = HX_HCSTRING("Int","\xcf","\xc4","\x37","\x00");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(553)
				tmp = HX_HCSTRING("Float","\x7c","\x35","\xc4","\x95");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(554)
				tmp = HX_HCSTRING("Bool","\x4a","\xb0","\xf4","\x2b");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(555)
				tmp = HX_HCSTRING("String","\xf1","\x9c","\xc4","\x45");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(556)
				tmp = HX_HCSTRING("Date","\x4e","\x82","\x3c","\x2d");
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(557)
				pack = Array_obj< ::String >::__new().Add(HX_HCSTRING("haxe","\x26","\x34","\x08","\x45")).Add(HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"));
				HX_STACK_LINE(557)
				tmp = HX_HCSTRING("Bytes","\x4b","\x78","\xc5","\x50");
			}
			;break;
			default: {
				HX_STACK_LINE(558)
				HX_STACK_DO_THROW(HX_HCSTRING("assert","\xc6","\x46","\x03","\x4c"));
			}
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp,Array< ::String > &pack){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",550,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp,false);
				__result->Add(HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a") , pack,false);
				__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , Array_obj< ::Dynamic >::__new(),false);
				__result->Add(HX_HCSTRING("sub","\x80","\xa9","\x57","\x00") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(550)
	Dynamic tmp1 = _Function_1_1::Block(tmp,pack);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(550)
	::haxe::macro::ComplexType tmp2 = ::haxe::macro::ComplexType_obj::TPath(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(550)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,convertType,return )

Void RecordMacros_obj::unify( ::sys::db::RecordType t,::sys::db::RecordType rt,Dynamic pos){
{
		HX_STACK_FRAME("sys.db.RecordMacros","unify",0x6287e39c,"sys.db.RecordMacros.unify","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",566,0x502e5710)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_ARG(rt,"rt")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(567)
		::sys::db::RecordType tmp = t;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(567)
		::sys::db::RecordType tmp1 = rt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(567)
		bool tmp2 = this->tryUnify(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(567)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(567)
		if ((tmp3)){
			HX_STACK_LINE(568)
			::sys::db::RecordType tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(568)
			::String tmp5 = this->typeStr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(568)
			::String tmp6 = (tmp5 + HX_HCSTRING(" should be ","\xb0","\x2e","\x91","\xd5"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(568)
			::sys::db::RecordType tmp7 = rt;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(568)
			::String tmp8 = this->typeStr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(568)
			::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(568)
			Dynamic tmp10 = pos;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(568)
			this->error(tmp9,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(RecordMacros_obj,unify,(void))

Dynamic RecordMacros_obj::buildCmp( ::String op,Dynamic e1,Dynamic e2,Dynamic pos){
	HX_STACK_FRAME("sys.db.RecordMacros","buildCmp",0x6976433f,"sys.db.RecordMacros.buildCmp","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",571,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e2,"e2")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(572)
	Dynamic tmp = e1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(572)
	Dynamic tmp1 = this->buildCond(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(572)
	Dynamic r1 = tmp1;		HX_STACK_VAR(r1,"r1");
	HX_STACK_LINE(573)
	Dynamic tmp2 = e2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(573)
	Dynamic tmp3 = this->buildCond(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(573)
	Dynamic r2 = tmp3;		HX_STACK_VAR(r2,"r2");
	HX_STACK_LINE(574)
	::sys::db::RecordType tmp4 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(574)
	::sys::db::RecordType tmp5 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(574)
	Dynamic tmp6 = e2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(574)
	this->unify(tmp4,tmp5,tmp6);
	HX_STACK_LINE(575)
	::sys::db::RecordType tmp7 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(575)
	bool tmp8 = this->tryUnify(tmp7,::sys::db::RecordType_obj::DFloat);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(575)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(575)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(575)
	bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(575)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(575)
	if ((tmp11)){
		HX_STACK_LINE(575)
		::sys::db::RecordType tmp13 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(575)
		::sys::db::RecordType tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(575)
		::sys::db::RecordType tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(575)
		bool tmp16 = this->tryUnify(tmp15,::sys::db::RecordType_obj::DDate);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(575)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(575)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(575)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(575)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(575)
		tmp12 = !(tmp20);
	}
	else{
		HX_STACK_LINE(575)
		tmp12 = false;
	}
	HX_STACK_LINE(575)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(575)
	if ((tmp12)){
		HX_STACK_LINE(575)
		::sys::db::RecordType tmp14 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(575)
		::sys::db::RecordType tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(575)
		bool tmp16 = this->tryUnify(tmp15,::sys::db::RecordType_obj::DText);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(575)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(575)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(575)
		tmp13 = !(tmp18);
	}
	else{
		HX_STACK_LINE(575)
		tmp13 = false;
	}
	HX_STACK_LINE(575)
	if ((tmp13)){
		HX_STACK_LINE(576)
		::sys::db::RecordType tmp14 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(576)
		Dynamic tmp15 = e1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(576)
		this->unify(tmp14,::sys::db::RecordType_obj::DFloat,tmp15);
	}
	HX_STACK_LINE(577)
	Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(577)
	{
		HX_STACK_LINE(577)
		Dynamic e11 = r1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(e11,"e11");
		HX_STACK_LINE(577)
		{
			HX_STACK_LINE(577)
			Dynamic tmp15 = e11;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(577)
			::String tmp16 = op;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(577)
			::haxe::macro::Constant tmp17 = ::haxe::macro::Constant_obj::CString(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(577)
			::haxe::macro::ExprDef tmp18 = ::haxe::macro::ExprDef_obj::EConst(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(577)
			Dynamic tmp19 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
			struct _Function_3_1{
				inline static Dynamic Block( Dynamic &tmp19,::haxe::macro::ExprDef &tmp18){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",577,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp18,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp19,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(577)
			Dynamic tmp20 = _Function_3_1::Block(tmp19,tmp18);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(577)
			::haxe::macro::ExprDef tmp21 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp15,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(577)
			Dynamic tmp22 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
			struct _Function_3_2{
				inline static Dynamic Block( Dynamic &tmp22,::haxe::macro::ExprDef &tmp21){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",577,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp21,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp22,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(577)
			Dynamic tmp23 = _Function_3_2::Block(tmp22,tmp21);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(577)
			Dynamic e12 = tmp23;		HX_STACK_VAR(e12,"e12");
			HX_STACK_LINE(577)
			Dynamic tmp24 = e12;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(577)
			Dynamic tmp25 = r2->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(577)
			::haxe::macro::ExprDef tmp26 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(577)
			Dynamic tmp27 = pos;		HX_STACK_VAR(tmp27,"tmp27");
			struct _Function_3_3{
				inline static Dynamic Block( ::haxe::macro::ExprDef &tmp26,Dynamic &tmp27){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",577,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp26,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp27,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(577)
			tmp14 = _Function_3_3::Block(tmp26,tmp27);
		}
	}
	HX_STACK_LINE(577)
	bool tmp15 = r1->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(577)
	bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(577)
	bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(577)
	if ((tmp16)){
		HX_STACK_LINE(577)
		tmp17 = r2->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(577)
		tmp17 = true;
	}
	struct _Function_1_1{
		inline static Dynamic Block( bool &tmp17,Dynamic &tmp14){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",577,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp14,false);
				__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DBool,false);
				__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp17,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(577)
	Dynamic tmp18 = _Function_1_1::Block(tmp17,tmp14);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(577)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC4(RecordMacros_obj,buildCmp,return )

Dynamic RecordMacros_obj::buildNum( ::String op,Dynamic e1,Dynamic e2,Dynamic pos){
	HX_STACK_FRAME("sys.db.RecordMacros","buildNum",0x697ea2ff,"sys.db.RecordMacros.buildNum","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",580,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e2,"e2")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(581)
	Dynamic tmp = e1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(581)
	Dynamic tmp1 = this->buildCond(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(581)
	Dynamic r1 = tmp1;		HX_STACK_VAR(r1,"r1");
	HX_STACK_LINE(582)
	Dynamic tmp2 = e2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(582)
	Dynamic tmp3 = this->buildCond(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(582)
	Dynamic r2 = tmp3;		HX_STACK_VAR(r2,"r2");
	HX_STACK_LINE(583)
	::sys::db::RecordType tmp4 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(583)
	int tmp5 = this->unifyClass(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(583)
	int c1 = tmp5;		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(584)
	::sys::db::RecordType tmp6 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(584)
	int tmp7 = this->unifyClass(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(584)
	int c2 = tmp7;		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(585)
	bool tmp8 = (c1 > (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(585)
	if ((tmp8)){
		HX_STACK_LINE(586)
		bool tmp9 = (op == HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(586)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(586)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(586)
		if ((tmp10)){
			HX_STACK_LINE(586)
			::sys::db::RecordType tmp12 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(586)
			::sys::db::RecordType tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(586)
			::sys::db::RecordType tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(586)
			tmp11 = this->tryUnify(tmp14,::sys::db::RecordType_obj::DDateTime);
		}
		else{
			HX_STACK_LINE(586)
			tmp11 = false;
		}
		HX_STACK_LINE(586)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(586)
		if ((tmp11)){
			HX_STACK_LINE(586)
			::sys::db::RecordType tmp13 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(586)
			::sys::db::RecordType tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(586)
			tmp12 = this->tryUnify(tmp14,::sys::db::RecordType_obj::DInterval);
		}
		else{
			HX_STACK_LINE(586)
			tmp12 = false;
		}
		HX_STACK_LINE(586)
		if ((tmp12)){
			HX_STACK_LINE(587)
			Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(587)
			{
				HX_STACK_LINE(587)
				Dynamic e11 = r1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(e11,"e11");
				HX_STACK_LINE(587)
				{
					HX_STACK_LINE(587)
					Dynamic tmp14 = e11;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(587)
					::String tmp15 = op;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(587)
					::haxe::macro::Constant tmp16 = ::haxe::macro::Constant_obj::CString(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(587)
					::haxe::macro::ExprDef tmp17 = ::haxe::macro::ExprDef_obj::EConst(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(587)
					Dynamic tmp18 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
					struct _Function_5_1{
						inline static Dynamic Block( ::haxe::macro::ExprDef &tmp17,Dynamic &tmp18){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",587,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp17,false);
								__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp18,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(587)
					Dynamic tmp19 = _Function_5_1::Block(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(587)
					::haxe::macro::ExprDef tmp20 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp14,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(587)
					Dynamic tmp21 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
					struct _Function_5_2{
						inline static Dynamic Block( ::haxe::macro::ExprDef &tmp20,Dynamic &tmp21){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",587,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp20,false);
								__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp21,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(587)
					Dynamic tmp22 = _Function_5_2::Block(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(587)
					Dynamic e12 = tmp22;		HX_STACK_VAR(e12,"e12");
					HX_STACK_LINE(587)
					Dynamic tmp23 = e12;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(587)
					Dynamic tmp24 = r2->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(587)
					::haxe::macro::ExprDef tmp25 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(587)
					Dynamic tmp26 = pos;		HX_STACK_VAR(tmp26,"tmp26");
					struct _Function_5_3{
						inline static Dynamic Block( Dynamic &tmp26,::haxe::macro::ExprDef &tmp25){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",587,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp25,false);
								__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp26,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(587)
					tmp13 = _Function_5_3::Block(tmp26,tmp25);
				}
			}
			HX_STACK_LINE(587)
			bool tmp14 = r1->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			struct _Function_3_1{
				inline static Dynamic Block( Dynamic &tmp13,bool &tmp14){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",587,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp13,false);
						__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DDateTime,false);
						__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp14,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(587)
			Dynamic tmp15 = _Function_3_1::Block(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(587)
			return tmp15;
		}
		HX_STACK_LINE(588)
		::sys::db::RecordType tmp13 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(588)
		Dynamic tmp14 = e1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(588)
		this->unify(tmp13,::sys::db::RecordType_obj::DInt,tmp14);
	}
	HX_STACK_LINE(590)
	bool tmp9 = (c2 > (int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(590)
	if ((tmp9)){
		HX_STACK_LINE(590)
		::sys::db::RecordType tmp10 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(590)
		Dynamic tmp11 = e2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(590)
		this->unify(tmp10,::sys::db::RecordType_obj::DInt,tmp11);
	}
	HX_STACK_LINE(591)
	Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(591)
	{
		HX_STACK_LINE(591)
		Dynamic e11 = r1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(e11,"e11");
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(591)
			Dynamic tmp11 = e11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(591)
			::String tmp12 = op;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(591)
			::haxe::macro::Constant tmp13 = ::haxe::macro::Constant_obj::CString(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(591)
			::haxe::macro::ExprDef tmp14 = ::haxe::macro::ExprDef_obj::EConst(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(591)
			Dynamic tmp15 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
			struct _Function_3_1{
				inline static Dynamic Block( Dynamic &tmp15,::haxe::macro::ExprDef &tmp14){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",591,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp14,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp15,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(591)
			Dynamic tmp16 = _Function_3_1::Block(tmp15,tmp14);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(591)
			::haxe::macro::ExprDef tmp17 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp11,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(591)
			Dynamic tmp18 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
			struct _Function_3_2{
				inline static Dynamic Block( ::haxe::macro::ExprDef &tmp17,Dynamic &tmp18){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",591,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp17,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp18,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(591)
			Dynamic tmp19 = _Function_3_2::Block(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(591)
			Dynamic e12 = tmp19;		HX_STACK_VAR(e12,"e12");
			HX_STACK_LINE(591)
			Dynamic tmp20 = e12;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(591)
			Dynamic tmp21 = r2->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(591)
			::haxe::macro::ExprDef tmp22 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(591)
			Dynamic tmp23 = pos;		HX_STACK_VAR(tmp23,"tmp23");
			struct _Function_3_3{
				inline static Dynamic Block( ::haxe::macro::ExprDef &tmp22,Dynamic &tmp23){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",591,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp22,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp23,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(591)
			tmp10 = _Function_3_3::Block(tmp22,tmp23);
		}
	}
	HX_STACK_LINE(591)
	int tmp11 = (c1 + c2);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(591)
	bool tmp12 = (tmp11 == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(591)
	::sys::db::RecordType tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(591)
	if ((tmp12)){
		HX_STACK_LINE(591)
		tmp13 = ::sys::db::RecordType_obj::DInt;
	}
	else{
		HX_STACK_LINE(591)
		tmp13 = ::sys::db::RecordType_obj::DFloat;
	}
	HX_STACK_LINE(591)
	bool tmp14 = r1->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(591)
	bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(591)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(591)
	if ((tmp15)){
		HX_STACK_LINE(591)
		tmp16 = r2->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(591)
		tmp16 = true;
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::sys::db::RecordType &tmp13,Dynamic &tmp10,bool &tmp16){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",591,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp10,false);
				__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp13,false);
				__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp16,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(591)
	Dynamic tmp17 = _Function_1_1::Block(tmp13,tmp10,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(591)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC4(RecordMacros_obj,buildNum,return )

Dynamic RecordMacros_obj::buildInt( ::String op,Dynamic e1,Dynamic e2,Dynamic pos){
	HX_STACK_FRAME("sys.db.RecordMacros","buildInt",0x697ad1a8,"sys.db.RecordMacros.buildInt","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",594,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e2,"e2")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(595)
	Dynamic tmp = e1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(595)
	Dynamic tmp1 = this->buildCond(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(595)
	Dynamic r1 = tmp1;		HX_STACK_VAR(r1,"r1");
	HX_STACK_LINE(596)
	Dynamic tmp2 = e2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(596)
	Dynamic tmp3 = this->buildCond(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(596)
	Dynamic r2 = tmp3;		HX_STACK_VAR(r2,"r2");
	HX_STACK_LINE(597)
	::sys::db::RecordType tmp4 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(597)
	Dynamic tmp5 = e1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(597)
	this->unify(tmp4,::sys::db::RecordType_obj::DInt,tmp5);
	HX_STACK_LINE(598)
	::sys::db::RecordType tmp6 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(598)
	Dynamic tmp7 = e2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(598)
	this->unify(tmp6,::sys::db::RecordType_obj::DInt,tmp7);
	HX_STACK_LINE(599)
	Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(599)
	{
		HX_STACK_LINE(599)
		Dynamic e11 = r1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(e11,"e11");
		HX_STACK_LINE(599)
		{
			HX_STACK_LINE(599)
			Dynamic tmp9 = e11;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(599)
			::String tmp10 = op;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(599)
			::haxe::macro::Constant tmp11 = ::haxe::macro::Constant_obj::CString(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(599)
			::haxe::macro::ExprDef tmp12 = ::haxe::macro::ExprDef_obj::EConst(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(599)
			Dynamic tmp13 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
			struct _Function_3_1{
				inline static Dynamic Block( Dynamic &tmp13,::haxe::macro::ExprDef &tmp12){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",599,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp12,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp13,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(599)
			Dynamic tmp14 = _Function_3_1::Block(tmp13,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(599)
			::haxe::macro::ExprDef tmp15 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp9,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(599)
			Dynamic tmp16 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			struct _Function_3_2{
				inline static Dynamic Block( ::haxe::macro::ExprDef &tmp15,Dynamic &tmp16){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",599,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp15,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp16,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(599)
			Dynamic tmp17 = _Function_3_2::Block(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(599)
			Dynamic e12 = tmp17;		HX_STACK_VAR(e12,"e12");
			HX_STACK_LINE(599)
			Dynamic tmp18 = e12;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(599)
			Dynamic tmp19 = r2->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(599)
			::haxe::macro::ExprDef tmp20 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(599)
			Dynamic tmp21 = pos;		HX_STACK_VAR(tmp21,"tmp21");
			struct _Function_3_3{
				inline static Dynamic Block( ::haxe::macro::ExprDef &tmp20,Dynamic &tmp21){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",599,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp20,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp21,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(599)
			tmp8 = _Function_3_3::Block(tmp20,tmp21);
		}
	}
	HX_STACK_LINE(599)
	bool tmp9 = r1->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(599)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(599)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(599)
	if ((tmp10)){
		HX_STACK_LINE(599)
		tmp11 = r2->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(599)
		tmp11 = true;
	}
	struct _Function_1_1{
		inline static Dynamic Block( bool &tmp11,Dynamic &tmp8){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",599,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp8,false);
				__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DInt,false);
				__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp11,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(599)
	Dynamic tmp12 = _Function_1_1::Block(tmp11,tmp8);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(599)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC4(RecordMacros_obj,buildInt,return )

Dynamic RecordMacros_obj::buildEq( bool eq,Dynamic e1,Dynamic e2,Dynamic pos){
	HX_STACK_FRAME("sys.db.RecordMacros","buildEq",0xb94c4dd3,"sys.db.RecordMacros.buildEq","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",602,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(eq,"eq")
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e2,"e2")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(603)
	Dynamic r1 = null();		HX_STACK_VAR(r1,"r1");
	HX_STACK_LINE(604)
	{
		HX_STACK_LINE(604)
		::haxe::macro::ExprDef _g = e1->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(604)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(604)
				::haxe::macro::Constant tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(604)
				::haxe::macro::Constant c = tmp;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(606)
				switch( (int)(c->__Index())){
					case (int)3: {
						HX_STACK_LINE(606)
						::String tmp1 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(606)
						::String i = tmp1;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(607)
						{
							HX_STACK_LINE(608)
							Dynamic tmp2 = i.charCodeAt((int)0);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(608)
							bool tmp3 = (tmp2 == (int)36);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(608)
							if ((tmp3)){
								HX_STACK_LINE(609)
								::String tmp4 = i.substr((int)1,null());		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(609)
								Dynamic tmp5 = e2;		HX_STACK_VAR(tmp5,"tmp5");
								struct _Function_6_1{
									inline static Dynamic Block( Dynamic &tmp5,::String &tmp4){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",609,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("field","\xba","\x94","\x93","\x00") , tmp4,false);
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp5,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(609)
								Dynamic tmp6 = _Function_6_1::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(609)
								Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(610)
								Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(610)
								Dynamic tmp9 = this->getField(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(610)
								Dynamic f = tmp9;		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(611)
								Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(611)
								{
									HX_STACK_LINE(611)
									::String tmp11 = tmp7->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(611)
									::String tmp12 = this->quoteField(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(611)
									::String s = tmp12;		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(611)
									::String tmp13 = s;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(611)
									::haxe::macro::Constant tmp14 = ::haxe::macro::Constant_obj::CString(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(611)
									::haxe::macro::ExprDef tmp15 = ::haxe::macro::ExprDef_obj::EConst(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(611)
									Dynamic tmp16 = e1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
									struct _Function_7_1{
										inline static Dynamic Block( ::haxe::macro::ExprDef &tmp15,Dynamic &tmp16){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",611,0x502e5710)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp15,false);
												__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp16,false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(611)
									tmp10 = _Function_7_1::Block(tmp15,tmp16);
								}
								HX_STACK_LINE(611)
								::sys::db::RecordType tmp11 = f->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(611)
								bool tmp12 = f->__Field(HX_HCSTRING("isNull","\x91","\x63","\x75","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
								struct _Function_6_2{
									inline static Dynamic Block( ::sys::db::RecordType &tmp11,Dynamic &tmp10,bool &tmp12){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",611,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp10,false);
											__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp11,false);
											__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp12,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(611)
								Dynamic tmp13 = _Function_6_2::Block(tmp11,tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(611)
								r1 = tmp13;
								HX_STACK_LINE(612)
								e2 = tmp7->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );
								HX_STACK_LINE(613)
								{
									HX_STACK_LINE(613)
									::sys::db::RecordType _g1 = f->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(613)
									switch( (int)(_g1->__Index())){
										case (int)31: {
											HX_STACK_LINE(613)
											::String tmp14 = (::sys::db::RecordType(_g1))->__Param(0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(613)
											::String e = tmp14;		HX_STACK_VAR(e,"e");
											HX_STACK_LINE(614)
											{
												HX_STACK_LINE(615)
												bool ok = false;		HX_STACK_VAR(ok,"ok");
												HX_STACK_LINE(616)
												{
													HX_STACK_LINE(616)
													::haxe::macro::ExprDef _g2 = e2->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
													HX_STACK_LINE(616)
													switch( (int)(_g2->__Index())){
														case (int)0: {
															HX_STACK_LINE(616)
															::haxe::macro::Constant tmp15 = (::haxe::macro::ExprDef(_g2))->__Param(0);		HX_STACK_VAR(tmp15,"tmp15");
															HX_STACK_LINE(616)
															::haxe::macro::Constant c1 = tmp15;		HX_STACK_VAR(c1,"c1");
															HX_STACK_LINE(618)
															switch( (int)(c1->__Index())){
																case (int)3: {
																	HX_STACK_LINE(618)
																	::String tmp16 = (::haxe::macro::Constant(c1))->__Param(0);		HX_STACK_VAR(tmp16,"tmp16");
																	HX_STACK_LINE(618)
																	::String n = tmp16;		HX_STACK_VAR(n,"n");
																	HX_STACK_LINE(619)
																	{
																		HX_STACK_LINE(620)
																		Dynamic tmp17 = n.charCodeAt((int)0);		HX_STACK_VAR(tmp17,"tmp17");
																		HX_STACK_LINE(620)
																		bool tmp18 = (tmp17 == (int)36);		HX_STACK_VAR(tmp18,"tmp18");
																		HX_STACK_LINE(620)
																		if ((tmp18)){
																			HX_STACK_LINE(621)
																			ok = true;
																		}
																		else{
																			HX_STACK_LINE(622)
																			{
																				HX_STACK_LINE(622)
																				::String tmp19 = e;		HX_STACK_VAR(tmp19,"tmp19");
																				HX_STACK_LINE(622)
																				::haxe::macro::Type tmp20 = this->resolveType(tmp19,null());		HX_STACK_VAR(tmp20,"tmp20");
																				HX_STACK_LINE(622)
																				::haxe::macro::Type _g3 = tmp20;		HX_STACK_VAR(_g3,"_g3");
																				HX_STACK_LINE(622)
																				switch( (int)(_g3->__Index())){
																					case (int)1: {
																						HX_STACK_LINE(622)
																						Dynamic tmp21 = (::haxe::macro::Type(_g3))->__Param(0);		HX_STACK_VAR(tmp21,"tmp21");
																						HX_STACK_LINE(622)
																						Dynamic e3 = tmp21;		HX_STACK_VAR(e3,"e3");
																						HX_STACK_LINE(623)
																						{
																							HX_STACK_LINE(624)
																							Dynamic tmp22;		HX_STACK_VAR(tmp22,"tmp22");
																							HX_STACK_LINE(624)
																							{
																								HX_STACK_LINE(624)
																								Dynamic tmp23 = e3->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp23,"tmp23");
																								HX_STACK_LINE(624)
																								::haxe::IMap this1 = tmp23->__Field(HX_HCSTRING("constructs","\x7c","\xbc","\xff","\x67"), hx::paccDynamic );		HX_STACK_VAR(this1,"this1");
																								HX_STACK_LINE(624)
																								::String tmp24 = n;		HX_STACK_VAR(tmp24,"tmp24");
																								HX_STACK_LINE(624)
																								tmp22 = this1->get(tmp24);
																							}
																							HX_STACK_LINE(624)
																							Dynamic c2 = tmp22;		HX_STACK_VAR(c2,"c2");
																							HX_STACK_LINE(625)
																							bool tmp23 = (c2 == null());		HX_STACK_VAR(tmp23,"tmp23");
																							HX_STACK_LINE(625)
																							if ((tmp23)){
																								HX_STACK_LINE(626)
																								bool tmp24 = (n == HX_HCSTRING("null","\x87","\x9e","\x0e","\x49"));		HX_STACK_VAR(tmp24,"tmp24");
																								HX_STACK_LINE(626)
																								if ((tmp24)){
																									HX_STACK_LINE(627)
																									Dynamic tmp25;		HX_STACK_VAR(tmp25,"tmp25");
																									HX_STACK_LINE(627)
																									{
																										HX_STACK_LINE(627)
																										Dynamic sql = r1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(sql,"sql");
																										HX_STACK_LINE(627)
																										Dynamic tmp26 = sql;		HX_STACK_VAR(tmp26,"tmp26");
																										HX_STACK_LINE(627)
																										bool tmp27 = eq;		HX_STACK_VAR(tmp27,"tmp27");
																										HX_STACK_LINE(627)
																										::String tmp28;		HX_STACK_VAR(tmp28,"tmp28");
																										HX_STACK_LINE(627)
																										if ((tmp27)){
																											HX_STACK_LINE(627)
																											tmp28 = HX_HCSTRING(" IS NULL","\x5d","\x0a","\x2e","\xd2");
																										}
																										else{
																											HX_STACK_LINE(627)
																											tmp28 = HX_HCSTRING(" IS NOT NULL","\xaa","\xf7","\xc6","\x26");
																										}
																										HX_STACK_LINE(627)
																										::haxe::macro::Constant tmp29 = ::haxe::macro::Constant_obj::CString(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																										HX_STACK_LINE(627)
																										::haxe::macro::ExprDef tmp30 = ::haxe::macro::ExprDef_obj::EConst(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																										HX_STACK_LINE(627)
																										Dynamic tmp31 = sql->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
																										struct _Function_20_1{
																											inline static Dynamic Block( Dynamic &tmp31,::haxe::macro::ExprDef &tmp30){
																												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",627,0x502e5710)
																												{
																													hx::Anon __result = hx::Anon_obj::Create();
																													__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp30,false);
																													__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp31,false);
																													return __result;
																												}
																												return null();
																											}
																										};
																										HX_STACK_LINE(627)
																										Dynamic tmp32 = _Function_20_1::Block(tmp31,tmp30);		HX_STACK_VAR(tmp32,"tmp32");
																										HX_STACK_LINE(627)
																										::haxe::macro::ExprDef tmp33 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp26,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																										HX_STACK_LINE(627)
																										Dynamic tmp34 = sql->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
																										struct _Function_20_2{
																											inline static Dynamic Block( ::haxe::macro::ExprDef &tmp33,Dynamic &tmp34){
																												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",627,0x502e5710)
																												{
																													hx::Anon __result = hx::Anon_obj::Create();
																													__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp33,false);
																													__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp34,false);
																													return __result;
																												}
																												return null();
																											}
																										};
																										HX_STACK_LINE(627)
																										tmp25 = _Function_20_2::Block(tmp33,tmp34);
																									}
																									struct _Function_19_1{
																										inline static Dynamic Block( Dynamic &tmp25){
																											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",627,0x502e5710)
																											{
																												hx::Anon __result = hx::Anon_obj::Create();
																												__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp25,false);
																												__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DBool,false);
																												__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , false,false);
																												return __result;
																											}
																											return null();
																										}
																									};
																									HX_STACK_LINE(627)
																									Dynamic tmp26 = _Function_19_1::Block(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																									HX_STACK_LINE(627)
																									return tmp26;
																								}
																							}
																							else{
																								HX_STACK_LINE(629)
																								Dynamic tmp24;		HX_STACK_VAR(tmp24,"tmp24");
																								HX_STACK_LINE(629)
																								{
																									HX_STACK_LINE(629)
																									Dynamic e11 = r1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(e11,"e11");
																									HX_STACK_LINE(629)
																									int tmp25 = c2->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
																									HX_STACK_LINE(629)
																									::String tmp26 = ::Std_obj::string(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																									HX_STACK_LINE(629)
																									::haxe::macro::Constant tmp27 = ::haxe::macro::Constant_obj::CInt(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																									HX_STACK_LINE(629)
																									::haxe::macro::ExprDef tmp28 = ::haxe::macro::ExprDef_obj::EConst(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																									HX_STACK_LINE(629)
																									Dynamic tmp29 = e2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
																									struct _Function_19_1{
																										inline static Dynamic Block( ::haxe::macro::ExprDef &tmp28,Dynamic &tmp29){
																											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",629,0x502e5710)
																											{
																												hx::Anon __result = hx::Anon_obj::Create();
																												__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp28,false);
																												__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp29,false);
																												return __result;
																											}
																											return null();
																										}
																									};
																									HX_STACK_LINE(629)
																									Dynamic tmp30 = _Function_19_1::Block(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																									HX_STACK_LINE(629)
																									Dynamic e21 = tmp30;		HX_STACK_VAR(e21,"e21");
																									HX_STACK_LINE(629)
																									{
																										HX_STACK_LINE(629)
																										Dynamic tmp31 = e11;		HX_STACK_VAR(tmp31,"tmp31");
																										HX_STACK_LINE(629)
																										bool tmp32 = eq;		HX_STACK_VAR(tmp32,"tmp32");
																										HX_STACK_LINE(629)
																										::String tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																										HX_STACK_LINE(629)
																										if ((tmp32)){
																											HX_STACK_LINE(629)
																											tmp33 = HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00");
																										}
																										else{
																											HX_STACK_LINE(629)
																											tmp33 = HX_HCSTRING(" != ","\x84","\x13","\x40","\x15");
																										}
																										HX_STACK_LINE(629)
																										::haxe::macro::Constant tmp34 = ::haxe::macro::Constant_obj::CString(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																										HX_STACK_LINE(629)
																										::haxe::macro::ExprDef tmp35 = ::haxe::macro::ExprDef_obj::EConst(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																										HX_STACK_LINE(629)
																										Dynamic tmp36 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
																										struct _Function_20_1{
																											inline static Dynamic Block( Dynamic &tmp36,::haxe::macro::ExprDef &tmp35){
																												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",629,0x502e5710)
																												{
																													hx::Anon __result = hx::Anon_obj::Create();
																													__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp35,false);
																													__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp36,false);
																													return __result;
																												}
																												return null();
																											}
																										};
																										HX_STACK_LINE(629)
																										Dynamic tmp37 = _Function_20_1::Block(tmp36,tmp35);		HX_STACK_VAR(tmp37,"tmp37");
																										HX_STACK_LINE(629)
																										::haxe::macro::ExprDef tmp38 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp31,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																										HX_STACK_LINE(629)
																										Dynamic tmp39 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
																										struct _Function_20_2{
																											inline static Dynamic Block( ::haxe::macro::ExprDef &tmp38,Dynamic &tmp39){
																												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",629,0x502e5710)
																												{
																													hx::Anon __result = hx::Anon_obj::Create();
																													__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp38,false);
																													__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp39,false);
																													return __result;
																												}
																												return null();
																											}
																										};
																										HX_STACK_LINE(629)
																										Dynamic tmp40 = _Function_20_2::Block(tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																										HX_STACK_LINE(629)
																										Dynamic e12 = tmp40;		HX_STACK_VAR(e12,"e12");
																										HX_STACK_LINE(629)
																										Dynamic tmp41 = e12;		HX_STACK_VAR(tmp41,"tmp41");
																										HX_STACK_LINE(629)
																										Dynamic tmp42 = e21;		HX_STACK_VAR(tmp42,"tmp42");
																										HX_STACK_LINE(629)
																										::haxe::macro::ExprDef tmp43 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																										HX_STACK_LINE(629)
																										Dynamic tmp44 = pos;		HX_STACK_VAR(tmp44,"tmp44");
																										struct _Function_20_3{
																											inline static Dynamic Block( Dynamic &tmp44,::haxe::macro::ExprDef &tmp43){
																												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",629,0x502e5710)
																												{
																													hx::Anon __result = hx::Anon_obj::Create();
																													__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp43,false);
																													__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp44,false);
																													return __result;
																												}
																												return null();
																											}
																										};
																										HX_STACK_LINE(629)
																										tmp24 = _Function_20_3::Block(tmp44,tmp43);
																									}
																								}
																								HX_STACK_LINE(629)
																								bool tmp25 = r1->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
																								struct _Function_18_1{
																									inline static Dynamic Block( Dynamic &tmp24,bool &tmp25){
																										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",629,0x502e5710)
																										{
																											hx::Anon __result = hx::Anon_obj::Create();
																											__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp24,false);
																											__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DBool,false);
																											__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp25,false);
																											return __result;
																										}
																										return null();
																									}
																								};
																								HX_STACK_LINE(629)
																								Dynamic tmp26 = _Function_18_1::Block(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																								HX_STACK_LINE(629)
																								return tmp26;
																							}
																						}
																					}
																					;break;
																					default: {
																					}
																				}
																			}
																		}
																	}
																}
																;break;
																default: {
																}
															}
														}
														;break;
														default: {
														}
													}
												}
												HX_STACK_LINE(637)
												bool tmp15 = ok;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(637)
												bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(637)
												if ((tmp16)){
													HX_STACK_LINE(639)
													Array< ::String > epath = e.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(epath,"epath");
													HX_STACK_LINE(640)
													::String tmp17 = epath->pop();		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(640)
													::String ename = tmp17;		HX_STACK_VAR(ename,"ename");
													struct _Function_10_1{
														inline static Dynamic Block( ::String &ename,Array< ::String > &epath){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",641,0x502e5710)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , ename,false);
																__result->Add(HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a") , epath,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(641)
													Dynamic tmp18 = _Function_10_1::Block(ename,epath);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(641)
													::haxe::macro::ComplexType tmp19 = ::haxe::macro::ComplexType_obj::TPath(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(641)
													::haxe::macro::ComplexType etype = tmp19;		HX_STACK_VAR(etype,"etype");
													HX_STACK_LINE(642)
													::haxe::macro::Constant tmp20 = ::haxe::macro::Constant_obj::CIdent(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(642)
													::haxe::macro::ExprDef tmp21 = ::haxe::macro::ExprDef_obj::EConst(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
													struct _Function_10_2{
														inline static Dynamic Block( ){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",642,0x502e5710)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , HX_HCSTRING("C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx","\x10","\x57","\x2e","\x50"),false);
																__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , (int)18409,false);
																__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , (int)18412,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(642)
													Dynamic tmp22 = _Function_10_2::Block();		HX_STACK_VAR(tmp22,"tmp22");
													struct _Function_10_3{
														inline static Dynamic Block( Dynamic &tmp22,::haxe::macro::ExprDef &tmp21){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",642,0x502e5710)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp21,false);
																__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp22,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(642)
													Dynamic tmp23 = _Function_10_3::Block(tmp22,tmp21);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(642)
													::haxe::macro::ExprDef tmp24 = ::haxe::macro::ExprDef_obj::EField(tmp23,HX_HCSTRING("Type","\xda","\x1e","\xe2","\x37"));		HX_STACK_VAR(tmp24,"tmp24");
													struct _Function_10_4{
														inline static Dynamic Block( ){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",642,0x502e5710)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , HX_HCSTRING("C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx","\x10","\x57","\x2e","\x50"),false);
																__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , (int)18409,false);
																__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , (int)18417,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(642)
													Dynamic tmp25 = _Function_10_4::Block();		HX_STACK_VAR(tmp25,"tmp25");
													struct _Function_10_5{
														inline static Dynamic Block( ::haxe::macro::ExprDef &tmp24,Dynamic &tmp25){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",642,0x502e5710)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp24,false);
																__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp25,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(642)
													Dynamic tmp26 = _Function_10_5::Block(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(642)
													::haxe::macro::ExprDef tmp27 = ::haxe::macro::ExprDef_obj::EField(tmp26,HX_HCSTRING("enumIndex","\x51","\x1c","\x63","\xb4"));		HX_STACK_VAR(tmp27,"tmp27");
													struct _Function_10_6{
														inline static Dynamic Block( ){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",642,0x502e5710)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , HX_HCSTRING("C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx","\x10","\x57","\x2e","\x50"),false);
																__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , (int)18409,false);
																__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , (int)18427,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(642)
													Dynamic tmp28 = _Function_10_6::Block();		HX_STACK_VAR(tmp28,"tmp28");
													struct _Function_10_7{
														inline static Dynamic Block( Dynamic &tmp28,::haxe::macro::ExprDef &tmp27){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",642,0x502e5710)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp27,false);
																__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp28,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(642)
													Dynamic tmp29 = _Function_10_7::Block(tmp28,tmp27);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(642)
													Dynamic tmp30 = e2;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(642)
													::haxe::macro::ComplexType tmp31 = etype;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(642)
													::haxe::macro::ExprDef tmp32 = ::haxe::macro::ExprDef_obj::ECheckType(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(642)
													Dynamic tmp33 = e2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
													struct _Function_10_8{
														inline static Dynamic Block( Dynamic &tmp33,::haxe::macro::ExprDef &tmp32){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",642,0x502e5710)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp32,false);
																__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp33,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(642)
													Dynamic tmp34 = _Function_10_8::Block(tmp33,tmp32);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(642)
													::haxe::macro::ExprDef tmp35 = ::haxe::macro::ExprDef_obj::EParenthesis(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(642)
													Dynamic tmp36 = e2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
													struct _Function_10_9{
														inline static Dynamic Block( Dynamic &tmp36,::haxe::macro::ExprDef &tmp35){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",642,0x502e5710)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp35,false);
																__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp36,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(642)
													Dynamic tmp37 = _Function_10_9::Block(tmp36,tmp35);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(642)
													::haxe::macro::ExprDef tmp38 = ::haxe::macro::ExprDef_obj::ECall(tmp29,cpp::ArrayBase_obj::__new().Add(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
													struct _Function_10_10{
														inline static Dynamic Block( ){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",642,0x502e5710)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , HX_HCSTRING("C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx","\x10","\x57","\x2e","\x50"),false);
																__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , (int)18409,false);
																__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , (int)18461,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(642)
													Dynamic tmp39 = _Function_10_10::Block();		HX_STACK_VAR(tmp39,"tmp39");
													struct _Function_10_11{
														inline static Dynamic Block( ::haxe::macro::ExprDef &tmp38,Dynamic &tmp39){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",642,0x502e5710)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp38,false);
																__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp39,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(642)
													Dynamic tmp40 = _Function_10_11::Block(tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(642)
													Dynamic expr = tmp40;		HX_STACK_VAR(expr,"expr");
													HX_STACK_LINE(643)
													Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(643)
													{
														HX_STACK_LINE(643)
														Dynamic e11 = r1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(e11,"e11");
														HX_STACK_LINE(643)
														{
															HX_STACK_LINE(643)
															Dynamic tmp42 = e11;		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(643)
															bool tmp43 = eq;		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(643)
															::String tmp44;		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(643)
															if ((tmp43)){
																HX_STACK_LINE(643)
																tmp44 = HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00");
															}
															else{
																HX_STACK_LINE(643)
																tmp44 = HX_HCSTRING(" != ","\x84","\x13","\x40","\x15");
															}
															HX_STACK_LINE(643)
															::haxe::macro::Constant tmp45 = ::haxe::macro::Constant_obj::CString(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(643)
															::haxe::macro::ExprDef tmp46 = ::haxe::macro::ExprDef_obj::EConst(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(643)
															Dynamic tmp47 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
															struct _Function_12_1{
																inline static Dynamic Block( ::haxe::macro::ExprDef &tmp46,Dynamic &tmp47){
																	HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",643,0x502e5710)
																	{
																		hx::Anon __result = hx::Anon_obj::Create();
																		__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp46,false);
																		__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp47,false);
																		return __result;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(643)
															Dynamic tmp48 = _Function_12_1::Block(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(643)
															::haxe::macro::ExprDef tmp49 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp42,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(643)
															Dynamic tmp50 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
															struct _Function_12_2{
																inline static Dynamic Block( ::haxe::macro::ExprDef &tmp49,Dynamic &tmp50){
																	HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",643,0x502e5710)
																	{
																		hx::Anon __result = hx::Anon_obj::Create();
																		__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp49,false);
																		__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp50,false);
																		return __result;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(643)
															Dynamic tmp51 = _Function_12_2::Block(tmp49,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(643)
															Dynamic e12 = tmp51;		HX_STACK_VAR(e12,"e12");
															HX_STACK_LINE(643)
															Dynamic tmp52 = e12;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(643)
															Dynamic tmp53 = expr;		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(643)
															::haxe::macro::ExprDef tmp54 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp52,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
															HX_STACK_LINE(643)
															Dynamic tmp55 = pos;		HX_STACK_VAR(tmp55,"tmp55");
															struct _Function_12_3{
																inline static Dynamic Block( ::haxe::macro::ExprDef &tmp54,Dynamic &tmp55){
																	HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",643,0x502e5710)
																	{
																		hx::Anon __result = hx::Anon_obj::Create();
																		__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp54,false);
																		__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp55,false);
																		return __result;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(643)
															tmp41 = _Function_12_3::Block(tmp54,tmp55);
														}
													}
													HX_STACK_LINE(643)
													bool tmp42 = r1->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
													struct _Function_10_12{
														inline static Dynamic Block( bool &tmp42,Dynamic &tmp41){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",643,0x502e5710)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp41,false);
																__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DBool,false);
																__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp42,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(643)
													Dynamic tmp43 = _Function_10_12::Block(tmp42,tmp41);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(643)
													return tmp43;
												}
											}
										}
										;break;
										default: {
										}
									}
								}
							}
						}
					}
					;break;
					default: {
					}
				}
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(652)
	bool tmp = (r1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(652)
	if ((tmp)){
		HX_STACK_LINE(653)
		Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(653)
		Dynamic tmp2 = this->buildCond(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(653)
		r1 = tmp2;
	}
	HX_STACK_LINE(654)
	Dynamic tmp1 = e2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(654)
	Dynamic tmp2 = this->buildCond(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(654)
	Dynamic r2 = tmp2;		HX_STACK_VAR(r2,"r2");
	HX_STACK_LINE(655)
	bool tmp3 = (r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic ) == ::sys::db::RecordType_obj::DNull);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(655)
	if ((tmp3)){
		HX_STACK_LINE(656)
		bool tmp4 = r1->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(656)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(656)
		if ((tmp5)){
			HX_STACK_LINE(657)
			Dynamic tmp6 = e1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(657)
			this->error(HX_HCSTRING("Expression can't be null","\xf9","\x6c","\xa9","\x2c"),tmp6);
		}
		HX_STACK_LINE(658)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(658)
		{
			HX_STACK_LINE(658)
			Dynamic sql = r1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(sql,"sql");
			HX_STACK_LINE(658)
			Dynamic tmp7 = sql;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(658)
			bool tmp8 = eq;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(658)
			::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(658)
			if ((tmp8)){
				HX_STACK_LINE(658)
				tmp9 = HX_HCSTRING(" IS NULL","\x5d","\x0a","\x2e","\xd2");
			}
			else{
				HX_STACK_LINE(658)
				tmp9 = HX_HCSTRING(" IS NOT NULL","\xaa","\xf7","\xc6","\x26");
			}
			HX_STACK_LINE(658)
			::haxe::macro::Constant tmp10 = ::haxe::macro::Constant_obj::CString(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(658)
			::haxe::macro::ExprDef tmp11 = ::haxe::macro::ExprDef_obj::EConst(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(658)
			Dynamic tmp12 = sql->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			struct _Function_3_1{
				inline static Dynamic Block( ::haxe::macro::ExprDef &tmp11,Dynamic &tmp12){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",658,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp11,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp12,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(658)
			Dynamic tmp13 = _Function_3_1::Block(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(658)
			::haxe::macro::ExprDef tmp14 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp7,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(658)
			Dynamic tmp15 = sql->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
			struct _Function_3_2{
				inline static Dynamic Block( Dynamic &tmp15,::haxe::macro::ExprDef &tmp14){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",658,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp14,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp15,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(658)
			tmp6 = _Function_3_2::Block(tmp15,tmp14);
		}
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp6){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",658,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp6,false);
					__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DBool,false);
					__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(658)
		Dynamic tmp7 = _Function_2_1::Block(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(658)
		return tmp7;
	}
	else{
		HX_STACK_LINE(660)
		::sys::db::RecordType tmp4 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(660)
		::sys::db::RecordType tmp5 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(660)
		Dynamic tmp6 = e2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(660)
		this->unify(tmp4,tmp5,tmp6);
		HX_STACK_LINE(661)
		::sys::db::RecordType tmp7 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(661)
		::sys::db::RecordType tmp8 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(661)
		Dynamic tmp9 = e1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(661)
		this->unify(tmp7,tmp8,tmp9);
	}
	HX_STACK_LINE(663)
	Dynamic sql;		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(665)
	bool tmp4 = r1->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(665)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(665)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(665)
	if ((tmp5)){
		HX_STACK_LINE(665)
		tmp6 = r2->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(665)
		tmp6 = true;
	}
	HX_STACK_LINE(665)
	if ((tmp6)){
		HX_STACK_LINE(666)
		Dynamic tmp7 = this->manager;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(666)
		::haxe::macro::ExprDef tmp8 = ::haxe::macro::ExprDef_obj::EField(tmp7,HX_HCSTRING("nullCompare","\xde","\x90","\x75","\xb1"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(666)
		Dynamic tmp9 = pos;		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp9,::haxe::macro::ExprDef &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",666,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp8,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp9,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(666)
		Dynamic tmp10 = _Function_2_1::Block(tmp9,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(666)
		Dynamic tmp11 = r1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(666)
		Dynamic tmp12 = r2->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(666)
		bool tmp13 = eq;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(666)
		::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(666)
		if ((tmp13)){
			HX_STACK_LINE(666)
			tmp14 = HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d");
		}
		else{
			HX_STACK_LINE(666)
			tmp14 = HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb");
		}
		HX_STACK_LINE(666)
		::haxe::macro::Constant tmp15 = ::haxe::macro::Constant_obj::CIdent(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(666)
		::haxe::macro::ExprDef tmp16 = ::haxe::macro::ExprDef_obj::EConst(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(666)
		Dynamic tmp17 = pos;		HX_STACK_VAR(tmp17,"tmp17");
		struct _Function_2_2{
			inline static Dynamic Block( Dynamic &tmp17,::haxe::macro::ExprDef &tmp16){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",666,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp16,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp17,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(666)
		Dynamic tmp18 = _Function_2_2::Block(tmp17,tmp16);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(666)
		::haxe::macro::ExprDef tmp19 = ::haxe::macro::ExprDef_obj::ECall(tmp10,cpp::ArrayBase_obj::__new().Add(tmp11).Add(tmp12).Add(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(666)
		Dynamic tmp20 = pos;		HX_STACK_VAR(tmp20,"tmp20");
		struct _Function_2_3{
			inline static Dynamic Block( Dynamic &tmp20,::haxe::macro::ExprDef &tmp19){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",666,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp19,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp20,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(666)
		Dynamic tmp21 = _Function_2_3::Block(tmp20,tmp19);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(666)
		sql = tmp21;
	}
	else{
		HX_STACK_LINE(668)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(668)
		{
			HX_STACK_LINE(668)
			Dynamic e11 = r1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(e11,"e11");
			HX_STACK_LINE(668)
			{
				HX_STACK_LINE(668)
				Dynamic tmp8 = e11;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(668)
				bool tmp9 = eq;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(668)
				::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(668)
				if ((tmp9)){
					HX_STACK_LINE(668)
					tmp10 = HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00");
				}
				else{
					HX_STACK_LINE(668)
					tmp10 = HX_HCSTRING(" != ","\x84","\x13","\x40","\x15");
				}
				HX_STACK_LINE(668)
				::haxe::macro::Constant tmp11 = ::haxe::macro::Constant_obj::CString(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(668)
				::haxe::macro::ExprDef tmp12 = ::haxe::macro::ExprDef_obj::EConst(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(668)
				Dynamic tmp13 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				struct _Function_4_1{
					inline static Dynamic Block( Dynamic &tmp13,::haxe::macro::ExprDef &tmp12){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",668,0x502e5710)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp12,false);
							__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp13,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(668)
				Dynamic tmp14 = _Function_4_1::Block(tmp13,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(668)
				::haxe::macro::ExprDef tmp15 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp8,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(668)
				Dynamic tmp16 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
				struct _Function_4_2{
					inline static Dynamic Block( ::haxe::macro::ExprDef &tmp15,Dynamic &tmp16){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",668,0x502e5710)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp15,false);
							__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp16,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(668)
				Dynamic tmp17 = _Function_4_2::Block(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(668)
				Dynamic e12 = tmp17;		HX_STACK_VAR(e12,"e12");
				HX_STACK_LINE(668)
				Dynamic tmp18 = e12;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(668)
				Dynamic tmp19 = r2->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(668)
				::haxe::macro::ExprDef tmp20 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(668)
				Dynamic tmp21 = pos;		HX_STACK_VAR(tmp21,"tmp21");
				struct _Function_4_3{
					inline static Dynamic Block( ::haxe::macro::ExprDef &tmp20,Dynamic &tmp21){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",668,0x502e5710)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp20,false);
							__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp21,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(668)
				tmp7 = _Function_4_3::Block(tmp20,tmp21);
			}
		}
		HX_STACK_LINE(668)
		sql = tmp7;
	}
	HX_STACK_LINE(669)
	Dynamic tmp7 = sql;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(669)
	bool tmp8 = r1->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(669)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(669)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(669)
	if ((tmp9)){
		HX_STACK_LINE(669)
		tmp10 = r2->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(669)
		tmp10 = true;
	}
	struct _Function_1_1{
		inline static Dynamic Block( bool &tmp10,Dynamic &tmp7){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",669,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp7,false);
				__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DBool,false);
				__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp10,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(669)
	Dynamic tmp11 = _Function_1_1::Block(tmp10,tmp7);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(669)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC4(RecordMacros_obj,buildEq,return )

Dynamic RecordMacros_obj::buildDefault( Dynamic cond){
	HX_STACK_FRAME("sys.db.RecordMacros","buildDefault",0xf0c1edfa,"sys.db.RecordMacros.buildDefault","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",672,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cond,"cond")
	HX_STACK_LINE(673)
	Dynamic tmp = cond;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(673)
	::haxe::macro::Type tmp1 = this->_typeof(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(673)
	::haxe::macro::Type t = tmp1;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(674)
	this->isNull = false;
	HX_STACK_LINE(675)
	::sys::db::RecordType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(675)
	try
	{
	HX_STACK_CATCHABLE(::String, 0);
	{
		HX_STACK_LINE(675)
		::haxe::macro::Type tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(675)
		tmp2 = this->makeType(tmp3);
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String e = __e;{
				HX_STACK_LINE(675)
				try
				{
				HX_STACK_CATCHABLE(::String, 0);
				{
					HX_STACK_LINE(675)
					::haxe::macro::Type tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(675)
					::haxe::macro::Type tmp4 = this->follow(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(675)
					tmp2 = this->makeType(tmp4);
				}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e1 = __e;{
							HX_STACK_LINE(675)
							::haxe::macro::Type tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(675)
							::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(675)
							::String tmp5 = (HX_HCSTRING("Unsupported type ","\x5b","\xfe","\x5a","\x0c") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(675)
							Dynamic tmp6 = cond->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(675)
							tmp2 = this->error(tmp5,tmp6);
						}
					}
					else {
					    HX_STACK_DO_THROW(__e);
					}
				}
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(675)
	::sys::db::RecordType d = tmp2;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(676)
	Dynamic tmp3 = cond;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(676)
	::sys::db::RecordType tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(676)
	Dynamic tmp5 = this->sqlQuoteValue(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(676)
	::sys::db::RecordType tmp6 = d;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(676)
	bool tmp7 = this->isNull;		HX_STACK_VAR(tmp7,"tmp7");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &tmp5,::sys::db::RecordType &tmp6,bool &tmp7){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",676,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp5,false);
				__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp6,false);
				__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp7,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(676)
	Dynamic tmp8 = _Function_1_1::Block(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(676)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,buildDefault,return )

Dynamic RecordMacros_obj::getField( Dynamic f){
	HX_STACK_FRAME("sys.db.RecordMacros","getField",0x7635db8b,"sys.db.RecordMacros.getField","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",679,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(680)
	Dynamic tmp = this->inf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(680)
	::String tmp1 = f->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(680)
	Dynamic tmp2 = tmp->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(680)
	Dynamic fi = tmp2;		HX_STACK_VAR(fi,"fi");
	HX_STACK_LINE(681)
	bool tmp3 = (fi == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(681)
	if ((tmp3)){
		HX_STACK_LINE(682)
		{
			HX_STACK_LINE(682)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(682)
			Dynamic tmp4 = this->inf;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(682)
			cpp::ArrayBase _g1 = tmp4->__Field(HX_HCSTRING("relations","\x37","\x2e","\x4b","\xe4"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(682)
			while((true)){
				HX_STACK_LINE(682)
				bool tmp5 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(682)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(682)
				if ((tmp6)){
					HX_STACK_LINE(682)
					break;
				}
				HX_STACK_LINE(682)
				Dynamic tmp7 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(682)
				Dynamic r = tmp7;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(682)
				++(_g);
				HX_STACK_LINE(683)
				bool tmp8 = (r->__Field(HX_HCSTRING("prop","\xa3","\xc7","\x5e","\x4a"), hx::paccDynamic ) == f->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(683)
				if ((tmp8)){
					HX_STACK_LINE(684)
					Array< ::String > path = r->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic )->__Field(HX_HCSTRING("split","\xda","\xea","\x6e","\x81"), hx::paccDynamic )(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(path,"path");
					HX_STACK_LINE(685)
					Dynamic tmp9 = f->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic )->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(685)
					Dynamic p = tmp9;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(686)
					path->push(HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"));
					HX_STACK_LINE(687)
					::String tmp10 = path->shift();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(687)
					::String first = tmp10;		HX_STACK_VAR(first,"first");
					HX_STACK_LINE(688)
					::String tmp11 = first;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(688)
					::haxe::macro::Constant tmp12 = ::haxe::macro::Constant_obj::CIdent(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(688)
					::haxe::macro::ExprDef tmp13 = ::haxe::macro::ExprDef_obj::EConst(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(688)
					Dynamic tmp14 = p;		HX_STACK_VAR(tmp14,"tmp14");
					struct _Function_5_1{
						inline static Dynamic Block( ::haxe::macro::ExprDef &tmp13,Dynamic &tmp14){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",688,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp13,false);
								__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp14,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(688)
					Dynamic tmp15 = _Function_5_1::Block(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(688)
					Dynamic mpath = tmp15;		HX_STACK_VAR(mpath,"mpath");
					HX_STACK_LINE(689)
					{
						HX_STACK_LINE(689)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(689)
						while((true)){
							HX_STACK_LINE(689)
							bool tmp16 = (_g2 < path->length);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(689)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(689)
							if ((tmp17)){
								HX_STACK_LINE(689)
								break;
							}
							HX_STACK_LINE(689)
							::String tmp18 = path->__get(_g2);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(689)
							::String e = tmp18;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(689)
							++(_g2);
							HX_STACK_LINE(690)
							Dynamic tmp19 = mpath;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(690)
							::String tmp20 = e;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(690)
							::haxe::macro::ExprDef tmp21 = ::haxe::macro::ExprDef_obj::EField(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(690)
							Dynamic tmp22 = p;		HX_STACK_VAR(tmp22,"tmp22");
							struct _Function_7_1{
								inline static Dynamic Block( Dynamic &tmp22,::haxe::macro::ExprDef &tmp21){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",690,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp21,false);
										__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp22,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(690)
							Dynamic tmp23 = _Function_7_1::Block(tmp22,tmp21);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(690)
							mpath = tmp23;
						}
					}
					HX_STACK_LINE(691)
					Dynamic tmp16 = mpath;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(691)
					::haxe::macro::Type tmp17 = this->_typeof(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(691)
					Dynamic tmp18 = p;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(691)
					::sys::db::RecordMacros tmp19 = this->getManager(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(691)
					::sys::db::RecordMacros m = tmp19;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(692)
					Dynamic tmp20 = mpath;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(692)
					::haxe::macro::ExprDef tmp21 = ::haxe::macro::ExprDef_obj::EField(tmp20,HX_HCSTRING("unsafeGetId","\x0b","\xb4","\x5c","\x0c"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(692)
					Dynamic tmp22 = p;		HX_STACK_VAR(tmp22,"tmp22");
					struct _Function_5_2{
						inline static Dynamic Block( Dynamic &tmp22,::haxe::macro::ExprDef &tmp21){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",692,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp21,false);
								__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp22,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(692)
					Dynamic tmp23 = _Function_5_2::Block(tmp22,tmp21);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(692)
					::haxe::macro::ExprDef tmp24 = ::haxe::macro::ExprDef_obj::ECall(tmp23,cpp::ArrayBase_obj::__new().Add(f->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic )));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(692)
					Dynamic tmp25 = p;		HX_STACK_VAR(tmp25,"tmp25");
					struct _Function_5_3{
						inline static Dynamic Block( ::haxe::macro::ExprDef &tmp24,Dynamic &tmp25){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",692,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp24,false);
								__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp25,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(692)
					Dynamic tmp26 = _Function_5_3::Block(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(692)
					Dynamic getid = tmp26;		HX_STACK_VAR(getid,"getid");
					HX_STACK_LINE(693)
					f->__FieldRef(HX_HCSTRING("field","\xba","\x94","\x93","\x00")) = r->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic );
					HX_STACK_LINE(694)
					Dynamic tmp27 = getid;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(694)
					::haxe::ds::StringMap tmp28 = m->inf->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(694)
					::String tmp29 = m->inf->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(694)
					Dynamic tmp30 = tmp28->get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(694)
					::sys::db::RecordType tmp31 = tmp30->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(694)
					Dynamic tmp32 = this->ensureType(tmp27,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(694)
					f->__FieldRef(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43")) = tmp32;
					HX_STACK_LINE(695)
					Dynamic tmp33 = this->inf;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(695)
					::String tmp34 = r->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(695)
					Dynamic tmp35 = tmp33->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(695)
					Dynamic tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(695)
					return tmp36;
				}
			}
		}
		HX_STACK_LINE(697)
		::String tmp4 = (HX_HCSTRING("No database field '","\xfb","\xe3","\x28","\x85") + f->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(697)
		::String tmp5 = (tmp4 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(697)
		Dynamic tmp6 = f->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic )->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(697)
		this->error(tmp5,tmp6);
	}
	HX_STACK_LINE(699)
	Dynamic tmp4 = fi;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(699)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,getField,return )

Dynamic RecordMacros_obj::buildCond( Dynamic cond){
	HX_STACK_FRAME("sys.db.RecordMacros","buildCond",0xde061709,"sys.db.RecordMacros.buildCond","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",702,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cond,"cond")
	HX_STACK_LINE(703)
	Dynamic sql = null();		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(704)
	Dynamic p = cond->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(705)
	{
		HX_STACK_LINE(705)
		::haxe::macro::ExprDef _g = cond->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(705)
		switch( (int)(_g->__Index())){
			case (int)5: {
				HX_STACK_LINE(705)
				cpp::ArrayBase fl = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(fl,"fl");
				HX_STACK_LINE(706)
				{
					HX_STACK_LINE(707)
					bool first = true;		HX_STACK_VAR(first,"first");
					HX_STACK_LINE(708)
					::haxe::macro::Constant tmp = ::haxe::macro::Constant_obj::CString(HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(708)
					::haxe::macro::ExprDef tmp1 = ::haxe::macro::ExprDef_obj::EConst(tmp);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(708)
					Dynamic tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
					struct _Function_4_1{
						inline static Dynamic Block( Dynamic &tmp2,::haxe::macro::ExprDef &tmp1){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",708,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp1,false);
								__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp2,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(708)
					Dynamic tmp3 = _Function_4_1::Block(tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(708)
					Dynamic sql1 = tmp3;		HX_STACK_VAR(sql1,"sql1");
					HX_STACK_LINE(709)
					::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(709)
					::haxe::ds::StringMap fields = tmp4;		HX_STACK_VAR(fields,"fields");
					HX_STACK_LINE(710)
					{
						HX_STACK_LINE(710)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(710)
						while((true)){
							HX_STACK_LINE(710)
							bool tmp5 = (_g1 < fl->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(710)
							bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(710)
							if ((tmp6)){
								HX_STACK_LINE(710)
								break;
							}
							HX_STACK_LINE(710)
							Dynamic tmp7 = fl->__GetItem(_g1);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(710)
							Dynamic f = tmp7;		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(710)
							++(_g1);
							HX_STACK_LINE(711)
							Dynamic tmp8 = f;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(711)
							Dynamic tmp9 = this->getField(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(711)
							Dynamic fi = tmp9;		HX_STACK_VAR(fi,"fi");
							HX_STACK_LINE(712)
							bool tmp10 = first;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(712)
							if ((tmp10)){
								HX_STACK_LINE(713)
								first = false;
							}
							else{
								HX_STACK_LINE(715)
								Dynamic tmp11 = sql1;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(715)
								::haxe::macro::Constant tmp12 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING(" AND ","\xa9","\xd9","\x04","\x98"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(715)
								::haxe::macro::ExprDef tmp13 = ::haxe::macro::ExprDef_obj::EConst(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(715)
								Dynamic tmp14 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
								struct _Function_7_1{
									inline static Dynamic Block( ::haxe::macro::ExprDef &tmp13,Dynamic &tmp14){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",715,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp13,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp14,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(715)
								Dynamic tmp15 = _Function_7_1::Block(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(715)
								::haxe::macro::ExprDef tmp16 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp11,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(715)
								Dynamic tmp17 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
								struct _Function_7_2{
									inline static Dynamic Block( Dynamic &tmp17,::haxe::macro::ExprDef &tmp16){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",715,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp16,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp17,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(715)
								Dynamic tmp18 = _Function_7_2::Block(tmp17,tmp16);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(715)
								sql1 = tmp18;
							}
							HX_STACK_LINE(716)
							Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(716)
							{
								HX_STACK_LINE(716)
								::String tmp12 = fi->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(716)
								::String tmp13 = this->quoteField(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(716)
								bool tmp14 = fi->__Field(HX_HCSTRING("isNull","\x91","\x63","\x75","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(716)
								::String tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(716)
								if ((tmp14)){
									HX_STACK_LINE(716)
									tmp15 = HX_HCSTRING(" <=> ","\x03","\xdd","\xa9","\x94");
								}
								else{
									HX_STACK_LINE(716)
									tmp15 = HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00");
								}
								HX_STACK_LINE(716)
								::String tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(716)
								::String s = tmp16;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(716)
								Dynamic tmp17 = sql1;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(716)
								::String tmp18 = s;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(716)
								::haxe::macro::Constant tmp19 = ::haxe::macro::Constant_obj::CString(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(716)
								::haxe::macro::ExprDef tmp20 = ::haxe::macro::ExprDef_obj::EConst(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(716)
								Dynamic tmp21 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
								struct _Function_7_1{
									inline static Dynamic Block( ::haxe::macro::ExprDef &tmp20,Dynamic &tmp21){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",716,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp20,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp21,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(716)
								Dynamic tmp22 = _Function_7_1::Block(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(716)
								::haxe::macro::ExprDef tmp23 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp17,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(716)
								Dynamic tmp24 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
								struct _Function_7_2{
									inline static Dynamic Block( ::haxe::macro::ExprDef &tmp23,Dynamic &tmp24){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",716,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp23,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp24,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(716)
								tmp11 = _Function_7_2::Block(tmp23,tmp24);
							}
							HX_STACK_LINE(716)
							sql1 = tmp11;
							HX_STACK_LINE(717)
							Dynamic tmp12 = sql1;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(717)
							Dynamic tmp13 = f->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(717)
							::sys::db::RecordType tmp14 = fi->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(717)
							Dynamic tmp15 = this->sqlQuoteValue(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(717)
							::haxe::macro::ExprDef tmp16 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp12,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(717)
							Dynamic tmp17 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
							struct _Function_6_1{
								inline static Dynamic Block( Dynamic &tmp17,::haxe::macro::ExprDef &tmp16){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",717,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp16,false);
										__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp17,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(717)
							Dynamic tmp18 = _Function_6_1::Block(tmp17,tmp16);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(717)
							sql1 = tmp18;
							HX_STACK_LINE(718)
							::String tmp19 = fi->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(718)
							bool tmp20 = fields->exists(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(718)
							if ((tmp20)){
								HX_STACK_LINE(719)
								::String tmp21 = (HX_HCSTRING("Duplicate field ","\x3b","\x38","\x1b","\x1c") + fi->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(719)
								Dynamic tmp22 = p;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(719)
								this->error(tmp21,tmp22);
							}
							else{
								HX_STACK_LINE(721)
								::String tmp21 = fi->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(721)
								fields->set(tmp21,true);
							}
						}
					}
					HX_STACK_LINE(723)
					bool tmp5 = first;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(723)
					if ((tmp5)){
						HX_STACK_LINE(723)
						Dynamic tmp6 = sql1;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(723)
						::haxe::macro::Constant tmp7 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(723)
						::haxe::macro::ExprDef tmp8 = ::haxe::macro::ExprDef_obj::EConst(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(723)
						Dynamic tmp9 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
						struct _Function_5_1{
							inline static Dynamic Block( Dynamic &tmp9,::haxe::macro::ExprDef &tmp8){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",723,0x502e5710)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp8,false);
									__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp9,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(723)
						Dynamic tmp10 = _Function_5_1::Block(tmp9,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(723)
						::haxe::macro::ExprDef tmp11 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp6,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(723)
						Dynamic tmp12 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
						struct _Function_5_2{
							inline static Dynamic Block( ::haxe::macro::ExprDef &tmp11,Dynamic &tmp12){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",723,0x502e5710)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp11,false);
									__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp12,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(723)
						_Function_5_2::Block(tmp11,tmp12);
					}
					HX_STACK_LINE(724)
					Dynamic tmp6 = sql1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(724)
					::haxe::macro::Constant tmp7 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(724)
					::haxe::macro::ExprDef tmp8 = ::haxe::macro::ExprDef_obj::EConst(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(724)
					Dynamic tmp9 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					struct _Function_4_2{
						inline static Dynamic Block( Dynamic &tmp9,::haxe::macro::ExprDef &tmp8){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",724,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp8,false);
								__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp9,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(724)
					Dynamic tmp10 = _Function_4_2::Block(tmp9,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(724)
					::haxe::macro::ExprDef tmp11 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp6,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(724)
					Dynamic tmp12 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					struct _Function_4_3{
						inline static Dynamic Block( ::haxe::macro::ExprDef &tmp11,Dynamic &tmp12){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",724,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp11,false);
								__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp12,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(724)
					Dynamic tmp13 = _Function_4_3::Block(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(724)
					sql1 = tmp13;
					struct _Function_4_4{
						inline static Dynamic Block( Dynamic &sql1){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",725,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , sql1,false);
								__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DBool,false);
								__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , false,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(725)
					Dynamic tmp14 = _Function_4_4::Block(sql1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(725)
					return tmp14;
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(705)
				Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(705)
				Dynamic e = tmp;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(726)
				{
					HX_STACK_LINE(727)
					Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(727)
					Dynamic tmp2 = this->buildCond(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(727)
					Dynamic r = tmp2;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(728)
					Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(728)
					{
						HX_STACK_LINE(728)
						::haxe::macro::Constant tmp4 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(728)
						::haxe::macro::ExprDef tmp5 = ::haxe::macro::ExprDef_obj::EConst(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(728)
						Dynamic tmp6 = p;		HX_STACK_VAR(tmp6,"tmp6");
						struct _Function_5_1{
							inline static Dynamic Block( ::haxe::macro::ExprDef &tmp5,Dynamic &tmp6){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",728,0x502e5710)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp5,false);
									__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp6,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(728)
						Dynamic tmp7 = _Function_5_1::Block(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(728)
						Dynamic e1 = tmp7;		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(728)
						Dynamic tmp8 = e1;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(728)
						Dynamic tmp9 = r->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(728)
						::haxe::macro::ExprDef tmp10 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(728)
						Dynamic tmp11 = p;		HX_STACK_VAR(tmp11,"tmp11");
						struct _Function_5_2{
							inline static Dynamic Block( Dynamic &tmp11,::haxe::macro::ExprDef &tmp10){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",728,0x502e5710)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp10,false);
									__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp11,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(728)
						tmp3 = _Function_5_2::Block(tmp11,tmp10);
					}
					HX_STACK_LINE(728)
					r->__FieldRef(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00")) = tmp3;
					HX_STACK_LINE(729)
					Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(729)
					{
						HX_STACK_LINE(729)
						Dynamic sql1 = r->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(sql1,"sql1");
						HX_STACK_LINE(729)
						Dynamic tmp5 = sql1;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(729)
						::haxe::macro::Constant tmp6 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(729)
						::haxe::macro::ExprDef tmp7 = ::haxe::macro::ExprDef_obj::EConst(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(729)
						Dynamic tmp8 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
						struct _Function_5_1{
							inline static Dynamic Block( ::haxe::macro::ExprDef &tmp7,Dynamic &tmp8){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",729,0x502e5710)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp7,false);
									__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp8,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(729)
						Dynamic tmp9 = _Function_5_1::Block(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(729)
						::haxe::macro::ExprDef tmp10 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp5,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(729)
						Dynamic tmp11 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
						struct _Function_5_2{
							inline static Dynamic Block( Dynamic &tmp11,::haxe::macro::ExprDef &tmp10){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",729,0x502e5710)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp10,false);
									__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp11,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(729)
						tmp4 = _Function_5_2::Block(tmp11,tmp10);
					}
					HX_STACK_LINE(729)
					r->__FieldRef(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00")) = tmp4;
					HX_STACK_LINE(730)
					Dynamic tmp5 = r;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(730)
					return tmp5;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(705)
				Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(705)
				Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(705)
				Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(705)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(705)
				::haxe::macro::Binop tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(705)
				::haxe::macro::Binop op = tmp2;		HX_STACK_VAR(op,"op");
				HX_STACK_LINE(732)
				switch( (int)(op->__Index())){
					case (int)0: {
						HX_STACK_LINE(734)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(734)
						Dynamic tmp4 = this->buildCond(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(734)
						Dynamic r1 = tmp4;		HX_STACK_VAR(r1,"r1");
						HX_STACK_LINE(735)
						Dynamic tmp5 = e2;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(735)
						Dynamic tmp6 = this->buildCond(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(735)
						Dynamic r2 = tmp6;		HX_STACK_VAR(r2,"r2");
						HX_STACK_LINE(736)
						::sys::db::RecordType tmp7 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(736)
						::sys::db::RecordType tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(736)
						bool tmp9 = this->tryUnify(tmp8,::sys::db::RecordType_obj::DFloat);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(736)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(736)
						if ((tmp9)){
							HX_STACK_LINE(736)
							::sys::db::RecordType tmp11 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(736)
							::sys::db::RecordType tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(736)
							tmp10 = this->tryUnify(tmp12,::sys::db::RecordType_obj::DFloat);
						}
						else{
							HX_STACK_LINE(736)
							tmp10 = false;
						}
						HX_STACK_LINE(736)
						::sys::db::RecordType tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(736)
						if ((tmp10)){
							HX_STACK_LINE(737)
							::sys::db::RecordType tmp12 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(737)
							bool tmp13 = this->tryUnify(tmp12,::sys::db::RecordType_obj::DInt);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(737)
							if ((tmp13)){
								HX_STACK_LINE(737)
								::sys::db::RecordType tmp14 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(737)
								bool tmp15 = this->tryUnify(tmp14,::sys::db::RecordType_obj::DInt);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(737)
								if ((tmp15)){
									HX_STACK_LINE(737)
									tmp11 = ::sys::db::RecordType_obj::DInt;
								}
								else{
									HX_STACK_LINE(737)
									tmp11 = ::sys::db::RecordType_obj::DFloat;
								}
							}
							else{
								HX_STACK_LINE(737)
								tmp11 = ::sys::db::RecordType_obj::DFloat;
							}
						}
						else{
							HX_STACK_LINE(738)
							::sys::db::RecordType tmp12 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(738)
							::sys::db::RecordType tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(738)
							bool tmp14 = this->tryUnify(tmp13,::sys::db::RecordType_obj::DText);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(738)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(738)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(738)
							if ((tmp15)){
								HX_STACK_LINE(738)
								::sys::db::RecordType tmp17 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(738)
								::sys::db::RecordType tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(738)
								::sys::db::RecordType tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(738)
								tmp16 = this->canStringify(tmp19);
							}
							else{
								HX_STACK_LINE(738)
								tmp16 = false;
							}
							HX_STACK_LINE(738)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(738)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(738)
							if ((tmp17)){
								HX_STACK_LINE(738)
								::sys::db::RecordType tmp19 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(738)
								::sys::db::RecordType tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(738)
								::sys::db::RecordType tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(738)
								bool tmp22 = this->tryUnify(tmp21,::sys::db::RecordType_obj::DText);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(738)
								bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(738)
								bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(738)
								if ((tmp24)){
									HX_STACK_LINE(738)
									::sys::db::RecordType tmp25 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(738)
									::sys::db::RecordType tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(738)
									::sys::db::RecordType tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(738)
									tmp18 = this->canStringify(tmp27);
								}
								else{
									HX_STACK_LINE(738)
									tmp18 = false;
								}
							}
							else{
								HX_STACK_LINE(738)
								tmp18 = true;
							}
							HX_STACK_LINE(738)
							if ((tmp18)){
								HX_STACK_LINE(739)
								Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(739)
								{
									HX_STACK_LINE(739)
									Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(739)
									{
										HX_STACK_LINE(739)
										Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(739)
										{
											HX_STACK_LINE(739)
											Dynamic tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(739)
											{
												HX_STACK_LINE(739)
												::haxe::macro::Constant tmp23 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING("CONCAT(","\x94","\xbc","\x0b","\x8e"));		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(739)
												::haxe::macro::ExprDef tmp24 = ::haxe::macro::ExprDef_obj::EConst(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(739)
												Dynamic tmp25 = p;		HX_STACK_VAR(tmp25,"tmp25");
												struct _Function_10_1{
													inline static Dynamic Block( ::haxe::macro::ExprDef &tmp24,Dynamic &tmp25){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",739,0x502e5710)
														{
															hx::Anon __result = hx::Anon_obj::Create();
															__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp24,false);
															__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp25,false);
															return __result;
														}
														return null();
													}
												};
												HX_STACK_LINE(739)
												Dynamic tmp26 = _Function_10_1::Block(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(739)
												Dynamic e11 = tmp26;		HX_STACK_VAR(e11,"e11");
												HX_STACK_LINE(739)
												Dynamic tmp27 = e11;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(739)
												Dynamic tmp28 = r1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(739)
												::haxe::macro::ExprDef tmp29 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(739)
												Dynamic tmp30 = p;		HX_STACK_VAR(tmp30,"tmp30");
												struct _Function_10_2{
													inline static Dynamic Block( ::haxe::macro::ExprDef &tmp29,Dynamic &tmp30){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",739,0x502e5710)
														{
															hx::Anon __result = hx::Anon_obj::Create();
															__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp29,false);
															__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp30,false);
															return __result;
														}
														return null();
													}
												};
												HX_STACK_LINE(739)
												tmp22 = _Function_10_2::Block(tmp29,tmp30);
											}
											HX_STACK_LINE(739)
											Dynamic sql1 = tmp22;		HX_STACK_VAR(sql1,"sql1");
											HX_STACK_LINE(739)
											Dynamic tmp23 = sql1;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(739)
											::haxe::macro::Constant tmp24 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(739)
											::haxe::macro::ExprDef tmp25 = ::haxe::macro::ExprDef_obj::EConst(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(739)
											Dynamic tmp26 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
											struct _Function_9_1{
												inline static Dynamic Block( Dynamic &tmp26,::haxe::macro::ExprDef &tmp25){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",739,0x502e5710)
													{
														hx::Anon __result = hx::Anon_obj::Create();
														__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp25,false);
														__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp26,false);
														return __result;
													}
													return null();
												}
											};
											HX_STACK_LINE(739)
											Dynamic tmp27 = _Function_9_1::Block(tmp26,tmp25);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(739)
											::haxe::macro::ExprDef tmp28 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp23,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(739)
											Dynamic tmp29 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
											struct _Function_9_2{
												inline static Dynamic Block( ::haxe::macro::ExprDef &tmp28,Dynamic &tmp29){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",739,0x502e5710)
													{
														hx::Anon __result = hx::Anon_obj::Create();
														__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp28,false);
														__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp29,false);
														return __result;
													}
													return null();
												}
											};
											HX_STACK_LINE(739)
											tmp21 = _Function_9_2::Block(tmp28,tmp29);
										}
										HX_STACK_LINE(739)
										Dynamic e11 = tmp21;		HX_STACK_VAR(e11,"e11");
										HX_STACK_LINE(739)
										Dynamic tmp22 = e11;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(739)
										Dynamic tmp23 = r2->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(739)
										::haxe::macro::ExprDef tmp24 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(739)
										Dynamic tmp25 = p;		HX_STACK_VAR(tmp25,"tmp25");
										struct _Function_8_1{
											inline static Dynamic Block( ::haxe::macro::ExprDef &tmp24,Dynamic &tmp25){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",739,0x502e5710)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp24,false);
													__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp25,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(739)
										tmp20 = _Function_8_1::Block(tmp24,tmp25);
									}
									HX_STACK_LINE(739)
									Dynamic sql1 = tmp20;		HX_STACK_VAR(sql1,"sql1");
									HX_STACK_LINE(739)
									Dynamic tmp21 = sql1;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(739)
									::haxe::macro::Constant tmp22 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(739)
									::haxe::macro::ExprDef tmp23 = ::haxe::macro::ExprDef_obj::EConst(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(739)
									Dynamic tmp24 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
									struct _Function_7_1{
										inline static Dynamic Block( ::haxe::macro::ExprDef &tmp23,Dynamic &tmp24){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",739,0x502e5710)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp23,false);
												__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp24,false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(739)
									Dynamic tmp25 = _Function_7_1::Block(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(739)
									::haxe::macro::ExprDef tmp26 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp21,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(739)
									Dynamic tmp27 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
									struct _Function_7_2{
										inline static Dynamic Block( ::haxe::macro::ExprDef &tmp26,Dynamic &tmp27){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",739,0x502e5710)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp26,false);
												__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp27,false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(739)
									tmp19 = _Function_7_2::Block(tmp26,tmp27);
								}
								HX_STACK_LINE(739)
								bool tmp20 = r1->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(739)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(739)
								bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(739)
								if ((tmp21)){
									HX_STACK_LINE(739)
									tmp22 = r2->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );
								}
								else{
									HX_STACK_LINE(739)
									tmp22 = true;
								}
								struct _Function_6_1{
									inline static Dynamic Block( bool &tmp22,Dynamic &tmp19){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",739,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp19,false);
											__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DText,false);
											__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp22,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(739)
								Dynamic tmp23 = _Function_6_1::Block(tmp22,tmp19);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(739)
								return tmp23;
							}
							else{
								HX_STACK_LINE(741)
								::sys::db::RecordType tmp19 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(741)
								::String tmp20 = this->typeStr(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(741)
								::String tmp21 = (HX_HCSTRING("Can't add ","\x82","\x9f","\x0a","\x39") + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(741)
								::String tmp22 = (tmp21 + HX_HCSTRING(" and ","\x89","\x11","\x44","\xad"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(741)
								::sys::db::RecordType tmp23 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(741)
								::String tmp24 = this->typeStr(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(741)
								::String tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(741)
								Dynamic tmp26 = p;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(741)
								tmp11 = this->error(tmp25,tmp26);
							}
						}
						HX_STACK_LINE(736)
						::sys::db::RecordType rt = tmp11;		HX_STACK_VAR(rt,"rt");
						HX_STACK_LINE(742)
						Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(742)
						{
							HX_STACK_LINE(742)
							Dynamic e11 = r1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(e11,"e11");
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								Dynamic tmp13 = e11;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(742)
								::haxe::macro::Constant tmp14 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING("+","\x2b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(742)
								::haxe::macro::ExprDef tmp15 = ::haxe::macro::ExprDef_obj::EConst(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(742)
								Dynamic tmp16 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
								struct _Function_6_1{
									inline static Dynamic Block( ::haxe::macro::ExprDef &tmp15,Dynamic &tmp16){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",742,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp15,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp16,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(742)
								Dynamic tmp17 = _Function_6_1::Block(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(742)
								::haxe::macro::ExprDef tmp18 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp13,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(742)
								Dynamic tmp19 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
								struct _Function_6_2{
									inline static Dynamic Block( Dynamic &tmp19,::haxe::macro::ExprDef &tmp18){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",742,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp18,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp19,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(742)
								Dynamic tmp20 = _Function_6_2::Block(tmp19,tmp18);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(742)
								Dynamic e12 = tmp20;		HX_STACK_VAR(e12,"e12");
								HX_STACK_LINE(742)
								Dynamic tmp21 = e12;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(742)
								Dynamic tmp22 = r2->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(742)
								::haxe::macro::ExprDef tmp23 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(742)
								Dynamic tmp24 = p;		HX_STACK_VAR(tmp24,"tmp24");
								struct _Function_6_3{
									inline static Dynamic Block( ::haxe::macro::ExprDef &tmp23,Dynamic &tmp24){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",742,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp23,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp24,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(742)
								tmp12 = _Function_6_3::Block(tmp23,tmp24);
							}
						}
						HX_STACK_LINE(742)
						::sys::db::RecordType tmp13 = rt;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(742)
						bool tmp14 = r1->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(742)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(742)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(742)
						if ((tmp15)){
							HX_STACK_LINE(742)
							tmp16 = r2->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );
						}
						else{
							HX_STACK_LINE(742)
							tmp16 = true;
						}
						struct _Function_4_1{
							inline static Dynamic Block( ::sys::db::RecordType &tmp13,Dynamic &tmp12,bool &tmp16){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",742,0x502e5710)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp12,false);
									__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp13,false);
									__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp16,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(742)
						Dynamic tmp17 = _Function_4_1::Block(tmp13,tmp12,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(742)
						return tmp17;
					}
					;break;
					case (int)14: case (int)15: {
						HX_STACK_LINE(744)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(744)
						Dynamic tmp4 = this->buildCond(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(744)
						Dynamic r1 = tmp4;		HX_STACK_VAR(r1,"r1");
						HX_STACK_LINE(745)
						Dynamic tmp5 = e2;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(745)
						Dynamic tmp6 = this->buildCond(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(745)
						Dynamic r2 = tmp6;		HX_STACK_VAR(r2,"r2");
						HX_STACK_LINE(746)
						::sys::db::RecordType tmp7 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(746)
						Dynamic tmp8 = e1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(746)
						this->unify(tmp7,::sys::db::RecordType_obj::DBool,tmp8);
						HX_STACK_LINE(747)
						::sys::db::RecordType tmp9 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(747)
						Dynamic tmp10 = e2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(747)
						this->unify(tmp9,::sys::db::RecordType_obj::DBool,tmp10);
						HX_STACK_LINE(748)
						Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(748)
						{
							HX_STACK_LINE(748)
							Dynamic e11 = r1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(e11,"e11");
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								Dynamic tmp12 = e11;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(748)
								bool tmp13 = (op == ::haxe::macro::Binop_obj::OpBoolAnd);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(748)
								::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(748)
								if ((tmp13)){
									HX_STACK_LINE(748)
									tmp14 = HX_HCSTRING(" AND ","\xa9","\xd9","\x04","\x98");
								}
								else{
									HX_STACK_LINE(748)
									tmp14 = HX_HCSTRING(" OR ","\x7d","\x0d","\x63","\x15");
								}
								HX_STACK_LINE(748)
								::haxe::macro::Constant tmp15 = ::haxe::macro::Constant_obj::CString(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(748)
								::haxe::macro::ExprDef tmp16 = ::haxe::macro::ExprDef_obj::EConst(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(748)
								Dynamic tmp17 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
								struct _Function_6_1{
									inline static Dynamic Block( Dynamic &tmp17,::haxe::macro::ExprDef &tmp16){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",748,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp16,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp17,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(748)
								Dynamic tmp18 = _Function_6_1::Block(tmp17,tmp16);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(748)
								::haxe::macro::ExprDef tmp19 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp12,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(748)
								Dynamic tmp20 = e11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
								struct _Function_6_2{
									inline static Dynamic Block( Dynamic &tmp20,::haxe::macro::ExprDef &tmp19){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",748,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp19,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp20,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(748)
								Dynamic tmp21 = _Function_6_2::Block(tmp20,tmp19);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(748)
								Dynamic e12 = tmp21;		HX_STACK_VAR(e12,"e12");
								HX_STACK_LINE(748)
								Dynamic tmp22 = e12;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(748)
								Dynamic tmp23 = r2->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(748)
								::haxe::macro::ExprDef tmp24 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(748)
								Dynamic tmp25 = p;		HX_STACK_VAR(tmp25,"tmp25");
								struct _Function_6_3{
									inline static Dynamic Block( ::haxe::macro::ExprDef &tmp24,Dynamic &tmp25){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",748,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp24,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp25,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(748)
								tmp11 = _Function_6_3::Block(tmp24,tmp25);
							}
						}
						struct _Function_4_1{
							inline static Dynamic Block( Dynamic &tmp11){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",748,0x502e5710)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp11,false);
									__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DBool,false);
									__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , false,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(748)
						Dynamic tmp12 = _Function_4_1::Block(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(748)
						return tmp12;
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(750)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(750)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(750)
						Dynamic tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(750)
						Dynamic tmp6 = this->buildCmp(HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"),tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(750)
						return tmp6;
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(752)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(752)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(752)
						Dynamic tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(752)
						Dynamic tmp6 = this->buildCmp(HX_HCSTRING("<=","\x81","\x34","\x00","\x00"),tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(752)
						return tmp6;
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(754)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(754)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(754)
						Dynamic tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(754)
						Dynamic tmp6 = this->buildCmp(HX_HCSTRING(">","\x3e","\x00","\x00","\x00"),tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(754)
						return tmp6;
					}
					;break;
					case (int)9: {
						HX_STACK_LINE(756)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(756)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(756)
						Dynamic tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(756)
						Dynamic tmp6 = this->buildCmp(HX_HCSTRING("<","\x3c","\x00","\x00","\x00"),tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(756)
						return tmp6;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(758)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(758)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(758)
						Dynamic tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(758)
						Dynamic tmp6 = this->buildNum(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"),tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(758)
						return tmp6;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(760)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(760)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(760)
						Dynamic tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(760)
						Dynamic tmp6 = this->buildNum(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"),tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(760)
						Dynamic r = tmp6;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(761)
						r->__FieldRef(HX_HCSTRING("t","\x74","\x00","\x00","\x00")) = ::sys::db::RecordType_obj::DFloat;
						HX_STACK_LINE(762)
						Dynamic tmp7 = r;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(762)
						return tmp7;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(764)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(764)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(764)
						Dynamic tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(764)
						Dynamic tmp6 = this->buildNum(HX_HCSTRING("*","\x2a","\x00","\x00","\x00"),tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(764)
						return tmp6;
					}
					;break;
					case (int)5: case (int)6: {
						HX_STACK_LINE(766)
						bool tmp3 = (op == ::haxe::macro::Binop_obj::OpEq);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(766)
						Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(766)
						Dynamic tmp5 = e2;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(766)
						Dynamic tmp6 = p;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(766)
						Dynamic tmp7 = this->buildEq(tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(766)
						return tmp7;
					}
					;break;
					case (int)13: {
						HX_STACK_LINE(768)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(768)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(768)
						Dynamic tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(768)
						Dynamic tmp6 = this->buildInt(HX_HCSTRING("^","\x5e","\x00","\x00","\x00"),tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(768)
						return tmp6;
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(770)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(770)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(770)
						Dynamic tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(770)
						Dynamic tmp6 = this->buildInt(HX_HCSTRING("|","\x7c","\x00","\x00","\x00"),tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(770)
						return tmp6;
					}
					;break;
					case (int)11: {
						HX_STACK_LINE(772)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(772)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(772)
						Dynamic tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(772)
						Dynamic tmp6 = this->buildInt(HX_HCSTRING("&","\x26","\x00","\x00","\x00"),tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(772)
						return tmp6;
					}
					;break;
					case (int)17: {
						HX_STACK_LINE(774)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(774)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(774)
						Dynamic tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(774)
						Dynamic tmp6 = this->buildInt(HX_HCSTRING(">>","\x40","\x36","\x00","\x00"),tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(774)
						return tmp6;
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(776)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(776)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(776)
						Dynamic tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(776)
						Dynamic tmp6 = this->buildInt(HX_HCSTRING("<<","\x80","\x34","\x00","\x00"),tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(776)
						return tmp6;
					}
					;break;
					case (int)19: {
						HX_STACK_LINE(778)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(778)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(778)
						Dynamic tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(778)
						Dynamic tmp6 = this->buildNum(HX_HCSTRING("%","\x25","\x00","\x00","\x00"),tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(778)
						return tmp6;
					}
					;break;
					case (int)18: case (int)21: case (int)20: case (int)4: case (int)22: {
						HX_STACK_LINE(780)
						Dynamic tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(780)
						this->error(HX_HCSTRING("Unsupported operation","\xdc","\xd0","\xeb","\x6f"),tmp3);
					}
					;break;
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(705)
				Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(705)
				Dynamic e = tmp;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(705)
				::haxe::macro::Unop tmp1 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(705)
				::haxe::macro::Unop op = tmp1;		HX_STACK_VAR(op,"op");
				HX_STACK_LINE(782)
				{
					HX_STACK_LINE(783)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(783)
					Dynamic tmp3 = this->buildCond(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(783)
					Dynamic r = tmp3;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(784)
					switch( (int)(op->__Index())){
						case (int)2: {
							HX_STACK_LINE(786)
							::haxe::macro::Constant tmp4 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING("!","\x21","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(786)
							::haxe::macro::ExprDef tmp5 = ::haxe::macro::ExprDef_obj::EConst(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(786)
							Dynamic tmp6 = p;		HX_STACK_VAR(tmp6,"tmp6");
							struct _Function_5_1{
								inline static Dynamic Block( ::haxe::macro::ExprDef &tmp5,Dynamic &tmp6){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",786,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp5,false);
										__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp6,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(786)
							Dynamic tmp7 = _Function_5_1::Block(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(786)
							Dynamic sql1 = tmp7;		HX_STACK_VAR(sql1,"sql1");
							HX_STACK_LINE(787)
							::sys::db::RecordType tmp8 = r->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(787)
							Dynamic tmp9 = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(787)
							this->unify(tmp8,::sys::db::RecordType_obj::DBool,tmp9);
							HX_STACK_LINE(788)
							{
								HX_STACK_LINE(788)
								::haxe::macro::ExprDef tmp10 = r->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(788)
								::haxe::macro::ExprDef _g1 = tmp10;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(788)
								switch( (int)(_g1->__Index())){
									case (int)0: {
									}
									;break;
									default: {
										HX_STACK_LINE(791)
										Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(791)
										{
											HX_STACK_LINE(791)
											Dynamic sql2 = r->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(sql2,"sql2");
											HX_STACK_LINE(791)
											Dynamic tmp12 = sql2;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(791)
											::haxe::macro::Constant tmp13 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(791)
											::haxe::macro::ExprDef tmp14 = ::haxe::macro::ExprDef_obj::EConst(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(791)
											Dynamic tmp15 = sql2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
											struct _Function_8_1{
												inline static Dynamic Block( Dynamic &tmp15,::haxe::macro::ExprDef &tmp14){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",791,0x502e5710)
													{
														hx::Anon __result = hx::Anon_obj::Create();
														__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp14,false);
														__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp15,false);
														return __result;
													}
													return null();
												}
											};
											HX_STACK_LINE(791)
											Dynamic tmp16 = _Function_8_1::Block(tmp15,tmp14);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(791)
											::haxe::macro::ExprDef tmp17 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp12,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(791)
											Dynamic tmp18 = sql2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
											struct _Function_8_2{
												inline static Dynamic Block( ::haxe::macro::ExprDef &tmp17,Dynamic &tmp18){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",791,0x502e5710)
													{
														hx::Anon __result = hx::Anon_obj::Create();
														__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp17,false);
														__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp18,false);
														return __result;
													}
													return null();
												}
											};
											HX_STACK_LINE(791)
											tmp11 = _Function_8_2::Block(tmp17,tmp18);
										}
										HX_STACK_LINE(791)
										r->__FieldRef(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00")) = tmp11;
										HX_STACK_LINE(792)
										Dynamic tmp12 = sql1;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(792)
										::haxe::macro::Constant tmp13 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(792)
										::haxe::macro::ExprDef tmp14 = ::haxe::macro::ExprDef_obj::EConst(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(792)
										Dynamic tmp15 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
										struct _Function_7_1{
											inline static Dynamic Block( Dynamic &tmp15,::haxe::macro::ExprDef &tmp14){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",792,0x502e5710)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp14,false);
													__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp15,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(792)
										Dynamic tmp16 = _Function_7_1::Block(tmp15,tmp14);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(792)
										::haxe::macro::ExprDef tmp17 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp12,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(792)
										Dynamic tmp18 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
										struct _Function_7_2{
											inline static Dynamic Block( ::haxe::macro::ExprDef &tmp17,Dynamic &tmp18){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",792,0x502e5710)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp17,false);
													__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp18,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(792)
										Dynamic tmp19 = _Function_7_2::Block(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(792)
										sql1 = tmp19;
									}
								}
							}
							HX_STACK_LINE(794)
							Dynamic tmp10 = sql1;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(794)
							Dynamic tmp11 = r->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(794)
							::haxe::macro::ExprDef tmp12 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(794)
							Dynamic tmp13 = p;		HX_STACK_VAR(tmp13,"tmp13");
							struct _Function_5_2{
								inline static Dynamic Block( Dynamic &tmp13,::haxe::macro::ExprDef &tmp12){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",794,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp12,false);
										__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp13,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(794)
							Dynamic tmp14 = _Function_5_2::Block(tmp13,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(794)
							bool tmp15 = r->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
							struct _Function_5_3{
								inline static Dynamic Block( bool &tmp15,Dynamic &tmp14){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",794,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp14,false);
										__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DBool,false);
										__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp15,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(794)
							Dynamic tmp16 = _Function_5_3::Block(tmp15,tmp14);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(794)
							return tmp16;
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(796)
							::haxe::macro::Constant tmp4 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING("~","\x7e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(796)
							::haxe::macro::ExprDef tmp5 = ::haxe::macro::ExprDef_obj::EConst(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(796)
							Dynamic tmp6 = p;		HX_STACK_VAR(tmp6,"tmp6");
							struct _Function_5_1{
								inline static Dynamic Block( ::haxe::macro::ExprDef &tmp5,Dynamic &tmp6){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",796,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp5,false);
										__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp6,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(796)
							Dynamic tmp7 = _Function_5_1::Block(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(796)
							Dynamic sql1 = tmp7;		HX_STACK_VAR(sql1,"sql1");
							HX_STACK_LINE(797)
							::sys::db::RecordType tmp8 = r->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(797)
							Dynamic tmp9 = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(797)
							this->unify(tmp8,::sys::db::RecordType_obj::DInt,tmp9);
							HX_STACK_LINE(798)
							Dynamic tmp10 = sql1;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(798)
							Dynamic tmp11 = r->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(798)
							::haxe::macro::ExprDef tmp12 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(798)
							Dynamic tmp13 = p;		HX_STACK_VAR(tmp13,"tmp13");
							struct _Function_5_2{
								inline static Dynamic Block( Dynamic &tmp13,::haxe::macro::ExprDef &tmp12){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",798,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp12,false);
										__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp13,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(798)
							Dynamic tmp14 = _Function_5_2::Block(tmp13,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(798)
							bool tmp15 = r->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
							struct _Function_5_3{
								inline static Dynamic Block( bool &tmp15,Dynamic &tmp14){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",798,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp14,false);
										__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DInt,false);
										__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp15,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(798)
							Dynamic tmp16 = _Function_5_3::Block(tmp15,tmp14);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(798)
							return tmp16;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(800)
							::haxe::macro::Constant tmp4 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(800)
							::haxe::macro::ExprDef tmp5 = ::haxe::macro::ExprDef_obj::EConst(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(800)
							Dynamic tmp6 = p;		HX_STACK_VAR(tmp6,"tmp6");
							struct _Function_5_1{
								inline static Dynamic Block( ::haxe::macro::ExprDef &tmp5,Dynamic &tmp6){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",800,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp5,false);
										__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp6,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(800)
							Dynamic tmp7 = _Function_5_1::Block(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(800)
							Dynamic sql1 = tmp7;		HX_STACK_VAR(sql1,"sql1");
							HX_STACK_LINE(801)
							::sys::db::RecordType tmp8 = r->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(801)
							Dynamic tmp9 = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(801)
							this->unify(tmp8,::sys::db::RecordType_obj::DFloat,tmp9);
							HX_STACK_LINE(802)
							Dynamic tmp10 = sql1;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(802)
							Dynamic tmp11 = r->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(802)
							::haxe::macro::ExprDef tmp12 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(802)
							Dynamic tmp13 = p;		HX_STACK_VAR(tmp13,"tmp13");
							struct _Function_5_2{
								inline static Dynamic Block( Dynamic &tmp13,::haxe::macro::ExprDef &tmp12){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",802,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp12,false);
										__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp13,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(802)
							Dynamic tmp14 = _Function_5_2::Block(tmp13,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(802)
							::sys::db::RecordType tmp15 = r->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(802)
							bool tmp16 = r->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
							struct _Function_5_3{
								inline static Dynamic Block( ::sys::db::RecordType &tmp15,bool &tmp16,Dynamic &tmp14){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",802,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp14,false);
										__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp15,false);
										__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp16,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(802)
							Dynamic tmp17 = _Function_5_3::Block(tmp15,tmp16,tmp14);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(802)
							return tmp17;
						}
						;break;
						case (int)0: case (int)1: {
							HX_STACK_LINE(804)
							Dynamic tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(804)
							this->error(HX_HCSTRING("Unsupported operation","\xdc","\xd0","\xeb","\x6f"),tmp4);
						}
						;break;
					}
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(705)
				::haxe::macro::Constant tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(705)
				::haxe::macro::Constant c = tmp;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(807)
				switch( (int)(c->__Index())){
					case (int)0: {
						HX_STACK_LINE(807)
						::String tmp1 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(807)
						::String s = tmp1;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(808)
						{
							HX_STACK_LINE(808)
							::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(808)
							::haxe::macro::Constant tmp3 = ::haxe::macro::Constant_obj::CString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(808)
							::haxe::macro::ExprDef tmp4 = ::haxe::macro::ExprDef_obj::EConst(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(808)
							Dynamic tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
							struct _Function_5_1{
								inline static Dynamic Block( Dynamic &tmp5,::haxe::macro::ExprDef &tmp4){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",808,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp4,false);
										__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(808)
							Dynamic tmp6 = _Function_5_1::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
							struct _Function_5_2{
								inline static Dynamic Block( Dynamic &tmp6){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",808,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp6,false);
										__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DInt,false);
										__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , false,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(808)
							Dynamic tmp7 = _Function_5_2::Block(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(808)
							return tmp7;
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(807)
						::String tmp1 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(807)
						::String s = tmp1;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(809)
						{
							HX_STACK_LINE(809)
							::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(809)
							::haxe::macro::Constant tmp3 = ::haxe::macro::Constant_obj::CString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(809)
							::haxe::macro::ExprDef tmp4 = ::haxe::macro::ExprDef_obj::EConst(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(809)
							Dynamic tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
							struct _Function_5_1{
								inline static Dynamic Block( Dynamic &tmp5,::haxe::macro::ExprDef &tmp4){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",809,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp4,false);
										__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(809)
							Dynamic tmp6 = _Function_5_1::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
							struct _Function_5_2{
								inline static Dynamic Block( Dynamic &tmp6){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",809,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp6,false);
										__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DFloat,false);
										__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , false,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(809)
							Dynamic tmp7 = _Function_5_2::Block(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(809)
							return tmp7;
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(807)
						::String tmp1 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(807)
						::String s = tmp1;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(810)
						{
							HX_STACK_LINE(810)
							Dynamic tmp2 = cond;		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(810)
							Dynamic tmp3 = this->sqlQuoteValue(tmp2,::sys::db::RecordType_obj::DText);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(810)
							int tmp4 = s.length;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(810)
							::sys::db::RecordType tmp5 = ::sys::db::RecordType_obj::DString(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							struct _Function_5_1{
								inline static Dynamic Block( ::sys::db::RecordType &tmp5,Dynamic &tmp3){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",810,0x502e5710)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp3,false);
										__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp5,false);
										__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , false,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(810)
							Dynamic tmp6 = _Function_5_1::Block(tmp5,tmp3);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(810)
							return tmp6;
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(811)
						Dynamic tmp1 = p;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(811)
						this->error(HX_HCSTRING("Unsupported","\x95","\xe4","\xe2","\x7e"),tmp1);
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(807)
						::String tmp1 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(807)
						::String n = tmp1;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(812)
						{
							HX_STACK_LINE(813)
							Dynamic tmp2 = n.charCodeAt((int)0);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(813)
							bool tmp3 = (tmp2 == (int)36);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(813)
							if ((tmp3)){
								HX_STACK_LINE(814)
								::String tmp4 = n.substr((int)1,null());		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(814)
								n = tmp4;
								HX_STACK_LINE(815)
								Dynamic tmp5 = this->inf;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(815)
								::String tmp6 = n;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(815)
								Dynamic tmp7 = tmp5->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(815)
								Dynamic f = tmp7;		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(816)
								bool tmp8 = (f == null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(816)
								if ((tmp8)){
									HX_STACK_LINE(816)
									::String tmp9 = (HX_HCSTRING("Unknown database field '","\xd2","\x62","\xe8","\xd1") + n);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(816)
									::String tmp10 = (tmp9 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(816)
									Dynamic tmp11 = p;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(816)
									this->error(tmp10,tmp11);
								}
								HX_STACK_LINE(817)
								Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(817)
								{
									HX_STACK_LINE(817)
									::String tmp10 = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(817)
									::String tmp11 = this->quoteField(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(817)
									::String s = tmp11;		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(817)
									::String tmp12 = s;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(817)
									::haxe::macro::Constant tmp13 = ::haxe::macro::Constant_obj::CString(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(817)
									::haxe::macro::ExprDef tmp14 = ::haxe::macro::ExprDef_obj::EConst(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(817)
									Dynamic tmp15 = p;		HX_STACK_VAR(tmp15,"tmp15");
									struct _Function_7_1{
										inline static Dynamic Block( Dynamic &tmp15,::haxe::macro::ExprDef &tmp14){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",817,0x502e5710)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp14,false);
												__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp15,false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(817)
									tmp9 = _Function_7_1::Block(tmp15,tmp14);
								}
								HX_STACK_LINE(817)
								::sys::db::RecordType tmp10 = f->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(817)
								bool tmp11 = f->__Field(HX_HCSTRING("isNull","\x91","\x63","\x75","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
								struct _Function_6_1{
									inline static Dynamic Block( Dynamic &tmp9,bool &tmp11,::sys::db::RecordType &tmp10){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",817,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp9,false);
											__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp10,false);
											__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp11,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(817)
								Dynamic tmp12 = _Function_6_1::Block(tmp9,tmp11,tmp10);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(817)
								return tmp12;
							}
							HX_STACK_LINE(819)
							::String tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(819)
							::String _switch_8 = (tmp4);
							if (  ( _switch_8==HX_HCSTRING("null","\x87","\x9e","\x0e","\x49"))){
								HX_STACK_LINE(821)
								::haxe::macro::Constant tmp5 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING("NULL","\x87","\x66","\xcf","\x33"));		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(821)
								::haxe::macro::ExprDef tmp6 = ::haxe::macro::ExprDef_obj::EConst(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(821)
								Dynamic tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
								struct _Function_6_1{
									inline static Dynamic Block( ::haxe::macro::ExprDef &tmp6,Dynamic &tmp7){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",821,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp6,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp7,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(821)
								Dynamic tmp8 = _Function_6_1::Block(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								struct _Function_6_2{
									inline static Dynamic Block( Dynamic &tmp8){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",821,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp8,false);
											__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DNull,false);
											__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , true,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(821)
								Dynamic tmp9 = _Function_6_2::Block(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(821)
								return tmp9;
							}
							else if (  ( _switch_8==HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"))){
								HX_STACK_LINE(823)
								::haxe::macro::Constant tmp5 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"));		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(823)
								::haxe::macro::ExprDef tmp6 = ::haxe::macro::ExprDef_obj::EConst(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(823)
								Dynamic tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
								struct _Function_6_1{
									inline static Dynamic Block( ::haxe::macro::ExprDef &tmp6,Dynamic &tmp7){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",823,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp6,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp7,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(823)
								Dynamic tmp8 = _Function_6_1::Block(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								struct _Function_6_2{
									inline static Dynamic Block( Dynamic &tmp8){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",823,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp8,false);
											__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DBool,false);
											__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , false,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(823)
								Dynamic tmp9 = _Function_6_2::Block(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(823)
								return tmp9;
							}
							else if (  ( _switch_8==HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb"))){
								HX_STACK_LINE(825)
								::haxe::macro::Constant tmp5 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79"));		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(825)
								::haxe::macro::ExprDef tmp6 = ::haxe::macro::ExprDef_obj::EConst(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(825)
								Dynamic tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
								struct _Function_6_1{
									inline static Dynamic Block( ::haxe::macro::ExprDef &tmp6,Dynamic &tmp7){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",825,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp6,false);
											__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp7,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(825)
								Dynamic tmp8 = _Function_6_1::Block(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								struct _Function_6_2{
									inline static Dynamic Block( Dynamic &tmp8){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",825,0x502e5710)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp8,false);
											__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DBool,false);
											__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , false,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(825)
								Dynamic tmp9 = _Function_6_2::Block(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(825)
								return tmp9;
							}
							HX_STACK_LINE(827)
							Dynamic tmp5 = cond;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(827)
							Dynamic tmp6 = this->buildDefault(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(827)
							return tmp6;
						}
					}
					;break;
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(705)
				cpp::ArrayBase pl = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(pl,"pl");
				HX_STACK_LINE(705)
				Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(705)
				Dynamic c = tmp;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(829)
				{
					HX_STACK_LINE(830)
					{
						HX_STACK_LINE(830)
						::haxe::macro::ExprDef _g1 = c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(830)
						switch( (int)(_g1->__Index())){
							case (int)0: {
								HX_STACK_LINE(830)
								::haxe::macro::Constant tmp1 = (::haxe::macro::ExprDef(_g1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(830)
								::haxe::macro::Constant co = tmp1;		HX_STACK_VAR(co,"co");
								HX_STACK_LINE(832)
								switch( (int)(co->__Index())){
									case (int)3: {
										HX_STACK_LINE(832)
										::String tmp2 = (::haxe::macro::Constant(co))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
										HX_STACK_LINE(832)
										::String t = tmp2;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(833)
										{
											HX_STACK_LINE(834)
											Dynamic tmp3 = t.charCodeAt((int)0);		HX_STACK_VAR(tmp3,"tmp3");
											HX_STACK_LINE(834)
											bool tmp4 = (tmp3 == (int)36);		HX_STACK_VAR(tmp4,"tmp4");
											HX_STACK_LINE(834)
											if ((tmp4)){
												HX_STACK_LINE(835)
												Dynamic tmp5 = this->g;		HX_STACK_VAR(tmp5,"tmp5");
												HX_STACK_LINE(835)
												::String tmp6 = t.substr((int)1,null());		HX_STACK_VAR(tmp6,"tmp6");
												HX_STACK_LINE(835)
												Dynamic tmp7 = tmp5->__Field(HX_HCSTRING("functions","\x5b","\x0a","\x03","\xb4"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
												HX_STACK_LINE(835)
												Dynamic f = tmp7;		HX_STACK_VAR(f,"f");
												HX_STACK_LINE(836)
												bool tmp8 = (f == null());		HX_STACK_VAR(tmp8,"tmp8");
												HX_STACK_LINE(836)
												if ((tmp8)){
													HX_STACK_LINE(836)
													::String tmp9 = (HX_HCSTRING("Unknown method ","\x69","\x17","\x10","\xb9") + t);		HX_STACK_VAR(tmp9,"tmp9");
													HX_STACK_LINE(836)
													Dynamic tmp10 = c->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
													HX_STACK_LINE(836)
													this->error(tmp9,tmp10);
												}
												HX_STACK_LINE(837)
												int tmp9 = f->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(837)
												int tmp10 = pl->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(837)
												bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(837)
												if ((tmp11)){
													HX_STACK_LINE(837)
													::String tmp12 = (HX_HCSTRING("Function ","\xe8","\xe9","\xd5","\x55") + f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
													HX_STACK_LINE(837)
													::String tmp13 = (tmp12 + HX_HCSTRING(" requires ","\xd2","\xaa","\x2b","\x6d"));		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(837)
													int tmp14 = f->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(837)
													::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(837)
													::String tmp16 = (tmp15 + HX_HCSTRING(" parameters","\xca","\x26","\x4c","\x6d"));		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(837)
													Dynamic tmp17 = p;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(837)
													this->error(tmp16,tmp17);
												}
												HX_STACK_LINE(838)
												Array< ::String > parts = f->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("split","\xda","\xea","\x6e","\x81"), hx::paccDynamic )(HX_HCSTRING("$","\x24","\x00","\x00","\x00"));		HX_STACK_VAR(parts,"parts");
												HX_STACK_LINE(839)
												::String tmp12 = parts->__get((int)0);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(839)
												::haxe::macro::Constant tmp13 = ::haxe::macro::Constant_obj::CString(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(839)
												::haxe::macro::ExprDef tmp14 = ::haxe::macro::ExprDef_obj::EConst(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(839)
												Dynamic tmp15 = p;		HX_STACK_VAR(tmp15,"tmp15");
												struct _Function_9_1{
													inline static Dynamic Block( Dynamic &tmp15,::haxe::macro::ExprDef &tmp14){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",839,0x502e5710)
														{
															hx::Anon __result = hx::Anon_obj::Create();
															__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp14,false);
															__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp15,false);
															return __result;
														}
														return null();
													}
												};
												HX_STACK_LINE(839)
												Dynamic tmp16 = _Function_9_1::Block(tmp15,tmp14);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(839)
												Dynamic sql1 = tmp16;		HX_STACK_VAR(sql1,"sql1");
												HX_STACK_LINE(840)
												bool first = true;		HX_STACK_VAR(first,"first");
												HX_STACK_LINE(841)
												bool isNull = false;		HX_STACK_VAR(isNull,"isNull");
												HX_STACK_LINE(842)
												{
													HX_STACK_LINE(842)
													int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
													HX_STACK_LINE(842)
													int tmp17 = f->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(842)
													int _g2 = tmp17;		HX_STACK_VAR(_g2,"_g2");
													HX_STACK_LINE(842)
													while((true)){
														HX_STACK_LINE(842)
														bool tmp18 = (_g3 < _g2);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(842)
														bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(842)
														if ((tmp19)){
															HX_STACK_LINE(842)
															break;
														}
														HX_STACK_LINE(842)
														int tmp20 = (_g3)++;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(842)
														int i = tmp20;		HX_STACK_VAR(i,"i");
														HX_STACK_LINE(843)
														Dynamic tmp21 = pl->__GetItem(i);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(843)
														Dynamic tmp22 = this->buildCond(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(843)
														Dynamic r = tmp22;		HX_STACK_VAR(r,"r");
														HX_STACK_LINE(844)
														bool tmp23 = r->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(844)
														if ((tmp23)){
															HX_STACK_LINE(844)
															isNull = true;
														}
														HX_STACK_LINE(845)
														::sys::db::RecordType tmp24 = r->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(845)
														::sys::db::RecordType tmp25 = f->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__GetItem(i);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(845)
														Dynamic tmp26 = pl->__GetItem(i);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(845)
														Dynamic tmp27 = tmp26->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(845)
														this->unify(tmp24,tmp25,tmp27);
														HX_STACK_LINE(846)
														bool tmp28 = first;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(846)
														if ((tmp28)){
															HX_STACK_LINE(847)
															first = false;
														}
														else{
															HX_STACK_LINE(849)
															Dynamic tmp29 = sql1;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(849)
															::haxe::macro::Constant tmp30 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(849)
															::haxe::macro::ExprDef tmp31 = ::haxe::macro::ExprDef_obj::EConst(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(849)
															Dynamic tmp32 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
															struct _Function_12_1{
																inline static Dynamic Block( ::haxe::macro::ExprDef &tmp31,Dynamic &tmp32){
																	HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",849,0x502e5710)
																	{
																		hx::Anon __result = hx::Anon_obj::Create();
																		__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp31,false);
																		__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp32,false);
																		return __result;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(849)
															Dynamic tmp33 = _Function_12_1::Block(tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(849)
															::haxe::macro::ExprDef tmp34 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp29,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(849)
															Dynamic tmp35 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
															struct _Function_12_2{
																inline static Dynamic Block( ::haxe::macro::ExprDef &tmp34,Dynamic &tmp35){
																	HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",849,0x502e5710)
																	{
																		hx::Anon __result = hx::Anon_obj::Create();
																		__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp34,false);
																		__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp35,false);
																		return __result;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(849)
															Dynamic tmp36 = _Function_12_2::Block(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(849)
															sql1 = tmp36;
														}
														HX_STACK_LINE(850)
														Dynamic tmp29 = sql1;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(850)
														Dynamic tmp30 = r->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(850)
														::haxe::macro::ExprDef tmp31 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(850)
														Dynamic tmp32 = p;		HX_STACK_VAR(tmp32,"tmp32");
														struct _Function_11_1{
															inline static Dynamic Block( ::haxe::macro::ExprDef &tmp31,Dynamic &tmp32){
																HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",850,0x502e5710)
																{
																	hx::Anon __result = hx::Anon_obj::Create();
																	__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp31,false);
																	__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp32,false);
																	return __result;
																}
																return null();
															}
														};
														HX_STACK_LINE(850)
														Dynamic tmp33 = _Function_11_1::Block(tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(850)
														sql1 = tmp33;
													}
												}
												HX_STACK_LINE(852)
												Dynamic tmp17 = sql1;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(852)
												::String tmp18 = parts->__get((int)1);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(852)
												::haxe::macro::Constant tmp19 = ::haxe::macro::Constant_obj::CString(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(852)
												::haxe::macro::ExprDef tmp20 = ::haxe::macro::ExprDef_obj::EConst(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(852)
												Dynamic tmp21 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
												struct _Function_9_2{
													inline static Dynamic Block( ::haxe::macro::ExprDef &tmp20,Dynamic &tmp21){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",852,0x502e5710)
														{
															hx::Anon __result = hx::Anon_obj::Create();
															__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp20,false);
															__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp21,false);
															return __result;
														}
														return null();
													}
												};
												HX_STACK_LINE(852)
												Dynamic tmp22 = _Function_9_2::Block(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(852)
												::haxe::macro::ExprDef tmp23 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp17,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(852)
												Dynamic tmp24 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
												struct _Function_9_3{
													inline static Dynamic Block( ::haxe::macro::ExprDef &tmp23,Dynamic &tmp24){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",852,0x502e5710)
														{
															hx::Anon __result = hx::Anon_obj::Create();
															__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp23,false);
															__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp24,false);
															return __result;
														}
														return null();
													}
												};
												HX_STACK_LINE(852)
												Dynamic tmp25 = _Function_9_3::Block(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(852)
												sql1 = tmp25;
												struct _Function_9_4{
													inline static Dynamic Block( bool &isNull,Dynamic &f,Dynamic &sql1){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",854,0x502e5710)
														{
															hx::Anon __result = hx::Anon_obj::Create();
															__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , sql1,false);
															__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , f->__Field(HX_HCSTRING("ret","\x61","\xd9","\x56","\x00"), hx::paccDynamic ),false);
															__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , isNull,false);
															return __result;
														}
														return null();
													}
												};
												HX_STACK_LINE(854)
												Dynamic tmp26 = _Function_9_4::Block(isNull,f,sql1);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(854)
												return tmp26;
											}
										}
									}
									;break;
									default: {
									}
								}
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(830)
								::String tmp1 = (::haxe::macro::ExprDef(_g1))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(830)
								::String f = tmp1;		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(830)
								Dynamic tmp2 = (::haxe::macro::ExprDef(_g1))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
								HX_STACK_LINE(830)
								Dynamic e = tmp2;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(858)
								{
									HX_STACK_LINE(859)
									::String tmp3 = f;		HX_STACK_VAR(tmp3,"tmp3");
									HX_STACK_LINE(859)
									::String _switch_9 = (tmp3);
									if (  ( _switch_9==HX_HCSTRING("like","\x57","\x15","\xb3","\x47"))){
										HX_STACK_LINE(861)
										bool tmp4 = (pl->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
										HX_STACK_LINE(861)
										if ((tmp4)){
											HX_STACK_LINE(862)
											Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
											HX_STACK_LINE(862)
											Dynamic tmp6 = this->buildCond(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
											HX_STACK_LINE(862)
											Dynamic r = tmp6;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(863)
											Dynamic tmp7 = pl->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
											HX_STACK_LINE(863)
											Dynamic tmp8 = this->buildCond(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
											HX_STACK_LINE(863)
											Dynamic v = tmp8;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(864)
											::sys::db::RecordType tmp9 = r->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(864)
											bool tmp10 = this->tryUnify(tmp9,::sys::db::RecordType_obj::DText);		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(864)
											bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(864)
											if ((tmp11)){
												HX_STACK_LINE(865)
												::sys::db::RecordType tmp12 = r->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(865)
												bool tmp13 = this->tryUnify(tmp12,::sys::db::RecordType_obj::DBinary);		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(865)
												if ((tmp13)){
													HX_STACK_LINE(866)
													::sys::db::RecordType tmp14 = v->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(866)
													Dynamic tmp15 = pl->__GetItem((int)0);		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(866)
													Dynamic tmp16 = tmp15->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(866)
													this->unify(tmp14,::sys::db::RecordType_obj::DBinary,tmp16);
												}
												else{
													HX_STACK_LINE(868)
													::sys::db::RecordType tmp14 = r->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(868)
													Dynamic tmp15 = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(868)
													this->unify(tmp14,::sys::db::RecordType_obj::DText,tmp15);
												}
											}
											else{
												HX_STACK_LINE(870)
												::sys::db::RecordType tmp12 = v->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(870)
												Dynamic tmp13 = pl->__GetItem((int)0);		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(870)
												Dynamic tmp14 = tmp13->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(870)
												this->unify(tmp12,::sys::db::RecordType_obj::DText,tmp14);
											}
											HX_STACK_LINE(871)
											Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(871)
											{
												HX_STACK_LINE(871)
												Dynamic e1 = r->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(e1,"e1");
												HX_STACK_LINE(871)
												{
													HX_STACK_LINE(871)
													Dynamic tmp13 = e1;		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(871)
													::haxe::macro::Constant tmp14 = ::haxe::macro::Constant_obj::CString(HX_HCSTRING(" LIKE ","\xc9","\x5a","\x59","\xbe"));		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(871)
													::haxe::macro::ExprDef tmp15 = ::haxe::macro::ExprDef_obj::EConst(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(871)
													Dynamic tmp16 = e1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
													struct _Function_11_1{
														inline static Dynamic Block( ::haxe::macro::ExprDef &tmp15,Dynamic &tmp16){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",871,0x502e5710)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp15,false);
																__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp16,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(871)
													Dynamic tmp17 = _Function_11_1::Block(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(871)
													::haxe::macro::ExprDef tmp18 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp13,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(871)
													Dynamic tmp19 = e1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
													struct _Function_11_2{
														inline static Dynamic Block( Dynamic &tmp19,::haxe::macro::ExprDef &tmp18){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",871,0x502e5710)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp18,false);
																__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp19,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(871)
													Dynamic tmp20 = _Function_11_2::Block(tmp19,tmp18);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(871)
													Dynamic e11 = tmp20;		HX_STACK_VAR(e11,"e11");
													HX_STACK_LINE(871)
													Dynamic tmp21 = e11;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(871)
													Dynamic tmp22 = v->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(871)
													::haxe::macro::ExprDef tmp23 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(871)
													Dynamic tmp24 = p;		HX_STACK_VAR(tmp24,"tmp24");
													struct _Function_11_3{
														inline static Dynamic Block( ::haxe::macro::ExprDef &tmp23,Dynamic &tmp24){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",871,0x502e5710)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp23,false);
																__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp24,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(871)
													tmp12 = _Function_11_3::Block(tmp23,tmp24);
												}
											}
											HX_STACK_LINE(871)
											bool tmp13 = r->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(871)
											bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(871)
											bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(871)
											if ((tmp14)){
												HX_STACK_LINE(871)
												tmp15 = v->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );
											}
											else{
												HX_STACK_LINE(871)
												tmp15 = true;
											}
											struct _Function_9_1{
												inline static Dynamic Block( bool &tmp15,Dynamic &tmp12){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",871,0x502e5710)
													{
														hx::Anon __result = hx::Anon_obj::Create();
														__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp12,false);
														__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DBool,false);
														__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp15,false);
														return __result;
													}
													return null();
												}
											};
											HX_STACK_LINE(871)
											Dynamic tmp16 = _Function_9_1::Block(tmp15,tmp12);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(871)
											return tmp16;
										}
									}
									else if (  ( _switch_9==HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"))){
										HX_STACK_LINE(874)
										bool tmp4 = (pl->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
										HX_STACK_LINE(874)
										if ((tmp4)){
											HX_STACK_LINE(875)
											Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
											HX_STACK_LINE(875)
											Dynamic tmp6 = this->buildCond(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
											HX_STACK_LINE(875)
											Dynamic r = tmp6;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(876)
											{
												HX_STACK_LINE(876)
												::sys::db::RecordType _g2 = r->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(876)
												switch( (int)(_g2->__Index())){
													case (int)23: {
														HX_STACK_LINE(876)
														Array< ::String > vals = (::sys::db::RecordType(_g2))->__Param(0);		HX_STACK_VAR(vals,"vals");
														HX_STACK_LINE(877)
														{
															HX_STACK_LINE(878)
															Dynamic tmp7 = pl->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
															HX_STACK_LINE(878)
															::String tmp8 = this->makeIdent(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
															HX_STACK_LINE(878)
															::String id = tmp8;		HX_STACK_VAR(id,"id");
															HX_STACK_LINE(879)
															::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
															HX_STACK_LINE(879)
															int tmp10 = ::Lambda_obj::indexOf(vals,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
															HX_STACK_LINE(879)
															int idx = tmp10;		HX_STACK_VAR(idx,"idx");
															HX_STACK_LINE(880)
															bool tmp11 = (idx < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
															HX_STACK_LINE(880)
															if ((tmp11)){
																HX_STACK_LINE(880)
																::String tmp12 = vals->join(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
																HX_STACK_LINE(880)
																::String tmp13 = (HX_HCSTRING("Flag should be ","\x64","\xb2","\x72","\x95") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
																HX_STACK_LINE(880)
																Dynamic tmp14 = pl->__GetItem((int)0);		HX_STACK_VAR(tmp14,"tmp14");
																HX_STACK_LINE(880)
																Dynamic tmp15 = tmp14->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
																HX_STACK_LINE(880)
																this->error(tmp13,tmp15);
															}
															HX_STACK_LINE(881)
															Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
															HX_STACK_LINE(881)
															{
																HX_STACK_LINE(881)
																Dynamic sql1 = r->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(sql1,"sql1");
																HX_STACK_LINE(881)
																Dynamic tmp13 = sql1;		HX_STACK_VAR(tmp13,"tmp13");
																HX_STACK_LINE(881)
																int tmp14 = (int((int)1) << int(idx));		HX_STACK_VAR(tmp14,"tmp14");
																HX_STACK_LINE(881)
																::String tmp15 = (HX_HCSTRING(" & ","\x5a","\x69","\x18","\x00") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
																HX_STACK_LINE(881)
																::String tmp16 = (tmp15 + HX_HCSTRING(" != 0","\x2c","\x00","\xd1","\x82"));		HX_STACK_VAR(tmp16,"tmp16");
																HX_STACK_LINE(881)
																::haxe::macro::Constant tmp17 = ::haxe::macro::Constant_obj::CString(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
																HX_STACK_LINE(881)
																::haxe::macro::ExprDef tmp18 = ::haxe::macro::ExprDef_obj::EConst(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
																HX_STACK_LINE(881)
																Dynamic tmp19 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
																struct _Function_13_1{
																	inline static Dynamic Block( Dynamic &tmp19,::haxe::macro::ExprDef &tmp18){
																		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",881,0x502e5710)
																		{
																			hx::Anon __result = hx::Anon_obj::Create();
																			__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp18,false);
																			__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp19,false);
																			return __result;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(881)
																Dynamic tmp20 = _Function_13_1::Block(tmp19,tmp18);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(881)
																::haxe::macro::ExprDef tmp21 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp13,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(881)
																Dynamic tmp22 = sql1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
																struct _Function_13_2{
																	inline static Dynamic Block( Dynamic &tmp22,::haxe::macro::ExprDef &tmp21){
																		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",881,0x502e5710)
																		{
																			hx::Anon __result = hx::Anon_obj::Create();
																			__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp21,false);
																			__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp22,false);
																			return __result;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(881)
																tmp12 = _Function_13_2::Block(tmp22,tmp21);
															}
															HX_STACK_LINE(881)
															bool tmp13 = r->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
															struct _Function_12_1{
																inline static Dynamic Block( bool &tmp13,Dynamic &tmp12){
																	HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",881,0x502e5710)
																	{
																		hx::Anon __result = hx::Anon_obj::Create();
																		__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp12,false);
																		__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DBool,false);
																		__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp13,false);
																		return __result;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(881)
															Dynamic tmp14 = _Function_12_1::Block(tmp13,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
															HX_STACK_LINE(881)
															return tmp14;
														}
													}
													;break;
													default: {
													}
												}
											}
										}
									}
								}
							}
							;break;
							default: {
							}
						}
					}
					HX_STACK_LINE(888)
					Dynamic tmp1 = cond;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(888)
					Dynamic tmp2 = this->buildDefault(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(888)
					return tmp2;
				}
			}
			;break;
			case (int)3: case (int)25: {
				HX_STACK_LINE(890)
				Dynamic tmp = cond;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(890)
				Dynamic tmp1 = this->buildDefault(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(890)
				return tmp1;
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(705)
				Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(705)
				Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(705)
				Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(705)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(705)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(705)
				Dynamic e = tmp2;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(891)
				{
					HX_STACK_LINE(892)
					bool tmp3 = (e2 == null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(892)
					if ((tmp3)){
						HX_STACK_LINE(892)
						Dynamic tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(892)
						this->error(HX_HCSTRING("If must have an else statement","\xb7","\x08","\xaa","\x40"),tmp4);
					}
					HX_STACK_LINE(893)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(893)
					Dynamic tmp5 = this->buildCond(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(893)
					Dynamic r1 = tmp5;		HX_STACK_VAR(r1,"r1");
					HX_STACK_LINE(894)
					Dynamic tmp6 = e2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(894)
					Dynamic tmp7 = this->buildCond(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(894)
					Dynamic r2 = tmp7;		HX_STACK_VAR(r2,"r2");
					HX_STACK_LINE(895)
					::sys::db::RecordType tmp8 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(895)
					::sys::db::RecordType tmp9 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(895)
					Dynamic tmp10 = e2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(895)
					this->unify(tmp8,tmp9,tmp10);
					HX_STACK_LINE(896)
					::sys::db::RecordType tmp11 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(896)
					::sys::db::RecordType tmp12 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(896)
					Dynamic tmp13 = e1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(896)
					this->unify(tmp11,tmp12,tmp13);
					HX_STACK_LINE(897)
					Dynamic tmp14 = e;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(897)
					Dynamic tmp15 = r1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(897)
					Dynamic tmp16 = r2->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(897)
					::haxe::macro::ExprDef tmp17 = ::haxe::macro::ExprDef_obj::EIf(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(897)
					Dynamic tmp18 = p;		HX_STACK_VAR(tmp18,"tmp18");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::macro::ExprDef &tmp17,Dynamic &tmp18){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",897,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp17,false);
								__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp18,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(897)
					Dynamic tmp19 = _Function_4_1::Block(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(897)
					::sys::db::RecordType tmp20 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(897)
					bool tmp21 = r1->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(897)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(897)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(897)
					if ((tmp22)){
						HX_STACK_LINE(897)
						tmp23 = r2->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );
					}
					else{
						HX_STACK_LINE(897)
						tmp23 = true;
					}
					struct _Function_4_2{
						inline static Dynamic Block( ::sys::db::RecordType &tmp20,Dynamic &tmp19,bool &tmp23){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",897,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp19,false);
								__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp20,false);
								__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp23,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(897)
					Dynamic tmp24 = _Function_4_2::Block(tmp20,tmp19,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(897)
					return tmp24;
				}
			}
			;break;
			case (int)27: {
				HX_STACK_LINE(705)
				Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(705)
				Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(705)
				Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(705)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(705)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(705)
				Dynamic e = tmp2;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(891)
				{
					HX_STACK_LINE(892)
					bool tmp3 = (e2 == null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(892)
					if ((tmp3)){
						HX_STACK_LINE(892)
						Dynamic tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(892)
						this->error(HX_HCSTRING("If must have an else statement","\xb7","\x08","\xaa","\x40"),tmp4);
					}
					HX_STACK_LINE(893)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(893)
					Dynamic tmp5 = this->buildCond(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(893)
					Dynamic r1 = tmp5;		HX_STACK_VAR(r1,"r1");
					HX_STACK_LINE(894)
					Dynamic tmp6 = e2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(894)
					Dynamic tmp7 = this->buildCond(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(894)
					Dynamic r2 = tmp7;		HX_STACK_VAR(r2,"r2");
					HX_STACK_LINE(895)
					::sys::db::RecordType tmp8 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(895)
					::sys::db::RecordType tmp9 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(895)
					Dynamic tmp10 = e2->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(895)
					this->unify(tmp8,tmp9,tmp10);
					HX_STACK_LINE(896)
					::sys::db::RecordType tmp11 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(896)
					::sys::db::RecordType tmp12 = r2->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(896)
					Dynamic tmp13 = e1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(896)
					this->unify(tmp11,tmp12,tmp13);
					HX_STACK_LINE(897)
					Dynamic tmp14 = e;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(897)
					Dynamic tmp15 = r1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(897)
					Dynamic tmp16 = r2->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(897)
					::haxe::macro::ExprDef tmp17 = ::haxe::macro::ExprDef_obj::EIf(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(897)
					Dynamic tmp18 = p;		HX_STACK_VAR(tmp18,"tmp18");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::macro::ExprDef &tmp17,Dynamic &tmp18){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",897,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp17,false);
								__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp18,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(897)
					Dynamic tmp19 = _Function_4_1::Block(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(897)
					::sys::db::RecordType tmp20 = r1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(897)
					bool tmp21 = r1->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(897)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(897)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(897)
					if ((tmp22)){
						HX_STACK_LINE(897)
						tmp23 = r2->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );
					}
					else{
						HX_STACK_LINE(897)
						tmp23 = true;
					}
					struct _Function_4_2{
						inline static Dynamic Block( ::sys::db::RecordType &tmp20,Dynamic &tmp19,bool &tmp23){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",897,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp19,false);
								__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp20,false);
								__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp23,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(897)
					Dynamic tmp24 = _Function_4_2::Block(tmp20,tmp19,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(897)
					return tmp24;
				}
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(705)
				Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(705)
				Dynamic v = tmp;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(705)
				Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(705)
				Dynamic e = tmp1;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(898)
				{
					HX_STACK_LINE(899)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(899)
					Dynamic tmp3 = this->buildCond(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(899)
					Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(903)
					::sys::db::RecordType tmp4 = e1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(903)
					::haxe::macro::ComplexType tmp5 = this->convertType(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(903)
					::haxe::macro::TypeParam tmp6 = ::haxe::macro::TypeParam_obj::TPType(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::macro::TypeParam &tmp6){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",900,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a") , Array_obj< ::String >::__new(),false);
								__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("Iterable","\xd2","\x5a","\x3e","\x6d"),false);
								__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , Array_obj< ::Dynamic >::__new().Add(tmp6),false);
								__result->Add(HX_HCSTRING("sub","\x80","\xa9","\x57","\x00") , null(),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(900)
					Dynamic tmp7 = _Function_4_1::Block(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(900)
					::haxe::macro::ComplexType tmp8 = ::haxe::macro::ComplexType_obj::TPath(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(900)
					::haxe::macro::ComplexType t = tmp8;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(906)
					Dynamic tmp9 = this->manager;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(906)
					::haxe::macro::ExprDef tmp10 = ::haxe::macro::ExprDef_obj::EField(tmp9,HX_HCSTRING("quoteList","\xba","\xb9","\xd6","\x03"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(906)
					Dynamic tmp11 = p;		HX_STACK_VAR(tmp11,"tmp11");
					struct _Function_4_2{
						inline static Dynamic Block( Dynamic &tmp11,::haxe::macro::ExprDef &tmp10){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",906,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp10,false);
								__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp11,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(906)
					Dynamic tmp12 = _Function_4_2::Block(tmp11,tmp10);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(906)
					Dynamic tmp13 = e1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(906)
					Dynamic tmp14 = v;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(906)
					::haxe::macro::ComplexType tmp15 = t;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(906)
					::haxe::macro::ExprDef tmp16 = ::haxe::macro::ExprDef_obj::ECheckType(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(906)
					Dynamic tmp17 = p;		HX_STACK_VAR(tmp17,"tmp17");
					struct _Function_4_3{
						inline static Dynamic Block( Dynamic &tmp17,::haxe::macro::ExprDef &tmp16){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",906,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp16,false);
								__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp17,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(906)
					Dynamic tmp18 = _Function_4_3::Block(tmp17,tmp16);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(906)
					::haxe::macro::ExprDef tmp19 = ::haxe::macro::ExprDef_obj::ECall(tmp12,cpp::ArrayBase_obj::__new().Add(tmp13).Add(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(906)
					Dynamic tmp20 = p;		HX_STACK_VAR(tmp20,"tmp20");
					struct _Function_4_4{
						inline static Dynamic Block( Dynamic &tmp20,::haxe::macro::ExprDef &tmp19){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",906,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp19,false);
								__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp20,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(906)
					Dynamic tmp21 = _Function_4_4::Block(tmp20,tmp19);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(906)
					bool tmp22 = e1->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
					struct _Function_4_5{
						inline static Dynamic Block( bool &tmp22,Dynamic &tmp21){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",906,0x502e5710)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00") , tmp21,false);
								__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::sys::db::RecordType_obj::DBool,false);
								__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp22,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(906)
					Dynamic tmp23 = _Function_4_5::Block(tmp22,tmp21);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(906)
					return tmp23;
				}
			}
			;break;
			default: {
				HX_STACK_LINE(908)
				Dynamic tmp = cond;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(908)
				Dynamic tmp1 = this->buildDefault(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(908)
				return tmp1;
			}
		}
	}
	HX_STACK_LINE(910)
	Dynamic tmp = p;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(910)
	this->error(HX_HCSTRING("Unsupported expression","\x43","\xe3","\xd6","\x14"),tmp);
	HX_STACK_LINE(911)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,buildCond,return )

Dynamic RecordMacros_obj::ensureType( Dynamic e,::sys::db::RecordType rt){
	HX_STACK_FRAME("sys.db.RecordMacros","ensureType",0xb09ba29f,"sys.db.RecordMacros.ensureType","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",914,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(rt,"rt")
	HX_STACK_LINE(915)
	Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(915)
	::sys::db::RecordType tmp1 = rt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(915)
	::haxe::macro::ComplexType tmp2 = this->convertType(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(915)
	::haxe::macro::ExprDef tmp3 = ::haxe::macro::ExprDef_obj::ECheckType(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(915)
	Dynamic tmp4 = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &tmp4,::haxe::macro::ExprDef &tmp3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",915,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp3,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp4,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(915)
	Dynamic tmp5 = _Function_1_1::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(915)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(RecordMacros_obj,ensureType,return )

Dynamic RecordMacros_obj::checkKeys( Dynamic econd){
	HX_STACK_FRAME("sys.db.RecordMacros","checkKeys",0x96ebd1b5,"sys.db.RecordMacros.checkKeys","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",918,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(econd,"econd")
	HX_STACK_LINE(919)
	Dynamic p = econd->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(920)
	{
		HX_STACK_LINE(920)
		::haxe::macro::ExprDef _g = econd->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(920)
		switch( (int)(_g->__Index())){
			case (int)5: {
				HX_STACK_LINE(920)
				cpp::ArrayBase fl = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(fl,"fl");
				HX_STACK_LINE(921)
				{
					HX_STACK_LINE(922)
					Dynamic tmp = this->inf;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(922)
					Array< ::String > key = tmp->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(923)
					{
						HX_STACK_LINE(923)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(923)
						while((true)){
							HX_STACK_LINE(923)
							bool tmp1 = (_g1 < fl->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(923)
							bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(923)
							if ((tmp2)){
								HX_STACK_LINE(923)
								break;
							}
							HX_STACK_LINE(923)
							Dynamic tmp3 = fl->__GetItem(_g1);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(923)
							Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(923)
							++(_g1);
							HX_STACK_LINE(924)
							Dynamic tmp4 = f;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(924)
							Dynamic tmp5 = this->getField(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(924)
							Dynamic fi = tmp5;		HX_STACK_VAR(fi,"fi");
							HX_STACK_LINE(925)
							::String tmp6 = fi->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(925)
							bool tmp7 = key->remove(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(925)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(925)
							if ((tmp8)){
								HX_STACK_LINE(926)
								Dynamic tmp9 = this->inf;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(926)
								::String tmp10 = fi->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(926)
								bool tmp11 = ::Lambda_obj::has(tmp9->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic ),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(926)
								if ((tmp11)){
									HX_STACK_LINE(927)
									::String tmp12 = (HX_HCSTRING("Duplicate field ","\x3b","\x38","\x1b","\x1c") + fi->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(927)
									Dynamic tmp13 = p;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(927)
									this->error(tmp12,tmp13);
								}
								else{
									HX_STACK_LINE(929)
									::String tmp12 = (HX_HCSTRING("Field ","\x46","\x02","\x23","\xb5") + f->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(929)
									::String tmp13 = (tmp12 + HX_HCSTRING(" is not part of table key (","\x36","\x25","\x18","\x0e"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(929)
									Dynamic tmp14 = this->inf;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(929)
									::String tmp15 = tmp14->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(929)
									::String tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(929)
									::String tmp17 = (tmp16 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(929)
									Dynamic tmp18 = p;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(929)
									this->error(tmp17,tmp18);
								}
							}
							HX_STACK_LINE(931)
							Dynamic tmp9 = f->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(931)
							::sys::db::RecordType tmp10 = fi->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(931)
							Dynamic tmp11 = this->ensureType(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(931)
							f->__FieldRef(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43")) = tmp11;
						}
					}
					HX_STACK_LINE(933)
					Dynamic tmp1 = econd;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(933)
					return tmp1;
				}
			}
			;break;
			default: {
				HX_STACK_LINE(935)
				Dynamic tmp = this->inf;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(935)
				int tmp1 = tmp->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(935)
				bool tmp2 = (tmp1 > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(935)
				if ((tmp2)){
					HX_STACK_LINE(936)
					Dynamic tmp3 = this->inf;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(936)
					::String tmp4 = tmp3->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(936)
					::String tmp5 = (HX_HCSTRING("You can't use a single value on a table with multiple keys (","\x19","\xc6","\x48","\xd4") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(936)
					::String tmp6 = (tmp5 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(936)
					Dynamic tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(936)
					this->error(tmp6,tmp7);
				}
				HX_STACK_LINE(937)
				Dynamic tmp3 = this->inf;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(937)
				Dynamic tmp4 = this->inf;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(937)
				::String tmp5 = tmp4->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(937)
				Dynamic tmp6 = tmp3->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(937)
				Dynamic fi = tmp6;		HX_STACK_VAR(fi,"fi");
				HX_STACK_LINE(938)
				Dynamic tmp7 = econd;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(938)
				::sys::db::RecordType tmp8 = fi->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(938)
				Dynamic tmp9 = this->ensureType(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(938)
				return tmp9;
			}
		}
	}
	HX_STACK_LINE(920)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,checkKeys,return )

::String RecordMacros_obj::orderField( Dynamic e){
	HX_STACK_FRAME("sys.db.RecordMacros","orderField",0xc0642853,"sys.db.RecordMacros.orderField","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",942,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(943)
	{
		HX_STACK_LINE(943)
		::haxe::macro::ExprDef _g = e->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(943)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(943)
				::haxe::macro::Constant tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(943)
				::haxe::macro::Constant c = tmp;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(945)
				switch( (int)(c->__Index())){
					case (int)3: {
						HX_STACK_LINE(945)
						::String tmp1 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(945)
						::String t = tmp1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(946)
						{
							HX_STACK_LINE(947)
							Dynamic tmp2 = this->inf;		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(947)
							::String tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(947)
							bool tmp4 = tmp2->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(947)
							bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(947)
							if ((tmp5)){
								HX_STACK_LINE(948)
								Dynamic tmp6 = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(948)
								this->error(HX_HCSTRING("Unknown database field","\x0b","\x6e","\x68","\x94"),tmp6);
							}
							HX_STACK_LINE(949)
							::String tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(949)
							::String tmp7 = this->quoteField(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(949)
							return tmp7;
						}
					}
					;break;
					default: {
					}
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(943)
				Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(943)
				Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(943)
				::haxe::macro::Unop tmp1 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(943)
				::haxe::macro::Unop op = tmp1;		HX_STACK_VAR(op,"op");
				HX_STACK_LINE(952)
				{
					HX_STACK_LINE(953)
					bool tmp2 = (op == ::haxe::macro::Unop_obj::OpNeg);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(953)
					if ((tmp2)){
						HX_STACK_LINE(954)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(954)
						::String tmp4 = this->orderField(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(954)
						::String tmp5 = (tmp4 + HX_HCSTRING(" DESC","\x71","\xb6","\xf9","\x99"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(954)
						return tmp5;
					}
				}
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(957)
	Dynamic tmp = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(957)
	this->error(HX_HCSTRING("Invalid order field","\xdf","\x0c","\x07","\x21"),tmp);
	HX_STACK_LINE(958)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,orderField,return )

Dynamic RecordMacros_obj::concatStrings( Dynamic e){
	HX_STACK_FRAME("sys.db.RecordMacros","concatStrings",0xe4ecbf27,"sys.db.RecordMacros.concatStrings","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",961,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",962,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , null(),false);
				__result->Add(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(962)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(962)
	Dynamic inf = tmp;		HX_STACK_VAR(inf,"inf");
	HX_STACK_LINE(963)
	Dynamic tmp1 = inf;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(963)
	Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(963)
	this->browseStrings(tmp1,tmp2);
	HX_STACK_LINE(964)
	bool tmp3 = (inf->__Field(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(964)
	if ((tmp3)){
		HX_STACK_LINE(965)
		::String tmp4 = inf->__Field(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(965)
		::haxe::macro::Constant tmp5 = ::haxe::macro::Constant_obj::CString(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(965)
		::haxe::macro::ExprDef tmp6 = ::haxe::macro::ExprDef_obj::EConst(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(965)
		Dynamic tmp7 = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_2_1{
			inline static Dynamic Block( ::haxe::macro::ExprDef &tmp6,Dynamic &tmp7){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",965,0x502e5710)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp6,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp7,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(965)
		Dynamic tmp8 = _Function_2_1::Block(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(965)
		Dynamic es = tmp8;		HX_STACK_VAR(es,"es");
		HX_STACK_LINE(966)
		bool tmp9 = (inf->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(966)
		if ((tmp9)){
			HX_STACK_LINE(967)
			inf->__FieldRef(HX_HCSTRING("e","\x65","\x00","\x00","\x00")) = es;
		}
		else{
			HX_STACK_LINE(969)
			Dynamic tmp10 = inf->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(969)
			Dynamic tmp11 = es;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(969)
			::haxe::macro::ExprDef tmp12 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(969)
			Dynamic tmp13 = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
			struct _Function_3_1{
				inline static Dynamic Block( Dynamic &tmp13,::haxe::macro::ExprDef &tmp12){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",969,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp12,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp13,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(969)
			Dynamic tmp14 = _Function_3_1::Block(tmp13,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(969)
			inf->__FieldRef(HX_HCSTRING("e","\x65","\x00","\x00","\x00")) = tmp14;
		}
	}
	HX_STACK_LINE(971)
	Dynamic tmp4 = inf->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(971)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,concatStrings,return )

Void RecordMacros_obj::browseStrings( Dynamic inf,Dynamic e){
{
		HX_STACK_FRAME("sys.db.RecordMacros","browseStrings",0x661f0571,"sys.db.RecordMacros.browseStrings","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",974,0x502e5710)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inf,"inf")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(975)
		{
			HX_STACK_LINE(975)
			::haxe::macro::ExprDef _g = e->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(975)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(975)
					::haxe::macro::Constant tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(975)
					::haxe::macro::Constant c = tmp;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(977)
					switch( (int)(c->__Index())){
						case (int)2: {
							HX_STACK_LINE(977)
							::String tmp1 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(977)
							::String s = tmp1;		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(978)
							{
								HX_STACK_LINE(979)
								bool tmp2 = (inf->__Field(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
								HX_STACK_LINE(979)
								if ((tmp2)){
									HX_STACK_LINE(980)
									inf->__FieldRef(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00")) = s;
								}
								else{
									HX_STACK_LINE(982)
									hx::AddEq(inf->__FieldRef(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00")),s);
								}
								HX_STACK_LINE(983)
								return null();
							}
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(977)
							::String tmp1 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(977)
							::String s = tmp1;		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(984)
							{
								HX_STACK_LINE(985)
								bool tmp2 = (inf->__Field(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
								HX_STACK_LINE(985)
								if ((tmp2)){
									HX_STACK_LINE(986)
									hx::AddEq(inf->__FieldRef(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00")),s);
									HX_STACK_LINE(987)
									return null();
								}
							}
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(977)
							::String tmp1 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(977)
							::String s = tmp1;		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(984)
							{
								HX_STACK_LINE(985)
								bool tmp2 = (inf->__Field(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
								HX_STACK_LINE(985)
								if ((tmp2)){
									HX_STACK_LINE(986)
									hx::AddEq(inf->__FieldRef(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00")),s);
									HX_STACK_LINE(987)
									return null();
								}
							}
						}
						;break;
						default: {
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(975)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(975)
					Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(975)
					Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(975)
					Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(975)
					::haxe::macro::Binop tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(975)
					::haxe::macro::Binop op = tmp2;		HX_STACK_VAR(op,"op");
					HX_STACK_LINE(991)
					{
						HX_STACK_LINE(992)
						bool tmp3 = (op == ::haxe::macro::Binop_obj::OpAdd);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(992)
						if ((tmp3)){
							HX_STACK_LINE(993)
							Dynamic tmp4 = inf;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(993)
							Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(993)
							this->browseStrings(tmp4,tmp5);
							HX_STACK_LINE(994)
							Dynamic tmp6 = inf;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(994)
							Dynamic tmp7 = e2;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(994)
							this->browseStrings(tmp6,tmp7);
							HX_STACK_LINE(995)
							return null();
						}
					}
				}
				;break;
				case (int)15: {
					HX_STACK_LINE(975)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(975)
					Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(975)
					Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(975)
					Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(975)
					Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(975)
					Dynamic cond = tmp2;		HX_STACK_VAR(cond,"cond");
					HX_STACK_LINE(997)
					{
						HX_STACK_LINE(998)
						Dynamic tmp3 = cond;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(998)
						Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(998)
						Dynamic tmp5 = this->concatStrings(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(998)
						Dynamic tmp6 = e2;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(998)
						Dynamic tmp7 = this->concatStrings(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(998)
						::haxe::macro::ExprDef tmp8 = ::haxe::macro::ExprDef_obj::EIf(tmp3,tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(998)
						Dynamic tmp9 = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
						struct _Function_4_1{
							inline static Dynamic Block( Dynamic &tmp9,::haxe::macro::ExprDef &tmp8){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",998,0x502e5710)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp8,false);
									__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp9,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(998)
						Dynamic tmp10 = _Function_4_1::Block(tmp9,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(998)
						e = tmp10;
					}
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(1001)
		bool tmp = (inf->__Field(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1001)
		if ((tmp)){
			HX_STACK_LINE(1002)
			::String tmp1 = inf->__Field(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1002)
			::haxe::macro::Constant tmp2 = ::haxe::macro::Constant_obj::CString(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1002)
			::haxe::macro::ExprDef tmp3 = ::haxe::macro::ExprDef_obj::EConst(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1002)
			Dynamic tmp4 = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &tmp4,::haxe::macro::ExprDef &tmp3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",1002,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp3,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp4,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(1002)
			Dynamic tmp5 = _Function_2_1::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1002)
			Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1002)
			::haxe::macro::ExprDef tmp7 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1002)
			Dynamic tmp8 = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			struct _Function_2_2{
				inline static Dynamic Block( ::haxe::macro::ExprDef &tmp7,Dynamic &tmp8){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",1002,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp7,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(1002)
			Dynamic tmp9 = _Function_2_2::Block(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1002)
			e = tmp9;
			HX_STACK_LINE(1003)
			inf->__FieldRef(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00")) = null();
		}
		HX_STACK_LINE(1005)
		bool tmp1 = (inf->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1005)
		if ((tmp1)){
			HX_STACK_LINE(1006)
			inf->__FieldRef(HX_HCSTRING("e","\x65","\x00","\x00","\x00")) = e;
		}
		else{
			HX_STACK_LINE(1008)
			Dynamic tmp2 = inf->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1008)
			Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1008)
			::haxe::macro::ExprDef tmp4 = ::haxe::macro::ExprDef_obj::EBinop(::haxe::macro::Binop_obj::OpAdd,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1008)
			Dynamic tmp5 = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &tmp5,::haxe::macro::ExprDef &tmp4){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",1008,0x502e5710)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp4,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(1008)
			Dynamic tmp6 = _Function_2_1::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1008)
			inf->__FieldRef(HX_HCSTRING("e","\x65","\x00","\x00","\x00")) = tmp6;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RecordMacros_obj,browseStrings,(void))

Dynamic RecordMacros_obj::buildOptions( Dynamic eopt){
	HX_STACK_FRAME("sys.db.RecordMacros","buildOptions",0x34fc4897,"sys.db.RecordMacros.buildOptions","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",1011,0x502e5710)
	HX_STACK_THIS(this)
	HX_STACK_ARG(eopt,"eopt")
	HX_STACK_LINE(1012)
	Dynamic p = eopt->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(1013)
	::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1013)
	::haxe::ds::StringMap opts = tmp;		HX_STACK_VAR(opts,"opts");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",1014,0x502e5710)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("limit","\x3b","\x1f","\x01","\x75") , null(),false);
				__result->Add(HX_HCSTRING("orderBy","\x05","\xea","\xa8","\x73") , null(),false);
				__result->Add(HX_HCSTRING("forceIndex","\x27","\x85","\xe9","\x54") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1014)
	Dynamic tmp1 = _Function_1_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1014)
	Dynamic opt = tmp1;		HX_STACK_VAR(opt,"opt");
	HX_STACK_LINE(1015)
	{
		HX_STACK_LINE(1015)
		::haxe::macro::ExprDef _g = eopt->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1015)
		switch( (int)(_g->__Index())){
			case (int)5: {
				HX_STACK_LINE(1015)
				cpp::ArrayBase fields = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(fields,"fields");
				HX_STACK_LINE(1016)
				{
					HX_STACK_LINE(1017)
					Dynamic limit = null();		HX_STACK_VAR(limit,"limit");
					HX_STACK_LINE(1018)
					{
						HX_STACK_LINE(1018)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1018)
						while((true)){
							HX_STACK_LINE(1018)
							bool tmp2 = (_g1 < fields->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(1018)
							bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(1018)
							if ((tmp3)){
								HX_STACK_LINE(1018)
								break;
							}
							HX_STACK_LINE(1018)
							Dynamic tmp4 = fields->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1018)
							Dynamic o = tmp4;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1018)
							++(_g1);
							HX_STACK_LINE(1019)
							::String tmp5 = o->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1019)
							bool tmp6 = opts->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1019)
							if ((tmp6)){
								HX_STACK_LINE(1019)
								::String tmp7 = (HX_HCSTRING("Duplicate option ","\x56","\x5b","\x86","\x5f") + o->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1019)
								Dynamic tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1019)
								this->error(tmp7,tmp8);
							}
							HX_STACK_LINE(1020)
							::String tmp7 = o->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1020)
							opts->set(tmp7,true);
							HX_STACK_LINE(1021)
							{
								HX_STACK_LINE(1021)
								::String _g2 = o->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(1021)
								::String tmp8 = _g2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1021)
								::String _switch_10 = (tmp8);
								if (  ( _switch_10==HX_HCSTRING("orderBy","\x05","\xea","\xa8","\x73"))){
									HX_STACK_LINE(1023)
									Array< ::String > fields1;		HX_STACK_VAR(fields1,"fields1");
									HX_STACK_LINE(1023)
									{
										HX_STACK_LINE(1023)
										::haxe::macro::ExprDef tmp9 = o->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic )->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(1023)
										::haxe::macro::ExprDef _g3 = tmp9;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(1023)
										switch( (int)(_g3->__Index())){
											case (int)6: {
												HX_STACK_LINE(1023)
												cpp::ArrayBase vl = (::haxe::macro::ExprDef(_g3))->__Param(0);		HX_STACK_VAR(vl,"vl");
												HX_STACK_LINE(1024)
												{
													HX_STACK_LINE(1024)
													Dynamic tmp10 = this->orderField_dyn();		HX_STACK_VAR(tmp10,"tmp10");
													HX_STACK_LINE(1024)
													::List tmp11 = ::Lambda_obj::map(vl,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
													HX_STACK_LINE(1024)
													fields1 = ::Lambda_obj::array(tmp11);
												}
											}
											;break;
											case (int)7: {
												HX_STACK_LINE(1023)
												cpp::ArrayBase pl = (::haxe::macro::ExprDef(_g3))->__Param(1);		HX_STACK_VAR(pl,"pl");
												HX_STACK_LINE(1023)
												Dynamic tmp10 = (::haxe::macro::ExprDef(_g3))->__Param(0);		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(1023)
												Dynamic v = tmp10;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(1025)
												{
													HX_STACK_LINE(1026)
													bool tmp11 = (pl->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
													HX_STACK_LINE(1026)
													bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
													HX_STACK_LINE(1026)
													bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(1026)
													if ((tmp12)){
														HX_STACK_LINE(1026)
														::haxe::macro::ExprDef tmp14 = v->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
														HX_STACK_LINE(1026)
														::haxe::macro::Constant tmp15 = ::haxe::macro::Constant_obj::CIdent(HX_HCSTRING("rand","\xa5","\x4d","\xa4","\x4b"));		HX_STACK_VAR(tmp15,"tmp15");
														HX_STACK_LINE(1026)
														::haxe::macro::Constant tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(1026)
														::haxe::macro::Constant tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(1026)
														::haxe::macro::ExprDef tmp18 = ::haxe::macro::ExprDef_obj::EConst(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(1026)
														::haxe::macro::ExprDef tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(1026)
														::haxe::macro::ExprDef tmp20 = tmp14;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(1026)
														::haxe::macro::ExprDef tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1026)
														bool tmp22 = ::Type_obj::enumEq(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(1026)
														bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(1026)
														bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(1026)
														tmp13 = !(tmp24);
													}
													else{
														HX_STACK_LINE(1026)
														tmp13 = true;
													}
													HX_STACK_LINE(1026)
													if ((tmp13)){
														HX_STACK_LINE(1027)
														Dynamic tmp14 = o->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
														HX_STACK_LINE(1027)
														::String tmp15 = this->orderField(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
														HX_STACK_LINE(1027)
														fields1 = Array_obj< ::String >::__new().Add(tmp15);
													}
													else{
														HX_STACK_LINE(1029)
														fields1 = Array_obj< ::String >::__new().Add(HX_HCSTRING("RAND()","\xe6","\xab","\x11","\x6a"));
													}
												}
											}
											;break;
											default: {
												HX_STACK_LINE(1030)
												Dynamic tmp10 = o->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(1030)
												::String tmp11 = this->orderField(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(1030)
												fields1 = Array_obj< ::String >::__new().Add(tmp11);
											}
										}
									}
									HX_STACK_LINE(1032)
									::String tmp9 = fields1->join(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1032)
									opt->__FieldRef(HX_HCSTRING("orderBy","\x05","\xea","\xa8","\x73")) = tmp9;
								}
								else if (  ( _switch_10==HX_HCSTRING("limit","\x3b","\x1f","\x01","\x75"))){
									HX_STACK_LINE(1034)
									cpp::ArrayBase limits;		HX_STACK_VAR(limits,"limits");
									HX_STACK_LINE(1034)
									{
										HX_STACK_LINE(1034)
										::haxe::macro::ExprDef tmp9 = o->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic )->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(1034)
										::haxe::macro::ExprDef _g3 = tmp9;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(1034)
										switch( (int)(_g3->__Index())){
											case (int)6: {
												HX_STACK_LINE(1034)
												cpp::ArrayBase vl = (::haxe::macro::ExprDef(_g3))->__Param(0);		HX_STACK_VAR(vl,"vl");
												HX_STACK_LINE(1035)
												{
													HX_STACK_LINE(1035)
													Dynamic tmp10 = this->buildDefault_dyn();		HX_STACK_VAR(tmp10,"tmp10");
													HX_STACK_LINE(1035)
													::List tmp11 = ::Lambda_obj::map(vl,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
													HX_STACK_LINE(1035)
													limits = ::Lambda_obj::array(tmp11);
												}
											}
											;break;
											default: {
												HX_STACK_LINE(1036)
												Dynamic tmp10 = o->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(1036)
												Dynamic tmp11 = this->buildDefault(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(1036)
												limits = cpp::ArrayBase_obj::__new().Add(tmp11);
											}
										}
									}
									HX_STACK_LINE(1038)
									bool tmp9 = (limits->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1038)
									bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1038)
									bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1038)
									if ((tmp10)){
										HX_STACK_LINE(1038)
										tmp11 = (limits->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)2);
									}
									else{
										HX_STACK_LINE(1038)
										tmp11 = true;
									}
									HX_STACK_LINE(1038)
									if ((tmp11)){
										HX_STACK_LINE(1038)
										Dynamic tmp12 = o->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic )->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1038)
										this->error(HX_HCSTRING("Invalid limits","\x01","\x23","\x72","\xb9"),tmp12);
									}
									HX_STACK_LINE(1039)
									Dynamic tmp12 = limits->__GetItem((int)0);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1039)
									Dynamic l0 = tmp12;		HX_STACK_VAR(l0,"l0");
									HX_STACK_LINE(1039)
									Dynamic tmp13 = limits->__GetItem((int)1);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1039)
									Dynamic l1 = tmp13;		HX_STACK_VAR(l1,"l1");
									HX_STACK_LINE(1040)
									::sys::db::RecordType tmp14 = l0->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1040)
									Dynamic tmp15 = l0->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1040)
									this->unify(tmp14,::sys::db::RecordType_obj::DInt,tmp15);
									HX_STACK_LINE(1041)
									bool tmp16 = (l1 != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1041)
									if ((tmp16)){
										HX_STACK_LINE(1042)
										::sys::db::RecordType tmp17 = l1->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1042)
										Dynamic tmp18 = l1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1042)
										this->unify(tmp17,::sys::db::RecordType_obj::DInt,tmp18);
									}
									HX_STACK_LINE(1043)
									Dynamic tmp17 = l0->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1043)
									bool tmp18 = (l1 == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1043)
									Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1043)
									if ((tmp18)){
										HX_STACK_LINE(1043)
										tmp19 = null();
									}
									else{
										HX_STACK_LINE(1043)
										tmp19 = l1->__Field(HX_HCSTRING("sql","\x0e","\xa6","\x57","\x00"), hx::paccDynamic );
									}
									struct _Function_8_1{
										inline static Dynamic Block( Dynamic &tmp17,Dynamic &tmp19){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",1043,0x502e5710)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp17,false);
												__result->Add(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00") , tmp19,false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(1043)
									Dynamic tmp20 = _Function_8_1::Block(tmp17,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1043)
									opt->__FieldRef(HX_HCSTRING("limit","\x3b","\x1f","\x01","\x75")) = tmp20;
								}
								else if (  ( _switch_10==HX_HCSTRING("forceIndex","\x27","\x85","\xe9","\x54"))){
									HX_STACK_LINE(1045)
									Array< ::String > fields1;		HX_STACK_VAR(fields1,"fields1");
									HX_STACK_LINE(1045)
									{
										HX_STACK_LINE(1045)
										::haxe::macro::ExprDef tmp9 = o->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic )->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(1045)
										::haxe::macro::ExprDef _g3 = tmp9;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(1045)
										switch( (int)(_g3->__Index())){
											case (int)6: {
												HX_STACK_LINE(1045)
												cpp::ArrayBase vl = (::haxe::macro::ExprDef(_g3))->__Param(0);		HX_STACK_VAR(vl,"vl");
												HX_STACK_LINE(1046)
												{
													HX_STACK_LINE(1046)
													Dynamic tmp10 = this->makeIdent_dyn();		HX_STACK_VAR(tmp10,"tmp10");
													HX_STACK_LINE(1046)
													::List tmp11 = ::Lambda_obj::map(vl,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
													HX_STACK_LINE(1046)
													fields1 = ::Lambda_obj::array(tmp11);
												}
											}
											;break;
											default: {
												HX_STACK_LINE(1047)
												Dynamic tmp10 = o->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(1047)
												::String tmp11 = this->makeIdent(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(1047)
												fields1 = Array_obj< ::String >::__new().Add(tmp11);
											}
										}
									}
									HX_STACK_LINE(1049)
									{
										HX_STACK_LINE(1049)
										int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(1049)
										while((true)){
											HX_STACK_LINE(1049)
											bool tmp9 = (_g3 < fields1->length);		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(1049)
											bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(1049)
											if ((tmp10)){
												HX_STACK_LINE(1049)
												break;
											}
											HX_STACK_LINE(1049)
											::String tmp11 = fields1->__get(_g3);		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(1049)
											::String f = tmp11;		HX_STACK_VAR(f,"f");
											HX_STACK_LINE(1049)
											++(_g3);
											HX_STACK_LINE(1050)
											Dynamic tmp12 = this->inf;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(1050)
											::String tmp13 = f;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1050)
											bool tmp14 = tmp12->__Field(HX_HCSTRING("hfields","\xe1","\xcc","\x46","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1050)
											bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1050)
											if ((tmp15)){
												HX_STACK_LINE(1051)
												::String tmp16 = (HX_HCSTRING("Unknown field ","\x1c","\xbc","\x43","\x2c") + f);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1051)
												Dynamic tmp17 = o->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic )->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1051)
												this->error(tmp16,tmp17);
											}
										}
									}
									HX_STACK_LINE(1052)
									::String tmp9 = fields1->join(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1052)
									::String idx = tmp9;		HX_STACK_VAR(idx,"idx");
									HX_STACK_LINE(1053)
									Dynamic tmp10 = this->inf;		HX_STACK_VAR(tmp10,"tmp10");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,::String,idx)
									int __ArgCount() const { return 1; }
									bool run(Dynamic i){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",1053,0x502e5710)
										HX_STACK_ARG(i,"i")
										{
											HX_STACK_LINE(1053)
											::String tmp11 = i->__Field(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(1053)
											::String tmp12 = idx;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(1053)
											bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1053)
											return tmp13;
										}
										return null();
									}
									HX_END_LOCAL_FUNC1(return)

									HX_STACK_LINE(1053)
									bool tmp11 = ::Lambda_obj::exists(tmp10->__Field(HX_HCSTRING("indexes","\x00","\x5c","\xbf","\xe0"), hx::paccDynamic ), Dynamic(new _Function_8_1(idx)));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1053)
									bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1053)
									bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1053)
									bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1053)
									if ((tmp13)){
										HX_STACK_LINE(1053)
										Dynamic tmp15 = this->inf;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1053)
										Dynamic tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");

										HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_9_1,::String,idx)
										int __ArgCount() const { return 1; }
										bool run(Dynamic r){
											HX_STACK_FRAME("*","_Function_9_1",0x5206ff3f,"*._Function_9_1","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",1053,0x502e5710)
											HX_STACK_ARG(r,"r")
											{
												HX_STACK_LINE(1053)
												bool tmp17 = (r->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic ) == idx);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1053)
												bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1053)
												bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1053)
												return tmp19;
											}
											return null();
										}
										HX_END_LOCAL_FUNC1(return)

										HX_STACK_LINE(1053)
										bool tmp17 = ::Lambda_obj::exists(tmp16->__Field(HX_HCSTRING("relations","\x37","\x2e","\x4b","\xe4"), hx::paccDynamic ), Dynamic(new _Function_9_1(idx)));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1053)
										bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1053)
										bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1053)
										tmp14 = !(tmp19);
									}
									else{
										HX_STACK_LINE(1053)
										tmp14 = false;
									}
									HX_STACK_LINE(1053)
									if ((tmp14)){
										HX_STACK_LINE(1054)
										Dynamic tmp15 = o->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic )->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1054)
										this->error(HX_HCSTRING("These fields are not indexed","\xce","\x41","\x17","\xf3"),tmp15);
									}
									HX_STACK_LINE(1055)
									opt->__FieldRef(HX_HCSTRING("forceIndex","\x27","\x85","\xe9","\x54")) = idx;
								}
								else  {
									HX_STACK_LINE(1057)
									::String tmp9 = (HX_HCSTRING("Unknown option '","\x32","\x8e","\x43","\x04") + o->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1057)
									::String tmp10 = (tmp9 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1057)
									Dynamic tmp11 = p;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1057)
									this->error(tmp10,tmp11);
								}
;
;
							}
						}
					}
				}
			}
			;break;
			default: {
				HX_STACK_LINE(1061)
				Dynamic tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1061)
				this->error(HX_HCSTRING("Options should be { orderBy : field, limit : [a,b] }","\x3d","\x95","\x7f","\x5c"),tmp2);
			}
		}
	}
	HX_STACK_LINE(1063)
	Dynamic tmp2 = opt;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1063)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,buildOptions,return )

Dynamic RecordMacros_obj::GLOBAL;

::EReg RecordMacros_obj::simpleString;

::sys::db::RecordMacros RecordMacros_obj::getInfos( ::haxe::macro::Type t){
	HX_STACK_FRAME("sys.db.RecordMacros","getInfos",0x33b86f16,"sys.db.RecordMacros.getInfos","C:\\HaxeToolkit\\haxe\\std/sys/db/RecordMacros.hx",1066,0x502e5710)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(1067)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1067)
	switch( (int)(t->__Index())){
		case (int)2: {
			HX_STACK_LINE(1067)
			Dynamic tmp1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1067)
			Dynamic c = tmp1;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(1068)
			{
				HX_STACK_LINE(1068)
				::String tmp2 = c->toString();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1068)
				bool tmp3 = (tmp2 == HX_HCSTRING("sys.db.Object","\x2e","\xe7","\x8a","\xe8"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1068)
				if ((tmp3)){
					HX_STACK_LINE(1068)
					return null();
				}
				HX_STACK_LINE(1068)
				tmp = c;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(1069)
			return null();
		}
	}
	HX_STACK_LINE(1067)
	Dynamic c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(1071)
	::sys::db::RecordMacros tmp1 = ::sys::db::RecordMacros_obj::__new(c);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1071)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RecordMacros_obj,getInfos,return )


RecordMacros_obj::RecordMacros_obj()
{
	error = new __default_error(this);
	_typeof = new __default__typeof(this);
	follow = new __default_follow(this);
	getManager = new __default_getManager(this);
	resolveType = new __default_resolveType(this);
}

void RecordMacros_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RecordMacros);
	HX_MARK_MEMBER_NAME(isNull,"isNull");
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(inf,"inf");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(_typeof,"typeof");
	HX_MARK_MEMBER_NAME(follow,"follow");
	HX_MARK_MEMBER_NAME(getManager,"getManager");
	HX_MARK_MEMBER_NAME(resolveType,"resolveType");
	HX_MARK_END_CLASS();
}

void RecordMacros_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isNull,"isNull");
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(inf,"inf");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(error,"error");
	HX_VISIT_MEMBER_NAME(_typeof,"typeof");
	HX_VISIT_MEMBER_NAME(follow,"follow");
	HX_VISIT_MEMBER_NAME(getManager,"getManager");
	HX_VISIT_MEMBER_NAME(resolveType,"resolveType");
}

Dynamic RecordMacros_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"inf") ) { return inf; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error; }
		if (HX_FIELD_EQ(inName,"unify") ) { return unify_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isNull") ) { return isNull; }
		if (HX_FIELD_EQ(inName,"typeof") ) { return _typeof; }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow; }
		if (HX_FIELD_EQ(inName,"makeOp") ) { return makeOp_dyn(); }
		if (HX_FIELD_EQ(inName,"sqlAdd") ) { return sqlAdd_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"makeInt") ) { return makeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"typeStr") ) { return typeStr_dyn(); }
		if (HX_FIELD_EQ(inName,"buildEq") ) { return buildEq_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFlags") ) { return getFlags_dyn(); }
		if (HX_FIELD_EQ(inName,"makeType") ) { return makeType_dyn(); }
		if (HX_FIELD_EQ(inName,"tryUnify") ) { return tryUnify_dyn(); }
		if (HX_FIELD_EQ(inName,"buildCmp") ) { return buildCmp_dyn(); }
		if (HX_FIELD_EQ(inName,"buildNum") ) { return buildNum_dyn(); }
		if (HX_FIELD_EQ(inName,"buildInt") ) { return buildInt_dyn(); }
		if (HX_FIELD_EQ(inName,"getField") ) { return getField_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"makeIdent") ) { return makeIdent_dyn(); }
		if (HX_FIELD_EQ(inName,"buildCond") ) { return buildCond_dyn(); }
		if (HX_FIELD_EQ(inName,"checkKeys") ) { return checkKeys_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getManager") ) { return getManager; }
		if (HX_FIELD_EQ(inName,"makeRecord") ) { return makeRecord_dyn(); }
		if (HX_FIELD_EQ(inName,"quoteField") ) { return quoteField_dyn(); }
		if (HX_FIELD_EQ(inName,"makeString") ) { return makeString_dyn(); }
		if (HX_FIELD_EQ(inName,"unifyClass") ) { return unifyClass_dyn(); }
		if (HX_FIELD_EQ(inName,"ensureType") ) { return ensureType_dyn(); }
		if (HX_FIELD_EQ(inName,"orderField") ) { return orderField_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initGlobals") ) { return initGlobals_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveType") ) { return resolveType; }
		if (HX_FIELD_EQ(inName,"initManager") ) { return initManager_dyn(); }
		if (HX_FIELD_EQ(inName,"sqlAddValue") ) { return sqlAddValue_dyn(); }
		if (HX_FIELD_EQ(inName,"convertType") ) { return convertType_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sqlAddString") ) { return sqlAddString_dyn(); }
		if (HX_FIELD_EQ(inName,"canStringify") ) { return canStringify_dyn(); }
		if (HX_FIELD_EQ(inName,"buildDefault") ) { return buildDefault_dyn(); }
		if (HX_FIELD_EQ(inName,"buildOptions") ) { return buildOptions_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sqlQuoteValue") ) { return sqlQuoteValue_dyn(); }
		if (HX_FIELD_EQ(inName,"concatStrings") ) { return concatStrings_dyn(); }
		if (HX_FIELD_EQ(inName,"browseStrings") ) { return browseStrings_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getRecordInfos") ) { return getRecordInfos_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool RecordMacros_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"GLOBAL") ) { outValue = GLOBAL; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getInfos") ) { outValue = getInfos_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simpleString") ) { outValue = simpleString; return true;  }
	}
	return false;
}

Dynamic RecordMacros_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"inf") ) { inf=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isNull") ) { isNull=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typeof") ) { _typeof=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"follow") ) { follow=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getManager") ) { getManager=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolveType") ) { resolveType=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RecordMacros_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"GLOBAL") ) { GLOBAL=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simpleString") ) { simpleString=ioValue.Cast< ::EReg >(); return true; }
	}
	return false;
}

void RecordMacros_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("isNull","\x91","\x63","\x75","\x66"));
	outFields->push(HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"));
	outFields->push(HX_HCSTRING("inf","\xe1","\x0c","\x50","\x00"));
	outFields->push(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(RecordMacros_obj,isNull),HX_HCSTRING("isNull","\x91","\x63","\x75","\x66")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RecordMacros_obj,manager),HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RecordMacros_obj,inf),HX_HCSTRING("inf","\xe1","\x0c","\x50","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RecordMacros_obj,g),HX_HCSTRING("g","\x67","\x00","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RecordMacros_obj,error),HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RecordMacros_obj,_typeof),HX_HCSTRING("typeof","\x51","\xf6","\x36","\x57")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RecordMacros_obj,follow),HX_HCSTRING("follow","\x71","\x91","\x96","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RecordMacros_obj,getManager),HX_HCSTRING("getManager","\x77","\x18","\x23","\x63")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RecordMacros_obj,resolveType),HX_HCSTRING("resolveType","\xc6","\x17","\x44","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &RecordMacros_obj::GLOBAL,HX_HCSTRING("GLOBAL","\x63","\xdd","\x34","\x5a")},
	{hx::fsObject /*::EReg*/ ,(void *) &RecordMacros_obj::simpleString,HX_HCSTRING("simpleString","\xa3","\xd2","\x8f","\x5c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("isNull","\x91","\x63","\x75","\x66"),
	HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"),
	HX_HCSTRING("inf","\xe1","\x0c","\x50","\x00"),
	HX_HCSTRING("g","\x67","\x00","\x00","\x00"),
	HX_HCSTRING("initGlobals","\x80","\x74","\xa3","\xcc"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("typeof","\x51","\xf6","\x36","\x57"),
	HX_HCSTRING("follow","\x71","\x91","\x96","\xf9"),
	HX_HCSTRING("getManager","\x77","\x18","\x23","\x63"),
	HX_HCSTRING("resolveType","\xc6","\x17","\x44","\xe8"),
	HX_HCSTRING("makeInt","\xa1","\xf3","\x1b","\x5c"),
	HX_HCSTRING("makeRecord","\x1f","\x4b","\xbc","\x4f"),
	HX_HCSTRING("getFlags","\xd1","\x3a","\x63","\x62"),
	HX_HCSTRING("makeType","\xc8","\xe7","\xa6","\x43"),
	HX_HCSTRING("makeIdent","\x22","\xba","\x11","\x8b"),
	HX_HCSTRING("getRecordInfos","\xfe","\x06","\xc9","\xf9"),
	HX_HCSTRING("quoteField","\xde","\xa7","\x99","\xe3"),
	HX_HCSTRING("initManager","\x3d","\x01","\x2c","\xcc"),
	HX_HCSTRING("makeString","\x5f","\xfd","\xff","\x62"),
	HX_HCSTRING("makeOp","\xaf","\x56","\xcb","\xb5"),
	HX_HCSTRING("sqlAdd","\xb3","\xc0","\xe6","\x52"),
	HX_HCSTRING("sqlAddString","\xe4","\x65","\xbd","\xf5"),
	HX_HCSTRING("sqlQuoteValue","\x43","\x9a","\x3c","\xc4"),
	HX_HCSTRING("sqlAddValue","\xbe","\xc5","\x68","\x47"),
	HX_HCSTRING("unifyClass","\xf5","\x97","\xb6","\xc9"),
	HX_HCSTRING("tryUnify","\x08","\x0e","\xae","\x0a"),
	HX_HCSTRING("typeStr","\x17","\x5e","\xcb","\xf8"),
	HX_HCSTRING("canStringify","\x9b","\xdf","\xee","\x4a"),
	HX_HCSTRING("convertType","\x4d","\x92","\x4d","\x36"),
	HX_HCSTRING("unify","\x43","\x5d","\xe7","\xa6"),
	HX_HCSTRING("buildCmp","\xf8","\x0b","\xab","\x53"),
	HX_HCSTRING("buildNum","\xb8","\x6b","\xb3","\x53"),
	HX_HCSTRING("buildInt","\x61","\x9a","\xaf","\x53"),
	HX_HCSTRING("buildEq","\x3a","\xbf","\xba","\x6f"),
	HX_HCSTRING("buildDefault","\x33","\x07","\x1c","\xae"),
	HX_HCSTRING("getField","\x44","\xa4","\x6a","\x60"),
	HX_HCSTRING("buildCond","\x30","\xf0","\x00","\xe2"),
	HX_HCSTRING("ensureType","\x98","\xcb","\x1e","\x28"),
	HX_HCSTRING("checkKeys","\xdc","\xaa","\xe6","\x9a"),
	HX_HCSTRING("orderField","\x4c","\x51","\xe7","\x37"),
	HX_HCSTRING("concatStrings","\xce","\xb7","\x68","\xd6"),
	HX_HCSTRING("browseStrings","\x18","\xfe","\x9a","\x57"),
	HX_HCSTRING("buildOptions","\xd0","\x61","\x56","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RecordMacros_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RecordMacros_obj::GLOBAL,"GLOBAL");
	HX_MARK_MEMBER_NAME(RecordMacros_obj::simpleString,"simpleString");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RecordMacros_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RecordMacros_obj::GLOBAL,"GLOBAL");
	HX_VISIT_MEMBER_NAME(RecordMacros_obj::simpleString,"simpleString");
};

#endif

hx::Class RecordMacros_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("GLOBAL","\x63","\xdd","\x34","\x5a"),
	HX_HCSTRING("simpleString","\xa3","\xd2","\x8f","\x5c"),
	HX_HCSTRING("getInfos","\xcf","\x37","\xed","\x1d"),
	::String(null()) };

void RecordMacros_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db.RecordMacros","\x07","\x2e","\x09","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RecordMacros_obj::__GetStatic;
	__mClass->mSetStaticField = &RecordMacros_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RecordMacros_obj >;
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

void RecordMacros_obj::__boot()
{
	GLOBAL= null();
	simpleString= ::EReg_obj::__new(HX_HCSTRING("^[A-Za-z0-9 ]*$","\x76","\x82","\xc4","\x5e"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));
}

} // end namespace sys
} // end namespace db
