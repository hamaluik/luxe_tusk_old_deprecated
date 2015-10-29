#ifndef INCLUDED_tusk_resources_Shader
#define INCLUDED_tusk_resources_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tusk_resources_Asset
#include <tusk/resources/Asset.h>
#endif
HX_DECLARE_CLASS2(tusk,resources,Asset)
HX_DECLARE_CLASS2(tusk,resources,Shader)
namespace tusk{
namespace resources{


class HXCPP_CLASS_ATTRIBUTES  Shader_obj : public ::tusk::resources::Asset_obj{
	public:
		typedef ::tusk::resources::Asset_obj super;
		typedef Shader_obj OBJ_;
		Shader_obj();
		Void __construct(::String path,::String vertSrc,::String fragSrc);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.resources.Shader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Shader_obj > __new(::String path,::String vertSrc,::String fragSrc);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51"); }

		::String vertSrc;
		::String fragSrc;
		::String program;
		virtual ::String compile( );
		Dynamic compile_dyn();

		virtual int getAttributeLocation( ::String attribute);
		Dynamic getAttributeLocation_dyn();

		virtual int getUniformLocation( ::String uniform);
		Dynamic getUniformLocation_dyn();

};

} // end namespace tusk
} // end namespace resources

#endif /* INCLUDED_tusk_resources_Shader */ 
