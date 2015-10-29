#ifndef INCLUDED_haxe_remoting_SyncSocketConnection
#define INCLUDED_haxe_remoting_SyncSocketConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_remoting_Connection
#include <haxe/remoting/Connection.h>
#endif
HX_DECLARE_CLASS2(haxe,remoting,Connection)
HX_DECLARE_CLASS2(haxe,remoting,Context)
HX_DECLARE_CLASS2(haxe,remoting,SocketProtocol)
HX_DECLARE_CLASS2(haxe,remoting,SyncSocketConnection)
HX_DECLARE_CLASS2(sys,net,Socket)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  SyncSocketConnection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SyncSocketConnection_obj OBJ_;
		SyncSocketConnection_obj();
		Void __construct(::haxe::remoting::SocketProtocol proto,Array< ::String > path);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.remoting.SyncSocketConnection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SyncSocketConnection_obj > __new(::haxe::remoting::SocketProtocol proto,Array< ::String > path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SyncSocketConnection_obj();

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
		operator ::haxe::remoting::Connection_obj *();
		::String __ToString() const { return HX_HCSTRING("SyncSocketConnection","\x4c","\x96","\x50","\x00"); }

		static ::haxe::remoting::SyncSocketConnection create( ::sys::net::Socket s,::haxe::remoting::Context ctx);
		static Dynamic create_dyn();

		Array< ::String > __path;
		::haxe::remoting::SocketProtocol __proto;
		virtual ::haxe::remoting::Connection resolve( ::String name);
		Dynamic resolve_dyn();

		virtual Dynamic call( cpp::ArrayBase params);
		Dynamic call_dyn();

		virtual Void processRequest( );
		Dynamic processRequest_dyn();

		virtual Void onRequestError( Array< ::String > path,cpp::ArrayBase args,Dynamic exc);
		Dynamic onRequestError_dyn();

		virtual Void setProtocol( ::haxe::remoting::SocketProtocol p);
		Dynamic setProtocol_dyn();

		virtual ::haxe::remoting::SocketProtocol getProtocol( );
		Dynamic getProtocol_dyn();

		virtual Void close( );
		Dynamic close_dyn();

};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_SyncSocketConnection */ 
