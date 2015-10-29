#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_tusk_debug_Exception
#include <tusk/debug/Exception.h>
#endif
#ifndef INCLUDED_tusk_debug_ExceptionType
#include <tusk/debug/ExceptionType.h>
#endif
#ifndef INCLUDED_tusk_events_EventRouter
#include <tusk/events/EventRouter.h>
#endif
#ifndef INCLUDED_tusk_events_EventType
#include <tusk/events/EventType.h>
#endif
namespace tusk{
namespace events{

Void EventRouter_obj::__construct()
{
HX_STACK_FRAME("tusk.events.EventRouter","new",0x55a692f5,"tusk.events.EventRouter.new","tusk/events/EventRouter.hx",12,0x0671ac3b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	this->handlers = ::haxe::ds::EnumValueMap_obj::__new();
}
;
	return null();
}

//EventRouter_obj::~EventRouter_obj() { }

Dynamic EventRouter_obj::__CreateEmpty() { return  new EventRouter_obj; }
hx::ObjectPtr< EventRouter_obj > EventRouter_obj::__new()
{  hx::ObjectPtr< EventRouter_obj > _result_ = new EventRouter_obj();
	_result_->__construct();
	return _result_;}

Dynamic EventRouter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventRouter_obj > _result_ = new EventRouter_obj();
	_result_->__construct();
	return _result_;}

Void EventRouter_obj::registerHandler( ::tusk::events::EventType type,Dynamic handler){
{
		HX_STACK_FRAME("tusk.events.EventRouter","registerHandler",0x7960e1bc,"tusk.events.EventRouter.registerHandler","tusk/events/EventRouter.hx",21,0x0671ac3b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(22)
		bool tmp = (handler == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		if ((tmp)){
			HX_STACK_LINE(23)
			Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("EventRouter.hx","\x3b","\x64","\x26","\x45"),23,HX_HCSTRING("tusk.events.EventRouter","\x83","\xf4","\xe2","\xea"),HX_HCSTRING("registerHandler","\xa7","\x13","\xea","\xf8"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(23)
			::tusk::debug::Exception tmp2 = ::tusk::debug::Exception_obj::__new(HX_HCSTRING("Event handler cannot be null!","\xde","\xe7","\xd4","\x52"),null(),null(),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(25)
		::haxe::ds::EnumValueMap tmp1 = this->handlers;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		::tusk::events::EventType tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		if ((tmp4)){
			HX_STACK_LINE(26)
			::haxe::ds::EnumValueMap tmp5 = this->handlers;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(26)
			::tusk::events::EventType tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(26)
			tmp5->set(tmp6,Dynamic( Array_obj<Dynamic>::__new() ));
		}
		HX_STACK_LINE(28)
		::haxe::ds::EnumValueMap tmp5 = this->handlers;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		::tusk::events::EventType tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(28)
		Dynamic tmp7 = handler;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(28)
		tmp5->get(tmp6)->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(EventRouter_obj,registerHandler,(void))

Void EventRouter_obj::unregisterHandler( ::tusk::events::EventType type,Dynamic handler){
{
		HX_STACK_FRAME("tusk.events.EventRouter","unregisterHandler",0x0f60f6c3,"tusk.events.EventRouter.unregisterHandler","tusk/events/EventRouter.hx",36,0x0671ac3b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(37)
		::haxe::ds::EnumValueMap tmp = this->handlers;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		::tusk::events::EventType tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		if ((tmp3)){
			HX_STACK_LINE(37)
			return null();
		}
		HX_STACK_LINE(38)
		::haxe::ds::EnumValueMap tmp4 = this->handlers;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		::tusk::events::EventType tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		Dynamic tmp6 = handler;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		tmp4->get(tmp5)->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(EventRouter_obj,unregisterHandler,(void))

Void EventRouter_obj::onEvent( ::tusk::events::EventType type,Dynamic data){
{
		HX_STACK_FRAME("tusk.events.EventRouter","onEvent",0xf9929790,"tusk.events.EventRouter.onEvent","tusk/events/EventRouter.hx",46,0x0671ac3b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(47)
		::haxe::ds::EnumValueMap tmp = this->handlers;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		::tusk::events::EventType tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		if ((tmp3)){
			HX_STACK_LINE(47)
			return null();
		}
		HX_STACK_LINE(48)
		::haxe::ds::EnumValueMap tmp4 = this->handlers;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		::tusk::events::EventType tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		cpp::ArrayBase handlerArray = tmp4->get(tmp5);		HX_STACK_VAR(handlerArray,"handlerArray");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			while((true)){
				HX_STACK_LINE(49)
				bool tmp6 = (_g < handlerArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(49)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(49)
				if ((tmp7)){
					HX_STACK_LINE(49)
					break;
				}
				HX_STACK_LINE(49)
				Dynamic tmp8 = handlerArray->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(49)
				Dynamic handler = tmp8;		HX_STACK_VAR(handler,"handler");
				HX_STACK_LINE(49)
				++(_g);
				HX_STACK_LINE(50)
				Dynamic tmp9 = data;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(50)
				handler(tmp9).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(EventRouter_obj,onEvent,(void))


EventRouter_obj::EventRouter_obj()
{
}

void EventRouter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventRouter);
	HX_MARK_MEMBER_NAME(handlers,"handlers");
	HX_MARK_END_CLASS();
}

void EventRouter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handlers,"handlers");
}

Dynamic EventRouter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onEvent") ) { return onEvent_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"handlers") ) { return handlers; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerHandler") ) { return registerHandler_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unregisterHandler") ) { return unregisterHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EventRouter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"handlers") ) { handlers=inValue.Cast< ::haxe::ds::EnumValueMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventRouter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handlers","\x69","\x21","\x24","\xd5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::EnumValueMap*/ ,(int)offsetof(EventRouter_obj,handlers),HX_HCSTRING("handlers","\x69","\x21","\x24","\xd5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("handlers","\x69","\x21","\x24","\xd5"),
	HX_HCSTRING("registerHandler","\xa7","\x13","\xea","\xf8"),
	HX_HCSTRING("unregisterHandler","\x6e","\xb9","\x0a","\x69"),
	HX_HCSTRING("onEvent","\x7b","\x66","\x02","\x0c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventRouter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventRouter_obj::__mClass,"__mClass");
};

#endif

hx::Class EventRouter_obj::__mClass;

void EventRouter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.events.EventRouter","\x83","\xf4","\xe2","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EventRouter_obj >;
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
} // end namespace events
