#ifndef INCLUDED_haxe_zip_InflateImpl
#define INCLUDED_haxe_zip_InflateImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,zip,HuffTools)
HX_DECLARE_CLASS2(haxe,zip,Huffman)
HX_DECLARE_CLASS2(haxe,zip,InflateImpl)
HX_DECLARE_CLASS3(haxe,zip,_InflateImpl,State)
HX_DECLARE_CLASS3(haxe,zip,_InflateImpl,Window)
namespace haxe{
namespace zip{


class HXCPP_CLASS_ATTRIBUTES  InflateImpl_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InflateImpl_obj OBJ_;
		InflateImpl_obj();
		Void __construct(::haxe::io::Input i,Dynamic __o_header,Dynamic __o_crc);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.zip.InflateImpl")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InflateImpl_obj > __new(::haxe::io::Input i,Dynamic __o_header,Dynamic __o_crc);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InflateImpl_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("InflateImpl","\xe7","\x2e","\xf8","\x07"); }

		static void __boot();
		static Array< int > LEN_EXTRA_BITS_TBL;
		static Array< int > LEN_BASE_VAL_TBL;
		static Array< int > DIST_EXTRA_BITS_TBL;
		static Array< int > DIST_BASE_VAL_TBL;
		static Array< int > CODE_LENGTHS_POS;
		static ::haxe::zip::Huffman FIXED_HUFFMAN;
		static ::haxe::io::Bytes run( ::haxe::io::Input i,Dynamic bufsize);
		static Dynamic run_dyn();

		int nbits;
		int bits;
		::haxe::zip::_InflateImpl::State state;
		bool final;
		::haxe::zip::Huffman huffman;
		::haxe::zip::Huffman huffdist;
		::haxe::zip::HuffTools htools;
		int len;
		int dist;
		int needed;
		::haxe::io::Bytes output;
		int outpos;
		::haxe::io::Input input;
		Array< int > lengths;
		::haxe::zip::_InflateImpl::Window window;
		virtual ::haxe::zip::Huffman buildFixedHuffman( );
		Dynamic buildFixedHuffman_dyn();

		virtual int readBytes( ::haxe::io::Bytes b,int pos,int len);
		Dynamic readBytes_dyn();

		virtual int getBits( int n);
		Dynamic getBits_dyn();

		virtual bool getBit( );
		Dynamic getBit_dyn();

		virtual int getRevBits( int n);
		Dynamic getRevBits_dyn();

		virtual Void resetBits( );
		Dynamic resetBits_dyn();

		virtual Void addBytes( ::haxe::io::Bytes b,int p,int len);
		Dynamic addBytes_dyn();

		virtual Void addByte( int b);
		Dynamic addByte_dyn();

		virtual Void addDistOne( int n);
		Dynamic addDistOne_dyn();

		virtual Void addDist( int d,int len);
		Dynamic addDist_dyn();

		virtual int applyHuffman( ::haxe::zip::Huffman h);
		Dynamic applyHuffman_dyn();

		virtual Void inflateLengths( Array< int > a,int max);
		Dynamic inflateLengths_dyn();

		virtual bool inflateLoop( );
		Dynamic inflateLoop_dyn();

};

} // end namespace haxe
} // end namespace zip

#endif /* INCLUDED_haxe_zip_InflateImpl */ 
