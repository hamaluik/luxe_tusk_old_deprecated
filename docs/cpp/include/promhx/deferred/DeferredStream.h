#ifndef INCLUDED_promhx_deferred_DeferredStream
#define INCLUDED_promhx_deferred_DeferredStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_promhx_Deferred
#include <promhx/Deferred.h>
#endif
HX_DECLARE_CLASS1(promhx,Deferred)
HX_DECLARE_CLASS1(promhx,Stream)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)
HX_DECLARE_CLASS2(promhx,deferred,DeferredStream)
namespace promhx{
namespace deferred{


class HXCPP_CLASS_ATTRIBUTES  DeferredStream_obj : public ::promhx::Deferred_obj{
	public:
		typedef ::promhx::Deferred_obj super;
		typedef DeferredStream_obj OBJ_;
		DeferredStream_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="promhx.deferred.DeferredStream")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DeferredStream_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DeferredStream_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DeferredStream","\x1f","\xbd","\xb6","\xea"); }

		::promhx::Stream boundStream;
};

} // end namespace promhx
} // end namespace deferred

#endif /* INCLUDED_promhx_deferred_DeferredStream */ 
