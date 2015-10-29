#ifndef INCLUDED_haxe_macro_ClassKind
#define INCLUDED_haxe_macro_ClassKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,ClassKind)
HX_DECLARE_CLASS2(haxe,macro,Type)
namespace haxe{
namespace macro{


class ClassKind_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ClassKind_obj OBJ_;

	public:
		ClassKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.macro.ClassKind","\x62","\xa6","\xf4","\xf3"); }
		::String __ToString() const { return HX_HCSTRING("ClassKind.","\x22","\x79","\x6a","\x1b") + tag; }

		static ::haxe::macro::ClassKind KAbstractImpl(Dynamic a);
		static Dynamic KAbstractImpl_dyn();
		static ::haxe::macro::ClassKind KExpr(Dynamic expr);
		static Dynamic KExpr_dyn();
		static ::haxe::macro::ClassKind KExtension(Dynamic cl,Array< ::Dynamic > params);
		static Dynamic KExtension_dyn();
		static ::haxe::macro::ClassKind KGeneric;
		static inline ::haxe::macro::ClassKind KGeneric_dyn() { return KGeneric; }
		static ::haxe::macro::ClassKind KGenericBuild;
		static inline ::haxe::macro::ClassKind KGenericBuild_dyn() { return KGenericBuild; }
		static ::haxe::macro::ClassKind KGenericInstance(Dynamic cl,Array< ::Dynamic > params);
		static Dynamic KGenericInstance_dyn();
		static ::haxe::macro::ClassKind KMacroType;
		static inline ::haxe::macro::ClassKind KMacroType_dyn() { return KMacroType; }
		static ::haxe::macro::ClassKind KNormal;
		static inline ::haxe::macro::ClassKind KNormal_dyn() { return KNormal; }
		static ::haxe::macro::ClassKind KTypeParameter(Array< ::Dynamic > constraints);
		static Dynamic KTypeParameter_dyn();
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_ClassKind */ 
