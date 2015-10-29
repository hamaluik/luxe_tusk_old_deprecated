#include <hxcpp.h>

#ifndef INCLUDED_haxe_web_DispatchRule
#include <haxe/web/DispatchRule.h>
#endif
#ifndef INCLUDED_haxe_web_MatchRule
#include <haxe/web/MatchRule.h>
#endif
namespace haxe{
namespace web{

::haxe::web::DispatchRule  DispatchRule_obj::DRArgs(::haxe::web::DispatchRule r,cpp::ArrayBase args,bool opt)
	{ return hx::CreateEnum< DispatchRule_obj >(HX_HCSTRING("DRArgs","\x0b","\xd4","\x6d","\x92"),2,hx::DynamicArray(0,3).Add(r).Add(args).Add(opt)); }

::haxe::web::DispatchRule  DispatchRule_obj::DRMatch(::haxe::web::MatchRule r)
	{ return hx::CreateEnum< DispatchRule_obj >(HX_HCSTRING("DRMatch","\xd7","\xda","\x47","\x6b"),0,hx::DynamicArray(0,1).Add(r)); }

::haxe::web::DispatchRule  DispatchRule_obj::DRMeta(::haxe::web::DispatchRule r)
	{ return hx::CreateEnum< DispatchRule_obj >(HX_HCSTRING("DRMeta","\x73","\x91","\x52","\x9a"),3,hx::DynamicArray(0,1).Add(r)); }

::haxe::web::DispatchRule  DispatchRule_obj::DRMult(Array< ::Dynamic > r)
	{ return hx::CreateEnum< DispatchRule_obj >(HX_HCSTRING("DRMult","\x9e","\xae","\x5e","\x9a"),1,hx::DynamicArray(0,1).Add(r)); }

HX_DEFINE_CREATE_ENUM(DispatchRule_obj)

int DispatchRule_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("DRArgs","\x0b","\xd4","\x6d","\x92")) return 2;
	if (inName==HX_HCSTRING("DRMatch","\xd7","\xda","\x47","\x6b")) return 0;
	if (inName==HX_HCSTRING("DRMeta","\x73","\x91","\x52","\x9a")) return 3;
	if (inName==HX_HCSTRING("DRMult","\x9e","\xae","\x5e","\x9a")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC3(DispatchRule_obj,DRArgs,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(DispatchRule_obj,DRMatch,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(DispatchRule_obj,DRMeta,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(DispatchRule_obj,DRMult,return)

int DispatchRule_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("DRArgs","\x0b","\xd4","\x6d","\x92")) return 3;
	if (inName==HX_HCSTRING("DRMatch","\xd7","\xda","\x47","\x6b")) return 1;
	if (inName==HX_HCSTRING("DRMeta","\x73","\x91","\x52","\x9a")) return 1;
	if (inName==HX_HCSTRING("DRMult","\x9e","\xae","\x5e","\x9a")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic DispatchRule_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("DRArgs","\x0b","\xd4","\x6d","\x92")) return DRArgs_dyn();
	if (inName==HX_HCSTRING("DRMatch","\xd7","\xda","\x47","\x6b")) return DRMatch_dyn();
	if (inName==HX_HCSTRING("DRMeta","\x73","\x91","\x52","\x9a")) return DRMeta_dyn();
	if (inName==HX_HCSTRING("DRMult","\x9e","\xae","\x5e","\x9a")) return DRMult_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("DRMatch","\xd7","\xda","\x47","\x6b"),
	HX_HCSTRING("DRMult","\x9e","\xae","\x5e","\x9a"),
	HX_HCSTRING("DRArgs","\x0b","\xd4","\x6d","\x92"),
	HX_HCSTRING("DRMeta","\x73","\x91","\x52","\x9a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DispatchRule_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class DispatchRule_obj::__mClass;

Dynamic __Create_DispatchRule_obj() { return new DispatchRule_obj; }

void DispatchRule_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.web.DispatchRule","\x58","\xbe","\x45","\xbd"), hx::TCanCast< DispatchRule_obj >,sStaticFields,sMemberFields,
	&__Create_DispatchRule_obj, &__Create,
	&super::__SGetClass(), &CreateDispatchRule_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void DispatchRule_obj::__boot()
{
}


} // end namespace haxe
} // end namespace web
