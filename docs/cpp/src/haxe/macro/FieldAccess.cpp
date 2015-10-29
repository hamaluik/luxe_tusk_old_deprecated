#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_FieldAccess
#include <haxe/macro/FieldAccess.h>
#endif
#ifndef INCLUDED_haxe_macro_Type
#include <haxe/macro/Type.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::FieldAccess  FieldAccess_obj::FAnon(Dynamic cf)
	{ return hx::CreateEnum< FieldAccess_obj >(HX_HCSTRING("FAnon","\xb2","\x52","\x57","\x79"),2,hx::DynamicArray(0,1).Add(cf)); }

::haxe::macro::FieldAccess  FieldAccess_obj::FClosure(Dynamic c,Dynamic cf)
	{ return hx::CreateEnum< FieldAccess_obj >(HX_HCSTRING("FClosure","\xd5","\x59","\x4b","\xea"),4,hx::DynamicArray(0,2).Add(c).Add(cf)); }

::haxe::macro::FieldAccess  FieldAccess_obj::FDynamic(::String s)
	{ return hx::CreateEnum< FieldAccess_obj >(HX_HCSTRING("FDynamic","\xd9","\xfb","\x31","\xa7"),3,hx::DynamicArray(0,1).Add(s)); }

::haxe::macro::FieldAccess  FieldAccess_obj::FEnum(Dynamic e,Dynamic ef)
	{ return hx::CreateEnum< FieldAccess_obj >(HX_HCSTRING("FEnum","\x67","\x32","\xfc","\x7b"),5,hx::DynamicArray(0,2).Add(e).Add(ef)); }

::haxe::macro::FieldAccess  FieldAccess_obj::FInstance(Dynamic c,Array< ::Dynamic > params,Dynamic cf)
	{ return hx::CreateEnum< FieldAccess_obj >(HX_HCSTRING("FInstance","\xfb","\x91","\x95","\xe1"),0,hx::DynamicArray(0,3).Add(c).Add(params).Add(cf)); }

::haxe::macro::FieldAccess  FieldAccess_obj::FStatic(Dynamic c,Dynamic cf)
	{ return hx::CreateEnum< FieldAccess_obj >(HX_HCSTRING("FStatic","\x94","\xc9","\x6e","\x99"),1,hx::DynamicArray(0,2).Add(c).Add(cf)); }

HX_DEFINE_CREATE_ENUM(FieldAccess_obj)

int FieldAccess_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("FAnon","\xb2","\x52","\x57","\x79")) return 2;
	if (inName==HX_HCSTRING("FClosure","\xd5","\x59","\x4b","\xea")) return 4;
	if (inName==HX_HCSTRING("FDynamic","\xd9","\xfb","\x31","\xa7")) return 3;
	if (inName==HX_HCSTRING("FEnum","\x67","\x32","\xfc","\x7b")) return 5;
	if (inName==HX_HCSTRING("FInstance","\xfb","\x91","\x95","\xe1")) return 0;
	if (inName==HX_HCSTRING("FStatic","\x94","\xc9","\x6e","\x99")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FieldAccess_obj,FAnon,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FieldAccess_obj,FClosure,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FieldAccess_obj,FDynamic,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FieldAccess_obj,FEnum,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(FieldAccess_obj,FInstance,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FieldAccess_obj,FStatic,return)

int FieldAccess_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("FAnon","\xb2","\x52","\x57","\x79")) return 1;
	if (inName==HX_HCSTRING("FClosure","\xd5","\x59","\x4b","\xea")) return 2;
	if (inName==HX_HCSTRING("FDynamic","\xd9","\xfb","\x31","\xa7")) return 1;
	if (inName==HX_HCSTRING("FEnum","\x67","\x32","\xfc","\x7b")) return 2;
	if (inName==HX_HCSTRING("FInstance","\xfb","\x91","\x95","\xe1")) return 3;
	if (inName==HX_HCSTRING("FStatic","\x94","\xc9","\x6e","\x99")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic FieldAccess_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("FAnon","\xb2","\x52","\x57","\x79")) return FAnon_dyn();
	if (inName==HX_HCSTRING("FClosure","\xd5","\x59","\x4b","\xea")) return FClosure_dyn();
	if (inName==HX_HCSTRING("FDynamic","\xd9","\xfb","\x31","\xa7")) return FDynamic_dyn();
	if (inName==HX_HCSTRING("FEnum","\x67","\x32","\xfc","\x7b")) return FEnum_dyn();
	if (inName==HX_HCSTRING("FInstance","\xfb","\x91","\x95","\xe1")) return FInstance_dyn();
	if (inName==HX_HCSTRING("FStatic","\x94","\xc9","\x6e","\x99")) return FStatic_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("FInstance","\xfb","\x91","\x95","\xe1"),
	HX_HCSTRING("FStatic","\x94","\xc9","\x6e","\x99"),
	HX_HCSTRING("FAnon","\xb2","\x52","\x57","\x79"),
	HX_HCSTRING("FDynamic","\xd9","\xfb","\x31","\xa7"),
	HX_HCSTRING("FClosure","\xd5","\x59","\x4b","\xea"),
	HX_HCSTRING("FEnum","\x67","\x32","\xfc","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FieldAccess_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FieldAccess_obj::__mClass;

Dynamic __Create_FieldAccess_obj() { return new FieldAccess_obj; }

void FieldAccess_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.FieldAccess","\x34","\xa4","\x55","\x69"), hx::TCanCast< FieldAccess_obj >,sStaticFields,sMemberFields,
	&__Create_FieldAccess_obj, &__Create,
	&super::__SGetClass(), &CreateFieldAccess_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FieldAccess_obj::__boot()
{
}


} // end namespace haxe
} // end namespace macro
