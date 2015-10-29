#ifndef INCLUDED_tusk_resources_Asset
#define INCLUDED_tusk_resources_Asset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tusk,resources,Asset)
namespace tusk{
namespace resources{


class HXCPP_CLASS_ATTRIBUTES  Asset_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Asset_obj OBJ_;
		Asset_obj();
		Void __construct(::String path);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.resources.Asset")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Asset_obj > __new(::String path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Asset_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Asset","\xd0","\xd9","\x66","\xb9"); }

		::String path;
};

} // end namespace tusk
} // end namespace resources

#endif /* INCLUDED_tusk_resources_Asset */ 
