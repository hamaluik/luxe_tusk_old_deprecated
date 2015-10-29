#include <hxcpp.h>

#ifndef INCLUDED_sys_db_RecordType
#include <sys/db/RecordType.h>
#endif
namespace sys{
namespace db{

::sys::db::RecordType RecordType_obj::DBigId;

::sys::db::RecordType RecordType_obj::DBigInt;

::sys::db::RecordType RecordType_obj::DBinary;

::sys::db::RecordType RecordType_obj::DBool;

::sys::db::RecordType  RecordType_obj::DBytes(int n)
	{ return hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DBytes","\x87","\x01","\x0a","\x81"),19,hx::DynamicArray(0,1).Add(n)); }

::sys::db::RecordType RecordType_obj::DData;

::sys::db::RecordType RecordType_obj::DDate;

::sys::db::RecordType RecordType_obj::DDateTime;

::sys::db::RecordType RecordType_obj::DEncoded;

::sys::db::RecordType  RecordType_obj::DEnum(::String name)
	{ return hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DEnum","\x65","\x09","\x2f","\x55"),31,hx::DynamicArray(0,1).Add(name)); }

::sys::db::RecordType  RecordType_obj::DFlags(Array< ::String > flags,bool autoSize)
	{ return hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DFlags","\x63","\x24","\xfe","\xc5"),23,hx::DynamicArray(0,2).Add(flags).Add(autoSize)); }

::sys::db::RecordType RecordType_obj::DFloat;

::sys::db::RecordType RecordType_obj::DId;

::sys::db::RecordType RecordType_obj::DInt;

::sys::db::RecordType RecordType_obj::DInterval;

::sys::db::RecordType RecordType_obj::DLongBinary;

::sys::db::RecordType RecordType_obj::DMediumInt;

::sys::db::RecordType RecordType_obj::DMediumUInt;

::sys::db::RecordType RecordType_obj::DNekoSerialized;

::sys::db::RecordType RecordType_obj::DNull;

::sys::db::RecordType RecordType_obj::DSerialized;

::sys::db::RecordType RecordType_obj::DSingle;

::sys::db::RecordType RecordType_obj::DSmallBinary;

::sys::db::RecordType RecordType_obj::DSmallInt;

::sys::db::RecordType RecordType_obj::DSmallText;

::sys::db::RecordType RecordType_obj::DSmallUInt;

::sys::db::RecordType  RecordType_obj::DString(int n)
	{ return hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DString","\x35","\x28","\x78","\x51"),9,hx::DynamicArray(0,1).Add(n)); }

::sys::db::RecordType RecordType_obj::DText;

::sys::db::RecordType RecordType_obj::DTimeStamp;

::sys::db::RecordType RecordType_obj::DTinyInt;

::sys::db::RecordType RecordType_obj::DTinyText;

::sys::db::RecordType RecordType_obj::DTinyUInt;

::sys::db::RecordType RecordType_obj::DUId;

::sys::db::RecordType RecordType_obj::DUInt;

HX_DEFINE_CREATE_ENUM(RecordType_obj)

int RecordType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("DBigId","\xd7","\xa1","\x6c","\x76")) return 4;
	if (inName==HX_HCSTRING("DBigInt","\x73","\x03","\xa1","\x28")) return 5;
	if (inName==HX_HCSTRING("DBinary","\x65","\xbb","\x53","\x2d")) return 18;
	if (inName==HX_HCSTRING("DBool","\x8e","\x22","\x34","\x53")) return 8;
	if (inName==HX_HCSTRING("DBytes","\x87","\x01","\x0a","\x81")) return 19;
	if (inName==HX_HCSTRING("DData","\x8e","\xf4","\x7b","\x54")) return 30;
	if (inName==HX_HCSTRING("DDate","\x92","\xf4","\x7b","\x54")) return 10;
	if (inName==HX_HCSTRING("DDateTime","\xbf","\x9d","\xdc","\xbb")) return 11;
	if (inName==HX_HCSTRING("DEncoded","\xaa","\x59","\x47","\xac")) return 20;
	if (inName==HX_HCSTRING("DEnum","\x65","\x09","\x2f","\x55")) return 31;
	if (inName==HX_HCSTRING("DFlags","\x63","\x24","\xfe","\xc5")) return 23;
	if (inName==HX_HCSTRING("DFloat","\xb8","\xbe","\x08","\xc6")) return 7;
	if (inName==HX_HCSTRING("DId","\x3f","\xd9","\x33","\x00")) return 0;
	if (inName==HX_HCSTRING("DInt","\x0b","\x47","\x2a","\x2d")) return 1;
	if (inName==HX_HCSTRING("DInterval","\xa9","\x19","\x4e","\x0a")) return 32;
	if (inName==HX_HCSTRING("DLongBinary","\x01","\x9c","\x4c","\x38")) return 17;
	if (inName==HX_HCSTRING("DMediumInt","\x96","\x9e","\x4c","\xf7")) return 28;
	if (inName==HX_HCSTRING("DMediumUInt","\xf3","\x9b","\x90","\x73")) return 29;
	if (inName==HX_HCSTRING("DNekoSerialized","\x63","\x77","\xdb","\x19")) return 22;
	if (inName==HX_HCSTRING("DNull","\xeb","\x3c","\x27","\x5b")) return 33;
	if (inName==HX_HCSTRING("DSerialized","\xe8","\x47","\xe5","\x90")) return 21;
	if (inName==HX_HCSTRING("DSingle","\xec","\x65","\x69","\xf9")) return 6;
	if (inName==HX_HCSTRING("DSmallBinary","\x44","\x26","\x1a","\xda")) return 16;
	if (inName==HX_HCSTRING("DSmallInt","\xcc","\xea","\x9d","\x87")) return 26;
	if (inName==HX_HCSTRING("DSmallText","\x30","\x10","\xce","\x29")) return 14;
	if (inName==HX_HCSTRING("DSmallUInt","\xfd","\xfe","\x61","\x2a")) return 27;
	if (inName==HX_HCSTRING("DString","\x35","\x28","\x78","\x51")) return 9;
	if (inName==HX_HCSTRING("DText","\x11","\x6b","\x12","\x5f")) return 15;
	if (inName==HX_HCSTRING("DTimeStamp","\xd2","\xfb","\x96","\xee")) return 12;
	if (inName==HX_HCSTRING("DTinyInt","\xeb","\x8f","\x30","\x78")) return 24;
	if (inName==HX_HCSTRING("DTinyText","\x31","\xe6","\x8b","\xb9")) return 13;
	if (inName==HX_HCSTRING("DTinyUInt","\xfe","\xd4","\x1f","\xba")) return 25;
	if (inName==HX_HCSTRING("DUId","\xcc","\x41","\x33","\x2d")) return 2;
	if (inName==HX_HCSTRING("DUInt","\xde","\x59","\xa6","\x5f")) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RecordType_obj,DBytes,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RecordType_obj,DEnum,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(RecordType_obj,DFlags,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RecordType_obj,DString,return)

int RecordType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("DBigId","\xd7","\xa1","\x6c","\x76")) return 0;
	if (inName==HX_HCSTRING("DBigInt","\x73","\x03","\xa1","\x28")) return 0;
	if (inName==HX_HCSTRING("DBinary","\x65","\xbb","\x53","\x2d")) return 0;
	if (inName==HX_HCSTRING("DBool","\x8e","\x22","\x34","\x53")) return 0;
	if (inName==HX_HCSTRING("DBytes","\x87","\x01","\x0a","\x81")) return 1;
	if (inName==HX_HCSTRING("DData","\x8e","\xf4","\x7b","\x54")) return 0;
	if (inName==HX_HCSTRING("DDate","\x92","\xf4","\x7b","\x54")) return 0;
	if (inName==HX_HCSTRING("DDateTime","\xbf","\x9d","\xdc","\xbb")) return 0;
	if (inName==HX_HCSTRING("DEncoded","\xaa","\x59","\x47","\xac")) return 0;
	if (inName==HX_HCSTRING("DEnum","\x65","\x09","\x2f","\x55")) return 1;
	if (inName==HX_HCSTRING("DFlags","\x63","\x24","\xfe","\xc5")) return 2;
	if (inName==HX_HCSTRING("DFloat","\xb8","\xbe","\x08","\xc6")) return 0;
	if (inName==HX_HCSTRING("DId","\x3f","\xd9","\x33","\x00")) return 0;
	if (inName==HX_HCSTRING("DInt","\x0b","\x47","\x2a","\x2d")) return 0;
	if (inName==HX_HCSTRING("DInterval","\xa9","\x19","\x4e","\x0a")) return 0;
	if (inName==HX_HCSTRING("DLongBinary","\x01","\x9c","\x4c","\x38")) return 0;
	if (inName==HX_HCSTRING("DMediumInt","\x96","\x9e","\x4c","\xf7")) return 0;
	if (inName==HX_HCSTRING("DMediumUInt","\xf3","\x9b","\x90","\x73")) return 0;
	if (inName==HX_HCSTRING("DNekoSerialized","\x63","\x77","\xdb","\x19")) return 0;
	if (inName==HX_HCSTRING("DNull","\xeb","\x3c","\x27","\x5b")) return 0;
	if (inName==HX_HCSTRING("DSerialized","\xe8","\x47","\xe5","\x90")) return 0;
	if (inName==HX_HCSTRING("DSingle","\xec","\x65","\x69","\xf9")) return 0;
	if (inName==HX_HCSTRING("DSmallBinary","\x44","\x26","\x1a","\xda")) return 0;
	if (inName==HX_HCSTRING("DSmallInt","\xcc","\xea","\x9d","\x87")) return 0;
	if (inName==HX_HCSTRING("DSmallText","\x30","\x10","\xce","\x29")) return 0;
	if (inName==HX_HCSTRING("DSmallUInt","\xfd","\xfe","\x61","\x2a")) return 0;
	if (inName==HX_HCSTRING("DString","\x35","\x28","\x78","\x51")) return 1;
	if (inName==HX_HCSTRING("DText","\x11","\x6b","\x12","\x5f")) return 0;
	if (inName==HX_HCSTRING("DTimeStamp","\xd2","\xfb","\x96","\xee")) return 0;
	if (inName==HX_HCSTRING("DTinyInt","\xeb","\x8f","\x30","\x78")) return 0;
	if (inName==HX_HCSTRING("DTinyText","\x31","\xe6","\x8b","\xb9")) return 0;
	if (inName==HX_HCSTRING("DTinyUInt","\xfe","\xd4","\x1f","\xba")) return 0;
	if (inName==HX_HCSTRING("DUId","\xcc","\x41","\x33","\x2d")) return 0;
	if (inName==HX_HCSTRING("DUInt","\xde","\x59","\xa6","\x5f")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic RecordType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("DBigId","\xd7","\xa1","\x6c","\x76")) return DBigId;
	if (inName==HX_HCSTRING("DBigInt","\x73","\x03","\xa1","\x28")) return DBigInt;
	if (inName==HX_HCSTRING("DBinary","\x65","\xbb","\x53","\x2d")) return DBinary;
	if (inName==HX_HCSTRING("DBool","\x8e","\x22","\x34","\x53")) return DBool;
	if (inName==HX_HCSTRING("DBytes","\x87","\x01","\x0a","\x81")) return DBytes_dyn();
	if (inName==HX_HCSTRING("DData","\x8e","\xf4","\x7b","\x54")) return DData;
	if (inName==HX_HCSTRING("DDate","\x92","\xf4","\x7b","\x54")) return DDate;
	if (inName==HX_HCSTRING("DDateTime","\xbf","\x9d","\xdc","\xbb")) return DDateTime;
	if (inName==HX_HCSTRING("DEncoded","\xaa","\x59","\x47","\xac")) return DEncoded;
	if (inName==HX_HCSTRING("DEnum","\x65","\x09","\x2f","\x55")) return DEnum_dyn();
	if (inName==HX_HCSTRING("DFlags","\x63","\x24","\xfe","\xc5")) return DFlags_dyn();
	if (inName==HX_HCSTRING("DFloat","\xb8","\xbe","\x08","\xc6")) return DFloat;
	if (inName==HX_HCSTRING("DId","\x3f","\xd9","\x33","\x00")) return DId;
	if (inName==HX_HCSTRING("DInt","\x0b","\x47","\x2a","\x2d")) return DInt;
	if (inName==HX_HCSTRING("DInterval","\xa9","\x19","\x4e","\x0a")) return DInterval;
	if (inName==HX_HCSTRING("DLongBinary","\x01","\x9c","\x4c","\x38")) return DLongBinary;
	if (inName==HX_HCSTRING("DMediumInt","\x96","\x9e","\x4c","\xf7")) return DMediumInt;
	if (inName==HX_HCSTRING("DMediumUInt","\xf3","\x9b","\x90","\x73")) return DMediumUInt;
	if (inName==HX_HCSTRING("DNekoSerialized","\x63","\x77","\xdb","\x19")) return DNekoSerialized;
	if (inName==HX_HCSTRING("DNull","\xeb","\x3c","\x27","\x5b")) return DNull;
	if (inName==HX_HCSTRING("DSerialized","\xe8","\x47","\xe5","\x90")) return DSerialized;
	if (inName==HX_HCSTRING("DSingle","\xec","\x65","\x69","\xf9")) return DSingle;
	if (inName==HX_HCSTRING("DSmallBinary","\x44","\x26","\x1a","\xda")) return DSmallBinary;
	if (inName==HX_HCSTRING("DSmallInt","\xcc","\xea","\x9d","\x87")) return DSmallInt;
	if (inName==HX_HCSTRING("DSmallText","\x30","\x10","\xce","\x29")) return DSmallText;
	if (inName==HX_HCSTRING("DSmallUInt","\xfd","\xfe","\x61","\x2a")) return DSmallUInt;
	if (inName==HX_HCSTRING("DString","\x35","\x28","\x78","\x51")) return DString_dyn();
	if (inName==HX_HCSTRING("DText","\x11","\x6b","\x12","\x5f")) return DText;
	if (inName==HX_HCSTRING("DTimeStamp","\xd2","\xfb","\x96","\xee")) return DTimeStamp;
	if (inName==HX_HCSTRING("DTinyInt","\xeb","\x8f","\x30","\x78")) return DTinyInt;
	if (inName==HX_HCSTRING("DTinyText","\x31","\xe6","\x8b","\xb9")) return DTinyText;
	if (inName==HX_HCSTRING("DTinyUInt","\xfe","\xd4","\x1f","\xba")) return DTinyUInt;
	if (inName==HX_HCSTRING("DUId","\xcc","\x41","\x33","\x2d")) return DUId;
	if (inName==HX_HCSTRING("DUInt","\xde","\x59","\xa6","\x5f")) return DUInt;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("DId","\x3f","\xd9","\x33","\x00"),
	HX_HCSTRING("DInt","\x0b","\x47","\x2a","\x2d"),
	HX_HCSTRING("DUId","\xcc","\x41","\x33","\x2d"),
	HX_HCSTRING("DUInt","\xde","\x59","\xa6","\x5f"),
	HX_HCSTRING("DBigId","\xd7","\xa1","\x6c","\x76"),
	HX_HCSTRING("DBigInt","\x73","\x03","\xa1","\x28"),
	HX_HCSTRING("DSingle","\xec","\x65","\x69","\xf9"),
	HX_HCSTRING("DFloat","\xb8","\xbe","\x08","\xc6"),
	HX_HCSTRING("DBool","\x8e","\x22","\x34","\x53"),
	HX_HCSTRING("DString","\x35","\x28","\x78","\x51"),
	HX_HCSTRING("DDate","\x92","\xf4","\x7b","\x54"),
	HX_HCSTRING("DDateTime","\xbf","\x9d","\xdc","\xbb"),
	HX_HCSTRING("DTimeStamp","\xd2","\xfb","\x96","\xee"),
	HX_HCSTRING("DTinyText","\x31","\xe6","\x8b","\xb9"),
	HX_HCSTRING("DSmallText","\x30","\x10","\xce","\x29"),
	HX_HCSTRING("DText","\x11","\x6b","\x12","\x5f"),
	HX_HCSTRING("DSmallBinary","\x44","\x26","\x1a","\xda"),
	HX_HCSTRING("DLongBinary","\x01","\x9c","\x4c","\x38"),
	HX_HCSTRING("DBinary","\x65","\xbb","\x53","\x2d"),
	HX_HCSTRING("DBytes","\x87","\x01","\x0a","\x81"),
	HX_HCSTRING("DEncoded","\xaa","\x59","\x47","\xac"),
	HX_HCSTRING("DSerialized","\xe8","\x47","\xe5","\x90"),
	HX_HCSTRING("DNekoSerialized","\x63","\x77","\xdb","\x19"),
	HX_HCSTRING("DFlags","\x63","\x24","\xfe","\xc5"),
	HX_HCSTRING("DTinyInt","\xeb","\x8f","\x30","\x78"),
	HX_HCSTRING("DTinyUInt","\xfe","\xd4","\x1f","\xba"),
	HX_HCSTRING("DSmallInt","\xcc","\xea","\x9d","\x87"),
	HX_HCSTRING("DSmallUInt","\xfd","\xfe","\x61","\x2a"),
	HX_HCSTRING("DMediumInt","\x96","\x9e","\x4c","\xf7"),
	HX_HCSTRING("DMediumUInt","\xf3","\x9b","\x90","\x73"),
	HX_HCSTRING("DData","\x8e","\xf4","\x7b","\x54"),
	HX_HCSTRING("DEnum","\x65","\x09","\x2f","\x55"),
	HX_HCSTRING("DInterval","\xa9","\x19","\x4e","\x0a"),
	HX_HCSTRING("DNull","\xeb","\x3c","\x27","\x5b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RecordType_obj::DBigId,"DBigId");
	HX_MARK_MEMBER_NAME(RecordType_obj::DBigInt,"DBigInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DBinary,"DBinary");
	HX_MARK_MEMBER_NAME(RecordType_obj::DBool,"DBool");
	HX_MARK_MEMBER_NAME(RecordType_obj::DData,"DData");
	HX_MARK_MEMBER_NAME(RecordType_obj::DDate,"DDate");
	HX_MARK_MEMBER_NAME(RecordType_obj::DDateTime,"DDateTime");
	HX_MARK_MEMBER_NAME(RecordType_obj::DEncoded,"DEncoded");
	HX_MARK_MEMBER_NAME(RecordType_obj::DFloat,"DFloat");
	HX_MARK_MEMBER_NAME(RecordType_obj::DId,"DId");
	HX_MARK_MEMBER_NAME(RecordType_obj::DInt,"DInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DInterval,"DInterval");
	HX_MARK_MEMBER_NAME(RecordType_obj::DLongBinary,"DLongBinary");
	HX_MARK_MEMBER_NAME(RecordType_obj::DMediumInt,"DMediumInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DMediumUInt,"DMediumUInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DNekoSerialized,"DNekoSerialized");
	HX_MARK_MEMBER_NAME(RecordType_obj::DNull,"DNull");
	HX_MARK_MEMBER_NAME(RecordType_obj::DSerialized,"DSerialized");
	HX_MARK_MEMBER_NAME(RecordType_obj::DSingle,"DSingle");
	HX_MARK_MEMBER_NAME(RecordType_obj::DSmallBinary,"DSmallBinary");
	HX_MARK_MEMBER_NAME(RecordType_obj::DSmallInt,"DSmallInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DSmallText,"DSmallText");
	HX_MARK_MEMBER_NAME(RecordType_obj::DSmallUInt,"DSmallUInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DText,"DText");
	HX_MARK_MEMBER_NAME(RecordType_obj::DTimeStamp,"DTimeStamp");
	HX_MARK_MEMBER_NAME(RecordType_obj::DTinyInt,"DTinyInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DTinyText,"DTinyText");
	HX_MARK_MEMBER_NAME(RecordType_obj::DTinyUInt,"DTinyUInt");
	HX_MARK_MEMBER_NAME(RecordType_obj::DUId,"DUId");
	HX_MARK_MEMBER_NAME(RecordType_obj::DUInt,"DUInt");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RecordType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DBigId,"DBigId");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DBigInt,"DBigInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DBinary,"DBinary");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DBool,"DBool");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DData,"DData");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DDate,"DDate");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DDateTime,"DDateTime");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DEncoded,"DEncoded");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DFloat,"DFloat");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DId,"DId");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DInt,"DInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DInterval,"DInterval");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DLongBinary,"DLongBinary");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DMediumInt,"DMediumInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DMediumUInt,"DMediumUInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DNekoSerialized,"DNekoSerialized");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DNull,"DNull");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DSerialized,"DSerialized");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DSingle,"DSingle");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DSmallBinary,"DSmallBinary");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DSmallInt,"DSmallInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DSmallText,"DSmallText");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DSmallUInt,"DSmallUInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DText,"DText");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DTimeStamp,"DTimeStamp");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DTinyInt,"DTinyInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DTinyText,"DTinyText");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DTinyUInt,"DTinyUInt");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DUId,"DUId");
	HX_VISIT_MEMBER_NAME(RecordType_obj::DUInt,"DUInt");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class RecordType_obj::__mClass;

