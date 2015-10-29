#ifndef INCLUDED_haxe_macro_MethodKind
#define INCLUDED_haxe_macro_MethodKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,MethodKind)
namespace haxe{
namespace macro{


class MethodKind_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef MethodKind_obj OBJ_;

	public:
		MethodKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.macro.MethodKind","\x5f","\x03","\x7d","\x6d"); }
		::String __ToString() const { return HX_HCSTRING("MethodKind.","\x99","\xc9","\x70","\xea") + tag; }

		static ::haxe::macro::MethodKind MethDynamic;
		static inline ::haxe::macro::MethodKind MethDynamic_dyn() { return MethDynamic; }
		static ::haxe::macro::MethodKind MethInline;
		static inline ::haxe::macro::MethodKind MethInline_dyn() { return MethInline; }
		static ::haxe::macro::MethodKind MethMacro;
		static inline ::haxe::macro::MethodKind MethMacro_dyn() { return MethMacro; }
		static ::haxe::macro::MethodKind MethNormal;
		static inline ::haxe::macro::MethodKind MethNormal_dyn() { return MethNormal; }
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_MethodKind */ 
