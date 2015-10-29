#ifndef INCLUDED_tusk_Game
#define INCLUDED_tusk_Game

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tusk,Entity)
HX_DECLARE_CLASS1(tusk,Game)
HX_DECLARE_CLASS1(tusk,Processor)
namespace tusk{


class HXCPP_CLASS_ATTRIBUTES  Game_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Game_obj OBJ_;
		Game_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.Game")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Game_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Game_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Game","\x12","\x20","\x38","\x2f"); }

		::String title;
		virtual ::String get_title( );
		Dynamic get_title_dyn();

		Array< ::Dynamic > processors;
		Array< ::Dynamic > entities;
		virtual Void ___connectRoutes( );
		Dynamic ___connectRoutes_dyn();

		virtual Void ___disconnectRoutes( );
		Dynamic ___disconnectRoutes_dyn();

		virtual bool processorExists( ::hx::Class type);
		Dynamic processorExists_dyn();

		virtual Void useProcessor( ::tusk::Processor processor);
		Dynamic useProcessor_dyn();

		virtual ::tusk::Processor getProcessor( ::hx::Class type);
		Dynamic getProcessor_dyn();

		virtual Void onStart( Dynamic data);
		Dynamic onStart_dyn();

		virtual Void onDestroy( Dynamic data);
		Dynamic onDestroy_dyn();

		virtual Void onUpdate( Dynamic data);
		Dynamic onUpdate_dyn();

		virtual Void onRender( Dynamic data);
		Dynamic onRender_dyn();

};

} // end namespace tusk

#endif /* INCLUDED_tusk_Game */ 
