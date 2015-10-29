#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Parameter
#include <cpp/vm/Parameter.h>
#endif
#ifndef INCLUDED_cpp_vm_StackFrame
#include <cpp/vm/StackFrame.h>
#endif
namespace cpp{
namespace vm{

Void StackFrame_obj::__construct(::String fileName,int lineNumber,::String className,::String functionName)
{
HX_STACK_FRAME("cpp.vm.StackFrame","new",0x11668ca3,"cpp.vm.StackFrame.new","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",55,0x9c8417ca)
HX_STACK_THIS(this)
HX_STACK_ARG(fileName,"fileName")
HX_STACK_ARG(lineNumber,"lineNumber")
HX_STACK_ARG(className,"className")
HX_STACK_ARG(functionName,"functionName")
{
	HX_STACK_LINE(56)
	this->fileName = fileName;
	HX_STACK_LINE(57)
	this->lineNumber = lineNumber;
	HX_STACK_LINE(58)
	this->className = className;
	HX_STACK_LINE(59)
	this->functionName = functionName;
	HX_STACK_LINE(60)
	this->parameters = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//StackFrame_obj::~StackFrame_obj() { }

Dynamic StackFrame_obj::__CreateEmpty() { return  new StackFrame_obj; }
hx::ObjectPtr< StackFrame_obj > StackFrame_obj::__new(::String fileName,int lineNumber,::String className,::String functionName)
{  hx::ObjectPtr< StackFrame_obj > _result_ = new StackFrame_obj();
	_result_->__construct(fileName,lineNumber,className,functionName);
	return _result_;}

Dynamic StackFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StackFrame_obj > _result_ = new StackFrame_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}


StackFrame_obj::StackFrame_obj()
{
}

void StackFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StackFrame);
	HX_MARK_MEMBER_NAME(fileName,"fileName");
	HX_MARK_MEMBER_NAME(lineNumber,"lineNumber");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(functionName,"functionName");
	HX_MARK_MEMBER_NAME(parameters,"parameters");
	HX_MARK_END_CLASS();
}

void StackFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fileName,"fileName");
	HX_VISIT_MEMBER_NAME(lineNumber,"lineNumber");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(functionName,"functionName");
	HX_VISIT_MEMBER_NAME(parameters,"parameters");
}

Dynamic StackFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fileName") ) { return fileName; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineNumber") ) { return lineNumber; }
		if (HX_FIELD_EQ(inName,"parameters") ) { return parameters; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"functionName") ) { return functionName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StackFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fileName") ) { fileName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineNumber") ) { lineNumber=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parameters") ) { parameters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"functionName") ) { functionName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StackFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"));
	outFields->push(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"));
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("functionName","\x83","\xb5","\xfa","\x2f"));
	outFields->push(HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(StackFrame_obj,fileName),HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62")},
	{hx::fsInt,(int)offsetof(StackFrame_obj,lineNumber),HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76")},
	{hx::fsString,(int)offsetof(StackFrame_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsString,(int)offsetof(StackFrame_obj,functionName),HX_HCSTRING("functionName","\x83","\xb5","\xfa","\x2f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(StackFrame_obj,parameters),HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"),
	HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"),
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("functionName","\x83","\xb5","\xfa","\x2f"),
	HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StackFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StackFrame_obj::__mClass,"__mClass");
};

#endif

hx::Class StackFrame_obj::__mClass;

void StackFrame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.StackFrame","\x31","\xff","\x1c","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StackFrame_obj >;
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
