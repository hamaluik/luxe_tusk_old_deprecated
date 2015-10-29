#ifndef INCLUDED_sys_net_Address
#define INCLUDED_sys_net_Address

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,net,Address)
HX_DECLARE_CLASS2(sys,net,Host)
namespace sys{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  Address_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Address_obj OBJ_;
		Address_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sys.net.Address")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Address_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Address_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Address","\x94","\x99","\x5c","\x6a"); }

		int host;
		int port;
		virtual ::sys::net::Host getHost( );
		Dynamic getHost_dyn();

		virtual int compare( ::sys::net::Address a);
		Dynamic compare_dyn();

		virtual ::sys::net::Address clone( );
		Dynamic clone_dyn();

};

} // end namespace sys
} // end namespace net

#endif /* INCLUDED_sys_net_Address */ 
