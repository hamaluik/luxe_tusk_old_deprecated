#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Constant
#include <haxe/macro/Constant.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::Constant  Constant_obj::CFloat(::String f)
	{ return hx::CreateEnum< Constant_obj >(HX_HCSTRING("CFloat","\x59","\x62","\xad","\x5f"),1,hx::DynamicArray(0,1).Add(f)); }

::haxe::macro::Constant  Constant_obj::CIdent(::String s)
	{ return hx::CreateEnum< Constant_obj >(HX_HCSTRING("CIdent","\xad","\xdf","\x8f","\x14"),3,hx::DynamicArray(0,1).Add(s)); }

::haxe::macro::Constant  Constant_obj::CInt(::String v)
	{ return hx::CreateEnum< Constant_obj >(HX_HCSTRING("CInt","\x6c","\x10","\x81","\x2c"),0,hx::DynamicArray(0,1).Add(v)); }

::haxe::macro::Constant  Constant_obj::CRegexp(::String r,::String opt)
	{ return hx::CreateEnum< Constant_obj >(HX_HCSTRING("CRegexp","\x6c","\x48","\x3c","\x17"),4,hx::DynamicArray(0,2).Add(r).Add(opt)); }

::haxe::macro::Constant  Constant_obj::CString(::String s)
	{ return hx::CreateEnum< Constant_obj >(HX_HCSTRING("CString","\x74","\xb1","\xe2","\x27"),2,hx::DynamicArray(0,1).Add(s)); }

HX_DEFINE_CREATE_ENUM(Constant_obj)

int Constant_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("CFloat","\x59","\x62","\xad","\x5f")) return 1;
	if (inName==HX_HCSTRING("CIdent","\xad","\xdf","\x8f","\x14")) return 3;
	if (inName==HX_HCSTRING("CInt","\x6c","\x10","\x81","\x2c")) return 0;
	if (inName==HX_HCSTRING("CRegexp","\x6c","\x48","\x3c","\x17")) return 4;
	if (inName==HX_HCSTRING("CString","\x74","\xb1","\xe2","\x27")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Constant_obj,CFloat,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Constant_obj,CIdent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Constant_obj,CInt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Constant_obj,CRegexp,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Constant_obj,CString,return)

int Constant_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("CFloat","\x59","\x62","\xad","\x5f")) return 1;
	if (inName==HX_HCSTRING("CIdent","\xad","\xdf","\x8f","\x14")) return 1;
	if (inName==HX_HCSTRING("CInt","\x6c","\x10","\x81","\x2c")) return 1;
	if (inName==HX_HCSTRING("CRegexp","\x6c","\x48","\x3c","\x17")) return 2;
	if (inName==HX_HCSTRING("CString","\x74","\xb1","\xe2","\x27")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Constant_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("CFloat","\x59","\x62","\xad","\x5f")) return CFloat_dyn();
	if (inName==HX_HCSTRING("CIdent","\xad","\xdf","\x8f","\x14")) return CIdent_dyn();
	if (inName==HX_HCSTRING("CInt","\x6c","\x10","\x81","\x2c")) return CInt_dyn();
	if (inName==HX_HCSTRING("CRegexp","\x6c","\x48","\x3c","\x17")) return CRegexp_dyn();
	if (inName==HX_HCSTRING("CString","\x74","\xb1","\xe2","\x27")) return CString_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("CInt","\x6c","\x10","\x81","\x2c"),
	HX_HCSTRING("CFloat","\x59","\x62","\xad","\x5f"),
	HX_HCSTRING("CString","\x74","\xb1","\xe2","\x27"),
	HX_HCSTRING("CIdent","\xad","\xdf","\x8f","\x14"),
	HX_HCSTRING("CRegexp","\x6c","\x48","\x3c","\x17"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Constant_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Constant_obj::__mClass;

Dynamic __Create_Constant_obj() { return new Constant_obj; }

void Constant_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.Constant","\x6e","\xa5","\x78","\xab"), hx::TCanCast< Constant_obj >,sStaticFields,sMemberFields,
	&__Create_Constant_obj, &__Create,
	&super::__SGetClass(), &CreateConstant_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Constant_obj::__boot()
{
}


} // end namespace haxe
} // end namespace macro
