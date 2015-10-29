#include <hxcpp.h>

#ifndef INCLUDED_promhx_Deferred
#include <promhx/Deferred.h>
#endif
#ifndef INCLUDED_promhx_Promise
#include <promhx/Promise.h>
#endif
#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
#ifndef INCLUDED_promhx_deferred_DeferredPromise
#include <promhx/deferred/DeferredPromise.h>
#endif
namespace promhx{
namespace deferred{

Void DeferredPromise_obj::__construct()
{
HX_STACK_FRAME("promhx.deferred.DeferredPromise","new",0xdaf7bcbd,"promhx.deferred.DeferredPromise.new","promhx/deferred/DeferredPromise.hx",4,0xbd7ed933)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
	HX_STACK_LINE(6)
	::promhx::Promise tmp = ::promhx::Promise_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6)
	this->boundPromise = tmp;
}
;
	return null();
}

//DeferredPromise_obj::~DeferredPromise_obj() { }

Dynamic DeferredPromise_obj::__CreateEmpty() { return  new DeferredPromise_obj; }
hx::ObjectPtr< DeferredPromise_obj > DeferredPromise_obj::__new()
{  hx::ObjectPtr< DeferredPromise_obj > _result_ = new DeferredPromise_obj();
	_result_->__construct();
	return _result_;}

Dynamic DeferredPromise_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DeferredPromise_obj > _result_ = new DeferredPromise_obj();
	_result_->__construct();
	return _result_;}


DeferredPromise_obj::DeferredPromise_obj()
{
}

void DeferredPromise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DeferredPromise);
	HX_MARK_MEMBER_NAME(boundPromise,"boundPromise");
	::promhx::base::AsyncBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DeferredPromise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(boundPromise,"boundPromise");
	::promhx::base::AsyncBase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DeferredPromise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"boundPromise") ) { return boundPromise; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DeferredPromise_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"boundPromise") ) { boundPromise=inValue.Cast< ::promhx::Promise >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DeferredPromise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("boundPromise","\xfd","\xe8","\x6b","\xae"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::promhx::Promise*/ ,(int)offsetof(DeferredPromise_obj,boundPromise),HX_HCSTRING("boundPromise","\xfd","\xe8","\x6b","\xae")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("boundPromise","\xfd","\xe8","\x6b","\xae"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DeferredPromise_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DeferredPromise_obj::__mClass,"__mClass");
};

#endif

hx::Class DeferredPromise_obj::__mClass;

void DeferredPromise_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("promhx.deferred.DeferredPromise","\x4b","\x9a","\x59","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DeferredPromise_obj >;
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
} // end namespace deferred
