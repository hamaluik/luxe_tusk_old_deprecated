#ifndef INCLUDED_cpp_net_Poll
#define INCLUDED_cpp_net_Poll

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,net,Poll)
HX_DECLARE_CLASS2(sys,net,Socket)
namespace cpp{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  Poll_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Poll_obj OBJ_;
		Poll_obj();
		Void __construct(int n);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="cpp.net.Poll")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Poll_obj > __new(int n);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Poll_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Poll","\x5f","\xaa","\x35","\x35"); }

		static void __boot();
		static Dynamic socket_poll_alloc;
		static Dynamic &socket_poll_alloc_dyn() { return socket_poll_alloc;}
		static Dynamic socket_poll;
		static Dynamic &socket_poll_dyn() { return socket_poll;}
		static Dynamic socket_poll_prepare;
		static Dynamic &socket_poll_prepare_dyn() { return socket_poll_prepare;}
		static Dynamic socket_poll_events;
		static Dynamic &socket_poll_events_dyn() { return socket_poll_events;}
		Dynamic mPollHandle;
		cpp::ArrayBase readIndexes;
		cpp::ArrayBase writeIndexes;
		virtual Void prepare( Array< ::Dynamic > read,Array< ::Dynamic > write);
		Dynamic prepare_dyn();

		virtual Void events( Dynamic t);
		Dynamic events_dyn();

		virtual Array< ::Dynamic > poll( Array< ::Dynamic > a,Dynamic t);
		Dynamic poll_dyn();

};

} // end namespace cpp
} // end namespace net

#endif /* INCLUDED_cpp_net_Poll */ 
