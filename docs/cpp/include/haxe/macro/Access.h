#ifndef INCLUDED_haxe_macro_Access
#define INCLUDED_haxe_macro_Access

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,Access)
namespace haxe{
namespace macro{


class Access_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Access_obj OBJ_;

	public:
		Access_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.macro.Access","\x2e","\x83","\xa3","\x7d"); }
		::String __ToString() const { return HX_HCSTRING("Access.","\xea","\x81","\x0d","\x68") + tag; }

		static ::haxe::macro::Access ADynamic;
		static inline ::haxe::macro::Access ADynamic_dyn() { return ADynamic; }
		static ::haxe::macro::Access AInline;
		static inline ::haxe::macro::Access AInline_dyn() { return AInline; }
		static ::haxe::macro::Access AMacro;
		static inline ::haxe::macro::Access AMacro_dyn() { return AMacro; }
		static ::haxe::macro::Access AOverride;
		static inline ::haxe::macro::Access AOverride_dyn() { return AOverride; }
		static ::haxe::macro::Access APrivate;
		static inline ::haxe::macro::Access APrivate_dyn() { return APrivate; }
		static ::haxe::macro::Access APublic;
		static inline ::haxe::macro::Access APublic_dyn() { return APublic; }
		static ::haxe::macro::Access AStatic;
		static inline ::haxe::macro::Access AStatic_dyn() { return AStatic; }
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_Access */ 
