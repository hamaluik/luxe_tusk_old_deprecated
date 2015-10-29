#ifndef INCLUDED_tusk_macros__AssetFilesBuilder_FileRef
#define INCLUDED_tusk_macros__AssetFilesBuilder_FileRef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tusk,macros,_AssetFilesBuilder,FileRef)
namespace tusk{
namespace macros{
namespace _AssetFilesBuilder{


class HXCPP_CLASS_ATTRIBUTES  FileRef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FileRef_obj OBJ_;
		FileRef_obj();
		Void __construct(::String baseDir,::String value);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.macros._AssetFilesBuilder.FileRef")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FileRef_obj > __new(::String baseDir,::String value);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FileRef_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FileRef","\x17","\x20","\x9f","\xcc"); }

		::String name;
		::String value;
		::String documentation;
};

} // end namespace tusk
} // end namespace macros
} // end namespace _AssetFilesBuilder

#endif /* INCLUDED_tusk_macros__AssetFilesBuilder_FileRef */ 
