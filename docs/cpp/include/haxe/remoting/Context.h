#ifndef INCLUDED_haxe_remoting_Context
#define INCLUDED_haxe_remoting_Context

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,remoting,Context)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  Context_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context_obj OBJ_;
		Context_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.remoting.Context")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Context_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Context","\xcf","\xbd","\xc8","\xe6"); }

		static ::haxe::remoting::Context share( ::String name,Dynamic obj);
		static Dynamic share_dyn();

		::haxe::ds::StringMap objects;
		virtual Void addObject( ::String name,Dynamic obj,Dynamic recursive);
		Dynamic addObject_dyn();

		virtual Dynamic call( Array< ::String > path,cpp::ArrayBase params);
		Dynamic call_dyn();

};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_Context */ 
