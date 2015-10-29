#ifndef INCLUDED_haxe_macro_PositionTools
#define INCLUDED_haxe_macro_PositionTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,PositionTools)
namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES  PositionTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PositionTools_obj OBJ_;
		PositionTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.macro.PositionTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PositionTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PositionTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PositionTools","\x92","\xac","\x1d","\xc6"); }

		static Dynamic here;
		static Dynamic &here_dyn() { return here;}
		static Dynamic getInfos( Dynamic p);
		static Dynamic getInfos_dyn();

		static Dynamic make( Dynamic inf);
		static Dynamic make_dyn();

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_PositionTools */ 
