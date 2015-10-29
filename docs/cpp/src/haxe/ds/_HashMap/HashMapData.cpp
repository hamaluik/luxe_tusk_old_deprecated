#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds__HashMap_HashMapData
#include <haxe/ds/_HashMap/HashMapData.h>
#endif
namespace haxe{
namespace ds{
namespace _HashMap{

Void HashMapData_obj::__construct()
{
HX_STACK_FRAME("haxe.ds._HashMap.HashMapData","new",0x79117a62,"haxe.ds._HashMap.HashMapData.new","C:\\HaxeToolkit\\haxe\\std/haxe/ds/HashMap.hx",53,0xcd22ad20)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(54)
	::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	this->keys = tmp;
	HX_STACK_LINE(55)
	::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	this->values = tmp1;
}
;
	return null();
}

//HashMapData_obj::~HashMapData_obj() { }

Dynamic HashMapData_obj::__CreateEmpty() { return  new HashMapData_obj; }
hx::ObjectPtr< HashMapData_obj > HashMapData_obj::__new()
{  hx::ObjectPtr< HashMapData_obj > _result_ = new HashMapData_obj();
	_result_->__construct();
	return _result_;}

Dynamic HashMapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HashMapData_obj > _result_ = new HashMapData_obj();
	_result_->__construct();
	return _result_;}


HashMapData_obj::HashMapData_obj()
{
}

void HashMapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HashMapData);
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_END_CLASS();
}

void HashMapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keys,"keys");
	HX_VISIT_MEMBER_NAME(values,"values");
}

Dynamic HashMapData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return values; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HashMapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HashMapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"));
	outFields->push(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(HashMapData_obj,keys),HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(HashMapData_obj,values),HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HashMapData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HashMapData_obj::__mClass,"__mClass");
};

#endif

hx::Class HashMapData_obj::__mClass;

void HashMapData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds._HashMap.HashMapData","\x70","\x61","\x30","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HashMapData_obj >;
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
} // end namespace _HashMap
