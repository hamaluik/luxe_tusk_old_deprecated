#include <hxcpp.h>

#ifndef INCLUDED_cpp__CastCharStar_CastCharStar_Impl_
#include <cpp/_CastCharStar/CastCharStar_Impl_.h>
#endif
namespace cpp{
namespace _CastCharStar{

Void CastCharStar_Impl__obj::__construct()
{
	return null();
}

//CastCharStar_Impl__obj::~CastCharStar_Impl__obj() { }

Dynamic CastCharStar_Impl__obj::__CreateEmpty() { return  new CastCharStar_Impl__obj; }
hx::ObjectPtr< CastCharStar_Impl__obj > CastCharStar_Impl__obj::__new()
{  hx::ObjectPtr< CastCharStar_Impl__obj > _result_ = new CastCharStar_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CastCharStar_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CastCharStar_Impl__obj > _result_ = new CastCharStar_Impl__obj();
	_result_->__construct();
	return _result_;}

 ::cpp::Char *  CastCharStar_Impl__obj::_new( ::String s){
	HX_STACK_FRAME("cpp._CastCharStar.CastCharStar_Impl_","_new",0xca2a8035,"cpp._CastCharStar.CastCharStar_Impl_._new","C:\\HaxeToolkit\\haxe\\std/cpp/CastCharStar.hx",5,0xe4fcdcf2)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(5)
	return (( ::cpp::Char * )(s.__s));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CastCharStar_Impl__obj,_new,return )

 ::cpp::Char *  CastCharStar_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("cpp._CastCharStar.CastCharStar_Impl_","fromString",0x8cb16faf,"cpp._CastCharStar.CastCharStar_Impl_.fromString","C:\\HaxeToolkit\\haxe\\std/cpp/CastCharStar.hx",8,0xe4fcdcf2)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(8)
	return (( ::cpp::Char * )(s.__s));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CastCharStar_Impl__obj,fromString,return )

 ::cpp::Char *  CastCharStar_Impl__obj::toPointer(  ::cpp::Char *  this1){
	HX_STACK_FRAME("cpp._CastCharStar.CastCharStar_Impl_","toPointer",0xa5b2cd2e,"cpp._CastCharStar.CastCharStar_Impl_.toPointer","C:\\HaxeToolkit\\haxe\\std/cpp/CastCharStar.hx",11,0xe4fcdcf2)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(11)
	 ::cpp::Char *  tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CastCharStar_Impl__obj,toPointer,return )


CastCharStar_Impl__obj::CastCharStar_Impl__obj()
{
}

bool CastCharStar_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toPointer") ) { outValue = toPointer_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CastCharStar_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CastCharStar_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class CastCharStar_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toPointer","\x82","\xf8","\xb5","\x80"),
	::String(null()) };

void CastCharStar_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp._CastCharStar.CastCharStar_Impl_","\x1a","\xe6","\xa8","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CastCharStar_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CastCharStar_Impl__obj >;
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
} // end namespace _CastCharStar
