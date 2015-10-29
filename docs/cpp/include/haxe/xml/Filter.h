#ifndef INCLUDED_haxe_xml_Filter
#define INCLUDED_haxe_xml_Filter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(haxe,xml,Filter)
namespace haxe{
namespace xml{


class Filter_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Filter_obj OBJ_;

	public:
		Filter_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.xml.Filter","\xd7","\xcc","\x3c","\x5c"); }
		::String __ToString() const { return HX_HCSTRING("Filter.","\x56","\xc9","\x97","\xd6") + tag; }

		static ::haxe::xml::Filter FBool;
		static inline ::haxe::xml::Filter FBool_dyn() { return FBool; }
		static ::haxe::xml::Filter FEnum(Array< ::String > values);
		static Dynamic FEnum_dyn();
		static ::haxe::xml::Filter FInt;
		static inline ::haxe::xml::Filter FInt_dyn() { return FInt; }
		static ::haxe::xml::Filter FReg(::EReg matcher);
		static Dynamic FReg_dyn();
};

} // end namespace haxe
} // end namespace xml

#endif /* INCLUDED_haxe_xml_Filter */ 
