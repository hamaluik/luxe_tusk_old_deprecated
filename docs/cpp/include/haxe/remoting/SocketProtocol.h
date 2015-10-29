#ifndef INCLUDED_haxe_remoting_SocketProtocol
#define INCLUDED_haxe_remoting_SocketProtocol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,remoting,Context)
HX_DECLARE_CLASS2(haxe,remoting,SocketProtocol)
HX_DECLARE_CLASS2(sys,net,Socket)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  SocketProtocol_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SocketProtocol_obj OBJ_;
		SocketProtocol_obj();
		Void __construct(::sys::net::Socket sock,::haxe::remoting::Context ctx);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.remoting.SocketProtocol")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SocketProtocol_obj > __new(::sys::net::Socket sock,::haxe::remoting::Context ctx);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SocketProtocol_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SocketProtocol","\x4b","\x9d","\x80","\xf3"); }

		::sys::net::Socket socket;
		::haxe::remoting::Context context;
		virtual Dynamic decodeChar( int c);
		Dynamic decodeChar_dyn();

		virtual Dynamic encodeChar( int c);
		Dynamic encodeChar_dyn();

		virtual Dynamic messageLength( int c1,int c2);
		Dynamic messageLength_dyn();

		virtual Dynamic encodeMessageLength( int len);
		Dynamic encodeMessageLength_dyn();

		virtual Void sendRequest( Array< ::String > path,cpp::ArrayBase params);
		Dynamic sendRequest_dyn();

		virtual Void sendAnswer( Dynamic answer,Dynamic isException);
		Dynamic sendAnswer_dyn();

		virtual Void sendMessage( ::String msg);
		Dynamic sendMessage_dyn();

		Dynamic decodeData;
		inline Dynamic &decodeData_dyn() {return decodeData; }

		virtual bool isRequest( ::String data);
		Dynamic isRequest_dyn();

		virtual Void processRequest( ::String data,Dynamic onError);
		Dynamic processRequest_dyn();

		virtual Dynamic processAnswer( ::String data);
		Dynamic processAnswer_dyn();

		virtual ::String readMessage( );
		Dynamic readMessage_dyn();

};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_SocketProtocol */ 
