#ifndef INCLUDED_cpp_link_StaticStd
#define INCLUDED_cpp_link_StaticStd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,link,StaticStd)
namespace cpp{
namespace link{


class HXCPP_CLASS_ATTRIBUTES  StaticStd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StaticStd_obj OBJ_;
		StaticStd_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="cpp.link.StaticStd")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StaticStd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticStd_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("StaticStd","\x75","\x04","\xeb","\x28"); }

};

} // end namespace cpp
} // end namespace link

#endif /* INCLUDED_cpp_link_StaticStd */ 
