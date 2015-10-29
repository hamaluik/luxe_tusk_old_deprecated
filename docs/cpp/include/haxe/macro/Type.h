#ifndef INCLUDED_haxe_macro_Type
#define INCLUDED_haxe_macro_Type

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,Type)
namespace haxe{
namespace macro{


class Type_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Type_obj OBJ_;

	public:
		Type_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.macro.Type","\xc4","\x89","\xca","\x9a"); }
		::String __ToString() const { return HX_HCSTRING("Type.","\x14","\xe0","\xf8","\xad") + tag; }

		static ::haxe::macro::Type TAbstract(Dynamic t,Array< ::Dynamic > params);
		static Dynamic TAbstract_dyn();
		static ::haxe::macro::Type TAnonymous(Dynamic a);
		static Dynamic TAnonymous_dyn();
		static ::haxe::macro::Type TDynamic(::haxe::macro::Type t);
		static Dynamic TDynamic_dyn();
		static ::haxe::macro::Type TEnum(Dynamic t,Array< ::Dynamic > params);
		static Dynamic TEnum_dyn();
		static ::haxe::macro::Type TFun(cpp::ArrayBase args,::haxe::macro::Type ret);
		static Dynamic TFun_dyn();
		static ::haxe::macro::Type TInst(Dynamic t,Array< ::Dynamic > params);
		static Dynamic TInst_dyn();
		static ::haxe::macro::Type TLazy(Dynamic f);
		static Dynamic TLazy_dyn();
		static ::haxe::macro::Type TMono(Dynamic t);
		static Dynamic TMono_dyn();
		static ::haxe::macro::Type TType(Dynamic t,Array< ::Dynamic > params);
		static Dynamic TType_dyn();
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_Type */ 
