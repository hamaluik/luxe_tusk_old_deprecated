#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_rtti_CType
#include <haxe/rtti/CType.h>
#endif
namespace haxe{
namespace rtti{

::haxe::rtti::CType  CType_obj::CAbstract(::String name,::List params)
	{ return hx::CreateEnum< CType_obj >(HX_HCSTRING("CAbstract","\x45","\xf8","\x5e","\xb7"),7,hx::DynamicArray(0,2).Add(name).Add(params)); }

::haxe::rtti::CType  CType_obj::CAnonymous(::List fields)
	{ return hx::CreateEnum< CType_obj >(HX_HCSTRING("CAnonymous","\xaa","\x53","\x63","\x6d"),5,hx::DynamicArray(0,1).Add(fields)); }

::haxe::rtti::CType  CType_obj::CClass(::String name,::List params)
	{ return hx::CreateEnum< CType_obj >(HX_HCSTRING("CClass","\xf5","\x14","\x6f","\xa5"),2,hx::DynamicArray(0,2).Add(name).Add(params)); }

::haxe::rtti::CType  CType_obj::CDynamic(::haxe::rtti::CType t)
	{ return hx::CreateEnum< CType_obj >(HX_HCSTRING("CDynamic","\x7c","\xa5","\x9a","\xfb"),6,hx::DynamicArray(0,1).Add(t)); }

::haxe::rtti::CType  CType_obj::CEnum(::String name,::List params)
	{ return hx::CreateEnum< CType_obj >(HX_HCSTRING("CEnum","\xe4","\x74","\xc8","\xc1"),1,hx::DynamicArray(0,2).Add(name).Add(params)); }

::haxe::rtti::CType  CType_obj::CFunction(::List args,::haxe::rtti::CType ret)
	{ return hx::CreateEnum< CType_obj >(HX_HCSTRING("CFunction","\x7b","\xe2","\x32","\x23"),4,hx::DynamicArray(0,2).Add(args).Add(ret)); }

::haxe::rtti::CType  CType_obj::CTypedef(::String name,::List params)
	{ return hx::CreateEnum< CType_obj >(HX_HCSTRING("CTypedef","\x48","\x3d","\x5d","\xbe"),3,hx::DynamicArray(0,2).Add(name).Add(params)); }

::haxe::rtti::CType CType_obj::CUnknown;

HX_DEFINE_CREATE_ENUM(CType_obj)

int CType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("CAbstract","\x45","\xf8","\x5e","\xb7")) return 7;
	if (inName==HX_HCSTRING("CAnonymous","\xaa","\x53","\x63","\x6d")) return 5;
	if (inName==HX_HCSTRING("CClass","\xf5","\x14","\x6f","\xa5")) return 2;
	if (inName==HX_HCSTRING("CDynamic","\x7c","\xa5","\x9a","\xfb")) return 6;
	if (inName==HX_HCSTRING("CEnum","\xe4","\x74","\xc8","\xc1")) return 1;
	if (inName==HX_HCSTRING("CFunction","\x7b","\xe2","\x32","\x23")) return 4;
	if (inName==HX_HCSTRING("CTypedef","\x48","\x3d","\x5d","\xbe")) return 3;
	if (inName==HX_HCSTRING("CUnknown","\x87","\x29","\x00","\xa7")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CType_obj,CAbstract,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CType_obj,CAnonymous,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CType_obj,CClass,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CType_obj,CDynamic,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CType_obj,CEnum,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CType_obj,CFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CType_obj,CTypedef,return)

int CType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("CAbstract","\x45","\xf8","\x5e","\xb7")) return 2;
	if (inName==HX_HCSTRING("CAnonymous","\xaa","\x53","\x63","\x6d")) return 1;
	if (inName==HX_HCSTRING("CClass","\xf5","\x14","\x6f","\xa5")) return 2;
	if (inName==HX_HCSTRING("CDynamic","\x7c","\xa5","\x9a","\xfb")) return 1;
	if (inName==HX_HCSTRING("CEnum","\xe4","\x74","\xc8","\xc1")) return 2;
	if (inName==HX_HCSTRING("CFunction","\x7b","\xe2","\x32","\x23")) return 2;
	if (inName==HX_HCSTRING("CTypedef","\x48","\x3d","\x5d","\xbe")) return 2;
	if (inName==HX_HCSTRING("CUnknown","\x87","\x29","\x00","\xa7")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic CType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("CAbstract","\x45","\xf8","\x5e","\xb7")) return CAbstract_dyn();
	if (inName==HX_HCSTRING("CAnonymous","\xaa","\x53","\x63","\x6d")) return CAnonymous_dyn();
	if (inName==HX_HCSTRING("CClass","\xf5","\x14","\x6f","\xa5")) return CClass_dyn();
	if (inName==HX_HCSTRING("CDynamic","\x7c","\xa5","\x9a","\xfb")) return CDynamic_dyn();
	if (inName==HX_HCSTRING("CEnum","\xe4","\x74","\xc8","\xc1")) return CEnum_dyn();
	if (inName==HX_HCSTRING("CFunction","\x7b","\xe2","\x32","\x23")) return CFunction_dyn();
	if (inName==HX_HCSTRING("CTypedef","\x48","\x3d","\x5d","\xbe")) return CTypedef_dyn();
	if (inName==HX_HCSTRING("CUnknown","\x87","\x29","\x00","\xa7")) return CUnknown;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("CUnknown","\x87","\x29","\x00","\xa7"),
	HX_HCSTRING("CEnum","\xe4","\x74","\xc8","\xc1"),
	HX_HCSTRING("CClass","\xf5","\x14","\x6f","\xa5"),
	HX_HCSTRING("CTypedef","\x48","\x3d","\x5d","\xbe"),
	HX_HCSTRING("CFunction","\x7b","\xe2","\x32","\x23"),
	HX_HCSTRING("CAnonymous","\xaa","\x53","\x63","\x6d"),
	HX_HCSTRING("CDynamic","\x7c","\xa5","\x9a","\xfb"),
	HX_HCSTRING("CAbstract","\x45","\xf8","\x5e","\xb7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CType_obj::CUnknown,"CUnknown");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CType_obj::CUnknown,"CUnknown");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class CType_obj::__mClass;

Dynamic __Create_CType_obj() { return new CType_obj; }

void CType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.rtti.CType","\xee","\xcd","\x79","\x74"), hx::TCanCast< CType_obj >,sStaticFields,sMemberFields,
	&__Create_CType_obj, &__Create,
	&super::__SGetClass(), &CreateCType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void CType_obj::__boot()
{
hx::Static(CUnknown) = hx::CreateEnum< CType_obj >(HX_HCSTRING("CUnknown","\x87","\x29","\x00","\xa7"),0);
}


} // end namespace haxe
} // end namespace rtti
