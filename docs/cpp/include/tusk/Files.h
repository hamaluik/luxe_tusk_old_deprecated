#ifndef INCLUDED_tusk_Files
#define INCLUDED_tusk_Files

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tusk,Files)
namespace tusk{


class HXCPP_CLASS_ATTRIBUTES  Files_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Files_obj OBJ_;
		Files_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="tusk.Files")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Files_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Files_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Files","\x57","\x4e","\xc6","\x93"); }

};

} // end namespace tusk

#endif /* INCLUDED_tusk_Files */ 
