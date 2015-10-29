#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_macro_Unop
#include <haxe/macro/Unop.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::ExprDef  ExprDef_obj::EArray(Dynamic e1,Dynamic e2)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EArray","\x14","\xc3","\x5c","\x4f"),1,hx::DynamicArray(0,2).Add(e1).Add(e2)); }

::haxe::macro::ExprDef  ExprDef_obj::EArrayDecl(cpp::ArrayBase values)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EArrayDecl","\x9e","\x59","\xbd","\x01"),6,hx::DynamicArray(0,1).Add(values)); }

::haxe::macro::ExprDef  ExprDef_obj::EBinop(::haxe::macro::Binop op,Dynamic e1,Dynamic e2)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EBinop","\x23","\x6f","\xcd","\xdc"),2,hx::DynamicArray(0,3).Add(op).Add(e1).Add(e2)); }

::haxe::macro::ExprDef  ExprDef_obj::EBlock(cpp::ArrayBase exprs)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EBlock","\xc8","\xca","\xc9","\xde"),12,hx::DynamicArray(0,1).Add(exprs)); }

::haxe::macro::ExprDef ExprDef_obj::EBreak;

::haxe::macro::ExprDef  ExprDef_obj::ECall(Dynamic e,cpp::ArrayBase params)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("ECall","\x83","\x4b","\x39","\xe7"),7,hx::DynamicArray(0,2).Add(e).Add(params)); }

::haxe::macro::ExprDef  ExprDef_obj::ECast(Dynamic e,::haxe::macro::ComplexType t)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("ECast","\xa4","\x51","\x39","\xe7"),24,hx::DynamicArray(0,2).Add(e).Add(t)); }

::haxe::macro::ExprDef  ExprDef_obj::ECheckType(Dynamic e,::haxe::macro::ComplexType t)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("ECheckType","\x9d","\xea","\xcd","\x16"),28,hx::DynamicArray(0,2).Add(e).Add(t)); }

::haxe::macro::ExprDef  ExprDef_obj::EConst(::haxe::macro::Constant c)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EConst","\xde","\x4e","\x2b","\x74"),0,hx::DynamicArray(0,1).Add(c)); }

::haxe::macro::ExprDef ExprDef_obj::EContinue;

::haxe::macro::ExprDef  ExprDef_obj::EDisplay(Dynamic e,bool isCall)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EDisplay","\x7d","\x14","\x34","\xf3"),25,hx::DynamicArray(0,2).Add(e).Add(isCall)); }

::haxe::macro::ExprDef  ExprDef_obj::EDisplayNew(Dynamic t)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EDisplayNew","\xe3","\x9f","\x6b","\x90"),26,hx::DynamicArray(0,1).Add(t)); }

::haxe::macro::ExprDef  ExprDef_obj::EField(Dynamic e,::String field)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EField","\x35","\xea","\x60","\x2a"),3,hx::DynamicArray(0,2).Add(e).Add(field)); }

::haxe::macro::ExprDef  ExprDef_obj::EFor(Dynamic it,Dynamic expr)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EFor","\xc4","\x37","\xd1","\x2d"),13,hx::DynamicArray(0,2).Add(it).Add(expr)); }

::haxe::macro::ExprDef  ExprDef_obj::EFunction(::String name,Dynamic f)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EFunction","\x7d","\xb4","\x15","\xc9"),11,hx::DynamicArray(0,2).Add(name).Add(f)); }

::haxe::macro::ExprDef  ExprDef_obj::EIf(Dynamic econd,Dynamic eif,Dynamic eelse)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EIf","\x82","\x9b","\x34","\x00"),15,hx::DynamicArray(0,3).Add(econd).Add(eif).Add(eelse)); }

::haxe::macro::ExprDef  ExprDef_obj::EIn(Dynamic e1,Dynamic e2)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EIn","\x8a","\x9b","\x34","\x00"),14,hx::DynamicArray(0,2).Add(e1).Add(e2)); }

::haxe::macro::ExprDef  ExprDef_obj::EMeta(Dynamic s,Dynamic e)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EMeta","\xaa","\x7d","\xd8","\xed"),29,hx::DynamicArray(0,2).Add(s).Add(e)); }

