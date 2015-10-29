#include <hxcpp.h>

#ifndef INCLUDED_tusk_debug_ExceptionType
#include <tusk/debug/ExceptionType.h>
#endif
namespace tusk{
namespace debug{

::tusk::debug::ExceptionType ExceptionType_obj::Assert;

::tusk::debug::ExceptionType ExceptionType_obj::AssetNotFound;

::tusk::debug::ExceptionType ExceptionType_obj::FileNotFound;

::tusk::debug::ExceptionType ExceptionType_obj::InvalidAssetType;

::tusk::debug::ExceptionType ExceptionType_obj::NotImplementedYet;

::tusk::debug::ExceptionType ExceptionType_obj::Unknown;

HX_DEFINE_CREATE_ENUM(ExceptionType_obj)

int ExceptionType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Assert","\xe6","\xba","\x97","\x80")) return 1;
	if (inName==HX_HCSTRING("AssetNotFound","\x1f","\xba","\xe4","\x03")) return 2;
	if (inName==HX_HCSTRING("FileNotFound","\xeb","\x86","\x92","\x9c")) return 3;
	if (inName==HX_HCSTRING("InvalidAssetType","\xf3","\x8a","\x43","\x03")) return 4;
	if (inName==HX_HCSTRING("NotImplementedYet","\xd9","\x55","\xae","\x06")) return 5;
	if (inName==HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae")) return 0;
	return super::__FindIndex(inName);
}

int ExceptionType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Assert","\xe6","\xba","\x97","\x80")) return 0;
	if (inName==HX_HCSTRING("AssetNotFound","\x1f","\xba","\xe4","\x03")) return 0;
	if (inName==HX_HCSTRING("FileNotFound","\xeb","\x86","\x92","\x9c")) return 0;
	if (inName==HX_HCSTRING("InvalidAssetType","\xf3","\x8a","\x43","\x03")) return 0;
	if (inName==HX_HCSTRING("NotImplementedYet","\xd9","\x55","\xae","\x06")) return 0;
	if (inName==HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ExceptionType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Assert","\xe6","\xba","\x97","\x80")) return Assert;
	if (inName==HX_HCSTRING("AssetNotFound","\x1f","\xba","\xe4","\x03")) return AssetNotFound;
	if (inName==HX_HCSTRING("FileNotFound","\xeb","\x86","\x92","\x9c")) return FileNotFound;
	if (inName==HX_HCSTRING("InvalidAssetType","\xf3","\x8a","\x43","\x03")) return InvalidAssetType;
	if (inName==HX_HCSTRING("NotImplementedYet","\xd9","\x55","\xae","\x06")) return NotImplementedYet;
	if (inName==HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae")) return Unknown;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae"),
	HX_HCSTRING("Assert","\xe6","\xba","\x97","\x80"),
	HX_HCSTRING("AssetNotFound","\x1f","\xba","\xe4","\x03"),
	HX_HCSTRING("FileNotFound","\xeb","\x86","\x92","\x9c"),
	HX_HCSTRING("InvalidAssetType","\xf3","\x8a","\x43","\x03"),
	HX_HCSTRING("NotImplementedYet","\xd9","\x55","\xae","\x06"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExceptionType_obj::Assert,"Assert");
	HX_MARK_MEMBER_NAME(ExceptionType_obj::AssetNotFound,"AssetNotFound");
	HX_MARK_MEMBER_NAME(ExceptionType_obj::FileNotFound,"FileNotFound");
	HX_MARK_MEMBER_NAME(ExceptionType_obj::InvalidAssetType,"InvalidAssetType");
	HX_MARK_MEMBER_NAME(ExceptionType_obj::NotImplementedYet,"NotImplementedYet");
	HX_MARK_MEMBER_NAME(ExceptionType_obj::Unknown,"Unknown");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExceptionType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ExceptionType_obj::Assert,"Assert");
	HX_VISIT_MEMBER_NAME(ExceptionType_obj::AssetNotFound,"AssetNotFound");
	HX_VISIT_MEMBER_NAME(ExceptionType_obj::FileNotFound,"FileNotFound");
	HX_VISIT_MEMBER_NAME(ExceptionType_obj::InvalidAssetType,"InvalidAssetType");
	HX_VISIT_MEMBER_NAME(ExceptionType_obj::NotImplementedYet,"NotImplementedYet");
	HX_VISIT_MEMBER_NAME(ExceptionType_obj::Unknown,"Unknown");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ExceptionType_obj::__mClass;

Dynamic __Create_ExceptionType_obj() { return new ExceptionType_obj; }

void ExceptionType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("tusk.debug.ExceptionType","\x99","\x0e","\x51","\x50"), hx::TCanCast< ExceptionType_obj >,sStaticFields,sMemberFields,
	&__Create_ExceptionType_obj, &__Create,
	&super::__SGetClass(), &CreateExceptionType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ExceptionType_obj::__boot()
{
hx::Static(Assert) = hx::CreateEnum< ExceptionType_obj >(HX_HCSTRING("Assert","\xe6","\xba","\x97","\x80"),1);
hx::Static(AssetNotFound) = hx::CreateEnum< ExceptionType_obj >(HX_HCSTRING("AssetNotFound","\x1f","\xba","\xe4","\x03"),2);
hx::Static(FileNotFound) = hx::CreateEnum< ExceptionType_obj >(HX_HCSTRING("FileNotFound","\xeb","\x86","\x92","\x9c"),3);
hx::Static(InvalidAssetType) = hx::CreateEnum< ExceptionType_obj >(HX_HCSTRING("InvalidAssetType","\xf3","\x8a","\x43","\x03"),4);
hx::Static(NotImplementedYet) = hx::CreateEnum< ExceptionType_obj >(HX_HCSTRING("NotImplementedYet","\xd9","\x55","\xae","\x06"),5);
hx::Static(Unknown) = hx::CreateEnum< ExceptionType_obj >(HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae"),0);
}


} // end namespace tusk
} // end namespace debug
