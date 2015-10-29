#ifndef INCLUDED_haxe_io_FPHelper
#define INCLUDED_haxe_io_FPHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,FPHelper)
namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  FPHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FPHelper_obj OBJ_;
		FPHelper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.io.FPHelper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FPHelper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FPHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FPHelper","\x58","\x42","\x63","\xdb"); }

		static void __boot();
		static cpp::Int64Struct i64tmp;
		static Float LN2;
		static Float i32ToFloat( int i);
		static Dynamic i32ToFloat_dyn();

		static int floatToI32( Float f);
		static Dynamic floatToI32_dyn();

		static Float i64ToDouble( int low,int high);
		static Dynamic i64ToDouble_dyn();

		static cpp::Int64Struct doubleToI64( Float v);
		static Dynamic doubleToI64_dyn();

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_FPHelper */ 
