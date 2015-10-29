#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Type
#include <haxe/macro/Type.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::Type  Type_obj::TAbstract(Dynamic t,Array< ::Dynamic > params)
	{ return hx::CreateEnum< Type_obj >(HX_HCSTRING("TAbstract","\x56","\xf1","\x66","\xb9"),8,hx::DynamicArray(0,2).Add(t).Add(params)); }

::haxe::macro::Type  Type_obj::TAnonymous(Dynamic a)
	{ return hx::CreateEnum< Type_obj >(HX_HCSTRING("TAnonymous","\x79","\x49","\x55","\x32"),5,hx::DynamicArray(0,1).Add(a)); }

::haxe::macro::Type  Type_obj::TDynamic(::haxe::macro::Type t)
	{ return hx::CreateEnum< Type_obj >(HX_HCSTRING("TDynamic","\x8b","\x39","\xf4","\xc7"),6,hx::DynamicArray(0,1).Add(t)); }

::haxe::macro::Type  Type_obj::TEnum(Dynamic t,Array< ::Dynamic > params)
	{ return hx::CreateEnum< Type_obj >(HX_HCSTRING("TEnum","\x75","\x51","\x98","\x8b"),1,hx::DynamicArray(0,2).Add(t).Add(params)); }

::haxe::macro::Type  Type_obj::TFun(cpp::ArrayBase args,::haxe::macro::Type ret)
	{ return hx::CreateEnum< Type_obj >(HX_HCSTRING("TFun","\x4b","\x70","\xbb","\x37"),4,hx::DynamicArray(0,2).Add(args).Add(ret)); }

::haxe::macro::Type  Type_obj::TInst(Dynamic t,Array< ::Dynamic > params)
	{ return hx::CreateEnum< Type_obj >(HX_HCSTRING("TInst","\x3a","\x2a","\x3d","\x8e"),2,hx::DynamicArray(0,2).Add(t).Add(params)); }

::haxe::macro::Type  Type_obj::TLazy(Dynamic f)
	{ return hx::CreateEnum< Type_obj >(HX_HCSTRING("TLazy","\xe8","\xf6","\x2e","\x90"),7,hx::DynamicArray(0,1).Add(f)); }

::haxe::macro::Type  Type_obj::TMono(Dynamic t)
	{ return hx::CreateEnum< Type_obj >(HX_HCSTRING("TMono","\x97","\xc2","\xe2","\x90"),0,hx::DynamicArray(0,1).Add(t)); }

::haxe::macro::Type  Type_obj::TType(Dynamic t,Array< ::Dynamic > params)
	{ return hx::CreateEnum< Type_obj >(HX_HCSTRING("TType","\x2e","\xd9","\x8a","\x95"),3,hx::DynamicArray(0,2).Add(t).Add(params)); }

HX_DEFINE_CREATE_ENUM(Type_obj)

int Type_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("TAbstract","\x56","\xf1","\x66","\xb9")) return 8;
	if (inName==HX_HCSTRING("TAnonymous","\x79","\x49","\x55","\x32")) return 5;
	if (inName==HX_HCSTRING("TDynamic","\x8b","\x39","\xf4","\xc7")) return 6;
	if (inName==HX_HCSTRING("TEnum","\x75","\x51","\x98","\x8b")) return 1;
	if (inName==HX_HCSTRING("TFun","\x4b","\x70","\xbb","\x37")) return 4;
	if (inName==HX_HCSTRING("TInst","\x3a","\x2a","\x3d","\x8e")) return 2;
	if (inName==HX_HCSTRING("TLazy","\xe8","\xf6","\x2e","\x90")) return 7;
	if (inName==HX_HCSTRING("TMono","\x97","\xc2","\xe2","\x90")) return 0;
	if (inName==HX_HCSTRING("TType","\x2e","\xd9","\x8a","\x95")) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,TAbstract,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,TAnonymous,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,TDynamic,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,TEnum,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,TFun,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,TInst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,TLazy,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,TMono,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,TType,return)

int Type_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("TAbstract","\x56","\xf1","\x66","\xb9")) return 2;
	if (inName==HX_HCSTRING("TAnonymous","\x79","\x49","\x55","\x32")) return 1;
	if (inName==HX_HCSTRING("TDynamic","\x8b","\x39","\xf4","\xc7")) return 1;
	if (inName==HX_HCSTRING("TEnum","\x75","\x51","\x98","\x8b")) return 2;
	if (inName==HX_HCSTRING("TFun","\x4b","\x70","\xbb","\x37")) return 2;
	if (inName==HX_HCSTRING("TInst","\x3a","\x2a","\x3d","\x8e")) return 2;
	if (inName==HX_HCSTRING("TLazy","\xe8","\xf6","\x2e","\x90")) return 1;
	if (inName==HX_HCSTRING("TMono","\x97","\xc2","\xe2","\x90")) return 1;
	if (inName==HX_HCSTRING("TType","\x2e","\xd9","\x8a","\x95")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic Type_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("TAbstract","\x56","\xf1","\x66","\xb9")) return TAbstract_dyn();
	if (inName==HX_HCSTRING("TAnonymous","\x79","\x49","\x55","\x32")) return TAnonymous_dyn();
	if (inName==HX_HCSTRING("TDynamic","\x8b","\x39","\xf4","\xc7")) return TDynamic_dyn();
	if (inName==HX_HCSTRING("TEnum","\x75","\x51","\x98","\x8b")) return TEnum_dyn();
	if (inName==HX_HCSTRING("TFun","\x4b","\x70","\xbb","\x37")) return TFun_dyn();
	if (inName==HX_HCSTRING("TInst","\x3a","\x2a","\x3d","\x8e")) return TInst_dyn();
	if (inName==HX_HCSTRING("TLazy","\xe8","\xf6","\x2e","\x90")) return TLazy_dyn();
	if (inName==HX_HCSTRING("TMono","\x97","\xc2","\xe2","\x90")) return TMono_dyn();
	if (inName==HX_HCSTRING("TType","\x2e","\xd9","\x8a","\x95")) return TType_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("TMono","\x97","\xc2","\xe2","\x90"),
	HX_HCSTRING("TEnum","\x75","\x51","\x98","\x8b"),
	HX_HCSTRING("TInst","\x3a","\x2a","\x3d","\x8e"),
	HX_HCSTRING("TType","\x2e","\xd9","\x8a","\x95"),
	HX_HCSTRING("TFun","\x4b","\x70","\xbb","\x37"),
	HX_HCSTRING("TAnonymous","\x79","\x49","\x55","\x32"),
	HX_HCSTRING("TDynamic","\x8b","\x39","\xf4","\xc7"),
	HX_HCSTRING("TLazy","\xe8","\xf6","\x2e","\x90"),
	HX_HCSTRING("TAbstract","\x56","\xf1","\x66","\xb9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Type_obj::__mClass;

Dynamic __Create_Type_obj() { return new Type_obj; }

void Type_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.Type","\xc4","\x89","\xca","\x9a"), hx::TCanCast< Type_obj >,sStaticFields,sMemberFields,
	&__Create_Type_obj, &__Create,
	&super::__SGetClass(), &CreateType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Type_obj::__boot()
{
}


} // end namespace haxe
} // end namespace macro
