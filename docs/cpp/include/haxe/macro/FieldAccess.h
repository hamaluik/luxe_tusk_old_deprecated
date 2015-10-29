#ifndef INCLUDED_haxe_macro_FieldAccess
#define INCLUDED_haxe_macro_FieldAccess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,FieldAccess)
HX_DECLARE_CLASS2(haxe,macro,Type)
namespace haxe{
namespace macro{


class FieldAccess_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FieldAccess_obj OBJ_;

	public:
		FieldAccess_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.macro.FieldAccess","\x34","\xa4","\x55","\x69"); }
		::String __ToString() const { return HX_HCSTRING("FieldAccess.","\x90","\xa4","\x8d","\x70") + tag; }

		static ::haxe::macro::FieldAccess FAnon(Dynamic cf);
		static Dynamic FAnon_dyn();
		static ::haxe::macro::FieldAccess FClosure(Dynamic c,Dynamic cf);
		static Dynamic FClosure_dyn();
		static ::haxe::macro::FieldAccess FDynamic(::String s);
		static Dynamic FDynamic_dyn();
		static ::haxe::macro::FieldAccess FEnum(Dynamic e,Dynamic ef);
		static Dynamic FEnum_dyn();
		static ::haxe::macro::FieldAccess FInstance(Dynamic c,Array< ::Dynamic > params,Dynamic cf);
		static Dynamic FInstance_dyn();
		static ::haxe::macro::FieldAccess FStatic(Dynamic c,Dynamic cf);
		static Dynamic FStatic_dyn();
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_FieldAccess */ 
