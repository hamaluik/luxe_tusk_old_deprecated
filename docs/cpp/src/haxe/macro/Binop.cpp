#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Binop
#include <haxe/macro/Binop.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::Binop Binop_obj::OpAdd;

::haxe::macro::Binop Binop_obj::OpAnd;

::haxe::macro::Binop Binop_obj::OpArrow;

::haxe::macro::Binop Binop_obj::OpAssign;

::haxe::macro::Binop  Binop_obj::OpAssignOp(::haxe::macro::Binop op)
	{ return hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpAssignOp","\x91","\x5f","\x12","\x89"),20,hx::DynamicArray(0,1).Add(op)); }

::haxe::macro::Binop Binop_obj::OpBoolAnd;

::haxe::macro::Binop Binop_obj::OpBoolOr;

::haxe::macro::Binop Binop_obj::OpDiv;

::haxe::macro::Binop Binop_obj::OpEq;

::haxe::macro::Binop Binop_obj::OpGt;

::haxe::macro::Binop Binop_obj::OpGte;

::haxe::macro::Binop Binop_obj::OpInterval;

::haxe::macro::Binop Binop_obj::OpLt;

::haxe::macro::Binop Binop_obj::OpLte;

::haxe::macro::Binop Binop_obj::OpMod;

::haxe::macro::Binop Binop_obj::OpMult;

::haxe::macro::Binop Binop_obj::OpNotEq;

::haxe::macro::Binop Binop_obj::OpOr;

::haxe::macro::Binop Binop_obj::OpShl;

::haxe::macro::Binop Binop_obj::OpShr;

::haxe::macro::Binop Binop_obj::OpSub;

::haxe::macro::Binop Binop_obj::OpUShr;

::haxe::macro::Binop Binop_obj::OpXor;

HX_DEFINE_CREATE_ENUM(Binop_obj)

int Binop_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("OpAdd","\x60","\x63","\xe1","\xc6")) return 0;
	if (inName==HX_HCSTRING("OpAnd","\x16","\x6c","\xe1","\xc6")) return 11;
	if (inName==HX_HCSTRING("OpArrow","\xc8","\xf8","\xd4","\x55")) return 22;
	if (inName==HX_HCSTRING("OpAssign","\x50","\xe6","\x8f","\x58")) return 4;
	if (inName==HX_HCSTRING("OpAssignOp","\x91","\x5f","\x12","\x89")) return 20;
	if (inName==HX_HCSTRING("OpBoolAnd","\x8c","\x21","\xc6","\x69")) return 14;
	if (inName==HX_HCSTRING("OpBoolOr","\x0e","\x48","\xae","\x6e")) return 15;
	if (inName==HX_HCSTRING("OpDiv","\x90","\xae","\xe3","\xc6")) return 2;
	if (inName==HX_HCSTRING("OpEq","\x0d","\x14","\x8d","\x34")) return 5;
	if (inName==HX_HCSTRING("OpGt","\xce","\x15","\x8d","\x34")) return 7;
	if (inName==HX_HCSTRING("OpGte","\xd7","\xfe","\xe5","\xc6")) return 8;
	if (inName==HX_HCSTRING("OpInterval","\xa6","\x23","\xc7","\xa2")) return 21;
	if (inName==HX_HCSTRING("OpLt","\x29","\x1a","\x8d","\x34")) return 9;
	if (inName==HX_HCSTRING("OpLte","\x1c","\xca","\xe9","\xc6")) return 10;
	if (inName==HX_HCSTRING("OpMod","\x01","\x88","\xea","\xc6")) return 19;
	if (inName==HX_HCSTRING("OpMult","\xd1","\x0d","\x51","\x46")) return 1;
	if (inName==HX_HCSTRING("OpNotEq","\x5e","\x3f","\x10","\xd0")) return 6;
	if (inName==HX_HCSTRING("OpOr","\xc4","\x1c","\x8d","\x34")) return 12;
	if (inName==HX_HCSTRING("OpShl","\x76","\x0f","\xef","\xc6")) return 16;
	if (inName==HX_HCSTRING("OpShr","\x7c","\x0f","\xef","\xc6")) return 17;
	if (inName==HX_HCSTRING("OpSub","\xbf","\x1a","\xef","\xc6")) return 3;
	if (inName==HX_HCSTRING("OpUShr","\xa9","\xf2","\x80","\x4b")) return 18;
	if (inName==HX_HCSTRING("OpXor","\xda","\xe0","\xf2","\xc6")) return 13;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Binop_obj,OpAssignOp,return)

