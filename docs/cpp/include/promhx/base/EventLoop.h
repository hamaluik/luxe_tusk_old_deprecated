#ifndef INCLUDED_promhx_base_EventLoop
#define INCLUDED_promhx_base_EventLoop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(promhx,base,EventLoop)
namespace promhx{
namespace base{


class HXCPP_CLASS_ATTRIBUTES  EventLoop_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EventLoop_obj OBJ_;
		EventLoop_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="promhx.base.EventLoop")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EventLoop_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventLoop_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EventLoop","\x7e","\x8f","\x97","\x98"); }

		static void __boot();
		static ::List queue;
		static Dynamic nextLoop;
		static Dynamic &nextLoop_dyn() { return nextLoop;}
		static Void enqueue( Dynamic eqf);
		static Dynamic enqueue_dyn();

		static Dynamic set_nextLoop( Dynamic f);
		static Dynamic set_nextLoop_dyn();

		static bool queueEmpty( );
		static Dynamic queueEmpty_dyn();

		static bool finish( hx::Null< int >  max_iterations);
		static Dynamic finish_dyn();

		static Void clear( );
		static Dynamic clear_dyn();

		static Void f( );
		static Dynamic f_dyn();

		static Void continueOnNextLoop( );
		static Dynamic continueOnNextLoop_dyn();

};

} // end namespace promhx
} // end namespace base

#endif /* INCLUDED_promhx_base_EventLoop */ 
