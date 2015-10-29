#ifndef INCLUDED_haxe_rtti_TypeApi
#define INCLUDED_haxe_rtti_TypeApi

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,rtti,CType)
HX_DECLARE_CLASS2(haxe,rtti,Rights)
HX_DECLARE_CLASS2(haxe,rtti,TypeApi)
HX_DECLARE_CLASS2(haxe,rtti,TypeTree)
namespace haxe{
namespace rtti{


class HXCPP_CLASS_ATTRIBUTES  TypeApi_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TypeApi_obj OBJ_;
		TypeApi_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.rtti.TypeApi")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TypeApi_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TypeApi_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TypeApi","\xe0","\xd9","\x0e","\xc6"); }

		static Dynamic typeInfos( ::haxe::rtti::TypeTree t);
		static Dynamic typeInfos_dyn();

		static bool isVar( ::haxe::rtti::CType t);
		static Dynamic isVar_dyn();

		static bool leq( Dynamic f,::List l1,::List l2);
		static Dynamic leq_dyn();

		static bool rightsEq( ::haxe::rtti::Rights r1,::haxe::rtti::Rights r2);
		static Dynamic rightsEq_dyn();

		static bool typeEq( ::haxe::rtti::CType t1,::haxe::rtti::CType t2);
		static Dynamic typeEq_dyn();

		static bool fieldEq( Dynamic f1,Dynamic f2);
		static Dynamic fieldEq_dyn();

		static bool constructorEq( Dynamic c1,Dynamic c2);
		static Dynamic constructorEq_dyn();

};

} // end namespace haxe
} // end namespace rtti

#endif /* INCLUDED_haxe_rtti_TypeApi */ 
