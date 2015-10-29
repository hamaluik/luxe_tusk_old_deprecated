#ifndef INCLUDED_haxe_macro_ComplexTypeTools
#define INCLUDED_haxe_macro_ComplexTypeTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,ComplexType)
HX_DECLARE_CLASS2(haxe,macro,ComplexTypeTools)
namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES  ComplexTypeTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ComplexTypeTools_obj OBJ_;
		ComplexTypeTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.macro.ComplexTypeTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ComplexTypeTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComplexTypeTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ComplexTypeTools","\xd1","\xfc","\xfc","\x54"); }

		static ::String toString( ::haxe::macro::ComplexType c);
		static Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_ComplexTypeTools */ 
