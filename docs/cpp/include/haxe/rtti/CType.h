#ifndef INCLUDED_haxe_rtti_CType
#define INCLUDED_haxe_rtti_CType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,rtti,CType)
namespace haxe{
namespace rtti{


class CType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CType_obj OBJ_;

	public:
		CType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.rtti.CType","\xee","\xcd","\x79","\x74"); }
		::String __ToString() const { return HX_HCSTRING("CType.","\xf1","\x0c","\xe2","\x77") + tag; }

		static ::haxe::rtti::CType CAbstract(::String name,::List params);
		static Dynamic CAbstract_dyn();
		static ::haxe::rtti::CType CAnonymous(::List fields);
		static Dynamic CAnonymous_dyn();
		static ::haxe::rtti::CType CClass(::String name,::List params);
		static Dynamic CClass_dyn();
		static ::haxe::rtti::CType CDynamic(::haxe::rtti::CType t);
		static Dynamic CDynamic_dyn();
		static ::haxe::rtti::CType CEnum(::String name,::List params);
		static Dynamic CEnum_dyn();
		static ::haxe::rtti::CType CFunction(::List args,::haxe::rtti::CType ret);
		static Dynamic CFunction_dyn();
		static ::haxe::rtti::CType CTypedef(::String name,::List params);
		static Dynamic CTypedef_dyn();
		static ::haxe::rtti::CType CUnknown;
		static inline ::haxe::rtti::CType CUnknown_dyn() { return CUnknown; }
};

} // end namespace haxe
} // end namespace rtti

#endif /* INCLUDED_haxe_rtti_CType */ 
