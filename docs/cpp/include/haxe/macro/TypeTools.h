#ifndef INCLUDED_haxe_macro_TypeTools
#define INCLUDED_haxe_macro_TypeTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,ComplexType)
HX_DECLARE_CLASS2(haxe,macro,Type)
HX_DECLARE_CLASS2(haxe,macro,TypeTools)
namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES  TypeTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TypeTools_obj OBJ_;
		TypeTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.macro.TypeTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TypeTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TypeTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TypeTools","\xe1","\xcc","\xd9","\x7a"); }

		static ::haxe::macro::ComplexType nullable( ::haxe::macro::ComplexType complexType);
		static Dynamic nullable_dyn();

		static Dynamic toField( Dynamic cf);
		static Dynamic toField_dyn();

		static ::haxe::macro::ComplexType toComplexType( ::haxe::macro::Type type);
		static Dynamic toComplexType_dyn();

		static Dynamic toTypePath( Dynamic baseType,Array< ::Dynamic > params);
		static Dynamic toTypePath_dyn();

		static Dynamic findField( Dynamic c,::String name,hx::Null< bool >  isStatic);
		static Dynamic findField_dyn();

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_TypeTools */ 
