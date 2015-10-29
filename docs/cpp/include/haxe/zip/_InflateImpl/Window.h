#ifndef INCLUDED_haxe_zip__InflateImpl_Window
#define INCLUDED_haxe_zip__InflateImpl_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,Adler32)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(haxe,zip,_InflateImpl,Window)
namespace haxe{
namespace zip{
namespace _InflateImpl{


class HXCPP_CLASS_ATTRIBUTES  Window_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Window_obj OBJ_;
		Window_obj();
		Void __construct(bool hasCrc);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.zip._InflateImpl.Window")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Window_obj > __new(bool hasCrc);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Window","\x10","\x08","\x21","\x87"); }

		static void __boot();
		static int SIZE;
		static int BUFSIZE;
		::haxe::io::Bytes buffer;
		int pos;
		::haxe::crypto::Adler32 crc;
		virtual Void slide( );
		Dynamic slide_dyn();

		virtual Void addBytes( ::haxe::io::Bytes b,int p,int len);
		Dynamic addBytes_dyn();

		virtual Void addByte( int c);
		Dynamic addByte_dyn();

		virtual int getLastChar( );
		Dynamic getLastChar_dyn();

		virtual int available( );
		Dynamic available_dyn();

		virtual ::haxe::crypto::Adler32 checksum( );
		Dynamic checksum_dyn();

};

} // end namespace haxe
} // end namespace zip
} // end namespace _InflateImpl

#endif /* INCLUDED_haxe_zip__InflateImpl_Window */ 
