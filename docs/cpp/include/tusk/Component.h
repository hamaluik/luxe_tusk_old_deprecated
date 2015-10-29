#ifndef INCLUDED_tusk_Component
#define INCLUDED_tusk_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tusk,Component)
namespace tusk{


class HXCPP_CLASS_ATTRIBUTES  Component_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Component_obj OBJ_;
		Component_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="tusk.Component")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Component_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Component_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Component","\x9d","\xd0","\x26","\xb1"); }

		static void __boot();
		static int tid;
		int _tid;
		virtual int get__tid( );
		Dynamic get__tid_dyn();

};

} // end namespace tusk

#endif /* INCLUDED_tusk_Component */ 
