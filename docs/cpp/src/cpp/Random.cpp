#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_cpp_Random
#include <cpp/Random.h>
#endif
namespace cpp{

Void Random_obj::__construct()
{
HX_STACK_FRAME("cpp.Random","new",0x535de600,"cpp.Random.new","C:\\HaxeToolkit\\haxe\\std/cpp/Random.hx",28,0x9700c1d6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	Dynamic tmp = ::cpp::Random_obj::random_new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	this->r = tmp;
}
;
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

Void Random_obj::setSeed( int s){
{
		HX_STACK_FRAME("cpp.Random","setSeed",0x3c2a2bd3,"cpp.Random.setSeed","C:\\HaxeToolkit\\haxe\\std/cpp/Random.hx",32,0x9700c1d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(33)
		Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		int tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		::cpp::Random_obj::random_set_seed(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Random_obj,setSeed,(void))

int Random_obj::_int( int max){
	HX_STACK_FRAME("cpp.Random","int",0x535a228f,"cpp.Random.int","C:\\HaxeToolkit\\haxe\\std/cpp/Random.hx",36,0x9700c1d6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(37)
	Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	int tmp1 = max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	int tmp2 = ::cpp::Random_obj::random_int(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Random_obj,_int,return )

Float Random_obj::_float( ){
	HX_STACK_FRAME("cpp.Random","float",0xbc89833c,"cpp.Random.float","C:\\HaxeToolkit\\haxe\\std/cpp/Random.hx",40,0x9700c1d6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	Float tmp1 = ::cpp::Random_obj::random_float(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Random_obj,_float,return )

Dynamic Random_obj::random_new;

Dynamic Random_obj::random_set_seed;

Dynamic Random_obj::random_int;

Dynamic Random_obj::random_float;


Random_obj::Random_obj()
{
}

void Random_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Random);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_END_CLASS();
}

void Random_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
}

Dynamic Random_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { return _int_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { return _float_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setSeed") ) { return setSeed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Random_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"random_new") ) { outValue = random_new; return true;  }
		if (HX_FIELD_EQ(inName,"random_int") ) { outValue = random_int; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"random_float") ) { outValue = random_float; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"random_set_seed") ) { outValue = random_set_seed; return true;  }
	}
	return false;
}

Dynamic Random_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Random_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"random_new") ) { random_new=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"random_int") ) { random_int=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"random_float") ) { random_float=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"random_set_seed") ) { random_set_seed=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Random_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Random_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Random_obj::random_new,HX_HCSTRING("random_new","\xe4","\xf4","\x1a","\xc4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Random_obj::random_set_seed,HX_HCSTRING("random_set_seed","\x6a","\x97","\x5a","\x45")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Random_obj::random_int,HX_HCSTRING("random_int","\x73","\x31","\x17","\xc4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Random_obj::random_float,HX_HCSTRING("random_float","\x20","\x13","\xd3","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("setSeed","\x33","\xc6","\xd4","\x11"),
	HX_HCSTRING("int","\xef","\x0c","\x50","\x00"),
	HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Random_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Random_obj::random_new,"random_new");
	HX_MARK_MEMBER_NAME(Random_obj::random_set_seed,"random_set_seed");
	HX_MARK_MEMBER_NAME(Random_obj::random_int,"random_int");
	HX_MARK_MEMBER_NAME(Random_obj::random_float,"random_float");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Random_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Random_obj::random_new,"random_new");
	HX_VISIT_MEMBER_NAME(Random_obj::random_set_seed,"random_set_seed");
	HX_VISIT_MEMBER_NAME(Random_obj::random_int,"random_int");
	HX_VISIT_MEMBER_NAME(Random_obj::random_float,"random_float");
};

#endif

hx::Class Random_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("random_new","\xe4","\xf4","\x1a","\xc4"),
	HX_HCSTRING("random_set_seed","\x6a","\x97","\x5a","\x45"),
	HX_HCSTRING("random_int","\x73","\x31","\x17","\xc4"),
	HX_HCSTRING("random_float","\x20","\x13","\xd3","\xa1"),
	::String(null()) };

void Random_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.Random","\x0e","\x26","\x7b","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Random_obj::__GetStatic;
	__mClass->mSetStaticField = &Random_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
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

void Random_obj::__boot()
{
	random_new= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("random_new","\xe4","\xf4","\x1a","\xc4"),(int)0);
	random_set_seed= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("random_set_seed","\x6a","\x97","\x5a","\x45"),(int)2);
	random_int= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("random_int","\x73","\x31","\x17","\xc4"),(int)2);
	random_float= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("random_float","\x20","\x13","\xd3","\xa1"),(int)1);
}

} // end namespace cpp
