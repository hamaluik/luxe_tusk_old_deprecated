#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Lock
#include <cpp/vm/Lock.h>
#endif
namespace cpp{
namespace vm{

Void Lock_obj::__construct()
{
HX_STACK_FRAME("cpp.vm.Lock","new",0x9e13fec9,"cpp.vm.Lock.new","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Lock.hx",27,0xe4298fc0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	Dynamic tmp = ::__hxcpp_lock_create();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	this->l = tmp;
}
;
	return null();
}

//Lock_obj::~Lock_obj() { }

Dynamic Lock_obj::__CreateEmpty() { return  new Lock_obj; }
hx::ObjectPtr< Lock_obj > Lock_obj::__new()
{  hx::ObjectPtr< Lock_obj > _result_ = new Lock_obj();
	_result_->__construct();
	return _result_;}

Dynamic Lock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lock_obj > _result_ = new Lock_obj();
	_result_->__construct();
	return _result_;}

bool Lock_obj::wait( Dynamic __o_timeout){
Dynamic timeout = __o_timeout.Default(-1);
	HX_STACK_FRAME("cpp.vm.Lock","wait",0xb95ac7ec,"cpp.vm.Lock.wait","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Lock.hx",30,0xe4298fc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(timeout,"timeout")
{
		HX_STACK_LINE(31)
		bool tmp = ::__hxcpp_lock_wait(this->l,timeout);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Lock_obj,wait,return )

Void Lock_obj::release( ){
{
		HX_STACK_FRAME("cpp.vm.Lock","release",0xba6f9cb0,"cpp.vm.Lock.release","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Lock.hx",34,0xe4298fc0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		::__hxcpp_lock_release(this->l);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Lock_obj,release,(void))


Lock_obj::Lock_obj()
{
}

void Lock_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Lock);
	HX_MARK_MEMBER_NAME(l,"l");
	HX_MARK_END_CLASS();
}

void Lock_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(l,"l");
}

Dynamic Lock_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { return l; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wait") ) { return wait_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"release") ) { return release_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lock_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { l=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Lock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("l","\x6c","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Lock_obj,l),HX_HCSTRING("l","\x6c","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("l","\x6c","\x00","\x00","\x00"),
	HX_HCSTRING("wait","\x75","\x5a","\xf2","\x4e"),
	HX_HCSTRING("release","\xc7","\x85","\xed","\x58"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lock_obj::__mClass,"__mClass");
};

#endif

hx::Class Lock_obj::__mClass;

void Lock_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.Lock","\x57","\xe6","\x10","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Lock_obj >;
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
