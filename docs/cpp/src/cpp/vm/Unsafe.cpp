#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Unsafe
#include <cpp/vm/Unsafe.h>
#endif
namespace cpp{
namespace vm{

Void Unsafe_obj::__construct()
{
	return null();
}

//Unsafe_obj::~Unsafe_obj() { }

Dynamic Unsafe_obj::__CreateEmpty() { return  new Unsafe_obj; }
hx::ObjectPtr< Unsafe_obj > Unsafe_obj::__new()
{  hx::ObjectPtr< Unsafe_obj > _result_ = new Unsafe_obj();
	_result_->__construct();
	return _result_;}

Dynamic Unsafe_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Unsafe_obj > _result_ = new Unsafe_obj();
	_result_->__construct();
	return _result_;}

Void Unsafe_obj::unsafeSet( Dynamic outForced,Dynamic inValue){
{
		HX_STACK_FRAME("cpp.vm.Unsafe","unsafeSet",0x584fa140,"cpp.vm.Unsafe.unsafeSet","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Unsafe.hx",7,0x74ca1ba5)
		HX_STACK_ARG(outForced,"outForced")
		HX_STACK_ARG(inValue,"inValue")
		HX_STACK_LINE(7)
		::__hxcpp_unsafe_set(outForced,inValue);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Unsafe_obj,unsafeSet,(void))


Unsafe_obj::Unsafe_obj()
{
}

bool Unsafe_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"unsafeSet") ) { outValue = unsafeSet_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Unsafe_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Unsafe_obj::__mClass,"__mClass");
};

#endif

hx::Class Unsafe_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("unsafeSet","\x1c","\x6b","\xa5","\x70"),
	::String(null()) };

void Unsafe_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.Unsafe","\x92","\x41","\x34","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Unsafe_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Unsafe_obj >;
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

} // end namespace cpp
} // end namespace vm
