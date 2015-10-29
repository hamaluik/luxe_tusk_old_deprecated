#include <hxcpp.h>

#ifndef INCLUDED_haxe_Json
#include <haxe/Json.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
namespace haxe{

Void Json_obj::__construct()
{
	return null();
}

//Json_obj::~Json_obj() { }

Dynamic Json_obj::__CreateEmpty() { return  new Json_obj; }
hx::ObjectPtr< Json_obj > Json_obj::__new()
{  hx::ObjectPtr< Json_obj > _result_ = new Json_obj();
	_result_->__construct();
	return _result_;}

Dynamic Json_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Json_obj > _result_ = new Json_obj();
	_result_->__construct();
	return _result_;}

Dynamic Json_obj::parse( ::String text){
	HX_STACK_FRAME("haxe.Json","parse",0x396f54d5,"haxe.Json.parse","C:\\HaxeToolkit\\haxe\\std/haxe/Json.hx",39,0xdeeaeca6)
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(40)
	::haxe::format::JsonParser tmp = ::haxe::format::JsonParser_obj::__new(text);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	Dynamic tmp1 = tmp->parseRec();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Json_obj,parse,return )

::String Json_obj::stringify( Dynamic value,Dynamic replacer,::String space){
	HX_STACK_FRAME("haxe.Json","stringify",0x9504336d,"haxe.Json.stringify","C:\\HaxeToolkit\\haxe\\std/haxe/Json.hx",53,0xdeeaeca6)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(replacer,"replacer")
	HX_STACK_ARG(space,"space")
	HX_STACK_LINE(54)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	Dynamic tmp1 = replacer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	::String tmp2 = space;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	::String tmp3 = ::haxe::format::JsonPrinter_obj::print(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Json_obj,stringify,return )


Json_obj::Json_obj()
{
}

bool Json_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stringify") ) { outValue = stringify_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Json_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Json_obj::__mClass,"__mClass");
};

#endif

hx::Class Json_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("stringify","\xcb","\x75","\xce","\xc7"),
	::String(null()) };

void Json_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Json","\x90","\x1f","\xfb","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Json_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Json_obj >;
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
