#ifndef INCLUDED_haxe_rtti_Rtti
#define INCLUDED_haxe_rtti_Rtti

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,rtti,Rtti)
namespace haxe{
namespace rtti{


class HXCPP_CLASS_ATTRIBUTES  Rtti_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Rtti_obj OBJ_;
		Rtti_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.rtti.Rtti")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Rtti_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rtti_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Rtti","\xd7","\xe9","\x8b","\x36"); }

		static Dynamic getRtti( ::hx::Class c);
		static Dynamic getRtti_dyn();

		static bool hasRtti( ::hx::Class c);
		static Dynamic hasRtti_dyn();

};

} // end namespace haxe
} // end namespace rtti

#endif /* INCLUDED_haxe_rtti_Rtti */ 
