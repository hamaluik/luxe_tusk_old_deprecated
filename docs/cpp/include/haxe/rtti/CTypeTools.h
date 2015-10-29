#ifndef INCLUDED_haxe_rtti_CTypeTools
#define INCLUDED_haxe_rtti_CTypeTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,rtti,CType)
HX_DECLARE_CLASS2(haxe,rtti,CTypeTools)
namespace haxe{
namespace rtti{


class HXCPP_CLASS_ATTRIBUTES  CTypeTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CTypeTools_obj OBJ_;
		CTypeTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.rtti.CTypeTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CTypeTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CTypeTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CTypeTools","\x3e","\x2c","\x57","\xce"); }

		static ::String toString( ::haxe::rtti::CType t);
		static Dynamic toString_dyn();

		static ::String nameWithParams( ::String name,::List params);
		static Dynamic nameWithParams_dyn();

		static ::String functionArgumentName( Dynamic arg);
		static Dynamic functionArgumentName_dyn();

		static ::String classField( Dynamic cf);
		static Dynamic classField_dyn();

};

} // end namespace haxe
} // end namespace rtti

#endif /* INCLUDED_haxe_rtti_CTypeTools */ 
