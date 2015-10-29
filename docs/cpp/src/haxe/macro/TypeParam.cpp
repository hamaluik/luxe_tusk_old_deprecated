#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_ComplexType
#include <haxe/macro/ComplexType.h>
#endif
#ifndef INCLUDED_haxe_macro_TypeParam
#include <haxe/macro/TypeParam.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::TypeParam  TypeParam_obj::TPExpr(Dynamic e)
	{ return hx::CreateEnum< TypeParam_obj >(HX_HCSTRING("TPExpr","\xd1","\xe0","\xff","\xd3"),1,hx::DynamicArray(0,1).Add(e)); }

::haxe::macro::TypeParam  TypeParam_obj::TPType(::haxe::macro::ComplexType t)
	{ return hx::CreateEnum< TypeParam_obj >(HX_HCSTRING("TPType","\x56","\xd6","\xea","\xdd"),0,hx::DynamicArray(0,1).Add(t)); }

HX_DEFINE_CREATE_ENUM(TypeParam_obj)

int TypeParam_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("TPExpr","\xd1","\xe0","\xff","\xd3")) return 1;
	if (inName==HX_HCSTRING("TPType","\x56","\xd6","\xea","\xdd")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeParam_obj,TPExpr,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeParam_obj,TPType,return)

int TypeParam_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("TPExpr","\xd1","\xe0","\xff","\xd3")) return 1;
	if (inName==HX_HCSTRING("TPType","\x56","\xd6","\xea","\xdd")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic TypeParam_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("TPExpr","\xd1","\xe0","\xff","\xd3")) return TPExpr_dyn();
	if (inName==HX_HCSTRING("TPType","\x56","\xd6","\xea","\xdd")) return TPType_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("TPType","\x56","\xd6","\xea","\xdd"),
	HX_HCSTRING("TPExpr","\xd1","\xe0","\xff","\xd3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeParam_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TypeParam_obj::__mClass;

Dynamic __Create_TypeParam_obj() { return new TypeParam_obj; }

void TypeParam_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.TypeParam","\x29","\x80","\xda","\x9b"), hx::TCanCast< TypeParam_obj >,sStaticFields,sMemberFields,
	&__Create_TypeParam_obj, &__Create,
	&super::__SGetClass(), &CreateTypeParam_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TypeParam_obj::__boot()
{
}


} // end namespace haxe
} // end namespace macro
