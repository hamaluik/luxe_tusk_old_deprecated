#include <hxcpp.h>

#ifndef INCLUDED_haxe_unit_TestStatus
#include <haxe/unit/TestStatus.h>
#endif
namespace haxe{
namespace unit{

Void TestStatus_obj::__construct()
{
HX_STACK_FRAME("haxe.unit.TestStatus","new",0x64df2298,"haxe.unit.TestStatus.new","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestStatus.hx",36,0x1b989ebf)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(37)
	this->done = false;
	HX_STACK_LINE(38)
	this->success = false;
}
;
	return null();
}

//TestStatus_obj::~TestStatus_obj() { }

Dynamic TestStatus_obj::__CreateEmpty() { return  new TestStatus_obj; }
hx::ObjectPtr< TestStatus_obj > TestStatus_obj::__new()
{  hx::ObjectPtr< TestStatus_obj > _result_ = new TestStatus_obj();
	_result_->__construct();
	return _result_;}

Dynamic TestStatus_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestStatus_obj > _result_ = new TestStatus_obj();
	_result_->__construct();
	return _result_;}


TestStatus_obj::TestStatus_obj()
{
}

void TestStatus_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestStatus);
	HX_MARK_MEMBER_NAME(done,"done");
	HX_MARK_MEMBER_NAME(success,"success");
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(classname,"classname");
	HX_MARK_MEMBER_NAME(posInfos,"posInfos");
	HX_MARK_MEMBER_NAME(backtrace,"backtrace");
	HX_MARK_END_CLASS();
}

void TestStatus_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(done,"done");
	HX_VISIT_MEMBER_NAME(success,"success");
	HX_VISIT_MEMBER_NAME(error,"error");
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(classname,"classname");
	HX_VISIT_MEMBER_NAME(posInfos,"posInfos");
	HX_VISIT_MEMBER_NAME(backtrace,"backtrace");
}

Dynamic TestStatus_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { return done; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"success") ) { return success; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"posInfos") ) { return posInfos; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"classname") ) { return classname; }
		if (HX_FIELD_EQ(inName,"backtrace") ) { return backtrace; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestStatus_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { done=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"success") ) { success=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"posInfos") ) { posInfos=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"classname") ) { classname=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backtrace") ) { backtrace=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TestStatus_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("done","\x82","\xf0","\x6d","\x42"));
	outFields->push(HX_HCSTRING("success","\xc3","\x25","\x4e","\xb8"));
	outFields->push(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"));
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	outFields->push(HX_HCSTRING("classname","\x83","\x66","\x64","\xf1"));
	outFields->push(HX_HCSTRING("posInfos","\x11","\x82","\x2e","\x5a"));
	outFields->push(HX_HCSTRING("backtrace","\xfe","\x86","\xa3","\x5f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(TestStatus_obj,done),HX_HCSTRING("done","\x82","\xf0","\x6d","\x42")},
	{hx::fsBool,(int)offsetof(TestStatus_obj,success),HX_HCSTRING("success","\xc3","\x25","\x4e","\xb8")},
	{hx::fsString,(int)offsetof(TestStatus_obj,error),HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")},
	{hx::fsString,(int)offsetof(TestStatus_obj,method),HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")},
	{hx::fsString,(int)offsetof(TestStatus_obj,classname),HX_HCSTRING("classname","\x83","\x66","\x64","\xf1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestStatus_obj,posInfos),HX_HCSTRING("posInfos","\x11","\x82","\x2e","\x5a")},
	{hx::fsString,(int)offsetof(TestStatus_obj,backtrace),HX_HCSTRING("backtrace","\xfe","\x86","\xa3","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("done","\x82","\xf0","\x6d","\x42"),
	HX_HCSTRING("success","\xc3","\x25","\x4e","\xb8"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"),
	HX_HCSTRING("classname","\x83","\x66","\x64","\xf1"),
	HX_HCSTRING("posInfos","\x11","\x82","\x2e","\x5a"),
	HX_HCSTRING("backtrace","\xfe","\x86","\xa3","\x5f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestStatus_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestStatus_obj::__mClass,"__mClass");
};

#endif

hx::Class TestStatus_obj::__mClass;

void TestStatus_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.unit.TestStatus","\xa6","\x36","\x4c","\xf8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestStatus_obj >;
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

} // end namespace haxe
} // end namespace unit
