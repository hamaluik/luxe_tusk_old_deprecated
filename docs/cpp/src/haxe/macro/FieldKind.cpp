#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_FieldKind
#include <haxe/macro/FieldKind.h>
#endif
#ifndef INCLUDED_haxe_macro_MethodKind
#include <haxe/macro/MethodKind.h>
#endif
#ifndef INCLUDED_haxe_macro_VarAccess
#include <haxe/macro/VarAccess.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::FieldKind  FieldKind_obj::FMethod(::haxe::macro::MethodKind k)
	{ return hx::CreateEnum< FieldKind_obj >(HX_HCSTRING("FMethod","\xc7","\xe3","\xcd","\x9c"),1,hx::DynamicArray(0,1).Add(k)); }

::haxe::macro::FieldKind  FieldKind_obj::FVar(::haxe::macro::VarAccess read,::haxe::macro::VarAccess write)
	{ return hx::CreateEnum< FieldKind_obj >(HX_HCSTRING("FVar","\x41","\x86","\x86","\x2e"),0,hx::DynamicArray(0,2).Add(read).Add(write)); }

HX_DEFINE_CREATE_ENUM(FieldKind_obj)

int FieldKind_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("FMethod","\xc7","\xe3","\xcd","\x9c")) return 1;
	if (inName==HX_HCSTRING("FVar","\x41","\x86","\x86","\x2e")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FieldKind_obj,FMethod,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FieldKind_obj,FVar,return)

int FieldKind_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("FMethod","\xc7","\xe3","\xcd","\x9c")) return 1;
	if (inName==HX_HCSTRING("FVar","\x41","\x86","\x86","\x2e")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic FieldKind_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("FMethod","\xc7","\xe3","\xcd","\x9c")) return FMethod_dyn();
	if (inName==HX_HCSTRING("FVar","\x41","\x86","\x86","\x2e")) return FVar_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("FVar","\x41","\x86","\x86","\x2e"),
	HX_HCSTRING("FMethod","\xc7","\xe3","\xcd","\x9c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FieldKind_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FieldKind_obj::__mClass;

Dynamic __Create_FieldKind_obj() { return new FieldKind_obj; }

void FieldKind_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.FieldKind","\xe4","\x2b","\x05","\xf8"), hx::TCanCast< FieldKind_obj >,sStaticFields,sMemberFields,
	&__Create_FieldKind_obj, &__Create,
	&super::__SGetClass(), &CreateFieldKind_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FieldKind_obj::__boot()
{
}


} // end namespace haxe
} // end namespace macro
