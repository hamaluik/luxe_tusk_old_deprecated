#include <hxcpp.h>

#ifndef INCLUDED_haxe_xml_Proxy
#include <haxe/xml/Proxy.h>
#endif
namespace haxe{
namespace xml{

Void Proxy_obj::__construct(Dynamic f)
{
HX_STACK_FRAME("haxe.xml.Proxy","new",0x04ae6ea1,"haxe.xml.Proxy.new","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Proxy.hx",47,0x11a9a678)
HX_STACK_THIS(this)
HX_STACK_ARG(f,"f")
{
	HX_STACK_LINE(47)
	this->__f = f;
}
;
	return null();
}

//Proxy_obj::~Proxy_obj() { }

Dynamic Proxy_obj::__CreateEmpty() { return  new Proxy_obj; }
hx::ObjectPtr< Proxy_obj > Proxy_obj::__new(Dynamic f)
{  hx::ObjectPtr< Proxy_obj > _result_ = new Proxy_obj();
	_result_->__construct(f);
	return _result_;}

Dynamic Proxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Proxy_obj > _result_ = new Proxy_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic Proxy_obj::resolve( ::String k){
	HX_STACK_FRAME("haxe.xml.Proxy","resolve",0x5d6d65ad,"haxe.xml.Proxy.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Proxy.hx",50,0x11a9a678)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(51)
	::String tmp = k;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	Dynamic tmp1 = this->__f(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Proxy_obj,resolve,return )


Proxy_obj::Proxy_obj()
{
}

void Proxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Proxy);
	HX_MARK_MEMBER_NAME(__f,"__f");
	HX_MARK_END_CLASS();
}

void Proxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__f,"__f");
}

Dynamic Proxy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { return __f; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Proxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { __f=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Proxy_obj,__f),HX_HCSTRING("__f","\x46","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__f","\x46","\x69","\x48","\x00"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
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
	__mClass->mName = HX_HCSTRING("haxe.xml.Proxy","\x2f","\x8a","\x10","\x42");
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
} // end namespace xml
