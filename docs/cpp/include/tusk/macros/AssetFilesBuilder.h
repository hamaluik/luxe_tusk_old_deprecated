#ifndef INCLUDED_tusk_macros_AssetFilesBuilder
#define INCLUDED_tusk_macros_AssetFilesBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tusk,macros,AssetFilesBuilder)
namespace tusk{
namespace macros{


class HXCPP_CLASS_ATTRIBUTES  AssetFilesBuilder_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetFilesBuilder_obj OBJ_;
		AssetFilesBuilder_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="tusk.macros.AssetFilesBuilder")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetFilesBuilder_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetFilesBuilder_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AssetFilesBuilder","\x54","\x8f","\x1e","\x2e"); }

		static Dynamic build;
		static Dynamic &build_dyn() { return build;}
};

} // end namespace tusk
} // end namespace macros

#endif /* INCLUDED_tusk_macros_AssetFilesBuilder */ 
