#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_MethodKind
#include <haxe/macro/MethodKind.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::MethodKind MethodKind_obj::MethDynamic;

::haxe::macro::MethodKind MethodKind_obj::MethInline;

::haxe::macro::MethodKind MethodKind_obj::MethMacro;

::haxe::macro::MethodKind MethodKind_obj::MethNormal;

HX_DEFINE_CREATE_ENUM(MethodKind_obj)

int MethodKind_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("MethDynamic","\xf3","\x45","\x90","\x75")) return 2;
	if (inName==HX_HCSTRING("MethInline","\x65","\xae","\x0c","\xad")) return 1;
	if (inName==HX_HCSTRING("MethMacro","\x80","\xd1","\x9e","\x06")) return 3;
	if (inName==HX_HCSTRING("MethNormal","\x33","\x56","\x36","\x44")) return 0;
	return super::__FindIndex(inName);
}

int MethodKind_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("MethDynamic","\xf3","\x45","\x90","\x75")) return 0;
	if (inName==HX_HCSTRING("MethInline","\x65","\xae","\x0c","\xad")) return 0;
	if (inName==HX_HCSTRING("MethMacro","\x80","\xd1","\x9e","\x06")) return 0;
	if (inName==HX_HCSTRING("MethNormal","\x33","\x56","\x36","\x44")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic MethodKind_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("MethDynamic","\xf3","\x45","\x90","\x75")) return MethDynamic;
	if (inName==HX_HCSTRING("MethInline","\x65","\xae","\x0c","\xad")) return MethInline;
	if (inName==HX_HCSTRING("MethMacro","\x80","\xd1","\x9e","\x06")) return MethMacro;
	if (inName==HX_HCSTRING("MethNormal","\x33","\x56","\x36","\x44")) return MethNormal;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("MethNormal","\x33","\x56","\x36","\x44"),
	HX_HCSTRING("MethInline","\x65","\xae","\x0c","\xad"),
	HX_HCSTRING("MethDynamic","\xf3","\x45","\x90","\x75"),
	HX_HCSTRING("MethMacro","\x80","\xd1","\x9e","\x06"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MethodKind_obj::MethDynamic,"MethDynamic");
	HX_MARK_MEMBER_NAME(MethodKind_obj::MethInline,"MethInline");
	HX_MARK_MEMBER_NAME(MethodKind_obj::MethMacro,"MethMacro");
	HX_MARK_MEMBER_NAME(MethodKind_obj::MethNormal,"MethNormal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MethodKind_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MethodKind_obj::MethDynamic,"MethDynamic");
	HX_VISIT_MEMBER_NAME(MethodKind_obj::MethInline,"MethInline");
	HX_VISIT_MEMBER_NAME(MethodKind_obj::MethMacro,"MethMacro");
	HX_VISIT_MEMBER_NAME(MethodKind_obj::MethNormal,"MethNormal");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class MethodKind_obj::__mClass;

Dynamic __Create_MethodKind_obj() { return new MethodKind_obj; }

void MethodKind_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.MethodKind","\x5f","\x03","\x7d","\x6d"), hx::TCanCast< MethodKind_obj >,sStaticFields,sMemberFields,
	&__Create_MethodKind_obj, &__Create,
	&super::__SGetClass(), &CreateMethodKind_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void MethodKind_obj::__boot()
{
hx::Static(MethDynamic) = hx::CreateEnum< MethodKind_obj >(HX_HCSTRING("MethDynamic","\xf3","\x45","\x90","\x75"),2);
hx::Static(MethInline) = hx::CreateEnum< MethodKind_obj >(HX_HCSTRING("MethInline","\x65","\xae","\x0c","\xad"),1);
hx::Static(MethMacro) = hx::CreateEnum< MethodKind_obj >(HX_HCSTRING("MethMacro","\x80","\xd1","\x9e","\x06"),3);
hx::Static(MethNormal) = hx::CreateEnum< MethodKind_obj >(HX_HCSTRING("MethNormal","\x33","\x56","\x36","\x44"),0);
}


} // end namespace haxe
} // end namespace macro
