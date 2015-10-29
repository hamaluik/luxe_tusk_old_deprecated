#ifndef INCLUDED_tusk_Tusk
#define INCLUDED_tusk_Tusk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tusk_AppFixedTimestep
#include <tusk/AppFixedTimestep.h>
#endif
HX_DECLARE_CLASS1(tusk,AppFixedTimestep)
HX_DECLARE_CLASS1(tusk,Entity)
HX_DECLARE_CLASS1(tusk,Game)
HX_DECLARE_CLASS1(tusk,SplashScreen)
HX_DECLARE_CLASS1(tusk,Tusk)
HX_DECLARE_CLASS1(tusk,Window)
HX_DECLARE_CLASS2(tusk,events,EventRouter)
HX_DECLARE_CLASS2(tusk,events,EventType)
HX_DECLARE_CLASS2(tusk,modules,Assets)
HX_DECLARE_CLASS2(tusk,modules,Sound)
namespace tusk{


class HXCPP_CLASS_ATTRIBUTES  Tusk_obj : public ::tusk::AppFixedTimestep_obj{
	public:
		typedef ::tusk::AppFixedTimestep_obj super;
		typedef Tusk_obj OBJ_;
		Tusk_obj();
		Void __construct(::tusk::Game game);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.Tusk")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tusk_obj > __new(::tusk::Game game);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tusk_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tusk","\x79","\x18","\xdf","\x37"); }

		static ::tusk::Tusk instance;
		static ::tusk::modules::Sound sound;
		static ::tusk::modules::Assets assets;
		static Void routeEvent( ::tusk::events::EventType type,Dynamic handler);
		static Dynamic routeEvent_dyn();

		static Void unrouteEvent( ::tusk::events::EventType type,Dynamic handler);
		static Dynamic unrouteEvent_dyn();

		static Void addEntity( ::tusk::Entity entity);
		static Dynamic addEntity_dyn();

		static Void entityChanged( ::tusk::Entity entity);
		static Dynamic entityChanged_dyn();

		static Void removeEntity( ::tusk::Entity entity);
		static Dynamic removeEntity_dyn();

		static ::String serialize( );
		static Dynamic serialize_dyn();

		::tusk::Game game;
		::tusk::events::EventRouter router;
		::tusk::SplashScreen splashScreen;
		virtual Dynamic config( Dynamic config);

		virtual Void initialize( );
		Dynamic initialize_dyn();

		virtual Void ready( );

		virtual Void update( Float dt);

		virtual Void render( ::tusk::Window window);
		Dynamic render_dyn();

};

} // end namespace tusk

#endif /* INCLUDED_tusk_Tusk */ 
