#ifndef INCLUDED_haxe_macro_ExprTools
#define INCLUDED_haxe_macro_ExprTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,ExprTools)
namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES  ExprTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ExprTools_obj OBJ_;
		ExprTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.macro.ExprTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ExprTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExprTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ExprTools","\x86","\xe4","\x25","\x18"); }

		static ::String toString( Dynamic e);
		static Dynamic toString_dyn();

		static Void iter( Dynamic e,Dynamic f);
		static Dynamic iter_dyn();

		static Dynamic map( Dynamic e,Dynamic f);
		static Dynamic map_dyn();

		static Dynamic getValue( Dynamic e);
		static Dynamic getValue_dyn();

		static Dynamic opt( Dynamic e,Dynamic f);
		static Dynamic opt_dyn();

		static Void opt2( Dynamic e,Dynamic f);
		static Dynamic opt2_dyn();

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_ExprTools */ 
