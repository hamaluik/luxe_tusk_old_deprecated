#include <hxcpp.h>

#ifndef INCLUDED_sys_io_FileSeek
#include <sys/io/FileSeek.h>
#endif
namespace sys{
namespace io{

::sys::io::FileSeek FileSeek_obj::SeekBegin;

::sys::io::FileSeek FileSeek_obj::SeekCur;

::sys::io::FileSeek FileSeek_obj::SeekEnd;

HX_DEFINE_CREATE_ENUM(FileSeek_obj)

int FileSeek_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("SeekBegin","\x71","\xe1","\xd6","\x68")) return 0;
	if (inName==HX_HCSTRING("SeekCur","\xc8","\x9a","\xe6","\x4b")) return 1;
	if (inName==HX_HCSTRING("SeekEnd","\x23","\x19","\xe8","\x4b")) return 2;
	return super::__FindIndex(inName);
}

int FileSeek_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("SeekBegin","\x71","\xe1","\xd6","\x68")) return 0;
	if (inName==HX_HCSTRING("SeekCur","\xc8","\x9a","\xe6","\x4b")) return 0;
	if (inName==HX_HCSTRING("SeekEnd","\x23","\x19","\xe8","\x4b")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FileSeek_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("SeekBegin","\x71","\xe1","\xd6","\x68")) return SeekBegin;
	if (inName==HX_HCSTRING("SeekCur","\xc8","\x9a","\xe6","\x4b")) return SeekCur;
	if (inName==HX_HCSTRING("SeekEnd","\x23","\x19","\xe8","\x4b")) return SeekEnd;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("SeekBegin","\x71","\xe1","\xd6","\x68"),
	HX_HCSTRING("SeekCur","\xc8","\x9a","\xe6","\x4b"),
	HX_HCSTRING("SeekEnd","\x23","\x19","\xe8","\x4b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileSeek_obj::SeekBegin,"SeekBegin");
	HX_MARK_MEMBER_NAME(FileSeek_obj::SeekCur,"SeekCur");
	HX_MARK_MEMBER_NAME(FileSeek_obj::SeekEnd,"SeekEnd");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileSeek_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FileSeek_obj::SeekBegin,"SeekBegin");
	HX_VISIT_MEMBER_NAME(FileSeek_obj::SeekCur,"SeekCur");
	HX_VISIT_MEMBER_NAME(FileSeek_obj::SeekEnd,"SeekEnd");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FileSeek_obj::__mClass;

Dynamic __Create_FileSeek_obj() { return new FileSeek_obj; }

void FileSeek_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("sys.io.FileSeek","\xdb","\x3e","\xfe","\x78"), hx::TCanCast< FileSeek_obj >,sStaticFields,sMemberFields,
	&__Create_FileSeek_obj, &__Create,
	&super::__SGetClass(), &CreateFileSeek_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FileSeek_obj::__boot()
{
hx::Static(SeekBegin) = hx::CreateEnum< FileSeek_obj >(HX_HCSTRING("SeekBegin","\x71","\xe1","\xd6","\x68"),0);
hx::Static(SeekCur) = hx::CreateEnum< FileSeek_obj >(HX_HCSTRING("SeekCur","\xc8","\x9a","\xe6","\x4b"),1);
hx::Static(SeekEnd) = hx::CreateEnum< FileSeek_obj >(HX_HCSTRING("SeekEnd","\x23","\x19","\xe8","\x4b"),2);
}


} // end namespace sys
} // end namespace io
