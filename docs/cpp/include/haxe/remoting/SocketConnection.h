#ifndef INCLUDED_haxe_remoting_SocketConnection
#define INCLUDED_haxe_remoting_SocketConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
HX_DECLARE_CLASS2(haxe,remoting,AsyncConnection)
HX_DECLARE_CLASS2(haxe,remoting,Context)
HX_DECLARE_CLASS2(haxe,remoting,SocketConnection)
HX_DECLARE_CLASS2(haxe,remoting,SocketProtocol)
HX_DECLARE_CLASS2(sys,net,Socket)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  SocketConnection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SocketConnection_obj OBJ_;
		SocketConnection_obj();
		Void __construct(Dynamic data,Array< ::String > path);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.remoting.SocketConnection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SocketConnection_obj > __new(Dynamic data,Array< ::String > path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SocketConnection_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::remoting::AsyncConnection_obj *();
		::String __ToString() const { return HX_HCSTRING("SocketConnection","\xd1","\xc9","\x45","\xdf"); }

		static ::haxe::remoting::SocketConnection create( ::sys::net::Socket s,::haxe::remoting::Context ctx);
		static Dynamic create_dyn();

		Array< ::String > __path;
		Dynamic __data;
		virtual ::haxe::remoting::AsyncConnection resolve( ::String name);
		Dynamic resolve_dyn();

		virtual Void call( cpp::ArrayBase params,Dynamic onResult);
		Dynamic call_dyn();

		virtual Void setErrorHandler( Dynamic h);
		Dynamic setErrorHandler_dyn();

		virtual Void setErrorLogger( Dynamic h);
		Dynamic setErrorLogger_dyn();

		virtual Void setProtocol( ::haxe::remoting::SocketProtocol p);
		Dynamic setProtocol_dyn();

		virtual ::haxe::remoting::SocketProtocol getProtocol( );
		Dynamic getProtocol_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void processMessage( ::String data);
		Dynamic processMessage_dyn();

		virtual Void defaultLog( Dynamic path,Dynamic args,Dynamic e);
		Dynamic defaultLog_dyn();

};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_SocketConnection */ 
