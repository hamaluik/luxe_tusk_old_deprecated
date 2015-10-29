#ifndef INCLUDED_haxe_macro_AnonStatus
#define INCLUDED_haxe_macro_AnonStatus

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,AnonStatus)
namespace haxe{
namespace macro{


class AnonStatus_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef AnonStatus_obj OBJ_;

	public:
		AnonStatus_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.macro.AnonStatus","\x28","\xe2","\xfe","\xc2"); }
		::String __ToString() const { return HX_HCSTRING("AnonStatus.","\xb0","\xda","\x91","\x66") + tag; }

		static ::haxe::macro::AnonStatus AAbstractStatics(Dynamic t);
		static Dynamic AAbstractStatics_dyn();
		static ::haxe::macro::AnonStatus AClassStatics(Dynamic t);
		static Dynamic AClassStatics_dyn();
		static ::haxe::macro::AnonStatus AClosed;
		static inline ::haxe::macro::AnonStatus AClosed_dyn() { return AClosed; }
		static ::haxe::macro::AnonStatus AConst;
		static inline ::haxe::macro::AnonStatus AConst_dyn() { return AConst; }
		static ::haxe::macro::AnonStatus AEnumStatics(Dynamic t);
		static Dynamic AEnumStatics_dyn();
		static ::haxe::macro::AnonStatus AExtend(Dynamic tl);
		static Dynamic AExtend_dyn();
		static ::haxe::macro::AnonStatus AOpened;
		static inline ::haxe::macro::AnonStatus AOpened_dyn() { return AOpened; }
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_AnonStatus */ 
