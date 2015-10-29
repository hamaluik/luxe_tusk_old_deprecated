#include <hxcpp.h>

#ifndef INCLUDED_haxe_xml_Attrib
#include <haxe/xml/Attrib.h>
#endif
#ifndef INCLUDED_haxe_xml_Filter
#include <haxe/xml/Filter.h>
#endif
#ifndef INCLUDED_haxe_xml_Rule
#include <haxe/xml/Rule.h>
#endif
namespace haxe{
namespace xml{

::haxe::xml::Rule  Rule_obj::RChoice(Array< ::Dynamic > choices)
	{ return hx::CreateEnum< Rule_obj >(HX_HCSTRING("RChoice","\x53","\x3d","\x24","\x47"),4,hx::DynamicArray(0,1).Add(choices)); }

::haxe::xml::Rule  Rule_obj::RData(::haxe::xml::Filter filter)
	{ return hx::CreateEnum< Rule_obj >(HX_HCSTRING("RData","\x9c","\x13","\x18","\x64"),1,hx::DynamicArray(0,1).Add(filter)); }

::haxe::xml::Rule  Rule_obj::RList(Array< ::Dynamic > rules,Dynamic ordered)
	{ return hx::CreateEnum< Rule_obj >(HX_HCSTRING("RList","\xd0","\xd9","\x67","\x69"),3,hx::DynamicArray(0,2).Add(rules).Add(ordered)); }

::haxe::xml::Rule  Rule_obj::RMulti(::haxe::xml::Rule rule,Dynamic atLeastOne)
	{ return hx::CreateEnum< Rule_obj >(HX_HCSTRING("RMulti","\xc7","\x90","\xc6","\x6c"),2,hx::DynamicArray(0,2).Add(rule).Add(atLeastOne)); }

::haxe::xml::Rule  Rule_obj::RNode(::String name,Array< ::Dynamic > attribs,::haxe::xml::Rule childs)
	{ return hx::CreateEnum< Rule_obj >(HX_HCSTRING("RNode","\x74","\xc7","\xbe","\x6a"),0,hx::DynamicArray(0,3).Add(name).Add(attribs).Add(childs)); }

::haxe::xml::Rule  Rule_obj::ROptional(::haxe::xml::Rule rule)
	{ return hx::CreateEnum< Rule_obj >(HX_HCSTRING("ROptional","\x12","\x0e","\x74","\x89"),5,hx::DynamicArray(0,1).Add(rule)); }

HX_DEFINE_CREATE_ENUM(Rule_obj)

int Rule_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("RChoice","\x53","\x3d","\x24","\x47")) return 4;
	if (inName==HX_HCSTRING("RData","\x9c","\x13","\x18","\x64")) return 1;
	if (inName==HX_HCSTRING("RList","\xd0","\xd9","\x67","\x69")) return 3;
	if (inName==HX_HCSTRING("RMulti","\xc7","\x90","\xc6","\x6c")) return 2;
	if (inName==HX_HCSTRING("RNode","\x74","\xc7","\xbe","\x6a")) return 0;
	if (inName==HX_HCSTRING("ROptional","\x12","\x0e","\x74","\x89")) return 5;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Rule_obj,RChoice,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Rule_obj,RData,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Rule_obj,RList,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Rule_obj,RMulti,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Rule_obj,RNode,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Rule_obj,ROptional,return)

int Rule_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("RChoice","\x53","\x3d","\x24","\x47")) return 1;
	if (inName==HX_HCSTRING("RData","\x9c","\x13","\x18","\x64")) return 1;
	if (inName==HX_HCSTRING("RList","\xd0","\xd9","\x67","\x69")) return 2;
	if (inName==HX_HCSTRING("RMulti","\xc7","\x90","\xc6","\x6c")) return 2;
	if (inName==HX_HCSTRING("RNode","\x74","\xc7","\xbe","\x6a")) return 3;
	if (inName==HX_HCSTRING("ROptional","\x12","\x0e","\x74","\x89")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Rule_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("RChoice","\x53","\x3d","\x24","\x47")) return RChoice_dyn();
	if (inName==HX_HCSTRING("RData","\x9c","\x13","\x18","\x64")) return RData_dyn();
	if (inName==HX_HCSTRING("RList","\xd0","\xd9","\x67","\x69")) return RList_dyn();
	if (inName==HX_HCSTRING("RMulti","\xc7","\x90","\xc6","\x6c")) return RMulti_dyn();
	if (inName==HX_HCSTRING("RNode","\x74","\xc7","\xbe","\x6a")) return RNode_dyn();
	if (inName==HX_HCSTRING("ROptional","\x12","\x0e","\x74","\x89")) return ROptional_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("RNode","\x74","\xc7","\xbe","\x6a"),
	HX_HCSTRING("RData","\x9c","\x13","\x18","\x64"),
	HX_HCSTRING("RMulti","\xc7","\x90","\xc6","\x6c"),
	HX_HCSTRING("RList","\xd0","\xd9","\x67","\x69"),
	HX_HCSTRING("RChoice","\x53","\x3d","\x24","\x47"),
	HX_HCSTRING("ROptional","\x12","\x0e","\x74","\x89"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rule_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Rule_obj::__mClass;

Dynamic __Create_Rule_obj() { return new Rule_obj; }

void Rule_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.xml.Rule","\x5b","\x50","\x8f","\xd2"), hx::TCanCast< Rule_obj >,sStaticFields,sMemberFields,
	&__Create_Rule_obj, &__Create,
	&super::__SGetClass(), &CreateRule_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Rule_obj::__boot()
{
}


} // end namespace haxe
} // end namespace xml
