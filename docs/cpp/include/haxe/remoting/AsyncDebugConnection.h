#ifndef INCLUDED_haxe_remoting_AsyncDebugConnection
#define INCLUDED_haxe_remoting_AsyncDebugConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
HX_DECLARE_CLASS2(haxe,remoting,AsyncConnection)
HX_DECLARE_CLASS2(haxe,remoting,AsyncDebugConnection)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  AsyncDebugConnection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AsyncDebugConnection_obj OBJ_;
		AsyncDebugConnection_obj();
		Void __construct(Array< ::String > path,::haxe::remoting::AsyncConnection cnx,Dynamic data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.remoting.AsyncDebugConnection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AsyncDebugConnection_obj > __new(Array< ::String > path,::haxe::remoting::AsyncConnection cnx,Dynamic data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AsyncDebugConnection_obj();

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
		::String __ToString() const { return HX_HCSTRING("AsyncDebugConnection","\x95","\x34","\xb4","\x28"); }

		static ::haxe::remoting::AsyncDebugConnection create( ::haxe::remoting::AsyncConnection cnx);
		static Dynamic create_dyn();

		Array< ::String > __path;
		::haxe::remoting::AsyncConnection __cnx;
		Dynamic __data;
		virtual ::haxe::remoting::AsyncConnection resolve( ::String name);
		Dynamic resolve_dyn();

		virtual Void setErrorHandler( Dynamic h);
		Dynamic setErrorHandler_dyn();

		virtual Void setErrorDebug( Dynamic h);
		Dynamic setErrorDebug_dyn();

		virtual Void setResultDebug( Dynamic h);
		Dynamic setResultDebug_dyn();

		virtual Void setCallDebug( Dynamic h);
		Dynamic setCallDebug_dyn();

		virtual Void call( cpp::ArrayBase params,Dynamic onResult);
		Dynamic call_dyn();

};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_AsyncDebugConnection */ 
