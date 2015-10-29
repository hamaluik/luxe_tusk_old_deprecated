#ifndef INCLUDED_haxe_rtti_TypeTree
#define INCLUDED_haxe_rtti_TypeTree

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,rtti,TypeTree)
namespace haxe{
namespace rtti{


class TypeTree_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TypeTree_obj OBJ_;

	public:
		TypeTree_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.rtti.TypeTree","\xa7","\x70","\xa4","\xd0"); }
		::String __ToString() const { return HX_HCSTRING("TypeTree.","\xd6","\xd3","\xcd","\x7c") + tag; }

		static ::haxe::rtti::TypeTree TAbstractdecl(Dynamic a);
		static Dynamic TAbstractdecl_dyn();
		static ::haxe::rtti::TypeTree TClassdecl(Dynamic c);
		static Dynamic TClassdecl_dyn();
		static ::haxe::rtti::TypeTree TEnumdecl(Dynamic e);
		static Dynamic TEnumdecl_dyn();
		static ::haxe::rtti::TypeTree TPackage(::String name,::String full,Array< ::Dynamic > subs);
		static Dynamic TPackage_dyn();
		static ::haxe::rtti::TypeTree TTypedecl(Dynamic t);
		static Dynamic TTypedecl_dyn();
};

} // end namespace haxe
} // end namespace rtti

#endif /* INCLUDED_haxe_rtti_TypeTree */ 
