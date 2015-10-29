#ifndef INCLUDED_haxe_web_MatchRule
#define INCLUDED_haxe_web_MatchRule

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,web,MatchRule)
namespace haxe{
namespace web{


class MatchRule_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef MatchRule_obj OBJ_;

	public:
		MatchRule_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.web.MatchRule","\x1f","\x6a","\x82","\x1b"); }
		::String __ToString() const { return HX_HCSTRING("MatchRule.","\x4d","\xd4","\x28","\xdd") + tag; }

		static ::haxe::web::MatchRule MRBool;
		static inline ::haxe::web::MatchRule MRBool_dyn() { return MRBool; }
		static ::haxe::web::MatchRule MRDate;
		static inline ::haxe::web::MatchRule MRDate_dyn() { return MRDate; }
		static ::haxe::web::MatchRule MRDispatch;
		static inline ::haxe::web::MatchRule MRDispatch_dyn() { return MRDispatch; }
		static ::haxe::web::MatchRule MREnum(::String e);
		static Dynamic MREnum_dyn();
		static ::haxe::web::MatchRule MRFloat;
		static inline ::haxe::web::MatchRule MRFloat_dyn() { return MRFloat; }
		static ::haxe::web::MatchRule MRInt;
		static inline ::haxe::web::MatchRule MRInt_dyn() { return MRInt; }
		static ::haxe::web::MatchRule MROpt(::haxe::web::MatchRule r);
		static Dynamic MROpt_dyn();
		static ::haxe::web::MatchRule MRSpod(::String c,bool lock);
		static Dynamic MRSpod_dyn();
		static ::haxe::web::MatchRule MRString;
		static inline ::haxe::web::MatchRule MRString_dyn() { return MRString; }
};

} // end namespace haxe
} // end namespace web

#endif /* INCLUDED_haxe_web_MatchRule */ 
