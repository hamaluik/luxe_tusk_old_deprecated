#ifndef INCLUDED_promhx_Stream
#define INCLUDED_promhx_Stream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
HX_DECLARE_CLASS2(haxe,ds,Option)
HX_DECLARE_CLASS1(promhx,Deferred)
HX_DECLARE_CLASS1(promhx,Promise)
HX_DECLARE_CLASS1(promhx,Stream)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)
namespace promhx{


class HXCPP_CLASS_ATTRIBUTES  Stream_obj : public ::promhx::base::AsyncBase_obj{
	public:
		typedef ::promhx::base::AsyncBase_obj super;
		typedef Stream_obj OBJ_;
		Stream_obj();
		Void __construct(::promhx::Deferred d);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="promhx.Stream")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stream_obj > __new(::promhx::Deferred d);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stream_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stream","\xa0","\x88","\xc1","\x45"); }

		static Dynamic whenever;
		static Dynamic &whenever_dyn() { return whenever;}
		static ::promhx::Stream foreach( Dynamic itb);
		static Dynamic foreach_dyn();

		static ::promhx::Stream wheneverAll( Dynamic itb);
		static Dynamic wheneverAll_dyn();

		static ::promhx::Stream concatAll( Dynamic itb);
		static Dynamic concatAll_dyn();

		static ::promhx::Stream mergeAll( Dynamic itb);
		static Dynamic mergeAll_dyn();

		static ::promhx::Stream stream( Dynamic _val);
		static Dynamic stream_dyn();

		::promhx::Deferred deferred;
		bool _pause;
		bool _end;
		::promhx::Promise _end_promise;
		::promhx::Deferred _end_deferred;
		virtual ::promhx::base::AsyncBase then( Dynamic f);

		virtual bool detachStream( ::promhx::Stream str);
		Dynamic detachStream_dyn();

		virtual ::promhx::Promise first( );
		Dynamic first_dyn();

		virtual Void handleResolve( Dynamic val);

		virtual Void pause( Dynamic set);
		Dynamic pause_dyn();

		virtual ::promhx::Stream pipe( Dynamic f);
		Dynamic pipe_dyn();

		virtual ::promhx::Stream errorPipe( Dynamic f);
		Dynamic errorPipe_dyn();

		virtual Void handleEnd( );
		Dynamic handleEnd_dyn();

		virtual ::promhx::Stream end( );
		Dynamic end_dyn();

		virtual ::promhx::Promise endThen( Dynamic f);
		Dynamic endThen_dyn();

		virtual ::promhx::Stream filter( Dynamic f);
		Dynamic filter_dyn();

		virtual ::promhx::Stream concat( ::promhx::Stream s);
		Dynamic concat_dyn();

		virtual ::promhx::Stream merge( ::promhx::Stream s);
		Dynamic merge_dyn();

};

} // end namespace promhx

#endif /* INCLUDED_promhx_Stream */ 
