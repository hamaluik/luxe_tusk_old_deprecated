#ifndef INCLUDED_tusk_resources_Sound
#define INCLUDED_tusk_resources_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tusk_resources_Asset
#include <tusk/resources/Asset.h>
#endif
HX_DECLARE_CLASS2(tusk,resources,Asset)
HX_DECLARE_CLASS2(tusk,resources,Sound)
namespace tusk{
namespace resources{


class HXCPP_CLASS_ATTRIBUTES  Sound_obj : public ::tusk::resources::Asset_obj{
	public:
		typedef ::tusk::resources::Asset_obj super;
		typedef Sound_obj OBJ_;
		Sound_obj();
		Void __construct(::String path,Dynamic sound);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.resources.Sound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sound_obj > __new(::String path,Dynamic sound);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sound_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Sound","\xaf","\xfc","\xf9","\x13"); }

		Dynamic onEnd;
		Dynamic &onEnd_dyn() { return onEnd;}
		virtual Dynamic set_onEnd( Dynamic cb);
		Dynamic set_onEnd_dyn();

};

} // end namespace tusk
} // end namespace resources

#endif /* INCLUDED_tusk_resources_Sound */ 
