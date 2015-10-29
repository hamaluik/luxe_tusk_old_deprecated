#include <hxcpp.h>

#ifndef INCLUDED_haxe_rtti_Rights
#include <haxe/rtti/Rights.h>
#endif
namespace haxe{
namespace rtti{

::haxe::rtti::Rights  Rights_obj::RCall(::String m)
	{ return hx::CreateEnum< Rights_obj >(HX_HCSTRING("RCall","\x10","\xd6","\x6e","\x63"),2,hx::DynamicArray(0,1).Add(m)); }

::haxe::rtti::Rights Rights_obj::RDynamic;

::haxe::rtti::Rights Rights_obj::RInline;

::haxe::rtti::Rights Rights_obj::RMethod;

::haxe::rtti::Rights Rights_obj::RNo;

::haxe::rtti::Rights Rights_obj::RNormal;

HX_DEFINE_CREATE_ENUM(Rights_obj)

int Rights_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("RCall","\x10","\xd6","\x6e","\x63")) return 2;
	if (inName==HX_HCSTRING("RDynamic","\x4d","\x55","\x8f","\x55")) return 4;
	if (inName==HX_HCSTRING("RInline","\x4b","\x48","\xb4","\x1f")) return 5;
	if (inName==HX_HCSTRING("RMethod","\xd3","\x74","\xcf","\x8f")) return 3;
	if (inName==HX_HCSTRING("RNo","\x33","\x7d","\x3e","\x00")) return 1;
	if (inName==HX_HCSTRING("RNormal","\x19","\xf0","\xdd","\xb6")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Rights_obj,RCall,return)

int Rights_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("RCall","\x10","\xd6","\x6e","\x63")) return 1;
	if (inName==HX_HCSTRING("RDynamic","\x4d","\x55","\x8f","\x55")) return 0;
	if (inName==HX_HCSTRING("RInline","\x4b","\x48","\xb4","\x1f")) return 0;
	if (inName==HX_HCSTRING("RMethod","\xd3","\x74","\xcf","\x8f")) return 0;
	if (inName==HX_HCSTRING("RNo","\x33","\x7d","\x3e","\x00")) return 0;
	if (inName==HX_HCSTRING("RNormal","\x19","\xf0","\xdd","\xb6")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Rights_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("RCall","\x10","\xd6","\x6e","\x63")) return RCall_dyn();
	if (inName==HX_HCSTRING("RDynamic","\x4d","\x55","\x8f","\x55")) return RDynamic;
	if (inName==HX_HCSTRING("RInline","\x4b","\x48","\xb4","\x1f")) return RInline;
	if (inName==HX_HCSTRING("RMethod","\xd3","\x74","\xcf","\x8f")) return RMethod;
	if (inName==HX_HCSTRING("RNo","\x33","\x7d","\x3e","\x00")) return RNo;
	if (inName==HX_HCSTRING("RNormal","\x19","\xf0","\xdd","\xb6")) return RNormal;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("RNormal","\x19","\xf0","\xdd","\xb6"),
	HX_HCSTRING("RNo","\x33","\x7d","\x3e","\x00"),
	HX_HCSTRING("RCall","\x10","\xd6","\x6e","\x63"),
	HX_HCSTRING("RMethod","\xd3","\x74","\xcf","\x8f"),
	HX_HCSTRING("RDynamic","\x4d","\x55","\x8f","\x55"),
	HX_HCSTRING("RInline","\x4b","\x48","\xb4","\x1f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rights_obj::RDynamic,"RDynamic");
	HX_MARK_MEMBER_NAME(Rights_obj::RInline,"RInline");
	HX_MARK_MEMBER_NAME(Rights_obj::RMethod,"RMethod");
	HX_MARK_MEMBER_NAME(Rights_obj::RNo,"RNo");
	HX_MARK_MEMBER_NAME(Rights_obj::RNormal,"RNormal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rights_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Rights_obj::RDynamic,"RDynamic");
	HX_VISIT_MEMBER_NAME(Rights_obj::RInline,"RInline");
	HX_VISIT_MEMBER_NAME(Rights_obj::RMethod,"RMethod");
	HX_VISIT_MEMBER_NAME(Rights_obj::RNo,"RNo");
	HX_VISIT_MEMBER_NAME(Rights_obj::RNormal,"RNormal");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Rights_obj::__mClass;

Dynamic __Create_Rights_obj() { return new Rights_obj; }

void Rights_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.rtti.Rights","\xc6","\x1e","\xf3","\x80"), hx::TCanCast< Rights_obj >,sStaticFields,sMemberFields,
	&__Create_Rights_obj, &__Create,
	&super::__SGetClass(), &CreateRights_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Rights_obj::__boot()
{
hx::Static(RDynamic) = hx::CreateEnum< Rights_obj >(HX_HCSTRING("RDynamic","\x4d","\x55","\x8f","\x55"),4);
hx::Static(RInline) = hx::CreateEnum< Rights_obj >(HX_HCSTRING("RInline","\x4b","\x48","\xb4","\x1f"),5);
hx::Static(RMethod) = hx::CreateEnum< Rights_obj >(HX_HCSTRING("RMethod","\xd3","\x74","\xcf","\x8f"),3);
hx::Static(RNo) = hx::CreateEnum< Rights_obj >(HX_HCSTRING("RNo","\x33","\x7d","\x3e","\x00"),1);
hx::Static(RNormal) = hx::CreateEnum< Rights_obj >(HX_HCSTRING("RNormal","\x19","\xf0","\xdd","\xb6"),0);
}


} // end namespace haxe
} // end namespace rtti
