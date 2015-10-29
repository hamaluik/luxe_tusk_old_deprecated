#ifndef INCLUDED_haxe_web_DispatchRule
#define INCLUDED_haxe_web_DispatchRule

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,web,DispatchRule)
HX_DECLARE_CLASS2(haxe,web,MatchRule)
namespace haxe{
namespace web{


class DispatchRule_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef DispatchRule_obj OBJ_;

	public:
		DispatchRule_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.web.DispatchRule","\x58","\xbe","\x45","\xbd"); }
		::String __ToString() const { return HX_HCSTRING("DispatchRule.","\x78","\xb2","\xe6","\x89") + tag; }

		static ::haxe::web::DispatchRule DRArgs(::haxe::web::DispatchRule r,cpp::ArrayBase args,bool opt);
		static Dynamic DRArgs_dyn();
		static ::haxe::web::DispatchRule DRMatch(::haxe::web::MatchRule r);
		static Dynamic DRMatch_dyn();
		static ::haxe::web::DispatchRule DRMeta(::haxe::web::DispatchRule r);
		static Dynamic DRMeta_dyn();
		static ::haxe::web::DispatchRule DRMult(Array< ::Dynamic > r);
		static Dynamic DRMult_dyn();
};

} // end namespace haxe
} // end namespace web

#endif /* INCLUDED_haxe_web_DispatchRule */ 
