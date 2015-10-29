#ifndef INCLUDED_tusk_AppFixedTimestep
#define INCLUDED_tusk_AppFixedTimestep

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tusk,AppFixedTimestep)
HX_DECLARE_CLASS1(tusk,Snow)
namespace tusk{


class HXCPP_CLASS_ATTRIBUTES  AppFixedTimestep_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AppFixedTimestep_obj OBJ_;
		AppFixedTimestep_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.AppFixedTimestep")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AppFixedTimestep_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AppFixedTimestep_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AppFixedTimestep","\x2c","\xa6","\xd1","\x7e"); }

		::tusk::Snow app;
		Float alpha;
		virtual Dynamic config( Dynamic config);
		Dynamic config_dyn();

		virtual Void ready( );
		Dynamic ready_dyn();

		virtual Void update( Float dt);
		Dynamic update_dyn();

};

} // end namespace tusk

#endif /* INCLUDED_tusk_AppFixedTimestep */ 
