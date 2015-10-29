#ifndef INCLUDED_haxe_xml_Attrib
#define INCLUDED_haxe_xml_Attrib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,xml,Attrib)
HX_DECLARE_CLASS2(haxe,xml,Filter)
namespace haxe{
namespace xml{


class Attrib_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Attrib_obj OBJ_;

	public:
		Attrib_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.xml.Attrib","\x69","\x94","\x24","\xb7"); }
		::String __ToString() const { return HX_HCSTRING("Attrib.","\x84","\xa1","\x7e","\x06") + tag; }

		static ::haxe::xml::Attrib Att(::String name,::haxe::xml::Filter filter,::String defvalue);
		static Dynamic Att_dyn();
};

} // end namespace haxe
} // end namespace xml

#endif /* INCLUDED_haxe_xml_Attrib */ 
