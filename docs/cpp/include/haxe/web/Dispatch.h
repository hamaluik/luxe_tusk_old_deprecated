#ifndef INCLUDED_haxe_web_Dispatch
#define INCLUDED_haxe_web_Dispatch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,web,Dispatch)
HX_DECLARE_CLASS2(haxe,web,DispatchRule)
HX_DECLARE_CLASS2(haxe,web,MatchRule)
namespace haxe{
namespace web{


class HXCPP_CLASS_ATTRIBUTES  Dispatch_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Dispatch_obj OBJ_;
		Dispatch_obj();
		Void __construct(::String url,::haxe::ds::StringMap params);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.web.Dispatch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Dispatch_obj > __new(::String url,::haxe::ds::StringMap params);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Dispatch_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Dispatch","\xda","\x8a","\x15","\xf8"); }

		static Array< ::Dynamic > GET_RULES;
		static Dynamic make;
		static Dynamic &make_dyn() { return make;}
		static Dynamic run;
		static Dynamic &run_dyn() { return run;}
		static Dynamic extractConfig( Dynamic obj);
		static Dynamic extractConfig_dyn();

		Array< ::String > parts;
		::haxe::ds::StringMap params;
		::String name;
		Dynamic cfg;
		bool subDispatch;
		Dynamic dispatch;
		Dynamic &dispatch_dyn() { return dispatch;}
		Dynamic getParams;
		Dynamic &getParams_dyn() { return getParams;}
		Dynamic onMeta;
		inline Dynamic &onMeta_dyn() {return onMeta; }

		virtual ::String resolveName( ::String name);
		Dynamic resolveName_dyn();

		virtual Void runtimeDispatch( Dynamic cfg);
		Dynamic runtimeDispatch_dyn();

		virtual Void redirect( ::String url,::haxe::ds::StringMap params);
		Dynamic redirect_dyn();

		virtual Dynamic runtimeGetParams( int cfgIndex);
		Dynamic runtimeGetParams_dyn();

		virtual Dynamic match( ::String v,::haxe::web::MatchRule r,bool opt);
		Dynamic match_dyn();

		virtual Dynamic checkParams( cpp::ArrayBase params,bool opt);
		Dynamic checkParams_dyn();

		virtual Void loop( cpp::ArrayBase args,::haxe::web::DispatchRule r);
		Dynamic loop_dyn();

};

} // end namespace haxe
} // end namespace web

#endif /* INCLUDED_haxe_web_Dispatch */ 
