#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml_Filter
#include <haxe/xml/Filter.h>
#endif
#ifndef INCLUDED_haxe_xml_Rule
#include <haxe/xml/Rule.h>
#endif
#ifndef INCLUDED_haxe_xml__Check_CheckResult
#include <haxe/xml/_Check/CheckResult.h>
#endif
namespace haxe{
namespace xml{
namespace _Check{

::haxe::xml::_Check::CheckResult  CheckResult_obj::CDataExpected(::Xml x)
	{ return hx::CreateEnum< CheckResult_obj >(HX_HCSTRING("CDataExpected","\xa5","\x9f","\x99","\xb5"),4,hx::DynamicArray(0,1).Add(x)); }

::haxe::xml::_Check::CheckResult  CheckResult_obj::CElementExpected(::String name,::Xml x)
	{ return hx::CreateEnum< CheckResult_obj >(HX_HCSTRING("CElementExpected","\x51","\x80","\x04","\x15"),3,hx::DynamicArray(0,2).Add(name).Add(x)); }

::haxe::xml::_Check::CheckResult  CheckResult_obj::CExtra(::Xml x)
	{ return hx::CreateEnum< CheckResult_obj >(HX_HCSTRING("CExtra","\x4d","\x37","\x39","\xd4"),2,hx::DynamicArray(0,1).Add(x)); }

::haxe::xml::_Check::CheckResult  CheckResult_obj::CExtraAttrib(::String att,::Xml x)
	{ return hx::CreateEnum< CheckResult_obj >(HX_HCSTRING("CExtraAttrib","\x77","\x8a","\x22","\xf8"),5,hx::DynamicArray(0,2).Add(att).Add(x)); }

::haxe::xml::_Check::CheckResult  CheckResult_obj::CInElement(::Xml x,::haxe::xml::_Check::CheckResult r)
	{ return hx::CreateEnum< CheckResult_obj >(HX_HCSTRING("CInElement","\x94","\x30","\xa7","\xe1"),9,hx::DynamicArray(0,2).Add(x).Add(r)); }

::haxe::xml::_Check::CheckResult  CheckResult_obj::CInvalidAttrib(::String att,::Xml x,::haxe::xml::Filter f)
	{ return hx::CreateEnum< CheckResult_obj >(HX_HCSTRING("CInvalidAttrib","\x5e","\x6b","\xdb","\x20"),7,hx::DynamicArray(0,3).Add(att).Add(x).Add(f)); }

::haxe::xml::_Check::CheckResult  CheckResult_obj::CInvalidData(::Xml x,::haxe::xml::Filter f)
	{ return hx::CreateEnum< CheckResult_obj >(HX_HCSTRING("CInvalidData","\x3e","\xed","\xbe","\xc3"),8,hx::DynamicArray(0,2).Add(x).Add(f)); }

::haxe::xml::_Check::CheckResult CheckResult_obj::CMatch;

::haxe::xml::_Check::CheckResult  CheckResult_obj::CMissing(::haxe::xml::Rule r)
	{ return hx::CreateEnum< CheckResult_obj >(HX_HCSTRING("CMissing","\x63","\xc5","\x09","\xf9"),1,hx::DynamicArray(0,1).Add(r)); }

::haxe::xml::_Check::CheckResult  CheckResult_obj::CMissingAttrib(::String att,::Xml x)
	{ return hx::CreateEnum< CheckResult_obj >(HX_HCSTRING("CMissingAttrib","\x0d","\xcd","\xa9","\x13"),6,hx::DynamicArray(0,2).Add(att).Add(x)); }

HX_DEFINE_CREATE_ENUM(CheckResult_obj)

int CheckResult_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("CDataExpected","\xa5","\x9f","\x99","\xb5")) return 4;
	if (inName==HX_HCSTRING("CElementExpected","\x51","\x80","\x04","\x15")) return 3;
	if (inName==HX_HCSTRING("CExtra","\x4d","\x37","\x39","\xd4")) return 2;
	if (inName==HX_HCSTRING("CExtraAttrib","\x77","\x8a","\x22","\xf8")) return 5;
	if (inName==HX_HCSTRING("CInElement","\x94","\x30","\xa7","\xe1")) return 9;
	if (inName==HX_HCSTRING("CInvalidAttrib","\x5e","\x6b","\xdb","\x20")) return 7;
	if (inName==HX_HCSTRING("CInvalidData","\x3e","\xed","\xbe","\xc3")) return 8;
	if (inName==HX_HCSTRING("CMatch","\x02","\xe6","\x39","\x60")) return 0;
	if (inName==HX_HCSTRING("CMissing","\x63","\xc5","\x09","\xf9")) return 1;
	if (inName==HX_HCSTRING("CMissingAttrib","\x0d","\xcd","\xa9","\x13")) return 6;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CheckResult_obj,CDataExpected,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CheckResult_obj,CElementExpected,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CheckResult_obj,CExtra,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CheckResult_obj,CExtraAttrib,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CheckResult_obj,CInElement,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(CheckResult_obj,CInvalidAttrib,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CheckResult_obj,CInvalidData,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CheckResult_obj,CMissing,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CheckResult_obj,CMissingAttrib,return)

int CheckResult_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("CDataExpected","\xa5","\x9f","\x99","\xb5")) return 1;
	if (inName==HX_HCSTRING("CElementExpected","\x51","\x80","\x04","\x15")) return 2;
	if (inName==HX_HCSTRING("CExtra","\x4d","\x37","\x39","\xd4")) return 1;
	if (inName==HX_HCSTRING("CExtraAttrib","\x77","\x8a","\x22","\xf8")) return 2;
	if (inName==HX_HCSTRING("CInElement","\x94","\x30","\xa7","\xe1")) return 2;
	if (inName==HX_HCSTRING("CInvalidAttrib","\x5e","\x6b","\xdb","\x20")) return 3;
	if (inName==HX_HCSTRING("CInvalidData","\x3e","\xed","\xbe","\xc3")) return 2;
	if (inName==HX_HCSTRING("CMatch","\x02","\xe6","\x39","\x60")) return 0;
	if (inName==HX_HCSTRING("CMissing","\x63","\xc5","\x09","\xf9")) return 1;
	if (inName==HX_HCSTRING("CMissingAttrib","\x0d","\xcd","\xa9","\x13")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic CheckResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("CDataExpected","\xa5","\x9f","\x99","\xb5")) return CDataExpected_dyn();
	if (inName==HX_HCSTRING("CElementExpected","\x51","\x80","\x04","\x15")) return CElementExpected_dyn();
	if (inName==HX_HCSTRING("CExtra","\x4d","\x37","\x39","\xd4")) return CExtra_dyn();
	if (inName==HX_HCSTRING("CExtraAttrib","\x77","\x8a","\x22","\xf8")) return CExtraAttrib_dyn();
	if (inName==HX_HCSTRING("CInElement","\x94","\x30","\xa7","\xe1")) return CInElement_dyn();
	if (inName==HX_HCSTRING("CInvalidAttrib","\x5e","\x6b","\xdb","\x20")) return CInvalidAttrib_dyn();
	if (inName==HX_HCSTRING("CInvalidData","\x3e","\xed","\xbe","\xc3")) return CInvalidData_dyn();
	if (inName==HX_HCSTRING("CMatch","\x02","\xe6","\x39","\x60")) return CMatch;
	if (inName==HX_HCSTRING("CMissing","\x63","\xc5","\x09","\xf9")) return CMissing_dyn();
	if (inName==HX_HCSTRING("CMissingAttrib","\x0d","\xcd","\xa9","\x13")) return CMissingAttrib_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("CMatch","\x02","\xe6","\x39","\x60"),
	HX_HCSTRING("CMissing","\x63","\xc5","\x09","\xf9"),
	HX_HCSTRING("CExtra","\x4d","\x37","\x39","\xd4"),
	HX_HCSTRING("CElementExpected","\x51","\x80","\x04","\x15"),
	HX_HCSTRING("CDataExpected","\xa5","\x9f","\x99","\xb5"),
	HX_HCSTRING("CExtraAttrib","\x77","\x8a","\x22","\xf8"),
	HX_HCSTRING("CMissingAttrib","\x0d","\xcd","\xa9","\x13"),
	HX_HCSTRING("CInvalidAttrib","\x5e","\x6b","\xdb","\x20"),
	HX_HCSTRING("CInvalidData","\x3e","\xed","\xbe","\xc3"),
	HX_HCSTRING("CInElement","\x94","\x30","\xa7","\xe1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CheckResult_obj::CMatch,"CMatch");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CheckResult_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CheckResult_obj::CMatch,"CMatch");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class CheckResult_obj::__mClass;

Dynamic __Create_CheckResult_obj() { return new CheckResult_obj; }

void CheckResult_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.xml._Check.CheckResult","\x1f","\xcb","\x8a","\x74"), hx::TCanCast< CheckResult_obj >,sStaticFields,sMemberFields,
	&__Create_CheckResult_obj, &__Create,
	&super::__SGetClass(), &CreateCheckResult_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void CheckResult_obj::__boot()
{
hx::Static(CMatch) = hx::CreateEnum< CheckResult_obj >(HX_HCSTRING("CMatch","\x02","\xe6","\x39","\x60"),0);
}


} // end namespace haxe
} // end namespace xml
} // end namespace _Check
