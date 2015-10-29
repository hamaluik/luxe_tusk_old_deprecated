#ifndef INCLUDED_cpp_link_StaticMysql
#define INCLUDED_cpp_link_StaticMysql

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,link,StaticMysql)
namespace cpp{
namespace link{


class HXCPP_CLASS_ATTRIBUTES  StaticMysql_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StaticMysql_obj OBJ_;
		StaticMysql_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="cpp.link.StaticMysql")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StaticMysql_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticMysql_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("StaticMysql","\x74","\x26","\xff","\x0b"); }

};

} // end namespace cpp
} // end namespace link

#endif /* INCLUDED_cpp_link_StaticMysql */ 
