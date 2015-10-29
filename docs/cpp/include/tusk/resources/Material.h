#ifndef INCLUDED_tusk_resources_Material
#define INCLUDED_tusk_resources_Material

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tusk_resources_Asset
#include <tusk/resources/Asset.h>
#endif
HX_DECLARE_CLASS2(tusk,math,Matrix4x4)
HX_DECLARE_CLASS2(tusk,resources,Asset)
HX_DECLARE_CLASS2(tusk,resources,Material)
HX_DECLARE_CLASS2(tusk,resources,Shader)
namespace tusk{
namespace resources{


class HXCPP_CLASS_ATTRIBUTES  Material_obj : public ::tusk::resources::Asset_obj{
	public:
		typedef ::tusk::resources::Asset_obj super;
		typedef Material_obj OBJ_;
		Material_obj();
		Void __construct(::String path,::tusk::resources::Shader shader);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.resources.Material")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Material_obj > __new(::String path,::tusk::resources::Shader shader);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Material_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Material","\xc7","\x18","\x57","\xca"); }

		::tusk::resources::Shader shader;
		virtual Void setMatrix4x4( ::String name,::tusk::math::Matrix4x4 matrix,hx::Null< bool >  transpose);
		Dynamic setMatrix4x4_dyn();

		virtual Void setTexture( ::String name,int ndx);
		Dynamic setTexture_dyn();

};

} // end namespace tusk
} // end namespace resources

#endif /* INCLUDED_tusk_resources_Material */ 
