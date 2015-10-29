#ifndef INCLUDED_promhx_Promise
#define INCLUDED_promhx_Promise

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
HX_DECLARE_CLASS1(promhx,Deferred)
HX_DECLARE_CLASS1(promhx,Promise)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)
namespace promhx{


class HXCPP_CLASS_ATTRIBUTES  Promise_obj : public ::promhx::base::AsyncBase_obj{
	public:
		typedef ::promhx::base::AsyncBase_obj super;
		typedef Promise_obj OBJ_;
		Promise_obj();
		Void __construct(::promhx::Deferred d);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="promhx.Promise")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Promise_obj > __new(::promhx::Deferred d);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Promise_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Promise","\x7b","\xf5","\x3a","\xc5"); }

		static Dynamic when;
		static Dynamic &when_dyn() { return when;}
		static ::promhx::Promise whenAll( Dynamic itb);
		static Dynamic whenAll_dyn();

		static ::promhx::Promise promise( Dynamic _val);
		static Dynamic promise_dyn();

		bool _rejected;
		virtual bool isRejected( );
		Dynamic isRejected_dyn();

		virtual Void reject( Dynamic e);
		Dynamic reject_dyn();

		virtual Void handleResolve( Dynamic val);

		virtual ::promhx::base::AsyncBase then( Dynamic f);

		virtual Void unlink( ::promhx::base::AsyncBase to);

		virtual Void handleError( Dynamic error);

		virtual ::promhx::Promise pipe( Dynamic f);
		Dynamic pipe_dyn();

		virtual ::promhx::Promise errorPipe( Dynamic f);
		Dynamic errorPipe_dyn();

};

} // end namespace promhx

#endif /* INCLUDED_promhx_Promise */ 
