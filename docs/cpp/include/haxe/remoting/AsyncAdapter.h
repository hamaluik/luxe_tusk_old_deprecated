#ifndef INCLUDED_haxe_remoting_AsyncAdapter
#define INCLUDED_haxe_remoting_AsyncAdapter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
HX_DECLARE_CLASS2(haxe,remoting,AsyncAdapter)
HX_DECLARE_CLASS2(haxe,remoting,AsyncConnection)
HX_DECLARE_CLASS2(haxe,remoting,Connection)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  AsyncAdapter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AsyncAdapter_obj OBJ_;
		AsyncAdapter_obj();
		Void __construct(::haxe::remoting::Connection cnx,Dynamic error);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.remoting.AsyncAdapter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AsyncAdapter_obj > __new(::haxe::remoting::Connection cnx,Dynamic error);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AsyncAdapter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::remoting::AsyncConnection_obj *();
		::String __ToString() const { return HX_HCSTRING("AsyncAdapter","\xd3","\xb0","\xd6","\xe9"); }

		static ::haxe::remoting::AsyncConnection create( ::haxe::remoting::Connection cnx);
		static Dynamic create_dyn();

		::haxe::remoting::Connection __cnx;
		Dynamic __error;
		virtual ::haxe::remoting::AsyncConnection resolve( ::String name);
		Dynamic resolve_dyn();

		virtual Void setErrorHandler( Dynamic h);
		Dynamic setErrorHandler_dyn();

		virtual Void call( cpp::ArrayBase params,Dynamic onResult);
		Dynamic call_dyn();

};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_AsyncAdapter */ 
