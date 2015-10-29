#ifndef INCLUDED_haxe_macro_TConstant
#define INCLUDED_haxe_macro_TConstant

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,TConstant)
namespace haxe{
namespace macro{


class TConstant_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TConstant_obj OBJ_;

	public:
		TConstant_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.macro.TConstant","\xae","\xb6","\x5f","\x2e"); }
		::String __ToString() const { return HX_HCSTRING("TConstant.","\x56","\xab","\xad","\xfe") + tag; }

		static ::haxe::macro::TConstant TBool(bool b);
		static Dynamic TBool_dyn();
		static ::haxe::macro::TConstant TFloat(::String s);
		static Dynamic TFloat_dyn();
		static ::haxe::macro::TConstant TInt(int i);
		static Dynamic TInt_dyn();
		static ::haxe::macro::TConstant TNull;
		static inline ::haxe::macro::TConstant TNull_dyn() { return TNull; }
		static ::haxe::macro::TConstant TString(::String s);
		static Dynamic TString_dyn();
		static ::haxe::macro::TConstant TSuper;
		static inline ::haxe::macro::TConstant TSuper_dyn() { return TSuper; }
		static ::haxe::macro::TConstant TThis;
		static inline ::haxe::macro::TConstant TThis_dyn() { return TThis; }
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_TConstant */ 
