#ifndef INCLUDED_haxe_crypto_Sha1
#define INCLUDED_haxe_crypto_Sha1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,Sha1)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace haxe{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES  Sha1_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sha1_obj OBJ_;
		Sha1_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.crypto.Sha1")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sha1_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sha1_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Sha1","\xa5","\xf4","\x2b","\x37"); }

		static ::String encode( ::String s);
		static Dynamic encode_dyn();

		static ::haxe::io::Bytes make( ::haxe::io::Bytes b);
		static Dynamic make_dyn();

		static Array< int > str2blks( ::String s);
		static Dynamic str2blks_dyn();

		static Array< int > bytes2blks( ::haxe::io::Bytes b);
		static Dynamic bytes2blks_dyn();

		virtual Array< int > doEncode( Array< int > x);
		Dynamic doEncode_dyn();

		virtual int rol( int num,int cnt);
		Dynamic rol_dyn();

		virtual int ft( int t,int b,int c,int d);
		Dynamic ft_dyn();

		virtual int kt( int t);
		Dynamic kt_dyn();

		virtual ::String hex( Array< int > a);
		Dynamic hex_dyn();

};

} // end namespace haxe
} // end namespace crypto

#endif /* INCLUDED_haxe_crypto_Sha1 */ 
