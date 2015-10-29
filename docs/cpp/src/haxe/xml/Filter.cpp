#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_haxe_xml_Filter
#include <haxe/xml/Filter.h>
#endif
namespace haxe{
namespace xml{

::haxe::xml::Filter Filter_obj::FBool;

::haxe::xml::Filter  Filter_obj::FEnum(Array< ::String > values)
	{ return hx::CreateEnum< Filter_obj >(HX_HCSTRING("FEnum","\x67","\x32","\xfc","\x7b"),2,hx::DynamicArray(0,1).Add(values)); }

::haxe::xml::Filter Filter_obj::FInt;

::haxe::xml::Filter  Filter_obj::FReg(::EReg matcher)
	{ return hx::CreateEnum< Filter_obj >(HX_HCSTRING("FReg","\xae","\x80","\x83","\x2e"),3,hx::DynamicArray(0,1).Add(matcher)); }

HX_DEFINE_CREATE_ENUM(Filter_obj)

int Filter_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("FBool","\x90","\x4b","\x01","\x7a")) return 1;
	if (inName==HX_HCSTRING("FEnum","\x67","\x32","\xfc","\x7b")) return 2;
	if (inName==HX_HCSTRING("FInt","\x49","\xb4","\x7c","\x2e")) return 0;
	if (inName==HX_HCSTRING("FReg","\xae","\x80","\x83","\x2e")) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Filter_obj,FEnum,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Filter_obj,FReg,return)

int Filter_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("FBool","\x90","\x4b","\x01","\x7a")) return 0;
	if (inName==HX_HCSTRING("FEnum","\x67","\x32","\xfc","\x7b")) return 1;
	if (inName==HX_HCSTRING("FInt","\x49","\xb4","\x7c","\x2e")) return 0;
	if (inName==HX_HCSTRING("FReg","\xae","\x80","\x83","\x2e")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Filter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("FBool","\x90","\x4b","\x01","\x7a")) return FBool;
	if (inName==HX_HCSTRING("FEnum","\x67","\x32","\xfc","\x7b")) return FEnum_dyn();
	if (inName==HX_HCSTRING("FInt","\x49","\xb4","\x7c","\x2e")) return FInt;
	if (inName==HX_HCSTRING("FReg","\xae","\x80","\x83","\x2e")) return FReg_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("FInt","\x49","\xb4","\x7c","\x2e"),
	HX_HCSTRING("FBool","\x90","\x4b","\x01","\x7a"),
	HX_HCSTRING("FEnum","\x67","\x32","\xfc","\x7b"),
	HX_HCSTRING("FReg","\xae","\x80","\x83","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Filter_obj::FBool,"FBool");
	HX_MARK_MEMBER_NAME(Filter_obj::FInt,"FInt");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Filter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Filter_obj::FBool,"FBool");
	HX_VISIT_MEMBER_NAME(Filter_obj::FInt,"FInt");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Filter_obj::__mClass;

Dynamic __Create_Filter_obj() { return new Filter_obj; }

void Filter_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.xml.Filter","\xd7","\xcc","\x3c","\x5c"), hx::TCanCast< Filter_obj >,sStaticFields,sMemberFields,
	&__Create_Filter_obj, &__Create,
	&super::__SGetClass(), &CreateFilter_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Filter_obj::__boot()
{
hx::Static(FBool) = hx::CreateEnum< Filter_obj >(HX_HCSTRING("FBool","\x90","\x4b","\x01","\x7a"),1);
hx::Static(FInt) = hx::CreateEnum< Filter_obj >(HX_HCSTRING("FInt","\x49","\xb4","\x7c","\x2e"),0);
}


} // end namespace haxe
} // end namespace xml
