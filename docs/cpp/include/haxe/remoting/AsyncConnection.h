#ifndef INCLUDED_haxe_remoting_AsyncConnection
#define INCLUDED_haxe_remoting_AsyncConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,remoting,AsyncConnection)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  AsyncConnection_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef AsyncConnection_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::haxe::remoting::AsyncConnection resolve( ::String name)=0;
virtual Dynamic resolve_dyn()=0;
		virtual Void call( cpp::ArrayBase params,Dynamic result)=0;
virtual Dynamic call_dyn()=0;
		virtual Void setErrorHandler( Dynamic error)=0;
virtual Dynamic setErrorHandler_dyn()=0;
};



template<typename IMPL>
class AsyncConnection_delegate_ : public AsyncConnection_obj
{
	protected:
		IMPL *mDelegate;
	public:
		AsyncConnection_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		::haxe::remoting::AsyncConnection resolve( ::String name) { return mDelegate->resolve(name);}
		Dynamic resolve_dyn() { return mDelegate->resolve_dyn();}
		Void call( cpp::ArrayBase params,Dynamic result) { return mDelegate->call(params,result);}
		Dynamic call_dyn() { return mDelegate->call_dyn();}
		Void setErrorHandler( Dynamic error) { return mDelegate->setErrorHandler(error);}
		Dynamic setErrorHandler_dyn() { return mDelegate->setErrorHandler_dyn();}
};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_AsyncConnection */ 
