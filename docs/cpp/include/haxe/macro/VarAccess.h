#ifndef INCLUDED_haxe_macro_VarAccess
#define INCLUDED_haxe_macro_VarAccess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,VarAccess)
namespace haxe{
namespace macro{


class VarAccess_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef VarAccess_obj OBJ_;

	public:
		VarAccess_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.macro.VarAccess","\xa1","\x34","\x3a","\xc5"); }
		::String __ToString() const { return HX_HCSTRING("VarAccess.","\x03","\x62","\x01","\x67") + tag; }

		static ::haxe::macro::VarAccess AccCall;
		static inline ::haxe::macro::VarAccess AccCall_dyn() { return AccCall; }
		static ::haxe::macro::VarAccess AccInline;
		static inline ::haxe::macro::VarAccess AccInline_dyn() { return AccInline; }
		static ::haxe::macro::VarAccess AccNever;
		static inline ::haxe::macro::VarAccess AccNever_dyn() { return AccNever; }
		static ::haxe::macro::VarAccess AccNo;
		static inline ::haxe::macro::VarAccess AccNo_dyn() { return AccNo; }
		static ::haxe::macro::VarAccess AccNormal;
		static inline ::haxe::macro::VarAccess AccNormal_dyn() { return AccNormal; }
		static ::haxe::macro::VarAccess AccRequire(::String r,::String msg);
		static Dynamic AccRequire_dyn();
		static ::haxe::macro::VarAccess AccResolve;
		static inline ::haxe::macro::VarAccess AccResolve_dyn() { return AccResolve; }
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_VarAccess */ 
