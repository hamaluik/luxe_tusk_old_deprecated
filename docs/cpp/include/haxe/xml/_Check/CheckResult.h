#ifndef INCLUDED_haxe_xml__Check_CheckResult
#define INCLUDED_haxe_xml__Check_CheckResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(haxe,xml,Filter)
HX_DECLARE_CLASS2(haxe,xml,Rule)
HX_DECLARE_CLASS3(haxe,xml,_Check,CheckResult)
namespace haxe{
namespace xml{
namespace _Check{


class CheckResult_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CheckResult_obj OBJ_;

	public:
		CheckResult_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.xml._Check.CheckResult","\x1f","\xcb","\x8a","\x74"); }
		::String __ToString() const { return HX_HCSTRING("CheckResult.","\xe9","\x5c","\xf0","\x20") + tag; }

		static ::haxe::xml::_Check::CheckResult CDataExpected(::Xml x);
		static Dynamic CDataExpected_dyn();
		static ::haxe::xml::_Check::CheckResult CElementExpected(::String name,::Xml x);
		static Dynamic CElementExpected_dyn();
		static ::haxe::xml::_Check::CheckResult CExtra(::Xml x);
		static Dynamic CExtra_dyn();
		static ::haxe::xml::_Check::CheckResult CExtraAttrib(::String att,::Xml x);
		static Dynamic CExtraAttrib_dyn();
		static ::haxe::xml::_Check::CheckResult CInElement(::Xml x,::haxe::xml::_Check::CheckResult r);
		static Dynamic CInElement_dyn();
		static ::haxe::xml::_Check::CheckResult CInvalidAttrib(::String att,::Xml x,::haxe::xml::Filter f);
		static Dynamic CInvalidAttrib_dyn();
		static ::haxe::xml::_Check::CheckResult CInvalidData(::Xml x,::haxe::xml::Filter f);
		static Dynamic CInvalidData_dyn();
		static ::haxe::xml::_Check::CheckResult CMatch;
		static inline ::haxe::xml::_Check::CheckResult CMatch_dyn() { return CMatch; }
		static ::haxe::xml::_Check::CheckResult CMissing(::haxe::xml::Rule r);
		static Dynamic CMissing_dyn();
		static ::haxe::xml::_Check::CheckResult CMissingAttrib(::String att,::Xml x);
		static Dynamic CMissingAttrib_dyn();
};

} // end namespace haxe
} // end namespace xml
} // end namespace _Check

#endif /* INCLUDED_haxe_xml__Check_CheckResult */ 
