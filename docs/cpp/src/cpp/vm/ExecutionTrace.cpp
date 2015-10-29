#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_ExecutionTrace
#include <cpp/vm/ExecutionTrace.h>
#endif
namespace cpp{
namespace vm{

Void ExecutionTrace_obj::__construct()
{
	return null();
}

//ExecutionTrace_obj::~ExecutionTrace_obj() { }

Dynamic ExecutionTrace_obj::__CreateEmpty() { return  new ExecutionTrace_obj; }
hx::ObjectPtr< ExecutionTrace_obj > ExecutionTrace_obj::__new()
{  hx::ObjectPtr< ExecutionTrace_obj > _result_ = new ExecutionTrace_obj();
	_result_->__construct();
	return _result_;}

Dynamic ExecutionTrace_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExecutionTrace_obj > _result_ = new ExecutionTrace_obj();
	_result_->__construct();
	return _result_;}

Void ExecutionTrace_obj::traceOff( ){
{
		HX_STACK_FRAME("cpp.vm.ExecutionTrace","traceOff",0x0e75f7bf,"cpp.vm.ExecutionTrace.traceOff","C:\\HaxeToolkit\\haxe\\std/cpp/vm/ExecutionTrace.hx",7,0xb05a6b5e)
		HX_STACK_LINE(7)
		__hxcpp_execution_trace((int)0);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ExecutionTrace_obj,traceOff,(void))

Void ExecutionTrace_obj::traceFunctions( ){
{
		HX_STACK_FRAME("cpp.vm.ExecutionTrace","traceFunctions",0xf1fc8aab,"cpp.vm.ExecutionTrace.traceFunctions","C:\\HaxeToolkit\\haxe\\std/cpp/vm/ExecutionTrace.hx",11,0xb05a6b5e)
		HX_STACK_LINE(11)
		__hxcpp_execution_trace((int)1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ExecutionTrace_obj,traceFunctions,(void))

Void ExecutionTrace_obj::traceLines( ){
{
		HX_STACK_FRAME("cpp.vm.ExecutionTrace","traceLines",0x5980f64f,"cpp.vm.ExecutionTrace.traceLines","C:\\HaxeToolkit\\haxe\\std/cpp/vm/ExecutionTrace.hx",15,0xb05a6b5e)
		HX_STACK_LINE(15)
		__hxcpp_execution_trace((int)2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ExecutionTrace_obj,traceLines,(void))


ExecutionTrace_obj::ExecutionTrace_obj()
{
}

bool ExecutionTrace_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"traceOff") ) { outValue = traceOff_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"traceLines") ) { outValue = traceLines_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"traceFunctions") ) { outValue = traceFunctions_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExecutionTrace_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExecutionTrace_obj::__mClass,"__mClass");
};

#endif

hx::Class ExecutionTrace_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("traceOff","\xea","\xdd","\xb2","\x7b"),
	HX_HCSTRING("traceFunctions","\x16","\xe3","\x04","\x39"),
	HX_HCSTRING("traceLines","\x3a","\xfd","\x63","\x3c"),
	::String(null()) };

void ExecutionTrace_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.ExecutionTrace","\x39","\xd5","\x0f","\x01");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ExecutionTrace_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ExecutionTrace_obj >;
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
