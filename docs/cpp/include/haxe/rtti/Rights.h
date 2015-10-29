#ifndef INCLUDED_haxe_rtti_Rights
#define INCLUDED_haxe_rtti_Rights

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,rtti,Rights)
namespace haxe{
namespace rtti{


class Rights_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Rights_obj OBJ_;

	public:
		Rights_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.rtti.Rights","\xc6","\x1e","\xf3","\x80"); }
		::String __ToString() const { return HX_HCSTRING("Rights.","\x17","\x47","\xb5","\xe0") + tag; }

		static ::haxe::rtti::Rights RCall(::String m);
		static Dynamic RCall_dyn();
		static ::haxe::rtti::Rights RDynamic;
		static inline ::haxe::rtti::Rights RDynamic_dyn() { return RDynamic; }
		static ::haxe::rtti::Rights RInline;
		static inline ::haxe::rtti::Rights RInline_dyn() { return RInline; }
		static ::haxe::rtti::Rights RMethod;
		static inline ::haxe::rtti::Rights RMethod_dyn() { return RMethod; }
		static ::haxe::rtti::Rights RNo;
		static inline ::haxe::rtti::Rights RNo_dyn() { return RNo; }
		static ::haxe::rtti::Rights RNormal;
		static inline ::haxe::rtti::Rights RNormal_dyn() { return RNormal; }
};

} // end namespace haxe
} // end namespace rtti

#endif /* INCLUDED_haxe_rtti_Rights */ 
