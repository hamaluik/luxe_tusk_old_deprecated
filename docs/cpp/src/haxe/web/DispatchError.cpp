#include <hxcpp.h>

#ifndef INCLUDED_haxe_web_DispatchError
#include <haxe/web/DispatchError.h>
#endif
namespace haxe{
namespace web{

::haxe::web::DispatchError DispatchError_obj::DEInvalidValue;

::haxe::web::DispatchError DispatchError_obj::DEMissing;

::haxe::web::DispatchError  DispatchError_obj::DEMissingParam(::String p)
	{ return hx::CreateEnum< DispatchError_obj >(HX_HCSTRING("DEMissingParam","\x68","\xe4","\xce","\x1b"),3,hx::DynamicArray(0,1).Add(p)); }

::haxe::web::DispatchError  DispatchError_obj::DENotFound(::String part)
	{ return hx::CreateEnum< DispatchError_obj >(HX_HCSTRING("DENotFound","\xd0","\xb4","\x30","\x5d"),0,hx::DynamicArray(0,1).Add(part)); }

::haxe::web::DispatchError DispatchError_obj::DETooManyValues;

HX_DEFINE_CREATE_ENUM(DispatchError_obj)

int DispatchError_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("DEInvalidValue","\x1b","\x3a","\x0c","\x22")) return 1;
	if (inName==HX_HCSTRING("DEMissing","\xe5","\x8d","\x8e","\x73")) return 2;
	if (inName==HX_HCSTRING("DEMissingParam","\x68","\xe4","\xce","\x1b")) return 3;
	if (inName==HX_HCSTRING("DENotFound","\xd0","\xb4","\x30","\x5d")) return 0;
	if (inName==HX_HCSTRING("DETooManyValues","\x54","\x99","\xa4","\xd4")) return 4;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(DispatchError_obj,DEMissingParam,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(DispatchError_obj,DENotFound,return)

int DispatchError_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("DEInvalidValue","\x1b","\x3a","\x0c","\x22")) return 0;
	if (inName==HX_HCSTRING("DEMissing","\xe5","\x8d","\x8e","\x73")) return 0;
	if (inName==HX_HCSTRING("DEMissingParam","\x68","\xe4","\xce","\x1b")) return 1;
	if (inName==HX_HCSTRING("DENotFound","\xd0","\xb4","\x30","\x5d")) return 1;
	if (inName==HX_HCSTRING("DETooManyValues","\x54","\x99","\xa4","\xd4")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic DispatchError_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("DEInvalidValue","\x1b","\x3a","\x0c","\x22")) return DEInvalidValue;
	if (inName==HX_HCSTRING("DEMissing","\xe5","\x8d","\x8e","\x73")) return DEMissing;
	if (inName==HX_HCSTRING("DEMissingParam","\x68","\xe4","\xce","\x1b")) return DEMissingParam_dyn();
	if (inName==HX_HCSTRING("DENotFound","\xd0","\xb4","\x30","\x5d")) return DENotFound_dyn();
	if (inName==HX_HCSTRING("DETooManyValues","\x54","\x99","\xa4","\xd4")) return DETooManyValues;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("DENotFound","\xd0","\xb4","\x30","\x5d"),
	HX_HCSTRING("DEInvalidValue","\x1b","\x3a","\x0c","\x22"),
	HX_HCSTRING("DEMissing","\xe5","\x8d","\x8e","\x73"),
	HX_HCSTRING("DEMissingParam","\x68","\xe4","\xce","\x1b"),
	HX_HCSTRING("DETooManyValues","\x54","\x99","\xa4","\xd4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DispatchError_obj::DEInvalidValue,"DEInvalidValue");
	HX_MARK_MEMBER_NAME(DispatchError_obj::DEMissing,"DEMissing");
	HX_MARK_MEMBER_NAME(DispatchError_obj::DETooManyValues,"DETooManyValues");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DispatchError_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DispatchError_obj::DEInvalidValue,"DEInvalidValue");
	HX_VISIT_MEMBER_NAME(DispatchError_obj::DEMissing,"DEMissing");
	HX_VISIT_MEMBER_NAME(DispatchError_obj::DETooManyValues,"DETooManyValues");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class DispatchError_obj::__mClass;

Dynamic __Create_DispatchError_obj() { return new DispatchError_obj; }

void DispatchError_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.web.DispatchError","\xec","\x36","\x94","\x61"), hx::TCanCast< DispatchError_obj >,sStaticFields,sMemberFields,
	&__Create_DispatchError_obj, &__Create,
	&super::__SGetClass(), &CreateDispatchError_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void DispatchError_obj::__boot()
{
hx::Static(DEInvalidValue) = hx::CreateEnum< DispatchError_obj >(HX_HCSTRING("DEInvalidValue","\x1b","\x3a","\x0c","\x22"),1);
hx::Static(DEMissing) = hx::CreateEnum< DispatchError_obj >(HX_HCSTRING("DEMissing","\xe5","\x8d","\x8e","\x73"),2);
hx::Static(DETooManyValues) = hx::CreateEnum< DispatchError_obj >(HX_HCSTRING("DETooManyValues","\x54","\x99","\xa4","\xd4"),4);
}


} // end namespace haxe
} // end namespace web
