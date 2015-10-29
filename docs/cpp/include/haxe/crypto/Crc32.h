#ifndef INCLUDED_haxe_crypto_Crc32
#define INCLUDED_haxe_crypto_Crc32

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,Crc32)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace haxe{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES  Crc32_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Crc32_obj OBJ_;
		Crc32_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.crypto.Crc32")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Crc32_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Crc32_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Crc32","\x53","\x7c","\x7e","\xdf"); }

		static int make( ::haxe::io::Bytes data);
		static Dynamic make_dyn();

		int crc;
		virtual Void byte( int b);
		Dynamic byte_dyn();

		virtual Void update( ::haxe::io::Bytes b,int pos,int len);
		Dynamic update_dyn();

		virtual int get( );
		Dynamic get_dyn();

};

} // end namespace haxe
} // end namespace crypto

#endif /* INCLUDED_haxe_crypto_Crc32 */ 
