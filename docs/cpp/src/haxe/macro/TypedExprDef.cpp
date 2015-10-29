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
#ifndef INCLUDED_haxe_macro_Unop
#include <haxe/macro/Unop.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::TypedExprDef  TypedExprDef_obj::TArray(Dynamic e1,Dynamic e2)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TArray","\xa5","\x2c","\xb7","\x4e"),2,hx::DynamicArray(0,2).Add(e1).Add(e2)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TArrayDecl(cpp::ArrayBase el)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TArrayDecl","\xaf","\x5f","\x1a","\x46"),8,hx::DynamicArray(0,1).Add(el)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TBinop(::haxe::macro::Binop op,Dynamic e1,Dynamic e2)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TBinop","\xb4","\xd8","\x27","\xdc"),3,hx::DynamicArray(0,3).Add(op).Add(e1).Add(e2)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TBlock(cpp::ArrayBase el)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TBlock","\x59","\x34","\x24","\xde"),14,hx::DynamicArray(0,1).Add(el)); }

::haxe::macro::TypedExprDef TypedExprDef_obj::TBreak;

::haxe::macro::TypedExprDef  TypedExprDef_obj::TCall(Dynamic e,cpp::ArrayBase el)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TCall","\x12","\xff","\x3b","\x8a"),9,hx::DynamicArray(0,2).Add(e).Add(el)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TCast(Dynamic e,::haxe::macro::ModuleType m)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TCast","\x33","\x05","\x3c","\x8a"),24,hx::DynamicArray(0,2).Add(e).Add(m)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TConst(::haxe::macro::TConstant c)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TConst","\x6f","\xb8","\x85","\x73"),0,hx::DynamicArray(0,1).Add(c)); }

::haxe::macro::TypedExprDef TypedExprDef_obj::TContinue;

::haxe::macro::TypedExprDef  TypedExprDef_obj::TEnumParameter(Dynamic e1,Dynamic ef,int index)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TEnumParameter","\x74","\x6d","\xe1","\x9d"),26,hx::DynamicArray(0,3).Add(e1).Add(ef).Add(index)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TField(Dynamic e,::haxe::macro::FieldAccess fa)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TField","\xc6","\x53","\xbb","\x29"),4,hx::DynamicArray(0,2).Add(e).Add(fa)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TFor(Dynamic v,Dynamic e1,Dynamic e2)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TFor","\x15","\x6b","\xbb","\x37"),15,hx::DynamicArray(0,3).Add(v).Add(e1).Add(e2)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TFunction(Dynamic tfunc)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TFunction","\x8c","\xdb","\x3a","\x25"),12,hx::DynamicArray(0,1).Add(tfunc)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TIf(Dynamic econd,Dynamic eif,Dynamic eelse)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TIf","\x51","\xfd","\x3f","\x00"),16,hx::DynamicArray(0,3).Add(econd).Add(eif).Add(eelse)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TLocal(Dynamic v)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TLocal","\x77","\x88","\x18","\xa2"),1,hx::DynamicArray(0,1).Add(v)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TMeta(Dynamic m,Dynamic e1)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TMeta","\x39","\x31","\xdb","\x90"),25,hx::DynamicArray(0,2).Add(m).Add(e1)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TNew(Dynamic c,Array< ::Dynamic > params,cpp::ArrayBase el)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TNew","\x6c","\x74","\xc1","\x37"),10,hx::DynamicArray(0,3).Add(c).Add(params).Add(el)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TObjectDecl(cpp::ArrayBase fields)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TObjectDecl","\x3d","\xfc","\x4a","\x04"),7,hx::DynamicArray(0,1).Add(fields)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TParenthesis(Dynamic e)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TParenthesis","\xe2","\x12","\x56","\x99"),6,hx::DynamicArray(0,1).Add(e)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TReturn(Dynamic e)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TReturn","\x24","\x10","\xcd","\xe2"),20,hx::DynamicArray(0,1).Add(e)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TSwitch(Dynamic e,cpp::ArrayBase cases,Dynamic edef)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TSwitch","\x68","\xb5","\x18","\x9f"),18,hx::DynamicArray(0,3).Add(e).Add(cases).Add(edef)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TThrow(Dynamic e)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TThrow","\x32","\x1c","\xb8","\x38"),23,hx::DynamicArray(0,1).Add(e)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TTry(Dynamic e,cpp::ArrayBase catches)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TTry","\x47","\x0d","\xc6","\x37"),19,hx::DynamicArray(0,2).Add(e).Add(catches)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TTypeExpr(::haxe::macro::ModuleType m)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TTypeExpr","\x83","\x31","\xd1","\xc0"),5,hx::DynamicArray(0,1).Add(m)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TUnop(::haxe::macro::Unop op,bool postFix,Dynamic e)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TUnop","\x2e","\xb6","\x2b","\x96"),11,hx::DynamicArray(0,3).Add(op).Add(postFix).Add(e)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TVar(Dynamic v,Dynamic expr)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TVar","\xf3","\x82","\xc7","\x37"),13,hx::DynamicArray(0,2).Add(v).Add(expr)); }

