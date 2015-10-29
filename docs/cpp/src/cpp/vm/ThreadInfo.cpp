#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_StackFrame
#include <cpp/vm/StackFrame.h>
#endif
#ifndef INCLUDED_cpp_vm_ThreadInfo
#include <cpp/vm/ThreadInfo.h>
#endif
namespace cpp{
namespace vm{

Void ThreadInfo_obj::__construct(int number,int status,hx::Null< int >  __o_breakpoint,::String criticalErrorDescription)
{
HX_STACK_FRAME("cpp.vm.ThreadInfo","new",0x0ce7c2b6,"cpp.vm.ThreadInfo.new","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",87,0x9c8417ca)
HX_STACK_THIS(this)
HX_STACK_ARG(number,"number")
HX_STACK_ARG(status,"status")
HX_STACK_ARG(__o_breakpoint,"breakpoint")
HX_STACK_ARG(criticalErrorDescription,"criticalErrorDescription")
int breakpoint = __o_breakpoint.Default(-1);
{
	HX_STACK_LINE(88)
	this->number = number;
	HX_STACK_LINE(89)
	this->status = status;
	HX_STACK_LINE(90)
	this->breakpoint = breakpoint;
	HX_STACK_LINE(91)
	this->criticalErrorDescription = criticalErrorDescription;
	HX_STACK_LINE(92)
	this->stack = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//ThreadInfo_obj::~ThreadInfo_obj() { }

Dynamic ThreadInfo_obj::__CreateEmpty() { return  new ThreadInfo_obj; }
hx::ObjectPtr< ThreadInfo_obj > ThreadInfo_obj::__new(int number,int status,hx::Null< int >  __o_breakpoint,::String criticalErrorDescription)
{  hx::ObjectPtr< ThreadInfo_obj > _result_ = new ThreadInfo_obj();
	_result_->__construct(number,status,__o_breakpoint,criticalErrorDescription);
	return _result_;}

Dynamic ThreadInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ThreadInfo_obj > _result_ = new ThreadInfo_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

int ThreadInfo_obj::STATUS_RUNNING;

int ThreadInfo_obj::STATUS_STOPPED_BREAK_IMMEDIATE;

int ThreadInfo_obj::STATUS_STOPPED_BREAKPOINT;

int ThreadInfo_obj::STATUS_STOPPED_UNCAUGHT_EXCEPTION;

int ThreadInfo_obj::STATUS_STOPPED_CRITICAL_ERROR;


ThreadInfo_obj::ThreadInfo_obj()
{
}

void ThreadInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThreadInfo);
	HX_MARK_MEMBER_NAME(number,"number");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(breakpoint,"breakpoint");
	HX_MARK_MEMBER_NAME(criticalErrorDescription,"criticalErrorDescription");
	HX_MARK_MEMBER_NAME(stack,"stack");
	HX_MARK_END_CLASS();
}

void ThreadInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(number,"number");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(breakpoint,"breakpoint");
	HX_VISIT_MEMBER_NAME(criticalErrorDescription,"criticalErrorDescription");
	HX_VISIT_MEMBER_NAME(stack,"stack");
}

Dynamic ThreadInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { return stack; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"number") ) { return number; }
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"breakpoint") ) { return breakpoint; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"criticalErrorDescription") ) { return criticalErrorDescription; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ThreadInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { stack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"number") ) { number=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"breakpoint") ) { breakpoint=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"criticalErrorDescription") ) { criticalErrorDescription=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ThreadInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("number","\xc9","\x86","\x7a","\xa1"));
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	outFields->push(HX_HCSTRING("breakpoint","\x31","\xfb","\x4a","\x6d"));
	outFields->push(HX_HCSTRING("criticalErrorDescription","\xd3","\xb0","\x3b","\xe4"));
	outFields->push(HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ThreadInfo_obj,number),HX_HCSTRING("number","\xc9","\x86","\x7a","\xa1")},
	{hx::fsInt,(int)offsetof(ThreadInfo_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{hx::fsInt,(int)offsetof(ThreadInfo_obj,breakpoint),HX_HCSTRING("breakpoint","\x31","\xfb","\x4a","\x6d")},
	{hx::fsString,(int)offsetof(ThreadInfo_obj,criticalErrorDescription),HX_HCSTRING("criticalErrorDescription","\xd3","\xb0","\x3b","\xe4")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ThreadInfo_obj,stack),HX_HCSTRING("stack","\x48","\x67","\x0b","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ThreadInfo_obj::STATUS_RUNNING,HX_HCSTRING("STATUS_RUNNING","\x92","\xb0","\xe5","\xdd")},
	{hx::fsInt,(void *) &ThreadInfo_obj::STATUS_STOPPED_BREAK_IMMEDIATE,HX_HCSTRING("STATUS_STOPPED_BREAK_IMMEDIATE","\x12","\x90","\x7e","\x4c")},
	{hx::fsInt,(void *) &ThreadInfo_obj::STATUS_STOPPED_BREAKPOINT,HX_HCSTRING("STATUS_STOPPED_BREAKPOINT","\xb0","\x2b","\xf5","\x38")},
	{hx::fsInt,(void *) &ThreadInfo_obj::STATUS_STOPPED_UNCAUGHT_EXCEPTION,HX_HCSTRING("STATUS_STOPPED_UNCAUGHT_EXCEPTION","\x44","\xf2","\xcc","\xc2")},
	{hx::fsInt,(void *) &ThreadInfo_obj::STATUS_STOPPED_CRITICAL_ERROR,HX_HCSTRING("STATUS_STOPPED_CRITICAL_ERROR","\xc7","\x10","\xc1","\xc7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("number","\xc9","\x86","\x7a","\xa1"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("breakpoint","\x31","\xfb","\x4a","\x6d"),
	HX_HCSTRING("criticalErrorDescription","\xd3","\xb0","\x3b","\xe4"),
	HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThreadInfo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ThreadInfo_obj::STATUS_RUNNING,"STATUS_RUNNING");
	HX_MARK_MEMBER_NAME(ThreadInfo_obj::STATUS_STOPPED_BREAK_IMMEDIATE,"STATUS_STOPPED_BREAK_IMMEDIATE");
	HX_MARK_MEMBER_NAME(ThreadInfo_obj::STATUS_STOPPED_BREAKPOINT,"STATUS_STOPPED_BREAKPOINT");
	HX_MARK_MEMBER_NAME(ThreadInfo_obj::STATUS_STOPPED_UNCAUGHT_EXCEPTION,"STATUS_STOPPED_UNCAUGHT_EXCEPTION");
	HX_MARK_MEMBER_NAME(ThreadInfo_obj::STATUS_STOPPED_CRITICAL_ERROR,"STATUS_STOPPED_CRITICAL_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThreadInfo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ThreadInfo_obj::STATUS_RUNNING,"STATUS_RUNNING");
	HX_VISIT_MEMBER_NAME(ThreadInfo_obj::STATUS_STOPPED_BREAK_IMMEDIATE,"STATUS_STOPPED_BREAK_IMMEDIATE");
	HX_VISIT_MEMBER_NAME(ThreadInfo_obj::STATUS_STOPPED_BREAKPOINT,"STATUS_STOPPED_BREAKPOINT");
	HX_VISIT_MEMBER_NAME(ThreadInfo_obj::STATUS_STOPPED_UNCAUGHT_EXCEPTION,"STATUS_STOPPED_UNCAUGHT_EXCEPTION");
	HX_VISIT_MEMBER_NAME(ThreadInfo_obj::STATUS_STOPPED_CRITICAL_ERROR,"STATUS_STOPPED_CRITICAL_ERROR");
};

#endif

hx::Class ThreadInfo_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("STATUS_RUNNING","\x92","\xb0","\xe5","\xdd"),
	HX_HCSTRING("STATUS_STOPPED_BREAK_IMMEDIATE","\x12","\x90","\x7e","\x4c"),
	HX_HCSTRING("STATUS_STOPPED_BREAKPOINT","\xb0","\x2b","\xf5","\x38"),
	HX_HCSTRING("STATUS_STOPPED_UNCAUGHT_EXCEPTION","\x44","\xf2","\xcc","\xc2"),
	HX_HCSTRING("STATUS_STOPPED_CRITICAL_ERROR","\xc7","\x10","\xc1","\xc7"),
	::String(null()) };

void ThreadInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.ThreadInfo","\xc4","\xef","\xfe","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ThreadInfo_obj >;
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

void ThreadInfo_obj::__boot()
{
	STATUS_RUNNING= (int)1;
	STATUS_STOPPED_BREAK_IMMEDIATE= (int)2;
	STATUS_STOPPED_BREAKPOINT= (int)3;
	STATUS_STOPPED_UNCAUGHT_EXCEPTION= (int)4;
	STATUS_STOPPED_CRITICAL_ERROR= (int)5;
}

} // end namespace cpp
} // end namespace vm
