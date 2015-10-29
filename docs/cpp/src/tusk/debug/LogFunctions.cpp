#include <hxcpp.h>

#ifndef INCLUDED_tusk_debug_LogFunctions
#include <tusk/debug/LogFunctions.h>
#endif
namespace tusk{
namespace debug{

::tusk::debug::LogFunctions LogFunctions_obj::Debug;

::tusk::debug::LogFunctions LogFunctions_obj::Error;

::tusk::debug::LogFunctions LogFunctions_obj::Fatal;

::tusk::debug::LogFunctions LogFunctions_obj::Info;

::tusk::debug::LogFunctions LogFunctions_obj::Trace;

::tusk::debug::LogFunctions LogFunctions_obj::Warn;

HX_DEFINE_CREATE_ENUM(LogFunctions_obj)

int LogFunctions_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Debug","\x33","\xc2","\x4c","\x6a")) return 4;
	if (inName==HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06")) return 1;
	if (inName==HX_HCSTRING("Fatal","\xe4","\xa7","\x82","\x8e")) return 0;
	if (inName==HX_HCSTRING("Info","\x8e","\x64","\x94","\x30")) return 3;
	if (inName==HX_HCSTRING("Trace","\x65","\xfe","\x4c","\xa9")) return 5;
	if (inName==HX_HCSTRING("Warn","\x66","\x8e","\xcb","\x39")) return 2;
	return super::__FindIndex(inName);
}

int LogFunctions_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Debug","\x33","\xc2","\x4c","\x6a")) return 0;
	if (inName==HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06")) return 0;
	if (inName==HX_HCSTRING("Fatal","\xe4","\xa7","\x82","\x8e")) return 0;
	if (inName==HX_HCSTRING("Info","\x8e","\x64","\x94","\x30")) return 0;
	if (inName==HX_HCSTRING("Trace","\x65","\xfe","\x4c","\xa9")) return 0;
	if (inName==HX_HCSTRING("Warn","\x66","\x8e","\xcb","\x39")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic LogFunctions_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Debug","\x33","\xc2","\x4c","\x6a")) return Debug;
	if (inName==HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06")) return Error;
	if (inName==HX_HCSTRING("Fatal","\xe4","\xa7","\x82","\x8e")) return Fatal;
	if (inName==HX_HCSTRING("Info","\x8e","\x64","\x94","\x30")) return Info;
	if (inName==HX_HCSTRING("Trace","\x65","\xfe","\x4c","\xa9")) return Trace;
	if (inName==HX_HCSTRING("Warn","\x66","\x8e","\xcb","\x39")) return Warn;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Fatal","\xe4","\xa7","\x82","\x8e"),
	HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"),
	HX_HCSTRING("Warn","\x66","\x8e","\xcb","\x39"),
	HX_HCSTRING("Info","\x8e","\x64","\x94","\x30"),
	HX_HCSTRING("Debug","\x33","\xc2","\x4c","\x6a"),
	HX_HCSTRING("Trace","\x65","\xfe","\x4c","\xa9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogFunctions_obj::Debug,"Debug");
	HX_MARK_MEMBER_NAME(LogFunctions_obj::Error,"Error");
	HX_MARK_MEMBER_NAME(LogFunctions_obj::Fatal,"Fatal");
	HX_MARK_MEMBER_NAME(LogFunctions_obj::Info,"Info");
	HX_MARK_MEMBER_NAME(LogFunctions_obj::Trace,"Trace");
	HX_MARK_MEMBER_NAME(LogFunctions_obj::Warn,"Warn");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogFunctions_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LogFunctions_obj::Debug,"Debug");
	HX_VISIT_MEMBER_NAME(LogFunctions_obj::Error,"Error");
	HX_VISIT_MEMBER_NAME(LogFunctions_obj::Fatal,"Fatal");
	HX_VISIT_MEMBER_NAME(LogFunctions_obj::Info,"Info");
	HX_VISIT_MEMBER_NAME(LogFunctions_obj::Trace,"Trace");
	HX_VISIT_MEMBER_NAME(LogFunctions_obj::Warn,"Warn");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class LogFunctions_obj::__mClass;

Dynamic __Create_LogFunctions_obj() { return new LogFunctions_obj; }

void LogFunctions_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("tusk.debug.LogFunctions","\x47","\xa7","\x43","\x79"), hx::TCanCast< LogFunctions_obj >,sStaticFields,sMemberFields,
	&__Create_LogFunctions_obj, &__Create,
	&super::__SGetClass(), &CreateLogFunctions_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void LogFunctions_obj::__boot()
{
hx::Static(Debug) = hx::CreateEnum< LogFunctions_obj >(HX_HCSTRING("Debug","\x33","\xc2","\x4c","\x6a"),4);
hx::Static(Error) = hx::CreateEnum< LogFunctions_obj >(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"),1);
hx::Static(Fatal) = hx::CreateEnum< LogFunctions_obj >(HX_HCSTRING("Fatal","\xe4","\xa7","\x82","\x8e"),0);
hx::Static(Info) = hx::CreateEnum< LogFunctions_obj >(HX_HCSTRING("Info","\x8e","\x64","\x94","\x30"),3);
hx::Static(Trace) = hx::CreateEnum< LogFunctions_obj >(HX_HCSTRING("Trace","\x65","\xfe","\x4c","\xa9"),5);
hx::Static(Warn) = hx::CreateEnum< LogFunctions_obj >(HX_HCSTRING("Warn","\x66","\x8e","\xcb","\x39"),2);
}


} // end namespace tusk
} // end namespace debug
