#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe__Template_TemplateExpr
#include <haxe/_Template/TemplateExpr.h>
#endif
namespace haxe{
namespace _Template{

::haxe::_Template::TemplateExpr  TemplateExpr_obj::OpBlock(::List l)
	{ return hx::CreateEnum< TemplateExpr_obj >(HX_HCSTRING("OpBlock","\x4c","\xf4","\x41","\xe5"),4,hx::DynamicArray(0,1).Add(l)); }

::haxe::_Template::TemplateExpr  TemplateExpr_obj::OpExpr(Dynamic expr)
	{ return hx::CreateEnum< TemplateExpr_obj >(HX_HCSTRING("OpExpr","\x16","\xa3","\x09","\x41"),1,hx::DynamicArray(0,1).Add(expr)); }

::haxe::_Template::TemplateExpr  TemplateExpr_obj::OpForeach(Dynamic expr,::haxe::_Template::TemplateExpr loop)
	{ return hx::CreateEnum< TemplateExpr_obj >(HX_HCSTRING("OpForeach","\x49","\x7a","\xc7","\xc5"),5,hx::DynamicArray(0,2).Add(expr).Add(loop)); }

::haxe::_Template::TemplateExpr  TemplateExpr_obj::OpIf(Dynamic expr,::haxe::_Template::TemplateExpr eif,::haxe::_Template::TemplateExpr eelse)
	{ return hx::CreateEnum< TemplateExpr_obj >(HX_HCSTRING("OpIf","\x7e","\x17","\x8d","\x34"),2,hx::DynamicArray(0,3).Add(expr).Add(eif).Add(eelse)); }

::haxe::_Template::TemplateExpr  TemplateExpr_obj::OpMacro(::String name,::List params)
	{ return hx::CreateEnum< TemplateExpr_obj >(HX_HCSTRING("OpMacro","\x0b","\xef","\x5b","\x33"),6,hx::DynamicArray(0,2).Add(name).Add(params)); }

::haxe::_Template::TemplateExpr  TemplateExpr_obj::OpStr(::String str)
	{ return hx::CreateEnum< TemplateExpr_obj >(HX_HCSTRING("OpStr","\xf0","\x19","\xef","\xc6"),3,hx::DynamicArray(0,1).Add(str)); }

::haxe::_Template::TemplateExpr  TemplateExpr_obj::OpVar(::String v)
	{ return hx::CreateEnum< TemplateExpr_obj >(HX_HCSTRING("OpVar","\x26","\x50","\xf1","\xc6"),0,hx::DynamicArray(0,1).Add(v)); }

HX_DEFINE_CREATE_ENUM(TemplateExpr_obj)

int TemplateExpr_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("OpBlock","\x4c","\xf4","\x41","\xe5")) return 4;
	if (inName==HX_HCSTRING("OpExpr","\x16","\xa3","\x09","\x41")) return 1;
	if (inName==HX_HCSTRING("OpForeach","\x49","\x7a","\xc7","\xc5")) return 5;
	if (inName==HX_HCSTRING("OpIf","\x7e","\x17","\x8d","\x34")) return 2;
	if (inName==HX_HCSTRING("OpMacro","\x0b","\xef","\x5b","\x33")) return 6;
	if (inName==HX_HCSTRING("OpStr","\xf0","\x19","\xef","\xc6")) return 3;
	if (inName==HX_HCSTRING("OpVar","\x26","\x50","\xf1","\xc6")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TemplateExpr_obj,OpBlock,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TemplateExpr_obj,OpExpr,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TemplateExpr_obj,OpForeach,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TemplateExpr_obj,OpIf,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(TemplateExpr_obj,OpMacro,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TemplateExpr_obj,OpStr,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TemplateExpr_obj,OpVar,return)

int TemplateExpr_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("OpBlock","\x4c","\xf4","\x41","\xe5")) return 1;
	if (inName==HX_HCSTRING("OpExpr","\x16","\xa3","\x09","\x41")) return 1;
	if (inName==HX_HCSTRING("OpForeach","\x49","\x7a","\xc7","\xc5")) return 2;
	if (inName==HX_HCSTRING("OpIf","\x7e","\x17","\x8d","\x34")) return 3;
	if (inName==HX_HCSTRING("OpMacro","\x0b","\xef","\x5b","\x33")) return 2;
	if (inName==HX_HCSTRING("OpStr","\xf0","\x19","\xef","\xc6")) return 1;
	if (inName==HX_HCSTRING("OpVar","\x26","\x50","\xf1","\xc6")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic TemplateExpr_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("OpBlock","\x4c","\xf4","\x41","\xe5")) return OpBlock_dyn();
	if (inName==HX_HCSTRING("OpExpr","\x16","\xa3","\x09","\x41")) return OpExpr_dyn();
	if (inName==HX_HCSTRING("OpForeach","\x49","\x7a","\xc7","\xc5")) return OpForeach_dyn();
	if (inName==HX_HCSTRING("OpIf","\x7e","\x17","\x8d","\x34")) return OpIf_dyn();
	if (inName==HX_HCSTRING("OpMacro","\x0b","\xef","\x5b","\x33")) return OpMacro_dyn();
	if (inName==HX_HCSTRING("OpStr","\xf0","\x19","\xef","\xc6")) return OpStr_dyn();
	if (inName==HX_HCSTRING("OpVar","\x26","\x50","\xf1","\xc6")) return OpVar_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("OpVar","\x26","\x50","\xf1","\xc6"),
	HX_HCSTRING("OpExpr","\x16","\xa3","\x09","\x41"),
	HX_HCSTRING("OpIf","\x7e","\x17","\x8d","\x34"),
	HX_HCSTRING("OpStr","\xf0","\x19","\xef","\xc6"),
	HX_HCSTRING("OpBlock","\x4c","\xf4","\x41","\xe5"),
	HX_HCSTRING("OpForeach","\x49","\x7a","\xc7","\xc5"),
	HX_HCSTRING("OpMacro","\x0b","\xef","\x5b","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TemplateExpr_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TemplateExpr_obj::__mClass;

Dynamic __Create_TemplateExpr_obj() { return new TemplateExpr_obj; }

void TemplateExpr_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe._Template.TemplateExpr","\xcc","\xf7","\xad","\x4f"), hx::TCanCast< TemplateExpr_obj >,sStaticFields,sMemberFields,
	&__Create_TemplateExpr_obj, &__Create,
	&super::__SGetClass(), &CreateTemplateExpr_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TemplateExpr_obj::__boot()
{
}


} // end namespace haxe
} // end namespace _Template
