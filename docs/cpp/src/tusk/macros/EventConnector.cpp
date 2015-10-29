#include <hxcpp.h>

#ifndef INCLUDED_tusk_macros_EventConnector
#include <tusk/macros/EventConnector.h>
#endif
namespace tusk{
namespace macros{

Void EventConnector_obj::__construct()
{
	return null();
}

//EventConnector_obj::~EventConnector_obj() { }

Dynamic EventConnector_obj::__CreateEmpty() { return  new EventConnector_obj; }
hx::ObjectPtr< EventConnector_obj > EventConnector_obj::__new()
{  hx::ObjectPtr< EventConnector_obj > _result_ = new EventConnector_obj();
	_result_->__construct();
	return _result_;}

Dynamic EventConnector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventConnector_obj > _result_ = new EventConnector_obj();
	_result_->__construct();
	return _result_;}

Dynamic EventConnector_obj::connect;

Void EventConnector_obj::connectEvent( Dynamic connectField,Dynamic eventField){
{
		HX_STACK_FRAME("tusk.macros.EventConnector","connectEvent",0x315fabd9,"tusk.macros.EventConnector.connectEvent","tusk/macros/EventConnector.hx",75,0x4d01efb9)
		HX_STACK_ARG(connectField,"connectField")
		HX_STACK_ARG(eventField,"eventField")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EventConnector_obj,connectEvent,(void))

Void EventConnector_obj::disconnectEvent( Dynamic disconnectField,Dynamic eventField){
{
		HX_STACK_FRAME("tusk.macros.EventConnector","disconnectEvent",0xa95e51b5,"tusk.macros.EventConnector.disconnectEvent","tusk/macros/EventConnector.hx",96,0x4d01efb9)
		HX_STACK_ARG(disconnectField,"disconnectField")
		HX_STACK_ARG(eventField,"eventField")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EventConnector_obj,disconnectEvent,(void))


EventConnector_obj::EventConnector_obj()
{
}

bool EventConnector_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { outValue = connect; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"connectEvent") ) { outValue = connectEvent_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"disconnectEvent") ) { outValue = disconnectEvent_dyn(); return true;  }
	}
	return false;
}

bool EventConnector_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { connect=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &EventConnector_obj::connect,HX_HCSTRING("connect","\xea","\x3b","\x80","\x15")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventConnector_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EventConnector_obj::connect,"connect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventConnector_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EventConnector_obj::connect,"connect");
};

#endif

hx::Class EventConnector_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("connect","\xea","\x3b","\x80","\x15"),
	HX_HCSTRING("connectEvent","\xd0","\x8b","\x3e","\xa1"),
	HX_HCSTRING("disconnectEvent","\x1e","\x86","\x18","\x02"),
	::String(null()) };

void EventConnector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.macros.EventConnector","\x05","\x4e","\xdf","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventConnector_obj::__GetStatic;
	__mClass->mSetStaticField = &EventConnector_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EventConnector_obj >;
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
} // end namespace macros