int Binop_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("OpAdd","\x60","\x63","\xe1","\xc6")) return 0;
	if (inName==HX_HCSTRING("OpAnd","\x16","\x6c","\xe1","\xc6")) return 0;
	if (inName==HX_HCSTRING("OpArrow","\xc8","\xf8","\xd4","\x55")) return 0;
	if (inName==HX_HCSTRING("OpAssign","\x50","\xe6","\x8f","\x58")) return 0;
	if (inName==HX_HCSTRING("OpAssignOp","\x91","\x5f","\x12","\x89")) return 1;
	if (inName==HX_HCSTRING("OpBoolAnd","\x8c","\x21","\xc6","\x69")) return 0;
	if (inName==HX_HCSTRING("OpBoolOr","\x0e","\x48","\xae","\x6e")) return 0;
	if (inName==HX_HCSTRING("OpDiv","\x90","\xae","\xe3","\xc6")) return 0;
	if (inName==HX_HCSTRING("OpEq","\x0d","\x14","\x8d","\x34")) return 0;
	if (inName==HX_HCSTRING("OpGt","\xce","\x15","\x8d","\x34")) return 0;
	if (inName==HX_HCSTRING("OpGte","\xd7","\xfe","\xe5","\xc6")) return 0;
	if (inName==HX_HCSTRING("OpInterval","\xa6","\x23","\xc7","\xa2")) return 0;
	if (inName==HX_HCSTRING("OpLt","\x29","\x1a","\x8d","\x34")) return 0;
	if (inName==HX_HCSTRING("OpLte","\x1c","\xca","\xe9","\xc6")) return 0;
	if (inName==HX_HCSTRING("OpMod","\x01","\x88","\xea","\xc6")) return 0;
	if (inName==HX_HCSTRING("OpMult","\xd1","\x0d","\x51","\x46")) return 0;
	if (inName==HX_HCSTRING("OpNotEq","\x5e","\x3f","\x10","\xd0")) return 0;
	if (inName==HX_HCSTRING("OpOr","\xc4","\x1c","\x8d","\x34")) return 0;
	if (inName==HX_HCSTRING("OpShl","\x76","\x0f","\xef","\xc6")) return 0;
	if (inName==HX_HCSTRING("OpShr","\x7c","\x0f","\xef","\xc6")) return 0;
	if (inName==HX_HCSTRING("OpSub","\xbf","\x1a","\xef","\xc6")) return 0;
	if (inName==HX_HCSTRING("OpUShr","\xa9","\xf2","\x80","\x4b")) return 0;
	if (inName==HX_HCSTRING("OpXor","\xda","\xe0","\xf2","\xc6")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Binop_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("OpAdd","\x60","\x63","\xe1","\xc6")) return OpAdd;
	if (inName==HX_HCSTRING("OpAnd","\x16","\x6c","\xe1","\xc6")) return OpAnd;
	if (inName==HX_HCSTRING("OpArrow","\xc8","\xf8","\xd4","\x55")) return OpArrow;
	if (inName==HX_HCSTRING("OpAssign","\x50","\xe6","\x8f","\x58")) return OpAssign;
	if (inName==HX_HCSTRING("OpAssignOp","\x91","\x5f","\x12","\x89")) return OpAssignOp_dyn();
	if (inName==HX_HCSTRING("OpBoolAnd","\x8c","\x21","\xc6","\x69")) return OpBoolAnd;
	if (inName==HX_HCSTRING("OpBoolOr","\x0e","\x48","\xae","\x6e")) return OpBoolOr;
	if (inName==HX_HCSTRING("OpDiv","\x90","\xae","\xe3","\xc6")) return OpDiv;
	if (inName==HX_HCSTRING("OpEq","\x0d","\x14","\x8d","\x34")) return OpEq;
	if (inName==HX_HCSTRING("OpGt","\xce","\x15","\x8d","\x34")) return OpGt;
	if (inName==HX_HCSTRING("OpGte","\xd7","\xfe","\xe5","\xc6")) return OpGte;
	if (inName==HX_HCSTRING("OpInterval","\xa6","\x23","\xc7","\xa2")) return OpInterval;
	if (inName==HX_HCSTRING("OpLt","\x29","\x1a","\x8d","\x34")) return OpLt;
	if (inName==HX_HCSTRING("OpLte","\x1c","\xca","\xe9","\xc6")) return OpLte;
	if (inName==HX_HCSTRING("OpMod","\x01","\x88","\xea","\xc6")) return OpMod;
	if (inName==HX_HCSTRING("OpMult","\xd1","\x0d","\x51","\x46")) return OpMult;
	if (inName==HX_HCSTRING("OpNotEq","\x5e","\x3f","\x10","\xd0")) return OpNotEq;
	if (inName==HX_HCSTRING("OpOr","\xc4","\x1c","\x8d","\x34")) return OpOr;
	if (inName==HX_HCSTRING("OpShl","\x76","\x0f","\xef","\xc6")) return OpShl;
	if (inName==HX_HCSTRING("OpShr","\x7c","\x0f","\xef","\xc6")) return OpShr;
	if (inName==HX_HCSTRING("OpSub","\xbf","\x1a","\xef","\xc6")) return OpSub;
	if (inName==HX_HCSTRING("OpUShr","\xa9","\xf2","\x80","\x4b")) return OpUShr;
	if (inName==HX_HCSTRING("OpXor","\xda","\xe0","\xf2","\xc6")) return OpXor;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("OpAdd","\x60","\x63","\xe1","\xc6"),
	HX_HCSTRING("OpMult","\xd1","\x0d","\x51","\x46"),
	HX_HCSTRING("OpDiv","\x90","\xae","\xe3","\xc6"),
	HX_HCSTRING("OpSub","\xbf","\x1a","\xef","\xc6"),
	HX_HCSTRING("OpAssign","\x50","\xe6","\x8f","\x58"),
	HX_HCSTRING("OpEq","\x0d","\x14","\x8d","\x34"),
	HX_HCSTRING("OpNotEq","\x5e","\x3f","\x10","\xd0"),
	HX_HCSTRING("OpGt","\xce","\x15","\x8d","\x34"),
	HX_HCSTRING("OpGte","\xd7","\xfe","\xe5","\xc6"),
	HX_HCSTRING("OpLt","\x29","\x1a","\x8d","\x34"),
	HX_HCSTRING("OpLte","\x1c","\xca","\xe9","\xc6"),
	HX_HCSTRING("OpAnd","\x16","\x6c","\xe1","\xc6"),
	HX_HCSTRING("OpOr","\xc4","\x1c","\x8d","\x34"),
	HX_HCSTRING("OpXor","\xda","\xe0","\xf2","\xc6"),
	HX_HCSTRING("OpBoolAnd","\x8c","\x21","\xc6","\x69"),
	HX_HCSTRING("OpBoolOr","\x0e","\x48","\xae","\x6e"),
	HX_HCSTRING("OpShl","\x76","\x0f","\xef","\xc6"),
	HX_HCSTRING("OpShr","\x7c","\x0f","\xef","\xc6"),
	HX_HCSTRING("OpUShr","\xa9","\xf2","\x80","\x4b"),
	HX_HCSTRING("OpMod","\x01","\x88","\xea","\xc6"),
	HX_HCSTRING("OpAssignOp","\x91","\x5f","\x12","\x89"),
	HX_HCSTRING("OpInterval","\xa6","\x23","\xc7","\xa2"),
	HX_HCSTRING("OpArrow","\xc8","\xf8","\xd4","\x55"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Binop_obj::OpAdd,"OpAdd");
	HX_MARK_MEMBER_NAME(Binop_obj::OpAnd,"OpAnd");
	HX_MARK_MEMBER_NAME(Binop_obj::OpArrow,"OpArrow");
	HX_MARK_MEMBER_NAME(Binop_obj::OpAssign,"OpAssign");
	HX_MARK_MEMBER_NAME(Binop_obj::OpBoolAnd,"OpBoolAnd");
	HX_MARK_MEMBER_NAME(Binop_obj::OpBoolOr,"OpBoolOr");
	HX_MARK_MEMBER_NAME(Binop_obj::OpDiv,"OpDiv");
	HX_MARK_MEMBER_NAME(Binop_obj::OpEq,"OpEq");
	HX_MARK_MEMBER_NAME(Binop_obj::OpGt,"OpGt");
	HX_MARK_MEMBER_NAME(Binop_obj::OpGte,"OpGte");
	HX_MARK_MEMBER_NAME(Binop_obj::OpInterval,"OpInterval");
	HX_MARK_MEMBER_NAME(Binop_obj::OpLt,"OpLt");
	HX_MARK_MEMBER_NAME(Binop_obj::OpLte,"OpLte");
	HX_MARK_MEMBER_NAME(Binop_obj::OpMod,"OpMod");
	HX_MARK_MEMBER_NAME(Binop_obj::OpMult,"OpMult");
	HX_MARK_MEMBER_NAME(Binop_obj::OpNotEq,"OpNotEq");
	HX_MARK_MEMBER_NAME(Binop_obj::OpOr,"OpOr");
	HX_MARK_MEMBER_NAME(Binop_obj::OpShl,"OpShl");
	HX_MARK_MEMBER_NAME(Binop_obj::OpShr,"OpShr");
	HX_MARK_MEMBER_NAME(Binop_obj::OpSub,"OpSub");
	HX_MARK_MEMBER_NAME(Binop_obj::OpUShr,"OpUShr");
	HX_MARK_MEMBER_NAME(Binop_obj::OpXor,"OpXor");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Binop_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpAdd,"OpAdd");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpAnd,"OpAnd");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpArrow,"OpArrow");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpAssign,"OpAssign");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpBoolAnd,"OpBoolAnd");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpBoolOr,"OpBoolOr");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpDiv,"OpDiv");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpEq,"OpEq");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpGt,"OpGt");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpGte,"OpGte");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpInterval,"OpInterval");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpLt,"OpLt");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpLte,"OpLte");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpMod,"OpMod");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpMult,"OpMult");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpNotEq,"OpNotEq");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpOr,"OpOr");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpShl,"OpShl");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpShr,"OpShr");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpSub,"OpSub");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpUShr,"OpUShr");
	HX_VISIT_MEMBER_NAME(Binop_obj::OpXor,"OpXor");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Binop_obj::__mClass;

