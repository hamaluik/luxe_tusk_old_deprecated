#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_tusk_math_Random
#include <tusk/math/Random.h>
#endif
namespace tusk{
namespace math{

Void Random_obj::__construct()
{
	return null();
}

//Random_obj::~Random_obj() { }

Dynamic Random_obj::__CreateEmpty() { return  new Random_obj; }
hx::ObjectPtr< Random_obj > Random_obj::__new()
{  hx::ObjectPtr< Random_obj > _result_ = new Random_obj();
	_result_->__construct();
	return _result_;}

Dynamic Random_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Random_obj > _result_ = new Random_obj();
	_result_->__construct();
	return _result_;}

bool Random_obj::_bool( ){
	HX_STACK_FRAME("tusk.math.Random","bool",0xe33e5a64,"tusk.math.Random.bool","tusk/math/Random.hx",13,0x2df9666a)
	HX_STACK_LINE(14)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	bool tmp1 = (tmp < ((Float)0.5));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,_bool,return )

int Random_obj::_int( int from,int to){
	HX_STACK_FRAME("tusk.math.Random","int",0xc4325bf5,"tusk.math.Random.int","tusk/math/Random.hx",24,0x2df9666a)
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_LINE(25)
	int tmp = from;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	int tmp1 = (to - from);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	Float tmp3 = ::Math_obj::random();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	int tmp6 = (tmp + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Random_obj,_int,return )

Float Random_obj::_float( Float from,Float to){
	HX_STACK_FRAME("tusk.math.Random","float",0x3eef6222,"tusk.math.Random.float","tusk/math/Random.hx",35,0x2df9666a)
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_LINE(36)
	Float tmp = from;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	Float tmp1 = (to - from);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Random_obj,_float,return )


Random_obj::Random_obj()
{
}

bool Random_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { outValue = _int_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bool") ) { outValue = _bool_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { outValue = _float_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Random_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Random_obj::__mClass,"__mClass");
};

#endif

hx::Class Random_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41"),
	HX_HCSTRING("int","\xef","\x0c","\x50","\x00"),
	HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"),
	::String(null()) };

void Random_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.math.Random","\x74","\x34","\x55","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Random_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Random_obj >;
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
