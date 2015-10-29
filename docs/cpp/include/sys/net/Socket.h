#ifndef INCLUDED_sys_net_Socket
#define INCLUDED_sys_net_Socket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(sys,net,Host)
HX_DECLARE_CLASS2(sys,net,Socket)
namespace sys{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  Socket_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Socket_obj OBJ_;
		Socket_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sys.net.Socket")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Socket_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Socket_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Socket","\xd3","\xff","\xda","\x5a"); }

		static void __boot();
		static Dynamic select( Array< ::Dynamic > read,Array< ::Dynamic > write,Array< ::Dynamic > others,Dynamic timeout);
		static Dynamic select_dyn();

		static Dynamic socket_new;
		static Dynamic &socket_new_dyn() { return socket_new;}
		static Dynamic socket_close;
		static Dynamic &socket_close_dyn() { return socket_close;}
		static Dynamic socket_write;
		static Dynamic &socket_write_dyn() { return socket_write;}
		static Dynamic socket_read;
		static Dynamic &socket_read_dyn() { return socket_read;}
		static Dynamic socket_connect;
		static Dynamic &socket_connect_dyn() { return socket_connect;}
		static Dynamic socket_listen;
		static Dynamic &socket_listen_dyn() { return socket_listen;}
		static Dynamic socket_select;
		static Dynamic &socket_select_dyn() { return socket_select;}
		static Dynamic socket_bind;
		static Dynamic &socket_bind_dyn() { return socket_bind;}
		static Dynamic socket_accept;
		static Dynamic &socket_accept_dyn() { return socket_accept;}
		static Dynamic socket_peer;
		static Dynamic &socket_peer_dyn() { return socket_peer;}
		static Dynamic socket_host;
		static Dynamic &socket_host_dyn() { return socket_host;}
		static Dynamic socket_set_timeout;
		static Dynamic &socket_set_timeout_dyn() { return socket_set_timeout;}
		static Dynamic socket_shutdown;
		static Dynamic &socket_shutdown_dyn() { return socket_shutdown;}
		static Dynamic socket_set_blocking;
		static Dynamic &socket_set_blocking_dyn() { return socket_set_blocking;}
		static Dynamic socket_set_fast_send;
		static Dynamic &socket_set_fast_send_dyn() { return socket_set_fast_send;}
		Dynamic __s;
		::haxe::io::Input input;
		::haxe::io::Output output;
		Dynamic custom;
		virtual Void close( );
		Dynamic close_dyn();

		virtual ::String read( );
		Dynamic read_dyn();

		virtual Void write( ::String content);
		Dynamic write_dyn();

		virtual Void connect( ::sys::net::Host host,int port);
		Dynamic connect_dyn();

		virtual Void listen( int connections);
		Dynamic listen_dyn();

		virtual Void shutdown( bool read,bool write);
		Dynamic shutdown_dyn();

		virtual Void bind( ::sys::net::Host host,int port);
		Dynamic bind_dyn();

		virtual ::sys::net::Socket accept( );
		Dynamic accept_dyn();

		virtual Dynamic peer( );
		Dynamic peer_dyn();

		virtual Dynamic host( );
		Dynamic host_dyn();

		virtual Void setTimeout( Float timeout);
		Dynamic setTimeout_dyn();

		virtual Void waitForRead( );
		Dynamic waitForRead_dyn();

		virtual Void setBlocking( bool b);
		Dynamic setBlocking_dyn();

		virtual Void setFastSend( bool b);
		Dynamic setFastSend_dyn();

};

} // end namespace sys
} // end namespace net

#endif /* INCLUDED_sys_net_Socket */ 
