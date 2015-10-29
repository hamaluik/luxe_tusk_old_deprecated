#ifndef INCLUDED_haxe_web_DispatchError
#define INCLUDED_haxe_web_DispatchError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,web,DispatchError)
namespace haxe{
namespace web{


class DispatchError_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef DispatchError_obj OBJ_;

	public:
		DispatchError_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.web.DispatchError","\xec","\x36","\x94","\x61"); }
		::String __ToString() const { return HX_HCSTRING("DispatchError.","\xe0","\x21","\x1d","\x37") + tag; }

		static ::haxe::web::DispatchError DEInvalidValue;
		static inline ::haxe::web::DispatchError DEInvalidValue_dyn() { return DEInvalidValue; }
		static ::haxe::web::DispatchError DEMissing;
		static inline ::haxe::web::DispatchError DEMissing_dyn() { return DEMissing; }
		static ::haxe::web::DispatchError DEMissingParam(::String p);
		static Dynamic DEMissingParam_dyn();
		static ::haxe::web::DispatchError DENotFound(::String part);
		static Dynamic DENotFound_dyn();
		static ::haxe::web::DispatchError DETooManyValues;
		static inline ::haxe::web::DispatchError DETooManyValues_dyn() { return DETooManyValues; }
};

} // end namespace haxe
} // end namespace web

#endif /* INCLUDED_haxe_web_DispatchError */ 
