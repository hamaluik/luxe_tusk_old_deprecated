#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_macro_Access
#include <haxe/macro/Access.h>
#endif
#ifndef INCLUDED_haxe_macro_ClassKind
#include <haxe/macro/ClassKind.h>
#endif
#ifndef INCLUDED_haxe_macro_ComplexType
#include <haxe/macro/ComplexType.h>
#endif
#ifndef INCLUDED_haxe_macro_FieldKind
#include <haxe/macro/FieldKind.h>
#endif
#ifndef INCLUDED_haxe_macro_FieldType
#include <haxe/macro/FieldType.h>
#endif
#ifndef INCLUDED_haxe_macro_Type
#include <haxe/macro/Type.h>
#endif
#ifndef INCLUDED_haxe_macro_TypeParam
#include <haxe/macro/TypeParam.h>
#endif
#ifndef INCLUDED_haxe_macro_TypeTools
#include <haxe/macro/TypeTools.h>
#endif
#ifndef INCLUDED_haxe_macro_VarAccess
#include <haxe/macro/VarAccess.h>
#endif
namespace haxe{
namespace macro{

Void TypeTools_obj::__construct()
{
	return null();
}

//TypeTools_obj::~TypeTools_obj() { }

Dynamic TypeTools_obj::__CreateEmpty() { return  new TypeTools_obj; }
hx::ObjectPtr< TypeTools_obj > TypeTools_obj::__new()
{  hx::ObjectPtr< TypeTools_obj > _result_ = new TypeTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic TypeTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TypeTools_obj > _result_ = new TypeTools_obj();
	_result_->__construct();
	return _result_;}

::haxe::macro::ComplexType TypeTools_obj::nullable( ::haxe::macro::ComplexType complexType){
	HX_STACK_FRAME("haxe.macro.TypeTools","nullable",0x5ca53938,"haxe.macro.TypeTools.nullable","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",38,0x104bee70)
	HX_STACK_ARG(complexType,"complexType")
	HX_STACK_LINE(38)
	::haxe::macro::ComplexType tmp = complexType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	::haxe::macro::TypeParam tmp1 = ::haxe::macro::TypeParam_obj::TPType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::macro::TypeParam &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",38,0x104bee70)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a") , Array_obj< ::String >::__new(),false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("Null","\xa7","\xca","\xe7","\x33"),false);
				__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , Array_obj< ::Dynamic >::__new().Add(tmp1),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(38)
	Dynamic tmp2 = _Function_1_1::Block(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	::haxe::macro::ComplexType tmp3 = ::haxe::macro::ComplexType_obj::TPath(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	::haxe::macro::ComplexType tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeTools_obj,nullable,return )

Dynamic TypeTools_obj::toField( Dynamic cf){
	HX_STACK_FRAME("haxe.macro.TypeTools","toField",0xf8e70388,"haxe.macro.TypeTools.toField","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",40,0x104bee70)
	HX_STACK_ARG(cf,"cf")
	HX_STACK_LINE(40)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	{

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
		int __ArgCount() const { return 2; }
		::String run(::haxe::macro::VarAccess va,::String getOrSet){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",41,0x104bee70)
			HX_STACK_ARG(va,"va")
			HX_STACK_ARG(getOrSet,"getOrSet")
			{
				HX_STACK_LINE(41)
				::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(42)
				switch( (int)(va->__Index())){
					case (int)0: {
						HX_STACK_LINE(43)
						tmp1 = HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b");
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(44)
						tmp1 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(45)
						tmp1 = HX_HCSTRING("never","\x8c","\x3e","\x30","\x99");
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(46)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid TAnonymous","\x22","\x00","\xca","\x80"));
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(47)
						tmp1 = getOrSet;
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(48)
						tmp1 = HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b");
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(49)
						tmp1 = HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b");
					}
					;break;
				}
				HX_STACK_LINE(41)
				return tmp1;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(41)
		Dynamic varAccessToString =  Dynamic(new _Function_2_1());		HX_STACK_VAR(varAccessToString,"varAccessToString");
		HX_STACK_LINE(52)
		int tmp1 = cf->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		if ((tmp2)){
			HX_STACK_LINE(53)
			::String tmp3 = cf->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(54)
			::String tmp4 = cf->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			bool tmp5 = cf->__Field(HX_HCSTRING("isPublic","\x33","\x1c","\x5d","\xbf"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			::haxe::macro::FieldType tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				::haxe::macro::FieldKind _g = cf->__Field(HX_HCSTRING("kind","\x54","\xe1","\x09","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(56)
				::haxe::macro::Type _g1 = cf->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(56)
				switch( (int)(_g->__Index())){
					case (int)0: {
						HX_STACK_LINE(56)
						::haxe::macro::Type ret = _g1;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(56)
						::haxe::macro::VarAccess tmp7 = (::haxe::macro::FieldKind(_g))->__Param(1);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						::haxe::macro::VarAccess write = tmp7;		HX_STACK_VAR(write,"write");
						HX_STACK_LINE(56)
						::haxe::macro::VarAccess tmp8 = (::haxe::macro::FieldKind(_g))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						::haxe::macro::VarAccess read = tmp8;		HX_STACK_VAR(read,"read");
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(59)
							::haxe::macro::VarAccess tmp9 = read;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(59)
							::String tmp10 = varAccessToString(tmp9,HX_HCSTRING("get","\x96","\x80","\x4e","\x00")).Cast< ::String >();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(60)
							::haxe::macro::VarAccess tmp11 = write;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(60)
							::String tmp12 = varAccessToString(tmp11,HX_HCSTRING("set","\xa2","\x9b","\x57","\x00")).Cast< ::String >();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(61)
							::haxe::macro::Type tmp13 = ret;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(61)
							::haxe::macro::ComplexType tmp14 = ::haxe::macro::TypeTools_obj::toComplexType(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(58)
							tmp6 = ::haxe::macro::FieldType_obj::FProp(tmp10,tmp12,tmp14,null());
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(56)
						switch( (int)(_g1->__Index())){
							case (int)4: {
								HX_STACK_LINE(56)
								::haxe::macro::Type tmp7 = (::haxe::macro::Type(_g1))->__Param(1);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(56)
								::haxe::macro::Type ret = tmp7;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(56)
								cpp::ArrayBase args = (::haxe::macro::Type(_g1))->__Param(0);		HX_STACK_VAR(args,"args");
								HX_STACK_LINE(63)
								{
									HX_STACK_LINE(72)
									::haxe::macro::Type tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(72)
									::haxe::macro::ComplexType tmp9 = ::haxe::macro::TypeTools_obj::toComplexType(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
									struct _Function_7_1{
										inline static Dynamic Block( cpp::ArrayBase &args,::haxe::macro::ComplexType &tmp9){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",64,0x104bee70)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												struct _Function_8_1{
													inline static cpp::ArrayBase Block( cpp::ArrayBase &args){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",65,0x104bee70)
														{
															HX_STACK_LINE(66)
															cpp::ArrayBase _g2 = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(_g2,"_g2");
															HX_STACK_LINE(66)
															{
																HX_STACK_LINE(66)
																int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
																HX_STACK_LINE(66)
																while((true)){
																	HX_STACK_LINE(66)
																	bool tmp10 = (_g3 < args->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
																	HX_STACK_LINE(66)
																	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
																	HX_STACK_LINE(66)
																	if ((tmp11)){
																		HX_STACK_LINE(66)
																		break;
																	}
																	HX_STACK_LINE(66)
																	Dynamic tmp12 = args->__GetItem(_g3);		HX_STACK_VAR(tmp12,"tmp12");
																	HX_STACK_LINE(66)
																	Dynamic a = tmp12;		HX_STACK_VAR(a,"a");
																	HX_STACK_LINE(66)
																	++(_g3);
																	HX_STACK_LINE(67)
																	::String tmp13 = a->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
																	HX_STACK_LINE(68)
																	bool tmp14 = a->__Field(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
																	HX_STACK_LINE(69)
																	::haxe::macro::Type tmp15 = a->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
																	HX_STACK_LINE(69)
																	::haxe::macro::ComplexType tmp16 = ::haxe::macro::TypeTools_obj::toComplexType(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
																	struct _Function_11_1{
																		inline static Dynamic Block( ::String &tmp13,::haxe::macro::ComplexType &tmp16,bool &tmp14){
																			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",66,0x104bee70)
																			{
																				hx::Anon __result = hx::Anon_obj::Create();
																				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp13,false);
																				__result->Add(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00") , tmp14,false);
																				__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , tmp16,false);
																				return __result;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(66)
																	Dynamic tmp17 = _Function_11_1::Block(tmp13,tmp16,tmp14);		HX_STACK_VAR(tmp17,"tmp17");
																	HX_STACK_LINE(66)
																	_g2->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp17);
																}
															}
															HX_STACK_LINE(65)
															return _g2;
														}
														return null();
													}
												};
												__result->Add(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40") , _Function_8_1::Block(args),false);
												__result->Add(HX_HCSTRING("ret","\x61","\xd9","\x56","\x00") , tmp9,false);
												__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , null(),false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(64)
									Dynamic tmp10 = _Function_7_1::Block(args,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(64)
									tmp6 = ::haxe::macro::FieldType_obj::FFun(tmp10);
								}
							}
							;break;
							default: {
								HX_STACK_LINE(76)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid TAnonymous","\x22","\x00","\xca","\x80"));
							}
						}
					}
					;break;
				}
			}
			HX_STACK_LINE(78)
			Dynamic tmp7 = cf->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			struct _Function_3_1{
				inline static Dynamic Block( Dynamic &cf,bool &tmp5,::haxe::macro::FieldType &tmp6,::String &tmp4,::String &tmp3,Dynamic &tmp7){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",52,0x104bee70)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
						__result->Add(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00") , tmp4,false);
						__result->Add(HX_HCSTRING("access","\xa4","\x95","\x06","\x0b") , (  ((tmp5)) ? Array< ::Dynamic >(Array_obj< ::Dynamic >::__new().Add(::haxe::macro::Access_obj::APublic)) : Array< ::Dynamic >(Array_obj< ::Dynamic >::__new().Add(::haxe::macro::Access_obj::APrivate)) ),false);
						__result->Add(HX_HCSTRING("kind","\x54","\xe1","\x09","\x47") , tmp6,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp7,false);
						__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , cf->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(52)
			tmp = _Function_3_1::Block(cf,tmp5,tmp6,tmp4,tmp3,tmp7);
		}
		else{
			HX_STACK_LINE(81)
			HX_STACK_DO_THROW(HX_HCSTRING("Invalid TAnonymous","\x22","\x00","\xca","\x80"));
		}
	}
	HX_STACK_LINE(40)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeTools_obj,toField,return )

::haxe::macro::ComplexType TypeTools_obj::toComplexType( ::haxe::macro::Type type){
	HX_STACK_FRAME("haxe.macro.TypeTools","toComplexType",0x7219da58,"haxe.macro.TypeTools.toComplexType","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",95,0x104bee70)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(96)
	::haxe::macro::ComplexType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(100)
		bool tmp1 = (type == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		if ((tmp1)){
			HX_STACK_LINE(102)
			tmp = null();
		}
		else{
			HX_STACK_LINE(100)
			switch( (int)(type->__Index())){
				case (int)0: {
					HX_STACK_LINE(100)
					Dynamic tmp2 = (::haxe::macro::Type(type))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(100)
					Dynamic __ex0 = tmp2;		HX_STACK_VAR(__ex0,"__ex0");
					HX_STACK_LINE(103)
					{
						HX_STACK_LINE(103)
						::haxe::macro::Type tmp3 = __ex0->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(103)
						::haxe::macro::Type _g = tmp3;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(103)
						{
							HX_STACK_LINE(103)
							::haxe::macro::Type t = _g;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(103)
							{
								HX_STACK_LINE(104)
								bool tmp4 = (t == null());		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(104)
								if ((tmp4)){
									HX_STACK_LINE(104)
									tmp = null();
								}
								else{
									HX_STACK_LINE(104)
									::haxe::macro::Type tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(104)
									tmp = ::haxe::macro::TypeTools_obj::toComplexType(tmp5);
								}
							}
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(100)
					Array< ::Dynamic > params = (::haxe::macro::Type(type))->__Param(1);		HX_STACK_VAR(params,"params");
					HX_STACK_LINE(100)
					Dynamic tmp2 = (::haxe::macro::Type(type))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(100)
					Dynamic __ex0 = tmp2;		HX_STACK_VAR(__ex0,"__ex0");
					HX_STACK_LINE(105)
					{
						HX_STACK_LINE(105)
						Dynamic tmp3 = __ex0->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(105)
						Dynamic _g = tmp3;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(105)
						{
							HX_STACK_LINE(105)
							Dynamic baseType = _g;		HX_STACK_VAR(baseType,"baseType");
							HX_STACK_LINE(105)
							{
								HX_STACK_LINE(106)
								Dynamic tmp4 = baseType;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(106)
								Dynamic tmp5 = ::haxe::macro::TypeTools_obj::toTypePath(tmp4,params);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(106)
								tmp = ::haxe::macro::ComplexType_obj::TPath(tmp5);
							}
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(100)
					Array< ::Dynamic > params = (::haxe::macro::Type(type))->__Param(1);		HX_STACK_VAR(params,"params");
					HX_STACK_LINE(100)
					Dynamic tmp2 = (::haxe::macro::Type(type))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(100)
					Dynamic __ex0 = tmp2;		HX_STACK_VAR(__ex0,"__ex0");
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(107)
						Dynamic tmp3 = __ex0->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(107)
						Dynamic _g = tmp3;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(107)
						{
							HX_STACK_LINE(107)
							Dynamic classType = _g;		HX_STACK_VAR(classType,"classType");
							HX_STACK_LINE(108)
							{
								HX_STACK_LINE(108)
								::haxe::macro::ClassKind _g1 = classType->__Field(HX_HCSTRING("kind","\x54","\xe1","\x09","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(108)
								switch( (int)(_g1->__Index())){
									case (int)1: {
										struct _Function_8_1{
											inline static Dynamic Block( Dynamic &classType){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",110,0x104bee70)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , classType->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ),false);
													__result->Add(HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a") , Array_obj< ::String >::__new(),false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(110)
										Dynamic tmp4 = _Function_8_1::Block(classType);		HX_STACK_VAR(tmp4,"tmp4");
										HX_STACK_LINE(110)
										tmp = ::haxe::macro::ComplexType_obj::TPath(tmp4);
									}
									;break;
									default: {
										HX_STACK_LINE(115)
										Dynamic tmp4 = classType;		HX_STACK_VAR(tmp4,"tmp4");
										HX_STACK_LINE(115)
										Dynamic tmp5 = ::haxe::macro::TypeTools_obj::toTypePath(tmp4,params);		HX_STACK_VAR(tmp5,"tmp5");
										HX_STACK_LINE(115)
										tmp = ::haxe::macro::ComplexType_obj::TPath(tmp5);
									}
								}
							}
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(100)
					Array< ::Dynamic > params = (::haxe::macro::Type(type))->__Param(1);		HX_STACK_VAR(params,"params");
					HX_STACK_LINE(100)
					Dynamic tmp2 = (::haxe::macro::Type(type))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(100)
					Dynamic __ex0 = tmp2;		HX_STACK_VAR(__ex0,"__ex0");
					HX_STACK_LINE(117)
					{
						HX_STACK_LINE(117)
						Dynamic tmp3 = __ex0->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(117)
						Dynamic _g = tmp3;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(117)
						{
							HX_STACK_LINE(117)
							Dynamic baseType = _g;		HX_STACK_VAR(baseType,"baseType");
							HX_STACK_LINE(117)
							{
								HX_STACK_LINE(118)
								Dynamic tmp4 = baseType;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(118)
								Dynamic tmp5 = ::haxe::macro::TypeTools_obj::toTypePath(tmp4,params);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(118)
								tmp = ::haxe::macro::ComplexType_obj::TPath(tmp5);
							}
						}
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(100)
					::haxe::macro::Type tmp2 = (::haxe::macro::Type(type))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(100)
					::haxe::macro::Type ret = tmp2;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(100)
					cpp::ArrayBase args = (::haxe::macro::Type(type))->__Param(0);		HX_STACK_VAR(args,"args");
					HX_STACK_LINE(119)
					{
						HX_STACK_LINE(122)
						::haxe::macro::Type tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(122)
						::haxe::macro::ComplexType tmp4 = ::haxe::macro::TypeTools_obj::toComplexType(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						struct _Function_5_1{
							inline static Array< ::Dynamic > Block( cpp::ArrayBase &args){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",121,0x104bee70)
								{
									HX_STACK_LINE(121)
									Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(121)
									{
										HX_STACK_LINE(121)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(121)
										while((true)){
											HX_STACK_LINE(121)
											bool tmp5 = (_g1 < args->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
											HX_STACK_LINE(121)
											bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
											HX_STACK_LINE(121)
											if ((tmp6)){
												HX_STACK_LINE(121)
												break;
											}
											HX_STACK_LINE(121)
											Dynamic tmp7 = args->__GetItem(_g1);		HX_STACK_VAR(tmp7,"tmp7");
											HX_STACK_LINE(121)
											Dynamic a = tmp7;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(121)
											++(_g1);
											HX_STACK_LINE(121)
											bool tmp8 = a->__Field(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
											HX_STACK_LINE(121)
											::haxe::macro::ComplexType tmp9;		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(121)
											if ((tmp8)){
												HX_STACK_LINE(121)
												::haxe::macro::Type tmp10 = a->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(121)
												::haxe::macro::ComplexType tmp11 = ::haxe::macro::TypeTools_obj::toComplexType(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(121)
												tmp9 = ::haxe::macro::TypeTools_obj::nullable(tmp11);
											}
											else{
												HX_STACK_LINE(121)
												::haxe::macro::Type tmp10 = a->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(121)
												tmp9 = ::haxe::macro::TypeTools_obj::toComplexType(tmp10);
											}
											HX_STACK_LINE(121)
											_g->push(tmp9);
										}
									}
									HX_STACK_LINE(121)
									return _g;
								}
								return null();
							}
						};
						HX_STACK_LINE(120)
						tmp = ::haxe::macro::ComplexType_obj::TFunction(_Function_5_1::Block(args),tmp4);
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(100)
					Dynamic tmp2 = (::haxe::macro::Type(type))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(100)
					Dynamic __ex0 = tmp2;		HX_STACK_VAR(__ex0,"__ex0");
					HX_STACK_LINE(123)
					{
						HX_STACK_LINE(123)
						Dynamic tmp3 = __ex0->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(123)
						Dynamic _g = tmp3;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(123)
						{
							HX_STACK_LINE(123)
							cpp::ArrayBase fields = _g->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic );		HX_STACK_VAR(fields,"fields");
							struct _Function_6_1{
								inline static cpp::ArrayBase Block( cpp::ArrayBase &fields){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",124,0x104bee70)
									{
										HX_STACK_LINE(124)
										cpp::ArrayBase _g1 = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(124)
										{
											HX_STACK_LINE(124)
											int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(124)
											while((true)){
												HX_STACK_LINE(124)
												bool tmp4 = (_g2 < fields->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
												HX_STACK_LINE(124)
												bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
												HX_STACK_LINE(124)
												if ((tmp5)){
													HX_STACK_LINE(124)
													break;
												}
												HX_STACK_LINE(124)
												Dynamic tmp6 = fields->__GetItem(_g2);		HX_STACK_VAR(tmp6,"tmp6");
												HX_STACK_LINE(124)
												Dynamic cf = tmp6;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(124)
												++(_g2);
												HX_STACK_LINE(124)
												Dynamic tmp7 = cf;		HX_STACK_VAR(tmp7,"tmp7");
												HX_STACK_LINE(124)
												Dynamic tmp8 = ::haxe::macro::TypeTools_obj::toField(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
												HX_STACK_LINE(124)
												_g1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
											}
										}
										HX_STACK_LINE(124)
										return _g1;
									}
									return null();
								}
							};
							HX_STACK_LINE(124)
							tmp = ::haxe::macro::ComplexType_obj::TAnonymous(_Function_6_1::Block(fields));
						}
					}
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(100)
					::haxe::macro::Type tmp2 = (::haxe::macro::Type(type))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(100)
					::haxe::macro::Type t = tmp2;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(125)
					{
						HX_STACK_LINE(126)
						bool tmp3 = (t == null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(126)
						if ((tmp3)){
							struct _Function_6_1{
								inline static Dynamic Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",127,0x104bee70)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a") , Array_obj< ::String >::__new(),false);
										__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("Dynamic","\x5f","\xc7","\x66","\x03"),false);
										__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , Array_obj< ::Dynamic >::__new(),false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(127)
							Dynamic tmp4 = _Function_6_1::Block();		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(127)
							::haxe::macro::ComplexType tmp5 = ::haxe::macro::ComplexType_obj::TPath(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(127)
							tmp = tmp5;
						}
						else{
							HX_STACK_LINE(129)
							::haxe::macro::Type tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(129)
							::haxe::macro::ComplexType tmp5 = ::haxe::macro::TypeTools_obj::toComplexType(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(129)
							::haxe::macro::ComplexType ct = tmp5;		HX_STACK_VAR(ct,"ct");
							HX_STACK_LINE(130)
							::haxe::macro::ComplexType tmp6 = ct;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(130)
							::haxe::macro::TypeParam tmp7 = ::haxe::macro::TypeParam_obj::TPType(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							struct _Function_6_1{
								inline static Dynamic Block( ::haxe::macro::TypeParam &tmp7){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",130,0x104bee70)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a") , Array_obj< ::String >::__new(),false);
										__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("Dynamic","\x5f","\xc7","\x66","\x03"),false);
										__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , Array_obj< ::Dynamic >::__new().Add(tmp7),false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(130)
							Dynamic tmp8 = _Function_6_1::Block(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(130)
							::haxe::macro::ComplexType tmp9 = ::haxe::macro::ComplexType_obj::TPath(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(130)
							tmp = tmp9;
						}
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(100)
					Dynamic tmp2 = (::haxe::macro::Type(type))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(100)
					Dynamic f = tmp2;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(132)
					{
						HX_STACK_LINE(133)
						::haxe::macro::Type tmp3 = f().Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(133)
						tmp = ::haxe::macro::TypeTools_obj::toComplexType(tmp3);
					}
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(100)
					Array< ::Dynamic > params = (::haxe::macro::Type(type))->__Param(1);		HX_STACK_VAR(params,"params");
					HX_STACK_LINE(100)
					Dynamic tmp2 = (::haxe::macro::Type(type))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(100)
					Dynamic __ex0 = tmp2;		HX_STACK_VAR(__ex0,"__ex0");
					HX_STACK_LINE(134)
					{
						HX_STACK_LINE(134)
						Dynamic tmp3 = __ex0->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(134)
						Dynamic _g = tmp3;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(134)
						{
							HX_STACK_LINE(134)
							Dynamic baseType = _g;		HX_STACK_VAR(baseType,"baseType");
							HX_STACK_LINE(134)
							{
								HX_STACK_LINE(135)
								Dynamic tmp4 = baseType;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(135)
								Dynamic tmp5 = ::haxe::macro::TypeTools_obj::toTypePath(tmp4,params);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(135)
								tmp = ::haxe::macro::ComplexType_obj::TPath(tmp5);
							}
						}
					}
				}
				;break;
			}
		}
	}
	HX_STACK_LINE(95)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeTools_obj,toComplexType,return )

Dynamic TypeTools_obj::toTypePath( Dynamic baseType,Array< ::Dynamic > params){
	HX_STACK_FRAME("haxe.macro.TypeTools","toTypePath",0xb24c2f71,"haxe.macro.TypeTools.toTypePath","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",142,0x104bee70)
	HX_STACK_ARG(baseType,"baseType")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(142)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	{
		HX_STACK_LINE(143)
		::String module = baseType->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic );		HX_STACK_VAR(module,"module");
		HX_STACK_LINE(146)
		int tmp1 = module.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		::String tmp3 = module.substring(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(147)
		::String tmp4 = baseType->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &baseType,::String &tmp4,::String &tmp3,Array< ::Dynamic > &params){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",144,0x104bee70)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a") , baseType->__Field(HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a"), hx::paccDynamic ),false);
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
					__result->Add(HX_HCSTRING("sub","\x80","\xa9","\x57","\x00") , tmp4,false);
					struct _Function_3_1{
						inline static Array< ::Dynamic > Block( Array< ::Dynamic > &params){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",148,0x104bee70)
							{
								HX_STACK_LINE(148)
								Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(148)
								{
									HX_STACK_LINE(148)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(148)
									while((true)){
										HX_STACK_LINE(148)
										bool tmp5 = (_g1 < params->length);		HX_STACK_VAR(tmp5,"tmp5");
										HX_STACK_LINE(148)
										bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(148)
										if ((tmp6)){
											HX_STACK_LINE(148)
											break;
										}
										HX_STACK_LINE(148)
										::haxe::macro::Type tmp7 = params->__get(_g1).StaticCast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(148)
										::haxe::macro::Type t = tmp7;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(148)
										++(_g1);
										HX_STACK_LINE(148)
										::haxe::macro::Type tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(148)
										::haxe::macro::ComplexType tmp9 = ::haxe::macro::TypeTools_obj::toComplexType(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(148)
										::haxe::macro::TypeParam tmp10 = ::haxe::macro::TypeParam_obj::TPType(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(148)
										_g->push(tmp10);
									}
								}
								HX_STACK_LINE(148)
								return _g;
							}
							return null();
						}
					};
					__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , _Function_3_1::Block(params),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(144)
		tmp = _Function_2_1::Block(baseType,tmp4,tmp3,params);
	}
	HX_STACK_LINE(142)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypeTools_obj,toTypePath,return )

Dynamic TypeTools_obj::findField( Dynamic c,::String name,hx::Null< bool >  __o_isStatic){
bool isStatic = __o_isStatic.Default(false);
	HX_STACK_FRAME("haxe.macro.TypeTools","findField",0x071dcc4a,"haxe.macro.TypeTools.findField","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",330,0x104bee70)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(isStatic,"isStatic")
{
		HX_STACK_LINE(331)
		bool tmp = isStatic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(331)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		if ((tmp)){
			HX_STACK_LINE(331)
			tmp1 = c->__Field(HX_HCSTRING("statics","\x05","\x3c","\x65","\x36"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(331)
			tmp1 = c->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic );
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::String,name)
		int __ArgCount() const { return 1; }
		bool run(Dynamic field){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypeTools.hx",331,0x104bee70)
			HX_STACK_ARG(field,"field")
			{
				HX_STACK_LINE(331)
				bool tmp2 = (field->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == name);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(331)
				return tmp2;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(331)
		Dynamic tmp2 = ::Lambda_obj::find(tmp1->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(), Dynamic(new _Function_1_1(name)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(331)
		Dynamic field = tmp2;		HX_STACK_VAR(field,"field");
		HX_STACK_LINE(332)
		bool tmp3 = (field != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(332)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(332)
		if ((tmp3)){
			HX_STACK_LINE(332)
			tmp4 = field;
		}
		else{
			HX_STACK_LINE(333)
			bool tmp5 = (c->__Field(HX_HCSTRING("superClass","\xbd","\xa8","\x07","\xa8"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(333)
			if ((tmp5)){
				HX_STACK_LINE(333)
				Dynamic tmp6 = c->__Field(HX_HCSTRING("superClass","\xbd","\xa8","\x07","\xa8"), hx::paccDynamic )->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(333)
				Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(333)
				::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(333)
				bool tmp9 = isStatic;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(333)
				tmp4 = ::haxe::macro::TypeTools_obj::findField(tmp7,tmp8,tmp9);
			}
			else{
				HX_STACK_LINE(334)
				tmp4 = null();
			}
		}
		HX_STACK_LINE(332)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypeTools_obj,findField,return )


TypeTools_obj::TypeTools_obj()
{
}

bool TypeTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"toField") ) { outValue = toField_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nullable") ) { outValue = nullable_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"findField") ) { outValue = findField_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toTypePath") ) { outValue = toTypePath_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toComplexType") ) { outValue = toComplexType_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypeTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeTools_obj::__mClass,"__mClass");
};

#endif

hx::Class TypeTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nullable","\xa1","\x5b","\x36","\x33"),
	HX_HCSTRING("toField","\x3f","\xe1","\x17","\xcd"),
	HX_HCSTRING("toComplexType","\x4f","\x5b","\xa6","\x4b"),
	HX_HCSTRING("toTypePath","\x1a","\x7e","\x39","\x29"),
	HX_HCSTRING("findField","\xc1","\xc5","\x8a","\xef"),
	::String(null()) };

void TypeTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.macro.TypeTools","\xb7","\x91","\xb3","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TypeTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TypeTools_obj >;
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

} // end namespace haxe
} // end namespace macro
