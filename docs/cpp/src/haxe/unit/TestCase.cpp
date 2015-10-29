#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_unit_TestCase
#include <haxe/unit/TestCase.h>
#endif
#ifndef INCLUDED_haxe_unit_TestRunner
#include <haxe/unit/TestRunner.h>
#endif
#ifndef INCLUDED_haxe_unit_TestStatus
#include <haxe/unit/TestStatus.h>
#endif
namespace haxe{
namespace unit{

Void TestCase_obj::__construct()
{
HX_STACK_FRAME("haxe.unit.TestCase","new",0x83fcec16,"haxe.unit.TestCase.new","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestCase.hx",30,0xa61db741)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//TestCase_obj::~TestCase_obj() { }

Dynamic TestCase_obj::__CreateEmpty() { return  new TestCase_obj; }
hx::ObjectPtr< TestCase_obj > TestCase_obj::__new()
{  hx::ObjectPtr< TestCase_obj > _result_ = new TestCase_obj();
	_result_->__construct();
	return _result_;}

Dynamic TestCase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestCase_obj > _result_ = new TestCase_obj();
	_result_->__construct();
	return _result_;}

Void TestCase_obj::setup( ){
{
		HX_STACK_FRAME("haxe.unit.TestCase","setup",0x0f1fa3b3,"haxe.unit.TestCase.setup","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestCase.hx",33,0xa61db741)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestCase_obj,setup,(void))

Void TestCase_obj::tearDown( ){
{
		HX_STACK_FRAME("haxe.unit.TestCase","tearDown",0xebcf86ae,"haxe.unit.TestCase.tearDown","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestCase.hx",36,0xa61db741)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestCase_obj,tearDown,(void))

Void TestCase_obj::print( Dynamic v){
{
		HX_STACK_FRAME("haxe.unit.TestCase","print",0x5d7b4d63,"haxe.unit.TestCase.print","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestCase.hx",39,0xa61db741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(40)
		Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		::haxe::unit::TestRunner_obj::print(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestCase_obj,print,(void))

Void TestCase_obj::assertTrue( bool b,Dynamic c){
{
		HX_STACK_FRAME("haxe.unit.TestCase","assertTrue",0x7eaf5c3e,"haxe.unit.TestCase.assertTrue","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestCase.hx",43,0xa61db741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(44)
		::haxe::unit::TestStatus tmp = this->currentTest;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		tmp->done = true;
		HX_STACK_LINE(45)
		bool tmp1 = (b != true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		if ((tmp1)){
			HX_STACK_LINE(46)
			::haxe::unit::TestStatus tmp2 = this->currentTest;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			tmp2->success = false;
			HX_STACK_LINE(47)
			::haxe::unit::TestStatus tmp3 = this->currentTest;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(47)
			tmp3->error = HX_HCSTRING("expected true but was false","\x23","\x26","\x7c","\x7d");
			HX_STACK_LINE(48)
			::haxe::unit::TestStatus tmp4 = this->currentTest;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(48)
			tmp4->posInfos = c;
			HX_STACK_LINE(49)
			::haxe::unit::TestStatus tmp5 = this->currentTest;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(49)
			HX_STACK_DO_THROW(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TestCase_obj,assertTrue,(void))

Void TestCase_obj::assertFalse( bool b,Dynamic c){
{
		HX_STACK_FRAME("haxe.unit.TestCase","assertFalse",0x3fe1d2b3,"haxe.unit.TestCase.assertFalse","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestCase.hx",53,0xa61db741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(54)
		::haxe::unit::TestStatus tmp = this->currentTest;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		tmp->done = true;
		HX_STACK_LINE(55)
		bool tmp1 = (b == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		if ((tmp1)){
			HX_STACK_LINE(56)
			::haxe::unit::TestStatus tmp2 = this->currentTest;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			tmp2->success = false;
			HX_STACK_LINE(57)
			::haxe::unit::TestStatus tmp3 = this->currentTest;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			tmp3->error = HX_HCSTRING("expected false but was true","\xa9","\xe3","\x03","\x60");
			HX_STACK_LINE(58)
			::haxe::unit::TestStatus tmp4 = this->currentTest;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			tmp4->posInfos = c;
			HX_STACK_LINE(59)
			::haxe::unit::TestStatus tmp5 = this->currentTest;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(59)
			HX_STACK_DO_THROW(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TestCase_obj,assertFalse,(void))

Void TestCase_obj::assertEquals( Dynamic expected,Dynamic actual,Dynamic c){
{
		HX_STACK_FRAME("haxe.unit.TestCase","assertEquals",0x7ba9bf2f,"haxe.unit.TestCase.assertEquals","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestCase.hx",63,0xa61db741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(expected,"expected")
		HX_STACK_ARG(actual,"actual")
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(64)
		::haxe::unit::TestStatus tmp = this->currentTest;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		tmp->done = true;
		HX_STACK_LINE(65)
		bool tmp1 = (actual != expected);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		if ((tmp1)){
			HX_STACK_LINE(66)
			::haxe::unit::TestStatus tmp2 = this->currentTest;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			tmp2->success = false;
			HX_STACK_LINE(67)
			Dynamic tmp3 = expected;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			::String tmp5 = (HX_HCSTRING("expected '","\x7f","\xd8","\x72","\xcf") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			::String tmp6 = (tmp5 + HX_HCSTRING("' but was '","\x18","\x22","\xf3","\xf7"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			Dynamic tmp7 = actual;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(67)
			::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(67)
			::String tmp10 = (tmp9 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(67)
			::haxe::unit::TestStatus tmp11 = this->currentTest;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(67)
			tmp11->error = tmp10;
			HX_STACK_LINE(68)
			::haxe::unit::TestStatus tmp12 = this->currentTest;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			tmp12->posInfos = c;
			HX_STACK_LINE(69)
			::haxe::unit::TestStatus tmp13 = this->currentTest;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(69)
			HX_STACK_DO_THROW(tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TestCase_obj,assertEquals,(void))


TestCase_obj::TestCase_obj()
{
}

void TestCase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestCase);
	HX_MARK_MEMBER_NAME(currentTest,"currentTest");
	HX_MARK_END_CLASS();
}

void TestCase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentTest,"currentTest");
}

Dynamic TestCase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { return setup_dyn(); }
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tearDown") ) { return tearDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"assertTrue") ) { return assertTrue_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTest") ) { return currentTest; }
		if (HX_FIELD_EQ(inName,"assertFalse") ) { return assertFalse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"assertEquals") ) { return assertEquals_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestCase_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"currentTest") ) { currentTest=inValue.Cast< ::haxe::unit::TestStatus >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TestCase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentTest","\x2b","\xa1","\x8b","\x85"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::unit::TestStatus*/ ,(int)offsetof(TestCase_obj,currentTest),HX_HCSTRING("currentTest","\x2b","\xa1","\x8b","\x85")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentTest","\x2b","\xa1","\x8b","\x85"),
	HX_HCSTRING("setup","\x7d","\xae","\x2f","\x7a"),
	HX_HCSTRING("tearDown","\x24","\xd6","\x66","\xec"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("assertTrue","\x34","\xf5","\x51","\x4f"),
	HX_HCSTRING("assertFalse","\xfd","\x10","\x85","\xfd"),
	HX_HCSTRING("assertEquals","\xa5","\x01","\xdd","\xac"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestCase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestCase_obj::__mClass,"__mClass");
};

#endif

hx::Class TestCase_obj::__mClass;

void TestCase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.unit.TestCase","\x24","\xe9","\x2b","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestCase_obj >;
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
