#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_TConstant
#include <haxe/macro/TConstant.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::TConstant  TConstant_obj::TBool(bool b)
	{ return hx::CreateEnum< TConstant_obj >(HX_HCSTRING("TBool","\x9e","\x6a","\x9d","\x89"),3,hx::DynamicArray(0,1).Add(b)); }

::haxe::macro::TConstant  TConstant_obj::TFloat(::String s)
	{ return hx::CreateEnum< TConstant_obj >(HX_HCSTRING("TFloat","\xa8","\x84","\xbe","\x2b"),1,hx::DynamicArray(0,1).Add(s)); }

::haxe::macro::TConstant  TConstant_obj::TInt(int i)
	{ return hx::CreateEnum< TConstant_obj >(HX_HCSTRING("TInt","\xfb","\xb0","\xbd","\x37"),0,hx::DynamicArray(0,1).Add(i)); }

::haxe::macro::TConstant TConstant_obj::TNull;

::haxe::macro::TConstant  TConstant_obj::TString(::String s)
	{ return hx::CreateEnum< TConstant_obj >(HX_HCSTRING("TString","\x45","\x94","\xcf","\xea"),2,hx::DynamicArray(0,1).Add(s)); }

::haxe::macro::TConstant TConstant_obj::TSuper;

::haxe::macro::TConstant TConstant_obj::TThis;

HX_DEFINE_CREATE_ENUM(TConstant_obj)

int TConstant_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("TBool","\x9e","\x6a","\x9d","\x89")) return 3;
	if (inName==HX_HCSTRING("TFloat","\xa8","\x84","\xbe","\x2b")) return 1;
	if (inName==HX_HCSTRING("TInt","\xfb","\xb0","\xbd","\x37")) return 0;
	if (inName==HX_HCSTRING("TNull","\xfb","\x84","\x90","\x91")) return 4;
	if (inName==HX_HCSTRING("TString","\x45","\x94","\xcf","\xea")) return 2;
	if (inName==HX_HCSTRING("TSuper","\x87","\xc0","\xe7","\xad")) return 6;
	if (inName==HX_HCSTRING("TThis","\xd2","\xec","\x7d","\x95")) return 5;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TConstant_obj,TBool,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TConstant_obj,TFloat,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TConstant_obj,TInt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TConstant_obj,TString,return)

int TConstant_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("TBool","\x9e","\x6a","\x9d","\x89")) return 1;
	if (inName==HX_HCSTRING("TFloat","\xa8","\x84","\xbe","\x2b")) return 1;
	if (inName==HX_HCSTRING("TInt","\xfb","\xb0","\xbd","\x37")) return 1;
	if (inName==HX_HCSTRING("TNull","\xfb","\x84","\x90","\x91")) return 0;
	if (inName==HX_HCSTRING("TString","\x45","\x94","\xcf","\xea")) return 1;
	if (inName==HX_HCSTRING("TSuper","\x87","\xc0","\xe7","\xad")) return 0;
	if (inName==HX_HCSTRING("TThis","\xd2","\xec","\x7d","\x95")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TConstant_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("TBool","\x9e","\x6a","\x9d","\x89")) return TBool_dyn();
	if (inName==HX_HCSTRING("TFloat","\xa8","\x84","\xbe","\x2b")) return TFloat_dyn();
	if (inName==HX_HCSTRING("TInt","\xfb","\xb0","\xbd","\x37")) return TInt_dyn();
	if (inName==HX_HCSTRING("TNull","\xfb","\x84","\x90","\x91")) return TNull;
	if (inName==HX_HCSTRING("TString","\x45","\x94","\xcf","\xea")) return TString_dyn();
	if (inName==HX_HCSTRING("TSuper","\x87","\xc0","\xe7","\xad")) return TSuper;
	if (inName==HX_HCSTRING("TThis","\xd2","\xec","\x7d","\x95")) return TThis;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("TInt","\xfb","\xb0","\xbd","\x37"),
	HX_HCSTRING("TFloat","\xa8","\x84","\xbe","\x2b"),
	HX_HCSTRING("TString","\x45","\x94","\xcf","\xea"),
	HX_HCSTRING("TBool","\x9e","\x6a","\x9d","\x89"),
	HX_HCSTRING("TNull","\xfb","\x84","\x90","\x91"),
	HX_HCSTRING("TThis","\xd2","\xec","\x7d","\x95"),
	HX_HCSTRING("TSuper","\x87","\xc0","\xe7","\xad"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TConstant_obj::TNull,"TNull");
	HX_MARK_MEMBER_NAME(TConstant_obj::TSuper,"TSuper");
	HX_MARK_MEMBER_NAME(TConstant_obj::TThis,"TThis");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TConstant_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TConstant_obj::TNull,"TNull");
	HX_VISIT_MEMBER_NAME(TConstant_obj::TSuper,"TSuper");
	HX_VISIT_MEMBER_NAME(TConstant_obj::TThis,"TThis");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TConstant_obj::__mClass;

Dynamic __Create_TConstant_obj() { return new TConstant_obj; }

void TConstant_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.TConstant","\xae","\xb6","\x5f","\x2e"), hx::TCanCast< TConstant_obj >,sStaticFields,sMemberFields,
	&__Create_TConstant_obj, &__Create,
	&super::__SGetClass(), &CreateTConstant_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TConstant_obj::__boot()
{
hx::Static(TNull) = hx::CreateEnum< TConstant_obj >(HX_HCSTRING("TNull","\xfb","\x84","\x90","\x91"),4);
hx::Static(TSuper) = hx::CreateEnum< TConstant_obj >(HX_HCSTRING("TSuper","\x87","\xc0","\xe7","\xad"),6);
hx::Static(TThis) = hx::CreateEnum< TConstant_obj >(HX_HCSTRING("TThis","\xd2","\xec","\x7d","\x95"),5);
}


} // end namespace haxe
} // end namespace macro
