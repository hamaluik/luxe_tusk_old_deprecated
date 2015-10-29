#ifndef INCLUDED_haxe_remoting_HttpConnection
#define INCLUDED_haxe_remoting_HttpConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_remoting_Connection
#include <haxe/remoting/Connection.h>
#endif
HX_DECLARE_CLASS2(haxe,remoting,Connection)
HX_DECLARE_CLASS2(haxe,remoting,Context)
HX_DECLARE_CLASS2(haxe,remoting,HttpConnection)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  HttpConnection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HttpConnection_obj OBJ_;
		HttpConnection_obj();
		Void __construct(::String url,Array< ::String > path);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.remoting.HttpConnection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HttpConnection_obj > __new(::String url,Array< ::String > path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HttpConnection_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::remoting::Connection_obj *();
		::String __ToString() const { return HX_HCSTRING("HttpConnection","\xe6","\x8d","\xc8","\x73"); }

		static void __boot();
		static Float TIMEOUT;
		static ::String processRequest( ::String requestData,::haxe::remoting::Context ctx);
		static Dynamic processRequest_dyn();

		::String __url;
		Array< ::String > __path;
		virtual ::haxe::remoting::Connection resolve( ::String name);
		Dynamic resolve_dyn();

		virtual Dynamic call( cpp::ArrayBase params);
		Dynamic call_dyn();

};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_HttpConnection */ 
