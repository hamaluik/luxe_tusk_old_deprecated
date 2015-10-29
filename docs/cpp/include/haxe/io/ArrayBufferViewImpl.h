#ifndef INCLUDED_haxe_io_ArrayBufferViewImpl
#define INCLUDED_haxe_io_ArrayBufferViewImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,ArrayBufferViewImpl)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  ArrayBufferViewImpl_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrayBufferViewImpl_obj OBJ_;
		ArrayBufferViewImpl_obj();
		Void __construct(::haxe::io::Bytes bytes,int pos,int length);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.io.ArrayBufferViewImpl")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ArrayBufferViewImpl_obj > __new(::haxe::io::Bytes bytes,int pos,int length);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayBufferViewImpl_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ArrayBufferViewImpl","\x5e","\xa0","\x91","\x73"); }

		::haxe::io::Bytes bytes;
		int byteOffset;
		int byteLength;
		virtual ::haxe::io::ArrayBufferViewImpl sub( int begin,Dynamic length);
		Dynamic sub_dyn();

		virtual ::haxe::io::ArrayBufferViewImpl subarray( Dynamic begin,Dynamic end);
		Dynamic subarray_dyn();

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_ArrayBufferViewImpl */ 
