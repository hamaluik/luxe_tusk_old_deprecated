#ifndef INCLUDED_tusk_events_EventType
#define INCLUDED_tusk_events_EventType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tusk,events,EventType)
namespace tusk{
namespace events{


class EventType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef EventType_obj OBJ_;

	public:
		EventType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("tusk.events.EventType","\xf4","\x49","\x24","\xad"); }
		::String __ToString() const { return HX_HCSTRING("EventType.","\xda","\x7d","\xd7","\x8d") + tag; }

		static ::tusk::events::EventType Destroy;
		static inline ::tusk::events::EventType Destroy_dyn() { return Destroy; }
		static ::tusk::events::EventType Render;
		static inline ::tusk::events::EventType Render_dyn() { return Render; }
		static ::tusk::events::EventType Start;
		static inline ::tusk::events::EventType Start_dyn() { return Start; }
		static ::tusk::events::EventType Update;
		static inline ::tusk::events::EventType Update_dyn() { return Update; }
};

} // end namespace tusk
} // end namespace events

#endif /* INCLUDED_tusk_events_EventType */ 
