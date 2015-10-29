#ifndef INCLUDED_promhx_deferred_DeferredPromise
#define INCLUDED_promhx_deferred_DeferredPromise

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_promhx_Deferred
#include <promhx/Deferred.h>
#endif
HX_DECLARE_CLASS1(promhx,Deferred)
HX_DECLARE_CLASS1(promhx,Promise)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)
HX_DECLARE_CLASS2(promhx,deferred,DeferredPromise)
namespace promhx{
namespace deferred{


class HXCPP_CLASS_ATTRIBUTES  DeferredPromise_obj : public ::promhx::Deferred_obj{
	public:
		typedef ::promhx::Deferred_obj super;
		typedef DeferredPromise_obj OBJ_;
		DeferredPromise_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="promhx.deferred.DeferredPromise")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DeferredPromise_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DeferredPromise_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DeferredPromise","\x1c","\xb0","\xd3","\x76"); }

		::promhx::Promise boundPromise;
};

} // end namespace promhx
} // end namespace deferred

#endif /* INCLUDED_promhx_deferred_DeferredPromise */ 
