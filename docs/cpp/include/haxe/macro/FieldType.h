#ifndef INCLUDED_haxe_macro_FieldType
#define INCLUDED_haxe_macro_FieldType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,ComplexType)
HX_DECLARE_CLASS2(haxe,macro,FieldType)
namespace haxe{
namespace macro{


class FieldType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FieldType_obj OBJ_;

	public:
		FieldType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.macro.FieldType","\x4a","\x3d","\x04","\xfe"); }
		::String __ToString() const { return HX_HCSTRING("FieldType.","\x3a","\xed","\xfe","\xde") + tag; }

		static ::haxe::macro::FieldType FFun(Dynamic f);
		static Dynamic FFun_dyn();
		static ::haxe::macro::FieldType FProp(::String get,::String set,::haxe::macro::ComplexType t,Dynamic e);
		static Dynamic FProp_dyn();
		static ::haxe::macro::FieldType FVar(::haxe::macro::ComplexType t,Dynamic e);
		static Dynamic FVar_dyn();
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_FieldType */ 
