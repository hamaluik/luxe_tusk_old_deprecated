#ifndef INCLUDED_haxe_zip_HuffTools
#define INCLUDED_haxe_zip_HuffTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,zip,HuffTools)
HX_DECLARE_CLASS2(haxe,zip,Huffman)
namespace haxe{
namespace zip{


class HXCPP_CLASS_ATTRIBUTES  HuffTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HuffTools_obj OBJ_;
		HuffTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.zip.HuffTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HuffTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HuffTools_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HuffTools","\x2e","\xd1","\x43","\x79"); }

		virtual int treeDepth( ::haxe::zip::Huffman t);
		Dynamic treeDepth_dyn();

		virtual ::haxe::zip::Huffman treeCompress( ::haxe::zip::Huffman t);
		Dynamic treeCompress_dyn();

		virtual Void treeWalk( Array< ::Dynamic > table,int p,int cd,int d,::haxe::zip::Huffman t);
		Dynamic treeWalk_dyn();

		virtual ::haxe::zip::Huffman treeMake( ::haxe::ds::IntMap bits,int maxbits,int v,int len);
		Dynamic treeMake_dyn();

		virtual ::haxe::zip::Huffman make( Array< int > lengths,int pos,int nlengths,int maxbits);
		Dynamic make_dyn();

};

} // end namespace haxe
} // end namespace zip

#endif /* INCLUDED_haxe_zip_HuffTools */ 