::haxe::macro::TypedExprDef  TypedExprDef_obj::TWhile(Dynamic econd,Dynamic e,bool normalWhile)
	{ return hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TWhile","\xbd","\x02","\xe5","\xf2"),17,hx::DynamicArray(0,3).Add(econd).Add(e).Add(normalWhile)); }

HX_DEFINE_CREATE_ENUM(TypedExprDef_obj)

int TypedExprDef_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("TArray","\xa5","\x2c","\xb7","\x4e")) return 2;
	if (inName==HX_HCSTRING("TArrayDecl","\xaf","\x5f","\x1a","\x46")) return 8;
	if (inName==HX_HCSTRING("TBinop","\xb4","\xd8","\x27","\xdc")) return 3;
	if (inName==HX_HCSTRING("TBlock","\x59","\x34","\x24","\xde")) return 14;
	if (inName==HX_HCSTRING("TBreak","\xcb","\xe3","\x13","\xe2")) return 21;
	if (inName==HX_HCSTRING("TCall","\x12","\xff","\x3b","\x8a")) return 9;
	if (inName==HX_HCSTRING("TCast","\x33","\x05","\x3c","\x8a")) return 24;
	if (inName==HX_HCSTRING("TConst","\x6f","\xb8","\x85","\x73")) return 0;
	if (inName==HX_HCSTRING("TContinue","\xdb","\x10","\xb1","\x42")) return 22;
	if (inName==HX_HCSTRING("TEnumParameter","\x74","\x6d","\xe1","\x9d")) return 26;
	if (inName==HX_HCSTRING("TField","\xc6","\x53","\xbb","\x29")) return 4;
	if (inName==HX_HCSTRING("TFor","\x15","\x6b","\xbb","\x37")) return 15;
	if (inName==HX_HCSTRING("TFunction","\x8c","\xdb","\x3a","\x25")) return 12;
	if (inName==HX_HCSTRING("TIf","\x51","\xfd","\x3f","\x00")) return 16;
	if (inName==HX_HCSTRING("TLocal","\x77","\x88","\x18","\xa2")) return 1;
	if (inName==HX_HCSTRING("TMeta","\x39","\x31","\xdb","\x90")) return 25;
	if (inName==HX_HCSTRING("TNew","\x6c","\x74","\xc1","\x37")) return 10;
	if (inName==HX_HCSTRING("TObjectDecl","\x3d","\xfc","\x4a","\x04")) return 7;
	if (inName==HX_HCSTRING("TParenthesis","\xe2","\x12","\x56","\x99")) return 6;
	if (inName==HX_HCSTRING("TReturn","\x24","\x10","\xcd","\xe2")) return 20;
	if (inName==HX_HCSTRING("TSwitch","\x68","\xb5","\x18","\x9f")) return 18;
	if (inName==HX_HCSTRING("TThrow","\x32","\x1c","\xb8","\x38")) return 23;
	if (inName==HX_HCSTRING("TTry","\x47","\x0d","\xc6","\x37")) return 19;
	if (inName==HX_HCSTRING("TTypeExpr","\x83","\x31","\xd1","\xc0")) return 5;
	if (inName==HX_HCSTRING("TUnop","\x2e","\xb6","\x2b","\x96")) return 11;
	if (inName==HX_HCSTRING("TVar","\xf3","\x82","\xc7","\x37")) return 13;
	if (inName==HX_HCSTRING("TWhile","\xbd","\x02","\xe5","\xf2")) return 17;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypedExprDef_obj,TArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypedExprDef_obj,TArrayDecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypedExprDef_obj,TBinop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypedExprDef_obj,TBlock,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypedExprDef_obj,TCall,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypedExprDef_obj,TCast,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypedExprDef_obj,TConst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypedExprDef_obj,TEnumParameter,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypedExprDef_obj,TField,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypedExprDef_obj,TFor,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypedExprDef_obj,TFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypedExprDef_obj,TIf,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypedExprDef_obj,TLocal,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypedExprDef_obj,TMeta,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypedExprDef_obj,TNew,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypedExprDef_obj,TObjectDecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypedExprDef_obj,TParenthesis,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypedExprDef_obj,TReturn,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypedExprDef_obj,TSwitch,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypedExprDef_obj,TThrow,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypedExprDef_obj,TTry,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypedExprDef_obj,TTypeExpr,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypedExprDef_obj,TUnop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypedExprDef_obj,TVar,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypedExprDef_obj,TWhile,return)

