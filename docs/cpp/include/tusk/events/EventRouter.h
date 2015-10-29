#ifndef INCLUDED_tusk_events_EventRouter
#define INCLUDED_tusk_events_EventRouter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(tusk,events,EventRouter)
HX_DECLARE_CLASS2(tusk,events,EventType)
namespace tusk{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  EventRouter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EventRouter_obj OBJ_;
		EventRouter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.events.EventRouter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EventRouter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventRouter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("EventRouter","\x63","\xbe","\x57","\x03"); }

		::haxe::ds::EnumValueMap handlers;
		virtual Void registerHandler( ::tusk::events::EventType type,Dynamic handler);
		Dynamic registerHandler_dyn();

		virtual Void unregisterHandler( ::tusk::events::EventType type,Dynamic handler);
		Dynamic unregisterHandler_dyn();

		virtual Void onEvent( ::tusk::events::EventType type,Dynamic data);
		Dynamic onEvent_dyn();

};

} // end namespace tusk
} // end namespace events

#endif /* INCLUDED_tusk_events_EventRouter */ 
