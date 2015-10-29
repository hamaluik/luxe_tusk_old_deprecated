#ifndef INCLUDED_haxe_remoting_AsyncProxy
#define INCLUDED_haxe_remoting_AsyncProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,remoting,AsyncConnection)
HX_DECLARE_CLASS2(haxe,remoting,AsyncProxy)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  AsyncProxy_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AsyncProxy_obj OBJ_;
		AsyncProxy_obj();
		Void __construct(::haxe::remoting::AsyncConnection c);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.remoting.AsyncProxy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AsyncProxy_obj > __new(::haxe::remoting::AsyncConnection c);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AsyncProxy_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AsyncProxy","\xb2","\xa9","\x7d","\x6d"); }

		::haxe::remoting::AsyncConnection __cnx;
};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_AsyncProxy */ 
