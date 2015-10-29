#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Gc
#include <cpp/vm/Gc.h>
#endif
namespace cpp{
namespace vm{

Void Gc_obj::__construct()
{
	return null();
}

//Gc_obj::~Gc_obj() { }

Dynamic Gc_obj::__CreateEmpty() { return  new Gc_obj; }
hx::ObjectPtr< Gc_obj > Gc_obj::__new()
{  hx::ObjectPtr< Gc_obj > _result_ = new Gc_obj();
	_result_->__construct();
	return _result_;}

Dynamic Gc_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gc_obj > _result_ = new Gc_obj();
	_result_->__construct();
	return _result_;}

int Gc_obj::MEM_INFO_USAGE;

int Gc_obj::MEM_INFO_RESERVED;

int Gc_obj::MEM_INFO_CURRENT;

int Gc_obj::MEM_INFO_LARGE;

Void Gc_obj::enable( bool inEnable){
{
		HX_STACK_FRAME("cpp.vm.Gc","enable",0xb54bd4a9,"cpp.vm.Gc.enable","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",33,0xeed1f8ef)
		HX_STACK_ARG(inEnable,"inEnable")
		HX_STACK_LINE(33)
		::__hxcpp_enable(inEnable);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gc_obj,enable,(void))

Void Gc_obj::run( bool major){
{
		HX_STACK_FRAME("cpp.vm.Gc","run",0x3d3e0d65,"cpp.vm.Gc.run","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",38,0xeed1f8ef)
		HX_STACK_ARG(major,"major")
		HX_STACK_LINE(38)
		::__hxcpp_collect(major);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gc_obj,run,(void))

Void Gc_obj::compact( ){
{
		HX_STACK_FRAME("cpp.vm.Gc","compact",0xf24646bd,"cpp.vm.Gc.compact","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",43,0xeed1f8ef)
		HX_STACK_LINE(43)
		::__hxcpp_gc_compact();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,compact,(void))

int Gc_obj::memInfo( int inWhatInfo){
	HX_STACK_FRAME("cpp.vm.Gc","memInfo",0x78cddc3d,"cpp.vm.Gc.memInfo","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",54,0xeed1f8ef)
	HX_STACK_ARG(inWhatInfo,"inWhatInfo")
	HX_STACK_LINE(55)
	int tmp = ::__hxcpp_gc_mem_info(inWhatInfo);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gc_obj,memInfo,return )

int Gc_obj::memUsage( ){
	HX_STACK_FRAME("cpp.vm.Gc","memUsage",0x276c0e72,"cpp.vm.Gc.memUsage","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",59,0xeed1f8ef)
	HX_STACK_LINE(60)
	int tmp = ::__hxcpp_gc_mem_info((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,memUsage,return )

int Gc_obj::trace( ::hx::Class sought,hx::Null< bool >  __o_printInstances){
bool printInstances = __o_printInstances.Default(true);
	HX_STACK_FRAME("cpp.vm.Gc","trace",0xb7afef1f,"cpp.vm.Gc.trace","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",64,0xeed1f8ef)
	HX_STACK_ARG(sought,"sought")
	HX_STACK_ARG(printInstances,"printInstances")
{
		HX_STACK_LINE(65)
		int tmp = ::__hxcpp_gc_trace(sought,printInstances);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Gc_obj,trace,return )

bool Gc_obj::versionCheck( ){
	HX_STACK_FRAME("cpp.vm.Gc","versionCheck",0xded1b136,"cpp.vm.Gc.versionCheck","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",68,0xeed1f8ef)
	HX_STACK_LINE(68)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,versionCheck,return )

Void Gc_obj::doNotKill( Dynamic inObject){
{
		HX_STACK_FRAME("cpp.vm.Gc","doNotKill",0x09a7c7a0,"cpp.vm.Gc.doNotKill","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",72,0xeed1f8ef)
		HX_STACK_ARG(inObject,"inObject")
		HX_STACK_LINE(72)
		::__hxcpp_gc_do_not_kill(inObject);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gc_obj,doNotKill,(void))

Dynamic Gc_obj::getNextZombie( ){
	HX_STACK_FRAME("cpp.vm.Gc","getNextZombie",0x2928fbc9,"cpp.vm.Gc.getNextZombie","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",76,0xeed1f8ef)
	HX_STACK_LINE(77)
	Dynamic tmp = ::__hxcpp_get_next_zombie();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,getNextZombie,return )

Void Gc_obj::safePoint( ){
{
		HX_STACK_FRAME("cpp.vm.Gc","safePoint",0x88db055d,"cpp.vm.Gc.safePoint","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",82,0xeed1f8ef)
		HX_STACK_LINE(82)
		::__hxcpp_gc_safe_point();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,safePoint,(void))

Void Gc_obj::enterGCFreeZone( ){
{
		HX_STACK_FRAME("cpp.vm.Gc","enterGCFreeZone",0xf7a54766,"cpp.vm.Gc.enterGCFreeZone","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",87,0xeed1f8ef)
		HX_STACK_LINE(87)
		::__hxcpp_enter_gc_free_zone();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,enterGCFreeZone,(void))

Void Gc_obj::exitGCFreeZone( ){
{
		HX_STACK_FRAME("cpp.vm.Gc","exitGCFreeZone",0x9a9eabf8,"cpp.vm.Gc.exitGCFreeZone","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",92,0xeed1f8ef)
		HX_STACK_LINE(92)
		::__hxcpp_exit_gc_free_zone();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,exitGCFreeZone,(void))

Void Gc_obj::setFinalizer( Dynamic inObject,::cpp::Function< Void ( Dynamic ) > inFinalizer){
{
		HX_STACK_FRAME("cpp.vm.Gc","setFinalizer",0xc5a6abb8,"cpp.vm.Gc.setFinalizer","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",98,0xeed1f8ef)
		HX_STACK_ARG(inObject,"inObject")
		HX_STACK_ARG(inFinalizer,"inFinalizer")
		HX_STACK_LINE(98)
		::__hxcpp_set_finalizer(inObject,inFinalizer);
	}
return null();
}



Gc_obj::Gc_obj()
{
}

bool Gc_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { outValue = trace_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { outValue = enable_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compact") ) { outValue = compact_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"memInfo") ) { outValue = memInfo_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"memUsage") ) { outValue = memUsage_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"doNotKill") ) { outValue = doNotKill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"safePoint") ) { outValue = safePoint_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"versionCheck") ) { outValue = versionCheck_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getNextZombie") ) { outValue = getNextZombie_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exitGCFreeZone") ) { outValue = exitGCFreeZone_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"enterGCFreeZone") ) { outValue = enterGCFreeZone_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Gc_obj::MEM_INFO_USAGE,HX_HCSTRING("MEM_INFO_USAGE","\x7a","\x90","\xdb","\xab")},
	{hx::fsInt,(void *) &Gc_obj::MEM_INFO_RESERVED,HX_HCSTRING("MEM_INFO_RESERVED","\xcf","\x3c","\x17","\x91")},
	{hx::fsInt,(void *) &Gc_obj::MEM_INFO_CURRENT,HX_HCSTRING("MEM_INFO_CURRENT","\xd2","\xfb","\x85","\xb7")},
	{hx::fsInt,(void *) &Gc_obj::MEM_INFO_LARGE,HX_HCSTRING("MEM_INFO_LARGE","\x14","\x67","\x67","\x71")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gc_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Gc_obj::MEM_INFO_USAGE,"MEM_INFO_USAGE");
	HX_MARK_MEMBER_NAME(Gc_obj::MEM_INFO_RESERVED,"MEM_INFO_RESERVED");
	HX_MARK_MEMBER_NAME(Gc_obj::MEM_INFO_CURRENT,"MEM_INFO_CURRENT");
	HX_MARK_MEMBER_NAME(Gc_obj::MEM_INFO_LARGE,"MEM_INFO_LARGE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gc_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Gc_obj::MEM_INFO_USAGE,"MEM_INFO_USAGE");
	HX_VISIT_MEMBER_NAME(Gc_obj::MEM_INFO_RESERVED,"MEM_INFO_RESERVED");
	HX_VISIT_MEMBER_NAME(Gc_obj::MEM_INFO_CURRENT,"MEM_INFO_CURRENT");
	HX_VISIT_MEMBER_NAME(Gc_obj::MEM_INFO_LARGE,"MEM_INFO_LARGE");
};

#endif

hx::Class Gc_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MEM_INFO_USAGE","\x7a","\x90","\xdb","\xab"),
	HX_HCSTRING("MEM_INFO_RESERVED","\xcf","\x3c","\x17","\x91"),
	HX_HCSTRING("MEM_INFO_CURRENT","\xd2","\xfb","\x85","\xb7"),
	HX_HCSTRING("MEM_INFO_LARGE","\x14","\x67","\x67","\x71"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("compact","\xa3","\x0b","\x69","\x83"),
	HX_HCSTRING("memInfo","\x23","\xa1","\xf0","\x09"),
	HX_HCSTRING("memUsage","\xcc","\x92","\xb5","\x94"),
	HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16"),
	HX_HCSTRING("versionCheck","\x90","\x6a","\x3d","\xdb"),
	HX_HCSTRING("doNotKill","\x06","\x12","\xb2","\x3c"),
	HX_HCSTRING("getNextZombie","\x2f","\x71","\xff","\x0a"),
	HX_HCSTRING("safePoint","\xc3","\x4f","\xe5","\xbb"),
	HX_HCSTRING("enterGCFreeZone","\x4c","\x62","\x10","\xd4"),
	HX_HCSTRING("exitGCFreeZone","\xd2","\xef","\x6e","\x54"),
	::String(null()) };

void Gc_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.Gc","\x88","\xf1","\xb3","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gc_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Gc_obj >;
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

void Gc_obj::__boot()
{
	MEM_INFO_USAGE= (int)0;
	MEM_INFO_RESERVED= (int)1;
	MEM_INFO_CURRENT= (int)2;
	MEM_INFO_LARGE= (int)3;
}

} // end namespace cpp
} // end namespace vm
