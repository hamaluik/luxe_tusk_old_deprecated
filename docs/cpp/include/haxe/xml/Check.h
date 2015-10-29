#ifndef INCLUDED_haxe_xml_Check
#define INCLUDED_haxe_xml_Check

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(haxe,xml,Check)
HX_DECLARE_CLASS2(haxe,xml,Filter)
HX_DECLARE_CLASS2(haxe,xml,Rule)
HX_DECLARE_CLASS3(haxe,xml,_Check,CheckResult)
namespace haxe{
namespace xml{


class HXCPP_CLASS_ATTRIBUTES  Check_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Check_obj OBJ_;
		Check_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.xml.Check")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Check_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Check_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Check","\xa8","\x08","\xe4","\xd8"); }

		static void __boot();
		static ::EReg blanks;
		static bool isBlank( ::Xml x);
		static Dynamic isBlank_dyn();

		static bool filterMatch( ::String s,::haxe::xml::Filter f);
		static Dynamic filterMatch_dyn();

		static bool isNullable( ::haxe::xml::Rule r);
		static Dynamic isNullable_dyn();

		static ::haxe::xml::_Check::CheckResult check( ::Xml x,::haxe::xml::Rule r);
		static Dynamic check_dyn();

		static ::haxe::xml::_Check::CheckResult checkList( Dynamic it,::haxe::xml::Rule r);
		static Dynamic checkList_dyn();

		static ::String makeWhere( Array< ::Dynamic > path);
		static Dynamic makeWhere_dyn();

		static ::String makeString( ::Xml x);
		static Dynamic makeString_dyn();

		static ::String makeRule( ::haxe::xml::Rule r);
		static Dynamic makeRule_dyn();

		static ::String makeError( ::haxe::xml::_Check::CheckResult m,Array< ::Dynamic > path);
		static Dynamic makeError_dyn();

		static Void checkNode( ::Xml x,::haxe::xml::Rule r);
		static Dynamic checkNode_dyn();

		static Void checkDocument( ::Xml x,::haxe::xml::Rule r);
		static Dynamic checkDocument_dyn();

};

} // end namespace haxe
} // end namespace xml

#endif /* INCLUDED_haxe_xml_Check */ 
