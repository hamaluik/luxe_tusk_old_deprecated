#ifndef INCLUDED_haxe_zip_ExtraField
#define INCLUDED_haxe_zip_ExtraField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,zip,ExtraField)
namespace haxe{
namespace zip{


class ExtraField_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ExtraField_obj OBJ_;

	public:
		ExtraField_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.zip.ExtraField","\xdf","\xaf","\xf8","\x91"); }
		::String __ToString() const { return HX_HCSTRING("ExtraField.","\xc4","\x80","\x7a","\x63") + tag; }

		static ::haxe::zip::ExtraField FInfoZipUnicodePath(::String name,int crc);
		static Dynamic FInfoZipUnicodePath_dyn();
		static ::haxe::zip::ExtraField FUnknown(int tag,::haxe::io::Bytes bytes);
		static Dynamic FUnknown_dyn();
		static ::haxe::zip::ExtraField FUtf8;
		static inline ::haxe::zip::ExtraField FUtf8_dyn() { return FUtf8; }
};

} // end namespace haxe
} // end namespace zip

#endif /* INCLUDED_haxe_zip_ExtraField */ 
