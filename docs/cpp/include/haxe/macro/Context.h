#ifndef INCLUDED_haxe_macro_Context
#define INCLUDED_haxe_macro_Context

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,Context)
namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES  Context_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context_obj OBJ_;
		Context_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.macro.Context")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Context_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Context","\xcf","\xbd","\xc8","\xe6"); }

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_Context */ 
