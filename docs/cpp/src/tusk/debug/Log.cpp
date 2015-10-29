#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_tusk_debug_Log
#include <tusk/debug/Log.h>
#endif
#ifndef INCLUDED_tusk_debug_LogFunctions
#include <tusk/debug/LogFunctions.h>
#endif
namespace tusk{
namespace debug{

Void Log_obj::__construct()
{
	return null();
}

//Log_obj::~Log_obj() { }

Dynamic Log_obj::__CreateEmpty() { return  new Log_obj; }
hx::ObjectPtr< Log_obj > Log_obj::__new()
{  hx::ObjectPtr< Log_obj > _result_ = new Log_obj();
	_result_->__construct();
	return _result_;}

Dynamic Log_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Log_obj > _result_ = new Log_obj();
	_result_->__construct();
	return _result_;}

Void Log_obj::log( Dynamic v,::tusk::debug::LogFunctions func,Dynamic pos){
{
		HX_STACK_FRAME("tusk.debug.Log","log",0x9dbd838a,"tusk.debug.Log.log","tusk/debug/Log.hx",67,0x3b3c630c)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(83)
		Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &pos){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tusk/debug/Log.hx",83,0x3b3c630c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62") , HX_HCSTRING("Log.hx","\xda","\x0c","\xd2","\x90"),false);
					__result->Add(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76") , (int)83,false);
					__result->Add(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc") , HX_HCSTRING("tusk.debug.Log","\x74","\x14","\xee","\x21"),false);
					__result->Add(HX_HCSTRING("methodName","\xcc","\x19","\x0f","\x12") , HX_HCSTRING("log","\x84","\x54","\x52","\x00"),false);
					__result->Add(HX_HCSTRING("customParams","\xd7","\x51","\x18","\xed") , cpp::ArrayBase_obj::__new().Add(pos),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(83)
		Dynamic tmp1 = _Function_1_1::Block(pos);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Log_obj,log,(void))

Dynamic Log_obj::fatal;

Dynamic Log_obj::error;

Dynamic Log_obj::warning;

Dynamic Log_obj::info;

Dynamic Log_obj::debug;

Dynamic Log_obj::trace;


Log_obj::Log_obj()
{
}

bool Log_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { outValue = info; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fatal") ) { outValue = fatal; return true;  }
		if (HX_FIELD_EQ(inName,"error") ) { outValue = error; return true;  }
		if (HX_FIELD_EQ(inName,"debug") ) { outValue = debug; return true;  }
		if (HX_FIELD_EQ(inName,"trace") ) { outValue = trace; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"warning") ) { outValue = warning; return true;  }
	}
	return false;
}

bool Log_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fatal") ) { fatal=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"error") ) { error=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"debug") ) { debug=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"trace") ) { trace=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"warning") ) { warning=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Log_obj::fatal,HX_HCSTRING("fatal","\x04","\x38","\x55","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Log_obj::error,HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Log_obj::warning,HX_HCSTRING("warning","\x5c","\xda","\xcb","\x09")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Log_obj::info,HX_HCSTRING("info","\x6e","\x38","\xbb","\x45")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Log_obj::debug,HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Log_obj::trace,HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Log_obj::fatal,"fatal");
	HX_MARK_MEMBER_NAME(Log_obj::error,"error");
	HX_MARK_MEMBER_NAME(Log_obj::warning,"warning");
	HX_MARK_MEMBER_NAME(Log_obj::info,"info");
	HX_MARK_MEMBER_NAME(Log_obj::debug,"debug");
	HX_MARK_MEMBER_NAME(Log_obj::trace,"trace");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Log_obj::fatal,"fatal");
	HX_VISIT_MEMBER_NAME(Log_obj::error,"error");
	HX_VISIT_MEMBER_NAME(Log_obj::warning,"warning");
	HX_VISIT_MEMBER_NAME(Log_obj::info,"info");
	HX_VISIT_MEMBER_NAME(Log_obj::debug,"debug");
	HX_VISIT_MEMBER_NAME(Log_obj::trace,"trace");
};

#endif

hx::Class Log_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("fatal","\x04","\x38","\x55","\xfb"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("warning","\x5c","\xda","\xcb","\x09"),
	HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"),
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16"),
	::String(null()) };

void Log_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.debug.Log","\x74","\x14","\xee","\x21");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Log_obj::__GetStatic;
	__mClass->mSetStaticField = &Log_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Log_obj >;
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
} // end namespace debug
