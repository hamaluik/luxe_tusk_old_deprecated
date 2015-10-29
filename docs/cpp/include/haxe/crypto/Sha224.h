#ifndef INCLUDED_haxe_crypto_Sha224
#define INCLUDED_haxe_crypto_Sha224

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,Sha224)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace haxe{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES  Sha224_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sha224_obj OBJ_;
		Sha224_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.crypto.Sha224")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sha224_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sha224_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Sha224","\xe8","\x15","\x8f","\x51"); }

		static ::String encode( ::String s);
		static Dynamic encode_dyn();

		static ::haxe::io::Bytes make( ::haxe::io::Bytes b);
		static Dynamic make_dyn();

		static Array< int > str2blks( ::String s);
		static Dynamic str2blks_dyn();

		static int safeAdd( int x,int y);
		static Dynamic safeAdd_dyn();

		virtual Array< int > doEncode( ::String str,int strlen);
		Dynamic doEncode_dyn();

		virtual int ROTR( int X,int n);
		Dynamic ROTR_dyn();

		virtual int SHR( int X,int n);
		Dynamic SHR_dyn();

		virtual int Ch( int x,int y,int z);
		Dynamic Ch_dyn();

		virtual int Maj( int x,int y,int z);
		Dynamic Maj_dyn();

		virtual int Sigma0( int x);
		Dynamic Sigma0_dyn();

		virtual int Sigma1( int x);
		Dynamic Sigma1_dyn();

		virtual int Gamma0( int x);
		Dynamic Gamma0_dyn();

		virtual int Gamma1( int x);
		Dynamic Gamma1_dyn();

		virtual ::String hex( Array< int > a);
		Dynamic hex_dyn();

};

} // end namespace haxe
} // end namespace crypto

#endif /* INCLUDED_haxe_crypto_Sha224 */ 
