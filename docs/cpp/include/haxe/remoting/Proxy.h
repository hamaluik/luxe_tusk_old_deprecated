#ifndef INCLUDED_haxe_remoting_Proxy
#define INCLUDED_haxe_remoting_Proxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,remoting,Connection)
HX_DECLARE_CLASS2(haxe,remoting,Proxy)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  Proxy_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Proxy_obj OBJ_;
		Proxy_obj();
		Void __construct(::haxe::remoting::Connection c);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.remoting.Proxy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Proxy_obj > __new(::haxe::remoting::Connection c);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Proxy_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Proxy","\x4e","\x5e","\xbd","\x5b"); }

		::haxe::remoting::Connection __cnx;
};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_Proxy */ 
