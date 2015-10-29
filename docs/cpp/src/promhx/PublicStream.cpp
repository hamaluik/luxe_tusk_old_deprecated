#include <hxcpp.h>

#ifndef INCLUDED_promhx_Deferred
#include <promhx/Deferred.h>
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

Void PublicStream_obj::__construct(::promhx::Deferred def)
{
HX_STACK_FRAME("promhx.PublicStream","new",0x66598f19,"promhx.PublicStream.new","promhx/PublicStream.hx",6,0x819ebf96)
HX_STACK_THIS(this)
HX_STACK_ARG(def,"def")
{
	HX_STACK_LINE(7)
	::promhx::Deferred tmp = def;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7)
	super::__construct(tmp);
}
;
	return null();
}

//PublicStream_obj::~PublicStream_obj() { }

Dynamic PublicStream_obj::__CreateEmpty() { return  new PublicStream_obj; }
hx::ObjectPtr< PublicStream_obj > PublicStream_obj::__new(::promhx::Deferred def)
{  hx::ObjectPtr< PublicStream_obj > _result_ = new PublicStream_obj();
	_result_->__construct(def);
	return _result_;}

Dynamic PublicStream_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PublicStream_obj > _result_ = new PublicStream_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PublicStream_obj::resolve( Dynamic val){
{
		HX_STACK_FRAME("promhx.PublicStream","resolve",0x5b3e2225,"promhx.PublicStream.resolve","promhx/PublicStream.hx",9,0x819ebf96)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(9)
		Dynamic tmp = val;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9)
		this->handleResolve(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PublicStream_obj,resolve,(void))

Void PublicStream_obj::throwError( Dynamic e){
{
		HX_STACK_FRAME("promhx.PublicStream","throwError",0x49a7ef29,"promhx.PublicStream.throwError","promhx/PublicStream.hx",10,0x819ebf96)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(10)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10)
		this->handleError(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PublicStream_obj,throwError,(void))

Void PublicStream_obj::update( Dynamic val){
{
		HX_STACK_FRAME("promhx.PublicStream","update",0x02f300f0,"promhx.PublicStream.update","promhx/PublicStream.hx",11,0x819ebf96)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(11)
		Dynamic tmp = val;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11)
		this->handleResolve(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PublicStream_obj,update,(void))

::promhx::PublicStream PublicStream_obj::publicstream( Dynamic val){
	HX_STACK_FRAME("promhx.PublicStream","publicstream",0x4b8f1c10,"promhx.PublicStream.publicstream","promhx/PublicStream.hx",12,0x819ebf96)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(13)
	::promhx::PublicStream tmp = ::promhx::PublicStream_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	::promhx::PublicStream ps = tmp;		HX_STACK_VAR(ps,"ps");
	HX_STACK_LINE(14)
	Dynamic tmp1 = val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	ps->handleResolve(tmp1);
	HX_STACK_LINE(15)
	::promhx::PublicStream tmp2 = ps;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PublicStream_obj,publicstream,return )


PublicStream_obj::PublicStream_obj()
{
}

Dynamic PublicStream_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"throwError") ) { return throwError_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool PublicStream_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"publicstream") ) { outValue = publicstream_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("throwError","\xc2","\x74","\xe5","\xee"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PublicStream_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PublicStream_obj::__mClass,"__mClass");
};

#endif

hx::Class PublicStream_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("publicstream","\xe9","\xf9","\x6b","\xdf"),
	::String(null()) };

void PublicStream_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("promhx.PublicStream","\xa7","\x0e","\x94","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PublicStream_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PublicStream_obj >;
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
