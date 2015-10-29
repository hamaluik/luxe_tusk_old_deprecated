#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_remoting_Context
#include <haxe/remoting/Context.h>
#endif
#ifndef INCLUDED_haxe_remoting_ContextAll
#include <haxe/remoting/ContextAll.h>
#endif
namespace haxe{
namespace remoting{

Void ContextAll_obj::__construct()
{
HX_STACK_FRAME("haxe.remoting.ContextAll","new",0x032f3307,"haxe.remoting.ContextAll.new","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/ContextAll.hx",24,0x3f5d1530)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	super::__construct();
}
;
	return null();
}

//ContextAll_obj::~ContextAll_obj() { }

Dynamic ContextAll_obj::__CreateEmpty() { return  new ContextAll_obj; }
hx::ObjectPtr< ContextAll_obj > ContextAll_obj::__new()
{  hx::ObjectPtr< ContextAll_obj > _result_ = new ContextAll_obj();
	_result_->__construct();
	return _result_;}

Dynamic ContextAll_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ContextAll_obj > _result_ = new ContextAll_obj();
	_result_->__construct();
	return _result_;}

Dynamic ContextAll_obj::call( Array< ::String > path,cpp::ArrayBase params){
	HX_STACK_FRAME("haxe.remoting.ContextAll","call",0xbed50817,"haxe.remoting.ContextAll.call","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/ContextAll.hx",26,0x3f5d1530)
	HX_STACK_THIS(this)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(55)
	Dynamic o = null();		HX_STACK_VAR(o,"o");
	HX_STACK_LINE(56)
	Dynamic m = null();		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(58)
	bool tmp = (m == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	if ((tmp)){
		HX_STACK_LINE(59)
		Dynamic tmp1 = this->super::call(path,params);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		return tmp1;
	}
	HX_STACK_LINE(60)
	Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	Dynamic tmp2 = m;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	Dynamic tmp3 = ::Reflect_obj::callMethod(tmp1,tmp2,params);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	return tmp3;
}



ContextAll_obj::ContextAll_obj()
{
}

Dynamic ContextAll_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ContextAll_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ContextAll_obj::__mClass,"__mClass");
};

#endif

hx::Class ContextAll_obj::__mClass;

void ContextAll_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.ContextAll","\x95","\xa3","\xb1","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ContextAll_obj >;
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
} // end namespace remoting
