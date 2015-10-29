#ifndef INCLUDED_tusk_modules_Sound
#define INCLUDED_tusk_modules_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tusk,AppFixedTimestep)
HX_DECLARE_CLASS1(tusk,Tusk)
HX_DECLARE_CLASS2(tusk,modules,Sound)
HX_DECLARE_CLASS2(tusk,resources,Asset)
HX_DECLARE_CLASS2(tusk,resources,Sound)
namespace tusk{
namespace modules{


class HXCPP_CLASS_ATTRIBUTES  Sound_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sound_obj OBJ_;
		Sound_obj();
		Void __construct(::tusk::Tusk tusk1);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.modules.Sound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sound_obj > __new(::tusk::Tusk tusk1);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sound_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Sound","\xaf","\xfc","\xf9","\x13"); }

		::tusk::Tusk tusk;
		virtual Void load( ::String path,Dynamic onLoadComplete,Dynamic onError);
		Dynamic load_dyn();

		virtual Void play( ::tusk::resources::Sound sound);
		Dynamic play_dyn();

};

} // end namespace tusk
} // end namespace modules

#endif /* INCLUDED_tusk_modules_Sound */ 
