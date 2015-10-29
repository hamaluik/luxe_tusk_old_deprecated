#ifndef INCLUDED_haxe_xml_Rule
#define INCLUDED_haxe_xml_Rule

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,xml,Attrib)
HX_DECLARE_CLASS2(haxe,xml,Filter)
HX_DECLARE_CLASS2(haxe,xml,Rule)
namespace haxe{
namespace xml{


class Rule_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Rule_obj OBJ_;

	public:
		Rule_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.xml.Rule","\x5b","\x50","\x8f","\xd2"); }
		::String __ToString() const { return HX_HCSTRING("Rule.","\x92","\xd3","\x83","\x84") + tag; }

		static ::haxe::xml::Rule RChoice(Array< ::Dynamic > choices);
		static Dynamic RChoice_dyn();
		static ::haxe::xml::Rule RData(::haxe::xml::Filter filter);
		static Dynamic RData_dyn();
		static ::haxe::xml::Rule RList(Array< ::Dynamic > rules,Dynamic ordered);
		static Dynamic RList_dyn();
		static ::haxe::xml::Rule RMulti(::haxe::xml::Rule rule,Dynamic atLeastOne);
		static Dynamic RMulti_dyn();
		static ::haxe::xml::Rule RNode(::String name,Array< ::Dynamic > attribs,::haxe::xml::Rule childs);
		static Dynamic RNode_dyn();
		static ::haxe::xml::Rule ROptional(::haxe::xml::Rule rule);
		static Dynamic ROptional_dyn();
};

} // end namespace haxe
} // end namespace xml

#endif /* INCLUDED_haxe_xml_Rule */ 
