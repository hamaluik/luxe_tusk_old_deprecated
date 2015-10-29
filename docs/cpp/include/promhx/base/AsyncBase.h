#ifndef INCLUDED_promhx_base_AsyncBase
#define INCLUDED_promhx_base_AsyncBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(promhx,Deferred)
HX_DECLARE_CLASS2(promhx,base,AsyncBase)
namespace promhx{
namespace base{


class HXCPP_CLASS_ATTRIBUTES  AsyncBase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AsyncBase_obj OBJ_;
		AsyncBase_obj();
		Void __construct(::promhx::Deferred d);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="promhx.base.AsyncBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AsyncBase_obj > __new(::promhx::Deferred d);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AsyncBase_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AsyncBase","\x4d","\x41","\x71","\x10"); }

		static Void link( ::promhx::base::AsyncBase current,::promhx::base::AsyncBase next,Dynamic f);
		static Dynamic link_dyn();

		static Void immediateLinkUpdate( ::promhx::base::AsyncBase current,::promhx::base::AsyncBase next,Dynamic f);
		static Dynamic immediateLinkUpdate_dyn();

		static Void linkAll( Dynamic all,::promhx::base::AsyncBase next);
		static Dynamic linkAll_dyn();

		static Void pipeLink( ::promhx::base::AsyncBase current,::promhx::base::AsyncBase ret,Dynamic f);
		static Dynamic pipeLink_dyn();

		static bool allResolved( Dynamic as);
		static Dynamic allResolved_dyn();

		static bool allFulfilled( Dynamic as);
		static Dynamic allFulfilled_dyn();

		Dynamic _val;
		bool _resolved;
		bool _fulfilled;
		bool _pending;
		cpp::ArrayBase _update;
		cpp::ArrayBase _error;
		bool _errored;
		Dynamic _errorMap;
		Dynamic &_errorMap_dyn() { return _errorMap;}
		Dynamic _errorVal;
		bool _errorPending;
		virtual ::promhx::base::AsyncBase catchError( Dynamic f);
		Dynamic catchError_dyn();

		virtual ::promhx::base::AsyncBase errorThen( Dynamic f);
		Dynamic errorThen_dyn();

		virtual bool isResolved( );
		Dynamic isResolved_dyn();

		virtual bool isErrored( );
		Dynamic isErrored_dyn();

		virtual bool isErrorHandled( );
		Dynamic isErrorHandled_dyn();

		virtual bool isErrorPending( );
		Dynamic isErrorPending_dyn();

		virtual bool isFulfilled( );
		Dynamic isFulfilled_dyn();

		virtual bool isPending( );
		Dynamic isPending_dyn();

		virtual Void handleResolve( Dynamic val);
		Dynamic handleResolve_dyn();

		virtual Void _resolve( Dynamic val);
		Dynamic _resolve_dyn();

		virtual Void handleError( Dynamic error);
		Dynamic handleError_dyn();

		virtual Void _handleError( Dynamic error);
		Dynamic _handleError_dyn();

		virtual ::promhx::base::AsyncBase then( Dynamic f);
		Dynamic then_dyn();

		virtual Void unlink( ::promhx::base::AsyncBase to);
		Dynamic unlink_dyn();

		virtual bool isLinked( ::promhx::base::AsyncBase to);
		Dynamic isLinked_dyn();

};

} // end namespace promhx
} // end namespace base

#endif /* INCLUDED_promhx_base_AsyncBase */ 
