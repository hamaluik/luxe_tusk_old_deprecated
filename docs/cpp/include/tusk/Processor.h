#ifndef INCLUDED_tusk_Processor
#define INCLUDED_tusk_Processor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Serializer)
HX_DECLARE_CLASS1(haxe,Unserializer)
HX_DECLARE_CLASS1(tusk,Entity)
HX_DECLARE_CLASS1(tusk,Matcher)
HX_DECLARE_CLASS1(tusk,Processor)
namespace tusk{


class HXCPP_CLASS_ATTRIBUTES  Processor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Processor_obj OBJ_;
		Processor_obj();
		Void __construct(Array< ::Dynamic > entities);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.Processor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Processor_obj > __new(Array< ::Dynamic > entities);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Processor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Processor","\x32","\x9d","\xde","\x74"); }

		Array< ::Dynamic > entities;
		::tusk::Matcher matcher;
		bool enabled;
		virtual bool set_enabled( bool enabled);
		Dynamic set_enabled_dyn();

		virtual Void ___connectRoutes( );
		Dynamic ___connectRoutes_dyn();

		virtual Void ___disconnectRoutes( );
		Dynamic ___disconnectRoutes_dyn();

		virtual Void onEnabled( );
		Dynamic onEnabled_dyn();

		virtual Void onDisabled( );
		Dynamic onDisabled_dyn();

		virtual Void onStart( Dynamic data);
		Dynamic onStart_dyn();

		virtual Void onDestroy( Dynamic data);
		Dynamic onDestroy_dyn();

		virtual Void onUpdate( Dynamic data);
		Dynamic onUpdate_dyn();

		virtual Void onRender( Dynamic data);
		Dynamic onRender_dyn();

		virtual Void hxSerialize( ::haxe::Serializer s);
		Dynamic hxSerialize_dyn();

		virtual Void hxUnserialize( ::haxe::Unserializer u);
		Dynamic hxUnserialize_dyn();

};

} // end namespace tusk

#endif /* INCLUDED_tusk_Processor */ 
