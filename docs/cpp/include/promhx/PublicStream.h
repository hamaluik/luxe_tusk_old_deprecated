#ifndef INCLUDED_promhx_PublicStream
#define INCLUDED_promhx_PublicStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_promhx_Stream
#include <promhx/Stream.h>
#endif
HX_DECLARE_CLASS1(promhx,Deferred)
HX_DECLARE_CLASS1(promhx,PublicStream)
HX_DECLARE_CLASS1(promhx,Stream)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)
namespace promhx{


class HXCPP_CLASS_ATTRIBUTES  PublicStream_obj : public ::promhx::Stream_obj{
	public:
		typedef ::promhx::Stream_obj super;
		typedef PublicStream_obj OBJ_;
		PublicStream_obj();
		Void __construct(::promhx::Deferred def);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="promhx.PublicStream")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PublicStream_obj > __new(::promhx::Deferred def);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PublicStream_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PublicStream","\x29","\xba","\x12","\xdc"); }

		static ::promhx::PublicStream publicstream( Dynamic val);
		static Dynamic publicstream_dyn();

		virtual Void resolve( Dynamic val);
		Dynamic resolve_dyn();

		virtual Void throwError( Dynamic e);
		Dynamic throwError_dyn();

		virtual Void update( Dynamic val);
		Dynamic update_dyn();

};

} // end namespace promhx

#endif /* INCLUDED_promhx_PublicStream */ 
