#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_HashMethod
#include <haxe/crypto/HashMethod.h>
#endif
namespace haxe{
namespace crypto{

::haxe::crypto::HashMethod HashMethod_obj::MD5;

::haxe::crypto::HashMethod HashMethod_obj::SHA1;

::haxe::crypto::HashMethod HashMethod_obj::SHA256;

HX_DEFINE_CREATE_ENUM(HashMethod_obj)

int HashMethod_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("MD5","\xfe","\xa8","\x3a","\x00")) return 0;
	if (inName==HX_HCSTRING("SHA1","\xa5","\x90","\x13","\x37")) return 1;
	if (inName==HX_HCSTRING("SHA256","\x87","\xb4","\x95","\xcf")) return 2;
	return super::__FindIndex(inName);
}

int HashMethod_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("MD5","\xfe","\xa8","\x3a","\x00")) return 0;
	if (inName==HX_HCSTRING("SHA1","\xa5","\x90","\x13","\x37")) return 0;
	if (inName==HX_HCSTRING("SHA256","\x87","\xb4","\x95","\xcf")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic HashMethod_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("MD5","\xfe","\xa8","\x3a","\x00")) return MD5;
	if (inName==HX_HCSTRING("SHA1","\xa5","\x90","\x13","\x37")) return SHA1;
	if (inName==HX_HCSTRING("SHA256","\x87","\xb4","\x95","\xcf")) return SHA256;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("MD5","\xfe","\xa8","\x3a","\x00"),
	HX_HCSTRING("SHA1","\xa5","\x90","\x13","\x37"),
	HX_HCSTRING("SHA256","\x87","\xb4","\x95","\xcf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HashMethod_obj::MD5,"MD5");
	HX_MARK_MEMBER_NAME(HashMethod_obj::SHA1,"SHA1");
	HX_MARK_MEMBER_NAME(HashMethod_obj::SHA256,"SHA256");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HashMethod_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HashMethod_obj::MD5,"MD5");
	HX_VISIT_MEMBER_NAME(HashMethod_obj::SHA1,"SHA1");
	HX_VISIT_MEMBER_NAME(HashMethod_obj::SHA256,"SHA256");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class HashMethod_obj::__mClass;

Dynamic __Create_HashMethod_obj() { return new HashMethod_obj; }

void HashMethod_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.crypto.HashMethod","\x34","\xbd","\x76","\xe7"), hx::TCanCast< HashMethod_obj >,sStaticFields,sMemberFields,
	&__Create_HashMethod_obj, &__Create,
	&super::__SGetClass(), &CreateHashMethod_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void HashMethod_obj::__boot()
{
hx::Static(MD5) = hx::CreateEnum< HashMethod_obj >(HX_HCSTRING("MD5","\xfe","\xa8","\x3a","\x00"),0);
hx::Static(SHA1) = hx::CreateEnum< HashMethod_obj >(HX_HCSTRING("SHA1","\xa5","\x90","\x13","\x37"),1);
hx::Static(SHA256) = hx::CreateEnum< HashMethod_obj >(HX_HCSTRING("SHA256","\x87","\xb4","\x95","\xcf"),2);
}


} // end namespace haxe
} // end namespace crypto
