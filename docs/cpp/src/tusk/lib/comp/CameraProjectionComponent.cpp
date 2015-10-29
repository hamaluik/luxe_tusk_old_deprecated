#include <hxcpp.h>

#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_tusk_Component
#include <tusk/Component.h>
#endif
#ifndef INCLUDED_tusk_lib_comp_CameraProjectionComponent
#include <tusk/lib/comp/CameraProjectionComponent.h>
#endif
#ifndef INCLUDED_tusk_math_Matrix4x4
#include <tusk/math/Matrix4x4.h>
#endif
namespace tusk{
namespace lib{
namespace comp{

Void CameraProjectionComponent_obj::__construct()
{
HX_STACK_FRAME("tusk.lib.comp.CameraProjectionComponent","new",0xd09fd73a,"tusk.lib.comp.CameraProjectionComponent.new","tusk/lib/comp/CameraProjectionComponent.hx",9,0x36ecd235)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct();
}
;
	return null();
}

//CameraProjectionComponent_obj::~CameraProjectionComponent_obj() { }

Dynamic CameraProjectionComponent_obj::__CreateEmpty() { return  new CameraProjectionComponent_obj; }
hx::ObjectPtr< CameraProjectionComponent_obj > CameraProjectionComponent_obj::__new()
{  hx::ObjectPtr< CameraProjectionComponent_obj > _result_ = new CameraProjectionComponent_obj();
	_result_->__construct();
	return _result_;}

Dynamic CameraProjectionComponent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CameraProjectionComponent_obj > _result_ = new CameraProjectionComponent_obj();
	_result_->__construct();
	return _result_;}

int CameraProjectionComponent_obj::get__tid( ){
	HX_STACK_FRAME("tusk.lib.comp.CameraProjectionComponent","get__tid",0xa90944bf,"tusk.lib.comp.CameraProjectionComponent.get__tid","tusk/macros/ComponentIndexer.hx",52,0x2304c9ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	return (int)0;
}


Void CameraProjectionComponent_obj::hxSerialize( ::haxe::Serializer s){
{
		HX_STACK_FRAME("tusk.lib.comp.CameraProjectionComponent","hxSerialize",0x5a5e718a,"tusk.lib.comp.CameraProjectionComponent.hxSerialize","tusk/Component.hx",6,0x68348cf7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(52)
		::tusk::math::Matrix4x4 tmp = this->projectionMatrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		s->serialize(tmp);
		HX_STACK_LINE(52)
		bool tmp1 = this->dirty;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		s->serialize(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraProjectionComponent_obj,hxSerialize,(void))

Void CameraProjectionComponent_obj::hxUnserialize( ::haxe::Serializer s){
{
		HX_STACK_FRAME("tusk.lib.comp.CameraProjectionComponent","hxUnserialize",0x21f0b691,"tusk.lib.comp.CameraProjectionComponent.hxUnserialize","tusk/Component.hx",6,0x68348cf7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(52)
		::tusk::math::Matrix4x4 tmp = this->projectionMatrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		s->serialize(tmp);
		HX_STACK_LINE(52)
		bool tmp1 = this->dirty;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		s->serialize(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraProjectionComponent_obj,hxUnserialize,(void))

int CameraProjectionComponent_obj::tid;


CameraProjectionComponent_obj::CameraProjectionComponent_obj()
{
}

void CameraProjectionComponent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraProjectionComponent);
	HX_MARK_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_END_CLASS();
}

void CameraProjectionComponent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
}

Dynamic CameraProjectionComponent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get__tid") ) { return get__tid_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hxSerialize") ) { return hxSerialize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hxUnserialize") ) { return hxUnserialize_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { return projectionMatrix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CameraProjectionComponent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { projectionMatrix=inValue.Cast< ::tusk::math::Matrix4x4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraProjectionComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::tusk::math::Matrix4x4*/ ,(int)offsetof(CameraProjectionComponent_obj,projectionMatrix),HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0")},
	{hx::fsBool,(int)offsetof(CameraProjectionComponent_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CameraProjectionComponent_obj::tid,HX_HCSTRING("tid","\x4f","\x61","\x58","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("get__tid","\xd9","\x61","\xde","\xbe"),
	HX_HCSTRING("hxSerialize","\xb0","\x00","\x09","\x14"),
	HX_HCSTRING("hxUnserialize","\x37","\xdb","\xb9","\x86"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraProjectionComponent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CameraProjectionComponent_obj::tid,"tid");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraProjectionComponent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CameraProjectionComponent_obj::tid,"tid");
};

#endif

hx::Class CameraProjectionComponent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("tid","\x4f","\x61","\x58","\x00"),
	::String(null()) };

void CameraProjectionComponent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.lib.comp.CameraProjectionComponent","\x48","\x72","\x69","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CameraProjectionComponent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void CameraProjectionComponent_obj::__boot()
{
	tid= (int)0;
}

} // end namespace tusk
} // end namespace lib
} // end namespace comp
