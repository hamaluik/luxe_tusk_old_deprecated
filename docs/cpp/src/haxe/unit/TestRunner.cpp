#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_unit_TestCase
#include <haxe/unit/TestCase.h>
#endif
#ifndef INCLUDED_haxe_unit_TestResult
#include <haxe/unit/TestResult.h>
#endif
#ifndef INCLUDED_haxe_unit_TestRunner
#include <haxe/unit/TestRunner.h>
#endif
#ifndef INCLUDED_haxe_unit_TestStatus
#include <haxe/unit/TestStatus.h>
#endif
namespace haxe{
namespace unit{

Void TestRunner_obj::__construct()
{
HX_STACK_FRAME("haxe.unit.TestRunner","new",0x6c78bc56,"haxe.unit.TestRunner.new","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestRunner.hx",79,0x013a06c1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(80)
	::haxe::unit::TestResult tmp = ::haxe::unit::TestResult_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	this->result = tmp;
	HX_STACK_LINE(81)
	::List tmp1 = ::List_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	this->cases = tmp1;
}
;
	return null();
}

//TestRunner_obj::~TestRunner_obj() { }

Dynamic TestRunner_obj::__CreateEmpty() { return  new TestRunner_obj; }
hx::ObjectPtr< TestRunner_obj > TestRunner_obj::__new()
{  hx::ObjectPtr< TestRunner_obj > _result_ = new TestRunner_obj();
	_result_->__construct();
	return _result_;}

Dynamic TestRunner_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestRunner_obj > _result_ = new TestRunner_obj();
	_result_->__construct();
	return _result_;}

Void TestRunner_obj::add( ::haxe::unit::TestCase c){
{
		HX_STACK_FRAME("haxe.unit.TestRunner","add",0x6c6ede17,"haxe.unit.TestRunner.add","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestRunner.hx",84,0x013a06c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(85)
		::List tmp = this->cases;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		::haxe::unit::TestCase tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		tmp->add(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,add,(void))

bool TestRunner_obj::run( ){
	HX_STACK_FRAME("haxe.unit.TestRunner","run",0x6c7bd341,"haxe.unit.TestRunner.run","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestRunner.hx",88,0x013a06c1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	::haxe::unit::TestResult tmp = ::haxe::unit::TestResult_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	this->result = tmp;
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		::List tmp1 = this->cases;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		::_List::ListIterator tmp2 = ::_List::ListIterator_obj::__new(tmp1->h);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		::_List::ListIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(90)
		while((true)){
			HX_STACK_LINE(90)
			bool tmp3 = (_g->head != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(90)
			if ((tmp4)){
				HX_STACK_LINE(90)
				break;
			}
			HX_STACK_LINE(90)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				Dynamic tmp6 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(90)
				_g->val = tmp6;
				HX_STACK_LINE(90)
				Dynamic tmp7 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(90)
				_g->head = tmp7;
				HX_STACK_LINE(90)
				tmp5 = _g->val;
			}
			HX_STACK_LINE(90)
			::haxe::unit::TestCase c = ((::haxe::unit::TestCase)(tmp5));		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(91)
			::haxe::unit::TestCase tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			this->runCase(tmp6);
		}
	}
	HX_STACK_LINE(93)
	::haxe::unit::TestResult tmp1 = this->result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	::String tmp2 = tmp1->toString();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	::haxe::unit::TestRunner_obj::print(tmp2);
	HX_STACK_LINE(94)
	::haxe::unit::TestResult tmp3 = this->result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(94)
	bool tmp4 = tmp3->success;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(94)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(TestRunner_obj,run,return )

Void TestRunner_obj::runCase( ::haxe::unit::TestCase t){
{
		HX_STACK_FRAME("haxe.unit.TestRunner","runCase",0xec005291,"haxe.unit.TestRunner.runCase","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestRunner.hx",97,0x013a06c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(98)
		Dynamic tmp = ::haxe::Log_obj::trace_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		Dynamic old = tmp;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(99)
		Dynamic tmp1 = ::haxe::unit::TestRunner_obj::customTrace_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		::haxe::Log_obj::trace = tmp1;
		HX_STACK_LINE(101)
		::haxe::unit::TestCase tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		::hx::Class tmp3 = ::Type_obj::getClass(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		::hx::Class cl = tmp3;		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(102)
		::hx::Class tmp4 = cl;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(102)
		Array< ::String > fields = ::Type_obj::getInstanceFields(tmp4);		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(104)
		::hx::Class tmp5 = cl;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		::String tmp6 = ::Type_obj::getClassName(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(104)
		::String tmp7 = (HX_HCSTRING("Class: ","\xbe","\x50","\xe2","\x36") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(104)
		::String tmp8 = (tmp7 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(104)
		::haxe::unit::TestRunner_obj::print(tmp8);
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				bool tmp9 = (_g < fields->length);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(105)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(105)
				if ((tmp10)){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				::String tmp11 = fields->__get(_g);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(105)
				::String f = tmp11;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(105)
				++(_g);
				HX_STACK_LINE(106)
				::String fname = f;		HX_STACK_VAR(fname,"fname");
				HX_STACK_LINE(107)
				::haxe::unit::TestCase tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(107)
				::String tmp13 = f;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(107)
				Dynamic tmp14 = ::Reflect_obj::field(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(107)
				Dynamic field = tmp14;		HX_STACK_VAR(field,"field");
				HX_STACK_LINE(108)
				::String tmp15 = fname;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(108)
				::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(108)
				bool tmp17 = ::StringTools_obj::startsWith(tmp16,HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(108)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(108)
				if ((tmp17)){
					HX_STACK_LINE(108)
					Dynamic tmp19 = field;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(108)
					Dynamic tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(108)
					tmp18 = ::Reflect_obj::isFunction(tmp20);
				}
				else{
					HX_STACK_LINE(108)
					tmp18 = false;
				}
				HX_STACK_LINE(108)
				if ((tmp18)){
					HX_STACK_LINE(109)
					::haxe::unit::TestStatus tmp19 = ::haxe::unit::TestStatus_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(109)
					t->currentTest = tmp19;
					HX_STACK_LINE(110)
					::hx::Class tmp20 = cl;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(110)
					::String tmp21 = ::Type_obj::getClassName(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(110)
					t->currentTest->classname = tmp21;
					HX_STACK_LINE(111)
					t->currentTest->method = fname;
					HX_STACK_LINE(112)
					t->setup();
					HX_STACK_LINE(114)
					try
					{
					HX_STACK_CATCHABLE(::haxe::unit::TestStatus, 0);
					HX_STACK_CATCHABLE(Dynamic, 1);
					{
						HX_STACK_LINE(115)
						::haxe::unit::TestCase tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(115)
						Dynamic tmp23 = field;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(115)
						::Reflect_obj::callMethod(tmp22,tmp23,Dynamic( Array_obj<Dynamic>::__new() ));
						HX_STACK_LINE(117)
						bool tmp24 = t->currentTest->done;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(117)
						if ((tmp24)){
							HX_STACK_LINE(118)
							t->currentTest->success = true;
							HX_STACK_LINE(119)
							::haxe::unit::TestRunner_obj::print(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(121)
							t->currentTest->success = false;
							HX_STACK_LINE(122)
							t->currentTest->error = HX_HCSTRING("(warning) no assert","\x5a","\xd7","\x7f","\x8e");
							HX_STACK_LINE(123)
							::haxe::unit::TestRunner_obj::print(HX_HCSTRING("W","\x57","\x00","\x00","\x00"));
						}
					}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::haxe::unit::TestStatus >() ){
							HX_STACK_BEGIN_CATCH
							::haxe::unit::TestStatus e = __e;{
								HX_STACK_LINE(126)
								::haxe::unit::TestRunner_obj::print(HX_HCSTRING("F","\x46","\x00","\x00","\x00"));
								HX_STACK_LINE(127)
								::String tmp22 = ::haxe::CallStack_obj::toString(::haxe::CallStack_obj::exceptionStack());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(127)
								t->currentTest->backtrace = tmp22;
							}
						}
						else {
							HX_STACK_BEGIN_CATCH
							Dynamic e = __e;{
								HX_STACK_LINE(129)
								::haxe::unit::TestRunner_obj::print(HX_HCSTRING("E","\x45","\x00","\x00","\x00"));
								HX_STACK_LINE(137)
								Dynamic tmp22 = e;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(137)
								::String tmp23 = ::Std_obj::string(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(137)
								::String tmp24 = (HX_HCSTRING("exception thrown : ","\x2d","\x00","\x4b","\x48") + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(137)
								t->currentTest->error = tmp24;
								HX_STACK_LINE(139)
								::String tmp25 = ::haxe::CallStack_obj::toString(::haxe::CallStack_obj::exceptionStack());		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(139)
								t->currentTest->backtrace = tmp25;
							}
						}
					}
					HX_STACK_LINE(141)
					::haxe::unit::TestResult tmp22 = this->result;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(141)
					::haxe::unit::TestStatus tmp23 = t->currentTest;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(141)
					tmp22->add(tmp23);
					HX_STACK_LINE(142)
					t->tearDown();
				}
			}
		}
		HX_STACK_LINE(146)
		::haxe::unit::TestRunner_obj::print(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		HX_STACK_LINE(147)
		::haxe::Log_obj::trace = old;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,runCase,(void))

HX_BEGIN_DEFAULT_FUNC(__default_print,TestRunner_obj)
Void run(Dynamic v){
{
		HX_STACK_FRAME("haxe.unit.TestRunner","print",0x38bbada3,"haxe.unit.TestRunner.print","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestRunner.hx",33,0x013a06c1)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(48)
		Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::cpp::Lib_obj::print(tmp);
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

Dynamic TestRunner_obj::print;

Void TestRunner_obj::customTrace( Dynamic v,Dynamic p){
{
		HX_STACK_FRAME("haxe.unit.TestRunner","customTrace",0x2adec70a,"haxe.unit.TestRunner.customTrace","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestRunner.hx",75,0x013a06c1)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(76)
		::String tmp = (p->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic ) + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		int tmp1 = p->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		::String tmp3 = (tmp2 + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(76)
		::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(76)
		::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		::String tmp7 = (tmp6 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(76)
		::haxe::unit::TestRunner_obj::print(tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TestRunner_obj,customTrace,(void))


TestRunner_obj::TestRunner_obj()
{
}

void TestRunner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestRunner);
	HX_MARK_MEMBER_NAME(result,"result");
	HX_MARK_MEMBER_NAME(cases,"cases");
	HX_MARK_END_CLASS();
}

void TestRunner_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(result,"result");
	HX_VISIT_MEMBER_NAME(cases,"cases");
}

Dynamic TestRunner_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cases") ) { return cases; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return result; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runCase") ) { return runCase_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TestRunner_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"customTrace") ) { outValue = customTrace_dyn(); return true;  }
	}
	return false;
}

Dynamic TestRunner_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cases") ) { cases=inValue.Cast< ::List >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast< ::haxe::unit::TestResult >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TestRunner_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { print=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void TestRunner_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"));
	outFields->push(HX_HCSTRING("cases","\xc3","\xbb","\x20","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::unit::TestResult*/ ,(int)offsetof(TestRunner_obj,result),HX_HCSTRING("result","\xdd","\x68","\x84","\x08")},
	{hx::fsObject /*::List*/ ,(int)offsetof(TestRunner_obj,cases),HX_HCSTRING("cases","\xc3","\xbb","\x20","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &TestRunner_obj::print,HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("result","\xdd","\x68","\x84","\x08"),
	HX_HCSTRING("cases","\xc3","\xbb","\x20","\x41"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("runCase","\x9b","\x33","\xf7","\xce"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestRunner_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TestRunner_obj::print,"print");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestRunner_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TestRunner_obj::print,"print");
};

#endif

hx::Class TestRunner_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("customTrace","\x14","\xf5","\x5b","\xab"),
	::String(null()) };

void TestRunner_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.unit.TestRunner","\x64","\x99","\xea","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TestRunner_obj::__GetStatic;
	__mClass->mSetStaticField = &TestRunner_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestRunner_obj >;
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

void TestRunner_obj::__boot()
{
	print = new __default_print;

}

} // end namespace haxe
} // end namespace unit
