#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Unop
#include <haxe/macro/Unop.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::Unop Unop_obj::OpDecrement;

::haxe::macro::Unop Unop_obj::OpIncrement;

::haxe::macro::Unop Unop_obj::OpNeg;

::haxe::macro::Unop Unop_obj::OpNegBits;

::haxe::macro::Unop Unop_obj::OpNot;

HX_DEFINE_CREATE_ENUM(Unop_obj)

int Unop_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("OpDecrement","\x92","\x60","\x8c","\x97")) return 1;
	if (inName==HX_HCSTRING("OpIncrement","\xae","\x70","\x09","\xb9")) return 0;
	if (inName==HX_HCSTRING("OpNeg","\x8f","\x41","\xeb","\xc6")) return 3;
	if (inName==HX_HCSTRING("OpNegBits","\x35","\xdc","\x5c","\xa6")) return 4;
	if (inName==HX_HCSTRING("OpNot","\x52","\x4a","\xeb","\xc6")) return 2;
	return super::__FindIndex(inName);
}

int Unop_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("OpDecrement","\x92","\x60","\x8c","\x97")) return 0;
	if (inName==HX_HCSTRING("OpIncrement","\xae","\x70","\x09","\xb9")) return 0;
	if (inName==HX_HCSTRING("OpNeg","\x8f","\x41","\xeb","\xc6")) return 0;
	if (inName==HX_HCSTRING("OpNegBits","\x35","\xdc","\x5c","\xa6")) return 0;
	if (inName==HX_HCSTRING("OpNot","\x52","\x4a","\xeb","\xc6")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Unop_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("OpDecrement","\x92","\x60","\x8c","\x97")) return OpDecrement;
	if (inName==HX_HCSTRING("OpIncrement","\xae","\x70","\x09","\xb9")) return OpIncrement;
	if (inName==HX_HCSTRING("OpNeg","\x8f","\x41","\xeb","\xc6")) return OpNeg;
	if (inName==HX_HCSTRING("OpNegBits","\x35","\xdc","\x5c","\xa6")) return OpNegBits;
	if (inName==HX_HCSTRING("OpNot","\x52","\x4a","\xeb","\xc6")) return OpNot;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("OpIncrement","\xae","\x70","\x09","\xb9"),
	HX_HCSTRING("OpDecrement","\x92","\x60","\x8c","\x97"),
	HX_HCSTRING("OpNot","\x52","\x4a","\xeb","\xc6"),
	HX_HCSTRING("OpNeg","\x8f","\x41","\xeb","\xc6"),
	HX_HCSTRING("OpNegBits","\x35","\xdc","\x5c","\xa6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Unop_obj::OpDecrement,"OpDecrement");
	HX_MARK_MEMBER_NAME(Unop_obj::OpIncrement,"OpIncrement");
	HX_MARK_MEMBER_NAME(Unop_obj::OpNeg,"OpNeg");
	HX_MARK_MEMBER_NAME(Unop_obj::OpNegBits,"OpNegBits");
	HX_MARK_MEMBER_NAME(Unop_obj::OpNot,"OpNot");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Unop_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Unop_obj::OpDecrement,"OpDecrement");
	HX_VISIT_MEMBER_NAME(Unop_obj::OpIncrement,"OpIncrement");
	HX_VISIT_MEMBER_NAME(Unop_obj::OpNeg,"OpNeg");
	HX_VISIT_MEMBER_NAME(Unop_obj::OpNegBits,"OpNegBits");
	HX_VISIT_MEMBER_NAME(Unop_obj::OpNot,"OpNot");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Unop_obj::__mClass;

Dynamic __Create_Unop_obj() { return new Unop_obj; }

void Unop_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.Unop","\xc4","\x66","\x6b","\x9b"), hx::TCanCast< Unop_obj >,sStaticFields,sMemberFields,
	&__Create_Unop_obj, &__Create,
	&super::__SGetClass(), &CreateUnop_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Unop_obj::__boot()
{
hx::Static(OpDecrement) = hx::CreateEnum< Unop_obj >(HX_HCSTRING("OpDecrement","\x92","\x60","\x8c","\x97"),1);
hx::Static(OpIncrement) = hx::CreateEnum< Unop_obj >(HX_HCSTRING("OpIncrement","\xae","\x70","\x09","\xb9"),0);
hx::Static(OpNeg) = hx::CreateEnum< Unop_obj >(HX_HCSTRING("OpNeg","\x8f","\x41","\xeb","\xc6"),3);
hx::Static(OpNegBits) = hx::CreateEnum< Unop_obj >(HX_HCSTRING("OpNegBits","\x35","\xdc","\x5c","\xa6"),4);
hx::Static(OpNot) = hx::CreateEnum< Unop_obj >(HX_HCSTRING("OpNot","\x52","\x4a","\xeb","\xc6"),2);
}


} // end namespace haxe
} // end namespace macro
