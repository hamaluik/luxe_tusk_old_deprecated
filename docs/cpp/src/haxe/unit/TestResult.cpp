#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_unit_TestResult
#include <haxe/unit/TestResult.h>
#endif
#ifndef INCLUDED_haxe_unit_TestStatus
#include <haxe/unit/TestStatus.h>
#endif
namespace haxe{
namespace unit{

Void TestResult_obj::__construct()
{
HX_STACK_FRAME("haxe.unit.TestResult","new",0x71c155c3,"haxe.unit.TestResult.new","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestResult.hx",29,0x139e39f4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	this->m_tests = tmp;
	HX_STACK_LINE(31)
	this->success = true;
}
;
	return null();
}

//TestResult_obj::~TestResult_obj() { }

Dynamic TestResult_obj::__CreateEmpty() { return  new TestResult_obj; }
hx::ObjectPtr< TestResult_obj > TestResult_obj::__new()
{  hx::ObjectPtr< TestResult_obj > _result_ = new TestResult_obj();
	_result_->__construct();
	return _result_;}

Dynamic TestResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestResult_obj > _result_ = new TestResult_obj();
	_result_->__construct();
	return _result_;}

Void TestResult_obj::add( ::haxe::unit::TestStatus t){
{
		HX_STACK_FRAME("haxe.unit.TestResult","add",0x71b77784,"haxe.unit.TestResult.add","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestResult.hx",34,0x139e39f4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(35)
		::List tmp = this->m_tests;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		::haxe::unit::TestStatus tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		tmp->add(tmp1);
		HX_STACK_LINE(36)
		bool tmp2 = t->success;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		if ((tmp3)){
			HX_STACK_LINE(37)
			this->success = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestResult_obj,add,(void))

::String TestResult_obj::toString( ){
	HX_STACK_FRAME("haxe.unit.TestResult","toString",0x8833e469,"haxe.unit.TestResult.toString","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestResult.hx",40,0x139e39f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	::StringBuf buf = tmp;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(42)
	int failures = (int)0;		HX_STACK_VAR(failures,"failures");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		::List tmp1 = this->m_tests;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		::_List::ListIterator tmp2 = ::_List::ListIterator_obj::__new(tmp1->h);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		::_List::ListIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			bool tmp3 = (_g->head != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			if ((tmp4)){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				Dynamic tmp6 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(43)
				_g->val = tmp6;
				HX_STACK_LINE(43)
				Dynamic tmp7 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(43)
				_g->head = tmp7;
				HX_STACK_LINE(43)
				tmp5 = _g->val;
			}
			HX_STACK_LINE(43)
			::haxe::unit::TestStatus test = ((::haxe::unit::TestStatus)(tmp5));		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(44)
			bool tmp6 = (test->success == false);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(44)
			if ((tmp6)){
				HX_STACK_LINE(45)
				buf->add(HX_HCSTRING("* ","\xb6","\x24","\x00","\x00"));
				HX_STACK_LINE(46)
				::String tmp7 = test->classname;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(46)
				buf->add(tmp7);
				HX_STACK_LINE(47)
				buf->add(HX_HCSTRING("::","\xc0","\x32","\x00","\x00"));
				HX_STACK_LINE(48)
				::String tmp8 = test->method;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(48)
				buf->add(tmp8);
				HX_STACK_LINE(49)
				buf->add(HX_HCSTRING("()","\x01","\x23","\x00","\x00"));
				HX_STACK_LINE(50)
				buf->add(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
				HX_STACK_LINE(52)
				buf->add(HX_HCSTRING("ERR: ","\x2b","\xf1","\x17","\xf1"));
				HX_STACK_LINE(53)
				bool tmp9 = (test->posInfos != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(53)
				if ((tmp9)){
					HX_STACK_LINE(54)
					::String tmp10 = test->posInfos->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(54)
					buf->add(tmp10);
					HX_STACK_LINE(55)
					buf->add(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));
					HX_STACK_LINE(56)
					int tmp11 = test->posInfos->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(56)
					buf->add(tmp11);
					HX_STACK_LINE(57)
					buf->add(HX_HCSTRING("(","\x28","\x00","\x00","\x00"));
					HX_STACK_LINE(58)
					::String tmp12 = test->posInfos->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(58)
					buf->add(tmp12);
					HX_STACK_LINE(59)
					buf->add(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
					HX_STACK_LINE(60)
					::String tmp13 = test->posInfos->__Field(HX_HCSTRING("methodName","\xcc","\x19","\x0f","\x12"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(60)
					buf->add(tmp13);
					HX_STACK_LINE(61)
					buf->add(HX_HCSTRING(") - ","\xea","\x2e","\x32","\x1b"));
				}
				HX_STACK_LINE(63)
				::String tmp10 = test->error;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(63)
				buf->add(tmp10);
				HX_STACK_LINE(64)
				buf->add(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
				HX_STACK_LINE(66)
				bool tmp11 = (test->backtrace != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(66)
				if ((tmp11)){
					HX_STACK_LINE(67)
					::String tmp12 = test->backtrace;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(67)
					buf->add(tmp12);
					HX_STACK_LINE(68)
					buf->add(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
				}
				HX_STACK_LINE(71)
				buf->add(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
				HX_STACK_LINE(72)
				(failures)++;
			}
		}
	}
	HX_STACK_LINE(75)
	buf->add(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	HX_STACK_LINE(76)
	bool tmp1 = (failures == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	if ((tmp1)){
		HX_STACK_LINE(77)
		buf->add(HX_HCSTRING("OK ","\x84","\x33","\x3c","\x00"));
	}
	else{
		HX_STACK_LINE(79)
		buf->add(HX_HCSTRING("FAILED ","\xc3","\x13","\xc2","\x96"));
	}
	HX_STACK_LINE(81)
	::List tmp2 = this->m_tests;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	buf->add(tmp3);
	HX_STACK_LINE(82)
	buf->add(HX_HCSTRING(" tests, ","\x75","\x64","\x2c","\xe4"));
	HX_STACK_LINE(83)
	int tmp4 = failures;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	buf->add(tmp4);
	HX_STACK_LINE(84)
	buf->add(HX_HCSTRING(" failed, ","\x91","\xb5","\xb6","\x57"));
	HX_STACK_LINE(85)
	::List tmp5 = this->m_tests;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(85)
	int tmp6 = tmp5->length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	int tmp7 = failures;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(85)
	buf->add(tmp8);
	HX_STACK_LINE(86)
	buf->add(HX_HCSTRING(" success","\xa3","\x69","\x9c","\xde"));
	HX_STACK_LINE(87)
	buf->add(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	HX_STACK_LINE(88)
	::String tmp9 = buf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(88)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(TestResult_obj,toString,return )


TestResult_obj::TestResult_obj()
{
}

void TestResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestResult);
	HX_MARK_MEMBER_NAME(m_tests,"m_tests");
	HX_MARK_MEMBER_NAME(success,"success");
	HX_MARK_END_CLASS();
}

void TestResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_tests,"m_tests");
	HX_VISIT_MEMBER_NAME(success,"success");
}

Dynamic TestResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_tests") ) { return m_tests; }
		if (HX_FIELD_EQ(inName,"success") ) { return success; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"m_tests") ) { m_tests=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"success") ) { success=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TestResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_tests","\x4f","\x57","\x20","\xbe"));
	outFields->push(HX_HCSTRING("success","\xc3","\x25","\x4e","\xb8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::List*/ ,(int)offsetof(TestResult_obj,m_tests),HX_HCSTRING("m_tests","\x4f","\x57","\x20","\xbe")},
	{hx::fsBool,(int)offsetof(TestResult_obj,success),HX_HCSTRING("success","\xc3","\x25","\x4e","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("m_tests","\x4f","\x57","\x20","\xbe"),
	HX_HCSTRING("success","\xc3","\x25","\x4e","\xb8"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestResult_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestResult_obj::__mClass,"__mClass");
};

#endif

hx::Class TestResult_obj::__mClass;

void TestResult_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.unit.TestResult","\x51","\xb8","\xd4","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestResult_obj >;
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
