#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_vm_WeakRef
#include <cpp/vm/WeakRef.h>
#endif
namespace cpp{
namespace vm{

Void WeakRef_obj::__construct(Dynamic inObject,hx::Null< bool >  __o_inHard)
{
HX_STACK_FRAME("cpp.vm.WeakRef","new",0x9ce60541,"cpp.vm.WeakRef.new","C:\\HaxeToolkit\\haxe\\std/cpp/vm/WeakRef.hx",32,0x92259bf6)
HX_STACK_THIS(this)
HX_STACK_ARG(inObject,"inObject")
HX_STACK_ARG(__o_inHard,"inHard")
bool inHard = __o_inHard.Default(false);
{
	HX_STACK_LINE(33)
	this->hardRef = inHard;
	HX_STACK_LINE(34)
	bool tmp = this->hardRef;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	if ((tmp)){
		HX_STACK_LINE(35)
		this->ref = inObject;
	}
	else{
		HX_STACK_LINE(37)
		Dynamic tmp1 = ::__hxcpp_weak_ref_create(inObject);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		this->ref = tmp1;
	}
}
;
	return null();
}

//WeakRef_obj::~WeakRef_obj() { }

Dynamic WeakRef_obj::__CreateEmpty() { return  new WeakRef_obj; }
hx::ObjectPtr< WeakRef_obj > WeakRef_obj::__new(Dynamic inObject,hx::Null< bool >  __o_inHard)
{  hx::ObjectPtr< WeakRef_obj > _result_ = new WeakRef_obj();
	_result_->__construct(inObject,__o_inHard);
	return _result_;}

Dynamic WeakRef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeakRef_obj > _result_ = new WeakRef_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Dynamic WeakRef_obj::get( ){
	HX_STACK_FRAME("cpp.vm.WeakRef","get",0x9ce0b577,"cpp.vm.WeakRef.get","C:\\HaxeToolkit\\haxe\\std/cpp/vm/WeakRef.hx",42,0x92259bf6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	bool tmp = this->hardRef;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	if ((tmp)){
		HX_STACK_LINE(44)
		Dynamic tmp1 = this->ref;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		return tmp1;
	}
	HX_STACK_LINE(46)
	Dynamic tmp1 = ::__hxcpp_weak_ref_get(this->ref);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(WeakRef_obj,get,return )

Dynamic WeakRef_obj::set( Dynamic inObject){
	HX_STACK_FRAME("cpp.vm.WeakRef","set",0x9ce9d083,"cpp.vm.WeakRef.set","C:\\HaxeToolkit\\haxe\\std/cpp/vm/WeakRef.hx",50,0x92259bf6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inObject,"inObject")
	HX_STACK_LINE(51)
	bool tmp = this->hardRef;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	if ((tmp)){
		HX_STACK_LINE(52)
		this->ref = inObject;
	}
	else{
		HX_STACK_LINE(54)
		Dynamic tmp1 = ::__hxcpp_weak_ref_create(inObject);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		this->ref = tmp1;
	}
	HX_STACK_LINE(55)
	Dynamic tmp1 = inObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(WeakRef_obj,set,return )

::String WeakRef_obj::toString( ){
	HX_STACK_FRAME("cpp.vm.WeakRef","toString",0x4fac4c2b,"cpp.vm.WeakRef.toString","C:\\HaxeToolkit\\haxe\\std/cpp/vm/WeakRef.hx",59,0x92259bf6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	Dynamic tmp = this->get();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	::String tmp2 = (HX_HCSTRING("WeakRef(","\x2d","\x30","\x1b","\x73") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	::String tmp3 = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(WeakRef_obj,toString,return )


WeakRef_obj::WeakRef_obj()
{
}

void WeakRef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeakRef);
	HX_MARK_MEMBER_NAME(ref,"ref");
	HX_MARK_MEMBER_NAME(hardRef,"hardRef");
	HX_MARK_END_CLASS();
}

void WeakRef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ref,"ref");
	HX_VISIT_MEMBER_NAME(hardRef,"hardRef");
}

Dynamic WeakRef_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ref") ) { return ref; }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hardRef") ) { return hardRef; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WeakRef_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ref") ) { ref=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hardRef") ) { hardRef=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WeakRef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ref","\x53","\xd9","\x56","\x00"));
	outFields->push(HX_HCSTRING("hardRef","\x28","\x47","\x5c","\x93"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WeakRef_obj,ref),HX_HCSTRING("ref","\x53","\xd9","\x56","\x00")},
	{hx::fsBool,(int)offsetof(WeakRef_obj,hardRef),HX_HCSTRING("hardRef","\x28","\x47","\x5c","\x93")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ref","\x53","\xd9","\x56","\x00"),
	HX_HCSTRING("hardRef","\x28","\x47","\x5c","\x93"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeakRef_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeakRef_obj::__mClass,"__mClass");
};

#endif

hx::Class WeakRef_obj::__mClass;

void WeakRef_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.WeakRef","\xcf","\x50","\xd0","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WeakRef_obj >;
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
