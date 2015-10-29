#ifndef INCLUDED_haxe_macro_Format
#define INCLUDED_haxe_macro_Format

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,Format)
namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES  Format_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Format_obj OBJ_;
		Format_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.macro.Format")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Format_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Format_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Format","\x57","\x03","\x23","\x32"); }

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_Format */ 
