#include <hxcpp.h>

#ifndef INCLUDED_tusk_macros_AssetFilesBuilder
#include <tusk/macros/AssetFilesBuilder.h>
#endif
namespace tusk{
namespace macros{

Void AssetFilesBuilder_obj::__construct()
{
	return null();
}

//AssetFilesBuilder_obj::~AssetFilesBuilder_obj() { }

Dynamic AssetFilesBuilder_obj::__CreateEmpty() { return  new AssetFilesBuilder_obj; }
hx::ObjectPtr< AssetFilesBuilder_obj > AssetFilesBuilder_obj::__new()
{  hx::ObjectPtr< AssetFilesBuilder_obj > _result_ = new AssetFilesBuilder_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetFilesBuilder_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetFilesBuilder_obj > _result_ = new AssetFilesBuilder_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetFilesBuilder_obj::build;


AssetFilesBuilder_obj::AssetFilesBuilder_obj()
{
}

bool AssetFilesBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build; return true;  }
	}
	return false;
}

bool AssetFilesBuilder_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { build=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &AssetFilesBuilder_obj::build,HX_HCSTRING("build","\x2e","\xdb","\xea","\xba")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetFilesBuilder_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetFilesBuilder_obj::build,"build");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetFilesBuilder_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetFilesBuilder_obj::build,"build");
};

#endif

hx::Class AssetFilesBuilder_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("build","\x2e","\xdb","\xea","\xba"),
	::String(null()) };

void AssetFilesBuilder_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.macros.AssetFilesBuilder","\xc2","\x74","\x7b","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetFilesBuilder_obj::__GetStatic;
	__mClass->mSetStaticField = &AssetFilesBuilder_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetFilesBuilder_obj >;
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
} // end namespace macros
