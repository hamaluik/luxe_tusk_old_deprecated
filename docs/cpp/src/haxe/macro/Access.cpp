#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Access
#include <haxe/macro/Access.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::Access Access_obj::ADynamic;

::haxe::macro::Access Access_obj::AInline;

::haxe::macro::Access Access_obj::AMacro;

::haxe::macro::Access Access_obj::AOverride;

::haxe::macro::Access Access_obj::APrivate;

::haxe::macro::Access Access_obj::APublic;

::haxe::macro::Access Access_obj::AStatic;

HX_DEFINE_CREATE_ENUM(Access_obj)

int Access_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ADynamic","\x3e","\xc1","\x35","\x89")) return 4;
	if (inName==HX_HCSTRING("AInline","\x7a","\x65","\xc7","\x5c")) return 5;
	if (inName==HX_HCSTRING("AMacro","\x0b","\x54","\x76","\x93")) return 6;
	if (inName==HX_HCSTRING("AOverride","\xad","\x87","\x25","\xb2")) return 3;
	if (inName==HX_HCSTRING("APrivate","\xc2","\x4e","\x8f","\xdc")) return 1;
	if (inName==HX_HCSTRING("APublic","\xca","\x1b","\x7b","\x2a")) return 0;
	if (inName==HX_HCSTRING("AStatic","\xcf","\x77","\x83","\xc9")) return 2;
	return super::__FindIndex(inName);
}

int Access_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ADynamic","\x3e","\xc1","\x35","\x89")) return 0;
	if (inName==HX_HCSTRING("AInline","\x7a","\x65","\xc7","\x5c")) return 0;
	if (inName==HX_HCSTRING("AMacro","\x0b","\x54","\x76","\x93")) return 0;
	if (inName==HX_HCSTRING("AOverride","\xad","\x87","\x25","\xb2")) return 0;
	if (inName==HX_HCSTRING("APrivate","\xc2","\x4e","\x8f","\xdc")) return 0;
	if (inName==HX_HCSTRING("APublic","\xca","\x1b","\x7b","\x2a")) return 0;
	if (inName==HX_HCSTRING("AStatic","\xcf","\x77","\x83","\xc9")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Access_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ADynamic","\x3e","\xc1","\x35","\x89")) return ADynamic;
	if (inName==HX_HCSTRING("AInline","\x7a","\x65","\xc7","\x5c")) return AInline;
	if (inName==HX_HCSTRING("AMacro","\x0b","\x54","\x76","\x93")) return AMacro;
	if (inName==HX_HCSTRING("AOverride","\xad","\x87","\x25","\xb2")) return AOverride;
	if (inName==HX_HCSTRING("APrivate","\xc2","\x4e","\x8f","\xdc")) return APrivate;
	if (inName==HX_HCSTRING("APublic","\xca","\x1b","\x7b","\x2a")) return APublic;
	if (inName==HX_HCSTRING("AStatic","\xcf","\x77","\x83","\xc9")) return AStatic;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("APublic","\xca","\x1b","\x7b","\x2a"),
	HX_HCSTRING("APrivate","\xc2","\x4e","\x8f","\xdc"),
	HX_HCSTRING("AStatic","\xcf","\x77","\x83","\xc9"),
	HX_HCSTRING("AOverride","\xad","\x87","\x25","\xb2"),
	HX_HCSTRING("ADynamic","\x3e","\xc1","\x35","\x89"),
	HX_HCSTRING("AInline","\x7a","\x65","\xc7","\x5c"),
	HX_HCSTRING("AMacro","\x0b","\x54","\x76","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Access_obj::ADynamic,"ADynamic");
	HX_MARK_MEMBER_NAME(Access_obj::AInline,"AInline");
	HX_MARK_MEMBER_NAME(Access_obj::AMacro,"AMacro");
	HX_MARK_MEMBER_NAME(Access_obj::AOverride,"AOverride");
	HX_MARK_MEMBER_NAME(Access_obj::APrivate,"APrivate");
	HX_MARK_MEMBER_NAME(Access_obj::APublic,"APublic");
	HX_MARK_MEMBER_NAME(Access_obj::AStatic,"AStatic");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Access_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Access_obj::ADynamic,"ADynamic");
	HX_VISIT_MEMBER_NAME(Access_obj::AInline,"AInline");
	HX_VISIT_MEMBER_NAME(Access_obj::AMacro,"AMacro");
	HX_VISIT_MEMBER_NAME(Access_obj::AOverride,"AOverride");
	HX_VISIT_MEMBER_NAME(Access_obj::APrivate,"APrivate");
	HX_VISIT_MEMBER_NAME(Access_obj::APublic,"APublic");
	HX_VISIT_MEMBER_NAME(Access_obj::AStatic,"AStatic");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Access_obj::__mClass;

Dynamic __Create_Access_obj() { return new Access_obj; }

void Access_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.Access","\x2e","\x83","\xa3","\x7d"), hx::TCanCast< Access_obj >,sStaticFields,sMemberFields,
	&__Create_Access_obj, &__Create,
	&super::__SGetClass(), &CreateAccess_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Access_obj::__boot()
{
hx::Static(ADynamic) = hx::CreateEnum< Access_obj >(HX_HCSTRING("ADynamic","\x3e","\xc1","\x35","\x89"),4);
hx::Static(AInline) = hx::CreateEnum< Access_obj >(HX_HCSTRING("AInline","\x7a","\x65","\xc7","\x5c"),5);
hx::Static(AMacro) = hx::CreateEnum< Access_obj >(HX_HCSTRING("AMacro","\x0b","\x54","\x76","\x93"),6);
hx::Static(AOverride) = hx::CreateEnum< Access_obj >(HX_HCSTRING("AOverride","\xad","\x87","\x25","\xb2"),3);
hx::Static(APrivate) = hx::CreateEnum< Access_obj >(HX_HCSTRING("APrivate","\xc2","\x4e","\x8f","\xdc"),1);
hx::Static(APublic) = hx::CreateEnum< Access_obj >(HX_HCSTRING("APublic","\xca","\x1b","\x7b","\x2a"),0);
hx::Static(AStatic) = hx::CreateEnum< Access_obj >(HX_HCSTRING("AStatic","\xcf","\x77","\x83","\xc9"),2);
}


} // end namespace haxe
} // end namespace macro
