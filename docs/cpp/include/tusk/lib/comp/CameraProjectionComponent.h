#ifndef INCLUDED_tusk_lib_comp_CameraProjectionComponent
#define INCLUDED_tusk_lib_comp_CameraProjectionComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tusk_Component
#include <tusk/Component.h>
#endif
HX_DECLARE_CLASS1(haxe,Serializer)
HX_DECLARE_CLASS1(tusk,Component)
HX_DECLARE_CLASS3(tusk,lib,comp,CameraProjectionComponent)
HX_DECLARE_CLASS2(tusk,math,Matrix4x4)
namespace tusk{
namespace lib{
namespace comp{


class HXCPP_CLASS_ATTRIBUTES  CameraProjectionComponent_obj : public ::tusk::Component_obj{
	public:
		typedef ::tusk::Component_obj super;
		typedef CameraProjectionComponent_obj OBJ_;
		CameraProjectionComponent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.lib.comp.CameraProjectionComponent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CameraProjectionComponent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CameraProjectionComponent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CameraProjectionComponent","\x69","\xea","\xce","\xed"); }

		static void __boot();
		static int tid;
		::tusk::math::Matrix4x4 projectionMatrix;
		bool dirty;
		virtual int get__tid( );

		virtual Void hxSerialize( ::haxe::Serializer s);
		Dynamic hxSerialize_dyn();

		virtual Void hxUnserialize( ::haxe::Serializer s);
		Dynamic hxUnserialize_dyn();

};

} // end namespace tusk
} // end namespace lib
} // end namespace comp

#endif /* INCLUDED_tusk_lib_comp_CameraProjectionComponent */ 
