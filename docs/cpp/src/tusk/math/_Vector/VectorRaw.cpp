#include <hxcpp.h>

#ifndef INCLUDED_tusk_math__Vector_VectorRaw
#include <tusk/math/_Vector/VectorRaw.h>
#endif
namespace tusk{
namespace math{
namespace _Vector{

Void VectorRaw_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{
HX_STACK_FRAME("tusk.math._Vector.VectorRaw","new",0x0f53361a,"tusk.math._Vector.VectorRaw.new","tusk/math/Vector.hx",3,0xfe208faa)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(6)
	this->y = ((Float)0);
	HX_STACK_LINE(5)
	this->x = ((Float)0);
	HX_STACK_LINE(10)
	this->x = x;
	HX_STACK_LINE(11)
	this->y = y;
}
;
	return null();
}

//VectorRaw_obj::~VectorRaw_obj() { }

Dynamic VectorRaw_obj::__CreateEmpty() { return  new VectorRaw_obj; }
hx::ObjectPtr< VectorRaw_obj > VectorRaw_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{  hx::ObjectPtr< VectorRaw_obj > _result_ = new VectorRaw_obj();
	_result_->__construct(__o_x,__o_y);
	return _result_;}

Dynamic VectorRaw_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VectorRaw_obj > _result_ = new VectorRaw_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


VectorRaw_obj::VectorRaw_obj()
{
}

Dynamic VectorRaw_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VectorRaw_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VectorRaw_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(VectorRaw_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(VectorRaw_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VectorRaw_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VectorRaw_obj::__mClass,"__mClass");
};

#endif

hx::Class VectorRaw_obj::__mClass;

void VectorRaw_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.math._Vector.VectorRaw","\x28","\xe1","\x8b","\x1e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VectorRaw_obj >;
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

} // end namespace tusk
} // end namespace math
} // end namespace _Vector
