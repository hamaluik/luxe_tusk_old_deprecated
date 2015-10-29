#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_ImportMode
#include <haxe/macro/ImportMode.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::ImportMode ImportMode_obj::IAll;

::haxe::macro::ImportMode  ImportMode_obj::IAsName(::String alias)
	{ return hx::CreateEnum< ImportMode_obj >(HX_HCSTRING("IAsName","\x86","\xa5","\xbe","\x43"),1,hx::DynamicArray(0,1).Add(alias)); }

::haxe::macro::ImportMode ImportMode_obj::INormal;

HX_DEFINE_CREATE_ENUM(ImportMode_obj)

int ImportMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("IAll","\x58","\x44","\x72","\x30")) return 2;
	if (inName==HX_HCSTRING("IAsName","\x86","\xa5","\xbe","\x43")) return 1;
	if (inName==HX_HCSTRING("INormal","\x50","\xc3","\x9c","\x40")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImportMode_obj,IAsName,return)

int ImportMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("IAll","\x58","\x44","\x72","\x30")) return 0;
	if (inName==HX_HCSTRING("IAsName","\x86","\xa5","\xbe","\x43")) return 1;
	if (inName==HX_HCSTRING("INormal","\x50","\xc3","\x9c","\x40")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ImportMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("IAll","\x58","\x44","\x72","\x30")) return IAll;
	if (inName==HX_HCSTRING("IAsName","\x86","\xa5","\xbe","\x43")) return IAsName_dyn();
	if (inName==HX_HCSTRING("INormal","\x50","\xc3","\x9c","\x40")) return INormal;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("INormal","\x50","\xc3","\x9c","\x40"),
	HX_HCSTRING("IAsName","\x86","\xa5","\xbe","\x43"),
	HX_HCSTRING("IAll","\x58","\x44","\x72","\x30"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImportMode_obj::IAll,"IAll");
	HX_MARK_MEMBER_NAME(ImportMode_obj::INormal,"INormal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImportMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ImportMode_obj::IAll,"IAll");
	HX_VISIT_MEMBER_NAME(ImportMode_obj::INormal,"INormal");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ImportMode_obj::__mClass;

Dynamic __Create_ImportMode_obj() { return new ImportMode_obj; }

void ImportMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.ImportMode","\xf2","\x31","\xfd","\xac"), hx::TCanCast< ImportMode_obj >,sStaticFields,sMemberFields,
	&__Create_ImportMode_obj, &__Create,
	&super::__SGetClass(), &CreateImportMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ImportMode_obj::__boot()
{
hx::Static(IAll) = hx::CreateEnum< ImportMode_obj >(HX_HCSTRING("IAll","\x58","\x44","\x72","\x30"),2);
hx::Static(INormal) = hx::CreateEnum< ImportMode_obj >(HX_HCSTRING("INormal","\x50","\xc3","\x9c","\x40"),0);
}


} // end namespace haxe
} // end namespace macro