::haxe::macro::ExprDef  ExprDef_obj::ENew(Dynamic t,cpp::ArrayBase params)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("ENew","\x1b","\x41","\xd7","\x2d"),8,hx::DynamicArray(0,2).Add(t).Add(params)); }

::haxe::macro::ExprDef  ExprDef_obj::EObjectDecl(cpp::ArrayBase fields)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EObjectDecl","\x6e","\xb3","\x42","\x77"),5,hx::DynamicArray(0,1).Add(fields)); }

::haxe::macro::ExprDef  ExprDef_obj::EParenthesis(Dynamic e)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EParenthesis","\x91","\xa6","\x1e","\xbf"),4,hx::DynamicArray(0,1).Add(e)); }

::haxe::macro::ExprDef  ExprDef_obj::EReturn(Dynamic e)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EReturn","\xd5","\x1a","\x0b","\x73"),19,hx::DynamicArray(0,1).Add(e)); }

::haxe::macro::ExprDef  ExprDef_obj::ESwitch(Dynamic e,cpp::ArrayBase cases,Dynamic edef)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("ESwitch","\x19","\xc0","\x56","\x2f"),17,hx::DynamicArray(0,3).Add(e).Add(cases).Add(edef)); }

::haxe::macro::ExprDef  ExprDef_obj::ETernary(Dynamic econd,Dynamic eif,Dynamic eelse)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("ETernary","\x56","\xc3","\x5c","\x5e"),27,hx::DynamicArray(0,3).Add(econd).Add(eif).Add(eelse)); }

::haxe::macro::ExprDef  ExprDef_obj::EThrow(Dynamic e)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EThrow","\xa1","\xb2","\x5d","\x39"),23,hx::DynamicArray(0,1).Add(e)); }

::haxe::macro::ExprDef  ExprDef_obj::ETry(Dynamic e,cpp::ArrayBase catches)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("ETry","\xf6","\xd9","\xdb","\x2d"),18,hx::DynamicArray(0,2).Add(e).Add(catches)); }

::haxe::macro::ExprDef  ExprDef_obj::EUnop(::haxe::macro::Unop op,bool postFix,Dynamic e)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EUnop","\x9f","\x02","\x29","\xf3"),9,hx::DynamicArray(0,3).Add(op).Add(postFix).Add(e)); }

::haxe::macro::ExprDef  ExprDef_obj::EUntyped(Dynamic e)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EUntyped","\xac","\x51","\x46","\x4f"),22,hx::DynamicArray(0,1).Add(e)); }

::haxe::macro::ExprDef  ExprDef_obj::EVars(cpp::ArrayBase vars)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EVars","\x91","\x5e","\xc8","\xf3"),10,hx::DynamicArray(0,1).Add(vars)); }

::haxe::macro::ExprDef  ExprDef_obj::EWhile(Dynamic econd,Dynamic e,bool normalWhile)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EWhile","\x2c","\x99","\x8a","\xf3"),16,hx::DynamicArray(0,3).Add(econd).Add(e).Add(normalWhile)); }

HX_DEFINE_CREATE_ENUM(ExprDef_obj)

