#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_ComplexType
#include <haxe/macro/ComplexType.h>
#endif
#ifndef INCLUDED_haxe_macro_TypeDefKind
#include <haxe/macro/TypeDefKind.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::TypeDefKind  TypeDefKind_obj::TDAbstract(::haxe::macro::ComplexType tthis,Array< ::Dynamic > from,Array< ::Dynamic > to)
	{ return hx::CreateEnum< TypeDefKind_obj >(HX_HCSTRING("TDAbstract","\x72","\xb6","\xbf","\xa2"),4,hx::DynamicArray(0,3).Add(tthis).Add(from).Add(to)); }

::haxe::macro::TypeDefKind  TypeDefKind_obj::TDAlias(::haxe::macro::ComplexType t)
	{ return hx::CreateEnum< TypeDefKind_obj >(HX_HCSTRING("TDAlias","\x00","\x42","\x0e","\x8a"),3,hx::DynamicArray(0,1).Add(t)); }

::haxe::macro::TypeDefKind  TypeDefKind_obj::TDClass(Dynamic superClass,cpp::ArrayBase interfaces,Dynamic isInterface)
	{ return hx::CreateEnum< TypeDefKind_obj >(HX_HCSTRING("TDClass","\xa8","\x68","\xd5","\xb0"),2,hx::DynamicArray(0,3).Add(superClass).Add(interfaces).Add(isInterface)); }

::haxe::macro::TypeDefKind TypeDefKind_obj::TDEnum;

::haxe::macro::TypeDefKind TypeDefKind_obj::TDStructure;

HX_DEFINE_CREATE_ENUM(TypeDefKind_obj)

int TypeDefKind_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("TDAbstract","\x72","\xb6","\xbf","\xa2")) return 4;
	if (inName==HX_HCSTRING("TDAlias","\x00","\x42","\x0e","\x8a")) return 3;
	if (inName==HX_HCSTRING("TDClass","\xa8","\x68","\xd5","\xb0")) return 2;
	if (inName==HX_HCSTRING("TDEnum","\x91","\x58","\x29","\xeb")) return 0;
	if (inName==HX_HCSTRING("TDStructure","\xa3","\x3c","\xe5","\x45")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypeDefKind_obj,TDAbstract,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeDefKind_obj,TDAlias,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypeDefKind_obj,TDClass,return)

int TypeDefKind_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("TDAbstract","\x72","\xb6","\xbf","\xa2")) return 3;
	if (inName==HX_HCSTRING("TDAlias","\x00","\x42","\x0e","\x8a")) return 1;
	if (inName==HX_HCSTRING("TDClass","\xa8","\x68","\xd5","\xb0")) return 3;
	if (inName==HX_HCSTRING("TDEnum","\x91","\x58","\x29","\xeb")) return 0;
	if (inName==HX_HCSTRING("TDStructure","\xa3","\x3c","\xe5","\x45")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TypeDefKind_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("TDAbstract","\x72","\xb6","\xbf","\xa2")) return TDAbstract_dyn();
	if (inName==HX_HCSTRING("TDAlias","\x00","\x42","\x0e","\x8a")) return TDAlias_dyn();
	if (inName==HX_HCSTRING("TDClass","\xa8","\x68","\xd5","\xb0")) return TDClass_dyn();
	if (inName==HX_HCSTRING("TDEnum","\x91","\x58","\x29","\xeb")) return TDEnum;
	if (inName==HX_HCSTRING("TDStructure","\xa3","\x3c","\xe5","\x45")) return TDStructure;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("TDEnum","\x91","\x58","\x29","\xeb"),
	HX_HCSTRING("TDStructure","\xa3","\x3c","\xe5","\x45"),
	HX_HCSTRING("TDClass","\xa8","\x68","\xd5","\xb0"),
	HX_HCSTRING("TDAlias","\x00","\x42","\x0e","\x8a"),
	HX_HCSTRING("TDAbstract","\x72","\xb6","\xbf","\xa2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypeDefKind_obj::TDEnum,"TDEnum");
	HX_MARK_MEMBER_NAME(TypeDefKind_obj::TDStructure,"TDStructure");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeDefKind_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TypeDefKind_obj::TDEnum,"TDEnum");
	HX_VISIT_MEMBER_NAME(TypeDefKind_obj::TDStructure,"TDStructure");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TypeDefKind_obj::__mClass;

Dynamic __Create_TypeDefKind_obj() { return new TypeDefKind_obj; }

void TypeDefKind_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.TypeDefKind","\x55","\x2c","\xa9","\xd6"), hx::TCanCast< TypeDefKind_obj >,sStaticFields,sMemberFields,
	&__Create_TypeDefKind_obj, &__Create,
	&super::__SGetClass(), &CreateTypeDefKind_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TypeDefKind_obj::__boot()
{
hx::Static(TDEnum) = hx::CreateEnum< TypeDefKind_obj >(HX_HCSTRING("TDEnum","\x91","\x58","\x29","\xeb"),0);
hx::Static(TDStructure) = hx::CreateEnum< TypeDefKind_obj >(HX_HCSTRING("TDStructure","\xa3","\x3c","\xe5","\x45"),1);
}


} // end namespace haxe
} // end namespace macro
