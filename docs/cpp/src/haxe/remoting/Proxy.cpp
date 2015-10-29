#include <hxcpp.h>

#ifndef INCLUDED_haxe_remoting_Connection
#include <haxe/remoting/Connection.h>
#endif
#ifndef INCLUDED_haxe_remoting_Proxy
#include <haxe/remoting/Proxy.h>
#endif
namespace haxe{
namespace remoting{

Void Proxy_obj::__construct(::haxe::remoting::Connection c)
{
HX_STACK_FRAME("haxe.remoting.Proxy","new",0x7a5eaa9d,"haxe.remoting.Proxy.new","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/Proxy.hx",34,0xbecd75ec)
HX_STACK_THIS(this)
HX_STACK_ARG(c,"c")
{
	HX_STACK_LINE(34)
	this->__cnx = c;
}
;
	return null();
}

//Proxy_obj::~Proxy_obj() { }

Dynamic Proxy_obj::__CreateEmpty() { return  new Proxy_obj; }
hx::ObjectPtr< Proxy_obj > Proxy_obj::__new(::haxe::remoting::Connection c)
{  hx::ObjectPtr< Proxy_obj > _result_ = new Proxy_obj();
	_result_->__construct(c);
	return _result_;}

Dynamic Proxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Proxy_obj > _result_ = new Proxy_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


Proxy_obj::Proxy_obj()
{
}

void Proxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Proxy);
	HX_MARK_MEMBER_NAME(__cnx,"__cnx");
	HX_MARK_END_CLASS();
}

void Proxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__cnx,"__cnx");
}

Dynamic Proxy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__cnx") ) { return __cnx; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Proxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__cnx") ) { __cnx=inValue.Cast< ::haxe::remoting::Connection >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Proxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__cnx","\x4d","\xe0","\x27","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::remoting::Connection*/ ,(int)offsetof(Proxy_obj,__cnx),HX_HCSTRING("__cnx","\x4d","\xe0","\x27","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__cnx","\x4d","\xe0","\x27","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Proxy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Proxy_obj::__mClass,"__mClass");
};

#endif

hx::Class Proxy_obj::__mClass;

void Proxy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.Proxy","\x2b","\x18","\x7c","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Proxy_obj >;
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
