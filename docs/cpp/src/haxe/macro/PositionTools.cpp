#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_PositionTools
#include <haxe/macro/PositionTools.h>
#endif
namespace haxe{
namespace macro{

Void PositionTools_obj::__construct()
{
	return null();
}

//PositionTools_obj::~PositionTools_obj() { }

Dynamic PositionTools_obj::__CreateEmpty() { return  new PositionTools_obj; }
hx::ObjectPtr< PositionTools_obj > PositionTools_obj::__new()
{  hx::ObjectPtr< PositionTools_obj > _result_ = new PositionTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic PositionTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PositionTools_obj > _result_ = new PositionTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic PositionTools_obj::here;

Dynamic PositionTools_obj::getInfos( Dynamic p){
	HX_STACK_FRAME("haxe.macro.PositionTools","getInfos",0x0bd2b495,"haxe.macro.PositionTools.getInfos","C:\\HaxeToolkit\\haxe\\std/haxe/macro/PositionTools.hx",22,0x8779a8df)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(26)
	Dynamic tmp = p;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PositionTools_obj,getInfos,return )

Dynamic PositionTools_obj::make( Dynamic inf){
	HX_STACK_FRAME("haxe.macro.PositionTools","make",0x7ec05bb4,"haxe.macro.PositionTools.make","C:\\HaxeToolkit\\haxe\\std/haxe/macro/PositionTools.hx",33,0x8779a8df)
	HX_STACK_ARG(inf,"inf")
	HX_STACK_LINE(37)
	Dynamic tmp = inf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PositionTools_obj,make,return )


PositionTools_obj::PositionTools_obj()
{
}

bool PositionTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"here") ) { outValue = here; return true;  }
		if (HX_FIELD_EQ(inName,"make") ) { outValue = make_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getInfos") ) { outValue = getInfos_dyn(); return true;  }
	}
	return false;
}

bool PositionTools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"here") ) { here=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &PositionTools_obj::here,HX_HCSTRING("here","\xf0","\x37","\x0b","\x45")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PositionTools_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PositionTools_obj::here,"here");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PositionTools_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PositionTools_obj::here,"here");
};

#endif

hx::Class PositionTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("here","\xf0","\x37","\x0b","\x45"),
	HX_HCSTRING("getInfos","\xcf","\x37","\xed","\x1d"),
	HX_HCSTRING("make","\xee","\x39","\x56","\x48"),
	::String(null()) };

void PositionTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.macro.PositionTools","\x68","\x94","\xe9","\x5f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PositionTools_obj::__GetStatic;
	__mClass->mSetStaticField = &PositionTools_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PositionTools_obj >;
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
} // end namespace macro
