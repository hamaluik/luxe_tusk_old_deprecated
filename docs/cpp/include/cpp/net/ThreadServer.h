#ifndef INCLUDED_cpp_net_ThreadServer
#define INCLUDED_cpp_net_ThreadServer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,net,ThreadServer)
HX_DECLARE_CLASS2(cpp,vm,Thread)
HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(sys,net,Socket)
namespace cpp{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  ThreadServer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ThreadServer_obj OBJ_;
		ThreadServer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="cpp.net.ThreadServer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ThreadServer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ThreadServer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ThreadServer","\x4d","\xb9","\xde","\x54"); }

		cpp::ArrayBase threads;
		::sys::net::Socket sock;
		::cpp::vm::Thread worker;
		::cpp::vm::Thread timer;
		int listen;
		int nthreads;
		Float connectLag;
		::haxe::io::Output errorOutput;
		int initialBufferSize;
		int maxBufferSize;
		int messageHeaderSize;
		Float updateTime;
		int maxSockPerThread;
		virtual Void runThread( Dynamic t);
		Dynamic runThread_dyn();

		virtual Void readClientData( Dynamic c);
		Dynamic readClientData_dyn();

		virtual Void loopThread( Dynamic t);
		Dynamic loopThread_dyn();

		virtual Void doClientDisconnected( Dynamic s,Dynamic c);
		Dynamic doClientDisconnected_dyn();

		virtual Void runWorker( );
		Dynamic runWorker_dyn();

		virtual Void work( Dynamic f);
		Dynamic work_dyn();

		virtual Void logError( Dynamic e);
		Dynamic logError_dyn();

		virtual Void addClient( ::sys::net::Socket sock);
		Dynamic addClient_dyn();

		virtual Void refuseClient( ::sys::net::Socket sock);
		Dynamic refuseClient_dyn();

		virtual Void runTimer( );
		Dynamic runTimer_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void addSocket( ::sys::net::Socket s);
		Dynamic addSocket_dyn();

		virtual Void run( ::String host,int port);
		Dynamic run_dyn();

		virtual Void sendData( ::sys::net::Socket s,::String data);
		Dynamic sendData_dyn();

		virtual Void stopClient( ::sys::net::Socket s);
		Dynamic stopClient_dyn();

		Dynamic onError;
		inline Dynamic &onError_dyn() {return onError; }

		Dynamic clientConnected;
		inline Dynamic &clientConnected_dyn() {return clientConnected; }

		Dynamic clientDisconnected;
		inline Dynamic &clientDisconnected_dyn() {return clientDisconnected; }

		Dynamic readClientMessage;
		inline Dynamic &readClientMessage_dyn() {return readClientMessage; }

		Dynamic clientMessage;
		inline Dynamic &clientMessage_dyn() {return clientMessage; }

		Dynamic update;
		inline Dynamic &update_dyn() {return update; }

		Dynamic afterEvent;
		inline Dynamic &afterEvent_dyn() {return afterEvent; }

};

} // end namespace cpp
} // end namespace net

#endif /* INCLUDED_cpp_net_ThreadServer */ 
