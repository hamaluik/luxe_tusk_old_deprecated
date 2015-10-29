#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Debugger
#include <cpp/vm/Debugger.h>
#endif
#ifndef INCLUDED_cpp_vm_Parameter
#include <cpp/vm/Parameter.h>
#endif
#ifndef INCLUDED_cpp_vm_StackFrame
#include <cpp/vm/StackFrame.h>
#endif
#ifndef INCLUDED_cpp_vm_ThreadInfo
#include <cpp/vm/ThreadInfo.h>
#endif
namespace cpp{
namespace vm{

Void Debugger_obj::__construct()
{
	return null();
}

//Debugger_obj::~Debugger_obj() { }

Dynamic Debugger_obj::__CreateEmpty() { return  new Debugger_obj; }
hx::ObjectPtr< Debugger_obj > Debugger_obj::__new()
{  hx::ObjectPtr< Debugger_obj > _result_ = new Debugger_obj();
	_result_->__construct();
	return _result_;}

Dynamic Debugger_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debugger_obj > _result_ = new Debugger_obj();
	_result_->__construct();
	return _result_;}

void Debugger_obj::__init__() {
HX_STACK_FRAME("cpp.vm.Debugger","__init__",0xac462d51,"cpp.vm.Debugger.__init__","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",373,0x9c8417ca)
{

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 2; }
	Dynamic run(::String name,Dynamic value){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",377,0x9c8417ca)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(value,"value")
		{
			HX_STACK_LINE(377)
			return ::cpp::vm::Parameter_obj::__new(name,value);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(374)
	::__hxcpp_dbg_setNewParameterFunction( Dynamic(new _Function_1_1()));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	int __ArgCount() const { return 4; }
	::cpp::vm::StackFrame run(::String fileName,int lineNumber,::String className,::String functionName){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",386,0x9c8417ca)
		HX_STACK_ARG(fileName,"fileName")
		HX_STACK_ARG(lineNumber,"lineNumber")
		HX_STACK_ARG(className,"className")
		HX_STACK_ARG(functionName,"functionName")
		{
			HX_STACK_LINE(386)
			return ::cpp::vm::StackFrame_obj::__new(fileName,lineNumber,className,functionName);
		}
		return null();
	}
	HX_END_LOCAL_FUNC4(return)

	HX_STACK_LINE(381)
	::__hxcpp_dbg_setNewStackFrameFunction( Dynamic(new _Function_1_2()));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	int __ArgCount() const { return 4; }
	Dynamic run(int number,int status,int breakpoint,::String criticalErrorDescription){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",395,0x9c8417ca)
		HX_STACK_ARG(number,"number")
		HX_STACK_ARG(status,"status")
		HX_STACK_ARG(breakpoint,"breakpoint")
		HX_STACK_ARG(criticalErrorDescription,"criticalErrorDescription")
		{
			HX_STACK_LINE(395)
			return ::cpp::vm::ThreadInfo_obj::__new(number,status,breakpoint,criticalErrorDescription);
		}
		return null();
	}
	HX_END_LOCAL_FUNC4(return)

	HX_STACK_LINE(391)
	::__hxcpp_dbg_setNewThreadInfoFunction( Dynamic(new _Function_1_3()));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
	int __ArgCount() const { return 2; }
	Void run(Dynamic inStackFrame,Dynamic inParameter){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",402,0x9c8417ca)
		HX_STACK_ARG(inStackFrame,"inStackFrame")
		HX_STACK_ARG(inParameter,"inParameter")
		{
			HX_STACK_LINE(403)
			::cpp::vm::StackFrame stackFrame = ((::cpp::vm::StackFrame)(inStackFrame));		HX_STACK_VAR(stackFrame,"stackFrame");
			HX_STACK_LINE(404)
			::cpp::vm::Parameter parameter = ((::cpp::vm::Parameter)(inParameter));		HX_STACK_VAR(parameter,"parameter");
			HX_STACK_LINE(405)
			stackFrame->__Field(HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(parameter);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(400)
	::__hxcpp_dbg_setAddParameterToStackFrameFunction( Dynamic(new _Function_1_4()));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_5)
	int __ArgCount() const { return 2; }
	Void run(Dynamic inThreadInfo,Dynamic inStackFrame){
		HX_STACK_FRAME("*","_Function_1_5",0x5200ed3b,"*._Function_1_5","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",411,0x9c8417ca)
		HX_STACK_ARG(inThreadInfo,"inThreadInfo")
		HX_STACK_ARG(inStackFrame,"inStackFrame")
		{
			HX_STACK_LINE(412)
			::cpp::vm::ThreadInfo threadInfo = ((::cpp::vm::ThreadInfo)(inThreadInfo));		HX_STACK_VAR(threadInfo,"threadInfo");
			HX_STACK_LINE(413)
			::cpp::vm::StackFrame stackFrame = ((::cpp::vm::StackFrame)(inStackFrame));		HX_STACK_VAR(stackFrame,"stackFrame");
			HX_STACK_LINE(414)
			threadInfo->__Field(HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(stackFrame);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(409)
	::__hxcpp_dbg_setAddStackFrameToThreadInfoFunction( Dynamic(new _Function_1_5()));
}
}

int Debugger_obj::THREAD_CREATED;

int Debugger_obj::THREAD_TERMINATED;

int Debugger_obj::THREAD_STARTED;

int Debugger_obj::THREAD_STOPPED;

int Debugger_obj::STEP_INTO;

int Debugger_obj::STEP_OVER;

int Debugger_obj::STEP_OUT;

::String Debugger_obj::NONEXISTENT_VALUE;

::String Debugger_obj::THREAD_NOT_STOPPED;

Void Debugger_obj::setEventNotificationHandler( Dynamic handler){
{
		HX_STACK_FRAME("cpp.vm.Debugger","setEventNotificationHandler",0x31980e86,"cpp.vm.Debugger.setEventNotificationHandler","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",157,0x9c8417ca)
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(157)
		::__hxcpp_dbg_setEventNotificationHandler(handler);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debugger_obj,setEventNotificationHandler,(void))

Void Debugger_obj::enableCurrentThreadDebugging( bool enabled){
{
		HX_STACK_FRAME("cpp.vm.Debugger","enableCurrentThreadDebugging",0x0170a1af,"cpp.vm.Debugger.enableCurrentThreadDebugging","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",168,0x9c8417ca)
		HX_STACK_ARG(enabled,"enabled")
		HX_STACK_LINE(168)
		::__hxcpp_dbg_enableCurrentThreadDebugging(enabled);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debugger_obj,enableCurrentThreadDebugging,(void))

int Debugger_obj::getCurrentThreadNumber( ){
	HX_STACK_FRAME("cpp.vm.Debugger","getCurrentThreadNumber",0x7a24dfd7,"cpp.vm.Debugger.getCurrentThreadNumber","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",177,0x9c8417ca)
	HX_STACK_LINE(178)
	int tmp = ::__hxcpp_dbg_getCurrentThreadNumber();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debugger_obj,getCurrentThreadNumber,return )

Array< ::String > Debugger_obj::getFiles( ){
	HX_STACK_FRAME("cpp.vm.Debugger","getFiles",0xcd3a3e02,"cpp.vm.Debugger.getFiles","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",190,0x9c8417ca)
	HX_STACK_LINE(190)
	return ::__hxcpp_dbg_getFiles();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debugger_obj,getFiles,return )

Array< ::String > Debugger_obj::getFilesFullPath( ){
	HX_STACK_FRAME("cpp.vm.Debugger","getFilesFullPath",0xeca23af6,"cpp.vm.Debugger.getFilesFullPath","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",205,0x9c8417ca)
	HX_STACK_LINE(205)
	return ::__hxcpp_dbg_getFilesFullPath();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debugger_obj,getFilesFullPath,return )

Array< ::String > Debugger_obj::getClasses( ){
	HX_STACK_FRAME("cpp.vm.Debugger","getClasses",0xa8f1e6f1,"cpp.vm.Debugger.getClasses","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",218,0x9c8417ca)
	HX_STACK_LINE(218)
	return ::__hxcpp_dbg_getClasses();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debugger_obj,getClasses,return )

Array< ::Dynamic > Debugger_obj::getThreadInfos( ){
	HX_STACK_FRAME("cpp.vm.Debugger","getThreadInfos",0x98a0dae6,"cpp.vm.Debugger.getThreadInfos","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",227,0x9c8417ca)
	HX_STACK_LINE(227)
	return ::__hxcpp_dbg_getThreadInfos();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debugger_obj,getThreadInfos,return )

::cpp::vm::ThreadInfo Debugger_obj::getThreadInfo( int threadNumber,bool unsafe){
	HX_STACK_FRAME("cpp.vm.Debugger","getThreadInfo",0x882574ed,"cpp.vm.Debugger.getThreadInfo","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",237,0x9c8417ca)
	HX_STACK_ARG(threadNumber,"threadNumber")
	HX_STACK_ARG(unsafe,"unsafe")
	HX_STACK_LINE(238)
	::cpp::vm::ThreadInfo tmp = ::__hxcpp_dbg_getThreadInfo(threadNumber,unsafe);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debugger_obj,getThreadInfo,return )

int Debugger_obj::addFileLineBreakpoint( ::String file,int line){
	HX_STACK_FRAME("cpp.vm.Debugger","addFileLineBreakpoint",0x046089c1,"cpp.vm.Debugger.addFileLineBreakpoint","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",248,0x9c8417ca)
	HX_STACK_ARG(file,"file")
	HX_STACK_ARG(line,"line")
	HX_STACK_LINE(249)
	int tmp = ::__hxcpp_dbg_addFileLineBreakpoint(file,line);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debugger_obj,addFileLineBreakpoint,return )

int Debugger_obj::addClassFunctionBreakpoint( ::String className,::String functionName){
	HX_STACK_FRAME("cpp.vm.Debugger","addClassFunctionBreakpoint",0xcc6100e1,"cpp.vm.Debugger.addClassFunctionBreakpoint","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",259,0x9c8417ca)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(functionName,"functionName")
	HX_STACK_LINE(260)
	int tmp = ::__hxcpp_dbg_addClassFunctionBreakpoint(className,functionName);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debugger_obj,addClassFunctionBreakpoint,return )

Void Debugger_obj::deleteBreakpoint( Dynamic number){
{
		HX_STACK_FRAME("cpp.vm.Debugger","deleteBreakpoint",0xcd2c7c3d,"cpp.vm.Debugger.deleteBreakpoint","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",268,0x9c8417ca)
		HX_STACK_ARG(number,"number")
		HX_STACK_LINE(269)
		bool tmp = (number == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		if ((tmp)){
			HX_STACK_LINE(270)
			::__hxcpp_dbg_deleteAllBreakpoints();
		}
		else{
			HX_STACK_LINE(273)
			::__hxcpp_dbg_deleteBreakpoint(hx::TCast< ::Int >::cast(number));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debugger_obj,deleteBreakpoint,(void))

Void Debugger_obj::breakNow( hx::Null< bool >  __o_wait){
bool wait = __o_wait.Default(true);
	HX_STACK_FRAME("cpp.vm.Debugger","breakNow",0x5987fd98,"cpp.vm.Debugger.breakNow","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",288,0x9c8417ca)
	HX_STACK_ARG(wait,"wait")
{
		HX_STACK_LINE(288)
		::__hxcpp_dbg_breakNow(wait);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debugger_obj,breakNow,(void))

Void Debugger_obj::continueThreads( int specialThreadNumber,int continueCount){
{
		HX_STACK_FRAME("cpp.vm.Debugger","continueThreads",0x7c944ae1,"cpp.vm.Debugger.continueThreads","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",300,0x9c8417ca)
		HX_STACK_ARG(specialThreadNumber,"specialThreadNumber")
		HX_STACK_ARG(continueCount,"continueCount")
		HX_STACK_LINE(300)
		::__hxcpp_dbg_continueThreads(specialThreadNumber,continueCount);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debugger_obj,continueThreads,(void))

Void Debugger_obj::stepThread( int threadNumber,int stepType,hx::Null< int >  __o_stepCount){
int stepCount = __o_stepCount.Default(1);
	HX_STACK_FRAME("cpp.vm.Debugger","stepThread",0x6c6f6977,"cpp.vm.Debugger.stepThread","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",311,0x9c8417ca)
	HX_STACK_ARG(threadNumber,"threadNumber")
	HX_STACK_ARG(stepType,"stepType")
	HX_STACK_ARG(stepCount,"stepCount")
{
		HX_STACK_LINE(311)
		::__hxcpp_dbg_stepThread(threadNumber,stepType,stepCount);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Debugger_obj,stepThread,(void))

Array< ::String > Debugger_obj::getStackVariables( int threadNumber,int stackFrameNumber,bool unsafe){
	HX_STACK_FRAME("cpp.vm.Debugger","getStackVariables",0x74210964,"cpp.vm.Debugger.getStackVariables","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",332,0x9c8417ca)
	HX_STACK_ARG(threadNumber,"threadNumber")
	HX_STACK_ARG(stackFrameNumber,"stackFrameNumber")
	HX_STACK_ARG(unsafe,"unsafe")
	HX_STACK_LINE(332)
	return ::__hxcpp_dbg_getStackVariables(threadNumber,stackFrameNumber,unsafe,::cpp::vm::Debugger_obj::THREAD_NOT_STOPPED);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Debugger_obj,getStackVariables,return )

Dynamic Debugger_obj::getStackVariableValue( int threadNumber,int stackFrameNumber,::String name,bool unsafe){
	HX_STACK_FRAME("cpp.vm.Debugger","getStackVariableValue",0x55bcc4c2,"cpp.vm.Debugger.getStackVariableValue","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",345,0x9c8417ca)
	HX_STACK_ARG(threadNumber,"threadNumber")
	HX_STACK_ARG(stackFrameNumber,"stackFrameNumber")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(unsafe,"unsafe")
	HX_STACK_LINE(346)
	Dynamic tmp = ::__hxcpp_dbg_getStackVariableValue(threadNumber,stackFrameNumber,name,unsafe,::cpp::vm::Debugger_obj::NONEXISTENT_VALUE,::cpp::vm::Debugger_obj::THREAD_NOT_STOPPED);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(346)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Debugger_obj,getStackVariableValue,return )

Dynamic Debugger_obj::setStackVariableValue( int threadNumber,int stackFrameNumber,::String name,Dynamic value,bool unsafe){
	HX_STACK_FRAME("cpp.vm.Debugger","setStackVariableValue",0xa9c592ce,"cpp.vm.Debugger.setStackVariableValue","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",362,0x9c8417ca)
	HX_STACK_ARG(threadNumber,"threadNumber")
	HX_STACK_ARG(stackFrameNumber,"stackFrameNumber")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(unsafe,"unsafe")
	HX_STACK_LINE(363)
	Dynamic tmp = ::__hxcpp_dbg_setStackVariableValue(threadNumber,stackFrameNumber,name,value,unsafe,::cpp::vm::Debugger_obj::NONEXISTENT_VALUE,::cpp::vm::Debugger_obj::THREAD_NOT_STOPPED);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(363)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Debugger_obj,setStackVariableValue,return )


Debugger_obj::Debugger_obj()
{
}

bool Debugger_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getFiles") ) { outValue = getFiles_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"breakNow") ) { outValue = breakNow_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getClasses") ) { outValue = getClasses_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stepThread") ) { outValue = stepThread_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getThreadInfo") ) { outValue = getThreadInfo_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getThreadInfos") ) { outValue = getThreadInfos_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"continueThreads") ) { outValue = continueThreads_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFilesFullPath") ) { outValue = getFilesFullPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteBreakpoint") ) { outValue = deleteBreakpoint_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"NONEXISTENT_VALUE") ) { outValue = NONEXISTENT_VALUE; return true;  }
		if (HX_FIELD_EQ(inName,"getStackVariables") ) { outValue = getStackVariables_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"THREAD_NOT_STOPPED") ) { outValue = THREAD_NOT_STOPPED; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addFileLineBreakpoint") ) { outValue = addFileLineBreakpoint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getStackVariableValue") ) { outValue = getStackVariableValue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setStackVariableValue") ) { outValue = setStackVariableValue_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getCurrentThreadNumber") ) { outValue = getCurrentThreadNumber_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"addClassFunctionBreakpoint") ) { outValue = addClassFunctionBreakpoint_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setEventNotificationHandler") ) { outValue = setEventNotificationHandler_dyn(); return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"enableCurrentThreadDebugging") ) { outValue = enableCurrentThreadDebugging_dyn(); return true;  }
	}
	return false;
}

bool Debugger_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"NONEXISTENT_VALUE") ) { NONEXISTENT_VALUE=ioValue.Cast< ::String >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"THREAD_NOT_STOPPED") ) { THREAD_NOT_STOPPED=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Debugger_obj::THREAD_CREATED,HX_HCSTRING("THREAD_CREATED","\x13","\xe4","\x45","\xf0")},
	{hx::fsInt,(void *) &Debugger_obj::THREAD_TERMINATED,HX_HCSTRING("THREAD_TERMINATED","\x78","\x3d","\x43","\x3a")},
	{hx::fsInt,(void *) &Debugger_obj::THREAD_STARTED,HX_HCSTRING("THREAD_STARTED","\x6c","\x57","\xf6","\x13")},
	{hx::fsInt,(void *) &Debugger_obj::THREAD_STOPPED,HX_HCSTRING("THREAD_STOPPED","\x38","\x00","\x3d","\x22")},
	{hx::fsInt,(void *) &Debugger_obj::STEP_INTO,HX_HCSTRING("STEP_INTO","\xb3","\x85","\x35","\x3e")},
	{hx::fsInt,(void *) &Debugger_obj::STEP_OVER,HX_HCSTRING("STEP_OVER","\x67","\xd2","\x32","\x42")},
	{hx::fsInt,(void *) &Debugger_obj::STEP_OUT,HX_HCSTRING("STEP_OUT","\xbb","\xc6","\x1b","\x16")},
	{hx::fsString,(void *) &Debugger_obj::NONEXISTENT_VALUE,HX_HCSTRING("NONEXISTENT_VALUE","\xd3","\x5c","\xdf","\x6e")},
	{hx::fsString,(void *) &Debugger_obj::THREAD_NOT_STOPPED,HX_HCSTRING("THREAD_NOT_STOPPED","\x2c","\xfb","\xad","\xfc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debugger_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Debugger_obj::THREAD_CREATED,"THREAD_CREATED");
	HX_MARK_MEMBER_NAME(Debugger_obj::THREAD_TERMINATED,"THREAD_TERMINATED");
	HX_MARK_MEMBER_NAME(Debugger_obj::THREAD_STARTED,"THREAD_STARTED");
	HX_MARK_MEMBER_NAME(Debugger_obj::THREAD_STOPPED,"THREAD_STOPPED");
	HX_MARK_MEMBER_NAME(Debugger_obj::STEP_INTO,"STEP_INTO");
	HX_MARK_MEMBER_NAME(Debugger_obj::STEP_OVER,"STEP_OVER");
	HX_MARK_MEMBER_NAME(Debugger_obj::STEP_OUT,"STEP_OUT");
	HX_MARK_MEMBER_NAME(Debugger_obj::NONEXISTENT_VALUE,"NONEXISTENT_VALUE");
	HX_MARK_MEMBER_NAME(Debugger_obj::THREAD_NOT_STOPPED,"THREAD_NOT_STOPPED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debugger_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Debugger_obj::THREAD_CREATED,"THREAD_CREATED");
	HX_VISIT_MEMBER_NAME(Debugger_obj::THREAD_TERMINATED,"THREAD_TERMINATED");
	HX_VISIT_MEMBER_NAME(Debugger_obj::THREAD_STARTED,"THREAD_STARTED");
	HX_VISIT_MEMBER_NAME(Debugger_obj::THREAD_STOPPED,"THREAD_STOPPED");
	HX_VISIT_MEMBER_NAME(Debugger_obj::STEP_INTO,"STEP_INTO");
	HX_VISIT_MEMBER_NAME(Debugger_obj::STEP_OVER,"STEP_OVER");
	HX_VISIT_MEMBER_NAME(Debugger_obj::STEP_OUT,"STEP_OUT");
	HX_VISIT_MEMBER_NAME(Debugger_obj::NONEXISTENT_VALUE,"NONEXISTENT_VALUE");
	HX_VISIT_MEMBER_NAME(Debugger_obj::THREAD_NOT_STOPPED,"THREAD_NOT_STOPPED");
};

#endif

hx::Class Debugger_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("THREAD_CREATED","\x13","\xe4","\x45","\xf0"),
	HX_HCSTRING("THREAD_TERMINATED","\x78","\x3d","\x43","\x3a"),
	HX_HCSTRING("THREAD_STARTED","\x6c","\x57","\xf6","\x13"),
	HX_HCSTRING("THREAD_STOPPED","\x38","\x00","\x3d","\x22"),
	HX_HCSTRING("STEP_INTO","\xb3","\x85","\x35","\x3e"),
	HX_HCSTRING("STEP_OVER","\x67","\xd2","\x32","\x42"),
	HX_HCSTRING("STEP_OUT","\xbb","\xc6","\x1b","\x16"),
	HX_HCSTRING("NONEXISTENT_VALUE","\xd3","\x5c","\xdf","\x6e"),
	HX_HCSTRING("THREAD_NOT_STOPPED","\x2c","\xfb","\xad","\xfc"),
	HX_HCSTRING("setEventNotificationHandler","\xe7","\xb9","\x4b","\x5e"),
	HX_HCSTRING("enableCurrentThreadDebugging","\x2e","\xeb","\xf2","\xf1"),
	HX_HCSTRING("getCurrentThreadNumber","\x16","\xf0","\xf2","\xc8"),
	HX_HCSTRING("getFiles","\x01","\xee","\x6f","\x60"),
	HX_HCSTRING("getFilesFullPath","\xf5","\x81","\x16","\x62"),
	HX_HCSTRING("getClasses","\xb0","\xd4","\xf2","\xb8"),
	HX_HCSTRING("getThreadInfos","\x25","\x14","\xa5","\x99"),
	HX_HCSTRING("getThreadInfo","\x8e","\x68","\xf6","\x9d"),
	HX_HCSTRING("addFileLineBreakpoint","\x62","\x86","\xaf","\x3a"),
	HX_HCSTRING("addClassFunctionBreakpoint","\xa0","\x9c","\xb5","\x49"),
	HX_HCSTRING("deleteBreakpoint","\x3c","\xc3","\xa0","\x42"),
	HX_HCSTRING("breakNow","\x97","\xad","\xbd","\xec"),
	HX_HCSTRING("continueThreads","\xc2","\x28","\x42","\x5f"),
	HX_HCSTRING("stepThread","\x36","\x57","\x70","\x7c"),
	HX_HCSTRING("getStackVariables","\x85","\xe1","\x6a","\xc4"),
	HX_HCSTRING("getStackVariableValue","\x63","\xc1","\x0b","\x8c"),
	HX_HCSTRING("setStackVariableValue","\x6f","\x8f","\x14","\xe0"),
	::String(null()) };

void Debugger_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.Debugger","\x8d","\x14","\xf8","\xb5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Debugger_obj::__GetStatic;
	__mClass->mSetStaticField = &Debugger_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Debugger_obj >;
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

void Debugger_obj::__boot()
{
	THREAD_CREATED= (int)1;
	THREAD_TERMINATED= (int)2;
	THREAD_STARTED= (int)3;
	THREAD_STOPPED= (int)4;
	STEP_INTO= (int)1;
	STEP_OVER= (int)2;
	STEP_OUT= (int)3;
	NONEXISTENT_VALUE= ::String(HX_HCSTRING("NONEXISTENT_VALUE","\xd3","\x5c","\xdf","\x6e"));
	THREAD_NOT_STOPPED= ::String(HX_HCSTRING("THREAD_NOT_STOPPED","\x2c","\xfb","\xad","\xfc"));
}

} // end namespace cpp
} // end namespace vm
