#include <hxcpp.h>

#ifndef INCLUDED_haxe_rtti_TypeTree
#include <haxe/rtti/TypeTree.h>
#endif
namespace haxe{
namespace rtti{

::haxe::rtti::TypeTree  TypeTree_obj::TAbstractdecl(Dynamic a)
	{ return hx::CreateEnum< TypeTree_obj >(HX_HCSTRING("TAbstractdecl","\xc0","\xa4","\x0f","\xbd"),4,hx::DynamicArray(0,1).Add(a)); }

::haxe::rtti::TypeTree  TypeTree_obj::TClassdecl(Dynamic c)
	{ return hx::CreateEnum< TypeTree_obj >(HX_HCSTRING("TClassdecl","\xae","\x79","\x0d","\xa5"),1,hx::DynamicArray(0,1).Add(c)); }

::haxe::rtti::TypeTree  TypeTree_obj::TEnumdecl(Dynamic e)
	{ return hx::CreateEnum< TypeTree_obj >(HX_HCSTRING("TEnumdecl","\x5f","\x00","\xdd","\x4c"),2,hx::DynamicArray(0,1).Add(e)); }

::haxe::rtti::TypeTree  TypeTree_obj::TPackage(::String name,::String full,Array< ::Dynamic > subs)
	{ return hx::CreateEnum< TypeTree_obj >(HX_HCSTRING("TPackage","\x92","\xc5","\x8f","\xd3"),0,hx::DynamicArray(0,3).Add(name).Add(full).Add(subs)); }

::haxe::rtti::TypeTree  TypeTree_obj::TTypedecl(Dynamic t)
	{ return hx::CreateEnum< TypeTree_obj >(HX_HCSTRING("TTypedecl","\x98","\x58","\x40","\xd5"),3,hx::DynamicArray(0,1).Add(t)); }

HX_DEFINE_CREATE_ENUM(TypeTree_obj)

int TypeTree_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("TAbstractdecl","\xc0","\xa4","\x0f","\xbd")) return 4;
	if (inName==HX_HCSTRING("TClassdecl","\xae","\x79","\x0d","\xa5")) return 1;
	if (inName==HX_HCSTRING("TEnumdecl","\x5f","\x00","\xdd","\x4c")) return 2;
	if (inName==HX_HCSTRING("TPackage","\x92","\xc5","\x8f","\xd3")) return 0;
	if (inName==HX_HCSTRING("TTypedecl","\x98","\x58","\x40","\xd5")) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeTree_obj,TAbstractdecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeTree_obj,TClassdecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeTree_obj,TEnumdecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypeTree_obj,TPackage,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeTree_obj,TTypedecl,return)

int TypeTree_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("TAbstractdecl","\xc0","\xa4","\x0f","\xbd")) return 1;
	if (inName==HX_HCSTRING("TClassdecl","\xae","\x79","\x0d","\xa5")) return 1;
	if (inName==HX_HCSTRING("TEnumdecl","\x5f","\x00","\xdd","\x4c")) return 1;
	if (inName==HX_HCSTRING("TPackage","\x92","\xc5","\x8f","\xd3")) return 3;
	if (inName==HX_HCSTRING("TTypedecl","\x98","\x58","\x40","\xd5")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic TypeTree_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("TAbstractdecl","\xc0","\xa4","\x0f","\xbd")) return TAbstractdecl_dyn();
	if (inName==HX_HCSTRING("TClassdecl","\xae","\x79","\x0d","\xa5")) return TClassdecl_dyn();
	if (inName==HX_HCSTRING("TEnumdecl","\x5f","\x00","\xdd","\x4c")) return TEnumdecl_dyn();
	if (inName==HX_HCSTRING("TPackage","\x92","\xc5","\x8f","\xd3")) return TPackage_dyn();
	if (inName==HX_HCSTRING("TTypedecl","\x98","\x58","\x40","\xd5")) return TTypedecl_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("TPackage","\x92","\xc5","\x8f","\xd3"),
	HX_HCSTRING("TClassdecl","\xae","\x79","\x0d","\xa5"),
	HX_HCSTRING("TEnumdecl","\x5f","\x00","\xdd","\x4c"),
	HX_HCSTRING("TTypedecl","\x98","\x58","\x40","\xd5"),
	HX_HCSTRING("TAbstractdecl","\xc0","\xa4","\x0f","\xbd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeTree_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TypeTree_obj::__mClass;

Dynamic __Create_TypeTree_obj() { return new TypeTree_obj; }

void TypeTree_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.rtti.TypeTree","\xa7","\x70","\xa4","\xd0"), hx::TCanCast< TypeTree_obj >,sStaticFields,sMemberFields,
	&__Create_TypeTree_obj, &__Create,
	&super::__SGetClass(), &CreateTypeTree_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TypeTree_obj::__boot()
{
}


} // end namespace haxe
} // end namespace rtti
