#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Profiler
#include <cpp/vm/Profiler.h>
#endif
namespace cpp{
namespace vm{

Void Profiler_obj::__construct()
{
	return null();
}

//Profiler_obj::~Profiler_obj() { }

Dynamic Profiler_obj::__CreateEmpty() { return  new Profiler_obj; }
hx::ObjectPtr< Profiler_obj > Profiler_obj::__new()
{  hx::ObjectPtr< Profiler_obj > _result_ = new Profiler_obj();
	_result_->__construct();
	return _result_;}

Dynamic Profiler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Profiler_obj > _result_ = new Profiler_obj();
	_result_->__construct();
	return _result_;}

Void Profiler_obj::start( ::String inDumpFile){
{
		HX_STACK_FRAME("cpp.vm.Profiler","start",0x10ea16c9,"cpp.vm.Profiler.start","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Profiler.hx",29,0x19fa95c2)
		HX_STACK_ARG(inDumpFile,"inDumpFile")
		HX_STACK_LINE(29)
		::__hxcpp_start_profiler(inDumpFile);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Profiler_obj,start,(void))

Void Profiler_obj::stop( ){
{
		HX_STACK_FRAME("cpp.vm.Profiler","stop",0x99e7d77b,"cpp.vm.Profiler.stop","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Profiler.hx",34,0x19fa95c2)
		HX_STACK_LINE(34)
		::__hxcpp_stop_profiler();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Profiler_obj,stop,(void))


Profiler_obj::Profiler_obj()
{
}

bool Profiler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { outValue = stop_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Profiler_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Profiler_obj::__mClass,"__mClass");
};

#endif

hx::Class Profiler_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	::String(null()) };

void Profiler_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.Profiler","\x95","\xab","\xe3","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Profiler_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Profiler_obj >;
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
