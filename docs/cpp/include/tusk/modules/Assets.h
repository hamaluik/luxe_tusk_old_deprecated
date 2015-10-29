#ifndef INCLUDED_tusk_modules_Assets
#define INCLUDED_tusk_modules_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(promhx,Promise)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)
HX_DECLARE_CLASS1(tusk,AppFixedTimestep)
HX_DECLARE_CLASS1(tusk,Tusk)
HX_DECLARE_CLASS2(tusk,modules,Assets)
HX_DECLARE_CLASS2(tusk,resources,Asset)
HX_DECLARE_CLASS2(tusk,resources,Sound)
HX_DECLARE_CLASS2(tusk,resources,Texture)
namespace tusk{
namespace modules{


class HXCPP_CLASS_ATTRIBUTES  Assets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assets_obj OBJ_;
		Assets_obj();
		Void __construct(::tusk::Tusk tusk1);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.modules.Assets")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Assets_obj > __new(::tusk::Tusk tusk1);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Assets_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Assets","\xa3","\xbc","\x97","\x80"); }

		::tusk::Tusk tusk;
		::haxe::ds::StringMap assets;
		virtual bool isLoaded( ::String path);
		Dynamic isLoaded_dyn();

		virtual ::promhx::Promise loadSound( ::String path);
		Dynamic loadSound_dyn();

		virtual ::tusk::resources::Sound getSound( ::String path);
		Dynamic getSound_dyn();

		virtual ::promhx::Promise loadTexture( ::String path,::haxe::io::Bytes bytes);
		Dynamic loadTexture_dyn();

		virtual ::tusk::resources::Texture getTexture( ::String path);
		Dynamic getTexture_dyn();

};

} // end namespace tusk
} // end namespace modules

#endif /* INCLUDED_tusk_modules_Assets */ 
