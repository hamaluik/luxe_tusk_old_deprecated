#include <hxcpp.h>

#ifndef INCLUDED_tusk_Snow
#include <tusk/Snow.h>
#endif
#ifndef INCLUDED_tusk_Window
#include <tusk/Window.h>
#endif
namespace tusk{

Void Snow_obj::__construct()
{
HX_STACK_FRAME("tusk.Snow","new",0x40bcdbca,"tusk.Snow.new","tusk/Tusk.hx",26,0xa7c05cef)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	::tusk::Window tmp = ::tusk::Window_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	this->window = tmp;
}
;
	return null();
}

//Snow_obj::~Snow_obj() { }

Dynamic Snow_obj::__CreateEmpty() { return  new Snow_obj; }
hx::ObjectPtr< Snow_obj > Snow_obj::__new()
{  hx::ObjectPtr< Snow_obj > _result_ = new Snow_obj();
	_result_->__construct();
	return _result_;}

Dynamic Snow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Snow_obj > _result_ = new Snow_obj();
	_result_->__construct();
	return _result_;}


Snow_obj::Snow_obj()
{
}

void Snow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Snow);
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_END_CLASS();
}

void Snow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(window,"window");
}

Dynamic Snow_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Snow_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::tusk::Window >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Snow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::tusk::Window*/ ,(int)offsetof(Snow_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Snow_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Snow_obj::__mClass,"__mClass");
};

#endif

hx::Class Snow_obj::__mClass;

void Snow_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.Snow","\xd8","\xee","\x64","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Snow_obj >;
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

} // end namespace tusk
