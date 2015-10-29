#ifndef INCLUDED_haxe_remoting_DelayedConnection
#define INCLUDED_haxe_remoting_DelayedConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
HX_DECLARE_CLASS2(haxe,remoting,AsyncConnection)
HX_DECLARE_CLASS2(haxe,remoting,DelayedConnection)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  DelayedConnection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DelayedConnection_obj OBJ_;
		DelayedConnection_obj();
		Void __construct(Dynamic data,Array< ::String > path);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.remoting.DelayedConnection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DelayedConnection_obj > __new(Dynamic data,Array< ::String > path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DelayedConnection_obj();

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
		::String __ToString() const { return HX_HCSTRING("DelayedConnection","\x40","\x19","\xbf","\x27"); }

		static Void process( ::haxe::remoting::DelayedConnection d);
		static Dynamic process_dyn();

		static ::haxe::remoting::DelayedConnection create( );
		static Dynamic create_dyn();

		Array< ::String > __path;
		Dynamic __data;
		virtual Void setErrorHandler( Dynamic h);
		Dynamic setErrorHandler_dyn();

		virtual ::haxe::remoting::AsyncConnection resolve( ::String name);
		Dynamic resolve_dyn();

		virtual ::haxe::remoting::AsyncConnection get_connection( );
		Dynamic get_connection_dyn();

		virtual ::haxe::remoting::AsyncConnection set_connection( ::haxe::remoting::AsyncConnection cnx);
		Dynamic set_connection_dyn();

		virtual Void call( cpp::ArrayBase params,Dynamic onResult);
		Dynamic call_dyn();

};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_DelayedConnection */ 
