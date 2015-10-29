#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_macro_Access
#include <haxe/macro/Access.h>
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
#ifndef INCLUDED_haxe_macro_FieldType
#include <haxe/macro/FieldType.h>
#endif
#ifndef INCLUDED_haxe_macro_Printer
#include <haxe/macro/Printer.h>
#endif
#ifndef INCLUDED_haxe_macro_TypeDefKind
#include <haxe/macro/TypeDefKind.h>
#endif
#ifndef INCLUDED_haxe_macro_TypeParam
#include <haxe/macro/TypeParam.h>
#endif
#ifndef INCLUDED_haxe_macro_Unop
#include <haxe/macro/Unop.h>
#endif
namespace haxe{
namespace macro{

Void Printer_obj::__construct(::String __o_tabString)
{
HX_STACK_FRAME("haxe.macro.Printer","new",0x71002a02,"haxe.macro.Printer.new","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",33,0x0fa09877)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_tabString,"tabString")
::String tabString = __o_tabString.Default(HX_HCSTRING("\t","\x09","\x00","\x00","\x00"));
{
	HX_STACK_LINE(34)
	this->tabs = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(35)
	this->tabString = tabString;
}
;
	return null();
}

//Printer_obj::~Printer_obj() { }

Dynamic Printer_obj::__CreateEmpty() { return  new Printer_obj; }
hx::ObjectPtr< Printer_obj > Printer_obj::__new(::String __o_tabString)
{  hx::ObjectPtr< Printer_obj > _result_ = new Printer_obj();
	_result_->__construct(__o_tabString);
	return _result_;}

Dynamic Printer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Printer_obj > _result_ = new Printer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Printer_obj::printUnop( ::haxe::macro::Unop op){
	HX_STACK_FRAME("haxe.macro.Printer","printUnop",0x4f2cada9,"haxe.macro.Printer.printUnop","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",38,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_LINE(38)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	switch( (int)(op->__Index())){
		case (int)0: {
			HX_STACK_LINE(39)
			tmp = HX_HCSTRING("++","\xa0","\x25","\x00","\x00");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(40)
			tmp = HX_HCSTRING("--","\x60","\x27","\x00","\x00");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(41)
			tmp = HX_HCSTRING("!","\x21","\x00","\x00","\x00");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(42)
			tmp = HX_HCSTRING("-","\x2d","\x00","\x00","\x00");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(43)
			tmp = HX_HCSTRING("~","\x7e","\x00","\x00","\x00");
		}
		;break;
	}
	HX_STACK_LINE(38)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printUnop,return )

::String Printer_obj::printBinop( ::haxe::macro::Binop op){
	HX_STACK_FRAME("haxe.macro.Printer","printBinop",0x03ff6cd9,"haxe.macro.Printer.printBinop","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",46,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_LINE(46)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	switch( (int)(op->__Index())){
		case (int)0: {
			HX_STACK_LINE(47)
			tmp = HX_HCSTRING("+","\x2b","\x00","\x00","\x00");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(48)
			tmp = HX_HCSTRING("*","\x2a","\x00","\x00","\x00");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(49)
			tmp = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(50)
			tmp = HX_HCSTRING("-","\x2d","\x00","\x00","\x00");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(51)
			tmp = HX_HCSTRING("=","\x3d","\x00","\x00","\x00");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(52)
			tmp = HX_HCSTRING("==","\x60","\x35","\x00","\x00");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(53)
			tmp = HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(54)
			tmp = HX_HCSTRING(">","\x3e","\x00","\x00","\x00");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(55)
			tmp = HX_HCSTRING(">=","\x3f","\x36","\x00","\x00");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(56)
			tmp = HX_HCSTRING("<","\x3c","\x00","\x00","\x00");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(57)
			tmp = HX_HCSTRING("<=","\x81","\x34","\x00","\x00");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(58)
			tmp = HX_HCSTRING("&","\x26","\x00","\x00","\x00");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(59)
			tmp = HX_HCSTRING("|","\x7c","\x00","\x00","\x00");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(60)
			tmp = HX_HCSTRING("^","\x5e","\x00","\x00","\x00");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(61)
			tmp = HX_HCSTRING("&&","\x40","\x21","\x00","\x00");
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(62)
			tmp = HX_HCSTRING("||","\x80","\x6c","\x00","\x00");
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(63)
			tmp = HX_HCSTRING("<<","\x80","\x34","\x00","\x00");
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(64)
			tmp = HX_HCSTRING(">>","\x40","\x36","\x00","\x00");
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(65)
			tmp = HX_HCSTRING(">>>","\xfe","\x41","\x2f","\x00");
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(66)
			tmp = HX_HCSTRING("%","\x25","\x00","\x00","\x00");
		}
		;break;
		case (int)21: {
			HX_STACK_LINE(67)
			tmp = HX_HCSTRING("...","\xee","\x0f","\x23","\x00");
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(68)
			tmp = HX_HCSTRING("=>","\x61","\x35","\x00","\x00");
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(46)
			::haxe::macro::Binop tmp1 = (::haxe::macro::Binop(op))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(46)
			::haxe::macro::Binop op1 = tmp1;		HX_STACK_VAR(op1,"op1");
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(70)
				::haxe::macro::Binop tmp2 = op1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(70)
				::String tmp3 = this->printBinop(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(70)
				tmp = (tmp3 + HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));
			}
		}
		;break;
	}
	HX_STACK_LINE(46)
	return tmp;
	HX_STACK_LINE(46)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printBinop,return )

::String Printer_obj::escapeString( ::String s,::String delim){
	HX_STACK_FRAME("haxe.macro.Printer","escapeString",0x7f245950,"haxe.macro.Printer.escapeString","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",74,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(delim,"delim")
	HX_STACK_LINE(75)
	::String tmp = delim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	::String tmp2 = ::StringTools_obj::replace(tmp1,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),HX_HCSTRING("\\n","\x92","\x50","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	::String tmp3 = ::StringTools_obj::replace(tmp2,HX_HCSTRING("\t","\x09","\x00","\x00","\x00"),HX_HCSTRING("\\t","\x98","\x50","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	::String tmp4 = ::StringTools_obj::replace(tmp3,HX_HCSTRING("'","\x27","\x00","\x00","\x00"),HX_HCSTRING("\\'","\x4b","\x50","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(75)
	::String tmp5 = ::StringTools_obj::replace(tmp4,HX_HCSTRING("\"","\x22","\x00","\x00","\x00"),HX_HCSTRING("\\\"","\x46","\x50","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(75)
	::String tmp6 = ::StringTools_obj::replace(tmp5,HX_HCSTRING("\x00""","\x00","\x00","\x00","\x00"),HX_HCSTRING("\\x00","\x9c","\xd9","\x2a","\x3d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(75)
	::String tmp7 = (tmp + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(75)
	::String tmp8 = delim;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(75)
	::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(75)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC2(Printer_obj,escapeString,return )

::String Printer_obj::printFormatString( ::String s){
	HX_STACK_FRAME("haxe.macro.Printer","printFormatString",0xf8cdd457,"haxe.macro.Printer.printFormatString","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",78,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(79)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	::String tmp1 = this->escapeString(tmp,HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printFormatString,return )

::String Printer_obj::printString( ::String s){
	HX_STACK_FRAME("haxe.macro.Printer","printString",0x9f99a080,"haxe.macro.Printer.printString","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",82,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(83)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	::String tmp1 = this->escapeString(tmp,HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printString,return )

::String Printer_obj::printConstant( ::haxe::macro::Constant c){
	HX_STACK_FRAME("haxe.macro.Printer","printConstant",0xbb17c2d3,"haxe.macro.Printer.printConstant","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",86,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(86)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	switch( (int)(c->__Index())){
		case (int)2: {
			HX_STACK_LINE(86)
			::String tmp1 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			::String s = tmp1;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(87)
				tmp = this->printString(tmp2);
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(86)
			::String tmp1 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			::String s = tmp1;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(91)
			tmp = s;
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(86)
			::String tmp1 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			::String s = tmp1;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(91)
			tmp = s;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(86)
			::String tmp1 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			::String s = tmp1;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(91)
			tmp = s;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(86)
			::String tmp1 = (::haxe::macro::Constant(c))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			::String opt = tmp1;		HX_STACK_VAR(opt,"opt");
			HX_STACK_LINE(86)
			::String tmp2 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			::String s = tmp2;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				::String tmp3 = (HX_HCSTRING("~/","\xf1","\x6d","\x00","\x00") + s);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(92)
				::String tmp4 = (tmp3 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(92)
				::String tmp5 = opt;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(92)
				tmp = (tmp4 + tmp5);
			}
		}
		;break;
	}
	HX_STACK_LINE(86)
	return tmp;
	HX_STACK_LINE(86)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printConstant,return )

::String Printer_obj::printTypeParam( ::haxe::macro::TypeParam param){
	HX_STACK_FRAME("haxe.macro.Printer","printTypeParam",0x37751b24,"haxe.macro.Printer.printTypeParam","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",95,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(95)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	switch( (int)(param->__Index())){
		case (int)0: {
			HX_STACK_LINE(95)
			::haxe::macro::ComplexType tmp1 = (::haxe::macro::TypeParam(param))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(95)
			::haxe::macro::ComplexType ct = tmp1;		HX_STACK_VAR(ct,"ct");
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				::haxe::macro::ComplexType tmp2 = ct;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(96)
				tmp = this->printComplexType(tmp2);
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(95)
			Dynamic tmp1 = (::haxe::macro::TypeParam(param))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(95)
			Dynamic e = tmp1;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(97)
				tmp = this->printExpr(tmp2);
			}
		}
		;break;
	}
	HX_STACK_LINE(95)
	return tmp;
	HX_STACK_LINE(95)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printTypeParam,return )

::String Printer_obj::printTypePath( Dynamic tp){
	HX_STACK_FRAME("haxe.macro.Printer","printTypePath",0xcc96eaee,"haxe.macro.Printer.printTypePath","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",100,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tp,"tp")
	HX_STACK_LINE(101)
	int tmp = tp->__Field(HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	if ((tmp1)){
		HX_STACK_LINE(101)
		::String tmp3 = tp->__Field(HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a"), hx::paccDynamic )->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		tmp2 = (tmp3 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(101)
		tmp2 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(102)
	::String tmp3 = tp->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(101)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(103)
	bool tmp5 = (tp->__Field(HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(103)
	::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(103)
	if ((tmp5)){
		HX_STACK_LINE(103)
		tmp6 = (HX_HCSTRING(".","\x2e","\x00","\x00","\x00") + tp->__Field(HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"), hx::paccDynamic ));
	}
	else{
		HX_STACK_LINE(103)
		tmp6 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(101)
	::String tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(104)
	bool tmp8 = (tp->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(104)
	::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(104)
	if ((tmp8)){
		HX_STACK_LINE(104)
		tmp9 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(104)
		int tmp10 = tp->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(104)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(104)
		if ((tmp11)){
			HX_STACK_LINE(104)
			Dynamic tmp12 = this->printTypeParam_dyn();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(104)
			::String tmp13 = tp->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp12).StaticCast< Array< ::String > >()->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(104)
			::String tmp14 = (HX_HCSTRING("<","\x3c","\x00","\x00","\x00") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(104)
			tmp9 = (tmp14 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(104)
			tmp9 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
	}
	HX_STACK_LINE(101)
	::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(100)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printTypePath,return )

::String Printer_obj::printComplexType( ::haxe::macro::ComplexType ct){
	HX_STACK_FRAME("haxe.macro.Printer","printComplexType",0x4f95aafb,"haxe.macro.Printer.printComplexType","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",107,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ct,"ct")
	HX_STACK_LINE(107)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	switch( (int)(ct->__Index())){
		case (int)0: {
			HX_STACK_LINE(107)
			Dynamic tmp1 = (::haxe::macro::ComplexType(ct))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(107)
			Dynamic tp = tmp1;		HX_STACK_VAR(tp,"tp");
			HX_STACK_LINE(108)
			{
				HX_STACK_LINE(108)
				Dynamic tmp2 = tp;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(108)
				tmp = this->printTypePath(tmp2);
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(107)
			::haxe::macro::ComplexType tmp1 = (::haxe::macro::ComplexType(ct))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(107)
			::haxe::macro::ComplexType ret = tmp1;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(107)
			Array< ::Dynamic > args = (::haxe::macro::ComplexType(ct))->__Param(0);		HX_STACK_VAR(args,"args");
			HX_STACK_LINE(109)
			{
				HX_STACK_LINE(109)
				bool tmp2 = (args->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(109)
				::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(109)
				if ((tmp2)){
					HX_STACK_LINE(109)
					Dynamic tmp4 = this->printComplexType_dyn();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(109)
					tmp3 = args->map(tmp4).StaticCast< Array< ::String > >()->join(HX_HCSTRING(" -> ","\x6f","\x2f","\x49","\x15"));
				}
				else{
					HX_STACK_LINE(109)
					tmp3 = HX_HCSTRING("Void","\x74","\xef","\x2c","\x39");
				}
				HX_STACK_LINE(109)
				::String tmp4 = (tmp3 + HX_HCSTRING(" -> ","\x6f","\x2f","\x49","\x15"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(109)
				::haxe::macro::ComplexType tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(109)
				::String tmp6 = this->printComplexType(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(109)
				tmp = (tmp4 + tmp6);
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(107)
			cpp::ArrayBase fields = (::haxe::macro::ComplexType(ct))->__Param(0);		HX_STACK_VAR(fields,"fields");
			HX_STACK_LINE(110)
			{
				struct _Function_3_1{
					inline static Array< ::String > Block( hx::ObjectPtr< ::haxe::macro::Printer_obj > __this,cpp::ArrayBase &fields){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",110,0x0fa09877)
						{
							HX_STACK_LINE(110)
							Array< ::String > _g = Array_obj< ::String >::__new();		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(110)
							{
								HX_STACK_LINE(110)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(110)
								while((true)){
									HX_STACK_LINE(110)
									bool tmp1 = (_g1 < fields->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
									HX_STACK_LINE(110)
									bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
									HX_STACK_LINE(110)
									if ((tmp2)){
										HX_STACK_LINE(110)
										break;
									}
									HX_STACK_LINE(110)
									Dynamic tmp3 = fields->__GetItem(_g1);		HX_STACK_VAR(tmp3,"tmp3");
									HX_STACK_LINE(110)
									Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(110)
									++(_g1);
									HX_STACK_LINE(110)
									Dynamic tmp4 = f;		HX_STACK_VAR(tmp4,"tmp4");
									HX_STACK_LINE(110)
									::String tmp5 = __this->printField(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(110)
									::String tmp6 = (tmp5 + HX_HCSTRING("; ","\x85","\x33","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(110)
									_g->push(tmp6);
								}
							}
							HX_STACK_LINE(110)
							return _g;
						}
						return null();
					}
				};
				HX_STACK_LINE(110)
				::String tmp1 = (_Function_3_1::Block(this,fields))->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(110)
				::String tmp2 = (HX_HCSTRING("{ ","\x45","\x6b","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(110)
				tmp = (tmp2 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(107)
			::haxe::macro::ComplexType tmp1 = (::haxe::macro::ComplexType(ct))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(107)
			::haxe::macro::ComplexType ct1 = tmp1;		HX_STACK_VAR(ct1,"ct1");
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				::haxe::macro::ComplexType tmp2 = ct1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(111)
				::String tmp3 = this->printComplexType(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(111)
				::String tmp4 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(111)
				tmp = (tmp4 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(107)
			::haxe::macro::ComplexType tmp1 = (::haxe::macro::ComplexType(ct))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(107)
			::haxe::macro::ComplexType ct1 = tmp1;		HX_STACK_VAR(ct1,"ct1");
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				::haxe::macro::ComplexType tmp2 = ct1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(112)
				::String tmp3 = this->printComplexType(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(112)
				tmp = (HX_HCSTRING("?","\x3f","\x00","\x00","\x00") + tmp3);
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(107)
			cpp::ArrayBase fields = (::haxe::macro::ComplexType(ct))->__Param(1);		HX_STACK_VAR(fields,"fields");
			HX_STACK_LINE(107)
			cpp::ArrayBase tpl = (::haxe::macro::ComplexType(ct))->__Param(0);		HX_STACK_VAR(tpl,"tpl");
			HX_STACK_LINE(113)
			{
				HX_STACK_LINE(113)
				Dynamic tmp1 = this->printTypePath_dyn();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(113)
				::String tmp2 = tpl->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp1)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(" >, ","\x12","\x06","\x56","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(113)
				::String tmp3 = (HX_HCSTRING("{> ","\x5d","\x8b","\x5d","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(113)
				::String tmp4 = (tmp3 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(113)
				Dynamic tmp5 = this->printField_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(113)
				::String tmp6 = fields->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp5)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(113)
				::String tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(113)
				tmp = (tmp7 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));
			}
		}
		;break;
	}
	HX_STACK_LINE(107)
	return tmp;
	HX_STACK_LINE(107)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printComplexType,return )

::String Printer_obj::printMetadata( Dynamic meta){
	HX_STACK_FRAME("haxe.macro.Printer","printMetadata",0x5593e8de,"haxe.macro.Printer.printMetadata","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",116,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(meta,"meta")
	HX_STACK_LINE(117)
	::String tmp = (HX_HCSTRING("@","\x40","\x00","\x00","\x00") + meta->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	bool tmp1 = (meta->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(118)
	if ((tmp1)){
		HX_STACK_LINE(118)
		int tmp3 = meta->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		tmp2 = (tmp4 > (int)0);
	}
	else{
		HX_STACK_LINE(118)
		tmp2 = false;
	}
	HX_STACK_LINE(118)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(118)
	if ((tmp2)){
		HX_STACK_LINE(118)
		::String tmp4 = this->printExprs(meta->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic ),HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		::String tmp5 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		tmp3 = (tmp5 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(118)
		tmp3 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(117)
	::String tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(116)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printMetadata,return )

::String Printer_obj::printAccess( ::haxe::macro::Access access){
	HX_STACK_FRAME("haxe.macro.Printer","printAccess",0x99700d53,"haxe.macro.Printer.printAccess","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",120,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(access,"access")
	HX_STACK_LINE(120)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	switch( (int)(access->__Index())){
		case (int)2: {
			HX_STACK_LINE(121)
			tmp = HX_HCSTRING("static","\xae","\xdc","\xfb","\x05");
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(122)
			tmp = HX_HCSTRING("public","\xa9","\x80","\xf3","\x66");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(123)
			tmp = HX_HCSTRING("private","\x03","\x2d","\x6f","\x89");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(124)
			tmp = HX_HCSTRING("override","\x4c","\x22","\x28","\x49");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(125)
			tmp = HX_HCSTRING("inline","\x59","\xca","\x3f","\x99");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(126)
			tmp = HX_HCSTRING("dynamic","\x7f","\x9f","\x15","\x36");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(127)
			tmp = HX_HCSTRING("macro","\x0c","\x70","\x16","\x03");
		}
		;break;
	}
	HX_STACK_LINE(120)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printAccess,return )

::String Printer_obj::printField( Dynamic field){
	HX_STACK_FRAME("haxe.macro.Printer","printField",0x5192e7eb,"haxe.macro.Printer.printField","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",130,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(131)
	bool tmp = (field->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	if ((tmp)){
		HX_STACK_LINE(131)
		tmp1 = (field->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ) != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(131)
		tmp1 = false;
	}
	HX_STACK_LINE(131)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(131)
	if ((tmp1)){
		HX_STACK_LINE(131)
		::String tmp3 = this->tabs;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		::String tmp4 = (HX_HCSTRING("/**\n","\x7b","\x0a","\x31","\x1f") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		::String tmp5 = this->tabString;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		::String tmp7 = field->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(131)
		::String tmp8 = this->tabs;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(131)
		::String tmp9 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(131)
		::String tmp10 = this->tabString;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(131)
		::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(131)
		::String tmp12 = ::StringTools_obj::replace(tmp7,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(131)
		::String tmp13 = (tmp6 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(131)
		::String tmp14 = (tmp13 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(131)
		::String tmp15 = this->tabs;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(131)
		::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(131)
		::String tmp17 = (tmp16 + HX_HCSTRING("**/\n","\xbb","\xfd","\xe2","\x1b"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(131)
		::String tmp18 = this->tabs;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(131)
		tmp2 = (tmp17 + tmp18);
	}
	else{
		HX_STACK_LINE(131)
		tmp2 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(132)
	bool tmp3 = (field->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(132)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(132)
	if ((tmp3)){
		HX_STACK_LINE(132)
		int tmp5 = field->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(132)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(132)
		tmp4 = (tmp6 > (int)0);
	}
	else{
		HX_STACK_LINE(132)
		tmp4 = false;
	}
	HX_STACK_LINE(132)
	::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(132)
	if ((tmp4)){
		HX_STACK_LINE(132)
		Dynamic tmp6 = this->printMetadata_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(132)
		::String tmp7 = this->tabs;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(132)
		::String tmp8 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(132)
		::String tmp9 = field->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp6)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(132)
		::String tmp10 = this->tabs;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(132)
		::String tmp11 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(132)
		tmp5 = (tmp9 + tmp11);
	}
	else{
		HX_STACK_LINE(132)
		tmp5 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(131)
	::String tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(133)
	bool tmp7 = (field->__Field(HX_HCSTRING("access","\xa4","\x95","\x06","\x0b"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(133)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(133)
	if ((tmp7)){
		HX_STACK_LINE(133)
		int tmp9 = field->__Field(HX_HCSTRING("access","\xa4","\x95","\x06","\x0b"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(133)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(133)
		tmp8 = (tmp10 > (int)0);
	}
	else{
		HX_STACK_LINE(133)
		tmp8 = false;
	}
	HX_STACK_LINE(133)
	::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(133)
	if ((tmp8)){
		HX_STACK_LINE(133)
		Dynamic tmp10 = this->printAccess_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(133)
		::String tmp11 = field->__Field(HX_HCSTRING("access","\xa4","\x95","\x06","\x0b"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp10).StaticCast< Array< ::String > >()->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(133)
		tmp9 = (tmp11 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(133)
		tmp9 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(131)
	::String tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(134)
	::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(134)
	{
		HX_STACK_LINE(134)
		::haxe::macro::FieldType _g = field->__Field(HX_HCSTRING("kind","\x54","\xe1","\x09","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(134)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(134)
				Dynamic tmp12 = (::haxe::macro::FieldType(_g))->__Param(1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(134)
				Dynamic eo = tmp12;		HX_STACK_VAR(eo,"eo");
				HX_STACK_LINE(134)
				::haxe::macro::ComplexType tmp13 = (::haxe::macro::FieldType(_g))->__Param(0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(134)
				::haxe::macro::ComplexType t = tmp13;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(135)
				{
					HX_STACK_LINE(135)
					::String tmp14 = (HX_HCSTRING("var ","\x59","\x2b","\x49","\x4e") + field->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(135)
					::haxe::macro::ComplexType tmp15 = t;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(135)
					Dynamic tmp16 = this->printComplexType_dyn();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(135)
					::String tmp17 = this->opt(tmp15,tmp16,HX_HCSTRING(" : ","\xc6","\x7a","\x18","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(135)
					::String tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(135)
					Dynamic tmp19 = eo;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(135)
					Dynamic tmp20 = this->printExpr_dyn();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(135)
					::String tmp21 = this->opt(tmp19,tmp20,HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(135)
					tmp11 = (tmp18 + tmp21);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(134)
				Dynamic tmp12 = (::haxe::macro::FieldType(_g))->__Param(3);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(134)
				Dynamic eo = tmp12;		HX_STACK_VAR(eo,"eo");
				HX_STACK_LINE(134)
				::haxe::macro::ComplexType tmp13 = (::haxe::macro::FieldType(_g))->__Param(2);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(134)
				::haxe::macro::ComplexType t = tmp13;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(134)
				::String tmp14 = (::haxe::macro::FieldType(_g))->__Param(1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(134)
				::String set = tmp14;		HX_STACK_VAR(set,"set");
				HX_STACK_LINE(134)
				::String tmp15 = (::haxe::macro::FieldType(_g))->__Param(0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(134)
				::String get = tmp15;		HX_STACK_VAR(get,"get");
				HX_STACK_LINE(136)
				{
					HX_STACK_LINE(136)
					::String tmp16 = (HX_HCSTRING("var ","\x59","\x2b","\x49","\x4e") + field->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(136)
					::String tmp17 = (tmp16 + HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(136)
					::String tmp18 = get;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(136)
					::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(136)
					::String tmp20 = (tmp19 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(136)
					::String tmp21 = set;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(136)
					::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(136)
					::String tmp23 = (tmp22 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(136)
					::haxe::macro::ComplexType tmp24 = t;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(136)
					Dynamic tmp25 = this->printComplexType_dyn();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(136)
					::String tmp26 = this->opt(tmp24,tmp25,HX_HCSTRING(" : ","\xc6","\x7a","\x18","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(136)
					::String tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(136)
					Dynamic tmp28 = eo;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(136)
					Dynamic tmp29 = this->printExpr_dyn();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(136)
					::String tmp30 = this->opt(tmp28,tmp29,HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(136)
					tmp11 = (tmp27 + tmp30);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(134)
				Dynamic tmp12 = (::haxe::macro::FieldType(_g))->__Param(0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(134)
				Dynamic func = tmp12;		HX_STACK_VAR(func,"func");
				HX_STACK_LINE(137)
				{
					HX_STACK_LINE(137)
					::String tmp13 = (HX_HCSTRING("function ","\x08","\x0a","\x03","\xb4") + field->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(137)
					Dynamic tmp14 = func;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(137)
					::String tmp15 = this->printFunction(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(137)
					tmp11 = (tmp13 + tmp15);
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(131)
	::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(130)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printField,return )

::String Printer_obj::printTypeParamDecl( Dynamic tpd){
	HX_STACK_FRAME("haxe.macro.Printer","printTypeParamDecl",0x4f4af9ae,"haxe.macro.Printer.printTypeParamDecl","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",140,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tpd,"tpd")
	HX_STACK_LINE(141)
	::String tmp = tpd->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	bool tmp1 = (tpd->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(142)
	if ((tmp1)){
		HX_STACK_LINE(142)
		int tmp3 = tpd->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		tmp2 = (tmp4 > (int)0);
	}
	else{
		HX_STACK_LINE(142)
		tmp2 = false;
	}
	HX_STACK_LINE(142)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(142)
	if ((tmp2)){
		HX_STACK_LINE(142)
		Dynamic tmp4 = this->printTypeParamDecl_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		::String tmp5 = tpd->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp4)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(142)
		::String tmp6 = (HX_HCSTRING("<","\x3c","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(142)
		tmp3 = (tmp6 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(142)
		tmp3 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(141)
	::String tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	bool tmp5 = (tpd->__Field(HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(143)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(143)
	if ((tmp5)){
		HX_STACK_LINE(143)
		int tmp7 = tpd->__Field(HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(143)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(143)
		tmp6 = (tmp8 > (int)0);
	}
	else{
		HX_STACK_LINE(143)
		tmp6 = false;
	}
	HX_STACK_LINE(143)
	::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(143)
	if ((tmp6)){
		HX_STACK_LINE(143)
		Dynamic tmp8 = this->printComplexType_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(143)
		::String tmp9 = tpd->__Field(HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp8).StaticCast< Array< ::String > >()->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(143)
		::String tmp10 = (HX_HCSTRING(":(","\xae","\x32","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(143)
		tmp7 = (tmp10 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(143)
		tmp7 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(141)
	::String tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(140)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printTypeParamDecl,return )

::String Printer_obj::printFunctionArg( Dynamic arg){
	HX_STACK_FRAME("haxe.macro.Printer","printFunctionArg",0x07d4580f,"haxe.macro.Printer.printFunctionArg","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",145,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(arg,"arg")
	HX_STACK_LINE(146)
	Dynamic tmp = arg->__Field(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	if ((tmp)){
		HX_STACK_LINE(146)
		tmp1 = HX_HCSTRING("?","\x3f","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(146)
		tmp1 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(147)
	::String tmp2 = arg->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(146)
	::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(148)
	::haxe::macro::ComplexType tmp4 = arg->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(148)
	Dynamic tmp5 = this->printComplexType_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(148)
	::String tmp6 = this->opt(tmp4,tmp5,HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(146)
	::String tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(149)
	Dynamic tmp8 = arg->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(149)
	Dynamic tmp9 = this->printExpr_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(149)
	::String tmp10 = this->opt(tmp8,tmp9,HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(146)
	::String tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(145)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printFunctionArg,return )

::String Printer_obj::printFunction( Dynamic func){
	HX_STACK_FRAME("haxe.macro.Printer","printFunction",0x29ccac87,"haxe.macro.Printer.printFunction","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",151,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(func,"func")
	HX_STACK_LINE(152)
	bool tmp = (func->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	if ((tmp)){
		HX_STACK_LINE(152)
		tmp1 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(152)
		int tmp2 = func->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		if ((tmp3)){
			HX_STACK_LINE(152)
			Dynamic tmp4 = this->printTypeParamDecl_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			::String tmp5 = func->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp4)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(152)
			::String tmp6 = (HX_HCSTRING("<","\x3c","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(152)
			tmp1 = (tmp6 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(152)
			tmp1 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
	}
	HX_STACK_LINE(152)
	::String tmp2 = (tmp1 + HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(153)
	Dynamic tmp3 = this->printFunctionArg_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(153)
	::String tmp4 = func->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp3)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(152)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(152)
	::String tmp6 = (tmp5 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(154)
	::haxe::macro::ComplexType tmp7 = func->__Field(HX_HCSTRING("ret","\x61","\xd9","\x56","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(154)
	Dynamic tmp8 = this->printComplexType_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(154)
	::String tmp9 = this->opt(tmp7,tmp8,HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(152)
	::String tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(155)
	Dynamic tmp11 = func->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(155)
	Dynamic tmp12 = this->printExpr_dyn();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(155)
	::String tmp13 = this->opt(tmp11,tmp12,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(152)
	::String tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(151)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printFunction,return )

::String Printer_obj::printVar( Dynamic v){
	HX_STACK_FRAME("haxe.macro.Printer","printVar",0x51dd53d8,"haxe.macro.Printer.printVar","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",157,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(158)
	::String tmp = v->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	::haxe::macro::ComplexType tmp1 = v->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	Dynamic tmp2 = this->printComplexType_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	::String tmp3 = this->opt(tmp1,tmp2,HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(158)
	::String tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(160)
	Dynamic tmp5 = v->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(160)
	Dynamic tmp6 = this->printExpr_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(160)
	::String tmp7 = this->opt(tmp5,tmp6,HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(158)
	::String tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(157)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printVar,return )

::String Printer_obj::printExpr( Dynamic e){
	HX_STACK_FRAME("haxe.macro.Printer","printExpr",0x44a0db24,"haxe.macro.Printer.printExpr","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",163,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(163)
	::haxe::macro::Printer _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(163)
	bool tmp = (e == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	if ((tmp)){
		HX_STACK_LINE(163)
		tmp1 = HX_HCSTRING("#NULL","\x2a","\xb4","\xd5","\x5a");
	}
	else{
		HX_STACK_LINE(163)
		::haxe::macro::ExprDef _g = e->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(163)
				::haxe::macro::Constant tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				::haxe::macro::Constant c = tmp2;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(167)
				{
					HX_STACK_LINE(167)
					::haxe::macro::Constant tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(167)
					tmp1 = this->printConstant(tmp3);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(163)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(168)
				{
					HX_STACK_LINE(168)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(168)
					::String tmp5 = this->printExpr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(168)
					::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(168)
					::String tmp7 = (tmp6 + HX_HCSTRING("[","\x5b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(168)
					Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(168)
					::String tmp9 = this->printExpr(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(168)
					::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(168)
					tmp1 = (tmp10 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(163)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(163)
				::haxe::macro::Binop tmp4 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(163)
				::haxe::macro::Binop op = tmp4;		HX_STACK_VAR(op,"op");
				HX_STACK_LINE(169)
				{
					HX_STACK_LINE(169)
					Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(169)
					::String tmp6 = this->printExpr(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(169)
					::String tmp7 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(169)
					::String tmp8 = (tmp7 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(169)
					::haxe::macro::Binop tmp9 = op;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(169)
					::String tmp10 = this->printBinop(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(169)
					::String tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(169)
					::String tmp12 = (tmp11 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(169)
					Dynamic tmp13 = e2;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(169)
					::String tmp14 = this->printExpr(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(169)
					tmp1 = (tmp12 + tmp14);
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(163)
				::String tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				::String n = tmp2;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(163)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(170)
					::String tmp5 = this->printExpr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(170)
					::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(170)
					::String tmp7 = (tmp6 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(170)
					::String tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(170)
					tmp1 = (tmp7 + tmp8);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(171)
				{
					HX_STACK_LINE(171)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(171)
					::String tmp4 = this->printExpr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(171)
					::String tmp5 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(171)
					tmp1 = (tmp5 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(163)
				cpp::ArrayBase fl = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(fl,"fl");
				HX_STACK_LINE(172)
				{

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::haxe::macro::Printer,_g1)
					int __ArgCount() const { return 1; }
					::String run(Dynamic fld){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",173,0x0fa09877)
						HX_STACK_ARG(fld,"fld")
						{
							HX_STACK_LINE(173)
							::String tmp2 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + fld->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(173)
							::String tmp3 = (tmp2 + HX_HCSTRING(" : ","\xc6","\x7a","\x18","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(173)
							Dynamic tmp4 = fld->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(173)
							::String tmp5 = _g1->printExpr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(173)
							::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(173)
							return tmp6;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(173)
					::String tmp2 = fl->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )( Dynamic(new _Function_4_1(_g1)))->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(173)
					::String tmp3 = (HX_HCSTRING("{ ","\x45","\x6b","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(173)
					tmp1 = (tmp3 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(163)
				cpp::ArrayBase el = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
				HX_STACK_LINE(174)
				{
					HX_STACK_LINE(174)
					::String tmp2 = this->printExprs(el,HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(174)
					::String tmp3 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(174)
					tmp1 = (tmp3 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(163)
				cpp::ArrayBase el = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(el,"el");
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(175)
				{
					HX_STACK_LINE(175)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(175)
					::String tmp4 = this->printExpr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(175)
					::String tmp5 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(175)
					::String tmp6 = (tmp5 + HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(175)
					::String tmp7 = this->printExprs(el,HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(175)
					::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(175)
					tmp1 = (tmp8 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(163)
				cpp::ArrayBase el = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(el,"el");
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic tp = tmp2;		HX_STACK_VAR(tp,"tp");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					Dynamic tmp3 = tp;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(176)
					::String tmp4 = this->printTypePath(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(176)
					::String tmp5 = (HX_HCSTRING("new ","\xc0","\x83","\x02","\x49") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(176)
					::String tmp6 = (tmp5 + HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(176)
					::String tmp7 = this->printExprs(el,HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(176)
					::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(176)
					tmp1 = (tmp8 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(163)
				bool tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				bool _switch_1 = (tmp2);
				if (  ( _switch_1==true)){
					HX_STACK_LINE(163)
					Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(163)
					Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(163)
					::haxe::macro::Unop tmp4 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(163)
					::haxe::macro::Unop op = tmp4;		HX_STACK_VAR(op,"op");
					HX_STACK_LINE(177)
					{
						HX_STACK_LINE(177)
						Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(177)
						::String tmp6 = this->printExpr(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(177)
						::haxe::macro::Unop tmp7 = op;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(177)
						::String tmp8 = this->printUnop(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(177)
						tmp1 = (tmp6 + tmp8);
					}
				}
				else if (  ( _switch_1==false)){
					HX_STACK_LINE(163)
					Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(163)
					Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(163)
					::haxe::macro::Unop tmp4 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(163)
					::haxe::macro::Unop op = tmp4;		HX_STACK_VAR(op,"op");
					HX_STACK_LINE(178)
					{
						HX_STACK_LINE(178)
						::haxe::macro::Unop tmp5 = op;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(178)
						::String tmp6 = this->printUnop(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(178)
						Dynamic tmp7 = e1;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(178)
						::String tmp8 = this->printExpr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(178)
						tmp1 = (tmp6 + tmp8);
					}
				}
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic func = tmp2;		HX_STACK_VAR(func,"func");
				HX_STACK_LINE(163)
				::String tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				::String no = tmp3;		HX_STACK_VAR(no,"no");
				HX_STACK_LINE(179)
				bool tmp4 = (no != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(179)
				if ((tmp4)){
					HX_STACK_LINE(179)
					::String tmp5 = (HX_HCSTRING("function ","\x08","\x0a","\x03","\xb4") + no);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(179)
					Dynamic tmp6 = func;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(179)
					::String tmp7 = this->printFunction(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(179)
					tmp1 = (tmp5 + tmp7);
				}
				else{
					HX_STACK_LINE(163)
					Dynamic tmp5 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(163)
					Dynamic func1 = tmp5;		HX_STACK_VAR(func1,"func1");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						Dynamic tmp6 = func1;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(180)
						::String tmp7 = this->printFunction(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(180)
						tmp1 = (HX_HCSTRING("function","\x18","\xab","\x52","\x14") + tmp7);
					}
				}
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(163)
				cpp::ArrayBase vl = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(vl,"vl");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					Dynamic tmp2 = this->printVar_dyn();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(181)
					::String tmp3 = vl->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp2)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(181)
					tmp1 = (HX_HCSTRING("var ","\x59","\x2b","\x49","\x4e") + tmp3);
				}
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(163)
				cpp::ArrayBase el = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
				HX_STACK_LINE(163)
				int tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0)->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				switch( (int)(tmp2)){
					case (int)0: {
						HX_STACK_LINE(182)
						tmp1 = HX_HCSTRING("{ }","\x98","\x71","\x5d","\x00");
					}
					;break;
					default: {
						HX_STACK_LINE(184)
						::String tmp3 = this->tabs;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(184)
						::String old = tmp3;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(185)
						::String tmp4 = this->tabString;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(185)
						hx::AddEq(this->tabs,tmp4);
						HX_STACK_LINE(186)
						::String tmp5 = this->tabs;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(186)
						::String tmp6 = (HX_HCSTRING("{\n","\x2f","\x6b","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(186)
						::String tmp7 = this->tabs;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(186)
						::String tmp8 = (HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(186)
						::String tmp9 = this->printExprs(el,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(186)
						::String tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(186)
						::String s = tmp10;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(187)
						this->tabs = old;
						HX_STACK_LINE(188)
						::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						::String tmp12 = this->tabs;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(188)
						::String tmp13 = (HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(188)
						::String tmp14 = (tmp13 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(188)
						tmp1 = (tmp11 + tmp14);
					}
				}
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(163)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(189)
				{
					HX_STACK_LINE(189)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(189)
					::String tmp5 = this->printExpr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(189)
					::String tmp6 = (HX_HCSTRING("for (","\x51","\x77","\x94","\x04") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(189)
					::String tmp7 = (tmp6 + HX_HCSTRING(") ","\xd7","\x23","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(189)
					Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(189)
					::String tmp9 = this->printExpr(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(189)
					tmp1 = (tmp7 + tmp9);
				}
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(163)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(190)
				{
					HX_STACK_LINE(190)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(190)
					::String tmp5 = this->printExpr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(190)
					::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(190)
					::String tmp7 = (tmp6 + HX_HCSTRING(" in ","\x7b","\xe0","\x76","\x15"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(190)
					Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(190)
					::String tmp9 = this->printExpr(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(190)
					tmp1 = (tmp7 + tmp9);
				}
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic eelse = tmp2;		HX_STACK_VAR(eelse,"eelse");
				HX_STACK_LINE(163)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(163)
				if ((tmp4)){
					HX_STACK_LINE(163)
					Dynamic tmp5 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(163)
					Dynamic econd = tmp5;		HX_STACK_VAR(econd,"econd");
					HX_STACK_LINE(163)
					Dynamic tmp6 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(163)
					Dynamic eif = tmp6;		HX_STACK_VAR(eif,"eif");
					HX_STACK_LINE(191)
					{
						HX_STACK_LINE(191)
						Dynamic tmp7 = econd;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(191)
						::String tmp8 = this->printExpr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(191)
						::String tmp9 = (HX_HCSTRING("if (","\x25","\xe9","\xb4","\x45") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(191)
						::String tmp10 = (tmp9 + HX_HCSTRING(") ","\xd7","\x23","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(191)
						Dynamic tmp11 = eif;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						::String tmp12 = this->printExpr(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(191)
						tmp1 = (tmp10 + tmp12);
					}
				}
				else{
					HX_STACK_LINE(163)
					Dynamic tmp5 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(163)
					Dynamic _switch_2 = (tmp5);
					 {
						HX_STACK_LINE(163)
						Dynamic tmp6 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(163)
						Dynamic econd = tmp6;		HX_STACK_VAR(econd,"econd");
						HX_STACK_LINE(163)
						Dynamic tmp7 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(163)
						Dynamic eif = tmp7;		HX_STACK_VAR(eif,"eif");
						HX_STACK_LINE(192)
						{
							HX_STACK_LINE(192)
							Dynamic tmp8 = econd;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(192)
							::String tmp9 = this->printExpr(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(192)
							::String tmp10 = (HX_HCSTRING("if (","\x25","\xe9","\xb4","\x45") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(192)
							::String tmp11 = (tmp10 + HX_HCSTRING(") ","\xd7","\x23","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(192)
							Dynamic tmp12 = eif;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(192)
							::String tmp13 = this->printExpr(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(192)
							::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(192)
							::String tmp15 = (tmp14 + HX_HCSTRING(" else ","\x27","\xc9","\x9e","\x3a"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(192)
							Dynamic tmp16 = eelse;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(192)
							::String tmp17 = this->printExpr(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(192)
							tmp1 = (tmp15 + tmp17);
						}
					}
;
;
				}
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(163)
				bool tmp2 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				bool _switch_3 = (tmp2);
				if (  ( _switch_3==true)){
					HX_STACK_LINE(163)
					Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(163)
					Dynamic econd = tmp3;		HX_STACK_VAR(econd,"econd");
					HX_STACK_LINE(163)
					Dynamic tmp4 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(163)
					Dynamic e1 = tmp4;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						Dynamic tmp5 = econd;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(193)
						::String tmp6 = this->printExpr(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(193)
						::String tmp7 = (HX_HCSTRING("while (","\xf9","\x6d","\x5a","\xa6") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(193)
						::String tmp8 = (tmp7 + HX_HCSTRING(") ","\xd7","\x23","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(193)
						Dynamic tmp9 = e1;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(193)
						::String tmp10 = this->printExpr(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(193)
						tmp1 = (tmp8 + tmp10);
					}
				}
				else if (  ( _switch_3==false)){
					HX_STACK_LINE(163)
					Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(163)
					Dynamic econd = tmp3;		HX_STACK_VAR(econd,"econd");
					HX_STACK_LINE(163)
					Dynamic tmp4 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(163)
					Dynamic e1 = tmp4;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(194)
					{
						HX_STACK_LINE(194)
						Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(194)
						::String tmp6 = this->printExpr(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(194)
						::String tmp7 = (HX_HCSTRING("do ","\x35","\x42","\x4c","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(194)
						::String tmp8 = (tmp7 + HX_HCSTRING(" while (","\xd9","\xb1","\xa8","\xcc"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(194)
						Dynamic tmp9 = econd;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(194)
						::String tmp10 = this->printExpr(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(194)
						::String tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						tmp1 = (tmp11 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
					}
				}
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic edef = tmp2;		HX_STACK_VAR(edef,"edef");
				HX_STACK_LINE(163)
				cpp::ArrayBase cl = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(cl,"cl");
				HX_STACK_LINE(163)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(195)
				{
					HX_STACK_LINE(196)
					::String tmp4 = this->tabs;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(196)
					::String old = tmp4;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(197)
					::String tmp5 = this->tabString;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(197)
					hx::AddEq(this->tabs,tmp5);
					HX_STACK_LINE(198)
					Dynamic tmp6 = e1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(198)
					::String tmp7 = this->printExpr(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(198)
					::String tmp8 = (HX_HCSTRING("switch ","\xac","\x6b","\xa7","\x04") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(198)
					::String tmp9 = (tmp8 + HX_HCSTRING(" {\n","\x4f","\xb3","\x18","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(198)
					::String tmp10 = this->tabs;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(198)
					::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(203)
					::String tmp12 = this->tabs;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(203)
					::String tmp13 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::haxe::macro::Printer,_g1)
					int __ArgCount() const { return 1; }
					::String run(Dynamic c){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",200,0x0fa09877)
						HX_STACK_ARG(c,"c")
						{
							HX_STACK_LINE(200)
							::String tmp14 = _g1->printExprs(c->__Field(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"), hx::paccDynamic ),HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(200)
							::String tmp15 = (HX_HCSTRING("case ","\x70","\xbb","\x20","\x41") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(201)
							bool tmp16 = (c->__Field(HX_HCSTRING("guard","\xe5","\xb4","\xe5","\x9b"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(201)
							::String tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(201)
							if ((tmp16)){
								HX_STACK_LINE(201)
								Dynamic tmp18 = c->__Field(HX_HCSTRING("guard","\xe5","\xb4","\xe5","\x9b"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(201)
								::String tmp19 = _g1->printExpr(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(201)
								::String tmp20 = (HX_HCSTRING(" if (","\x45","\x79","\x87","\xb2") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(201)
								tmp17 = (tmp20 + HX_HCSTRING("):","\xf1","\x23","\x00","\x00"));
							}
							else{
								HX_STACK_LINE(201)
								tmp17 = HX_HCSTRING(":","\x3a","\x00","\x00","\x00");
							}
							HX_STACK_LINE(200)
							::String tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(202)
							bool tmp19 = (c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(202)
							::String tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(202)
							if ((tmp19)){
								HX_STACK_LINE(202)
								Dynamic tmp21 = c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(202)
								Dynamic tmp22 = _g1->printExpr_dyn();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(202)
								::String tmp23 = _g1->opt(tmp21,tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(202)
								tmp20 = (tmp23 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));
							}
							else{
								HX_STACK_LINE(202)
								tmp20 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							}
							HX_STACK_LINE(200)
							::String tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(200)
							return tmp21;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(199)
					::String tmp14 = cl->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )( Dynamic(new _Function_4_1(_g1)))->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(198)
					::String tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(198)
					::String s = tmp15;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(204)
					bool tmp16 = (edef != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(204)
					if ((tmp16)){
						HX_STACK_LINE(205)
						::String tmp17 = this->tabs;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(205)
						::String tmp18 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(205)
						::String tmp19 = (tmp18 + HX_HCSTRING("default:","\x59","\xd0","\x99","\xaf"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(205)
						bool tmp20 = (edef->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(205)
						::String tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(205)
						if ((tmp20)){
							HX_STACK_LINE(205)
							tmp21 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						else{
							HX_STACK_LINE(205)
							Dynamic tmp22 = edef;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(205)
							::String tmp23 = this->printExpr(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(205)
							tmp21 = (tmp23 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));
						}
						HX_STACK_LINE(205)
						::String tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(205)
						hx::AddEq(s,tmp22);
					}
					HX_STACK_LINE(206)
					this->tabs = old;
					HX_STACK_LINE(207)
					::String tmp17 = s;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(207)
					::String tmp18 = this->tabs;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(207)
					::String tmp19 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(207)
					::String tmp20 = (tmp19 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(207)
					tmp1 = (tmp17 + tmp20);
				}
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(163)
				cpp::ArrayBase cl = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(cl,"cl");
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(208)
				{
					HX_STACK_LINE(209)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(209)
					::String tmp4 = this->printExpr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(209)
					::String tmp5 = (HX_HCSTRING("try ","\x85","\xaa","\x03","\x4d") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::haxe::macro::Printer,_g1)
					int __ArgCount() const { return 1; }
					::String run(Dynamic c){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",210,0x0fa09877)
						HX_STACK_ARG(c,"c")
						{
							HX_STACK_LINE(210)
							::String tmp6 = (HX_HCSTRING(" catch(","\xad","\x0f","\xda","\xee") + c->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(210)
							::String tmp7 = (tmp6 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(210)
							::haxe::macro::ComplexType tmp8 = c->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(210)
							::String tmp9 = _g1->printComplexType(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(210)
							::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(210)
							::String tmp11 = (tmp10 + HX_HCSTRING(") ","\xd7","\x23","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(210)
							Dynamic tmp12 = c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(210)
							::String tmp13 = _g1->printExpr(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(210)
							::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(210)
							return tmp14;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(210)
					::String tmp6 = cl->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )( Dynamic(new _Function_4_1(_g1)))->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(209)
					tmp1 = (tmp5 + tmp6);
				}
			}
			;break;
			case (int)19: {
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic eo = tmp2;		HX_STACK_VAR(eo,"eo");
				HX_STACK_LINE(211)
				{
					HX_STACK_LINE(211)
					Dynamic tmp3 = eo;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(211)
					Dynamic tmp4 = this->printExpr_dyn();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(211)
					::String tmp5 = this->opt(tmp3,tmp4,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(211)
					tmp1 = (HX_HCSTRING("return","\xb0","\xa4","\x2d","\x09") + tmp5);
				}
			}
			;break;
			case (int)20: {
				HX_STACK_LINE(212)
				tmp1 = HX_HCSTRING("break","\xbf","\x24","\xec","\xb8");
			}
			;break;
			case (int)21: {
				HX_STACK_LINE(213)
				tmp1 = HX_HCSTRING("continue","\x67","\xe0","\xc8","\x31");
			}
			;break;
			case (int)22: {
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(214)
				{
					HX_STACK_LINE(214)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(214)
					::String tmp4 = this->printExpr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(214)
					tmp1 = (HX_HCSTRING("untyped ","\x8f","\x1b","\x7e","\x59") + tmp4);
				}
			}
			;break;
			case (int)23: {
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(215)
				{
					HX_STACK_LINE(215)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(215)
					::String tmp4 = this->printExpr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(215)
					tmp1 = (HX_HCSTRING("throw ","\x3a","\x24","\xc1","\x8e") + tmp4);
				}
			}
			;break;
			case (int)24: {
				HX_STACK_LINE(163)
				::haxe::macro::ComplexType tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				::haxe::macro::ComplexType cto = tmp2;		HX_STACK_VAR(cto,"cto");
				HX_STACK_LINE(163)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(216)
				bool tmp4 = (cto != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(216)
				if ((tmp4)){
					HX_STACK_LINE(216)
					Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(216)
					::String tmp6 = this->printExpr(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(216)
					::String tmp7 = (HX_HCSTRING("cast(","\x89","\xc8","\x20","\x41") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(216)
					::String tmp8 = (tmp7 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(216)
					::haxe::macro::ComplexType tmp9 = cto;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(216)
					::String tmp10 = this->printComplexType(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(216)
					::String tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(216)
					tmp1 = (tmp11 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(163)
					Dynamic tmp5 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(163)
					Dynamic e11 = tmp5;		HX_STACK_VAR(e11,"e11");
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						Dynamic tmp6 = e11;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(217)
						::String tmp7 = this->printExpr(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(217)
						tmp1 = (HX_HCSTRING("cast ","\x81","\xc8","\x20","\x41") + tmp7);
					}
				}
			}
			;break;
			case (int)25: {
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(218)
				{
					HX_STACK_LINE(218)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(218)
					::String tmp4 = this->printExpr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(218)
					::String tmp5 = (HX_HCSTRING("#DISPLAY(","\xe9","\xba","\x21","\x56") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(218)
					tmp1 = (tmp5 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
				}
			}
			;break;
			case (int)26: {
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic tp = tmp2;		HX_STACK_VAR(tp,"tp");
				HX_STACK_LINE(219)
				{
					HX_STACK_LINE(219)
					Dynamic tmp3 = tp;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(219)
					::String tmp4 = this->printTypePath(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(219)
					::String tmp5 = (HX_HCSTRING("#DISPLAY(","\xe9","\xba","\x21","\x56") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(219)
					tmp1 = (tmp5 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
				}
			}
			;break;
			case (int)27: {
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic eelse = tmp2;		HX_STACK_VAR(eelse,"eelse");
				HX_STACK_LINE(163)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				Dynamic eif = tmp3;		HX_STACK_VAR(eif,"eif");
				HX_STACK_LINE(163)
				Dynamic tmp4 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(163)
				Dynamic econd = tmp4;		HX_STACK_VAR(econd,"econd");
				HX_STACK_LINE(220)
				{
					HX_STACK_LINE(220)
					Dynamic tmp5 = econd;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(220)
					::String tmp6 = this->printExpr(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(220)
					::String tmp7 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(220)
					::String tmp8 = (tmp7 + HX_HCSTRING(" ? ","\x21","\x7f","\x18","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(220)
					Dynamic tmp9 = eif;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(220)
					::String tmp10 = this->printExpr(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(220)
					::String tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(220)
					::String tmp12 = (tmp11 + HX_HCSTRING(" : ","\xc6","\x7a","\x18","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(220)
					Dynamic tmp13 = eelse;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(220)
					::String tmp14 = this->printExpr(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(220)
					tmp1 = (tmp12 + tmp14);
				}
			}
			;break;
			case (int)28: {
				HX_STACK_LINE(163)
				::haxe::macro::ComplexType tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				::haxe::macro::ComplexType ct = tmp2;		HX_STACK_VAR(ct,"ct");
				HX_STACK_LINE(163)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(221)
				{
					HX_STACK_LINE(221)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(221)
					::String tmp5 = this->printExpr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(221)
					::String tmp6 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(221)
					::String tmp7 = (tmp6 + HX_HCSTRING(" : ","\xc6","\x7a","\x18","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(221)
					::haxe::macro::ComplexType tmp8 = ct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(221)
					::String tmp9 = this->printComplexType(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(221)
					::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(221)
					tmp1 = (tmp10 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
				}
			}
			;break;
			case (int)29: {
				HX_STACK_LINE(163)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(163)
				Dynamic tmp3 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				Dynamic meta = tmp3;		HX_STACK_VAR(meta,"meta");
				HX_STACK_LINE(222)
				{
					HX_STACK_LINE(222)
					Dynamic tmp4 = meta;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(222)
					::String tmp5 = this->printMetadata(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(222)
					::String tmp6 = (tmp5 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(222)
					Dynamic tmp7 = e1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(222)
					::String tmp8 = this->printExpr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(222)
					tmp1 = (tmp6 + tmp8);
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(163)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printExpr,return )

::String Printer_obj::printExprs( cpp::ArrayBase el,::String sep){
	HX_STACK_FRAME("haxe.macro.Printer","printExprs",0xc81ee4cf,"haxe.macro.Printer.printExprs","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",225,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(el,"el")
	HX_STACK_ARG(sep,"sep")
	HX_STACK_LINE(226)
	Dynamic tmp = this->printExpr_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	::String tmp1 = sep;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(226)
	::String tmp2 = el->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Printer_obj,printExprs,return )

::String Printer_obj::printExtension( cpp::ArrayBase tpl,cpp::ArrayBase fields){
	HX_STACK_FRAME("haxe.macro.Printer","printExtension",0x9a57d330,"haxe.macro.Printer.printExtension","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",229,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tpl,"tpl")
	HX_STACK_ARG(fields,"fields")
	HX_STACK_LINE(230)
	::String tmp = this->tabs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	::String tmp1 = (HX_HCSTRING("{\n","\x2f","\x6b","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(230)
	::String tmp2 = (tmp1 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	Dynamic tmp3 = this->printTypePath_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(230)
	::String tmp4 = this->tabs;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(230)
	::String tmp5 = (HX_HCSTRING(",\n","\x5e","\x26","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(230)
	::String tmp6 = (tmp5 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(230)
	::String tmp7 = tpl->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp3)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(230)
	::String tmp8 = (tmp2 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(230)
	::String tmp9 = (tmp8 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(231)
	bool tmp10 = (fields->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(231)
	::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(231)
	if ((tmp10)){
		HX_STACK_LINE(231)
		::String tmp12 = this->tabs;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(231)
		::String tmp13 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(231)
		Dynamic tmp14 = this->printField_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(231)
		::String tmp15 = this->tabs;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(231)
		::String tmp16 = (HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(231)
		::String tmp17 = fields->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp14)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(231)
		::String tmp18 = (tmp13 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(231)
		tmp11 = (tmp18 + HX_HCSTRING(";\n}","\x2e","\xce","\x2c","\x00"));
	}
	else{
		HX_STACK_LINE(231)
		tmp11 = HX_HCSTRING("\n}","\x33","\x09","\x00","\x00");
	}
	HX_STACK_LINE(230)
	::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(230)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC2(Printer_obj,printExtension,return )

::String Printer_obj::printStructure( cpp::ArrayBase fields){
	HX_STACK_FRAME("haxe.macro.Printer","printStructure",0xfc9693e4,"haxe.macro.Printer.printStructure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",234,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fields,"fields")
	HX_STACK_LINE(235)
	bool tmp = (fields->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	if ((tmp)){
		HX_STACK_LINE(235)
		tmp1 = HX_HCSTRING("{ }","\x98","\x71","\x5d","\x00");
	}
	else{
		HX_STACK_LINE(236)
		::String tmp2 = this->tabs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		::String tmp3 = (HX_HCSTRING("{\n","\x2f","\x6b","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(236)
		Dynamic tmp4 = this->printField_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(236)
		::String tmp5 = this->tabs;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(236)
		::String tmp6 = (HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(236)
		::String tmp7 = fields->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp4)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(236)
		::String tmp8 = (tmp3 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(236)
		tmp1 = (tmp8 + HX_HCSTRING(";\n}","\x2e","\xce","\x2c","\x00"));
	}
	HX_STACK_LINE(235)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,printStructure,return )

::String Printer_obj::printTypeDefinition( Dynamic t,hx::Null< bool >  __o_printPackage){
bool printPackage = __o_printPackage.Default(true);
	HX_STACK_FRAME("haxe.macro.Printer","printTypeDefinition",0xb703779c,"haxe.macro.Printer.printTypeDefinition","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",239,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(printPackage,"printPackage")
{
		HX_STACK_LINE(240)
		::String tmp = this->tabs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		::String old = tmp;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(241)
		::String tmp1 = this->tabString;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(241)
		this->tabs = tmp1;
		HX_STACK_LINE(243)
		bool tmp2 = (t == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(243)
		::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(243)
		if ((tmp2)){
			HX_STACK_LINE(243)
			tmp3 = HX_HCSTRING("#NULL","\x2a","\xb4","\xd5","\x5a");
		}
		else{
			HX_STACK_LINE(244)
			bool tmp4 = printPackage;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(244)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(244)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(244)
			if ((tmp5)){
				HX_STACK_LINE(244)
				int tmp7 = t->__Field(HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(244)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(244)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(244)
				tmp6 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(244)
				tmp6 = false;
			}
			HX_STACK_LINE(244)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(244)
			if ((tmp6)){
				HX_STACK_LINE(244)
				::String tmp8 = t->__Field(HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(244)
				::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(244)
				tmp7 = (tmp9 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(244)
				tmp7 = false;
			}
			HX_STACK_LINE(244)
			::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(244)
			if ((tmp7)){
				HX_STACK_LINE(244)
				::String tmp9 = t->__Field(HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a"), hx::paccDynamic )->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(244)
				::String tmp10 = (HX_HCSTRING("package ","\xda","\xe9","\x54","\x39") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(244)
				tmp8 = (tmp10 + HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(244)
				tmp8 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			HX_STACK_LINE(245)
			bool tmp9 = (t->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(245)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(245)
			if ((tmp9)){
				HX_STACK_LINE(245)
				int tmp11 = t->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(245)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(245)
				tmp10 = (tmp12 > (int)0);
			}
			else{
				HX_STACK_LINE(245)
				tmp10 = false;
			}
			HX_STACK_LINE(245)
			::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(245)
			if ((tmp10)){
				HX_STACK_LINE(245)
				Dynamic tmp12 = this->printMetadata_dyn();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(245)
				::String tmp13 = t->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp12)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(245)
				tmp11 = (tmp13 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(245)
				tmp11 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			HX_STACK_LINE(244)
			::String tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(245)
			Dynamic tmp13 = t->__Field(HX_HCSTRING("isExtern","\xea","\x70","\x84","\x1f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(245)
			::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(245)
			if ((tmp13)){
				HX_STACK_LINE(245)
				tmp14 = HX_HCSTRING("extern ","\xc0","\xde","\x5f","\x70");
			}
			else{
				HX_STACK_LINE(245)
				tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			HX_STACK_LINE(244)
			::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(245)
			::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				::haxe::macro::TypeDefKind _g = t->__Field(HX_HCSTRING("kind","\x54","\xe1","\x09","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(245)
				switch( (int)(_g->__Index())){
					case (int)0: {
						HX_STACK_LINE(247)
						::String tmp17 = (HX_HCSTRING("enum ","\xff","\x35","\x87","\x70") + t->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(247)
						int tmp18 = t->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(247)
						bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(247)
						::String tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(247)
						if ((tmp19)){
							HX_STACK_LINE(247)
							Dynamic tmp21 = this->printTypeParamDecl_dyn();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(247)
							::String tmp22 = t->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp21)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(247)
							::String tmp23 = (HX_HCSTRING("<","\x3c","\x00","\x00","\x00") + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(247)
							tmp20 = (tmp23 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(247)
							tmp20 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						HX_STACK_LINE(247)
						::String tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(247)
						::String tmp22 = (tmp21 + HX_HCSTRING(" {\n","\x4f","\xb3","\x18","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
						struct _Function_4_1{
							inline static Array< ::String > Block( hx::ObjectPtr< ::haxe::macro::Printer_obj > __this,Dynamic &t){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",248,0x0fa09877)
								{
									HX_STACK_LINE(249)
									Array< ::String > _g1 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(248)
									{
										HX_STACK_LINE(248)
										int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(248)
										cpp::ArrayBase _g3 = t->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic );		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(248)
										while((true)){
											HX_STACK_LINE(248)
											bool tmp23 = (_g2 < _g3->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(248)
											bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(248)
											if ((tmp24)){
												HX_STACK_LINE(248)
												break;
											}
											HX_STACK_LINE(248)
											Dynamic tmp25 = _g3->__GetItem(_g2);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(248)
											Dynamic field = tmp25;		HX_STACK_VAR(field,"field");
											HX_STACK_LINE(248)
											++(_g2);
											HX_STACK_LINE(249)
											::String tmp26 = __this->tabs;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(249)
											bool tmp27 = (field->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(249)
											bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(249)
											if ((tmp27)){
												HX_STACK_LINE(249)
												tmp28 = (field->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ) != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
											}
											else{
												HX_STACK_LINE(249)
												tmp28 = false;
											}
											HX_STACK_LINE(249)
											::String tmp29;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(249)
											if ((tmp28)){
												HX_STACK_LINE(249)
												::String tmp30 = __this->tabs;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(249)
												::String tmp31 = (HX_HCSTRING("/**\n","\x7b","\x0a","\x31","\x1f") + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(249)
												::String tmp32 = __this->tabString;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(249)
												::String tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(249)
												::String tmp34 = field->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(249)
												::String tmp35 = __this->tabs;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(249)
												::String tmp36 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(249)
												::String tmp37 = __this->tabString;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(249)
												::String tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(249)
												::String tmp39 = ::StringTools_obj::replace(tmp34,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(249)
												::String tmp40 = (tmp33 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(249)
												::String tmp41 = (tmp40 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(249)
												::String tmp42 = __this->tabs;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(249)
												::String tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(249)
												::String tmp44 = (tmp43 + HX_HCSTRING("**/\n","\xbb","\xfd","\xe2","\x1b"));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(249)
												::String tmp45 = __this->tabs;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(249)
												tmp29 = (tmp44 + tmp45);
											}
											else{
												HX_STACK_LINE(249)
												tmp29 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
											}
											HX_STACK_LINE(249)
											::String tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(250)
											bool tmp31 = (field->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(250)
											bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(250)
											if ((tmp31)){
												HX_STACK_LINE(250)
												int tmp33 = field->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(250)
												int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(250)
												tmp32 = (tmp34 > (int)0);
											}
											else{
												HX_STACK_LINE(250)
												tmp32 = false;
											}
											HX_STACK_LINE(250)
											::String tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(250)
											if ((tmp32)){
												HX_STACK_LINE(250)
												Dynamic tmp34 = __this->printMetadata_dyn();		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(250)
												::String tmp35 = field->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp34)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(250)
												tmp33 = (tmp35 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
											}
											else{
												HX_STACK_LINE(250)
												tmp33 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
											}
											HX_STACK_LINE(249)
											::String tmp34 = (tmp30 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(251)
											::String tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(251)
											{
												HX_STACK_LINE(251)
												::haxe::macro::FieldType _g4 = field->__Field(HX_HCSTRING("kind","\x54","\xe1","\x09","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g4,"_g4");
												HX_STACK_LINE(251)
												switch( (int)(_g4->__Index())){
													case (int)0: {
														HX_STACK_LINE(251)
														::haxe::macro::ComplexType tmp36 = (::haxe::macro::FieldType(_g4))->__Param(0);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(251)
														::haxe::macro::ComplexType t1 = tmp36;		HX_STACK_VAR(t1,"t1");
														HX_STACK_LINE(252)
														{
															HX_STACK_LINE(252)
															::String tmp37 = field->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(252)
															::haxe::macro::ComplexType tmp38 = t1;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(252)
															Dynamic tmp39 = __this->printComplexType_dyn();		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(252)
															::String tmp40 = __this->opt(tmp38,tmp39,HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(252)
															tmp35 = (tmp37 + tmp40);
														}
													}
													;break;
													case (int)2: {
														HX_STACK_LINE(253)
														HX_STACK_DO_THROW(HX_HCSTRING("FProp is invalid for TDEnum.","\xbe","\xf2","\xa3","\x3c"));
													}
													;break;
													case (int)1: {
														HX_STACK_LINE(251)
														Dynamic tmp36 = (::haxe::macro::FieldType(_g4))->__Param(0);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(251)
														Dynamic func = tmp36;		HX_STACK_VAR(func,"func");
														HX_STACK_LINE(254)
														{
															HX_STACK_LINE(254)
															::String tmp37 = field->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(254)
															Dynamic tmp38 = func;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(254)
															::String tmp39 = __this->printFunction(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(254)
															tmp35 = (tmp37 + tmp39);
														}
													}
													;break;
												}
											}
											HX_STACK_LINE(249)
											::String tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(249)
											::String tmp37 = (tmp36 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(249)
											_g1->push(tmp37);
										}
									}
									HX_STACK_LINE(248)
									return _g1;
								}
								return null();
							}
						};
						HX_STACK_LINE(248)
						::String tmp23 = (_Function_4_1::Block(this,t))->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						::String tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(247)
						tmp16 = (tmp24 + HX_HCSTRING("\n}","\x33","\x09","\x00","\x00"));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(259)
						::String tmp17 = (HX_HCSTRING("typedef ","\x75","\x2a","\x58","\xc4") + t->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(259)
						int tmp18 = t->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(259)
						bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(259)
						::String tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(259)
						if ((tmp19)){
							HX_STACK_LINE(259)
							Dynamic tmp21 = this->printTypeParamDecl_dyn();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(259)
							::String tmp22 = t->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp21)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(259)
							::String tmp23 = (HX_HCSTRING("<","\x3c","\x00","\x00","\x00") + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(259)
							tmp20 = (tmp23 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(259)
							tmp20 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						HX_STACK_LINE(259)
						::String tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(259)
						::String tmp22 = (tmp21 + HX_HCSTRING(" = {\n","\x52","\x47","\x3d","\x95"));		HX_STACK_VAR(tmp22,"tmp22");
						struct _Function_4_1{
							inline static Array< ::String > Block( hx::ObjectPtr< ::haxe::macro::Printer_obj > __this,Dynamic &t){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",260,0x0fa09877)
								{
									HX_STACK_LINE(261)
									Array< ::String > _g1 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(260)
									{
										HX_STACK_LINE(260)
										int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(260)
										cpp::ArrayBase _g3 = t->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic );		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(260)
										while((true)){
											HX_STACK_LINE(260)
											bool tmp23 = (_g2 < _g3->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(260)
											bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(260)
											if ((tmp24)){
												HX_STACK_LINE(260)
												break;
											}
											HX_STACK_LINE(260)
											Dynamic tmp25 = _g3->__GetItem(_g2);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(260)
											Dynamic f = tmp25;		HX_STACK_VAR(f,"f");
											HX_STACK_LINE(260)
											++(_g2);
											HX_STACK_LINE(261)
											::String tmp26 = __this->tabs;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(261)
											Dynamic tmp27 = f;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(261)
											::String tmp28 = __this->printField(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(261)
											::String tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(261)
											::String tmp30 = (tmp29 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(261)
											_g1->push(tmp30);
										}
									}
									HX_STACK_LINE(260)
									return _g1;
								}
								return null();
							}
						};
						HX_STACK_LINE(260)
						::String tmp23 = (_Function_4_1::Block(this,t))->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(259)
						::String tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(259)
						tmp16 = (tmp24 + HX_HCSTRING("\n}","\x33","\x09","\x00","\x00"));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(245)
						Dynamic tmp17 = (::haxe::macro::TypeDefKind(_g))->__Param(2);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(245)
						Dynamic isInterface = tmp17;		HX_STACK_VAR(isInterface,"isInterface");
						HX_STACK_LINE(245)
						cpp::ArrayBase interfaces = (::haxe::macro::TypeDefKind(_g))->__Param(1);		HX_STACK_VAR(interfaces,"interfaces");
						HX_STACK_LINE(245)
						Dynamic tmp18 = (::haxe::macro::TypeDefKind(_g))->__Param(0);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(245)
						Dynamic superClass = tmp18;		HX_STACK_VAR(superClass,"superClass");
						HX_STACK_LINE(264)
						{
							HX_STACK_LINE(265)
							Dynamic tmp19 = isInterface;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(265)
							::String tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(265)
							if ((tmp19)){
								HX_STACK_LINE(265)
								tmp20 = HX_HCSTRING("interface ","\x47","\x50","\x11","\x65");
							}
							else{
								HX_STACK_LINE(265)
								tmp20 = HX_HCSTRING("class ","\xe8","\xb8","\x10","\x05");
							}
							HX_STACK_LINE(265)
							::String tmp21 = t->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(265)
							::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(265)
							bool tmp23 = (t->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(265)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(265)
							if ((tmp23)){
								HX_STACK_LINE(265)
								int tmp25 = t->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(265)
								int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(265)
								tmp24 = (tmp26 > (int)0);
							}
							else{
								HX_STACK_LINE(265)
								tmp24 = false;
							}
							HX_STACK_LINE(265)
							::String tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(265)
							if ((tmp24)){
								HX_STACK_LINE(265)
								Dynamic tmp26 = this->printTypeParamDecl_dyn();		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(265)
								::String tmp27 = t->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp26)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(265)
								::String tmp28 = (HX_HCSTRING("<","\x3c","\x00","\x00","\x00") + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(265)
								tmp25 = (tmp28 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
							}
							else{
								HX_STACK_LINE(265)
								tmp25 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							}
							HX_STACK_LINE(265)
							::String tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(266)
							bool tmp27 = (superClass != null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(266)
							::String tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(266)
							if ((tmp27)){
								HX_STACK_LINE(266)
								Dynamic tmp29 = superClass;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(266)
								::String tmp30 = this->printTypePath(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(266)
								tmp28 = (HX_HCSTRING(" extends ","\xc7","\x00","\x04","\x3f") + tmp30);
							}
							else{
								HX_STACK_LINE(266)
								tmp28 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							}
							HX_STACK_LINE(265)
							::String tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(267)
							bool tmp30 = (interfaces != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(267)
							::String tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(267)
							if ((tmp30)){
								HX_STACK_LINE(267)
								Dynamic tmp32 = isInterface;		HX_STACK_VAR(tmp32,"tmp32");
								struct _Function_6_1{
									inline static Array< ::String > Block( hx::ObjectPtr< ::haxe::macro::Printer_obj > __this,cpp::ArrayBase &interfaces){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",267,0x0fa09877)
										{
											HX_STACK_LINE(267)
											Array< ::String > _g1 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(267)
											{
												HX_STACK_LINE(267)
												int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(267)
												while((true)){
													HX_STACK_LINE(267)
													bool tmp33 = (_g2 < interfaces->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(267)
													bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(267)
													if ((tmp34)){
														HX_STACK_LINE(267)
														break;
													}
													HX_STACK_LINE(267)
													Dynamic tmp35 = interfaces->__GetItem(_g2);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(267)
													Dynamic tp = tmp35;		HX_STACK_VAR(tp,"tp");
													HX_STACK_LINE(267)
													++(_g2);
													HX_STACK_LINE(267)
													Dynamic tmp36 = tp;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(267)
													::String tmp37 = __this->printTypePath(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(267)
													::String tmp38 = (HX_HCSTRING(" extends ","\xc7","\x00","\x04","\x3f") + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(267)
													_g1->push(tmp38);
												}
											}
											HX_STACK_LINE(267)
											return _g1;
										}
										return null();
									}
								};
								struct _Function_6_2{
									inline static Array< ::String > Block( hx::ObjectPtr< ::haxe::macro::Printer_obj > __this,cpp::ArrayBase &interfaces){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",267,0x0fa09877)
										{
											HX_STACK_LINE(267)
											Array< ::String > _g2 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(267)
											{
												HX_STACK_LINE(267)
												int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(267)
												while((true)){
													HX_STACK_LINE(267)
													bool tmp33 = (_g3 < interfaces->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(267)
													bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(267)
													if ((tmp34)){
														HX_STACK_LINE(267)
														break;
													}
													HX_STACK_LINE(267)
													Dynamic tmp35 = interfaces->__GetItem(_g3);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(267)
													Dynamic tp = tmp35;		HX_STACK_VAR(tp,"tp");
													HX_STACK_LINE(267)
													++(_g3);
													HX_STACK_LINE(267)
													Dynamic tmp36 = tp;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(267)
													::String tmp37 = __this->printTypePath(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(267)
													::String tmp38 = (HX_HCSTRING(" implements ","\x90","\x78","\x27","\xcb") + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(267)
													_g2->push(tmp38);
												}
											}
											HX_STACK_LINE(267)
											return _g2;
										}
										return null();
									}
								};
								HX_STACK_LINE(267)
								tmp31 = ((  ((tmp32)) ? Array< ::String >(_Function_6_1::Block(this,interfaces)) : Array< ::String >(_Function_6_2::Block(this,interfaces)) ))->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
							}
							else{
								HX_STACK_LINE(267)
								tmp31 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							}
							HX_STACK_LINE(265)
							::String tmp32 = (tmp29 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(265)
							::String tmp33 = (tmp32 + HX_HCSTRING(" {\n","\x4f","\xb3","\x18","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
							struct _Function_5_1{
								inline static Array< ::String > Block( hx::ObjectPtr< ::haxe::macro::Printer_obj > __this,Dynamic &t){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",269,0x0fa09877)
									{
										HX_STACK_LINE(269)
										Array< ::String > _g3 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(269)
										{
											HX_STACK_LINE(269)
											int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
											HX_STACK_LINE(269)
											cpp::ArrayBase _g5 = t->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic );		HX_STACK_VAR(_g5,"_g5");
											HX_STACK_LINE(269)
											while((true)){
												HX_STACK_LINE(269)
												bool tmp34 = (_g4 < _g5->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(269)
												bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(269)
												if ((tmp35)){
													HX_STACK_LINE(269)
													break;
												}
												HX_STACK_LINE(269)
												Dynamic tmp36 = _g5->__GetItem(_g4);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(269)
												Dynamic f = tmp36;		HX_STACK_VAR(f,"f");
												HX_STACK_LINE(269)
												++(_g4);
												HX_STACK_LINE(269)
												::String tmp37;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(269)
												{
													HX_STACK_LINE(270)
													Dynamic tmp38 = f;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(270)
													::String tmp39 = __this->printField(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(270)
													::String fstr = tmp39;		HX_STACK_VAR(fstr,"fstr");
													HX_STACK_LINE(271)
													::String tmp40 = __this->tabs;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(271)
													::String tmp41 = fstr;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(271)
													::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(271)
													::String tmp43;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(271)
													{
														HX_STACK_LINE(271)
														::haxe::macro::FieldType _g6 = f->__Field(HX_HCSTRING("kind","\x54","\xe1","\x09","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g6,"_g6");
														HX_STACK_LINE(271)
														switch( (int)(_g6->__Index())){
															case (int)0: case (int)2: {
																HX_STACK_LINE(272)
																tmp43 = HX_HCSTRING(";","\x3b","\x00","\x00","\x00");
															}
															;break;
															case (int)1: {
																HX_STACK_LINE(271)
																Dynamic tmp44 = (::haxe::macro::FieldType(_g6))->__Param(0);		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(271)
																Dynamic tmp45 = tmp44->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(271)
																bool tmp46 = (tmp45 == null());		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(271)
																if ((tmp46)){
																	HX_STACK_LINE(273)
																	tmp43 = HX_HCSTRING(";","\x3b","\x00","\x00","\x00");
																}
																else{
																	HX_STACK_LINE(271)
																	Dynamic tmp47 = (::haxe::macro::FieldType(_g6))->__Param(0);		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(271)
																	::haxe::macro::ExprDef tmp48 = tmp47->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic )->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(271)
																	switch( (int)(tmp48->__Index())){
																		case (int)12: {
																			HX_STACK_LINE(274)
																			tmp43 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
																		}
																		;break;
																		default: {
																			HX_STACK_LINE(275)
																			tmp43 = HX_HCSTRING(";","\x3b","\x00","\x00","\x00");
																		}
																	}
																}
															}
															;break;
														}
													}
													HX_STACK_LINE(271)
													tmp37 = (tmp42 + tmp43);
												}
												HX_STACK_LINE(269)
												_g3->push(tmp37);
											}
										}
										HX_STACK_LINE(269)
										return _g3;
									}
									return null();
								}
							};
							HX_STACK_LINE(269)
							::String tmp34 = (_Function_5_1::Block(this,t))->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(265)
							::String tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(265)
							tmp16 = (tmp35 + HX_HCSTRING("\n}","\x33","\x09","\x00","\x00"));
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(245)
						::haxe::macro::ComplexType tmp17 = (::haxe::macro::TypeDefKind(_g))->__Param(0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(245)
						::haxe::macro::ComplexType ct = tmp17;		HX_STACK_VAR(ct,"ct");
						HX_STACK_LINE(280)
						{
							HX_STACK_LINE(281)
							::String tmp18 = (HX_HCSTRING("typedef ","\x75","\x2a","\x58","\xc4") + t->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(281)
							int tmp19 = t->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(281)
							bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(281)
							::String tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(281)
							if ((tmp20)){
								HX_STACK_LINE(281)
								Dynamic tmp22 = this->printTypeParamDecl_dyn();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(281)
								::String tmp23 = t->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp22)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(281)
								::String tmp24 = (HX_HCSTRING("<","\x3c","\x00","\x00","\x00") + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(281)
								tmp21 = (tmp24 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
							}
							else{
								HX_STACK_LINE(281)
								tmp21 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							}
							HX_STACK_LINE(281)
							::String tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(281)
							::String tmp23 = (tmp22 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(282)
							::String tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(282)
							switch( (int)(ct->__Index())){
								case (int)4: {
									HX_STACK_LINE(282)
									cpp::ArrayBase fields = (::haxe::macro::ComplexType(ct))->__Param(1);		HX_STACK_VAR(fields,"fields");
									HX_STACK_LINE(282)
									cpp::ArrayBase tpl = (::haxe::macro::ComplexType(ct))->__Param(0);		HX_STACK_VAR(tpl,"tpl");
									HX_STACK_LINE(283)
									tmp24 = this->printExtension(tpl,fields);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(282)
									cpp::ArrayBase fields = (::haxe::macro::ComplexType(ct))->__Param(0);		HX_STACK_VAR(fields,"fields");
									HX_STACK_LINE(284)
									tmp24 = this->printStructure(fields);
								}
								;break;
								default: {
									HX_STACK_LINE(285)
									::haxe::macro::ComplexType tmp25 = ct;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(285)
									tmp24 = this->printComplexType(tmp25);
								}
							}
							HX_STACK_LINE(281)
							::String tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(281)
							tmp16 = (tmp25 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(245)
						Array< ::Dynamic > to = (::haxe::macro::TypeDefKind(_g))->__Param(2);		HX_STACK_VAR(to,"to");
						HX_STACK_LINE(245)
						Array< ::Dynamic > from = (::haxe::macro::TypeDefKind(_g))->__Param(1);		HX_STACK_VAR(from,"from");
						HX_STACK_LINE(245)
						::haxe::macro::ComplexType tmp17 = (::haxe::macro::TypeDefKind(_g))->__Param(0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(245)
						::haxe::macro::ComplexType tthis = tmp17;		HX_STACK_VAR(tthis,"tthis");
						HX_STACK_LINE(288)
						{
							HX_STACK_LINE(289)
							::String tmp18 = (HX_HCSTRING("abstract ","\xfe","\x04","\x6a","\xc6") + t->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(290)
							int tmp19 = t->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(290)
							bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(290)
							::String tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(290)
							if ((tmp20)){
								HX_STACK_LINE(290)
								Dynamic tmp22 = this->printTypeParamDecl_dyn();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(290)
								::String tmp23 = t->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"), hx::paccDynamic )(tmp22)->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(290)
								::String tmp24 = (HX_HCSTRING("<","\x3c","\x00","\x00","\x00") + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(290)
								tmp21 = (tmp24 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
							}
							else{
								HX_STACK_LINE(290)
								tmp21 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							}
							HX_STACK_LINE(289)
							::String tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(291)
							bool tmp23 = (tthis == null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(291)
							::String tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(291)
							if ((tmp23)){
								HX_STACK_LINE(291)
								tmp24 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							}
							else{
								HX_STACK_LINE(291)
								::haxe::macro::ComplexType tmp25 = tthis;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(291)
								::String tmp26 = this->printComplexType(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(291)
								::String tmp27 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(291)
								tmp24 = (tmp27 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
							}
							HX_STACK_LINE(289)
							::String tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(292)
							bool tmp26 = (from == null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(292)
							::String tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(292)
							if ((tmp26)){
								HX_STACK_LINE(292)
								tmp27 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							}
							else{
								struct _Function_6_1{
									inline static Array< ::String > Block( hx::ObjectPtr< ::haxe::macro::Printer_obj > __this,Array< ::Dynamic > &from){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",292,0x0fa09877)
										{
											HX_STACK_LINE(292)
											Array< ::String > _g1 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(292)
											{
												HX_STACK_LINE(292)
												int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(292)
												while((true)){
													HX_STACK_LINE(292)
													bool tmp28 = (_g2 < from->length);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(292)
													bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(292)
													if ((tmp29)){
														HX_STACK_LINE(292)
														break;
													}
													HX_STACK_LINE(292)
													::haxe::macro::ComplexType tmp30 = from->__get(_g2).StaticCast< ::haxe::macro::ComplexType >();		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(292)
													::haxe::macro::ComplexType f = tmp30;		HX_STACK_VAR(f,"f");
													HX_STACK_LINE(292)
													++(_g2);
													HX_STACK_LINE(292)
													::haxe::macro::ComplexType tmp31 = f;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(292)
													::String tmp32 = __this->printComplexType(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(292)
													::String tmp33 = (HX_HCSTRING(" from ","\x56","\xa3","\xf9","\xd1") + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(292)
													_g1->push(tmp33);
												}
											}
											HX_STACK_LINE(292)
											return _g1;
										}
										return null();
									}
								};
								HX_STACK_LINE(292)
								tmp27 = (_Function_6_1::Block(this,from))->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
							}
							HX_STACK_LINE(289)
							::String tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(293)
							bool tmp29 = (to == null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(293)
							::String tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(293)
							if ((tmp29)){
								HX_STACK_LINE(293)
								tmp30 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							}
							else{
								struct _Function_6_1{
									inline static Array< ::String > Block( hx::ObjectPtr< ::haxe::macro::Printer_obj > __this,Array< ::Dynamic > &to){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",293,0x0fa09877)
										{
											HX_STACK_LINE(293)
											Array< ::String > _g2 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(293)
											{
												HX_STACK_LINE(293)
												int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(293)
												while((true)){
													HX_STACK_LINE(293)
													bool tmp31 = (_g3 < to->length);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(293)
													bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(293)
													if ((tmp32)){
														HX_STACK_LINE(293)
														break;
													}
													HX_STACK_LINE(293)
													::haxe::macro::ComplexType tmp33 = to->__get(_g3).StaticCast< ::haxe::macro::ComplexType >();		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(293)
													::haxe::macro::ComplexType t1 = tmp33;		HX_STACK_VAR(t1,"t1");
													HX_STACK_LINE(293)
													++(_g3);
													HX_STACK_LINE(293)
													::haxe::macro::ComplexType tmp34 = t1;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(293)
													::String tmp35 = __this->printComplexType(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(293)
													::String tmp36 = (HX_HCSTRING(" to ","\x25","\x3a","\x7f","\x15") + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(293)
													_g2->push(tmp36);
												}
											}
											HX_STACK_LINE(293)
											return _g2;
										}
										return null();
									}
								};
								HX_STACK_LINE(293)
								tmp30 = (_Function_6_1::Block(this,to))->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
							}
							HX_STACK_LINE(289)
							::String tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(289)
							::String tmp32 = (tmp31 + HX_HCSTRING(" {\n","\x4f","\xb3","\x18","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
							struct _Function_5_1{
								inline static Array< ::String > Block( hx::ObjectPtr< ::haxe::macro::Printer_obj > __this,Dynamic &t){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",295,0x0fa09877)
									{
										HX_STACK_LINE(295)
										Array< ::String > _g3 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(295)
										{
											HX_STACK_LINE(295)
											int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
											HX_STACK_LINE(295)
											cpp::ArrayBase _g5 = t->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic );		HX_STACK_VAR(_g5,"_g5");
											HX_STACK_LINE(295)
											while((true)){
												HX_STACK_LINE(295)
												bool tmp33 = (_g4 < _g5->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(295)
												bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(295)
												if ((tmp34)){
													HX_STACK_LINE(295)
													break;
												}
												HX_STACK_LINE(295)
												Dynamic tmp35 = _g5->__GetItem(_g4);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(295)
												Dynamic f = tmp35;		HX_STACK_VAR(f,"f");
												HX_STACK_LINE(295)
												++(_g4);
												HX_STACK_LINE(295)
												::String tmp36;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(295)
												{
													HX_STACK_LINE(296)
													Dynamic tmp37 = f;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(296)
													::String tmp38 = __this->printField(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(296)
													::String fstr = tmp38;		HX_STACK_VAR(fstr,"fstr");
													HX_STACK_LINE(297)
													::String tmp39 = __this->tabs;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(297)
													::String tmp40 = fstr;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(297)
													::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(297)
													::String tmp42;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(297)
													{
														HX_STACK_LINE(297)
														::haxe::macro::FieldType _g6 = f->__Field(HX_HCSTRING("kind","\x54","\xe1","\x09","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g6,"_g6");
														HX_STACK_LINE(297)
														switch( (int)(_g6->__Index())){
															case (int)0: case (int)2: {
																HX_STACK_LINE(298)
																tmp42 = HX_HCSTRING(";","\x3b","\x00","\x00","\x00");
															}
															;break;
															case (int)1: {
																HX_STACK_LINE(297)
																Dynamic tmp43 = (::haxe::macro::FieldType(_g6))->__Param(0);		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(297)
																Dynamic func = tmp43;		HX_STACK_VAR(func,"func");
																HX_STACK_LINE(299)
																bool tmp44 = (func->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(299)
																if ((tmp44)){
																	HX_STACK_LINE(299)
																	tmp42 = HX_HCSTRING(";","\x3b","\x00","\x00","\x00");
																}
																else{
																	HX_STACK_LINE(300)
																	tmp42 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
																}
															}
															;break;
															default: {
																HX_STACK_LINE(300)
																tmp42 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
															}
														}
													}
													HX_STACK_LINE(297)
													tmp36 = (tmp41 + tmp42);
												}
												HX_STACK_LINE(295)
												_g3->push(tmp36);
											}
										}
										HX_STACK_LINE(295)
										return _g3;
									}
									return null();
								}
							};
							HX_STACK_LINE(295)
							::String tmp33 = (_Function_5_1::Block(this,t))->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(289)
							::String tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(289)
							tmp16 = (tmp34 + HX_HCSTRING("\n}","\x33","\x09","\x00","\x00"));
						}
					}
					;break;
				}
			}
			HX_STACK_LINE(244)
			tmp3 = (tmp15 + tmp16);
		}
		HX_STACK_LINE(243)
		::String str = tmp3;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(306)
		this->tabs = old;
		HX_STACK_LINE(307)
		::String tmp4 = str;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(307)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Printer_obj,printTypeDefinition,return )

::String Printer_obj::opt( Dynamic v,Dynamic f,::String __o_prefix){
::String prefix = __o_prefix.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxe.macro.Printer","opt",0x7100f5d5,"haxe.macro.Printer.opt","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Printer.hx",310,0x0fa09877)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(prefix,"prefix")
{
		HX_STACK_LINE(310)
		bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		if ((tmp)){
			HX_STACK_LINE(310)
			tmp1 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(310)
			::String tmp2 = prefix;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(310)
			Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(310)
			::String tmp4 = f(tmp3).Cast< ::String >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(310)
			tmp1 = (tmp2 + tmp4);
		}
		HX_STACK_LINE(310)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Printer_obj,opt,return )


Printer_obj::Printer_obj()
{
}

void Printer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Printer);
	HX_MARK_MEMBER_NAME(tabs,"tabs");
	HX_MARK_MEMBER_NAME(tabString,"tabString");
	HX_MARK_END_CLASS();
}

void Printer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tabs,"tabs");
	HX_VISIT_MEMBER_NAME(tabString,"tabString");
}

Dynamic Printer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"opt") ) { return opt_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tabs") ) { return tabs; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"printVar") ) { return printVar_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tabString") ) { return tabString; }
		if (HX_FIELD_EQ(inName,"printUnop") ) { return printUnop_dyn(); }
		if (HX_FIELD_EQ(inName,"printExpr") ) { return printExpr_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"printBinop") ) { return printBinop_dyn(); }
		if (HX_FIELD_EQ(inName,"printField") ) { return printField_dyn(); }
		if (HX_FIELD_EQ(inName,"printExprs") ) { return printExprs_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"printString") ) { return printString_dyn(); }
		if (HX_FIELD_EQ(inName,"printAccess") ) { return printAccess_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"escapeString") ) { return escapeString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"printConstant") ) { return printConstant_dyn(); }
		if (HX_FIELD_EQ(inName,"printTypePath") ) { return printTypePath_dyn(); }
		if (HX_FIELD_EQ(inName,"printMetadata") ) { return printMetadata_dyn(); }
		if (HX_FIELD_EQ(inName,"printFunction") ) { return printFunction_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"printTypeParam") ) { return printTypeParam_dyn(); }
		if (HX_FIELD_EQ(inName,"printExtension") ) { return printExtension_dyn(); }
		if (HX_FIELD_EQ(inName,"printStructure") ) { return printStructure_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"printComplexType") ) { return printComplexType_dyn(); }
		if (HX_FIELD_EQ(inName,"printFunctionArg") ) { return printFunctionArg_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"printFormatString") ) { return printFormatString_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"printTypeParamDecl") ) { return printTypeParamDecl_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"printTypeDefinition") ) { return printTypeDefinition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Printer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tabs") ) { tabs=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tabString") ) { tabString=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Printer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tabs","\x7e","\xb0","\xf6","\x4c"));
	outFields->push(HX_HCSTRING("tabString","\x06","\xe5","\x7c","\x72"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Printer_obj,tabs),HX_HCSTRING("tabs","\x7e","\xb0","\xf6","\x4c")},
	{hx::fsString,(int)offsetof(Printer_obj,tabString),HX_HCSTRING("tabString","\x06","\xe5","\x7c","\x72")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tabs","\x7e","\xb0","\xf6","\x4c"),
	HX_HCSTRING("tabString","\x06","\xe5","\x7c","\x72"),
	HX_HCSTRING("printUnop","\x87","\x6e","\xa2","\xce"),
	HX_HCSTRING("printBinop","\x3b","\x6e","\x92","\x0b"),
	HX_HCSTRING("escapeString","\x32","\xf7","\x83","\xd2"),
	HX_HCSTRING("printFormatString","\x35","\xa3","\x5c","\x71"),
	HX_HCSTRING("printString","\xde","\xd4","\xa7","\x38"),
	HX_HCSTRING("printConstant","\xb1","\x4a","\x62","\x5b"),
	HX_HCSTRING("printTypeParam","\x86","\x75","\x61","\xd8"),
	HX_HCSTRING("printTypePath","\xcc","\x72","\xe1","\x6c"),
	HX_HCSTRING("printComplexType","\xdd","\xe1","\x16","\x48"),
	HX_HCSTRING("printMetadata","\xbc","\x70","\xde","\xf5"),
	HX_HCSTRING("printAccess","\xb1","\x41","\x7e","\x32"),
	HX_HCSTRING("printField","\x4d","\xe9","\x25","\x59"),
	HX_HCSTRING("printTypeParamDecl","\x10","\x2d","\xb1","\x53"),
	HX_HCSTRING("printFunctionArg","\xf1","\x8e","\x55","\x00"),
	HX_HCSTRING("printFunction","\x65","\x34","\x17","\xca"),
	HX_HCSTRING("printVar","\xba","\xd8","\x1b","\x29"),
	HX_HCSTRING("printExpr","\x02","\x9c","\x16","\xc4"),
	HX_HCSTRING("printExprs","\x31","\xe6","\xb1","\xcf"),
	HX_HCSTRING("printExtension","\x92","\x2d","\x44","\x3b"),
	HX_HCSTRING("printStructure","\x46","\xee","\x82","\x9d"),
	HX_HCSTRING("printTypeDefinition","\xfa","\x39","\x0a","\x8c"),
	HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Printer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Printer_obj::__mClass,"__mClass");
};

#endif

hx::Class Printer_obj::__mClass;

void Printer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.macro.Printer","\x10","\xc1","\xe6","\x5a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Printer_obj >;
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
