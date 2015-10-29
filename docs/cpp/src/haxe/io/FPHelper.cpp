#include <hxcpp.h>

#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif
namespace haxe{
namespace io{

Void FPHelper_obj::__construct()
{
	return null();
}

//FPHelper_obj::~FPHelper_obj() { }

Dynamic FPHelper_obj::__CreateEmpty() { return  new FPHelper_obj; }
hx::ObjectPtr< FPHelper_obj > FPHelper_obj::__new()
{  hx::ObjectPtr< FPHelper_obj > _result_ = new FPHelper_obj();
	_result_->__construct();
	return _result_;}

Dynamic FPHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FPHelper_obj > _result_ = new FPHelper_obj();
	_result_->__construct();
	return _result_;}

cpp::Int64Struct FPHelper_obj::i64tmp;

Float FPHelper_obj::LN2;

Float FPHelper_obj::i32ToFloat( int i){
	HX_STACK_FRAME("haxe.io.FPHelper","i32ToFloat",0x7999b6cf,"haxe.io.FPHelper.i32ToFloat","C:\\HaxeToolkit\\haxe\\std/haxe/io/FPHelper.hx",62,0x66948f4d)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(77)
	Float tmp = ::__hxcpp_reinterpret_le_int32_as_float32(i);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FPHelper_obj,i32ToFloat,return )

int FPHelper_obj::floatToI32( Float f){
	HX_STACK_FRAME("haxe.io.FPHelper","floatToI32",0xff5a7c67,"haxe.io.FPHelper.floatToI32","C:\\HaxeToolkit\\haxe\\std/haxe/io/FPHelper.hx",109,0x66948f4d)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(118)
	int tmp = ::__hxcpp_reinterpret_float32_as_le_int32(f);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FPHelper_obj,floatToI32,return )

Float FPHelper_obj::i64ToDouble( int low,int high){
	HX_STACK_FRAME("haxe.io.FPHelper","i64ToDouble",0xc51d801d,"haxe.io.FPHelper.i64ToDouble","C:\\HaxeToolkit\\haxe\\std/haxe/io/FPHelper.hx",149,0x66948f4d)
	HX_STACK_ARG(low,"low")
	HX_STACK_ARG(high,"high")
	HX_STACK_LINE(168)
	Float tmp = ::__hxcpp_reinterpret_le_int32s_as_float64(low,high);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FPHelper_obj,i64ToDouble,return )

cpp::Int64Struct FPHelper_obj::doubleToI64( Float v){
	HX_STACK_FRAME("haxe.io.FPHelper","doubleToI64",0xe6926a85,"haxe.io.FPHelper.doubleToI64","C:\\HaxeToolkit\\haxe\\std/haxe/io/FPHelper.hx",208,0x66948f4d)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(235)
	cpp::Int64Struct tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(235)
		int tmp1 = ::__hxcpp_reinterpret_float64_as_le_int32_high(v);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(235)
		int high = tmp1;		HX_STACK_VAR(high,"high");
		HX_STACK_LINE(236)
		int tmp2 = ::__hxcpp_reinterpret_float64_as_le_int32_low(v);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		int low = tmp2;		HX_STACK_VAR(low,"low");
		HX_STACK_LINE(235)
		tmp = cpp::Int64Struct(( ( (cpp::Int64)((unsigned int)high) ) << 32 ) | ((unsigned int)low));
	}
	HX_STACK_LINE(235)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FPHelper_obj,doubleToI64,return )


FPHelper_obj::FPHelper_obj()
{
}

bool FPHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"i64tmp") ) { outValue = i64tmp; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"i32ToFloat") ) { outValue = i32ToFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"floatToI32") ) { outValue = floatToI32_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"i64ToDouble") ) { outValue = i64ToDouble_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"doubleToI64") ) { outValue = doubleToI64_dyn(); return true;  }
	}
	return false;
}

bool FPHelper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"i64tmp") ) { i64tmp=ioValue.Cast< cpp::Int64Struct >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*cpp::Int64Struct*/ ,(void *) &FPHelper_obj::i64tmp,HX_HCSTRING("i64tmp","\x50","\xb3","\xd3","\x35")},
	{hx::fsFloat,(void *) &FPHelper_obj::LN2,HX_HCSTRING("LN2","\x70","\xef","\x39","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FPHelper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FPHelper_obj::i64tmp,"i64tmp");
	HX_MARK_MEMBER_NAME(FPHelper_obj::LN2,"LN2");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FPHelper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FPHelper_obj::i64tmp,"i64tmp");
	HX_VISIT_MEMBER_NAME(FPHelper_obj::LN2,"LN2");
};

#endif

hx::Class FPHelper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("i64tmp","\x50","\xb3","\xd3","\x35"),
	HX_HCSTRING("LN2","\x70","\xef","\x39","\x00"),
	HX_HCSTRING("i32ToFloat","\xb9","\x99","\xe9","\xac"),
	HX_HCSTRING("floatToI32","\x51","\x5f","\xaa","\x32"),
	HX_HCSTRING("i64ToDouble","\xf3","\x29","\xb4","\x77"),
	HX_HCSTRING("doubleToI64","\x5b","\x14","\x29","\x99"),
	::String(null()) };

void FPHelper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.FPHelper","\x98","\x9f","\xc6","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FPHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &FPHelper_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FPHelper_obj >;
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

void FPHelper_obj::__boot()
{
	i64tmp= ::haxe::_Int64::Int64_Impl__obj::ofInt((int)0);
	LN2= ((Float)0.6931471805599453);
}

} // end namespace haxe
} // end namespace io
