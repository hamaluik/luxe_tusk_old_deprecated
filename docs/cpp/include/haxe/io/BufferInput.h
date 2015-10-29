#ifndef INCLUDED_haxe_io_BufferInput
#define INCLUDED_haxe_io_BufferInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
HX_DECLARE_CLASS2(haxe,io,BufferInput)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  BufferInput_obj : public ::haxe::io::Input_obj{
	public:
		typedef ::haxe::io::Input_obj super;
		typedef BufferInput_obj OBJ_;
		BufferInput_obj();
		Void __construct(::haxe::io::Input i,::haxe::io::Bytes buf,Dynamic __o_pos,Dynamic __o_available);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.io.BufferInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BufferInput_obj > __new(::haxe::io::Input i,::haxe::io::Bytes buf,Dynamic __o_pos,Dynamic __o_available);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BufferInput_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BufferInput","\xca","\xee","\x9b","\x3f"); }

		::haxe::io::Input i;
		::haxe::io::Bytes buf;
		int available;
		int pos;
		virtual Void refill( );
		Dynamic refill_dyn();

		virtual int readByte( );

		virtual int readBytes( ::haxe::io::Bytes buf,int pos,int len);

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_BufferInput */ 
