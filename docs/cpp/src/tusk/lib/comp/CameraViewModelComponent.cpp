#include <hxcpp.h>

#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_tusk_Component
#include <tusk/Component.h>
#endif
#ifndef INCLUDED_tusk_lib_comp_CameraViewModelComponent
#include <tusk/lib/comp/CameraViewModelComponent.h>
#endif
#ifndef INCLUDED_tusk_math_Matrix4x4
#include <tusk/math/Matrix4x4.h>
#endif
namespace tusk{
namespace lib{
namespace comp{

Void CameraViewModelComponent_obj::__construct()
{
HX_STACK_FRAME("tusk.lib.comp.CameraViewModelComponent","new",0xb4be36b1,"tusk.lib.comp.CameraViewModelComponent.new","tusk/lib/comp/CameraViewModelComponent.hx",9,0xb1cba200)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct();
}
;
	return null();
}

//CameraViewModelComponent_obj::~CameraViewModelComponent_obj() { }

Dynamic CameraViewModelComponent_obj::__CreateEmpty() { return  new CameraViewModelComponent_obj; }
hx::ObjectPtr< CameraViewModelComponent_obj > CameraViewModelComponent_obj::__new()
{  hx::ObjectPtr< CameraViewModelComponent_obj > _result_ = new CameraViewModelComponent_obj();
	_result_->__construct();
	return _result_;}

Dynamic CameraViewModelComponent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CameraViewModelComponent_obj > _result_ = new CameraViewModelComponent_obj();
	_result_->__construct();
	return _result_;}

int CameraViewModelComponent_obj::get__tid( ){
	HX_STACK_FRAME("tusk.lib.comp.CameraViewModelComponent","get__tid",0x93ea75e8,"tusk.lib.comp.CameraViewModelComponent.get__tid","tusk/macros/ComponentIndexer.hx",52,0x2304c9ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	return (int)1;
}


Void CameraViewModelComponent_obj::hxSerialize( ::haxe::Serializer s){
{
		HX_STACK_FRAME("tusk.lib.comp.CameraViewModelComponent","hxSerialize",0x30aba001,"tusk.lib.comp.CameraViewModelComponent.hxSerialize","tusk/Component.hx",6,0x68348cf7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(52)
		::tusk::math::Matrix4x4 tmp = this->viewModelMatrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		s->serialize(tmp);
		HX_STACK_LINE(52)
		bool tmp1 = this->dirty;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		s->serialize(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraViewModelComponent_obj,hxSerialize,(void))

Void CameraViewModelComponent_obj::hxUnserialize( ::haxe::Serializer s){
{
		HX_STACK_FRAME("tusk.lib.comp.CameraViewModelComponent","hxUnserialize",0x08bfb0c8,"tusk.lib.comp.CameraViewModelComponent.hxUnserialize","tusk/Component.hx",6,0x68348cf7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(52)
		::tusk::math::Matrix4x4 tmp = this->viewModelMatrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		s->serialize(tmp);
		HX_STACK_LINE(52)
		bool tmp1 = this->dirty;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		s->serialize(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraViewModelComponent_obj,hxUnserialize,(void))

int CameraViewModelComponent_obj::tid;


CameraViewModelComponent_obj::CameraViewModelComponent_obj()
{
}

void CameraViewModelComponent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraViewModelComponent);
	HX_MARK_MEMBER_NAME(viewModelMatrix,"viewModelMatrix");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_END_CLASS();
}

void CameraViewModelComponent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(viewModelMatrix,"viewModelMatrix");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
}

Dynamic CameraViewModelComponent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	case 15:
		if (HX_FIELD_EQ(inName,"viewModelMatrix") ) { return viewModelMatrix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CameraViewModelComponent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"viewModelMatrix") ) { viewModelMatrix=inValue.Cast< ::tusk::math::Matrix4x4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraViewModelComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("viewModelMatrix","\x65","\x58","\xcf","\x2f"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::tusk::math::Matrix4x4*/ ,(int)offsetof(CameraViewModelComponent_obj,viewModelMatrix),HX_HCSTRING("viewModelMatrix","\x65","\x58","\xcf","\x2f")},
	{hx::fsBool,(int)offsetof(CameraViewModelComponent_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CameraViewModelComponent_obj::tid,HX_HCSTRING("tid","\x4f","\x61","\x58","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("viewModelMatrix","\x65","\x58","\xcf","\x2f"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("get__tid","\xd9","\x61","\xde","\xbe"),
	HX_HCSTRING("hxSerialize","\xb0","\x00","\x09","\x14"),
	HX_HCSTRING("hxUnserialize","\x37","\xdb","\xb9","\x86"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraViewModelComponent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CameraViewModelComponent_obj::tid,"tid");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraViewModelComponent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CameraViewModelComponent_obj::tid,"tid");
};

#endif

hx::Class CameraViewModelComponent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("tid","\x4f","\x61","\x58","\x00"),
	::String(null()) };

void CameraViewModelComponent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.lib.comp.CameraViewModelComponent","\x3f","\x0a","\x77","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CameraViewModelComponent_obj >;
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

void CameraViewModelComponent_obj::__boot()
{
	tid= (int)1;
}

} // end namespace tusk
} // end namespace lib
} // end namespace comp
