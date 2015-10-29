#ifndef INCLUDED_tusk_Snow
#define INCLUDED_tusk_Snow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tusk,Snow)
HX_DECLARE_CLASS1(tusk,Window)
namespace tusk{


class HXCPP_CLASS_ATTRIBUTES  Snow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Snow_obj OBJ_;
		Snow_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.Snow")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Snow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Snow_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Snow","\xa3","\x8e","\x30","\x37"); }

		::tusk::Window window;
};

} // end namespace tusk

#endif /* INCLUDED_tusk_Snow */ 
