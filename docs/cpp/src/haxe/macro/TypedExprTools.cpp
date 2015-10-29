#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Binop
#include <haxe/macro/Binop.h>
#endif
#ifndef INCLUDED_haxe_macro_FieldAccess
#include <haxe/macro/FieldAccess.h>
#endif
#ifndef INCLUDED_haxe_macro_ModuleType
#include <haxe/macro/ModuleType.h>
#endif
#ifndef INCLUDED_haxe_macro_TConstant
#include <haxe/macro/TConstant.h>
#endif
#ifndef INCLUDED_haxe_macro_Type
#include <haxe/macro/Type.h>
#endif
#ifndef INCLUDED_haxe_macro_TypedExprDef
#include <haxe/macro/TypedExprDef.h>
#endif
#ifndef INCLUDED_haxe_macro_TypedExprTools
#include <haxe/macro/TypedExprTools.h>
#endif
#ifndef INCLUDED_haxe_macro_Unop
#include <haxe/macro/Unop.h>
#endif
namespace haxe{
namespace macro{

Void TypedExprTools_obj::__construct()
{
	return null();
}

//TypedExprTools_obj::~TypedExprTools_obj() { }

Dynamic TypedExprTools_obj::__CreateEmpty() { return  new TypedExprTools_obj; }
hx::ObjectPtr< TypedExprTools_obj > TypedExprTools_obj::__new()
{  hx::ObjectPtr< TypedExprTools_obj > _result_ = new TypedExprTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic TypedExprTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TypedExprTools_obj > _result_ = new TypedExprTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic TypedExprTools_obj::with( Dynamic e,::haxe::macro::TypedExprDef edef,::haxe::macro::Type t){
	HX_STACK_FRAME("haxe.macro.TypedExprTools","with",0x90da950e,"haxe.macro.TypedExprTools.with","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",28,0x8322366f)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(edef,"edef")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(30)
	bool tmp = (edef == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	::haxe::macro::TypedExprDef tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	if ((tmp)){
		HX_STACK_LINE(30)
		tmp1 = e->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(30)
		tmp1 = edef;
	}
	HX_STACK_LINE(31)
	Dynamic tmp2 = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	bool tmp3 = (t == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	::haxe::macro::Type tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	if ((tmp3)){
		HX_STACK_LINE(32)
		tmp4 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(32)
		tmp4 = t;
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::macro::Type &tmp4,Dynamic &tmp2,::haxe::macro::TypedExprDef &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",29,0x8322366f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp1,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp2,false);
				__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp4,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(29)
	Dynamic tmp5 = _Function_1_1::Block(tmp4,tmp2,tmp1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypedExprTools_obj,with,return )

Dynamic TypedExprTools_obj::map( Dynamic e,Dynamic f){
	HX_STACK_FRAME("haxe.macro.TypedExprTools","map",0x1e77a494,"haxe.macro.TypedExprTools.map","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",43,0x8322366f)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(44)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::haxe::macro::TypedExprDef _g = e->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		switch( (int)(_g->__Index())){
			case (int)0: case (int)1: case (int)21: case (int)22: case (int)5: {
				HX_STACK_LINE(45)
				tmp = e;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(44)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(44)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(46)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(46)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(46)
					Dynamic tmp6 = e2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(46)
					Dynamic tmp7 = f(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(46)
					::haxe::macro::TypedExprDef tmp8 = ::haxe::macro::TypedExprDef_obj::TArray(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(46)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp3,tmp8,null());
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(44)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(44)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(44)
				::haxe::macro::Binop tmp3 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(44)
				::haxe::macro::Binop op = tmp3;		HX_STACK_VAR(op,"op");
				HX_STACK_LINE(47)
				{
					HX_STACK_LINE(47)
					Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(47)
					::haxe::macro::Binop tmp5 = op;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(47)
					Dynamic tmp6 = e1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(47)
					Dynamic tmp7 = f(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(47)
					Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(47)
					Dynamic tmp9 = f(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(47)
					::haxe::macro::TypedExprDef tmp10 = ::haxe::macro::TypedExprDef_obj::TBinop(tmp5,tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(47)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp4,tmp10,null());
				}
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(44)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(44)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(44)
				Dynamic tmp3 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(44)
				Dynamic v = tmp3;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(48)
				{
					HX_STACK_LINE(48)
					Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(48)
					Dynamic tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(48)
					Dynamic tmp6 = e1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(48)
					Dynamic tmp7 = f(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(48)
					Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(48)
					Dynamic tmp9 = f(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(48)
					::haxe::macro::TypedExprDef tmp10 = ::haxe::macro::TypedExprDef_obj::TFor(tmp5,tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(48)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp4,tmp10,null());
				}
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(44)
				bool tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				bool flag = tmp1;		HX_STACK_VAR(flag,"flag");
				HX_STACK_LINE(44)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(44)
				Dynamic tmp3 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(49)
				{
					HX_STACK_LINE(49)
					Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(49)
					Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(49)
					Dynamic tmp6 = f(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(49)
					Dynamic tmp7 = e2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(49)
					Dynamic tmp8 = f(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(49)
					bool tmp9 = flag;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(49)
					::haxe::macro::TypedExprDef tmp10 = ::haxe::macro::TypedExprDef_obj::TWhile(tmp6,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(49)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp4,tmp10,null());
				}
			}
			;break;
			case (int)23: {
				HX_STACK_LINE(44)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(50)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(50)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(50)
					Dynamic tmp4 = f(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(50)
					::haxe::macro::TypedExprDef tmp5 = ::haxe::macro::TypedExprDef_obj::TThrow(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(50)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp2,tmp5,null());
				}
			}
			;break;
			case (int)26: {
				HX_STACK_LINE(44)
				int tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				int i = tmp1;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(44)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				Dynamic ef = tmp2;		HX_STACK_VAR(ef,"ef");
				HX_STACK_LINE(44)
				Dynamic tmp3 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(51)
				{
					HX_STACK_LINE(51)
					Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(51)
					Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(51)
					Dynamic tmp6 = f(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(51)
					Dynamic tmp7 = ef;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(51)
					int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(51)
					::haxe::macro::TypedExprDef tmp9 = ::haxe::macro::TypedExprDef_obj::TEnumParameter(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(51)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp4,tmp9,null());
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(44)
				::haxe::macro::FieldAccess tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				::haxe::macro::FieldAccess fa = tmp1;		HX_STACK_VAR(fa,"fa");
				HX_STACK_LINE(44)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(52)
				{
					HX_STACK_LINE(52)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(52)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(52)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(52)
					::haxe::macro::FieldAccess tmp6 = fa;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					::haxe::macro::TypedExprDef tmp7 = ::haxe::macro::TypedExprDef_obj::TField(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(52)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp3,tmp7,null());
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(44)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(53)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(53)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(53)
					Dynamic tmp4 = f(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(53)
					::haxe::macro::TypedExprDef tmp5 = ::haxe::macro::TypedExprDef_obj::TParenthesis(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(53)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp2,tmp5,null());
				}
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(44)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(44)
				bool tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				bool pre = tmp2;		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(44)
				::haxe::macro::Unop tmp3 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(44)
				::haxe::macro::Unop op = tmp3;		HX_STACK_VAR(op,"op");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(54)
					::haxe::macro::Unop tmp5 = op;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(54)
					bool tmp6 = pre;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(54)
					Dynamic tmp7 = e1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(54)
					Dynamic tmp8 = f(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(54)
					::haxe::macro::TypedExprDef tmp9 = ::haxe::macro::TypedExprDef_obj::TUnop(tmp5,tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(54)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp4,tmp9,null());
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(44)
				cpp::ArrayBase el = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(55)
					Dynamic tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(55)
					::haxe::macro::TypedExprDef tmp3 = ::haxe::macro::TypedExprDef_obj::TArrayDecl(el->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(55)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp1,tmp3,null());
				}
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(44)
				cpp::ArrayBase el = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(el,"el");
				HX_STACK_LINE(44)
				Array< ::Dynamic > pl = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(pl,"pl");
				HX_STACK_LINE(44)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				Dynamic t = tmp1;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(56)
				{
					HX_STACK_LINE(56)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(56)
					Dynamic tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(56)
					Dynamic tmp4 = f;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(56)
					::haxe::macro::TypedExprDef tmp5 = ::haxe::macro::TypedExprDef_obj::TNew(tmp3,pl,el->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(56)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp2,tmp5,null());
				}
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(44)
				cpp::ArrayBase el = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(57)
					Dynamic tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(57)
					::haxe::macro::TypedExprDef tmp3 = ::haxe::macro::TypedExprDef_obj::TBlock(el->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(57)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp1,tmp3,null());
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(44)
				cpp::ArrayBase fl = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(fl,"fl");
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Dynamic,f)
					int __ArgCount() const { return 1; }
					Dynamic run(Dynamic field){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",58,0x8322366f)
						HX_STACK_ARG(field,"field")
						{
							HX_STACK_LINE(58)
							::String tmp2 = field->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(58)
							Dynamic tmp3 = field->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(58)
							Dynamic tmp4 = f(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							struct _Function_5_1{
								inline static Dynamic Block( Dynamic &tmp4,::String &tmp2){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",58,0x8322366f)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp2,false);
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp4,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(58)
							Dynamic tmp5 = _Function_5_1::Block(tmp4,tmp2);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(58)
							return tmp5;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(58)
					::haxe::macro::TypedExprDef tmp2 = ::haxe::macro::TypedExprDef_obj::TObjectDecl(fl->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )( Dynamic(new _Function_4_1(f))));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(58)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp1,tmp2,null());
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(44)
				cpp::ArrayBase el = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(el,"el");
				HX_STACK_LINE(44)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(59)
				{
					HX_STACK_LINE(59)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(59)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(59)
					Dynamic tmp4 = f(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(59)
					Dynamic tmp5 = f;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(59)
					::haxe::macro::TypedExprDef tmp6 = ::haxe::macro::TypedExprDef_obj::TCall(tmp4,el->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(59)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp2,tmp6,null());
				}
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(44)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				Dynamic eo = tmp1;		HX_STACK_VAR(eo,"eo");
				HX_STACK_LINE(44)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				Dynamic v = tmp2;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(60)
				{
					HX_STACK_LINE(60)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(60)
					Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(60)
					bool tmp5 = (eo == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(60)
					Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(60)
					if ((tmp5)){
						HX_STACK_LINE(60)
						tmp6 = null();
					}
					else{
						HX_STACK_LINE(60)
						Dynamic tmp7 = eo;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(60)
						tmp6 = f(tmp7);
					}
					HX_STACK_LINE(60)
					::haxe::macro::TypedExprDef tmp7 = ::haxe::macro::TypedExprDef_obj::TVar(tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(60)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp3,tmp7,null());
				}
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(44)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				Dynamic fu = tmp1;		HX_STACK_VAR(fu,"fu");
				HX_STACK_LINE(61)
				{
					HX_STACK_LINE(61)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(61)
					::haxe::macro::Type tmp3 = fu->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(61)
					Dynamic tmp4 = fu->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(61)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					struct _Function_4_1{
						inline static Dynamic Block( Dynamic &tmp5,Dynamic &fu,::haxe::macro::Type &tmp3){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",61,0x8322366f)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp3,false);
								__result->Add(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40") , fu->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic ),false);
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp5,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(61)
					Dynamic tmp6 = _Function_4_1::Block(tmp5,fu,tmp3);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(61)
					::haxe::macro::TypedExprDef tmp7 = ::haxe::macro::TypedExprDef_obj::TFunction(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(61)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp2,tmp7,null());
				}
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(44)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				Dynamic e3 = tmp1;		HX_STACK_VAR(e3,"e3");
				HX_STACK_LINE(44)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(44)
				Dynamic tmp3 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(62)
				{
					HX_STACK_LINE(62)
					Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(62)
					Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(62)
					Dynamic tmp6 = f(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(62)
					Dynamic tmp7 = e2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(62)
					Dynamic tmp8 = f(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					bool tmp9 = (e3 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					if ((tmp9)){
						HX_STACK_LINE(62)
						tmp10 = null();
					}
					else{
						HX_STACK_LINE(62)
						Dynamic tmp11 = e3;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(62)
						tmp10 = f(tmp11);
					}
					HX_STACK_LINE(62)
					::haxe::macro::TypedExprDef tmp11 = ::haxe::macro::TypedExprDef_obj::TIf(tmp6,tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(62)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp4,tmp11,null());
				}
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(44)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(44)
				cpp::ArrayBase cases = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(cases,"cases");
				HX_STACK_LINE(44)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(63)
				{
					HX_STACK_LINE(63)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(63)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(63)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(63)
					bool tmp6 = (e2 == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(63)
					Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(63)
					if ((tmp6)){
						HX_STACK_LINE(63)
						tmp7 = null();
					}
					else{
						HX_STACK_LINE(63)
						Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(63)
						tmp7 = f(tmp8);
					}

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Dynamic,f)
					int __ArgCount() const { return 1; }
					Dynamic run(Dynamic c){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",63,0x8322366f)
						HX_STACK_ARG(c,"c")
						{
							HX_STACK_LINE(63)
							Dynamic tmp8 = f;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(63)
							Dynamic tmp9 = c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(63)
							Dynamic tmp10 = f(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							struct _Function_5_1{
								inline static Dynamic Block( Dynamic &c,Dynamic &tmp10,Dynamic &tmp8){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",63,0x8322366f)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f") , c->__Field(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp8),false);
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp10,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(63)
							Dynamic tmp11 = _Function_5_1::Block(c,tmp10,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(63)
							return tmp11;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(63)
					::haxe::macro::TypedExprDef tmp8 = ::haxe::macro::TypedExprDef_obj::TSwitch(tmp5,cases->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )( Dynamic(new _Function_4_1(f))),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(63)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp3,tmp8,null());
				}
			}
			;break;
			case (int)19: {
				HX_STACK_LINE(44)
				cpp::ArrayBase catches = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(catches,"catches");
				HX_STACK_LINE(44)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(64)
				{
					HX_STACK_LINE(64)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(64)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(64)
					Dynamic tmp4 = f(tmp3);		HX_STACK_VAR(tmp4,"tmp4");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Dynamic,f)
					int __ArgCount() const { return 1; }
					Dynamic run(Dynamic c){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",64,0x8322366f)
						HX_STACK_ARG(c,"c")
						{
							HX_STACK_LINE(64)
							Dynamic tmp5 = c->__Field(HX_HCSTRING("v","\x76","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(64)
							Dynamic tmp6 = c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(64)
							Dynamic tmp7 = f(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							struct _Function_5_1{
								inline static Dynamic Block( Dynamic &tmp5,Dynamic &tmp7){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",64,0x8322366f)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("v","\x76","\x00","\x00","\x00") , tmp5,false);
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp7,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(64)
							Dynamic tmp8 = _Function_5_1::Block(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(64)
							return tmp8;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(64)
					::haxe::macro::TypedExprDef tmp5 = ::haxe::macro::TypedExprDef_obj::TTry(tmp4,catches->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )( Dynamic(new _Function_4_1(f))));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(64)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp2,tmp5,null());
				}
			}
			;break;
			case (int)20: {
				HX_STACK_LINE(44)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(65)
					bool tmp3 = (e1 == null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(65)
					Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(65)
					if ((tmp3)){
						HX_STACK_LINE(65)
						tmp4 = null();
					}
					else{
						HX_STACK_LINE(65)
						Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(65)
						tmp4 = f(tmp5);
					}
					HX_STACK_LINE(65)
					::haxe::macro::TypedExprDef tmp5 = ::haxe::macro::TypedExprDef_obj::TReturn(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(65)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp2,tmp5,null());
				}
			}
			;break;
			case (int)24: {
				HX_STACK_LINE(44)
				::haxe::macro::ModuleType tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				::haxe::macro::ModuleType mt = tmp1;		HX_STACK_VAR(mt,"mt");
				HX_STACK_LINE(44)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(66)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(66)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(66)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(66)
					::haxe::macro::ModuleType tmp6 = mt;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(66)
					::haxe::macro::TypedExprDef tmp7 = ::haxe::macro::TypedExprDef_obj::TCast(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(66)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp3,tmp7,null());
				}
			}
			;break;
			case (int)25: {
				HX_STACK_LINE(44)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(44)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				Dynamic m = tmp2;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(67)
					Dynamic tmp4 = m;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(67)
					Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(67)
					Dynamic tmp6 = f(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(67)
					::haxe::macro::TypedExprDef tmp7 = ::haxe::macro::TypedExprDef_obj::TMeta(tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(67)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp3,tmp7,null());
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(44)
	return tmp;
	HX_STACK_LINE(44)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypedExprTools_obj,map,return )

Void TypedExprTools_obj::iter( Dynamic e,Dynamic f){
{
		HX_STACK_FRAME("haxe.macro.TypedExprTools","iter",0x87a1e420,"haxe.macro.TypedExprTools.iter","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",79,0x8322366f)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			::haxe::macro::TypedExprDef _g = e->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(79)
			switch( (int)(_g->__Index())){
				case (int)0: case (int)1: case (int)21: case (int)22: case (int)5: {
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(79)
					Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(81)
					{
						HX_STACK_LINE(82)
						Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(82)
						f(tmp2).Cast< Void >();
						HX_STACK_LINE(83)
						Dynamic tmp3 = e2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(83)
						f(tmp3).Cast< Void >();
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(79)
					Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(81)
					{
						HX_STACK_LINE(82)
						Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(82)
						f(tmp2).Cast< Void >();
						HX_STACK_LINE(83)
						Dynamic tmp3 = e2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(83)
						f(tmp3).Cast< Void >();
					}
				}
				;break;
				case (int)15: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(79)
					Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(81)
					{
						HX_STACK_LINE(82)
						Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(82)
						f(tmp2).Cast< Void >();
						HX_STACK_LINE(83)
						Dynamic tmp3 = e2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(83)
						f(tmp3).Cast< Void >();
					}
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(79)
					Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(81)
					{
						HX_STACK_LINE(82)
						Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(82)
						f(tmp2).Cast< Void >();
						HX_STACK_LINE(83)
						Dynamic tmp3 = e2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(83)
						f(tmp3).Cast< Void >();
					}
				}
				;break;
				case (int)23: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)26: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)11: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)24: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)25: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(79)
					cpp::ArrayBase el = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(87)
						while((true)){
							HX_STACK_LINE(87)
							bool tmp = (_g1 < el->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(87)
							bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(87)
							if ((tmp1)){
								HX_STACK_LINE(87)
								break;
							}
							HX_STACK_LINE(87)
							Dynamic tmp2 = el->__GetItem(_g1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(87)
							Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(87)
							++(_g1);
							HX_STACK_LINE(87)
							Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(87)
							f(tmp3).Cast< Void >();
						}
					}
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(79)
					cpp::ArrayBase el = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(el,"el");
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(87)
						while((true)){
							HX_STACK_LINE(87)
							bool tmp = (_g1 < el->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(87)
							bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(87)
							if ((tmp1)){
								HX_STACK_LINE(87)
								break;
							}
							HX_STACK_LINE(87)
							Dynamic tmp2 = el->__GetItem(_g1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(87)
							Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(87)
							++(_g1);
							HX_STACK_LINE(87)
							Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(87)
							f(tmp3).Cast< Void >();
						}
					}
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(79)
					cpp::ArrayBase el = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(87)
						while((true)){
							HX_STACK_LINE(87)
							bool tmp = (_g1 < el->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(87)
							bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(87)
							if ((tmp1)){
								HX_STACK_LINE(87)
								break;
							}
							HX_STACK_LINE(87)
							Dynamic tmp2 = el->__GetItem(_g1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(87)
							Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(87)
							++(_g1);
							HX_STACK_LINE(87)
							Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(87)
							f(tmp3).Cast< Void >();
						}
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(79)
					cpp::ArrayBase fl = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(fl,"fl");
					HX_STACK_LINE(89)
					{
						HX_STACK_LINE(89)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(89)
						while((true)){
							HX_STACK_LINE(89)
							bool tmp = (_g1 < fl->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(89)
							bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(89)
							if ((tmp1)){
								HX_STACK_LINE(89)
								break;
							}
							HX_STACK_LINE(89)
							Dynamic tmp2 = fl->__GetItem(_g1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(89)
							Dynamic field = tmp2;		HX_STACK_VAR(field,"field");
							HX_STACK_LINE(89)
							++(_g1);
							HX_STACK_LINE(89)
							Dynamic tmp3 = field->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(89)
							f(tmp3).Cast< Void >();
						}
					}
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(79)
					cpp::ArrayBase el = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(el,"el");
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(90)
					{
						HX_STACK_LINE(91)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(91)
						f(tmp1).Cast< Void >();
						HX_STACK_LINE(92)
						{
							HX_STACK_LINE(92)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(92)
							while((true)){
								HX_STACK_LINE(92)
								bool tmp2 = (_g1 < el->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
								HX_STACK_LINE(92)
								bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(92)
								if ((tmp3)){
									HX_STACK_LINE(92)
									break;
								}
								HX_STACK_LINE(92)
								Dynamic tmp4 = el->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(92)
								Dynamic e2 = tmp4;		HX_STACK_VAR(e2,"e2");
								HX_STACK_LINE(92)
								++(_g1);
								HX_STACK_LINE(92)
								Dynamic tmp5 = e2;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(92)
								f(tmp5).Cast< Void >();
							}
						}
					}
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(93)
					{
						HX_STACK_LINE(94)
						bool tmp1 = (e1 != null());		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(94)
						if ((tmp1)){
							HX_STACK_LINE(94)
							Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(94)
							f(tmp2).Cast< Void >();
						}
					}
				}
				;break;
				case (int)20: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(93)
					{
						HX_STACK_LINE(94)
						bool tmp1 = (e1 != null());		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(94)
						if ((tmp1)){
							HX_STACK_LINE(94)
							Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(94)
							f(tmp2).Cast< Void >();
						}
					}
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic fu = tmp;		HX_STACK_VAR(fu,"fu");
					HX_STACK_LINE(95)
					{
						HX_STACK_LINE(96)
						Dynamic tmp1 = fu->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(96)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e3 = tmp;		HX_STACK_VAR(e3,"e3");
					HX_STACK_LINE(79)
					Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(79)
					Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(79)
					Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(97)
					{
						HX_STACK_LINE(98)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(98)
						f(tmp3).Cast< Void >();
						HX_STACK_LINE(99)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(99)
						f(tmp4).Cast< Void >();
						HX_STACK_LINE(100)
						bool tmp5 = (e3 != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(100)
						if ((tmp5)){
							HX_STACK_LINE(100)
							Dynamic tmp6 = e3;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(100)
							f(tmp6).Cast< Void >();
						}
					}
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(79)
					cpp::ArrayBase cases = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(cases,"cases");
					HX_STACK_LINE(79)
					Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(101)
					{
						HX_STACK_LINE(102)
						Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(102)
						f(tmp2).Cast< Void >();
						HX_STACK_LINE(103)
						{
							HX_STACK_LINE(103)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(103)
							while((true)){
								HX_STACK_LINE(103)
								bool tmp3 = (_g1 < cases->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(103)
								bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(103)
								if ((tmp4)){
									HX_STACK_LINE(103)
									break;
								}
								HX_STACK_LINE(103)
								Dynamic tmp5 = cases->__GetItem(_g1);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(103)
								Dynamic c = tmp5;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(103)
								++(_g1);
								HX_STACK_LINE(104)
								{
									HX_STACK_LINE(104)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(104)
									cpp::ArrayBase _g3 = c->__Field(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"), hx::paccDynamic );		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(104)
									while((true)){
										HX_STACK_LINE(104)
										bool tmp6 = (_g2 < _g3->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(104)
										bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(104)
										if ((tmp7)){
											HX_STACK_LINE(104)
											break;
										}
										HX_STACK_LINE(104)
										Dynamic tmp8 = _g3->__GetItem(_g2);		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(104)
										Dynamic v = tmp8;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(104)
										++(_g2);
										HX_STACK_LINE(104)
										Dynamic tmp9 = v;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(104)
										f(tmp9).Cast< Void >();
									}
								}
								HX_STACK_LINE(105)
								Dynamic tmp6 = c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(105)
								f(tmp6).Cast< Void >();
							}
						}
						HX_STACK_LINE(107)
						bool tmp3 = (e2 != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(107)
						if ((tmp3)){
							HX_STACK_LINE(107)
							Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(107)
							f(tmp4).Cast< Void >();
						}
					}
				}
				;break;
				case (int)19: {
					HX_STACK_LINE(79)
					cpp::ArrayBase catches = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(catches,"catches");
					HX_STACK_LINE(79)
					Dynamic tmp = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(108)
					{
						HX_STACK_LINE(109)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(109)
						f(tmp1).Cast< Void >();
						HX_STACK_LINE(110)
						{
							HX_STACK_LINE(110)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(110)
							while((true)){
								HX_STACK_LINE(110)
								bool tmp2 = (_g1 < catches->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
								HX_STACK_LINE(110)
								bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(110)
								if ((tmp3)){
									HX_STACK_LINE(110)
									break;
								}
								HX_STACK_LINE(110)
								Dynamic tmp4 = catches->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(110)
								Dynamic c = tmp4;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(110)
								++(_g1);
								HX_STACK_LINE(110)
								Dynamic tmp5 = c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(110)
								f(tmp5).Cast< Void >();
							}
						}
					}
				}
				;break;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypedExprTools_obj,iter,(void))

Dynamic TypedExprTools_obj::mapWithType( Dynamic e,Dynamic f,Dynamic ft,Dynamic fv){
	HX_STACK_FRAME("haxe.macro.TypedExprTools","mapWithType",0x81b32494,"haxe.macro.TypedExprTools.mapWithType","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",123,0x8322366f)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(ft,"ft")
	HX_STACK_ARG(fv,"fv")
	HX_STACK_LINE(124)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	{
		HX_STACK_LINE(124)
		::haxe::macro::TypedExprDef _g = e->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		switch( (int)(_g->__Index())){
			case (int)0: case (int)21: case (int)22: case (int)5: {
				HX_STACK_LINE(125)
				Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(125)
				::haxe::macro::Type tmp2 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(125)
				::haxe::macro::Type tmp3 = ft(tmp2).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(125)
				tmp = ::haxe::macro::TypedExprTools_obj::with(tmp1,null(),tmp3);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic v = tmp1;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(126)
				{
					HX_STACK_LINE(126)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(126)
					Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(126)
					Dynamic tmp4 = fv(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(126)
					::haxe::macro::TypedExprDef tmp5 = ::haxe::macro::TypedExprDef_obj::TLocal(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(126)
					::haxe::macro::Type tmp6 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(126)
					::haxe::macro::Type tmp7 = ft(tmp6).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(126)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp2,tmp5,tmp7);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(124)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(127)
				{
					HX_STACK_LINE(127)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(127)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(127)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(127)
					Dynamic tmp6 = e2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(127)
					Dynamic tmp7 = f(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(127)
					::haxe::macro::TypedExprDef tmp8 = ::haxe::macro::TypedExprDef_obj::TArray(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(127)
					::haxe::macro::Type tmp9 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(127)
					::haxe::macro::Type tmp10 = ft(tmp9).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(127)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp3,tmp8,tmp10);
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(124)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(124)
				::haxe::macro::Binop tmp3 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(124)
				::haxe::macro::Binop op = tmp3;		HX_STACK_VAR(op,"op");
				HX_STACK_LINE(128)
				{
					HX_STACK_LINE(128)
					Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(128)
					::haxe::macro::Binop tmp5 = op;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(128)
					Dynamic tmp6 = e1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(128)
					Dynamic tmp7 = f(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(128)
					Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(128)
					Dynamic tmp9 = f(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(128)
					::haxe::macro::TypedExprDef tmp10 = ::haxe::macro::TypedExprDef_obj::TBinop(tmp5,tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(128)
					::haxe::macro::Type tmp11 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(128)
					::haxe::macro::Type tmp12 = ft(tmp11).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(128)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp4,tmp10,tmp12);
				}
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(124)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(124)
				Dynamic tmp3 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(124)
				Dynamic v = tmp3;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(129)
				{
					HX_STACK_LINE(129)
					Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(129)
					Dynamic tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(129)
					Dynamic tmp6 = fv(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(129)
					Dynamic tmp7 = e1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(129)
					Dynamic tmp8 = f(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(129)
					Dynamic tmp9 = e2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(129)
					Dynamic tmp10 = f(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(129)
					::haxe::macro::TypedExprDef tmp11 = ::haxe::macro::TypedExprDef_obj::TFor(tmp6,tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(129)
					::haxe::macro::Type tmp12 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(129)
					::haxe::macro::Type tmp13 = ft(tmp12).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(129)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp4,tmp11,tmp13);
				}
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(124)
				bool tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				bool flag = tmp1;		HX_STACK_VAR(flag,"flag");
				HX_STACK_LINE(124)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(124)
				Dynamic tmp3 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(130)
				{
					HX_STACK_LINE(130)
					Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(130)
					Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(130)
					Dynamic tmp6 = f(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(130)
					Dynamic tmp7 = e2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(130)
					Dynamic tmp8 = f(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(130)
					bool tmp9 = flag;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(130)
					::haxe::macro::TypedExprDef tmp10 = ::haxe::macro::TypedExprDef_obj::TWhile(tmp6,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(130)
					::haxe::macro::Type tmp11 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(130)
					::haxe::macro::Type tmp12 = ft(tmp11).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(130)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp4,tmp10,tmp12);
				}
			}
			;break;
			case (int)23: {
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(131)
				{
					HX_STACK_LINE(131)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(131)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(131)
					Dynamic tmp4 = f(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(131)
					::haxe::macro::TypedExprDef tmp5 = ::haxe::macro::TypedExprDef_obj::TThrow(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(131)
					::haxe::macro::Type tmp6 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(131)
					::haxe::macro::Type tmp7 = ft(tmp6).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(131)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp2,tmp5,tmp7);
				}
			}
			;break;
			case (int)26: {
				HX_STACK_LINE(124)
				int tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				int i = tmp1;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(124)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				Dynamic ef = tmp2;		HX_STACK_VAR(ef,"ef");
				HX_STACK_LINE(124)
				Dynamic tmp3 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(132)
				{
					HX_STACK_LINE(132)
					Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(132)
					Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(132)
					Dynamic tmp6 = f(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(132)
					Dynamic tmp7 = ef;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(132)
					int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(132)
					::haxe::macro::TypedExprDef tmp9 = ::haxe::macro::TypedExprDef_obj::TEnumParameter(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(132)
					::haxe::macro::Type tmp10 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(132)
					::haxe::macro::Type tmp11 = ft(tmp10).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(132)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp4,tmp9,tmp11);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(124)
				::haxe::macro::FieldAccess tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				::haxe::macro::FieldAccess fa = tmp1;		HX_STACK_VAR(fa,"fa");
				HX_STACK_LINE(124)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(133)
				{
					HX_STACK_LINE(133)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(133)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(133)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(133)
					::haxe::macro::FieldAccess tmp6 = fa;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(133)
					::haxe::macro::TypedExprDef tmp7 = ::haxe::macro::TypedExprDef_obj::TField(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(133)
					::haxe::macro::Type tmp8 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(133)
					::haxe::macro::Type tmp9 = ft(tmp8).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(133)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp3,tmp7,tmp9);
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(134)
				{
					HX_STACK_LINE(134)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(134)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(134)
					::haxe::macro::TypedExprDef tmp4 = ::haxe::macro::TypedExprDef_obj::TParenthesis(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(134)
					::haxe::macro::Type tmp5 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(134)
					::haxe::macro::Type tmp6 = ft(tmp5).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(134)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp2,tmp4,tmp6);
				}
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(124)
				bool tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				bool pre = tmp2;		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(124)
				::haxe::macro::Unop tmp3 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(124)
				::haxe::macro::Unop op = tmp3;		HX_STACK_VAR(op,"op");
				HX_STACK_LINE(135)
				{
					HX_STACK_LINE(135)
					Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(135)
					::haxe::macro::Unop tmp5 = op;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(135)
					bool tmp6 = pre;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(135)
					Dynamic tmp7 = e1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(135)
					Dynamic tmp8 = f(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(135)
					::haxe::macro::TypedExprDef tmp9 = ::haxe::macro::TypedExprDef_obj::TUnop(tmp5,tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(135)
					::haxe::macro::Type tmp10 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(135)
					::haxe::macro::Type tmp11 = ft(tmp10).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(135)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp4,tmp9,tmp11);
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(124)
				cpp::ArrayBase el = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
				HX_STACK_LINE(136)
				{
					HX_STACK_LINE(136)
					Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(136)
					Dynamic tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(136)
					::haxe::macro::TypedExprDef tmp3 = ::haxe::macro::TypedExprDef_obj::TArrayDecl(el->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(136)
					::haxe::macro::Type tmp4 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(136)
					::haxe::macro::Type tmp5 = ft(tmp4).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(136)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp1,tmp3,tmp5);
				}
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(124)
				cpp::ArrayBase el = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(el,"el");
				HX_STACK_LINE(124)
				Array< ::Dynamic > pl = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(pl,"pl");
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic t = tmp1;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(137)
				{
					HX_STACK_LINE(137)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(137)
					Dynamic tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(137)
					Dynamic tmp4 = f;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(137)
					::haxe::macro::TypedExprDef tmp5 = ::haxe::macro::TypedExprDef_obj::TNew(tmp3,pl,el->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(137)
					::haxe::macro::Type tmp6 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(137)
					::haxe::macro::Type tmp7 = ft(tmp6).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(137)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp2,tmp5,tmp7);
				}
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(124)
				cpp::ArrayBase el = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
				HX_STACK_LINE(138)
				{
					HX_STACK_LINE(138)
					Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(138)
					Dynamic tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(138)
					::haxe::macro::TypedExprDef tmp3 = ::haxe::macro::TypedExprDef_obj::TBlock(el->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(138)
					::haxe::macro::Type tmp4 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(138)
					::haxe::macro::Type tmp5 = ft(tmp4).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(138)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp1,tmp3,tmp5);
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(124)
				cpp::ArrayBase fl = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(fl,"fl");
				HX_STACK_LINE(139)
				{
					HX_STACK_LINE(139)
					Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Dynamic,f)
					int __ArgCount() const { return 1; }
					Dynamic run(Dynamic field){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",139,0x8322366f)
						HX_STACK_ARG(field,"field")
						{
							HX_STACK_LINE(139)
							::String tmp2 = field->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(139)
							Dynamic tmp3 = field->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(139)
							Dynamic tmp4 = f(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							struct _Function_5_1{
								inline static Dynamic Block( Dynamic &tmp4,::String &tmp2){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",139,0x8322366f)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp2,false);
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp4,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(139)
							Dynamic tmp5 = _Function_5_1::Block(tmp4,tmp2);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(139)
							return tmp5;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(139)
					::haxe::macro::TypedExprDef tmp2 = ::haxe::macro::TypedExprDef_obj::TObjectDecl(fl->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )( Dynamic(new _Function_4_1(f))));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(139)
					::haxe::macro::Type tmp3 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(139)
					::haxe::macro::Type tmp4 = ft(tmp3).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(139)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp1,tmp2,tmp4);
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(124)
				cpp::ArrayBase el = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(el,"el");
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(140)
				{
					HX_STACK_LINE(140)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(140)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(140)
					Dynamic tmp4 = f(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(140)
					Dynamic tmp5 = f;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(140)
					::haxe::macro::TypedExprDef tmp6 = ::haxe::macro::TypedExprDef_obj::TCall(tmp4,el->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(140)
					::haxe::macro::Type tmp7 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(140)
					::haxe::macro::Type tmp8 = ft(tmp7).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(140)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp2,tmp6,tmp8);
				}
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic eo = tmp1;		HX_STACK_VAR(eo,"eo");
				HX_STACK_LINE(124)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				Dynamic v = tmp2;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(141)
				{
					HX_STACK_LINE(141)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(141)
					Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(141)
					Dynamic tmp5 = fv(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(141)
					bool tmp6 = (eo == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(141)
					Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(141)
					if ((tmp6)){
						HX_STACK_LINE(141)
						tmp7 = null();
					}
					else{
						HX_STACK_LINE(141)
						Dynamic tmp8 = eo;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(141)
						tmp7 = f(tmp8);
					}
					HX_STACK_LINE(141)
					::haxe::macro::TypedExprDef tmp8 = ::haxe::macro::TypedExprDef_obj::TVar(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(141)
					::haxe::macro::Type tmp9 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(141)
					::haxe::macro::Type tmp10 = ft(tmp9).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(141)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp3,tmp8,tmp10);
				}
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic fu = tmp1;		HX_STACK_VAR(fu,"fu");
				HX_STACK_LINE(142)
				{
					HX_STACK_LINE(142)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(142)
					::haxe::macro::Type tmp3 = fu->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(142)
					::haxe::macro::Type tmp4 = ft(tmp3).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(142)
					Dynamic tmp5 = fu->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(142)
					Dynamic tmp6 = f(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					struct _Function_4_1{
						inline static Dynamic Block( Dynamic &tmp6,Dynamic &fu,::haxe::macro::Type &tmp4,Dynamic &fv){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",142,0x8322366f)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp4,false);

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_1,Dynamic,fv)
								int __ArgCount() const { return 1; }
								Dynamic run(Dynamic arg){
									HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",142,0x8322366f)
									HX_STACK_ARG(arg,"arg")
									{
										HX_STACK_LINE(142)
										Dynamic tmp7 = arg->__Field(HX_HCSTRING("v","\x76","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(142)
										Dynamic tmp8 = fv(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(142)
										::haxe::macro::TConstant tmp9 = arg->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
										struct _Function_6_1{
											inline static Dynamic Block( ::haxe::macro::TConstant &tmp9,Dynamic &tmp8){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",142,0x8322366f)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_HCSTRING("v","\x76","\x00","\x00","\x00") , tmp8,false);
													__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp9,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(142)
										Dynamic tmp10 = _Function_6_1::Block(tmp9,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(142)
										return tmp10;
									}
									return null();
								}
								HX_END_LOCAL_FUNC1(return)

								__result->Add(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40") , fu->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )( Dynamic(new _Function_5_1(fv))),false);
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp6,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(142)
					Dynamic tmp7 = _Function_4_1::Block(tmp6,fu,tmp4,fv);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(142)
					::haxe::macro::TypedExprDef tmp8 = ::haxe::macro::TypedExprDef_obj::TFunction(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(142)
					::haxe::macro::Type tmp9 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(142)
					::haxe::macro::Type tmp10 = ft(tmp9).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(142)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp2,tmp8,tmp10);
				}
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic e3 = tmp1;		HX_STACK_VAR(e3,"e3");
				HX_STACK_LINE(124)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(124)
				Dynamic tmp3 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(143)
				{
					HX_STACK_LINE(143)
					Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(143)
					Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(143)
					Dynamic tmp6 = f(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(143)
					Dynamic tmp7 = e2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(143)
					Dynamic tmp8 = f(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(143)
					bool tmp9 = (e3 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(143)
					Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(143)
					if ((tmp9)){
						HX_STACK_LINE(143)
						tmp10 = null();
					}
					else{
						HX_STACK_LINE(143)
						Dynamic tmp11 = e3;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(143)
						tmp10 = f(tmp11);
					}
					HX_STACK_LINE(143)
					::haxe::macro::TypedExprDef tmp11 = ::haxe::macro::TypedExprDef_obj::TIf(tmp6,tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(143)
					::haxe::macro::Type tmp12 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(143)
					::haxe::macro::Type tmp13 = ft(tmp12).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(143)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp4,tmp11,tmp13);
				}
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(124)
				cpp::ArrayBase cases = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(cases,"cases");
				HX_STACK_LINE(124)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(144)
				{
					HX_STACK_LINE(144)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(144)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(144)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(144)
					bool tmp6 = (e2 == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(144)
					Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(144)
					if ((tmp6)){
						HX_STACK_LINE(144)
						tmp7 = null();
					}
					else{
						HX_STACK_LINE(144)
						Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(144)
						tmp7 = f(tmp8);
					}

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Dynamic,f)
					int __ArgCount() const { return 1; }
					Dynamic run(Dynamic c){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",144,0x8322366f)
						HX_STACK_ARG(c,"c")
						{
							HX_STACK_LINE(144)
							Dynamic tmp8 = f;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(144)
							Dynamic tmp9 = c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(144)
							Dynamic tmp10 = f(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							struct _Function_5_1{
								inline static Dynamic Block( Dynamic &c,Dynamic &tmp10,Dynamic &tmp8){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",144,0x8322366f)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f") , c->__Field(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp8),false);
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp10,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(144)
							Dynamic tmp11 = _Function_5_1::Block(c,tmp10,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(144)
							return tmp11;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(144)
					::haxe::macro::TypedExprDef tmp8 = ::haxe::macro::TypedExprDef_obj::TSwitch(tmp5,cases->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )( Dynamic(new _Function_4_1(f))),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(144)
					::haxe::macro::Type tmp9 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(144)
					::haxe::macro::Type tmp10 = ft(tmp9).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(144)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp3,tmp8,tmp10);
				}
			}
			;break;
			case (int)19: {
				HX_STACK_LINE(124)
				cpp::ArrayBase catches = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(catches,"catches");
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(145)
				{
					HX_STACK_LINE(145)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(145)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(145)
					Dynamic tmp4 = f(tmp3);		HX_STACK_VAR(tmp4,"tmp4");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,fv,Dynamic,f)
					int __ArgCount() const { return 1; }
					Dynamic run(Dynamic c){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",145,0x8322366f)
						HX_STACK_ARG(c,"c")
						{
							HX_STACK_LINE(145)
							Dynamic tmp5 = c->__Field(HX_HCSTRING("v","\x76","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(145)
							Dynamic tmp6 = fv(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(145)
							Dynamic tmp7 = c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(145)
							Dynamic tmp8 = f(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							struct _Function_5_1{
								inline static Dynamic Block( Dynamic &tmp6,Dynamic &tmp8){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/TypedExprTools.hx",145,0x8322366f)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("v","\x76","\x00","\x00","\x00") , tmp6,false);
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp8,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(145)
							Dynamic tmp9 = _Function_5_1::Block(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(145)
							return tmp9;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(145)
					::haxe::macro::TypedExprDef tmp5 = ::haxe::macro::TypedExprDef_obj::TTry(tmp4,catches->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )( Dynamic(new _Function_4_1(fv,f))));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(145)
					::haxe::macro::Type tmp6 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(145)
					::haxe::macro::Type tmp7 = ft(tmp6).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(145)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp2,tmp5,tmp7);
				}
			}
			;break;
			case (int)20: {
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(146)
				{
					HX_STACK_LINE(146)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(146)
					bool tmp3 = (e1 == null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(146)
					Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(146)
					if ((tmp3)){
						HX_STACK_LINE(146)
						tmp4 = null();
					}
					else{
						HX_STACK_LINE(146)
						Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(146)
						tmp4 = f(tmp5);
					}
					HX_STACK_LINE(146)
					::haxe::macro::TypedExprDef tmp5 = ::haxe::macro::TypedExprDef_obj::TReturn(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(146)
					::haxe::macro::Type tmp6 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(146)
					::haxe::macro::Type tmp7 = ft(tmp6).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(146)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp2,tmp5,tmp7);
				}
			}
			;break;
			case (int)24: {
				HX_STACK_LINE(124)
				::haxe::macro::ModuleType tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				::haxe::macro::ModuleType mt = tmp1;		HX_STACK_VAR(mt,"mt");
				HX_STACK_LINE(124)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(147)
				{
					HX_STACK_LINE(147)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(147)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(147)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(147)
					::haxe::macro::ModuleType tmp6 = mt;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(147)
					::haxe::macro::TypedExprDef tmp7 = ::haxe::macro::TypedExprDef_obj::TCast(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(147)
					::haxe::macro::Type tmp8 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(147)
					::haxe::macro::Type tmp9 = ft(tmp8).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(147)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp3,tmp7,tmp9);
				}
			}
			;break;
			case (int)25: {
				HX_STACK_LINE(124)
				Dynamic tmp1 = (::haxe::macro::TypedExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(124)
				Dynamic tmp2 = (::haxe::macro::TypedExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				Dynamic m = tmp2;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(148)
					Dynamic tmp4 = m;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(148)
					Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(148)
					Dynamic tmp6 = f(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(148)
					::haxe::macro::TypedExprDef tmp7 = ::haxe::macro::TypedExprDef_obj::TMeta(tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(148)
					::haxe::macro::Type tmp8 = e->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(148)
					::haxe::macro::Type tmp9 = ft(tmp8).Cast< ::haxe::macro::Type >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(148)
					tmp = ::haxe::macro::TypedExprTools_obj::with(tmp3,tmp7,tmp9);
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(124)
	return tmp;
	HX_STACK_LINE(124)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(TypedExprTools_obj,mapWithType,return )


TypedExprTools_obj::TypedExprTools_obj()
{
}

bool TypedExprTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"with") ) { outValue = with_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"iter") ) { outValue = iter_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mapWithType") ) { outValue = mapWithType_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypedExprTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypedExprTools_obj::__mClass,"__mClass");
};

#endif

hx::Class TypedExprTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("with","\x06","\x76","\xf8","\x4e"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("iter","\x18","\xc5","\xbf","\x45"),
	HX_HCSTRING("mapWithType","\x9c","\xd2","\xef","\xfd"),
	::String(null()) };

void TypedExprTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.macro.TypedExprTools","\x66","\x9e","\x36","\xa2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TypedExprTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TypedExprTools_obj >;
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
