#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_AnonStatus
#include <haxe/macro/AnonStatus.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::AnonStatus  AnonStatus_obj::AAbstractStatics(Dynamic t)
	{ return hx::CreateEnum< AnonStatus_obj >(HX_HCSTRING("AAbstractStatics","\x02","\xdc","\xde","\xce"),6,hx::DynamicArray(0,1).Add(t)); }

::haxe::macro::AnonStatus  AnonStatus_obj::AClassStatics(Dynamic t)
	{ return hx::CreateEnum< AnonStatus_obj >(HX_HCSTRING("AClassStatics","\x8e","\x0c","\xd8","\x9c"),4,hx::DynamicArray(0,1).Add(t)); }

::haxe::macro::AnonStatus AnonStatus_obj::AClosed;

::haxe::macro::AnonStatus AnonStatus_obj::AConst;

::haxe::macro::AnonStatus  AnonStatus_obj::AEnumStatics(Dynamic t)
	{ return hx::CreateEnum< AnonStatus_obj >(HX_HCSTRING("AEnumStatics","\x43","\x38","\x13","\xd4"),5,hx::DynamicArray(0,1).Add(t)); }

::haxe::macro::AnonStatus  AnonStatus_obj::AExtend(Dynamic tl)
	{ return hx::CreateEnum< AnonStatus_obj >(HX_HCSTRING("AExtend","\xfb","\x6c","\xa2","\x8a"),3,hx::DynamicArray(0,1).Add(tl)); }

::haxe::macro::AnonStatus AnonStatus_obj::AOpened;

HX_DEFINE_CREATE_ENUM(AnonStatus_obj)

int AnonStatus_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("AAbstractStatics","\x02","\xdc","\xde","\xce")) return 6;
	if (inName==HX_HCSTRING("AClassStatics","\x8e","\x0c","\xd8","\x9c")) return 4;
	if (inName==HX_HCSTRING("AClosed","\xcd","\x44","\xd9","\xd1")) return 0;
	if (inName==HX_HCSTRING("AConst","\x62","\xdd","\xbd","\xda")) return 2;
	if (inName==HX_HCSTRING("AEnumStatics","\x43","\x38","\x13","\xd4")) return 5;
	if (inName==HX_HCSTRING("AExtend","\xfb","\x6c","\xa2","\x8a")) return 3;
	if (inName==HX_HCSTRING("AOpened","\xca","\xfd","\x1b","\xe5")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnonStatus_obj,AAbstractStatics,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnonStatus_obj,AClassStatics,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnonStatus_obj,AEnumStatics,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnonStatus_obj,AExtend,return)

int AnonStatus_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("AAbstractStatics","\x02","\xdc","\xde","\xce")) return 1;
	if (inName==HX_HCSTRING("AClassStatics","\x8e","\x0c","\xd8","\x9c")) return 1;
	if (inName==HX_HCSTRING("AClosed","\xcd","\x44","\xd9","\xd1")) return 0;
	if (inName==HX_HCSTRING("AConst","\x62","\xdd","\xbd","\xda")) return 0;
	if (inName==HX_HCSTRING("AEnumStatics","\x43","\x38","\x13","\xd4")) return 1;
	if (inName==HX_HCSTRING("AExtend","\xfb","\x6c","\xa2","\x8a")) return 1;
	if (inName==HX_HCSTRING("AOpened","\xca","\xfd","\x1b","\xe5")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic AnonStatus_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("AAbstractStatics","\x02","\xdc","\xde","\xce")) return AAbstractStatics_dyn();
	if (inName==HX_HCSTRING("AClassStatics","\x8e","\x0c","\xd8","\x9c")) return AClassStatics_dyn();
	if (inName==HX_HCSTRING("AClosed","\xcd","\x44","\xd9","\xd1")) return AClosed;
	if (inName==HX_HCSTRING("AConst","\x62","\xdd","\xbd","\xda")) return AConst;
	if (inName==HX_HCSTRING("AEnumStatics","\x43","\x38","\x13","\xd4")) return AEnumStatics_dyn();
	if (inName==HX_HCSTRING("AExtend","\xfb","\x6c","\xa2","\x8a")) return AExtend_dyn();
	if (inName==HX_HCSTRING("AOpened","\xca","\xfd","\x1b","\xe5")) return AOpened;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("AClosed","\xcd","\x44","\xd9","\xd1"),
	HX_HCSTRING("AOpened","\xca","\xfd","\x1b","\xe5"),
	HX_HCSTRING("AConst","\x62","\xdd","\xbd","\xda"),
	HX_HCSTRING("AExtend","\xfb","\x6c","\xa2","\x8a"),
	HX_HCSTRING("AClassStatics","\x8e","\x0c","\xd8","\x9c"),
	HX_HCSTRING("AEnumStatics","\x43","\x38","\x13","\xd4"),
	HX_HCSTRING("AAbstractStatics","\x02","\xdc","\xde","\xce"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnonStatus_obj::AClosed,"AClosed");
	HX_MARK_MEMBER_NAME(AnonStatus_obj::AConst,"AConst");
	HX_MARK_MEMBER_NAME(AnonStatus_obj::AOpened,"AOpened");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnonStatus_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AnonStatus_obj::AClosed,"AClosed");
	HX_VISIT_MEMBER_NAME(AnonStatus_obj::AConst,"AConst");
	HX_VISIT_MEMBER_NAME(AnonStatus_obj::AOpened,"AOpened");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class AnonStatus_obj::__mClass;

Dynamic __Create_AnonStatus_obj() { return new AnonStatus_obj; }

void AnonStatus_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.AnonStatus","\x28","\xe2","\xfe","\xc2"), hx::TCanCast< AnonStatus_obj >,sStaticFields,sMemberFields,
	&__Create_AnonStatus_obj, &__Create,
	&super::__SGetClass(), &CreateAnonStatus_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void AnonStatus_obj::__boot()
{
hx::Static(AClosed) = hx::CreateEnum< AnonStatus_obj >(HX_HCSTRING("AClosed","\xcd","\x44","\xd9","\xd1"),0);
hx::Static(AConst) = hx::CreateEnum< AnonStatus_obj >(HX_HCSTRING("AConst","\x62","\xdd","\xbd","\xda"),2);
hx::Static(AOpened) = hx::CreateEnum< AnonStatus_obj >(HX_HCSTRING("AOpened","\xca","\xfd","\x1b","\xe5"),1);
}


} // end namespace haxe
} // end namespace macro
