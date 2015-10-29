#ifndef INCLUDED_haxe_macro_ImportMode
#define INCLUDED_haxe_macro_ImportMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,ImportMode)
namespace haxe{
namespace macro{


class ImportMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ImportMode_obj OBJ_;

	public:
		ImportMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.macro.ImportMode","\xf2","\x31","\xfd","\xac"); }
		::String __ToString() const { return HX_HCSTRING("ImportMode.","\xa6","\x5b","\x19","\x3b") + tag; }

		static ::haxe::macro::ImportMode IAll;
		static inline ::haxe::macro::ImportMode IAll_dyn() { return IAll; }
		static ::haxe::macro::ImportMode IAsName(::String alias);
		static Dynamic IAsName_dyn();
		static ::haxe::macro::ImportMode INormal;
		static inline ::haxe::macro::ImportMode INormal_dyn() { return INormal; }
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_ImportMode */ 
