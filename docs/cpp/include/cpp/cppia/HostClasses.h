#ifndef INCLUDED_cpp_cppia_HostClasses
#define INCLUDED_cpp_cppia_HostClasses

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,cppia,HostClasses)
namespace cpp{
namespace cppia{


class HXCPP_CLASS_ATTRIBUTES  HostClasses_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HostClasses_obj OBJ_;
		HostClasses_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="cpp.cppia.HostClasses")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HostClasses_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HostClasses_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HostClasses","\xfe","\x7b","\x08","\x83"); }

};

} // end namespace cpp
} // end namespace cppia

#endif /* INCLUDED_cpp_cppia_HostClasses */ 
