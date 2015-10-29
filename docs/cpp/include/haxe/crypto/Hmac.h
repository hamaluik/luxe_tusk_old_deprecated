#ifndef INCLUDED_haxe_crypto_Hmac
#define INCLUDED_haxe_crypto_Hmac

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,HashMethod)
HX_DECLARE_CLASS2(haxe,crypto,Hmac)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace haxe{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES  Hmac_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Hmac_obj OBJ_;
		Hmac_obj();
		Void __construct(::haxe::crypto::HashMethod hashMethod);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.crypto.Hmac")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Hmac_obj > __new(::haxe::crypto::HashMethod hashMethod);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Hmac_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Hmac","\x47","\x67","\xea","\x2f"); }

		::haxe::crypto::HashMethod method;
		int blockSize;
		int length;
		virtual ::haxe::io::Bytes doHash( ::haxe::io::Bytes b);
		Dynamic doHash_dyn();

		virtual ::haxe::io::Bytes nullPad( ::haxe::io::Bytes s,int chunkLen);
		Dynamic nullPad_dyn();

		virtual ::haxe::io::Bytes make( ::haxe::io::Bytes key,::haxe::io::Bytes msg);
		Dynamic make_dyn();

};

} // end namespace haxe
} // end namespace crypto

#endif /* INCLUDED_haxe_crypto_Hmac */ 
