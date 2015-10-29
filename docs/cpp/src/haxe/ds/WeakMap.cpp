#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_WeakMap
#include <haxe/ds/WeakMap.h>
#endif
namespace haxe{
namespace ds{

Void WeakMap_obj::__construct()
{
HX_STACK_FRAME("haxe.ds.WeakMap","new",0x58f74bbf,"haxe.ds.WeakMap.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/WeakMap.hx",49,0x27103697)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//WeakMap_obj::~WeakMap_obj() { }

Dynamic WeakMap_obj::__CreateEmpty() { return  new WeakMap_obj; }
hx::ObjectPtr< WeakMap_obj > WeakMap_obj::__new()
{  hx::ObjectPtr< WeakMap_obj > _result_ = new WeakMap_obj();
	_result_->__construct();
	return _result_;}

Dynamic WeakMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeakMap_obj > _result_ = new WeakMap_obj();
	_result_->__construct();
	return _result_;}

hx::Object *WeakMap_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::IMap_obj)) return operator ::haxe::IMap_obj *();
	return super::__ToInterface(inType);
}

WeakMap_obj::operator ::haxe::IMap_obj *()
	{ return new ::haxe::IMap_delegate_< WeakMap_obj >(this); }
Void WeakMap_obj::set( Dynamic key,Dynamic value){
{
		HX_STACK_FRAME("haxe.ds.WeakMap","set",0x58fb1701,"haxe.ds.WeakMap.set","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/WeakMap.hx",52,0x27103697)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(52)
		::__object_hash_set(this->h,key,value,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WeakMap_obj,set,(void))

Dynamic WeakMap_obj::get( Dynamic key){
	HX_STACK_FRAME("haxe.ds.WeakMap","get",0x58f1fbf5,"haxe.ds.WeakMap.get","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/WeakMap.hx",55,0x27103697)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(56)
	Dynamic tmp = ::__object_hash_get(this->h,key);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(WeakMap_obj,get,return )

bool WeakMap_obj::exists( Dynamic key){
	HX_STACK_FRAME("haxe.ds.WeakMap","exists",0xbb26c7dd,"haxe.ds.WeakMap.exists","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/WeakMap.hx",59,0x27103697)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(60)
	bool tmp = ::__object_hash_exists(this->h,key);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(WeakMap_obj,exists,return )

bool WeakMap_obj::remove( Dynamic key){
	HX_STACK_FRAME("haxe.ds.WeakMap","remove",0xffcf4645,"haxe.ds.WeakMap.remove","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/WeakMap.hx",63,0x27103697)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(64)
	bool tmp = ::__object_hash_remove(this->h,key);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(WeakMap_obj,remove,return )

Dynamic WeakMap_obj::keys( ){
	HX_STACK_FRAME("haxe.ds.WeakMap","keys",0x7d6f59b5,"haxe.ds.WeakMap.keys","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/WeakMap.hx",67,0x27103697)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	cpp::ArrayBase a = ::__object_hash_keys(this->h);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(69)
	Dynamic tmp = a->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(WeakMap_obj,keys,return )

Dynamic WeakMap_obj::iterator( ){
	HX_STACK_FRAME("haxe.ds.WeakMap","iterator",0xed60362f,"haxe.ds.WeakMap.iterator","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/WeakMap.hx",72,0x27103697)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	cpp::ArrayBase a = ::__object_hash_values(this->h);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(74)
	Dynamic tmp = a->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(WeakMap_obj,iterator,return )

::String WeakMap_obj::toString( ){
	HX_STACK_FRAME("haxe.ds.WeakMap","toString",0x9234bced,"haxe.ds.WeakMap.toString","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/WeakMap.hx",77,0x27103697)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	::String tmp = ::__object_hash_to_string(this->h);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(WeakMap_obj,toString,return )


WeakMap_obj::WeakMap_obj()
{
}

void WeakMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeakMap);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_END_CLASS();
}

void WeakMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
}

Dynamic WeakMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WeakMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WeakMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WeakMap_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeakMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeakMap_obj::__mClass,"__mClass");
};

#endif

hx::Class WeakMap_obj::__mClass;

void WeakMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.WeakMap","\x4d","\x00","\xe1","\xdf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WeakMap_obj >;
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
} // end namespace ds
