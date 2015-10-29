#ifndef INCLUDED_tusk_SplashScreen
#define INCLUDED_tusk_SplashScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tusk,AppFixedTimestep)
HX_DECLARE_CLASS1(tusk,SplashScreen)
HX_DECLARE_CLASS1(tusk,Tusk)
HX_DECLARE_CLASS1(tusk,Window)
HX_DECLARE_CLASS2(tusk,math,Matrix4x4)
HX_DECLARE_CLASS2(tusk,resources,Asset)
HX_DECLARE_CLASS2(tusk,resources,Material)
namespace tusk{


class HXCPP_CLASS_ATTRIBUTES  SplashScreen_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SplashScreen_obj OBJ_;
		SplashScreen_obj();
		Void __construct(::tusk::Tusk app,Dynamic onDone);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.SplashScreen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SplashScreen_obj > __new(::tusk::Tusk app,Dynamic onDone);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SplashScreen_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SplashScreen","\x53","\x04","\x96","\xd1"); }

		::tusk::Tusk app;
		Dynamic onDone;
		Dynamic &onDone_dyn() { return onDone;}
		::tusk::math::Matrix4x4 projectionMatrix;
		::tusk::math::Matrix4x4 modelMatrix;
		::tusk::resources::Material mat;
		int posLocation;
		int uvLocation;
		bool started;
		bool shaking;
		Float t;
		Float shakeAmplitude;
		Float shakeDelay;
		Float cooldown;
		bool done;
		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual Void render( ::tusk::Window window);
		Dynamic render_dyn();

};

} // end namespace tusk

#endif /* INCLUDED_tusk_SplashScreen */ 
