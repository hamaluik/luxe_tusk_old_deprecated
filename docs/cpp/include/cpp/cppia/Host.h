#ifndef INCLUDED_cpp_cppia_Host
#define INCLUDED_cpp_cppia_Host

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,cppia,Host)
namespace cpp{
namespace cppia{


class HXCPP_CLASS_ATTRIBUTES  Host_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Host_obj OBJ_;
		Host_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="cpp.cppia.Host")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Host_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Host_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Host","\x88","\xfb","\xeb","\x2f"); }

		static Void run( ::String source);
		static Dynamic run_dyn();

		static Void main( );
		static Dynamic main_dyn();

};

} // end namespace cpp
} // end namespace cppia

#endif /* INCLUDED_cpp_cppia_Host */ 
