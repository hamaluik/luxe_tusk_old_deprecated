#ifndef INCLUDED_haxe_macro_MacroStringTools
#define INCLUDED_haxe_macro_MacroStringTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,ComplexType)
HX_DECLARE_CLASS2(haxe,macro,MacroStringTools)
namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES  MacroStringTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MacroStringTools_obj OBJ_;
		MacroStringTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.macro.MacroStringTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MacroStringTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MacroStringTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MacroStringTools","\xfe","\x6a","\xf7","\x3a"); }

		static Dynamic toFieldExpr( Array< ::String > sl);
		static Dynamic toFieldExpr_dyn();

		static ::String toDotPath( Array< ::String > pack,::String name);
		static Dynamic toDotPath_dyn();

		static ::haxe::macro::ComplexType toComplex( ::String path);
		static Dynamic toComplex_dyn();

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_MacroStringTools */ 
