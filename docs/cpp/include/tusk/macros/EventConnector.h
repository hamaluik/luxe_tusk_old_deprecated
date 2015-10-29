#ifndef INCLUDED_tusk_macros_EventConnector
#define INCLUDED_tusk_macros_EventConnector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tusk,macros,EventConnector)
namespace tusk{
namespace macros{


class HXCPP_CLASS_ATTRIBUTES  EventConnector_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EventConnector_obj OBJ_;
		EventConnector_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="tusk.macros.EventConnector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EventConnector_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventConnector_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EventConnector","\x33","\xc4","\x11","\x56"); }

		static Dynamic connect;
		static Dynamic &connect_dyn() { return connect;}
		static Void connectEvent( Dynamic connectField,Dynamic eventField);
		static Dynamic connectEvent_dyn();

		static Void disconnectEvent( Dynamic disconnectField,Dynamic eventField);
		static Dynamic disconnectEvent_dyn();

};

} // end namespace tusk
} // end namespace macros

#endif /* INCLUDED_tusk_macros_EventConnector */ 
