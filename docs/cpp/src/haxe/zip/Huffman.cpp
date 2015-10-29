#include <hxcpp.h>

#ifndef INCLUDED_haxe_zip_Huffman
#include <haxe/zip/Huffman.h>
#endif
namespace haxe{
namespace zip{

::haxe::zip::Huffman  Huffman_obj::Found(int i)
	{ return hx::CreateEnum< Huffman_obj >(HX_HCSTRING("Found","\x22","\x72","\xc4","\x97"),0,hx::DynamicArray(0,1).Add(i)); }

::haxe::zip::Huffman  Huffman_obj::NeedBit(::haxe::zip::Huffman left,::haxe::zip::Huffman right)
	{ return hx::CreateEnum< Huffman_obj >(HX_HCSTRING("NeedBit","\xf7","\xfd","\x59","\x77"),1,hx::DynamicArray(0,2).Add(left).Add(right)); }

::haxe::zip::Huffman  Huffman_obj::NeedBits(int n,Array< ::Dynamic > table)
	{ return hx::CreateEnum< Huffman_obj >(HX_HCSTRING("NeedBits","\x9c","\x3a","\x64","\xf7"),2,hx::DynamicArray(0,2).Add(n).Add(table)); }

HX_DEFINE_CREATE_ENUM(Huffman_obj)

int Huffman_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Found","\x22","\x72","\xc4","\x97")) return 0;
	if (inName==HX_HCSTRING("NeedBit","\xf7","\xfd","\x59","\x77")) return 1;
	if (inName==HX_HCSTRING("NeedBits","\x9c","\x3a","\x64","\xf7")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Huffman_obj,Found,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Huffman_obj,NeedBit,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Huffman_obj,NeedBits,return)

int Huffman_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Found","\x22","\x72","\xc4","\x97")) return 1;
	if (inName==HX_HCSTRING("NeedBit","\xf7","\xfd","\x59","\x77")) return 2;
	if (inName==HX_HCSTRING("NeedBits","\x9c","\x3a","\x64","\xf7")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic Huffman_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Found","\x22","\x72","\xc4","\x97")) return Found_dyn();
	if (inName==HX_HCSTRING("NeedBit","\xf7","\xfd","\x59","\x77")) return NeedBit_dyn();
	if (inName==HX_HCSTRING("NeedBits","\x9c","\x3a","\x64","\xf7")) return NeedBits_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Found","\x22","\x72","\xc4","\x97"),
	HX_HCSTRING("NeedBit","\xf7","\xfd","\x59","\x77"),
	HX_HCSTRING("NeedBits","\x9c","\x3a","\x64","\xf7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Huffman_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Huffman_obj::__mClass;

Dynamic __Create_Huffman_obj() { return new Huffman_obj; }

void Huffman_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.zip.Huffman","\x38","\xd8","\x1f","\x47"), hx::TCanCast< Huffman_obj >,sStaticFields,sMemberFields,
	&__Create_Huffman_obj, &__Create,
	&super::__SGetClass(), &CreateHuffman_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Huffman_obj::__boot()
{
}


} // end namespace haxe
} // end namespace zip
