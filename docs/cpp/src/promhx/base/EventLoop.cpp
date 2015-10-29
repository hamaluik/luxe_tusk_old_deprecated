#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_promhx_base_EventLoop
#include <promhx/base/EventLoop.h>
#endif
namespace promhx{
namespace base{

Void EventLoop_obj::__construct()
{
	return null();
}

//EventLoop_obj::~EventLoop_obj() { }

Dynamic EventLoop_obj::__CreateEmpty() { return  new EventLoop_obj; }
hx::ObjectPtr< EventLoop_obj > EventLoop_obj::__new()
{  hx::ObjectPtr< EventLoop_obj > _result_ = new EventLoop_obj();
	_result_->__construct();
	return _result_;}

Dynamic EventLoop_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventLoop_obj > _result_ = new EventLoop_obj();
	_result_->__construct();
	return _result_;}

::List EventLoop_obj::queue;

Dynamic EventLoop_obj::nextLoop;

Void EventLoop_obj::enqueue( Dynamic eqf){
{
		HX_STACK_FRAME("promhx.base.EventLoop","enqueue",0x80ee21f9,"promhx.base.EventLoop.enqueue","promhx/base/EventLoop.hx",21,0x2999339f)
		HX_STACK_ARG(eqf,"eqf")
		HX_STACK_LINE(22)
		::List tmp = ::promhx::base::EventLoop_obj::queue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		Dynamic tmp1 = eqf;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		tmp->add(tmp1);
		HX_STACK_LINE(23)
		::promhx::base::EventLoop_obj::continueOnNextLoop();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EventLoop_obj,enqueue,(void))

Dynamic EventLoop_obj::set_nextLoop( Dynamic f){
	HX_STACK_FRAME("promhx.base.EventLoop","set_nextLoop",0xe6204163,"promhx.base.EventLoop.set_nextLoop","promhx/base/EventLoop.hx",25,0x2999339f)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(26)
	Dynamic tmp = ::promhx::base::EventLoop_obj::nextLoop_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	if ((tmp1)){
		HX_STACK_LINE(26)
		HX_STACK_DO_THROW(HX_HCSTRING("nextLoop has already been set","\x45","\xf1","\x73","\x2b"));
	}
	else{
		HX_STACK_LINE(27)
		::promhx::base::EventLoop_obj::nextLoop = f;
	}
	HX_STACK_LINE(28)
	Dynamic tmp2 = ::promhx::base::EventLoop_obj::nextLoop_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EventLoop_obj,set_nextLoop,return )

bool EventLoop_obj::queueEmpty( ){
	HX_STACK_FRAME("promhx.base.EventLoop","queueEmpty",0x3890026b,"promhx.base.EventLoop.queueEmpty","promhx/base/EventLoop.hx",34,0x2999339f)
	HX_STACK_LINE(35)
	::List tmp = ::promhx::base::EventLoop_obj::queue;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	bool tmp1 = tmp->isEmpty();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EventLoop_obj,queueEmpty,return )

bool EventLoop_obj::finish( hx::Null< int >  __o_max_iterations){
int max_iterations = __o_max_iterations.Default(1000);
	HX_STACK_FRAME("promhx.base.EventLoop","finish",0x786ef002,"promhx.base.EventLoop.finish","promhx/base/EventLoop.hx",43,0x2999339f)
	HX_STACK_ARG(max_iterations,"max_iterations")
{
		HX_STACK_LINE(44)
		Dynamic fn = null();		HX_STACK_VAR(fn,"fn");
		HX_STACK_LINE(45)
		while((true)){
			HX_STACK_LINE(45)
			int tmp = (max_iterations)--;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(45)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(45)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			if ((tmp1)){
				HX_STACK_LINE(45)
				::List tmp3 = ::promhx::base::EventLoop_obj::queue;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(45)
				::List tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(45)
				Dynamic tmp5 = tmp4->pop();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(45)
				Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(45)
				Dynamic tmp7 = fn = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(45)
				Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(45)
				tmp2 = (tmp8 != null());
			}
			else{
				HX_STACK_LINE(45)
				tmp2 = false;
			}
			HX_STACK_LINE(45)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			if ((tmp3)){
				HX_STACK_LINE(45)
				break;
			}
			HX_STACK_LINE(46)
			fn().Cast< Void >();
		}
		HX_STACK_LINE(48)
		::List tmp = ::promhx::base::EventLoop_obj::queue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		bool tmp1 = tmp->isEmpty();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EventLoop_obj,finish,return )

Void EventLoop_obj::clear( ){
{
		HX_STACK_FRAME("promhx.base.EventLoop","clear",0x59838cbe,"promhx.base.EventLoop.clear","promhx/base/EventLoop.hx",54,0x2999339f)
		HX_STACK_LINE(55)
		::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		::promhx::base::EventLoop_obj::queue = tmp;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EventLoop_obj,clear,(void))

Void EventLoop_obj::f( ){
{
		HX_STACK_FRAME("promhx.base.EventLoop","f",0xed6c6f17,"promhx.base.EventLoop.f","promhx/base/EventLoop.hx",58,0x2999339f)
		HX_STACK_LINE(59)
		::List tmp = ::promhx::base::EventLoop_obj::queue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		Dynamic tmp1 = tmp->pop();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		Dynamic fn = tmp1;		HX_STACK_VAR(fn,"fn");
		HX_STACK_LINE(60)
		bool tmp2 = (fn != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		if ((tmp2)){
			HX_STACK_LINE(60)
			fn().Cast< Void >();
		}
		HX_STACK_LINE(61)
		::List tmp3 = ::promhx::base::EventLoop_obj::queue;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		bool tmp4 = tmp3->isEmpty();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		if ((tmp5)){
			HX_STACK_LINE(61)
			::promhx::base::EventLoop_obj::continueOnNextLoop();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EventLoop_obj,f,(void))

Void EventLoop_obj::continueOnNextLoop( ){
{
		HX_STACK_FRAME("promhx.base.EventLoop","continueOnNextLoop",0x5bda26ac,"promhx.base.EventLoop.continueOnNextLoop","promhx/base/EventLoop.hx",64,0x2999339f)
		HX_STACK_LINE(65)
		Dynamic tmp = ::promhx::base::EventLoop_obj::nextLoop_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		if ((tmp1)){
			HX_STACK_LINE(65)
			Dynamic tmp2 = ::promhx::base::EventLoop_obj::f_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(65)
			::promhx::base::EventLoop_obj::nextLoop(tmp2);
		}
		else{
			HX_STACK_LINE(77)
			::promhx::base::EventLoop_obj::f();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EventLoop_obj,continueOnNextLoop,(void))


EventLoop_obj::EventLoop_obj()
{
}

bool EventLoop_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { outValue = f_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { outValue = queue; return true;  }
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"finish") ) { outValue = finish_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enqueue") ) { outValue = enqueue_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextLoop") ) { outValue = nextLoop; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"queueEmpty") ) { outValue = queueEmpty_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_nextLoop") ) { outValue = set_nextLoop_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"continueOnNextLoop") ) { outValue = continueOnNextLoop_dyn(); return true;  }
	}
	return false;
}

bool EventLoop_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { queue=ioValue.Cast< ::List >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextLoop") ) { nextLoop=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::List*/ ,(void *) &EventLoop_obj::queue,HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &EventLoop_obj::nextLoop,HX_HCSTRING("nextLoop","\xf7","\x4c","\x84","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventLoop_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EventLoop_obj::queue,"queue");
	HX_MARK_MEMBER_NAME(EventLoop_obj::nextLoop,"nextLoop");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventLoop_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EventLoop_obj::queue,"queue");
	HX_VISIT_MEMBER_NAME(EventLoop_obj::nextLoop,"nextLoop");
};

#endif

hx::Class EventLoop_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("nextLoop","\xf7","\x4c","\x84","\xf3"),
	HX_HCSTRING("enqueue","\x88","\x18","\x24","\xc1"),
	HX_HCSTRING("set_nextLoop","\x74","\x24","\x97","\xbd"),
	HX_HCSTRING("queueEmpty","\x3c","\x4f","\x7d","\x40"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("f","\x66","\x00","\x00","\x00"),
	HX_HCSTRING("continueOnNextLoop","\x7d","\x2c","\x0a","\x7b"),
	::String(null()) };

void EventLoop_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("promhx.base.EventLoop","\xdf","\x10","\xdf","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventLoop_obj::__GetStatic;
	__mClass->mSetStaticField = &EventLoop_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EventLoop_obj >;
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

void EventLoop_obj::__boot()
{
	queue= ::List_obj::__new();
}

} // end namespace promhx
} // end namespace base
