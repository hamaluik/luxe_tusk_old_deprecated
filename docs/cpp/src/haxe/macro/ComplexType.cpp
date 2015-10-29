#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_ComplexType
#include <haxe/macro/ComplexType.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::ComplexType  ComplexType_obj::TAnonymous(cpp::ArrayBase fields)
	{ return hx::CreateEnum< ComplexType_obj >(HX_HCSTRING("TAnonymous","\x79","\x49","\x55","\x32"),2,hx::DynamicArray(0,1).Add(fields)); }

::haxe::macro::ComplexType  ComplexType_obj::TExtend(cpp::ArrayBase p,cpp::ArrayBase fields)
	{ return hx::CreateEnum< ComplexType_obj >(HX_HCSTRING("TExtend","\x4e","\x3d","\xba","\xa0"),4,hx::DynamicArray(0,2).Add(p).Add(fields)); }

::haxe::macro::ComplexType  ComplexType_obj::TFunction(Array< ::Dynamic > args,::haxe::macro::ComplexType ret)
	{ return hx::CreateEnum< ComplexType_obj >(HX_HCSTRING("TFunction","\x8c","\xdb","\x3a","\x25"),1,hx::DynamicArray(0,2).Add(args).Add(ret)); }

::haxe::macro::ComplexType  ComplexType_obj::TOptional(::haxe::macro::ComplexType t)
	{ return hx::CreateEnum< ComplexType_obj >(HX_HCSTRING("TOptional","\x14","\xe0","\x56","\x2f"),5,hx::DynamicArray(0,1).Add(t)); }

::haxe::macro::ComplexType  ComplexType_obj::TParent(::haxe::macro::ComplexType t)
	{ return hx::CreateEnum< ComplexType_obj >(HX_HCSTRING("TParent","\x9e","\x70","\x1d","\xc7"),3,hx::DynamicArray(0,1).Add(t)); }

::haxe::macro::ComplexType  ComplexType_obj::TPath(Dynamic p)
	{ return hx::CreateEnum< ComplexType_obj >(HX_HCSTRING("TPath","\x19","\xcc","\xd3","\x92"),0,hx::DynamicArray(0,1).Add(p)); }

HX_DEFINE_CREATE_ENUM(ComplexType_obj)

int ComplexType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("TAnonymous","\x79","\x49","\x55","\x32")) return 2;
	if (inName==HX_HCSTRING("TExtend","\x4e","\x3d","\xba","\xa0")) return 4;
	if (inName==HX_HCSTRING("TFunction","\x8c","\xdb","\x3a","\x25")) return 1;
	if (inName==HX_HCSTRING("TOptional","\x14","\xe0","\x56","\x2f")) return 5;
	if (inName==HX_HCSTRING("TParent","\x9e","\x70","\x1d","\xc7")) return 3;
	if (inName==HX_HCSTRING("TPath","\x19","\xcc","\xd3","\x92")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComplexType_obj,TAnonymous,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ComplexType_obj,TExtend,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ComplexType_obj,TFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComplexType_obj,TOptional,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComplexType_obj,TParent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComplexType_obj,TPath,return)

int ComplexType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("TAnonymous","\x79","\x49","\x55","\x32")) return 1;
	if (inName==HX_HCSTRING("TExtend","\x4e","\x3d","\xba","\xa0")) return 2;
	if (inName==HX_HCSTRING("TFunction","\x8c","\xdb","\x3a","\x25")) return 2;
	if (inName==HX_HCSTRING("TOptional","\x14","\xe0","\x56","\x2f")) return 1;
	if (inName==HX_HCSTRING("TParent","\x9e","\x70","\x1d","\xc7")) return 1;
	if (inName==HX_HCSTRING("TPath","\x19","\xcc","\xd3","\x92")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic ComplexType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("TAnonymous","\x79","\x49","\x55","\x32")) return TAnonymous_dyn();
	if (inName==HX_HCSTRING("TExtend","\x4e","\x3d","\xba","\xa0")) return TExtend_dyn();
	if (inName==HX_HCSTRING("TFunction","\x8c","\xdb","\x3a","\x25")) return TFunction_dyn();
	if (inName==HX_HCSTRING("TOptional","\x14","\xe0","\x56","\x2f")) return TOptional_dyn();
	if (inName==HX_HCSTRING("TParent","\x9e","\x70","\x1d","\xc7")) return TParent_dyn();
	if (inName==HX_HCSTRING("TPath","\x19","\xcc","\xd3","\x92")) return TPath_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("TPath","\x19","\xcc","\xd3","\x92"),
	HX_HCSTRING("TFunction","\x8c","\xdb","\x3a","\x25"),
	HX_HCSTRING("TAnonymous","\x79","\x49","\x55","\x32"),
	HX_HCSTRING("TParent","\x9e","\x70","\x1d","\xc7"),
	HX_HCSTRING("TExtend","\x4e","\x3d","\xba","\xa0"),
	HX_HCSTRING("TOptional","\x14","\xe0","\x56","\x2f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComplexType_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ComplexType_obj::__mClass;

Dynamic __Create_ComplexType_obj() { return new ComplexType_obj; }

void ComplexType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.ComplexType","\x40","\x1b","\xe2","\xa3"), hx::TCanCast< ComplexType_obj >,sStaticFields,sMemberFields,
	&__Create_ComplexType_obj, &__Create,
	&super::__SGetClass(), &CreateComplexType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ComplexType_obj::__boot()
{
}


} // end namespace haxe
} // end namespace macro