Dynamic __Create_RecordType_obj() { return new RecordType_obj; }

void RecordType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("sys.db.RecordType","\xda","\x7d","\xf5","\xcb"), hx::TCanCast< RecordType_obj >,sStaticFields,sMemberFields,
	&__Create_RecordType_obj, &__Create,
	&super::__SGetClass(), &CreateRecordType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void RecordType_obj::__boot()
{
hx::Static(DBigId) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DBigId","\xd7","\xa1","\x6c","\x76"),4);
hx::Static(DBigInt) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DBigInt","\x73","\x03","\xa1","\x28"),5);
hx::Static(DBinary) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DBinary","\x65","\xbb","\x53","\x2d"),18);
hx::Static(DBool) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DBool","\x8e","\x22","\x34","\x53"),8);
hx::Static(DData) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DData","\x8e","\xf4","\x7b","\x54"),30);
hx::Static(DDate) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DDate","\x92","\xf4","\x7b","\x54"),10);
hx::Static(DDateTime) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DDateTime","\xbf","\x9d","\xdc","\xbb"),11);
hx::Static(DEncoded) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DEncoded","\xaa","\x59","\x47","\xac"),20);
hx::Static(DFloat) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DFloat","\xb8","\xbe","\x08","\xc6"),7);
hx::Static(DId) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DId","\x3f","\xd9","\x33","\x00"),0);
hx::Static(DInt) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DInt","\x0b","\x47","\x2a","\x2d"),1);
hx::Static(DInterval) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DInterval","\xa9","\x19","\x4e","\x0a"),32);
hx::Static(DLongBinary) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DLongBinary","\x01","\x9c","\x4c","\x38"),17);
hx::Static(DMediumInt) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DMediumInt","\x96","\x9e","\x4c","\xf7"),28);
hx::Static(DMediumUInt) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DMediumUInt","\xf3","\x9b","\x90","\x73"),29);
hx::Static(DNekoSerialized) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DNekoSerialized","\x63","\x77","\xdb","\x19"),22);
hx::Static(DNull) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DNull","\xeb","\x3c","\x27","\x5b"),33);
hx::Static(DSerialized) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DSerialized","\xe8","\x47","\xe5","\x90"),21);
hx::Static(DSingle) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DSingle","\xec","\x65","\x69","\xf9"),6);
hx::Static(DSmallBinary) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DSmallBinary","\x44","\x26","\x1a","\xda"),16);
hx::Static(DSmallInt) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DSmallInt","\xcc","\xea","\x9d","\x87"),26);
hx::Static(DSmallText) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DSmallText","\x30","\x10","\xce","\x29"),14);
hx::Static(DSmallUInt) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DSmallUInt","\xfd","\xfe","\x61","\x2a"),27);
hx::Static(DText) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DText","\x11","\x6b","\x12","\x5f"),15);
hx::Static(DTimeStamp) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DTimeStamp","\xd2","\xfb","\x96","\xee"),12);
hx::Static(DTinyInt) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DTinyInt","\xeb","\x8f","\x30","\x78"),24);
hx::Static(DTinyText) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DTinyText","\x31","\xe6","\x8b","\xb9"),13);
hx::Static(DTinyUInt) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DTinyUInt","\xfe","\xd4","\x1f","\xba"),25);
hx::Static(DUId) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DUId","\xcc","\x41","\x33","\x2d"),2);
hx::Static(DUInt) = hx::CreateEnum< RecordType_obj >(HX_HCSTRING("DUInt","\xde","\x59","\xa6","\x5f"),3);
}


} // end namespace sys
} // end namespace db
