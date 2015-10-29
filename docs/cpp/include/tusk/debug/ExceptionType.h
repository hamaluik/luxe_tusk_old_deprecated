#ifndef INCLUDED_tusk_debug_ExceptionType
#define INCLUDED_tusk_debug_ExceptionType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tusk,debug,ExceptionType)
namespace tusk{
namespace debug{


class ExceptionType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ExceptionType_obj OBJ_;

	public:
		ExceptionType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("tusk.debug.ExceptionType","\x99","\x0e","\x51","\x50"); }
		::String __ToString() const { return HX_HCSTRING("ExceptionType.","\x85","\xe5","\x6b","\x4c") + tag; }

		static ::tusk::debug::ExceptionType Assert;
		static inline ::tusk::debug::ExceptionType Assert_dyn() { return Assert; }
		static ::tusk::debug::ExceptionType AssetNotFound;
		static inline ::tusk::debug::ExceptionType AssetNotFound_dyn() { return AssetNotFound; }
		static ::tusk::debug::ExceptionType FileNotFound;
		static inline ::tusk::debug::ExceptionType FileNotFound_dyn() { return FileNotFound; }
		static ::tusk::debug::ExceptionType InvalidAssetType;
		static inline ::tusk::debug::ExceptionType InvalidAssetType_dyn() { return InvalidAssetType; }
		static ::tusk::debug::ExceptionType NotImplementedYet;
		static inline ::tusk::debug::ExceptionType NotImplementedYet_dyn() { return NotImplementedYet; }
		static ::tusk::debug::ExceptionType Unknown;
		static inline ::tusk::debug::ExceptionType Unknown_dyn() { return Unknown; }
};

} // end namespace tusk
} // end namespace debug

#endif /* INCLUDED_tusk_debug_ExceptionType */ 
