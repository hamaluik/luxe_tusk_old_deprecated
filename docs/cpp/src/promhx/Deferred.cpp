#include <hxcpp.h>

#ifndef INCLUDED_promhx_Deferred
#include <promhx/Deferred.h>
#endif
#ifndef INCLUDED_promhx_Promise
#include <promhx/Promise.h>
#endif
#ifndef INCLUDED_promhx_PublicStream
#include <promhx/PublicStream.h>
#endif
#ifndef INCLUDED_promhx_Stream
#include <promhx/Stream.h>
#endif
#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
namespace promhx{

Void Deferred_obj::__construct()
{
HX_STACK_FRAME("promhx.Deferred","new",0x84e3bc2f,"promhx.Deferred.new","promhx/Deferred.hx",7,0x3c9a8bc0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	super::__construct(null());
}
;
	return null();
}

//Deferred_obj::~Deferred_obj() { }

Dynamic Deferred_obj::__CreateEmpty() { return  new Deferred_obj; }
hx::ObjectPtr< Deferred_obj > Deferred_obj::__new()
{  hx::ObjectPtr< Deferred_obj > _result_ = new Deferred_obj();
	_result_->__construct();
	return _result_;}

Dynamic Deferred_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Deferred_obj > _result_ = new Deferred_obj();
	_result_->__construct();
	return _result_;}

Void Deferred_obj::resolve( Dynamic val){
{
		HX_STACK_FRAME("promhx.Deferred","resolve",0x39b3923b,"promhx.Deferred.resolve","promhx/Deferred.hx",12,0x3c9a8bc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(12)
		Dynamic tmp = val;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12)
		this->handleResolve(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Deferred_obj,resolve,(void))

Void Deferred_obj::throwError( Dynamic e){
{
		HX_STACK_FRAME("promhx.Deferred","throwError",0x38c330d3,"promhx.Deferred.throwError","promhx/Deferred.hx",14,0x3c9a8bc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(14)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14)
		this->handleError(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Deferred_obj,throwError,(void))

::promhx::Promise Deferred_obj::promise( ){
	HX_STACK_FRAME("promhx.Deferred","promise",0xca3d4cea,"promhx.Deferred.promise","promhx/Deferred.hx",19,0x3c9a8bc0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	::promhx::Promise tmp = ::promhx::Promise_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Deferred_obj,promise,return )

::promhx::Stream Deferred_obj::stream( ){
	HX_STACK_FRAME("promhx.Deferred","stream",0x6df53411,"promhx.Deferred.stream","promhx/Deferred.hx",26,0x3c9a8bc0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	::promhx::Stream tmp = ::promhx::Stream_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Deferred_obj,stream,return )

::promhx::PublicStream Deferred_obj::publicStream( ){
	HX_STACK_FRAME("promhx.Deferred","publicStream",0xddd2105a,"promhx.Deferred.publicStream","promhx/Deferred.hx",33,0x3c9a8bc0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	::promhx::PublicStream tmp = ::promhx::PublicStream_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Deferred_obj,publicStream,return )


Deferred_obj::Deferred_obj()
{
}

Dynamic Deferred_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"stream") ) { return stream_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		if (HX_FIELD_EQ(inName,"promise") ) { return promise_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"throwError") ) { return throwError_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"publicStream") ) { return publicStream_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("throwError","\xc2","\x74","\xe5","\xee"),
	HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"),
	HX_HCSTRING("stream","\x80","\x14","\x2d","\x11"),
	HX_HCSTRING("publicStream","\x09","\x6e","\x00","\x14"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Deferred_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Deferred_obj::__mClass,"__mClass");
};

#endif

hx::Class Deferred_obj::__mClass;

void Deferred_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("promhx.Deferred","\xbd","\x78","\xd0","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Deferred_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace promhx
