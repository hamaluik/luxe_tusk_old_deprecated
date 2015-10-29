#include <hxcpp.h>

#ifndef INCLUDED_tusk_events_EventType
#include <tusk/events/EventType.h>
#endif
namespace tusk{
namespace events{

::tusk::events::EventType EventType_obj::Destroy;

::tusk::events::EventType EventType_obj::Render;

::tusk::events::EventType EventType_obj::Start;

::tusk::events::EventType EventType_obj::Update;

HX_DEFINE_CREATE_ENUM(EventType_obj)

int EventType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Destroy","\xda","\x54","\xd7","\xf1")) return 3;
	if (inName==HX_HCSTRING("Render","\x76","\xdf","\xbd","\x39")) return 2;
	if (inName==HX_HCSTRING("Start","\x42","\xe4","\x38","\x17")) return 0;
	if (inName==HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb")) return 1;
	return super::__FindIndex(inName);
}

int EventType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Destroy","\xda","\x54","\xd7","\xf1")) return 0;
	if (inName==HX_HCSTRING("Render","\x76","\xdf","\xbd","\x39")) return 0;
	if (inName==HX_HCSTRING("Start","\x42","\xe4","\x38","\x17")) return 0;
	if (inName==HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic EventType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Destroy","\xda","\x54","\xd7","\xf1")) return Destroy;
	if (inName==HX_HCSTRING("Render","\x76","\xdf","\xbd","\x39")) return Render;
	if (inName==HX_HCSTRING("Start","\x42","\xe4","\x38","\x17")) return Start;
	if (inName==HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb")) return Update;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Start","\x42","\xe4","\x38","\x17"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
	HX_HCSTRING("Render","\x76","\xdf","\xbd","\x39"),
	HX_HCSTRING("Destroy","\xda","\x54","\xd7","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventType_obj::Destroy,"Destroy");
	HX_MARK_MEMBER_NAME(EventType_obj::Render,"Render");
	HX_MARK_MEMBER_NAME(EventType_obj::Start,"Start");
	HX_MARK_MEMBER_NAME(EventType_obj::Update,"Update");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EventType_obj::Destroy,"Destroy");
	HX_VISIT_MEMBER_NAME(EventType_obj::Render,"Render");
	HX_VISIT_MEMBER_NAME(EventType_obj::Start,"Start");
	HX_VISIT_MEMBER_NAME(EventType_obj::Update,"Update");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class EventType_obj::__mClass;

Dynamic __Create_EventType_obj() { return new EventType_obj; }

void EventType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("tusk.events.EventType","\xf4","\x49","\x24","\xad"), hx::TCanCast< EventType_obj >,sStaticFields,sMemberFields,
	&__Create_EventType_obj, &__Create,
	&super::__SGetClass(), &CreateEventType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void EventType_obj::__boot()
{
hx::Static(Destroy) = hx::CreateEnum< EventType_obj >(HX_HCSTRING("Destroy","\xda","\x54","\xd7","\xf1"),3);
hx::Static(Render) = hx::CreateEnum< EventType_obj >(HX_HCSTRING("Render","\x76","\xdf","\xbd","\x39"),2);
hx::Static(Start) = hx::CreateEnum< EventType_obj >(HX_HCSTRING("Start","\x42","\xe4","\x38","\x17"),0);
hx::Static(Update) = hx::CreateEnum< EventType_obj >(HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),1);
}


} // end namespace tusk
} // end namespace events