int ExprDef_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("EArray","\x14","\xc3","\x5c","\x4f")) return 1;
	if (inName==HX_HCSTRING("EArrayDecl","\x9e","\x59","\xbd","\x01")) return 6;
	if (inName==HX_HCSTRING("EBinop","\x23","\x6f","\xcd","\xdc")) return 2;
	if (inName==HX_HCSTRING("EBlock","\xc8","\xca","\xc9","\xde")) return 12;
	if (inName==HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2")) return 20;
	if (inName==HX_HCSTRING("ECall","\x83","\x4b","\x39","\xe7")) return 7;
	if (inName==HX_HCSTRING("ECast","\xa4","\x51","\x39","\xe7")) return 24;
	if (inName==HX_HCSTRING("ECheckType","\x9d","\xea","\xcd","\x16")) return 28;
	if (inName==HX_HCSTRING("EConst","\xde","\x4e","\x2b","\x74")) return 0;
	if (inName==HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6")) return 21;
	if (inName==HX_HCSTRING("EDisplay","\x7d","\x14","\x34","\xf3")) return 25;
	if (inName==HX_HCSTRING("EDisplayNew","\xe3","\x9f","\x6b","\x90")) return 26;
	if (inName==HX_HCSTRING("EField","\x35","\xea","\x60","\x2a")) return 3;
	if (inName==HX_HCSTRING("EFor","\xc4","\x37","\xd1","\x2d")) return 13;
	if (inName==HX_HCSTRING("EFunction","\x7d","\xb4","\x15","\xc9")) return 11;
	if (inName==HX_HCSTRING("EIf","\x82","\x9b","\x34","\x00")) return 15;
	if (inName==HX_HCSTRING("EIn","\x8a","\x9b","\x34","\x00")) return 14;
	if (inName==HX_HCSTRING("EMeta","\xaa","\x7d","\xd8","\xed")) return 29;
	if (inName==HX_HCSTRING("ENew","\x1b","\x41","\xd7","\x2d")) return 8;
	if (inName==HX_HCSTRING("EObjectDecl","\x6e","\xb3","\x42","\x77")) return 5;
	if (inName==HX_HCSTRING("EParenthesis","\x91","\xa6","\x1e","\xbf")) return 4;
	if (inName==HX_HCSTRING("EReturn","\xd5","\x1a","\x0b","\x73")) return 19;
	if (inName==HX_HCSTRING("ESwitch","\x19","\xc0","\x56","\x2f")) return 17;
	if (inName==HX_HCSTRING("ETernary","\x56","\xc3","\x5c","\x5e")) return 27;
	if (inName==HX_HCSTRING("EThrow","\xa1","\xb2","\x5d","\x39")) return 23;
	if (inName==HX_HCSTRING("ETry","\xf6","\xd9","\xdb","\x2d")) return 18;
	if (inName==HX_HCSTRING("EUnop","\x9f","\x02","\x29","\xf3")) return 9;
	if (inName==HX_HCSTRING("EUntyped","\xac","\x51","\x46","\x4f")) return 22;
	if (inName==HX_HCSTRING("EVars","\x91","\x5e","\xc8","\xf3")) return 10;
	if (inName==HX_HCSTRING("EWhile","\x2c","\x99","\x8a","\xf3")) return 16;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EArrayDecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EBinop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EBlock,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,ECall,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,ECast,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,ECheckType,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EConst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EDisplay,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EDisplayNew,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EField,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EFor,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EIf,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EIn,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EMeta,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,ENew,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EObjectDecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EParenthesis,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EReturn,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,ESwitch,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,ETernary,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EThrow,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,ETry,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EUnop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EUntyped,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EVars,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EWhile,return)

int ExprDef_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("EArray","\x14","\xc3","\x5c","\x4f")) return 2;
	if (inName==HX_HCSTRING("EArrayDecl","\x9e","\x59","\xbd","\x01")) return 1;
	if (inName==HX_HCSTRING("EBinop","\x23","\x6f","\xcd","\xdc")) return 3;
	if (inName==HX_HCSTRING("EBlock","\xc8","\xca","\xc9","\xde")) return 1;
	if (inName==HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2")) return 0;
	if (inName==HX_HCSTRING("ECall","\x83","\x4b","\x39","\xe7")) return 2;
	if (inName==HX_HCSTRING("ECast","\xa4","\x51","\x39","\xe7")) return 2;
	if (inName==HX_HCSTRING("ECheckType","\x9d","\xea","\xcd","\x16")) return 2;
	if (inName==HX_HCSTRING("EConst","\xde","\x4e","\x2b","\x74")) return 1;
	if (inName==HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6")) return 0;
	if (inName==HX_HCSTRING("EDisplay","\x7d","\x14","\x34","\xf3")) return 2;
	if (inName==HX_HCSTRING("EDisplayNew","\xe3","\x9f","\x6b","\x90")) return 1;
	if (inName==HX_HCSTRING("EField","\x35","\xea","\x60","\x2a")) return 2;
	if (inName==HX_HCSTRING("EFor","\xc4","\x37","\xd1","\x2d")) return 2;
	if (inName==HX_HCSTRING("EFunction","\x7d","\xb4","\x15","\xc9")) return 2;
	if (inName==HX_HCSTRING("EIf","\x82","\x9b","\x34","\x00")) return 3;
	if (inName==HX_HCSTRING("EIn","\x8a","\x9b","\x34","\x00")) return 2;
	if (inName==HX_HCSTRING("EMeta","\xaa","\x7d","\xd8","\xed")) return 2;
	if (inName==HX_HCSTRING("ENew","\x1b","\x41","\xd7","\x2d")) return 2;
	if (inName==HX_HCSTRING("EObjectDecl","\x6e","\xb3","\x42","\x77")) return 1;
	if (inName==HX_HCSTRING("EParenthesis","\x91","\xa6","\x1e","\xbf")) return 1;
	if (inName==HX_HCSTRING("EReturn","\xd5","\x1a","\x0b","\x73")) return 1;
	if (inName==HX_HCSTRING("ESwitch","\x19","\xc0","\x56","\x2f")) return 3;
	if (inName==HX_HCSTRING("ETernary","\x56","\xc3","\x5c","\x5e")) return 3;
	if (inName==HX_HCSTRING("EThrow","\xa1","\xb2","\x5d","\x39")) return 1;
	if (inName==HX_HCSTRING("ETry","\xf6","\xd9","\xdb","\x2d")) return 2;
	if (inName==HX_HCSTRING("EUnop","\x9f","\x02","\x29","\xf3")) return 3;
	if (inName==HX_HCSTRING("EUntyped","\xac","\x51","\x46","\x4f")) return 1;
	if (inName==HX_HCSTRING("EVars","\x91","\x5e","\xc8","\xf3")) return 1;
	if (inName==HX_HCSTRING("EWhile","\x2c","\x99","\x8a","\xf3")) return 3;
	return super::__FindArgCount(inName);
}

Dynamic ExprDef_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("EArray","\x14","\xc3","\x5c","\x4f")) return EArray_dyn();
	if (inName==HX_HCSTRING("EArrayDecl","\x9e","\x59","\xbd","\x01")) return EArrayDecl_dyn();
	if (inName==HX_HCSTRING("EBinop","\x23","\x6f","\xcd","\xdc")) return EBinop_dyn();
	if (inName==HX_HCSTRING("EBlock","\xc8","\xca","\xc9","\xde")) return EBlock_dyn();
	if (inName==HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2")) return EBreak;
	if (inName==HX_HCSTRING("ECall","\x83","\x4b","\x39","\xe7")) return ECall_dyn();
	if (inName==HX_HCSTRING("ECast","\xa4","\x51","\x39","\xe7")) return ECast_dyn();
	if (inName==HX_HCSTRING("ECheckType","\x9d","\xea","\xcd","\x16")) return ECheckType_dyn();
	if (inName==HX_HCSTRING("EConst","\xde","\x4e","\x2b","\x74")) return EConst_dyn();
	if (inName==HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6")) return EContinue;
	if (inName==HX_HCSTRING("EDisplay","\x7d","\x14","\x34","\xf3")) return EDisplay_dyn();
	if (inName==HX_HCSTRING("EDisplayNew","\xe3","\x9f","\x6b","\x90")) return EDisplayNew_dyn();
	if (inName==HX_HCSTRING("EField","\x35","\xea","\x60","\x2a")) return EField_dyn();
	if (inName==HX_HCSTRING("EFor","\xc4","\x37","\xd1","\x2d")) return EFor_dyn();
	if (inName==HX_HCSTRING("EFunction","\x7d","\xb4","\x15","\xc9")) return EFunction_dyn();
	if (inName==HX_HCSTRING("EIf","\x82","\x9b","\x34","\x00")) return EIf_dyn();
	if (inName==HX_HCSTRING("EIn","\x8a","\x9b","\x34","\x00")) return EIn_dyn();
	if (inName==HX_HCSTRING("EMeta","\xaa","\x7d","\xd8","\xed")) return EMeta_dyn();
	if (inName==HX_HCSTRING("ENew","\x1b","\x41","\xd7","\x2d")) return ENew_dyn();
	if (inName==HX_HCSTRING("EObjectDecl","\x6e","\xb3","\x42","\x77")) return EObjectDecl_dyn();
	if (inName==HX_HCSTRING("EParenthesis","\x91","\xa6","\x1e","\xbf")) return EParenthesis_dyn();
	if (inName==HX_HCSTRING("EReturn","\xd5","\x1a","\x0b","\x73")) return EReturn_dyn();
	if (inName==HX_HCSTRING("ESwitch","\x19","\xc0","\x56","\x2f")) return ESwitch_dyn();
	if (inName==HX_HCSTRING("ETernary","\x56","\xc3","\x5c","\x5e")) return ETernary_dyn();
	if (inName==HX_HCSTRING("EThrow","\xa1","\xb2","\x5d","\x39")) return EThrow_dyn();
	if (inName==HX_HCSTRING("ETry","\xf6","\xd9","\xdb","\x2d")) return ETry_dyn();
	if (inName==HX_HCSTRING("EUnop","\x9f","\x02","\x29","\xf3")) return EUnop_dyn();
	if (inName==HX_HCSTRING("EUntyped","\xac","\x51","\x46","\x4f")) return EUntyped_dyn();
	if (inName==HX_HCSTRING("EVars","\x91","\x5e","\xc8","\xf3")) return EVars_dyn();
	if (inName==HX_HCSTRING("EWhile","\x2c","\x99","\x8a","\xf3")) return EWhile_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("EConst","\xde","\x4e","\x2b","\x74"),
	HX_HCSTRING("EArray","\x14","\xc3","\x5c","\x4f"),
	HX_HCSTRING("EBinop","\x23","\x6f","\xcd","\xdc"),
	HX_HCSTRING("EField","\x35","\xea","\x60","\x2a"),
	HX_HCSTRING("EParenthesis","\x91","\xa6","\x1e","\xbf"),
	HX_HCSTRING("EObjectDecl","\x6e","\xb3","\x42","\x77"),
	HX_HCSTRING("EArrayDecl","\x9e","\x59","\xbd","\x01"),
	HX_HCSTRING("ECall","\x83","\x4b","\x39","\xe7"),
	HX_HCSTRING("ENew","\x1b","\x41","\xd7","\x2d"),
	HX_HCSTRING("EUnop","\x9f","\x02","\x29","\xf3"),
	HX_HCSTRING("EVars","\x91","\x5e","\xc8","\xf3"),
	HX_HCSTRING("EFunction","\x7d","\xb4","\x15","\xc9"),
	HX_HCSTRING("EBlock","\xc8","\xca","\xc9","\xde"),
	HX_HCSTRING("EFor","\xc4","\x37","\xd1","\x2d"),
	HX_HCSTRING("EIn","\x8a","\x9b","\x34","\x00"),
	HX_HCSTRING("EIf","\x82","\x9b","\x34","\x00"),
	HX_HCSTRING("EWhile","\x2c","\x99","\x8a","\xf3"),
	HX_HCSTRING("ESwitch","\x19","\xc0","\x56","\x2f"),
	HX_HCSTRING("ETry","\xf6","\xd9","\xdb","\x2d"),
	HX_HCSTRING("EReturn","\xd5","\x1a","\x0b","\x73"),
	HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2"),
	HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6"),
	HX_HCSTRING("EUntyped","\xac","\x51","\x46","\x4f"),
	HX_HCSTRING("EThrow","\xa1","\xb2","\x5d","\x39"),
	HX_HCSTRING("ECast","\xa4","\x51","\x39","\xe7"),
	HX_HCSTRING("EDisplay","\x7d","\x14","\x34","\xf3"),
	HX_HCSTRING("EDisplayNew","\xe3","\x9f","\x6b","\x90"),
	HX_HCSTRING("ETernary","\x56","\xc3","\x5c","\x5e"),
	HX_HCSTRING("ECheckType","\x9d","\xea","\xcd","\x16"),
	HX_HCSTRING("EMeta","\xaa","\x7d","\xd8","\xed"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExprDef_obj::EBreak,"EBreak");
	HX_MARK_MEMBER_NAME(ExprDef_obj::EContinue,"EContinue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExprDef_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ExprDef_obj::EBreak,"EBreak");
	HX_VISIT_MEMBER_NAME(ExprDef_obj::EContinue,"EContinue");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ExprDef_obj::__mClass;

Dynamic __Create_ExprDef_obj() { return new ExprDef_obj; }

void ExprDef_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.ExprDef","\xc6","\x4e","\xed","\x01"), hx::TCanCast< ExprDef_obj >,sStaticFields,sMemberFields,
	&__Create_ExprDef_obj, &__Create,
	&super::__SGetClass(), &CreateExprDef_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ExprDef_obj::__boot()
{
hx::Static(EBreak) = hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2"),20);
hx::Static(EContinue) = hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6"),21);
}


} // end namespace haxe
} // end namespace macro
