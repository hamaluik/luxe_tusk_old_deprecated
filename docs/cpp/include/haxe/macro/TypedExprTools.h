#ifndef INCLUDED_haxe_macro_TypedExprTools
#define INCLUDED_haxe_macro_TypedExprTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,Type)
HX_DECLARE_CLASS2(haxe,macro,TypedExprDef)
HX_DECLARE_CLASS2(haxe,macro,TypedExprTools)
namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES  TypedExprTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TypedExprTools_obj OBJ_;
		TypedExprTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.macro.TypedExprTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TypedExprTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TypedExprTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TypedExprTools","\xfc","\xaa","\x97","\xa9"); }

		static Dynamic with( Dynamic e,::haxe::macro::TypedExprDef edef,::haxe::macro::Type t);
		static Dynamic with_dyn();

		static Dynamic map( Dynamic e,Dynamic f);
		static Dynamic map_dyn();

		static Void iter( Dynamic e,Dynamic f);
		static Dynamic iter_dyn();

		static Dynamic mapWithType( Dynamic e,Dynamic f,Dynamic ft,Dynamic fv);
		static Dynamic mapWithType_dyn();

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_TypedExprTools */ 
