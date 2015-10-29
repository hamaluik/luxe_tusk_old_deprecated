#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_macro_ExprArrayTools
#include <haxe/macro/ExprArrayTools.h>
#endif
#ifndef INCLUDED_haxe_macro_ExprDef
#include <haxe/macro/ExprDef.h>
#endif
#ifndef INCLUDED_haxe_macro_ExprTools
#include <haxe/macro/ExprTools.h>
#endif
#ifndef INCLUDED_haxe_macro_Printer
#include <haxe/macro/Printer.h>
#endif
#ifndef INCLUDED_haxe_macro_Unop
#include <haxe/macro/Unop.h>
#endif
namespace haxe{
namespace macro{

Void ExprTools_obj::__construct()
{
	return null();
}

//ExprTools_obj::~ExprTools_obj() { }

Dynamic ExprTools_obj::__CreateEmpty() { return  new ExprTools_obj; }
hx::ObjectPtr< ExprTools_obj > ExprTools_obj::__new()
{  hx::ObjectPtr< ExprTools_obj > _result_ = new ExprTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic ExprTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExprTools_obj > _result_ = new ExprTools_obj();
	_result_->__construct();
	return _result_;}

::String ExprTools_obj::toString( Dynamic e){
	HX_STACK_FRAME("haxe.macro.ExprTools","toString",0x5bd5f9fe,"haxe.macro.ExprTools.toString","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",45,0x6b786beb)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(45)
	::haxe::macro::Printer tmp = ::haxe::macro::Printer_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	::String tmp2 = tmp->printExpr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprTools_obj,toString,return )

Void ExprTools_obj::iter( Dynamic e,Dynamic f){
{
		HX_STACK_FRAME("haxe.macro.ExprTools","iter",0xee9f5d6a,"haxe.macro.ExprTools.iter","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",71,0x6b786beb)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			::haxe::macro::ExprDef _g = e->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(71)
			switch( (int)(_g->__Index())){
				case (int)0: case (int)21: case (int)20: case (int)26: {
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)22: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)23: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)25: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)28: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)24: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)29: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(85)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(85)
						f(tmp1).Cast< Void >();
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(71)
					Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(91)
						Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(91)
						f(tmp2).Cast< Void >();
						HX_STACK_LINE(92)
						Dynamic tmp3 = e2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(92)
						f(tmp3).Cast< Void >();
					}
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(71)
					Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(91)
						Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(91)
						f(tmp2).Cast< Void >();
						HX_STACK_LINE(92)
						Dynamic tmp3 = e2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(92)
						f(tmp3).Cast< Void >();
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(71)
					Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(91)
						Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(91)
						f(tmp2).Cast< Void >();
						HX_STACK_LINE(92)
						Dynamic tmp3 = e2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(92)
						f(tmp3).Cast< Void >();
					}
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(71)
					Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(91)
						Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(91)
						f(tmp2).Cast< Void >();
						HX_STACK_LINE(92)
						Dynamic tmp3 = e2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(92)
						f(tmp3).Cast< Void >();
					}
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(71)
					Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(91)
						Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(91)
						f(tmp2).Cast< Void >();
						HX_STACK_LINE(92)
						Dynamic tmp3 = e2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(92)
						f(tmp3).Cast< Void >();
					}
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(71)
					cpp::ArrayBase vl = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(vl,"vl");
					HX_STACK_LINE(94)
					{
						HX_STACK_LINE(94)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(94)
						while((true)){
							HX_STACK_LINE(94)
							bool tmp = (_g1 < vl->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(94)
							bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(94)
							if ((tmp1)){
								HX_STACK_LINE(94)
								break;
							}
							HX_STACK_LINE(94)
							Dynamic tmp2 = vl->__GetItem(_g1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(94)
							Dynamic v = tmp2;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(94)
							++(_g1);
							HX_STACK_LINE(95)
							Dynamic e1 = v->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(95)
							bool tmp3 = (e1 != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(95)
							if ((tmp3)){
								HX_STACK_LINE(95)
								Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(95)
								f(tmp4).Cast< Void >();
							}
						}
					}
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(71)
					cpp::ArrayBase cl = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(96)
					{
						HX_STACK_LINE(97)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(97)
						f(tmp1).Cast< Void >();
						HX_STACK_LINE(98)
						{
							HX_STACK_LINE(98)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(98)
							while((true)){
								HX_STACK_LINE(98)
								bool tmp2 = (_g1 < cl->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
								HX_STACK_LINE(98)
								bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(98)
								if ((tmp3)){
									HX_STACK_LINE(98)
									break;
								}
								HX_STACK_LINE(98)
								Dynamic tmp4 = cl->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(98)
								Dynamic c = tmp4;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(98)
								++(_g1);
								HX_STACK_LINE(99)
								Dynamic tmp5 = c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(99)
								f(tmp5).Cast< Void >();
							}
						}
					}
				}
				;break;
				case (int)27: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e3 = tmp;		HX_STACK_VAR(e3,"e3");
					HX_STACK_LINE(71)
					Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(71)
					Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(71)
					Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(100)
					{
						HX_STACK_LINE(102)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(102)
						f(tmp3).Cast< Void >();
						HX_STACK_LINE(103)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(103)
						f(tmp4).Cast< Void >();
						HX_STACK_LINE(104)
						bool tmp5 = (e3 != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(104)
						if ((tmp5)){
							HX_STACK_LINE(104)
							Dynamic tmp6 = e3;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(104)
							f(tmp6).Cast< Void >();
						}
					}
				}
				;break;
				case (int)15: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e3 = tmp;		HX_STACK_VAR(e3,"e3");
					HX_STACK_LINE(71)
					Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(71)
					Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(71)
					Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(100)
					{
						HX_STACK_LINE(102)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(102)
						f(tmp3).Cast< Void >();
						HX_STACK_LINE(103)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(103)
						f(tmp4).Cast< Void >();
						HX_STACK_LINE(104)
						bool tmp5 = (e3 != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(104)
						if ((tmp5)){
							HX_STACK_LINE(104)
							Dynamic tmp6 = e3;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(104)
							f(tmp6).Cast< Void >();
						}
					}
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(71)
					cpp::ArrayBase el = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
					HX_STACK_LINE(105)
					{
						HX_STACK_LINE(108)
						Dynamic tmp = f;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(108)
						::haxe::macro::ExprArrayTools_obj::iter(el,tmp);
					}
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(71)
					cpp::ArrayBase el = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(el,"el");
					HX_STACK_LINE(105)
					{
						HX_STACK_LINE(108)
						Dynamic tmp = f;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(108)
						::haxe::macro::ExprArrayTools_obj::iter(el,tmp);
					}
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(71)
					cpp::ArrayBase el = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
					HX_STACK_LINE(105)
					{
						HX_STACK_LINE(108)
						Dynamic tmp = f;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(108)
						::haxe::macro::ExprArrayTools_obj::iter(el,tmp);
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(71)
					cpp::ArrayBase fl = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(fl,"fl");
					HX_STACK_LINE(110)
					{
						HX_STACK_LINE(110)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(110)
						while((true)){
							HX_STACK_LINE(110)
							bool tmp = (_g1 < fl->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(110)
							bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(110)
							if ((tmp1)){
								HX_STACK_LINE(110)
								break;
							}
							HX_STACK_LINE(110)
							Dynamic tmp2 = fl->__GetItem(_g1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(110)
							Dynamic fd = tmp2;		HX_STACK_VAR(fd,"fd");
							HX_STACK_LINE(110)
							++(_g1);
							HX_STACK_LINE(111)
							Dynamic tmp3 = fd->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(111)
							f(tmp3).Cast< Void >();
						}
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(71)
					cpp::ArrayBase el = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(el,"el");
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(112)
					{
						HX_STACK_LINE(113)
						Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(113)
						f(tmp1).Cast< Void >();
						HX_STACK_LINE(114)
						Dynamic tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(114)
						::haxe::macro::ExprArrayTools_obj::iter(el,tmp2);
					}
				}
				;break;
				case (int)19: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(115)
					{
						HX_STACK_LINE(116)
						bool tmp1 = (e1 != null());		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(116)
						if ((tmp1)){
							HX_STACK_LINE(116)
							Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(116)
							f(tmp2).Cast< Void >();
						}
					}
				}
				;break;
				case (int)11: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic func = tmp;		HX_STACK_VAR(func,"func");
					HX_STACK_LINE(117)
					{
						HX_STACK_LINE(118)
						{
							HX_STACK_LINE(118)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(118)
							cpp::ArrayBase _g2 = func->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(118)
							while((true)){
								HX_STACK_LINE(118)
								bool tmp1 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(118)
								bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
								HX_STACK_LINE(118)
								if ((tmp2)){
									HX_STACK_LINE(118)
									break;
								}
								HX_STACK_LINE(118)
								Dynamic tmp3 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(118)
								Dynamic arg = tmp3;		HX_STACK_VAR(arg,"arg");
								HX_STACK_LINE(118)
								++(_g1);
								HX_STACK_LINE(119)
								Dynamic e1 = arg->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(e1,"e1");
								HX_STACK_LINE(119)
								bool tmp4 = (e1 != null());		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(119)
								if ((tmp4)){
									HX_STACK_LINE(119)
									Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(119)
									f(tmp5).Cast< Void >();
								}
							}
						}
						HX_STACK_LINE(120)
						{
							HX_STACK_LINE(120)
							Dynamic e1 = func->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(120)
							bool tmp1 = (e1 != null());		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(120)
							if ((tmp1)){
								HX_STACK_LINE(120)
								Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
								HX_STACK_LINE(120)
								f(tmp2).Cast< Void >();
							}
						}
					}
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(71)
					Dynamic tmp = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(71)
					Dynamic edef = tmp;		HX_STACK_VAR(edef,"edef");
					HX_STACK_LINE(71)
					cpp::ArrayBase cl = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(71)
					Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(71)
					Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(121)
					{
						HX_STACK_LINE(122)
						Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(122)
						f(tmp2).Cast< Void >();
						HX_STACK_LINE(123)
						{
							HX_STACK_LINE(123)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(123)
							while((true)){
								HX_STACK_LINE(123)
								bool tmp3 = (_g1 < cl->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(123)
								bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(123)
								if ((tmp4)){
									HX_STACK_LINE(123)
									break;
								}
								HX_STACK_LINE(123)
								Dynamic tmp5 = cl->__GetItem(_g1);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(123)
								Dynamic c = tmp5;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(123)
								++(_g1);
								HX_STACK_LINE(124)
								Dynamic tmp6 = f;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(124)
								::haxe::macro::ExprArrayTools_obj::iter(c->__Field(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"), hx::paccDynamic ),tmp6);
								HX_STACK_LINE(125)
								{
									HX_STACK_LINE(125)
									Dynamic e2 = c->__Field(HX_HCSTRING("guard","\xe5","\xb4","\xe5","\x9b"), hx::paccDynamic );		HX_STACK_VAR(e2,"e2");
									HX_STACK_LINE(125)
									bool tmp7 = (e2 != null());		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(125)
									if ((tmp7)){
										HX_STACK_LINE(125)
										Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(125)
										f(tmp8).Cast< Void >();
									}
								}
								HX_STACK_LINE(126)
								{
									HX_STACK_LINE(126)
									Dynamic e2 = c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(e2,"e2");
									HX_STACK_LINE(126)
									bool tmp7 = (e2 != null());		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(126)
									if ((tmp7)){
										HX_STACK_LINE(126)
										Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(126)
										f(tmp8).Cast< Void >();
									}
								}
							}
						}
						HX_STACK_LINE(128)
						bool tmp3 = (edef != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(128)
						bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(128)
						if ((tmp3)){
							HX_STACK_LINE(128)
							tmp4 = (edef->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic ) != null());
						}
						else{
							HX_STACK_LINE(128)
							tmp4 = false;
						}
						HX_STACK_LINE(128)
						if ((tmp4)){
							HX_STACK_LINE(129)
							Dynamic tmp5 = edef;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(129)
							f(tmp5).Cast< Void >();
						}
					}
				}
				;break;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprTools_obj,iter,(void))

Dynamic ExprTools_obj::map( Dynamic e,Dynamic f){
	HX_STACK_FRAME("haxe.macro.ExprTools","map",0xcb20628a,"haxe.macro.ExprTools.map","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",156,0x6b786beb)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(157)
	Dynamic tmp = e->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	::haxe::macro::ExprDef tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	{
		HX_STACK_LINE(157)
		::haxe::macro::ExprDef _g = e->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(158)
				tmp1 = e->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(157)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(159)
				{
					HX_STACK_LINE(159)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(159)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(159)
					Dynamic tmp6 = e2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(159)
					Dynamic tmp7 = f(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(159)
					tmp1 = ::haxe::macro::ExprDef_obj::EArray(tmp5,tmp7);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(157)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(157)
				::haxe::macro::Binop tmp4 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(157)
				::haxe::macro::Binop op = tmp4;		HX_STACK_VAR(op,"op");
				HX_STACK_LINE(160)
				{
					HX_STACK_LINE(160)
					::haxe::macro::Binop tmp5 = op;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(160)
					Dynamic tmp6 = e1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(160)
					Dynamic tmp7 = f(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(160)
					Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(160)
					Dynamic tmp9 = f(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(160)
					tmp1 = ::haxe::macro::ExprDef_obj::EBinop(tmp5,tmp7,tmp9);
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(157)
				::String tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				::String field = tmp2;		HX_STACK_VAR(field,"field");
				HX_STACK_LINE(157)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(161)
				{
					HX_STACK_LINE(161)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(161)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(161)
					::String tmp6 = field;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(161)
					tmp1 = ::haxe::macro::ExprDef_obj::EField(tmp5,tmp6);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(162)
				{
					HX_STACK_LINE(162)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(162)
					Dynamic tmp4 = f(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(162)
					tmp1 = ::haxe::macro::ExprDef_obj::EParenthesis(tmp4);
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(157)
				cpp::ArrayBase fields = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(fields,"fields");
				HX_STACK_LINE(163)
				{
					HX_STACK_LINE(164)
					cpp::ArrayBase ret = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(165)
						while((true)){
							HX_STACK_LINE(165)
							bool tmp2 = (_g1 < fields->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(165)
							bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(165)
							if ((tmp3)){
								HX_STACK_LINE(165)
								break;
							}
							HX_STACK_LINE(165)
							Dynamic tmp4 = fields->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(165)
							Dynamic field = tmp4;		HX_STACK_VAR(field,"field");
							HX_STACK_LINE(165)
							++(_g1);
							HX_STACK_LINE(166)
							::String tmp5 = field->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(166)
							Dynamic tmp6 = field->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(166)
							Dynamic tmp7 = f(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							struct _Function_6_1{
								inline static Dynamic Block( ::String &tmp5,Dynamic &tmp7){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",166,0x6b786beb)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("field","\xba","\x94","\x93","\x00") , tmp5,false);
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp7,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(166)
							Dynamic tmp8 = _Function_6_1::Block(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(166)
							ret->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
						}
					}
					HX_STACK_LINE(167)
					tmp1 = ::haxe::macro::ExprDef_obj::EObjectDecl(ret);
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(157)
				cpp::ArrayBase el = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
				HX_STACK_LINE(168)
				{
					HX_STACK_LINE(168)
					Dynamic tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(168)
					tmp1 = ::haxe::macro::ExprDef_obj::EArrayDecl(::haxe::macro::ExprArrayTools_obj::map(el,tmp2));
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(157)
				cpp::ArrayBase params = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(params,"params");
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(169)
				{
					HX_STACK_LINE(169)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(169)
					Dynamic tmp4 = f(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(169)
					Dynamic tmp5 = f;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(169)
					tmp1 = ::haxe::macro::ExprDef_obj::ECall(tmp4,::haxe::macro::ExprArrayTools_obj::map(params,tmp5));
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(157)
				cpp::ArrayBase params = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(params,"params");
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic tp = tmp2;		HX_STACK_VAR(tp,"tp");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					Dynamic tmp3 = tp;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(170)
					Dynamic tmp4 = f;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(170)
					tmp1 = ::haxe::macro::ExprDef_obj::ENew(tmp3,::haxe::macro::ExprArrayTools_obj::map(params,tmp4));
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(157)
				bool tmp3 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				bool postFix = tmp3;		HX_STACK_VAR(postFix,"postFix");
				HX_STACK_LINE(157)
				::haxe::macro::Unop tmp4 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(157)
				::haxe::macro::Unop op = tmp4;		HX_STACK_VAR(op,"op");
				HX_STACK_LINE(171)
				{
					HX_STACK_LINE(171)
					::haxe::macro::Unop tmp5 = op;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(171)
					bool tmp6 = postFix;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(171)
					Dynamic tmp7 = e1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(171)
					Dynamic tmp8 = f(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(171)
					tmp1 = ::haxe::macro::ExprDef_obj::EUnop(tmp5,tmp6,tmp8);
				}
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(157)
				cpp::ArrayBase vars = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(vars,"vars");
				HX_STACK_LINE(172)
				{
					HX_STACK_LINE(173)
					cpp::ArrayBase ret = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(174)
					{
						HX_STACK_LINE(174)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(174)
						while((true)){
							HX_STACK_LINE(174)
							bool tmp2 = (_g1 < vars->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(174)
							bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(174)
							if ((tmp3)){
								HX_STACK_LINE(174)
								break;
							}
							HX_STACK_LINE(174)
							Dynamic tmp4 = vars->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(174)
							Dynamic v = tmp4;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(174)
							++(_g1);
							HX_STACK_LINE(175)
							::String tmp5 = v->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(175)
							::haxe::macro::ComplexType tmp6 = v->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(175)
							Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								Dynamic e1 = v->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(e1,"e1");
								HX_STACK_LINE(175)
								bool tmp8 = (e1 == null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(175)
								if ((tmp8)){
									HX_STACK_LINE(175)
									tmp7 = null();
								}
								else{
									HX_STACK_LINE(175)
									Dynamic tmp9 = e1;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(175)
									tmp7 = f(tmp9);
								}
							}
							struct _Function_6_1{
								inline static Dynamic Block( ::String &tmp5,::haxe::macro::ComplexType &tmp6,Dynamic &tmp7){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",175,0x6b786beb)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp5,false);
										__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , tmp6,false);
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp7,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(175)
							Dynamic tmp8 = _Function_6_1::Block(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(175)
							ret->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
						}
					}
					HX_STACK_LINE(176)
					tmp1 = ::haxe::macro::ExprDef_obj::EVars(ret);
				}
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(157)
				cpp::ArrayBase el = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
				HX_STACK_LINE(177)
				{
					HX_STACK_LINE(177)
					Dynamic tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(177)
					tmp1 = ::haxe::macro::ExprDef_obj::EBlock(::haxe::macro::ExprArrayTools_obj::map(el,tmp2));
				}
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic expr = tmp2;		HX_STACK_VAR(expr,"expr");
				HX_STACK_LINE(157)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				Dynamic it = tmp3;		HX_STACK_VAR(it,"it");
				HX_STACK_LINE(178)
				{
					HX_STACK_LINE(178)
					Dynamic tmp4 = it;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(178)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(178)
					Dynamic tmp6 = expr;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(178)
					Dynamic tmp7 = f(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(178)
					tmp1 = ::haxe::macro::ExprDef_obj::EFor(tmp5,tmp7);
				}
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(157)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(179)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(179)
					Dynamic tmp6 = e2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(179)
					Dynamic tmp7 = f(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(179)
					tmp1 = ::haxe::macro::ExprDef_obj::EIn(tmp5,tmp7);
				}
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic eelse = tmp2;		HX_STACK_VAR(eelse,"eelse");
				HX_STACK_LINE(157)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				Dynamic eif = tmp3;		HX_STACK_VAR(eif,"eif");
				HX_STACK_LINE(157)
				Dynamic tmp4 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(157)
				Dynamic econd = tmp4;		HX_STACK_VAR(econd,"econd");
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					Dynamic tmp5 = econd;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(180)
					Dynamic tmp6 = f(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(180)
					Dynamic tmp7 = eif;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(180)
					Dynamic tmp8 = f(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(180)
					bool tmp9 = (eelse == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(180)
					Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(180)
					if ((tmp9)){
						HX_STACK_LINE(180)
						tmp10 = null();
					}
					else{
						HX_STACK_LINE(180)
						Dynamic tmp11 = eelse;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(180)
						tmp10 = f(tmp11);
					}
					HX_STACK_LINE(180)
					tmp1 = ::haxe::macro::ExprDef_obj::EIf(tmp6,tmp8,tmp10);
				}
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(157)
				bool tmp2 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				bool normalWhile = tmp2;		HX_STACK_VAR(normalWhile,"normalWhile");
				HX_STACK_LINE(157)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(157)
				Dynamic tmp4 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(157)
				Dynamic econd = tmp4;		HX_STACK_VAR(econd,"econd");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					Dynamic tmp5 = econd;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(181)
					Dynamic tmp6 = f(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(181)
					Dynamic tmp7 = e1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(181)
					Dynamic tmp8 = f(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(181)
					bool tmp9 = normalWhile;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(181)
					tmp1 = ::haxe::macro::ExprDef_obj::EWhile(tmp6,tmp8,tmp9);
				}
			}
			;break;
			case (int)19: {
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(182)
				{
					HX_STACK_LINE(182)
					bool tmp3 = (e1 == null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(182)
					Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(182)
					if ((tmp3)){
						HX_STACK_LINE(182)
						tmp4 = null();
					}
					else{
						HX_STACK_LINE(182)
						Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(182)
						tmp4 = f(tmp5);
					}
					HX_STACK_LINE(182)
					tmp1 = ::haxe::macro::ExprDef_obj::EReturn(tmp4);
				}
			}
			;break;
			case (int)22: {
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(183)
				{
					HX_STACK_LINE(183)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(183)
					Dynamic tmp4 = f(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(183)
					tmp1 = ::haxe::macro::ExprDef_obj::EUntyped(tmp4);
				}
			}
			;break;
			case (int)23: {
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(184)
				{
					HX_STACK_LINE(184)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(184)
					Dynamic tmp4 = f(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(184)
					tmp1 = ::haxe::macro::ExprDef_obj::EThrow(tmp4);
				}
			}
			;break;
			case (int)24: {
				HX_STACK_LINE(157)
				::haxe::macro::ComplexType tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				::haxe::macro::ComplexType t = tmp2;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(157)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(185)
				{
					HX_STACK_LINE(185)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(185)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(185)
					::haxe::macro::ComplexType tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(185)
					tmp1 = ::haxe::macro::ExprDef_obj::ECast(tmp5,tmp6);
				}
			}
			;break;
			case (int)25: {
				HX_STACK_LINE(157)
				bool tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				bool isCall = tmp2;		HX_STACK_VAR(isCall,"isCall");
				HX_STACK_LINE(157)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(186)
				{
					HX_STACK_LINE(186)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(186)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(186)
					bool tmp6 = isCall;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(186)
					tmp1 = ::haxe::macro::ExprDef_obj::EDisplay(tmp5,tmp6);
				}
			}
			;break;
			case (int)27: {
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic eelse = tmp2;		HX_STACK_VAR(eelse,"eelse");
				HX_STACK_LINE(157)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				Dynamic eif = tmp3;		HX_STACK_VAR(eif,"eif");
				HX_STACK_LINE(157)
				Dynamic tmp4 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(157)
				Dynamic econd = tmp4;		HX_STACK_VAR(econd,"econd");
				HX_STACK_LINE(187)
				{
					HX_STACK_LINE(187)
					Dynamic tmp5 = econd;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(187)
					Dynamic tmp6 = f(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(187)
					Dynamic tmp7 = eif;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(187)
					Dynamic tmp8 = f(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(187)
					Dynamic tmp9 = eelse;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(187)
					Dynamic tmp10 = f(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(187)
					tmp1 = ::haxe::macro::ExprDef_obj::ETernary(tmp6,tmp8,tmp10);
				}
			}
			;break;
			case (int)28: {
				HX_STACK_LINE(157)
				::haxe::macro::ComplexType tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				::haxe::macro::ComplexType t = tmp2;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(157)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(188)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(188)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(188)
					::haxe::macro::ComplexType tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(188)
					tmp1 = ::haxe::macro::ExprDef_obj::ECheckType(tmp5,tmp6);
				}
			}
			;break;
			case (int)26: case (int)21: case (int)20: {
				HX_STACK_LINE(192)
				tmp1 = e->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(157)
				cpp::ArrayBase catches = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(catches,"catches");
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(193)
				{
					HX_STACK_LINE(194)
					cpp::ArrayBase ret = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(195)
					{
						HX_STACK_LINE(195)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(195)
						while((true)){
							HX_STACK_LINE(195)
							bool tmp3 = (_g1 < catches->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(195)
							bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(195)
							if ((tmp4)){
								HX_STACK_LINE(195)
								break;
							}
							HX_STACK_LINE(195)
							Dynamic tmp5 = catches->__GetItem(_g1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(195)
							Dynamic c = tmp5;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(195)
							++(_g1);
							HX_STACK_LINE(196)
							::String tmp6 = c->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(196)
							::haxe::macro::ComplexType tmp7 = c->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(196)
							Dynamic tmp8 = c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(196)
							Dynamic tmp9 = f(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							struct _Function_6_1{
								inline static Dynamic Block( ::String &tmp6,Dynamic &tmp9,::haxe::macro::ComplexType &tmp7){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",196,0x6b786beb)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp6,false);
										__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , tmp7,false);
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp9,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(196)
							Dynamic tmp10 = _Function_6_1::Block(tmp6,tmp9,tmp7);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(196)
							ret->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
						}
					}
					HX_STACK_LINE(197)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(197)
					Dynamic tmp4 = f(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(197)
					tmp1 = ::haxe::macro::ExprDef_obj::ETry(tmp4,ret);
				}
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic edef = tmp2;		HX_STACK_VAR(edef,"edef");
				HX_STACK_LINE(157)
				cpp::ArrayBase cases = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(cases,"cases");
				HX_STACK_LINE(157)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(198)
				{
					HX_STACK_LINE(199)
					cpp::ArrayBase ret = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(200)
						while((true)){
							HX_STACK_LINE(200)
							bool tmp4 = (_g1 < cases->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(200)
							bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(200)
							if ((tmp5)){
								HX_STACK_LINE(200)
								break;
							}
							HX_STACK_LINE(200)
							Dynamic tmp6 = cases->__GetItem(_g1);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(200)
							Dynamic c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(200)
							++(_g1);
							HX_STACK_LINE(201)
							Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(201)
							{
								HX_STACK_LINE(201)
								Dynamic e2 = c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(e2,"e2");
								HX_STACK_LINE(201)
								bool tmp8 = (e2 == null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(201)
								if ((tmp8)){
									HX_STACK_LINE(201)
									tmp7 = null();
								}
								else{
									HX_STACK_LINE(201)
									Dynamic tmp9 = e2;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(201)
									tmp7 = f(tmp9);
								}
							}
							HX_STACK_LINE(201)
							Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(201)
							{
								HX_STACK_LINE(201)
								Dynamic e2 = c->__Field(HX_HCSTRING("guard","\xe5","\xb4","\xe5","\x9b"), hx::paccDynamic );		HX_STACK_VAR(e2,"e2");
								HX_STACK_LINE(201)
								bool tmp9 = (e2 == null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(201)
								if ((tmp9)){
									HX_STACK_LINE(201)
									tmp8 = null();
								}
								else{
									HX_STACK_LINE(201)
									Dynamic tmp10 = e2;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(201)
									tmp8 = f(tmp10);
								}
							}
							HX_STACK_LINE(201)
							Dynamic tmp9 = f;		HX_STACK_VAR(tmp9,"tmp9");
							struct _Function_6_1{
								inline static Dynamic Block( Dynamic &c,Dynamic &tmp9,Dynamic &tmp7,Dynamic &tmp8){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",201,0x6b786beb)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp7,false);
										__result->Add(HX_HCSTRING("guard","\xe5","\xb4","\xe5","\x9b") , tmp8,false);
										__result->Add(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f") , ::haxe::macro::ExprArrayTools_obj::map(c->__Field(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"), hx::paccDynamic ),tmp9),false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(201)
							Dynamic tmp10 = _Function_6_1::Block(c,tmp9,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(201)
							ret->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
						}
					}
					HX_STACK_LINE(202)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(202)
					Dynamic tmp5 = f(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(202)
					bool tmp6 = (edef == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(202)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(202)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(202)
					if ((tmp7)){
						HX_STACK_LINE(202)
						tmp8 = (edef->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic ) == null());
					}
					else{
						HX_STACK_LINE(202)
						tmp8 = true;
					}
					HX_STACK_LINE(202)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(202)
					if ((tmp8)){
						HX_STACK_LINE(202)
						tmp9 = edef;
					}
					else{
						HX_STACK_LINE(202)
						Dynamic tmp10 = edef;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(202)
						tmp9 = f(tmp10);
					}
					HX_STACK_LINE(202)
					tmp1 = ::haxe::macro::ExprDef_obj::ESwitch(tmp5,ret,tmp9);
				}
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic func = tmp2;		HX_STACK_VAR(func,"func");
				HX_STACK_LINE(157)
				::String tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				::String name = tmp3;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(203)
				{
					HX_STACK_LINE(204)
					cpp::ArrayBase ret = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(205)
					{
						HX_STACK_LINE(205)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(205)
						cpp::ArrayBase _g2 = func->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(205)
						while((true)){
							HX_STACK_LINE(205)
							bool tmp4 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(205)
							bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(205)
							if ((tmp5)){
								HX_STACK_LINE(205)
								break;
							}
							HX_STACK_LINE(205)
							Dynamic tmp6 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(205)
							Dynamic arg = tmp6;		HX_STACK_VAR(arg,"arg");
							HX_STACK_LINE(205)
							++(_g1);
							HX_STACK_LINE(206)
							::String tmp7 = arg->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(206)
							Dynamic tmp8 = arg->__Field(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(206)
							::haxe::macro::ComplexType tmp9 = arg->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(206)
							Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(206)
							{
								HX_STACK_LINE(206)
								Dynamic e1 = arg->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(e1,"e1");
								HX_STACK_LINE(206)
								bool tmp11 = (e1 == null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(206)
								if ((tmp11)){
									HX_STACK_LINE(206)
									tmp10 = null();
								}
								else{
									HX_STACK_LINE(206)
									Dynamic tmp12 = e1;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(206)
									tmp10 = f(tmp12);
								}
							}
							struct _Function_6_1{
								inline static Dynamic Block( ::haxe::macro::ComplexType &tmp9,Dynamic &tmp10,::String &tmp7,Dynamic &tmp8){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",206,0x6b786beb)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp7,false);
										__result->Add(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00") , tmp8,false);
										__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , tmp9,false);
										__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp10,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(206)
							Dynamic tmp11 = _Function_6_1::Block(tmp9,tmp10,tmp7,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(206)
							ret->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
						}
					}
					HX_STACK_LINE(207)
					::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(207)
					::haxe::macro::ComplexType tmp5 = func->__Field(HX_HCSTRING("ret","\x61","\xd9","\x56","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(207)
					Dynamic tmp6 = func->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(207)
					Dynamic tmp7 = f(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::macro::ComplexType &tmp5,Dynamic &func,cpp::ArrayBase &ret,Dynamic &tmp7){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",207,0x6b786beb)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40") , ret,false);
								__result->Add(HX_HCSTRING("ret","\x61","\xd9","\x56","\x00") , tmp5,false);
								__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , func->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic ),false);
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp7,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(207)
					Dynamic tmp8 = _Function_4_1::Block(tmp5,func,ret,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(207)
					tmp1 = ::haxe::macro::ExprDef_obj::EFunction(tmp4,tmp8);
				}
			}
			;break;
			case (int)29: {
				HX_STACK_LINE(157)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(157)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				Dynamic m = tmp3;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(208)
				{
					HX_STACK_LINE(208)
					Dynamic tmp4 = m;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(208)
					Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(208)
					Dynamic tmp6 = f(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(208)
					tmp1 = ::haxe::macro::ExprDef_obj::EMeta(tmp4,tmp6);
				}
			}
			;break;
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &tmp,::haxe::macro::ExprDef &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",157,0x6b786beb)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp,false);
				__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(157)
	Dynamic tmp2 = _Function_1_1::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprTools_obj,map,return )

Dynamic ExprTools_obj::getValue( Dynamic e){
	HX_STACK_FRAME("haxe.macro.ExprTools","getValue",0xb4f6b84d,"haxe.macro.ExprTools.getValue","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",230,0x6b786beb)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(231)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		::haxe::macro::ExprDef _g = e->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(231)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(231)
				::haxe::macro::Constant tmp1 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(231)
				switch( (int)(tmp1->__Index())){
					case (int)0: {
						HX_STACK_LINE(231)
						::String tmp2 = (::haxe::macro::Constant((::haxe::macro::ExprDef(_g))->__Param(0)))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(231)
						::String v = tmp2;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(232)
						{
							HX_STACK_LINE(232)
							::String tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(232)
							tmp = ::Std_obj::parseInt(tmp3);
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(231)
						::String tmp2 = (::haxe::macro::Constant((::haxe::macro::ExprDef(_g))->__Param(0)))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(231)
						::String v = tmp2;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							::String tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(233)
							tmp = ::Std_obj::parseFloat(tmp3);
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(231)
						::String tmp2 = (::haxe::macro::Constant((::haxe::macro::ExprDef(_g))->__Param(0)))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(231)
						::String s = tmp2;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(234)
						tmp = s;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(231)
						::String tmp2 = (::haxe::macro::Constant((::haxe::macro::ExprDef(_g))->__Param(0)))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(231)
						::String _switch_1 = (tmp2);
						if (  ( _switch_1==HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"))){
							HX_STACK_LINE(235)
							tmp = true;
						}
						else if (  ( _switch_1==HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb"))){
							HX_STACK_LINE(236)
							tmp = false;
						}
						else if (  ( _switch_1==HX_HCSTRING("null","\x87","\x9e","\x0e","\x49"))){
							HX_STACK_LINE(237)
							tmp = null();
						}
						else  {
							HX_STACK_LINE(286)
							Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(286)
							::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(286)
							::String tmp5 = (HX_HCSTRING("Unsupported expression: ","\xa9","\xac","\xc8","\x22") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(286)
							HX_STACK_DO_THROW(tmp5);
						}
;
;
					}
					;break;
					default: {
						HX_STACK_LINE(286)
						Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(286)
						::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(286)
						::String tmp4 = (HX_HCSTRING("Unsupported expression: ","\xa9","\xac","\xc8","\x22") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(286)
						HX_STACK_DO_THROW(tmp4);
					}
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(231)
				Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(231)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(238)
					tmp = ::haxe::macro::ExprTools_obj::getValue(tmp2);
				}
			}
			;break;
			case (int)22: {
				HX_STACK_LINE(231)
				Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(231)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(238)
					tmp = ::haxe::macro::ExprTools_obj::getValue(tmp2);
				}
			}
			;break;
			case (int)29: {
				HX_STACK_LINE(231)
				Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(231)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(238)
					tmp = ::haxe::macro::ExprTools_obj::getValue(tmp2);
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(231)
				cpp::ArrayBase fields = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(fields,"fields");
				HX_STACK_LINE(239)
				{
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",240,0x6b786beb)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(240)
					Dynamic tmp1 = _Function_4_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(240)
					Dynamic obj = tmp1;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(241)
					{
						HX_STACK_LINE(241)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(241)
						while((true)){
							HX_STACK_LINE(241)
							bool tmp2 = (_g1 < fields->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(241)
							bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(241)
							if ((tmp3)){
								HX_STACK_LINE(241)
								break;
							}
							HX_STACK_LINE(241)
							Dynamic tmp4 = fields->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(241)
							Dynamic field = tmp4;		HX_STACK_VAR(field,"field");
							HX_STACK_LINE(241)
							++(_g1);
							HX_STACK_LINE(242)
							Dynamic tmp5 = obj;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(242)
							::String tmp6 = field->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(242)
							Dynamic tmp7 = field->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(242)
							Dynamic tmp8 = ::haxe::macro::ExprTools_obj::getValue(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(242)
							::Reflect_obj::setField(tmp5,tmp6,tmp8);
						}
					}
					HX_STACK_LINE(244)
					tmp = obj;
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(231)
				cpp::ArrayBase el = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
				HX_STACK_LINE(245)
				{
					HX_STACK_LINE(245)
					Dynamic tmp1 = ::haxe::macro::ExprTools_obj::getValue_dyn();		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(245)
					tmp = el->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp1);
				}
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(231)
				Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(231)
				Dynamic eelse = tmp1;		HX_STACK_VAR(eelse,"eelse");
				HX_STACK_LINE(231)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(231)
				Dynamic eif = tmp2;		HX_STACK_VAR(eif,"eif");
				HX_STACK_LINE(231)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(231)
				Dynamic econd = tmp3;		HX_STACK_VAR(econd,"econd");
				HX_STACK_LINE(246)
				{
					HX_STACK_LINE(247)
					bool tmp4 = (eelse == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(247)
					if ((tmp4)){
						HX_STACK_LINE(248)
						HX_STACK_DO_THROW(HX_HCSTRING("If statements only have a value if the else clause is defined","\x44","\x75","\xe0","\x52"));
					}
					else{
						HX_STACK_LINE(250)
						Dynamic tmp5 = econd;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(250)
						Dynamic tmp6 = ::haxe::macro::ExprTools_obj::getValue(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(250)
						Dynamic econd1 = tmp6;		HX_STACK_VAR(econd1,"econd1");
						HX_STACK_LINE(251)
						Dynamic tmp7 = econd1;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(251)
						if ((tmp7)){
							HX_STACK_LINE(251)
							Dynamic tmp8 = eif;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(251)
							tmp = ::haxe::macro::ExprTools_obj::getValue(tmp8);
						}
						else{
							HX_STACK_LINE(251)
							Dynamic tmp8 = eelse;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(251)
							tmp = ::haxe::macro::ExprTools_obj::getValue(tmp8);
						}
					}
				}
			}
			;break;
			case (int)27: {
				HX_STACK_LINE(231)
				Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(231)
				Dynamic eelse = tmp1;		HX_STACK_VAR(eelse,"eelse");
				HX_STACK_LINE(231)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(231)
				Dynamic eif = tmp2;		HX_STACK_VAR(eif,"eif");
				HX_STACK_LINE(231)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(231)
				Dynamic econd = tmp3;		HX_STACK_VAR(econd,"econd");
				HX_STACK_LINE(246)
				{
					HX_STACK_LINE(247)
					bool tmp4 = (eelse == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(247)
					if ((tmp4)){
						HX_STACK_LINE(248)
						HX_STACK_DO_THROW(HX_HCSTRING("If statements only have a value if the else clause is defined","\x44","\x75","\xe0","\x52"));
					}
					else{
						HX_STACK_LINE(250)
						Dynamic tmp5 = econd;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(250)
						Dynamic tmp6 = ::haxe::macro::ExprTools_obj::getValue(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(250)
						Dynamic econd1 = tmp6;		HX_STACK_VAR(econd1,"econd1");
						HX_STACK_LINE(251)
						Dynamic tmp7 = econd1;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(251)
						if ((tmp7)){
							HX_STACK_LINE(251)
							Dynamic tmp8 = eif;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(251)
							tmp = ::haxe::macro::ExprTools_obj::getValue(tmp8);
						}
						else{
							HX_STACK_LINE(251)
							Dynamic tmp8 = eelse;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(251)
							tmp = ::haxe::macro::ExprTools_obj::getValue(tmp8);
						}
					}
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(231)
				bool tmp1 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(231)
				bool _switch_2 = (tmp1);
				if (  ( _switch_2==false)){
					HX_STACK_LINE(231)
					Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(231)
					Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(231)
					::haxe::macro::Unop tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(231)
					::haxe::macro::Unop op = tmp3;		HX_STACK_VAR(op,"op");
					HX_STACK_LINE(253)
					{
						HX_STACK_LINE(254)
						Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(254)
						Dynamic tmp5 = ::haxe::macro::ExprTools_obj::getValue(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(254)
						Dynamic e11 = tmp5;		HX_STACK_VAR(e11,"e11");
						HX_STACK_LINE(255)
						switch( (int)(op->__Index())){
							case (int)2: {
								HX_STACK_LINE(256)
								Dynamic tmp6 = e11;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(256)
								tmp = !(tmp6);
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(257)
								Dynamic tmp6 = e11;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(257)
								tmp = -(tmp6);
							}
							;break;
							case (int)4: {
								HX_STACK_LINE(258)
								Dynamic tmp6 = e11;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(258)
								tmp = ~(int)(tmp6);
							}
							;break;
							default: {
								HX_STACK_LINE(259)
								Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(259)
								::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(259)
								::String tmp8 = (HX_HCSTRING("Unsupported expression: ","\xa9","\xac","\xc8","\x22") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(259)
								HX_STACK_DO_THROW(tmp8);
							}
						}
					}
				}
				else  {
					HX_STACK_LINE(286)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(286)
					::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(286)
					::String tmp4 = (HX_HCSTRING("Unsupported expression: ","\xa9","\xac","\xc8","\x22") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(286)
					HX_STACK_DO_THROW(tmp4);
				}
;
;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(231)
				Dynamic tmp1 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(231)
				Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(231)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(231)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(231)
				::haxe::macro::Binop tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(231)
				::haxe::macro::Binop op = tmp3;		HX_STACK_VAR(op,"op");
				HX_STACK_LINE(261)
				{
					HX_STACK_LINE(262)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(262)
					Dynamic tmp5 = ::haxe::macro::ExprTools_obj::getValue(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(262)
					Dynamic e11 = tmp5;		HX_STACK_VAR(e11,"e11");
					HX_STACK_LINE(263)
					Dynamic tmp6 = e2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(263)
					Dynamic tmp7 = ::haxe::macro::ExprTools_obj::getValue(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(263)
					Dynamic e21 = tmp7;		HX_STACK_VAR(e21,"e21");
					HX_STACK_LINE(264)
					switch( (int)(op->__Index())){
						case (int)0: {
							HX_STACK_LINE(265)
							tmp = (e11 + e21);
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(266)
							tmp = (e11 - e21);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(267)
							tmp = (e11 * e21);
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(268)
							tmp = (Float(e11) / Float(e21));
						}
						;break;
						case (int)19: {
							HX_STACK_LINE(269)
							tmp = hx::Mod(e11,e21);
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(270)
							tmp = (e11 == e21);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(271)
							tmp = (e11 != e21);
						}
						;break;
						case (int)9: {
							HX_STACK_LINE(272)
							tmp = (e11 < e21);
						}
						;break;
						case (int)10: {
							HX_STACK_LINE(273)
							tmp = (e11 <= e21);
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(274)
							tmp = (e11 > e21);
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(275)
							tmp = (e11 >= e21);
						}
						;break;
						case (int)12: {
							HX_STACK_LINE(276)
							tmp = (int(e11) | int(e21));
						}
						;break;
						case (int)11: {
							HX_STACK_LINE(277)
							tmp = (int(e11) & int(e21));
						}
						;break;
						case (int)13: {
							HX_STACK_LINE(278)
							tmp = (int(e11) ^ int(e21));
						}
						;break;
						case (int)14: {
							HX_STACK_LINE(279)
							Dynamic tmp8 = e11;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(279)
							if ((tmp8)){
								HX_STACK_LINE(279)
								tmp = e21;
							}
							else{
								HX_STACK_LINE(279)
								tmp = false;
							}
						}
						;break;
						case (int)15: {
							HX_STACK_LINE(280)
							Dynamic tmp8 = e11;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(280)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(280)
							if ((tmp9)){
								HX_STACK_LINE(280)
								tmp = e21;
							}
							else{
								HX_STACK_LINE(280)
								tmp = true;
							}
						}
						;break;
						case (int)16: {
							HX_STACK_LINE(281)
							tmp = (int(e11) << int(e21));
						}
						;break;
						case (int)17: {
							HX_STACK_LINE(282)
							tmp = (int(e11) >> int(e21));
						}
						;break;
						case (int)18: {
							HX_STACK_LINE(283)
							tmp = hx::UShr(e11,e21);
						}
						;break;
						default: {
							HX_STACK_LINE(284)
							Dynamic tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(284)
							::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(284)
							::String tmp10 = (HX_HCSTRING("Unsupported expression: ","\xa9","\xac","\xc8","\x22") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(284)
							HX_STACK_DO_THROW(tmp10);
						}
					}
				}
			}
			;break;
			default: {
				HX_STACK_LINE(286)
				Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(286)
				::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(286)
				::String tmp3 = (HX_HCSTRING("Unsupported expression: ","\xa9","\xac","\xc8","\x22") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(286)
				HX_STACK_DO_THROW(tmp3);
			}
		}
	}
	HX_STACK_LINE(231)
	return tmp;
	HX_STACK_LINE(231)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprTools_obj,getValue,return )

Dynamic ExprTools_obj::opt( Dynamic e,Dynamic f){
	HX_STACK_FRAME("haxe.macro.ExprTools","opt",0xcb21f421,"haxe.macro.ExprTools.opt","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",291,0x6b786beb)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(291)
	bool tmp = (e == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(291)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(291)
	if ((tmp)){
		HX_STACK_LINE(291)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(291)
		Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(291)
		tmp1 = f(tmp2);
	}
	HX_STACK_LINE(291)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprTools_obj,opt,return )

Void ExprTools_obj::opt2( Dynamic e,Dynamic f){
{
		HX_STACK_FRAME("haxe.macro.ExprTools","opt2",0xf293a8f1,"haxe.macro.ExprTools.opt2","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",294,0x6b786beb)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(294)
		bool tmp = (e != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		if ((tmp)){
			HX_STACK_LINE(294)
			Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(294)
			f(tmp1).Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprTools_obj,opt2,(void))


ExprTools_obj::ExprTools_obj()
{
}

bool ExprTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"opt") ) { outValue = opt_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"iter") ) { outValue = iter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"opt2") ) { outValue = opt2_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getValue") ) { outValue = getValue_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExprTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExprTools_obj::__mClass,"__mClass");
};

#endif

hx::Class ExprTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("iter","\x18","\xc5","\xbf","\x45"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("getValue","\xfb","\x8e","\x8f","\x91"),
	HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"),
	HX_HCSTRING("opt2","\x9f","\x10","\xb4","\x49"),
	::String(null()) };

void ExprTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.macro.ExprTools","\x5c","\xa9","\xff","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ExprTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ExprTools_obj >;
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
