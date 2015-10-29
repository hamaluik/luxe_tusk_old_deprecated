#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_ComplexType
#include <haxe/macro/ComplexType.h>
#endif
#ifndef INCLUDED_haxe_macro_ComplexTypeTools
#include <haxe/macro/ComplexTypeTools.h>
#endif
#ifndef INCLUDED_haxe_macro_Printer
#include <haxe/macro/Printer.h>
#endif
namespace haxe{
namespace macro{

Void ComplexTypeTools_obj::__construct()
{
	return null();
}

//ComplexTypeTools_obj::~ComplexTypeTools_obj() { }

Dynamic ComplexTypeTools_obj::__CreateEmpty() { return  new ComplexTypeTools_obj; }
hx::ObjectPtr< ComplexTypeTools_obj > ComplexTypeTools_obj::__new()
{  hx::ObjectPtr< ComplexTypeTools_obj > _result_ = new ComplexTypeTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic ComplexTypeTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ComplexTypeTools_obj > _result_ = new ComplexTypeTools_obj();
	_result_->__construct();
	return _result_;}

::String ComplexTypeTools_obj::toString( ::haxe::macro::ComplexType c){
	HX_STACK_FRAME("haxe.macro.ComplexTypeTools","toString",0x349260bf,"haxe.macro.ComplexTypeTools.toString","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ComplexTypeTools.hx",41,0xe3aa5cfa)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(41)
	::haxe::macro::Printer tmp = ::haxe::macro::Printer_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	::haxe::macro::ComplexType tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	::String tmp2 = tmp->printComplexType(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComplexTypeTools_obj,toString,return )


ComplexTypeTools_obj::ComplexTypeTools_obj()
{
}

bool ComplexTypeTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComplexTypeTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComplexTypeTools_obj::__mClass,"__mClass");
};

#endif

hx::Class ComplexTypeTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void ComplexTypeTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.macro.ComplexTypeTools","\xbb","\x1e","\xcf","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ComplexTypeTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ComplexTypeTools_obj >;
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
} // end namespace macro
