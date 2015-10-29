#ifndef INCLUDED_haxe_Json
#define INCLUDED_haxe_Json

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Json)
namespace haxe{


class HXCPP_CLASS_ATTRIBUTES  Json_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Json_obj OBJ_;
		Json_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.Json")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Json_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Json_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Json","\x48","\x6e","\x41","\x31"); }

		static Dynamic parse( ::String text);
		static Dynamic parse_dyn();

		static ::String stringify( Dynamic value,Dynamic replacer,::String space);
		static Dynamic stringify_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Json */ 
