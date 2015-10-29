#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_ClassKind
#include <haxe/macro/ClassKind.h>
#endif
#ifndef INCLUDED_haxe_macro_Type
#include <haxe/macro/Type.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::ClassKind  ClassKind_obj::KAbstractImpl(Dynamic a)
	{ return hx::CreateEnum< ClassKind_obj >(HX_HCSTRING("KAbstractImpl","\xcd","\x95","\x78","\x37"),7,hx::DynamicArray(0,1).Add(a)); }

::haxe::macro::ClassKind  ClassKind_obj::KExpr(Dynamic expr)
	{ return hx::CreateEnum< ClassKind_obj >(HX_HCSTRING("KExpr","\x20","\xab","\x04","\x5d"),3,hx::DynamicArray(0,1).Add(expr)); }

::haxe::macro::ClassKind  ClassKind_obj::KExtension(Dynamic cl,Array< ::Dynamic > params)
	{ return hx::CreateEnum< ClassKind_obj >(HX_HCSTRING("KExtension","\xb4","\x91","\xb4","\xdc"),2,hx::DynamicArray(0,2).Add(cl).Add(params)); }

::haxe::macro::ClassKind ClassKind_obj::KGeneric;

::haxe::macro::ClassKind ClassKind_obj::KGenericBuild;

::haxe::macro::ClassKind  ClassKind_obj::KGenericInstance(Dynamic cl,Array< ::Dynamic > params)
	{ return hx::CreateEnum< ClassKind_obj >(HX_HCSTRING("KGenericInstance","\xc1","\xd0","\x08","\x6d"),5,hx::DynamicArray(0,2).Add(cl).Add(params)); }

::haxe::macro::ClassKind ClassKind_obj::KMacroType;

::haxe::macro::ClassKind ClassKind_obj::KNormal;

::haxe::macro::ClassKind  ClassKind_obj::KTypeParameter(Array< ::Dynamic > constraints)
	{ return hx::CreateEnum< ClassKind_obj >(HX_HCSTRING("KTypeParameter","\x44","\xb8","\x9e","\x28"),1,hx::DynamicArray(0,1).Add(constraints)); }

HX_DEFINE_CREATE_ENUM(ClassKind_obj)

int ClassKind_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("KAbstractImpl","\xcd","\x95","\x78","\x37")) return 7;
	if (inName==HX_HCSTRING("KExpr","\x20","\xab","\x04","\x5d")) return 3;
	if (inName==HX_HCSTRING("KExtension","\xb4","\x91","\xb4","\xdc")) return 2;
	if (inName==HX_HCSTRING("KGeneric","\x0c","\x09","\x74","\x45")) return 4;
	if (inName==HX_HCSTRING("KGenericBuild","\x82","\xf6","\xab","\xc6")) return 8;
	if (inName==HX_HCSTRING("KGenericInstance","\xc1","\xd0","\x08","\x6d")) return 5;
	if (inName==HX_HCSTRING("KMacroType","\x1b","\x83","\x63","\x3f")) return 6;
	if (inName==HX_HCSTRING("KNormal","\xd2","\xb0","\xc7","\x93")) return 0;
	if (inName==HX_HCSTRING("KTypeParameter","\x44","\xb8","\x9e","\x28")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClassKind_obj,KAbstractImpl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClassKind_obj,KExpr,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ClassKind_obj,KExtension,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ClassKind_obj,KGenericInstance,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClassKind_obj,KTypeParameter,return)

