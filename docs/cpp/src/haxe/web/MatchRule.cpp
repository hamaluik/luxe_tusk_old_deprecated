#include <hxcpp.h>

#ifndef INCLUDED_haxe_web_MatchRule
#include <haxe/web/MatchRule.h>
#endif
namespace haxe{
namespace web{

::haxe::web::MatchRule MatchRule_obj::MRBool;

::haxe::web::MatchRule MatchRule_obj::MRDate;

::haxe::web::MatchRule MatchRule_obj::MRDispatch;

::haxe::web::MatchRule  MatchRule_obj::MREnum(::String e)
	{ return hx::CreateEnum< MatchRule_obj >(HX_HCSTRING("MREnum","\x06","\xf1","\x45","\x2e"),5,hx::DynamicArray(0,1).Add(e)); }

::haxe::web::MatchRule MatchRule_obj::MRFloat;

::haxe::web::MatchRule MatchRule_obj::MRInt;

::haxe::web::MatchRule  MatchRule_obj::MROpt(::haxe::web::MatchRule r)
	{ return hx::CreateEnum< MatchRule_obj >(HX_HCSTRING("MROpt","\xce","\x7d","\x4a","\x8c"),8,hx::DynamicArray(0,1).Add(r)); }

::haxe::web::MatchRule  MatchRule_obj::MRSpod(::String c,bool lock)
	{ return hx::CreateEnum< MatchRule_obj >(HX_HCSTRING("MRSpod","\xf7","\x6c","\x88","\x37"),7,hx::DynamicArray(0,2).Add(c).Add(lock)); }

::haxe::web::MatchRule MatchRule_obj::MRString;

HX_DEFINE_CREATE_ENUM(MatchRule_obj)

int MatchRule_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("MRBool","\x2f","\x0a","\x4b","\x2c")) return 1;
	if (inName==HX_HCSTRING("MRDate","\x33","\xdc","\x92","\x2d")) return 4;
	if (inName==HX_HCSTRING("MRDispatch","\x3f","\x3b","\xcf","\x5f")) return 6;
	if (inName==HX_HCSTRING("MREnum","\x06","\xf1","\x45","\x2e")) return 5;
	if (inName==HX_HCSTRING("MRFloat","\xf7","\x83","\xfc","\xe0")) return 2;
	if (inName==HX_HCSTRING("MRInt","\x8a","\xee","\x45","\x8c")) return 0;
	if (inName==HX_HCSTRING("MROpt","\xce","\x7d","\x4a","\x8c")) return 8;
	if (inName==HX_HCSTRING("MRSpod","\xf7","\x6c","\x88","\x37")) return 7;
	if (inName==HX_HCSTRING("MRString","\x16","\xfa","\xd0","\xcb")) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(MatchRule_obj,MREnum,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(MatchRule_obj,MROpt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(MatchRule_obj,MRSpod,return)

int MatchRule_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("MRBool","\x2f","\x0a","\x4b","\x2c")) return 0;
	if (inName==HX_HCSTRING("MRDate","\x33","\xdc","\x92","\x2d")) return 0;
	if (inName==HX_HCSTRING("MRDispatch","\x3f","\x3b","\xcf","\x5f")) return 0;
	if (inName==HX_HCSTRING("MREnum","\x06","\xf1","\x45","\x2e")) return 1;
	if (inName==HX_HCSTRING("MRFloat","\xf7","\x83","\xfc","\xe0")) return 0;
	if (inName==HX_HCSTRING("MRInt","\x8a","\xee","\x45","\x8c")) return 0;
	if (inName==HX_HCSTRING("MROpt","\xce","\x7d","\x4a","\x8c")) return 1;
	if (inName==HX_HCSTRING("MRSpod","\xf7","\x6c","\x88","\x37")) return 2;
	if (inName==HX_HCSTRING("MRString","\x16","\xfa","\xd0","\xcb")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic MatchRule_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("MRBool","\x2f","\x0a","\x4b","\x2c")) return MRBool;
	if (inName==HX_HCSTRING("MRDate","\x33","\xdc","\x92","\x2d")) return MRDate;
	if (inName==HX_HCSTRING("MRDispatch","\x3f","\x3b","\xcf","\x5f")) return MRDispatch;
	if (inName==HX_HCSTRING("MREnum","\x06","\xf1","\x45","\x2e")) return MREnum_dyn();
	if (inName==HX_HCSTRING("MRFloat","\xf7","\x83","\xfc","\xe0")) return MRFloat;
	if (inName==HX_HCSTRING("MRInt","\x8a","\xee","\x45","\x8c")) return MRInt;
	if (inName==HX_HCSTRING("MROpt","\xce","\x7d","\x4a","\x8c")) return MROpt_dyn();
	if (inName==HX_HCSTRING("MRSpod","\xf7","\x6c","\x88","\x37")) return MRSpod_dyn();
	if (inName==HX_HCSTRING("MRString","\x16","\xfa","\xd0","\xcb")) return MRString;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("MRInt","\x8a","\xee","\x45","\x8c"),
	HX_HCSTRING("MRBool","\x2f","\x0a","\x4b","\x2c"),
	HX_HCSTRING("MRFloat","\xf7","\x83","\xfc","\xe0"),
	HX_HCSTRING("MRString","\x16","\xfa","\xd0","\xcb"),
	HX_HCSTRING("MRDate","\x33","\xdc","\x92","\x2d"),
	HX_HCSTRING("MREnum","\x06","\xf1","\x45","\x2e"),
	HX_HCSTRING("MRDispatch","\x3f","\x3b","\xcf","\x5f"),
	HX_HCSTRING("MRSpod","\xf7","\x6c","\x88","\x37"),
	HX_HCSTRING("MROpt","\xce","\x7d","\x4a","\x8c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MatchRule_obj::MRBool,"MRBool");
	HX_MARK_MEMBER_NAME(MatchRule_obj::MRDate,"MRDate");
	HX_MARK_MEMBER_NAME(MatchRule_obj::MRDispatch,"MRDispatch");
	HX_MARK_MEMBER_NAME(MatchRule_obj::MRFloat,"MRFloat");
	HX_MARK_MEMBER_NAME(MatchRule_obj::MRInt,"MRInt");
	HX_MARK_MEMBER_NAME(MatchRule_obj::MRString,"MRString");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MatchRule_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MatchRule_obj::MRBool,"MRBool");
	HX_VISIT_MEMBER_NAME(MatchRule_obj::MRDate,"MRDate");
	HX_VISIT_MEMBER_NAME(MatchRule_obj::MRDispatch,"MRDispatch");
	HX_VISIT_MEMBER_NAME(MatchRule_obj::MRFloat,"MRFloat");
	HX_VISIT_MEMBER_NAME(MatchRule_obj::MRInt,"MRInt");
	HX_VISIT_MEMBER_NAME(MatchRule_obj::MRString,"MRString");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class MatchRule_obj::__mClass;

Dynamic __Create_MatchRule_obj() { return new MatchRule_obj; }

void MatchRule_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.web.MatchRule","\x1f","\x6a","\x82","\x1b"), hx::TCanCast< MatchRule_obj >,sStaticFields,sMemberFields,
	&__Create_MatchRule_obj, &__Create,
	&super::__SGetClass(), &CreateMatchRule_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void MatchRule_obj::__boot()
{
hx::Static(MRBool) = hx::CreateEnum< MatchRule_obj >(HX_HCSTRING("MRBool","\x2f","\x0a","\x4b","\x2c"),1);
hx::Static(MRDate) = hx::CreateEnum< MatchRule_obj >(HX_HCSTRING("MRDate","\x33","\xdc","\x92","\x2d"),4);
hx::Static(MRDispatch) = hx::CreateEnum< MatchRule_obj >(HX_HCSTRING("MRDispatch","\x3f","\x3b","\xcf","\x5f"),6);
hx::Static(MRFloat) = hx::CreateEnum< MatchRule_obj >(HX_HCSTRING("MRFloat","\xf7","\x83","\xfc","\xe0"),2);
hx::Static(MRInt) = hx::CreateEnum< MatchRule_obj >(HX_HCSTRING("MRInt","\x8a","\xee","\x45","\x8c"),0);
hx::Static(MRString) = hx::CreateEnum< MatchRule_obj >(HX_HCSTRING("MRString","\x16","\xfa","\xd0","\xcb"),3);
}


} // end namespace haxe
} // end namespace web
