#ifndef INCLUDED_haxe_macro_Compiler
#define INCLUDED_haxe_macro_Compiler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,Compiler)
namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES  Compiler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Compiler_obj OBJ_;
		Compiler_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.macro.Compiler")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Compiler_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Compiler_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Compiler","\xbf","\x5b","\x83","\x57"); }

		static Dynamic getDefine;
		static Dynamic &getDefine_dyn() { return getDefine;}
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_Compiler */ 
