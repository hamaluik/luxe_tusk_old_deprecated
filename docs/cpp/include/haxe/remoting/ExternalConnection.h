#ifndef INCLUDED_haxe_remoting_ExternalConnection
#define INCLUDED_haxe_remoting_ExternalConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_remoting_Connection
#include <haxe/remoting/Connection.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,remoting,Connection)
HX_DECLARE_CLASS2(haxe,remoting,ExternalConnection)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  ExternalConnection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ExternalConnection_obj OBJ_;
		ExternalConnection_obj();
		Void __construct(Dynamic data,Array< ::String > path);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.remoting.ExternalConnection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ExternalConnection_obj > __new(Dynamic data,Array< ::String > path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExternalConnection_obj();

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
		::String __ToString() const { return HX_HCSTRING("ExternalConnection","\x69","\xf6","\x58","\x3d"); }

		static void __boot();
		static ::String escapeString( ::String s);
		static Dynamic escapeString_dyn();

		static ::haxe::ds::StringMap connections;
		static ::String doCall( ::String name,::String path,::String params);
		static Dynamic doCall_dyn();

		Dynamic __data;
		Array< ::String > __path;
		virtual ::haxe::remoting::Connection resolve( ::String field);
		Dynamic resolve_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Dynamic call( cpp::ArrayBase params);
		Dynamic call_dyn();

};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_ExternalConnection */ 
