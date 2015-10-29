#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_ModuleType
#include <haxe/macro/ModuleType.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::ModuleType  ModuleType_obj::TAbstract(Dynamic a)
	{ return hx::CreateEnum< ModuleType_obj >(HX_HCSTRING("TAbstract","\x56","\xf1","\x66","\xb9"),3,hx::DynamicArray(0,1).Add(a)); }

::haxe::macro::ModuleType  ModuleType_obj::TClassDecl(Dynamic c)
	{ return hx::CreateEnum< ModuleType_obj >(HX_HCSTRING("TClassDecl","\xce","\xa5","\xe6","\x8f"),0,hx::DynamicArray(0,1).Add(c)); }

::haxe::macro::ModuleType  ModuleType_obj::TEnumDecl(Dynamic e)
	{ return hx::CreateEnum< ModuleType_obj >(HX_HCSTRING("TEnumDecl","\x7f","\x2c","\xb6","\x37"),1,hx::DynamicArray(0,1).Add(e)); }

::haxe::macro::ModuleType  ModuleType_obj::TTypeDecl(Dynamic t)
	{ return hx::CreateEnum< ModuleType_obj >(HX_HCSTRING("TTypeDecl","\xb8","\x84","\x19","\xc0"),2,hx::DynamicArray(0,1).Add(t)); }

HX_DEFINE_CREATE_ENUM(ModuleType_obj)

int ModuleType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("TAbstract","\x56","\xf1","\x66","\xb9")) return 3;
	if (inName==HX_HCSTRING("TClassDecl","\xce","\xa5","\xe6","\x8f")) return 0;
	if (inName==HX_HCSTRING("TEnumDecl","\x7f","\x2c","\xb6","\x37")) return 1;
	if (inName==HX_HCSTRING("TTypeDecl","\xb8","\x84","\x19","\xc0")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ModuleType_obj,TAbstract,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ModuleType_obj,TClassDecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ModuleType_obj,TEnumDecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ModuleType_obj,TTypeDecl,return)

int ModuleType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("TAbstract","\x56","\xf1","\x66","\xb9")) return 1;
	if (inName==HX_HCSTRING("TClassDecl","\xce","\xa5","\xe6","\x8f")) return 1;
	if (inName==HX_HCSTRING("TEnumDecl","\x7f","\x2c","\xb6","\x37")) return 1;
	if (inName==HX_HCSTRING("TTypeDecl","\xb8","\x84","\x19","\xc0")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic ModuleType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("TAbstract","\x56","\xf1","\x66","\xb9")) return TAbstract_dyn();
	if (inName==HX_HCSTRING("TClassDecl","\xce","\xa5","\xe6","\x8f")) return TClassDecl_dyn();
	if (inName==HX_HCSTRING("TEnumDecl","\x7f","\x2c","\xb6","\x37")) return TEnumDecl_dyn();
	if (inName==HX_HCSTRING("TTypeDecl","\xb8","\x84","\x19","\xc0")) return TTypeDecl_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("TClassDecl","\xce","\xa5","\xe6","\x8f"),
	HX_HCSTRING("TEnumDecl","\x7f","\x2c","\xb6","\x37"),
	HX_HCSTRING("TTypeDecl","\xb8","\x84","\x19","\xc0"),
	HX_HCSTRING("TAbstract","\x56","\xf1","\x66","\xb9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModuleType_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ModuleType_obj::__mClass;

Dynamic __Create_ModuleType_obj() { return new ModuleType_obj; }

void ModuleType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.macro.ModuleType","\x10","\x94","\xae","\x9a"), hx::TCanCast< ModuleType_obj >,sStaticFields,sMemberFields,
	&__Create_ModuleType_obj, &__Create,
	&super::__SGetClass(), &CreateModuleType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ModuleType_obj::__boot()
{
}


} // end namespace haxe
} // end namespace macro