Dynamic __Create_Binop_obj() { return new Binop_obj; }

void Binop_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.Binop","\x5e","\xab","\xa2","\x6e"), hx::TCanCast< Binop_obj >,sStaticFields,sMemberFields,
	&__Create_Binop_obj, &__Create,
	&super::__SGetClass(), &CreateBinop_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Binop_obj::__boot()
{
hx::Static(OpAdd) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpAdd","\x60","\x63","\xe1","\xc6"),0);
hx::Static(OpAnd) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpAnd","\x16","\x6c","\xe1","\xc6"),11);
hx::Static(OpArrow) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpArrow","\xc8","\xf8","\xd4","\x55"),22);
hx::Static(OpAssign) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpAssign","\x50","\xe6","\x8f","\x58"),4);
hx::Static(OpBoolAnd) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpBoolAnd","\x8c","\x21","\xc6","\x69"),14);
hx::Static(OpBoolOr) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpBoolOr","\x0e","\x48","\xae","\x6e"),15);
hx::Static(OpDiv) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpDiv","\x90","\xae","\xe3","\xc6"),2);
hx::Static(OpEq) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpEq","\x0d","\x14","\x8d","\x34"),5);
hx::Static(OpGt) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpGt","\xce","\x15","\x8d","\x34"),7);
hx::Static(OpGte) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpGte","\xd7","\xfe","\xe5","\xc6"),8);
hx::Static(OpInterval) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpInterval","\xa6","\x23","\xc7","\xa2"),21);
hx::Static(OpLt) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpLt","\x29","\x1a","\x8d","\x34"),9);
hx::Static(OpLte) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpLte","\x1c","\xca","\xe9","\xc6"),10);
hx::Static(OpMod) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpMod","\x01","\x88","\xea","\xc6"),19);
hx::Static(OpMult) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpMult","\xd1","\x0d","\x51","\x46"),1);
hx::Static(OpNotEq) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpNotEq","\x5e","\x3f","\x10","\xd0"),6);
hx::Static(OpOr) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpOr","\xc4","\x1c","\x8d","\x34"),12);
hx::Static(OpShl) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpShl","\x76","\x0f","\xef","\xc6"),16);
hx::Static(OpShr) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpShr","\x7c","\x0f","\xef","\xc6"),17);
hx::Static(OpSub) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpSub","\xbf","\x1a","\xef","\xc6"),3);
hx::Static(OpUShr) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpUShr","\xa9","\xf2","\x80","\x4b"),18);
hx::Static(OpXor) = hx::CreateEnum< Binop_obj >(HX_HCSTRING("OpXor","\xda","\xe0","\xf2","\xc6"),13);
}


} // end namespace haxe
} // end namespace macro
