#ifndef INCLUDED_tusk_resources_Texture
#define INCLUDED_tusk_resources_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tusk_resources_Asset
#include <tusk/resources/Asset.h>
#endif
HX_DECLARE_CLASS2(tusk,resources,Asset)
HX_DECLARE_CLASS2(tusk,resources,Texture)
namespace tusk{
namespace resources{


class HXCPP_CLASS_ATTRIBUTES  Texture_obj : public ::tusk::resources::Asset_obj{
	public:
		typedef ::tusk::resources::Asset_obj super;
		typedef Texture_obj OBJ_;
		Texture_obj();
		Void __construct(::String path,Dynamic sound);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.resources.Texture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Texture_obj > __new(::String path,Dynamic sound);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Texture_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Texture","\xbb","\xf0","\x31","\x6c"); }

};

} // end namespace tusk
} // end namespace resources

#endif /* INCLUDED_tusk_resources_Texture */ 
