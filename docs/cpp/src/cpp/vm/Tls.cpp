#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Tls
#include <cpp/vm/Tls.h>
#endif
namespace cpp{
namespace vm{

Void Tls_obj::__construct()
{
HX_STACK_FRAME("cpp.vm.Tls","new",0x9c891f81,"cpp.vm.Tls.new","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Tls.hx",30,0x97966a36)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(31)
	int tmp = (::cpp::vm::Tls_obj::sFreeSlot)++;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	this->mTLSID = tmp;
}
;
	return null();
}

//Tls_obj::~Tls_obj() { }

Dynamic Tls_obj::__CreateEmpty() { return  new Tls_obj; }
hx::ObjectPtr< Tls_obj > Tls_obj::__new()
{  hx::ObjectPtr< Tls_obj > _result_ = new Tls_obj();
	_result_->__construct();
	return _result_;}

Dynamic Tls_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tls_obj > _result_ = new Tls_obj();
	_result_->__construct();
	return _result_;}

Dynamic Tls_obj::get_value( ){
	HX_STACK_FRAME("cpp.vm.Tls","get_value",0x2340b9a9,"cpp.vm.Tls.get_value","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Tls.hx",34,0x97966a36)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	Dynamic tmp = ::__hxcpp_tls_get(this->mTLSID);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tls_obj,get_value,return )

Dynamic Tls_obj::set_value( Dynamic v){
	HX_STACK_FRAME("cpp.vm.Tls","set_value",0x0691a5b5,"cpp.vm.Tls.set_value","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Tls.hx",38,0x97966a36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(39)
	::__hxcpp_tls_set(this->mTLSID,v);
	HX_STACK_LINE(40)
	Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Tls_obj,set_value,return )

int Tls_obj::sFreeSlot;


Tls_obj::Tls_obj()
{
}

Dynamic Tls_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return get_value(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mTLSID") ) { return mTLSID; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Tls_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"sFreeSlot") ) { outValue = sFreeSlot; return true;  }
	}
	return false;
}

Dynamic Tls_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return set_value(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mTLSID") ) { mTLSID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tls_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"sFreeSlot") ) { sFreeSlot=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Tls_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mTLSID","\xe9","\x80","\x0a","\x25"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Tls_obj,mTLSID),HX_HCSTRING("mTLSID","\xe9","\x80","\x0a","\x25")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Tls_obj::sFreeSlot,HX_HCSTRING("sFreeSlot","\x5d","\x54","\x7f","\xab")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mTLSID","\xe9","\x80","\x0a","\x25"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tls_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tls_obj::sFreeSlot,"sFreeSlot");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tls_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tls_obj::sFreeSlot,"sFreeSlot");
};

#endif

hx::Class Tls_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sFreeSlot","\x5d","\x54","\x7f","\xab"),
	::String(null()) };

void Tls_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.Tls","\x0f","\x4b","\xc9","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tls_obj::__GetStatic;
	__mClass->mSetStaticField = &Tls_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tls_obj >;
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

void Tls_obj::__boot()
{
	sFreeSlot= (int)0;
}

} // end namespace cpp
} // end namespace vm
