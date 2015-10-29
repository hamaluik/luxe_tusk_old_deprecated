#ifndef INCLUDED_haxe_macro_ExprArrayTools
#define INCLUDED_haxe_macro_ExprArrayTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,ExprArrayTools)
namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES  ExprArrayTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ExprArrayTools_obj OBJ_;
		ExprArrayTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.macro.ExprArrayTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ExprArrayTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExprArrayTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ExprArrayTools","\x77","\xb3","\xca","\x56"); }

		static cpp::ArrayBase map( cpp::ArrayBase el,Dynamic f);
		static Dynamic map_dyn();

		static Void iter( cpp::ArrayBase el,Dynamic f);
		static Dynamic iter_dyn();

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_ExprArrayTools */ 
