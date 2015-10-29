#include <hxcpp.h>

#ifndef INCLUDED_tusk_Component
#include <tusk/Component.h>
#endif
namespace tusk{

Void Component_obj::__construct()
{
HX_STACK_FRAME("tusk.Component","new",0x031df53a,"tusk.Component.new","tusk/Component.hx",23,0x68348cf7)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Component_obj::~Component_obj() { }

Dynamic Component_obj::__CreateEmpty() { return  new Component_obj; }
hx::ObjectPtr< Component_obj > Component_obj::__new()
{  hx::ObjectPtr< Component_obj > _result_ = new Component_obj();
	_result_->__construct();
	return _result_;}

Dynamic Component_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Component_obj > _result_ = new Component_obj();
	_result_->__construct();
	return _result_;}

int Component_obj::get__tid( ){
	HX_STACK_FRAME("tusk.Component","get__tid",0x629e66bf,"tusk.Component.get__tid","tusk/Component.hx",18,0x68348cf7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	int tmp = ::tusk::Component_obj::tid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get__tid,return )

int Component_obj::tid;


Component_obj::Component_obj()
{
}

Dynamic Component_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_tid") ) { return inCallProp == hx::paccAlways ? get__tid() : _tid; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get__tid") ) { return get__tid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Component_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tid") ) { outValue = tid; return true;  }
	}
	return false;
}

Dynamic Component_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_tid") ) { _tid=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Component_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tid") ) { tid=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Component_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_tid","\x50","\xa6","\x23","\x3f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Component_obj,_tid),HX_HCSTRING("_tid","\x50","\xa6","\x23","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Component_obj::tid,HX_HCSTRING("tid","\x4f","\x61","\x58","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_tid","\x50","\xa6","\x23","\x3f"),
	HX_HCSTRING("get__tid","\xd9","\x61","\xde","\xbe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Component_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Component_obj::tid,"tid");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Component_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Component_obj::tid,"tid");
};

#endif

hx::Class Component_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("tid","\x4f","\x61","\x58","\x00"),
	::String(null()) };

void Component_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.Component","\x48","\x90","\x00","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Component_obj::__GetStatic;
	__mClass->mSetStaticField = &Component_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Component_obj >;
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

void Component_obj::__boot()
{
	tid= (int)-1;
}

} // end namespace tusk
