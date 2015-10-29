#ifndef INCLUDED_promhx_Deferred
#define INCLUDED_promhx_Deferred

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
HX_DECLARE_CLASS1(promhx,Deferred)
HX_DECLARE_CLASS1(promhx,Promise)
HX_DECLARE_CLASS1(promhx,PublicStream)
HX_DECLARE_CLASS1(promhx,Stream)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)
namespace promhx{


class HXCPP_CLASS_ATTRIBUTES  Deferred_obj : public ::promhx::base::AsyncBase_obj{
	public:
		typedef ::promhx::base::AsyncBase_obj super;
		typedef Deferred_obj OBJ_;
		Deferred_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="promhx.Deferred")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Deferred_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Deferred_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Deferred","\x3f","\xbb","\xee","\xd4"); }

		virtual Void resolve( Dynamic val);
		Dynamic resolve_dyn();

		virtual Void throwError( Dynamic e);
		Dynamic throwError_dyn();

		virtual ::promhx::Promise promise( );
		Dynamic promise_dyn();

		virtual ::promhx::Stream stream( );
		Dynamic stream_dyn();

		virtual ::promhx::PublicStream publicStream( );
		Dynamic publicStream_dyn();

};

} // end namespace promhx

#endif /* INCLUDED_promhx_Deferred */ 
