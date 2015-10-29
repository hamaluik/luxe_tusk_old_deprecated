#ifndef INCLUDED_haxe_macro_FieldKind
#define INCLUDED_haxe_macro_FieldKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,FieldKind)
HX_DECLARE_CLASS2(haxe,macro,MethodKind)
HX_DECLARE_CLASS2(haxe,macro,VarAccess)
namespace haxe{
namespace macro{


class FieldKind_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FieldKind_obj OBJ_;

	public:
		FieldKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.macro.FieldKind","\xe4","\x2b","\x05","\xf8"); }
		::String __ToString() const { return HX_HCSTRING("FieldKind.","\x60","\xc5","\xce","\xa5") + tag; }

		static ::haxe::macro::FieldKind FMethod(::haxe::macro::MethodKind k);
		static Dynamic FMethod_dyn();
		static ::haxe::macro::FieldKind FVar(::haxe::macro::VarAccess read,::haxe::macro::VarAccess write);
		static Dynamic FVar_dyn();
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_FieldKind */ 
