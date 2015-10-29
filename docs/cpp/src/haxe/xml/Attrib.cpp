#include <hxcpp.h>

#ifndef INCLUDED_haxe_xml_Attrib
#include <haxe/xml/Attrib.h>
#endif
#ifndef INCLUDED_haxe_xml_Filter
#include <haxe/xml/Filter.h>
#endif
namespace haxe{
namespace xml{

::haxe::xml::Attrib  Attrib_obj::Att(::String name,::haxe::xml::Filter filter,::String defvalue)
	{ return hx::CreateEnum< Attrib_obj >(HX_HCSTRING("Att","\x01","\xb8","\x31","\x00"),0,hx::DynamicArray(0,3).Add(name).Add(filter).Add(defvalue)); }

HX_DEFINE_CREATE_ENUM(Attrib_obj)

int Attrib_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Att","\x01","\xb8","\x31","\x00")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Attrib_obj,Att,return)

int Attrib_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Att","\x01","\xb8","\x31","\x00")) return 3;
	return super::__FindArgCount(inName);
}

Dynamic Attrib_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Att","\x01","\xb8","\x31","\x00")) return Att_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Att","\x01","\xb8","\x31","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Attrib_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Attrib_obj::__mClass;

Dynamic __Create_Attrib_obj() { return new Attrib_obj; }

void Attrib_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.xml.Attrib","\x69","\x94","\x24","\xb7"), hx::TCanCast< Attrib_obj >,sStaticFields,sMemberFields,
	&__Create_Attrib_obj, &__Create,
	&super::__SGetClass(), &CreateAttrib_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Attrib_obj::__boot()
{
}


} // end namespace haxe
} // end namespace xml