int TypedExprDef_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("TArray","\xa5","\x2c","\xb7","\x4e")) return 2;
	if (inName==HX_HCSTRING("TArrayDecl","\xaf","\x5f","\x1a","\x46")) return 1;
	if (inName==HX_HCSTRING("TBinop","\xb4","\xd8","\x27","\xdc")) return 3;
	if (inName==HX_HCSTRING("TBlock","\x59","\x34","\x24","\xde")) return 1;
	if (inName==HX_HCSTRING("TBreak","\xcb","\xe3","\x13","\xe2")) return 0;
	if (inName==HX_HCSTRING("TCall","\x12","\xff","\x3b","\x8a")) return 2;
	if (inName==HX_HCSTRING("TCast","\x33","\x05","\x3c","\x8a")) return 2;
	if (inName==HX_HCSTRING("TConst","\x6f","\xb8","\x85","\x73")) return 1;
	if (inName==HX_HCSTRING("TContinue","\xdb","\x10","\xb1","\x42")) return 0;
	if (inName==HX_HCSTRING("TEnumParameter","\x74","\x6d","\xe1","\x9d")) return 3;
	if (inName==HX_HCSTRING("TField","\xc6","\x53","\xbb","\x29")) return 2;
	if (inName==HX_HCSTRING("TFor","\x15","\x6b","\xbb","\x37")) return 3;
	if (inName==HX_HCSTRING("TFunction","\x8c","\xdb","\x3a","\x25")) return 1;
	if (inName==HX_HCSTRING("TIf","\x51","\xfd","\x3f","\x00")) return 3;
	if (inName==HX_HCSTRING("TLocal","\x77","\x88","\x18","\xa2")) return 1;
	if (inName==HX_HCSTRING("TMeta","\x39","\x31","\xdb","\x90")) return 2;
	if (inName==HX_HCSTRING("TNew","\x6c","\x74","\xc1","\x37")) return 3;
	if (inName==HX_HCSTRING("TObjectDecl","\x3d","\xfc","\x4a","\x04")) return 1;
	if (inName==HX_HCSTRING("TParenthesis","\xe2","\x12","\x56","\x99")) return 1;
	if (inName==HX_HCSTRING("TReturn","\x24","\x10","\xcd","\xe2")) return 1;
	if (inName==HX_HCSTRING("TSwitch","\x68","\xb5","\x18","\x9f")) return 3;
	if (inName==HX_HCSTRING("TThrow","\x32","\x1c","\xb8","\x38")) return 1;
	if (inName==HX_HCSTRING("TTry","\x47","\x0d","\xc6","\x37")) return 2;
	if (inName==HX_HCSTRING("TTypeExpr","\x83","\x31","\xd1","\xc0")) return 1;
	if (inName==HX_HCSTRING("TUnop","\x2e","\xb6","\x2b","\x96")) return 3;
	if (inName==HX_HCSTRING("TVar","\xf3","\x82","\xc7","\x37")) return 2;
	if (inName==HX_HCSTRING("TWhile","\xbd","\x02","\xe5","\xf2")) return 3;
	return super::__FindArgCount(inName);
}