int ClassKind_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("KAbstractImpl","\xcd","\x95","\x78","\x37")) return 1;
	if (inName==HX_HCSTRING("KExpr","\x20","\xab","\x04","\x5d")) return 1;
	if (inName==HX_HCSTRING("KExtension","\xb4","\x91","\xb4","\xdc")) return 2;
	if (inName==HX_HCSTRING("KGeneric","\x0c","\x09","\x74","\x45")) return 0;
	if (inName==HX_HCSTRING("KGenericBuild","\x82","\xf6","\xab","\xc6")) return 0;
	if (inName==HX_HCSTRING("KGenericInstance","\xc1","\xd0","\x08","\x6d")) return 2;
	if (inName==HX_HCSTRING("KMacroType","\x1b","\x83","\x63","\x3f")) return 0;
	if (inName==HX_HCSTRING("KNormal","\xd2","\xb0","\xc7","\x93")) return 0;
	if (inName==HX_HCSTRING("KTypeParameter","\x44","\xb8","\x9e","\x28")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic ClassKind_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("KAbstractImpl","\xcd","\x95","\x78","\x37")) return KAbstractImpl_dyn();
	if (inName==HX_HCSTRING("KExpr","\x20","\xab","\x04","\x5d")) return KExpr_dyn();
	if (inName==HX_HCSTRING("KExtension","\xb4","\x91","\xb4","\xdc")) return KExtension_dyn();
	if (inName==HX_HCSTRING("KGeneric","\x0c","\x09","\x74","\x45")) return KGeneric;
	if (inName==HX_HCSTRING("KGenericBuild","\x82","\xf6","\xab","\xc6")) return KGenericBuild;
	if (inName==HX_HCSTRING("KGenericInstance","\xc1","\xd0","\x08","\x6d")) return KGenericInstance_dyn();
	if (inName==HX_HCSTRING("KMacroType","\x1b","\x83","\x63","\x3f")) return KMacroType;
	if (inName==HX_HCSTRING("KNormal","\xd2","\xb0","\xc7","\x93")) return KNormal;
	if (inName==HX_HCSTRING("KTypeParameter","\x44","\xb8","\x9e","\x28")) return KTypeParameter_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("KNormal","\xd2","\xb0","\xc7","\x93"),
	HX_HCSTRING("KTypeParameter","\x44","\xb8","\x9e","\x28"),
	HX_HCSTRING("KExtension","\xb4","\x91","\xb4","\xdc"),
	HX_HCSTRING("KExpr","\x20","\xab","\x04","\x5d"),
	HX_HCSTRING("KGeneric","\x0c","\x09","\x74","\x45"),
	HX_HCSTRING("KGenericInstance","\xc1","\xd0","\x08","\x6d"),
	HX_HCSTRING("KMacroType","\x1b","\x83","\x63","\x3f"),
	HX_HCSTRING("KAbstractImpl","\xcd","\x95","\x78","\x37"),
	HX_HCSTRING("KGenericBuild","\x82","\xf6","\xab","\xc6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClassKind_obj::KGeneric,"KGeneric");
	HX_MARK_MEMBER_NAME(ClassKind_obj::KGenericBuild,"KGenericBuild");
	HX_MARK_MEMBER_NAME(ClassKind_obj::KMacroType,"KMacroType");
	HX_MARK_MEMBER_NAME(ClassKind_obj::KNormal,"KNormal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClassKind_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ClassKind_obj::KGeneric,"KGeneric");
	HX_VISIT_MEMBER_NAME(ClassKind_obj::KGenericBuild,"KGenericBuild");
	HX_VISIT_MEMBER_NAME(ClassKind_obj::KMacroType,"KMacroType");
	HX_VISIT_MEMBER_NAME(ClassKind_obj::KNormal,"KNormal");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ClassKind_obj::__mClass;

Dynamic __Create_ClassKind_obj() { return new ClassKind_obj; }

void ClassKind_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.ClassKind","\x62","\xa6","\xf4","\xf3"), hx::TCanCast< ClassKind_obj >,sStaticFields,sMemberFields,
	&__Create_ClassKind_obj, &__Create,
	&super::__SGetClass(), &CreateClassKind_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ClassKind_obj::__boot()
{
hx::Static(KGeneric) = hx::CreateEnum< ClassKind_obj >(HX_HCSTRING("KGeneric","\x0c","\x09","\x74","\x45"),4);
hx::Static(KGenericBuild) = hx::CreateEnum< ClassKind_obj >(HX_HCSTRING("KGenericBuild","\x82","\xf6","\xab","\xc6"),8);
hx::Static(KMacroType) = hx::CreateEnum< ClassKind_obj >(HX_HCSTRING("KMacroType","\x1b","\x83","\x63","\x3f"),6);
hx::Static(KNormal) = hx::CreateEnum< ClassKind_obj >(HX_HCSTRING("KNormal","\xd2","\xb0","\xc7","\x93"),0);
}


} // end namespace haxe
} // end namespace macro
