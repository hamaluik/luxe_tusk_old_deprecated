#ifndef INCLUDED_haxe_remoting_LocalConnection
#define INCLUDED_haxe_remoting_LocalConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
HX_DECLARE_CLASS2(haxe,remoting,AsyncConnection)
HX_DECLARE_CLASS2(haxe,remoting,LocalConnection)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  LocalConnection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LocalConnection_obj OBJ_;
		LocalConnection_obj();
		Void __construct(Dynamic data,Array< ::String > path);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.remoting.LocalConnection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LocalConnection_obj > __new(Dynamic data,Array< ::String > path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LocalConnection_obj();

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
		operator ::haxe::remoting::AsyncConnection_obj *();
		::String __ToString() const { return HX_HCSTRING("LocalConnection","\x49","\x89","\x6c","\xd0"); }

		static void __boot();
		static int ID;
		static Void remotingCall( ::haxe::remoting::LocalConnection c,int id,::String path,::String args);
		static Dynamic remotingCall_dyn();

		static Void remotingResult( ::haxe::remoting::LocalConnection c,int id,::String result);
		static Dynamic remotingResult_dyn();

		Array< ::String > __path;
		Dynamic __data;
		virtual ::haxe::remoting::AsyncConnection resolve( ::String name);
		Dynamic resolve_dyn();

		virtual Void setErrorHandler( Dynamic h);
		Dynamic setErrorHandler_dyn();

		virtual Void call( cpp::ArrayBase params,Dynamic onResult);
		Dynamic call_dyn();

		virtual Void close( );
		Dynamic close_dyn();

};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_LocalConnection */ 
