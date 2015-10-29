#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_VarAccess
#include <haxe/macro/VarAccess.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::VarAccess VarAccess_obj::AccCall;

::haxe::macro::VarAccess VarAccess_obj::AccInline;

::haxe::macro::VarAccess VarAccess_obj::AccNever;

::haxe::macro::VarAccess VarAccess_obj::AccNo;

::haxe::macro::VarAccess VarAccess_obj::AccNormal;

::haxe::macro::VarAccess  VarAccess_obj::AccRequire(::String r,::String msg)
	{ return hx::CreateEnum< VarAccess_obj >(HX_HCSTRING("AccRequire","\x44","\x3c","\x9f","\x96"),6,hx::DynamicArray(0,2).Add(r).Add(msg)); }

::haxe::macro::VarAccess VarAccess_obj::AccResolve;

HX_DEFINE_CREATE_ENUM(VarAccess_obj)

int VarAccess_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("AccCall","\x5f","\x92","\x86","\x51")) return 4;
	if (inName==HX_HCSTRING("AccInline","\x5a","\xf6","\x6e","\x90")) return 5;
	if (inName==HX_HCSTRING("AccNever","\xab","\x4d","\x4e","\x5c")) return 2;
	if (inName==HX_HCSTRING("AccNo","\xc2","\x37","\xc7","\xae")) return 1;
	if (inName==HX_HCSTRING("AccNormal","\x28","\x9e","\x98","\x27")) return 0;
	if (inName==HX_HCSTRING("AccRequire","\x44","\x3c","\x9f","\x96")) return 6;
	if (inName==HX_HCSTRING("AccResolve","\xcb","\x67","\x77","\xb9")) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(VarAccess_obj,AccRequire,return)

int VarAccess_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("AccCall","\x5f","\x92","\x86","\x51")) return 0;
	if (inName==HX_HCSTRING("AccInline","\x5a","\xf6","\x6e","\x90")) return 0;
	if (inName==HX_HCSTRING("AccNever","\xab","\x4d","\x4e","\x5c")) return 0;
	if (inName==HX_HCSTRING("AccNo","\xc2","\x37","\xc7","\xae")) return 0;
	if (inName==HX_HCSTRING("AccNormal","\x28","\x9e","\x98","\x27")) return 0;
	if (inName==HX_HCSTRING("AccRequire","\x44","\x3c","\x9f","\x96")) return 2;
	if (inName==HX_HCSTRING("AccResolve","\xcb","\x67","\x77","\xb9")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic VarAccess_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("AccCall","\x5f","\x92","\x86","\x51")) return AccCall;
	if (inName==HX_HCSTRING("AccInline","\x5a","\xf6","\x6e","\x90")) return AccInline;
	if (inName==HX_HCSTRING("AccNever","\xab","\x4d","\x4e","\x5c")) return AccNever;
	if (inName==HX_HCSTRING("AccNo","\xc2","\x37","\xc7","\xae")) return AccNo;
	if (inName==HX_HCSTRING("AccNormal","\x28","\x9e","\x98","\x27")) return AccNormal;
	if (inName==HX_HCSTRING("AccRequire","\x44","\x3c","\x9f","\x96")) return AccRequire_dyn();
	if (inName==HX_HCSTRING("AccResolve","\xcb","\x67","\x77","\xb9")) return AccResolve;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("AccNormal","\x28","\x9e","\x98","\x27"),
	HX_HCSTRING("AccNo","\xc2","\x37","\xc7","\xae"),
	HX_HCSTRING("AccNever","\xab","\x4d","\x4e","\x5c"),
	HX_HCSTRING("AccResolve","\xcb","\x67","\x77","\xb9"),
	HX_HCSTRING("AccCall","\x5f","\x92","\x86","\x51"),
	HX_HCSTRING("AccInline","\x5a","\xf6","\x6e","\x90"),
	HX_HCSTRING("AccRequire","\x44","\x3c","\x9f","\x96"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VarAccess_obj::AccCall,"AccCall");
	HX_MARK_MEMBER_NAME(VarAccess_obj::AccInline,"AccInline");
	HX_MARK_MEMBER_NAME(VarAccess_obj::AccNever,"AccNever");
	HX_MARK_MEMBER_NAME(VarAccess_obj::AccNo,"AccNo");
	HX_MARK_MEMBER_NAME(VarAccess_obj::AccNormal,"AccNormal");
	HX_MARK_MEMBER_NAME(VarAccess_obj::AccResolve,"AccResolve");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VarAccess_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VarAccess_obj::AccCall,"AccCall");
	HX_VISIT_MEMBER_NAME(VarAccess_obj::AccInline,"AccInline");
	HX_VISIT_MEMBER_NAME(VarAccess_obj::AccNever,"AccNever");
	HX_VISIT_MEMBER_NAME(VarAccess_obj::AccNo,"AccNo");
	HX_VISIT_MEMBER_NAME(VarAccess_obj::AccNormal,"AccNormal");
	HX_VISIT_MEMBER_NAME(VarAccess_obj::AccResolve,"AccResolve");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class VarAccess_obj::__mClass;

Dynamic __Create_VarAccess_obj() { return new VarAccess_obj; }

void VarAccess_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.VarAccess","\xa1","\x34","\x3a","\xc5"), hx::TCanCast< VarAccess_obj >,sStaticFields,sMemberFields,
	&__Create_VarAccess_obj, &__Create,
	&super::__SGetClass(), &CreateVarAccess_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void VarAccess_obj::__boot()
{
hx::Static(AccCall) = hx::CreateEnum< VarAccess_obj >(HX_HCSTRING("AccCall","\x5f","\x92","\x86","\x51"),4);
hx::Static(AccInline) = hx::CreateEnum< VarAccess_obj >(HX_HCSTRING("AccInline","\x5a","\xf6","\x6e","\x90"),5);
hx::Static(AccNever) = hx::CreateEnum< VarAccess_obj >(HX_HCSTRING("AccNever","\xab","\x4d","\x4e","\x5c"),2);
hx::Static(AccNo) = hx::CreateEnum< VarAccess_obj >(HX_HCSTRING("AccNo","\xc2","\x37","\xc7","\xae"),1);
hx::Static(AccNormal) = hx::CreateEnum< VarAccess_obj >(HX_HCSTRING("AccNormal","\x28","\x9e","\x98","\x27"),0);
hx::Static(AccResolve) = hx::CreateEnum< VarAccess_obj >(HX_HCSTRING("AccResolve","\xcb","\x67","\x77","\xb9"),3);
}


} // end namespace haxe
} // end namespace macro
