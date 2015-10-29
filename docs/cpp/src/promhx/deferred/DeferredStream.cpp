#include <hxcpp.h>

#ifndef INCLUDED_promhx_Deferred
#include <promhx/Deferred.h>
#endif
#ifndef INCLUDED_promhx_Stream
#include <promhx/Stream.h>
#endif
#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
#ifndef INCLUDED_promhx_deferred_DeferredStream
#include <promhx/deferred/DeferredStream.h>
#endif
namespace promhx{
namespace deferred{

Void DeferredStream_obj::__construct()
{
HX_STACK_FRAME("promhx.deferred.DeferredStream","new",0x1d1a36c2,"promhx.deferred.DeferredStream.new","promhx/deferred/DeferredStream.hx",4,0xe267030e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
	HX_STACK_LINE(6)
	::promhx::Stream tmp = ::promhx::Stream_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6)
	this->boundStream = tmp;
}
;
	return null();
}

//DeferredStream_obj::~DeferredStream_obj() { }

Dynamic DeferredStream_obj::__CreateEmpty() { return  new DeferredStream_obj; }
hx::ObjectPtr< DeferredStream_obj > DeferredStream_obj::__new()
{  hx::ObjectPtr< DeferredStream_obj > _result_ = new DeferredStream_obj();
	_result_->__construct();
	return _result_;}

Dynamic DeferredStream_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DeferredStream_obj > _result_ = new DeferredStream_obj();
	_result_->__construct();
	return _result_;}


DeferredStream_obj::DeferredStream_obj()
{
}

void DeferredStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DeferredStream);
	HX_MARK_MEMBER_NAME(boundStream,"boundStream");
	::promhx::base::AsyncBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DeferredStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(boundStream,"boundStream");
	::promhx::base::AsyncBase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DeferredStream_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"boundStream") ) { return boundStream; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DeferredStream_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"boundStream") ) { boundStream=inValue.Cast< ::promhx::Stream >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DeferredStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("boundStream","\x5e","\xfb","\x94","\x35"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::promhx::Stream*/ ,(int)offsetof(DeferredStream_obj,boundStream),HX_HCSTRING("boundStream","\x5e","\xfb","\x94","\x35")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("boundStream","\x5e","\xfb","\x94","\x35"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DeferredStream_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DeferredStream_obj::__mClass,"__mClass");
};

#endif

hx::Class DeferredStream_obj::__mClass;

void DeferredStream_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("promhx.deferred.DeferredStream","\xd0","\x6d","\x4b","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DeferredStream_obj >;
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
