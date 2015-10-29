#ifndef INCLUDED_haxe_crypto_Sha256
#define INCLUDED_haxe_crypto_Sha256

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,Sha256)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace haxe{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES  Sha256_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sha256_obj OBJ_;
		Sha256_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.crypto.Sha256")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sha256_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sha256_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Sha256","\x87","\x18","\x8f","\x51"); }

		static ::String encode( ::String s);
		static Dynamic encode_dyn();

		static ::haxe::io::Bytes make( ::haxe::io::Bytes b);
		static Dynamic make_dyn();

		static Array< int > str2blks( ::String s);
		static Dynamic str2blks_dyn();

		static Array< int > bytes2blks( ::haxe::io::Bytes b);
		static Dynamic bytes2blks_dyn();

		virtual Array< int > doEncode( Array< int > m,int l);
		Dynamic doEncode_dyn();

		virtual int S( int X,int n);
		Dynamic S_dyn();

		virtual int R( int X,int n);
		Dynamic R_dyn();

		virtual int Ch( int x,int y,int z);
		Dynamic Ch_dyn();

		virtual int Maj( int x,int y,int z);
		Dynamic Maj_dyn();

		virtual int Sigma0256( int x);
		Dynamic Sigma0256_dyn();

		virtual int Sigma1256( int x);
		Dynamic Sigma1256_dyn();

		virtual int Gamma0256( int x);
		Dynamic Gamma0256_dyn();

		virtual int Gamma1256( int x);
		Dynamic Gamma1256_dyn();

		virtual int safeAdd( int x,int y);
		Dynamic safeAdd_dyn();

		virtual ::String hex( Array< int > a);
		Dynamic hex_dyn();

};

} // end namespace haxe
} // end namespace crypto

#endif /* INCLUDED_haxe_crypto_Sha256 */ 
