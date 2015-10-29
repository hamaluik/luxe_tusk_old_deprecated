#ifndef INCLUDED_haxe_zip_Huffman
#define INCLUDED_haxe_zip_Huffman

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,zip,Huffman)
namespace haxe{
namespace zip{


class Huffman_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Huffman_obj OBJ_;

	public:
		Huffman_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.zip.Huffman","\x38","\xd8","\x1f","\x47"); }
		::String __ToString() const { return HX_HCSTRING("Huffman.","\x81","\x94","\x1b","\xe3") + tag; }

		static ::haxe::zip::Huffman Found(int i);
		static Dynamic Found_dyn();
		static ::haxe::zip::Huffman NeedBit(::haxe::zip::Huffman left,::haxe::zip::Huffman right);
		static Dynamic NeedBit_dyn();
		static ::haxe::zip::Huffman NeedBits(int n,Array< ::Dynamic > table);
		static Dynamic NeedBits_dyn();
};

} // end namespace haxe
} // end namespace zip

#endif /* INCLUDED_haxe_zip_Huffman */ 
