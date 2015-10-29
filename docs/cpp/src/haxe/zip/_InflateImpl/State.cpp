#include <hxcpp.h>

#ifndef INCLUDED_haxe_zip__InflateImpl_State
#include <haxe/zip/_InflateImpl/State.h>
#endif
namespace haxe{
namespace zip{
namespace _InflateImpl{

::haxe::zip::_InflateImpl::State State_obj::Block;

::haxe::zip::_InflateImpl::State State_obj::CData;

::haxe::zip::_InflateImpl::State State_obj::Crc;

::haxe::zip::_InflateImpl::State State_obj::Dist;

::haxe::zip::_InflateImpl::State State_obj::DistOne;

::haxe::zip::_InflateImpl::State State_obj::Done;

::haxe::zip::_InflateImpl::State State_obj::Flat;

::haxe::zip::_InflateImpl::State State_obj::Head;

HX_DEFINE_CREATE_ENUM(State_obj)

int State_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Block","\x2d","\xe5","\x29","\x48")) return 1;
	if (inName==HX_HCSTRING("CData","\x0d","\x60","\x15","\xc1")) return 2;
	if (inName==HX_HCSTRING("Crc","\xb4","\x3a","\x33","\x00")) return 4;
	if (inName==HX_HCSTRING("Dist","\x86","\x93","\x42","\x2d")) return 5;
	if (inName==HX_HCSTRING("DistOne","\x80","\x36","\x2a","\x8b")) return 6;
	if (inName==HX_HCSTRING("Done","\xa2","\x1c","\x47","\x2d")) return 7;
	if (inName==HX_HCSTRING("Flat","\xd9","\x37","\x97","\x2e")) return 3;
	if (inName==HX_HCSTRING("Head","\x40","\x55","\xe4","\x2f")) return 0;
	return super::__FindIndex(inName);
}

int State_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Block","\x2d","\xe5","\x29","\x48")) return 0;
	if (inName==HX_HCSTRING("CData","\x0d","\x60","\x15","\xc1")) return 0;
	if (inName==HX_HCSTRING("Crc","\xb4","\x3a","\x33","\x00")) return 0;
	if (inName==HX_HCSTRING("Dist","\x86","\x93","\x42","\x2d")) return 0;
	if (inName==HX_HCSTRING("DistOne","\x80","\x36","\x2a","\x8b")) return 0;
	if (inName==HX_HCSTRING("Done","\xa2","\x1c","\x47","\x2d")) return 0;
	if (inName==HX_HCSTRING("Flat","\xd9","\x37","\x97","\x2e")) return 0;
	if (inName==HX_HCSTRING("Head","\x40","\x55","\xe4","\x2f")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic State_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Block","\x2d","\xe5","\x29","\x48")) return Block;
	if (inName==HX_HCSTRING("CData","\x0d","\x60","\x15","\xc1")) return CData;
	if (inName==HX_HCSTRING("Crc","\xb4","\x3a","\x33","\x00")) return Crc;
	if (inName==HX_HCSTRING("Dist","\x86","\x93","\x42","\x2d")) return Dist;
	if (inName==HX_HCSTRING("DistOne","\x80","\x36","\x2a","\x8b")) return DistOne;
	if (inName==HX_HCSTRING("Done","\xa2","\x1c","\x47","\x2d")) return Done;
	if (inName==HX_HCSTRING("Flat","\xd9","\x37","\x97","\x2e")) return Flat;
	if (inName==HX_HCSTRING("Head","\x40","\x55","\xe4","\x2f")) return Head;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Head","\x40","\x55","\xe4","\x2f"),
	HX_HCSTRING("Block","\x2d","\xe5","\x29","\x48"),
	HX_HCSTRING("CData","\x0d","\x60","\x15","\xc1"),
	HX_HCSTRING("Flat","\xd9","\x37","\x97","\x2e"),
	HX_HCSTRING("Crc","\xb4","\x3a","\x33","\x00"),
	HX_HCSTRING("Dist","\x86","\x93","\x42","\x2d"),
	HX_HCSTRING("DistOne","\x80","\x36","\x2a","\x8b"),
	HX_HCSTRING("Done","\xa2","\x1c","\x47","\x2d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(State_obj::Block,"Block");
	HX_MARK_MEMBER_NAME(State_obj::CData,"CData");
	HX_MARK_MEMBER_NAME(State_obj::Crc,"Crc");
	HX_MARK_MEMBER_NAME(State_obj::Dist,"Dist");
	HX_MARK_MEMBER_NAME(State_obj::DistOne,"DistOne");
	HX_MARK_MEMBER_NAME(State_obj::Done,"Done");
	HX_MARK_MEMBER_NAME(State_obj::Flat,"Flat");
	HX_MARK_MEMBER_NAME(State_obj::Head,"Head");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(State_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(State_obj::Block,"Block");
	HX_VISIT_MEMBER_NAME(State_obj::CData,"CData");
	HX_VISIT_MEMBER_NAME(State_obj::Crc,"Crc");
	HX_VISIT_MEMBER_NAME(State_obj::Dist,"Dist");
	HX_VISIT_MEMBER_NAME(State_obj::DistOne,"DistOne");
	HX_VISIT_MEMBER_NAME(State_obj::Done,"Done");
	HX_VISIT_MEMBER_NAME(State_obj::Flat,"Flat");
	HX_VISIT_MEMBER_NAME(State_obj::Head,"Head");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class State_obj::__mClass;

Dynamic __Create_State_obj() { return new State_obj; }

void State_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.zip._InflateImpl.State","\xa0","\xc2","\x8b","\xf6"), hx::TCanCast< State_obj >,sStaticFields,sMemberFields,
	&__Create_State_obj, &__Create,
	&super::__SGetClass(), &CreateState_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void State_obj::__boot()
{
hx::Static(Block) = hx::CreateEnum< State_obj >(HX_HCSTRING("Block","\x2d","\xe5","\x29","\x48"),1);
hx::Static(CData) = hx::CreateEnum< State_obj >(HX_HCSTRING("CData","\x0d","\x60","\x15","\xc1"),2);
hx::Static(Crc) = hx::CreateEnum< State_obj >(HX_HCSTRING("Crc","\xb4","\x3a","\x33","\x00"),4);
hx::Static(Dist) = hx::CreateEnum< State_obj >(HX_HCSTRING("Dist","\x86","\x93","\x42","\x2d"),5);
hx::Static(DistOne) = hx::CreateEnum< State_obj >(HX_HCSTRING("DistOne","\x80","\x36","\x2a","\x8b"),6);
hx::Static(Done) = hx::CreateEnum< State_obj >(HX_HCSTRING("Done","\xa2","\x1c","\x47","\x2d"),7);
hx::Static(Flat) = hx::CreateEnum< State_obj >(HX_HCSTRING("Flat","\xd9","\x37","\x97","\x2e"),3);
hx::Static(Head) = hx::CreateEnum< State_obj >(HX_HCSTRING("Head","\x40","\x55","\xe4","\x2f"),0);
}


} // end namespace haxe
} // end namespace zip
} // end namespace _InflateImpl
