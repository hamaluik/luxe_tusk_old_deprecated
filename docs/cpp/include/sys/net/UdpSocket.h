#ifndef INCLUDED_sys_net_UdpSocket
#define INCLUDED_sys_net_UdpSocket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(sys,net,Address)
HX_DECLARE_CLASS2(sys,net,Socket)
HX_DECLARE_CLASS2(sys,net,UdpSocket)
namespace sys{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  UdpSocket_obj : public ::sys::net::Socket_obj{
	public:
		typedef ::sys::net::Socket_obj super;
		typedef UdpSocket_obj OBJ_;
		UdpSocket_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sys.net.UdpSocket")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UdpSocket_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UdpSocket_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("UdpSocket","\xb4","\x65","\x1b","\xee"); }

		virtual int sendTo( ::haxe::io::Bytes buf,int pos,int len,::sys::net::Address addr);
		Dynamic sendTo_dyn();

		virtual int readFrom( ::haxe::io::Bytes buf,int pos,int len,::sys::net::Address addr);
		Dynamic readFrom_dyn();

};

} // end namespace sys
} // end namespace net

#endif /* INCLUDED_sys_net_UdpSocket */ 
