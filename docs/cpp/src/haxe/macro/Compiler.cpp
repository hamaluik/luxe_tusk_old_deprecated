#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Compiler
#include <haxe/macro/Compiler.h>
#endif
namespace haxe{
namespace macro{

Void Compiler_obj::__construct()
{
	return null();
}

//Compiler_obj::~Compiler_obj() { }

Dynamic Compiler_obj::__CreateEmpty() { return  new Compiler_obj; }
hx::ObjectPtr< Compiler_obj > Compiler_obj::__new()
{  hx::ObjectPtr< Compiler_obj > _result_ = new Compiler_obj();
	_result_->__construct();
	return _result_;}

Dynamic Compiler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Compiler_obj > _result_ = new Compiler_obj();
	_result_->__construct();
	return _result_;}

Dynamic Compiler_obj::getDefine;


Compiler_obj::Compiler_obj()
{
}

bool Compiler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getDefine") ) { outValue = getDefine; return true;  }
	}
	return false;
}

bool Compiler_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getDefine") ) { getDefine=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Compiler_obj::getDefine,HX_HCSTRING("getDefine","\x71","\x05","\x3b","\xe3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Compiler_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Compiler_obj::getDefine,"getDefine");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Compiler_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Compiler_obj::getDefine,"getDefine");
};

#endif

hx::Class Compiler_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getDefine","\x71","\x05","\x3b","\xe3"),
	::String(null()) };

void Compiler_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.macro.Compiler","\xa9","\x83","\xac","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Compiler_obj::__GetStatic;
	__mClass->mSetStaticField = &Compiler_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Compiler_obj >;
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
