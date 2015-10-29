#include <hxcpp.h>

#ifndef INCLUDED_promhx_error_PromiseError
#include <promhx/error/PromiseError.h>
#endif
namespace promhx{
namespace error{

::promhx::error::PromiseError  PromiseError_obj::AlreadyResolved(::String message)
	{ return hx::CreateEnum< PromiseError_obj >(HX_HCSTRING("AlreadyResolved","\x90","\x2f","\x1b","\x81"),0,hx::DynamicArray(0,1).Add(message)); }

::promhx::error::PromiseError  PromiseError_obj::DownstreamNotFullfilled(::String message)
	{ return hx::CreateEnum< PromiseError_obj >(HX_HCSTRING("DownstreamNotFullfilled","\x82","\x7f","\xe1","\xee"),1,hx::DynamicArray(0,1).Add(message)); }

HX_DEFINE_CREATE_ENUM(PromiseError_obj)

int PromiseError_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("AlreadyResolved","\x90","\x2f","\x1b","\x81")) return 0;
	if (inName==HX_HCSTRING("DownstreamNotFullfilled","\x82","\x7f","\xe1","\xee")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(PromiseError_obj,AlreadyResolved,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(PromiseError_obj,DownstreamNotFullfilled,return)

int PromiseError_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("AlreadyResolved","\x90","\x2f","\x1b","\x81")) return 1;
	if (inName==HX_HCSTRING("DownstreamNotFullfilled","\x82","\x7f","\xe1","\xee")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic PromiseError_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("AlreadyResolved","\x90","\x2f","\x1b","\x81")) return AlreadyResolved_dyn();
	if (inName==HX_HCSTRING("DownstreamNotFullfilled","\x82","\x7f","\xe1","\xee")) return DownstreamNotFullfilled_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("AlreadyResolved","\x90","\x2f","\x1b","\x81"),
	HX_HCSTRING("DownstreamNotFullfilled","\x82","\x7f","\xe1","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PromiseError_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class PromiseError_obj::__mClass;

Dynamic __Create_PromiseError_obj() { return new PromiseError_obj; }

void PromiseError_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("promhx.error.PromiseError","\xb1","\x53","\x45","\x2b"), hx::TCanCast< PromiseError_obj >,sStaticFields,sMemberFields,
	&__Create_PromiseError_obj, &__Create,
	&super::__SGetClass(), &CreatePromiseError_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void PromiseError_obj::__boot()
{
}


} // end namespace promhx
} // end namespace error
