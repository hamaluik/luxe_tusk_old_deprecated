#ifndef INCLUDED_haxe_macro_ModuleType
#define INCLUDED_haxe_macro_ModuleType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,ModuleType)
namespace haxe{
namespace macro{


class ModuleType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ModuleType_obj OBJ_;

	public:
		ModuleType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.macro.ModuleType","\x10","\x94","\xae","\x9a"); }
		::String __ToString() const { return HX_HCSTRING("ModuleType.","\xc8","\xd3","\x9d","\x48") + tag; }

		static ::haxe::macro::ModuleType TAbstract(Dynamic a);
		static Dynamic TAbstract_dyn();
		static ::haxe::macro::ModuleType TClassDecl(Dynamic c);
		static Dynamic TClassDecl_dyn();
		static ::haxe::macro::ModuleType TEnumDecl(Dynamic e);
		static Dynamic TEnumDecl_dyn();
		static ::haxe::macro::ModuleType TTypeDecl(Dynamic t);
		static Dynamic TTypeDecl_dyn();
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_ModuleType */ 
