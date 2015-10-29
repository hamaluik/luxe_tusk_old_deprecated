#ifndef INCLUDED_cpp_link_StaticZlib
#define INCLUDED_cpp_link_StaticZlib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,link,StaticZlib)
namespace cpp{
namespace link{


class HXCPP_CLASS_ATTRIBUTES  StaticZlib_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StaticZlib_obj OBJ_;
		StaticZlib_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="cpp.link.StaticZlib")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StaticZlib_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticZlib_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("StaticZlib","\xf9","\x52","\x53","\xa9"); }

};

} // end namespace cpp
} // end namespace link

#endif /* INCLUDED_cpp_link_StaticZlib */ 
