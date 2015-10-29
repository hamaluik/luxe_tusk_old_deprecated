#include <hxcpp.h>

#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
#ifndef INCLUDED_haxe_remoting_AsyncProxy
#include <haxe/remoting/AsyncProxy.h>
#endif
namespace haxe{
namespace remoting{

Void AsyncProxy_obj::__construct(::haxe::remoting::AsyncConnection c)
{
HX_STACK_FRAME("haxe.remoting.AsyncProxy","new",0x3b80ae27,"haxe.remoting.AsyncProxy.new","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncProxy.hx",34,0x2f8b5e10)
HX_STACK_THIS(this)
HX_STACK_ARG(c,"c")
{
	HX_STACK_LINE(34)
	this->__cnx = c;
}
;
	return null();
}

//AsyncProxy_obj::~AsyncProxy_obj() { }

Dynamic AsyncProxy_obj::__CreateEmpty() { return  new AsyncProxy_obj; }
hx::ObjectPtr< AsyncProxy_obj > AsyncProxy_obj::__new(::haxe::remoting::AsyncConnection c)
{  hx::ObjectPtr< AsyncProxy_obj > _result_ = new AsyncProxy_obj();
	_result_->__construct(c);
	return _result_;}

Dynamic AsyncProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AsyncProxy_obj > _result_ = new AsyncProxy_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


AsyncProxy_obj::AsyncProxy_obj()
{
}

void AsyncProxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AsyncProxy);
	HX_MARK_MEMBER_NAME(__cnx,"__cnx");
	HX_MARK_END_CLASS();
}

void AsyncProxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__cnx,"__cnx");
}

Dynamic AsyncProxy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__cnx") ) { return __cnx; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AsyncProxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__cnx") ) { __cnx=inValue.Cast< ::haxe::remoting::AsyncConnection >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AsyncProxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__cnx","\x4d","\xe0","\x27","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::remoting::AsyncConnection*/ ,(int)offsetof(AsyncProxy_obj,__cnx),HX_HCSTRING("__cnx","\x4d","\xe0","\x27","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__cnx","\x4d","\xe0","\x27","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AsyncProxy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AsyncProxy_obj::__mClass,"__mClass");
};

#endif

hx::Class AsyncProxy_obj::__mClass;

void AsyncProxy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.AsyncProxy","\xb5","\x0e","\x9f","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AsyncProxy_obj >;
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

} // end namespace haxe
} // end namespace remoting
