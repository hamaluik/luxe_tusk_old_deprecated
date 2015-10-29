#ifndef INCLUDED_haxe_macro_Constant
#define INCLUDED_haxe_macro_Constant

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,Constant)
namespace haxe{
namespace macro{


class Constant_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Constant_obj OBJ_;

	public:
		Constant_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.macro.Constant","\x6e","\xa5","\x78","\xab"); }
		::String __ToString() const { return HX_HCSTRING("Constant.","\x2a","\x56","\x3e","\xe6") + tag; }

		static ::haxe::macro::Constant CFloat(::String f);
		static Dynamic CFloat_dyn();
		static ::haxe::macro::Constant CIdent(::String s);
		static Dynamic CIdent_dyn();
		static ::haxe::macro::Constant CInt(::String v);
		static Dynamic CInt_dyn();
		static ::haxe::macro::Constant CRegexp(::String r,::String opt);
		static Dynamic CRegexp_dyn();
		static ::haxe::macro::Constant CString(::String s);
		static Dynamic CString_dyn();
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_Constant */ 
