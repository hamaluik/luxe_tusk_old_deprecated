#ifndef INCLUDED_promhx_error_PromiseError
#define INCLUDED_promhx_error_PromiseError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(promhx,error,PromiseError)
namespace promhx{
namespace error{


class PromiseError_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef PromiseError_obj OBJ_;

	public:
		PromiseError_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("promhx.error.PromiseError","\xb1","\x53","\x45","\x2b"); }
		::String __ToString() const { return HX_HCSTRING("PromiseError.","\x41","\xbb","\x2d","\xf8") + tag; }

		static ::promhx::error::PromiseError AlreadyResolved(::String message);
		static Dynamic AlreadyResolved_dyn();
		static ::promhx::error::PromiseError DownstreamNotFullfilled(::String message);
		static Dynamic DownstreamNotFullfilled_dyn();
};

} // end namespace promhx
} // end namespace error

#endif /* INCLUDED_promhx_error_PromiseError */ 