Dynamic TypedExprDef_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("TArray","\xa5","\x2c","\xb7","\x4e")) return TArray_dyn();
	if (inName==HX_HCSTRING("TArrayDecl","\xaf","\x5f","\x1a","\x46")) return TArrayDecl_dyn();
	if (inName==HX_HCSTRING("TBinop","\xb4","\xd8","\x27","\xdc")) return TBinop_dyn();
	if (inName==HX_HCSTRING("TBlock","\x59","\x34","\x24","\xde")) return TBlock_dyn();
	if (inName==HX_HCSTRING("TBreak","\xcb","\xe3","\x13","\xe2")) return TBreak;
	if (inName==HX_HCSTRING("TCall","\x12","\xff","\x3b","\x8a")) return TCall_dyn();
	if (inName==HX_HCSTRING("TCast","\x33","\x05","\x3c","\x8a")) return TCast_dyn();
	if (inName==HX_HCSTRING("TConst","\x6f","\xb8","\x85","\x73")) return TConst_dyn();
	if (inName==HX_HCSTRING("TContinue","\xdb","\x10","\xb1","\x42")) return TContinue;
	if (inName==HX_HCSTRING("TEnumParameter","\x74","\x6d","\xe1","\x9d")) return TEnumParameter_dyn();
	if (inName==HX_HCSTRING("TField","\xc6","\x53","\xbb","\x29")) return TField_dyn();
	if (inName==HX_HCSTRING("TFor","\x15","\x6b","\xbb","\x37")) return TFor_dyn();
	if (inName==HX_HCSTRING("TFunction","\x8c","\xdb","\x3a","\x25")) return TFunction_dyn();
	if (inName==HX_HCSTRING("TIf","\x51","\xfd","\x3f","\x00")) return TIf_dyn();
	if (inName==HX_HCSTRING("TLocal","\x77","\x88","\x18","\xa2")) return TLocal_dyn();
	if (inName==HX_HCSTRING("TMeta","\x39","\x31","\xdb","\x90")) return TMeta_dyn();
	if (inName==HX_HCSTRING("TNew","\x6c","\x74","\xc1","\x37")) return TNew_dyn();
	if (inName==HX_HCSTRING("TObjectDecl","\x3d","\xfc","\x4a","\x04")) return TObjectDecl_dyn();
	if (inName==HX_HCSTRING("TParenthesis","\xe2","\x12","\x56","\x99")) return TParenthesis_dyn();
	if (inName==HX_HCSTRING("TReturn","\x24","\x10","\xcd","\xe2")) return TReturn_dyn();
	if (inName==HX_HCSTRING("TSwitch","\x68","\xb5","\x18","\x9f")) return TSwitch_dyn();
	if (inName==HX_HCSTRING("TThrow","\x32","\x1c","\xb8","\x38")) return TThrow_dyn();
	if (inName==HX_HCSTRING("TTry","\x47","\x0d","\xc6","\x37")) return TTry_dyn();
	if (inName==HX_HCSTRING("TTypeExpr","\x83","\x31","\xd1","\xc0")) return TTypeExpr_dyn();
	if (inName==HX_HCSTRING("TUnop","\x2e","\xb6","\x2b","\x96")) return TUnop_dyn();
	if (inName==HX_HCSTRING("TVar","\xf3","\x82","\xc7","\x37")) return TVar_dyn();
	if (inName==HX_HCSTRING("TWhile","\xbd","\x02","\xe5","\xf2")) return TWhile_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("TConst","\x6f","\xb8","\x85","\x73"),
	HX_HCSTRING("TLocal","\x77","\x88","\x18","\xa2"),
	HX_HCSTRING("TArray","\xa5","\x2c","\xb7","\x4e"),
	HX_HCSTRING("TBinop","\xb4","\xd8","\x27","\xdc"),
	HX_HCSTRING("TField","\xc6","\x53","\xbb","\x29"),
	HX_HCSTRING("TTypeExpr","\x83","\x31","\xd1","\xc0"),
	HX_HCSTRING("TParenthesis","\xe2","\x12","\x56","\x99"),
	HX_HCSTRING("TObjectDecl","\x3d","\xfc","\x4a","\x04"),
	HX_HCSTRING("TArrayDecl","\xaf","\x5f","\x1a","\x46"),
	HX_HCSTRING("TCall","\x12","\xff","\x3b","\x8a"),
	HX_HCSTRING("TNew","\x6c","\x74","\xc1","\x37"),
	HX_HCSTRING("TUnop","\x2e","\xb6","\x2b","\x96"),
	HX_HCSTRING("TFunction","\x8c","\xdb","\x3a","\x25"),
	HX_HCSTRING("TVar","\xf3","\x82","\xc7","\x37"),
	HX_HCSTRING("TBlock","\x59","\x34","\x24","\xde"),
	HX_HCSTRING("TFor","\x15","\x6b","\xbb","\x37"),
	HX_HCSTRING("TIf","\x51","\xfd","\x3f","\x00"),
	HX_HCSTRING("TWhile","\xbd","\x02","\xe5","\xf2"),
	HX_HCSTRING("TSwitch","\x68","\xb5","\x18","\x9f"),
	HX_HCSTRING("TTry","\x47","\x0d","\xc6","\x37"),
	HX_HCSTRING("TReturn","\x24","\x10","\xcd","\xe2"),
	HX_HCSTRING("TBreak","\xcb","\xe3","\x13","\xe2"),
	HX_HCSTRING("TContinue","\xdb","\x10","\xb1","\x42"),
	HX_HCSTRING("TThrow","\x32","\x1c","\xb8","\x38"),
	HX_HCSTRING("TCast","\x33","\x05","\x3c","\x8a"),
	HX_HCSTRING("TMeta","\x39","\x31","\xdb","\x90"),
	HX_HCSTRING("TEnumParameter","\x74","\x6d","\xe1","\x9d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypedExprDef_obj::TBreak,"TBreak");
	HX_MARK_MEMBER_NAME(TypedExprDef_obj::TContinue,"TContinue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypedExprDef_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TypedExprDef_obj::TBreak,"TBreak");
	HX_VISIT_MEMBER_NAME(TypedExprDef_obj::TContinue,"TContinue");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TypedExprDef_obj::__mClass;

Dynamic __Create_TypedExprDef_obj() { return new TypedExprDef_obj; }

void TypedExprDef_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.TypedExprDef","\x50","\x0d","\x10","\x77"), hx::TCanCast< TypedExprDef_obj >,sStaticFields,sMemberFields,
	&__Create_TypedExprDef_obj, &__Create,
	&super::__SGetClass(), &CreateTypedExprDef_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TypedExprDef_obj::__boot()
{
hx::Static(TBreak) = hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TBreak","\xcb","\xe3","\x13","\xe2"),21);
hx::Static(TContinue) = hx::CreateEnum< TypedExprDef_obj >(HX_HCSTRING("TContinue","\xdb","\x10","\xb1","\x42"),22);
}


} // end namespace haxe
} // end namespace macro
