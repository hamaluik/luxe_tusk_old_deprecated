#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_cppia_Host
#include <cpp/cppia/Host.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
namespace cpp{
namespace cppia{

Void Host_obj::__construct()
{
	return null();
}

//Host_obj::~Host_obj() { }

Dynamic Host_obj::__CreateEmpty() { return  new Host_obj; }
hx::ObjectPtr< Host_obj > Host_obj::__new()
{  hx::ObjectPtr< Host_obj > _result_ = new Host_obj();
	_result_->__construct();
	return _result_;}

Dynamic Host_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Host_obj > _result_ = new Host_obj();
	_result_->__construct();
	return _result_;}

Void Host_obj::run( ::String source){
{
		HX_STACK_FRAME("cpp.cppia.Host","run",0x83ad6d63,"cpp.cppia.Host.run","C:\\HaxeToolkit\\haxe\\std/cpp/cppia/Host.hx",9,0xf1f7a57d)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(9)
		::__scriptable_load_cppia(source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Host_obj,run,(void))

Void Host_obj::main( ){
{
		HX_STACK_FRAME("cpp.cppia.Host","main",0xb0b50721,"cpp.cppia.Host.main","C:\\HaxeToolkit\\haxe\\std/cpp/cppia/Host.hx",13,0xf1f7a57d)
		HX_STACK_LINE(14)
		::String tmp = ::Sys_obj::args()->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14)
		::String script = tmp;		HX_STACK_VAR(script,"script");
		HX_STACK_LINE(18)
		bool tmp1 = (script == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		if ((tmp1)){
			HX_STACK_LINE(20)
			::Sys_obj::println(HX_HCSTRING("Usage : Cppia scriptname","\xa0","\x8c","\xf2","\xa8"));
		}
		else{
			HX_STACK_LINE(24)
			::String tmp2 = script;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(24)
			::String tmp3 = ::sys::io::File_obj::getContent(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(24)
			::String source = tmp3;		HX_STACK_VAR(source,"source");
			HX_STACK_LINE(25)
			::String tmp4 = source;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(25)
			::cpp::cppia::Host_obj::run(tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Host_obj,main,(void))


Host_obj::Host_obj()
{
}

bool Host_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Host_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Host_obj::__mClass,"__mClass");
};

#endif

hx::Class Host_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void Host_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.cppia.Host","\x86","\xfa","\xb7","\xe8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Host_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Host_obj >;
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
} // end namespace cppia
