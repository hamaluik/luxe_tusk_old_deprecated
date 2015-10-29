#include <hxcpp.h>

#ifndef INCLUDED_cpp__ConstCharStar_ConstCharStar_Impl_
#include <cpp/_ConstCharStar/ConstCharStar_Impl_.h>
#endif
namespace cpp{
namespace _ConstCharStar{

Void ConstCharStar_Impl__obj::__construct()
{
	return null();
}

//ConstCharStar_Impl__obj::~ConstCharStar_Impl__obj() { }

Dynamic ConstCharStar_Impl__obj::__CreateEmpty() { return  new ConstCharStar_Impl__obj; }
hx::ObjectPtr< ConstCharStar_Impl__obj > ConstCharStar_Impl__obj::__new()
{  hx::ObjectPtr< ConstCharStar_Impl__obj > _result_ = new ConstCharStar_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ConstCharStar_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConstCharStar_Impl__obj > _result_ = new ConstCharStar_Impl__obj();
	_result_->__construct();
	return _result_;}

 const ::cpp::Char *  ConstCharStar_Impl__obj::_new( ::String s){
	HX_STACK_FRAME("cpp._ConstCharStar.ConstCharStar_Impl_","_new",0xd277bf9b,"cpp._ConstCharStar.ConstCharStar_Impl_._new","C:\\HaxeToolkit\\haxe\\std/cpp/ConstCharStar.hx",5,0x4cf9d178)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(5)
	return s.__s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConstCharStar_Impl__obj,_new,return )

 const ::cpp::Char *  ConstCharStar_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("cpp._ConstCharStar.ConstCharStar_Impl_","fromString",0xa6853f95,"cpp._ConstCharStar.ConstCharStar_Impl_.fromString","C:\\HaxeToolkit\\haxe\\std/cpp/ConstCharStar.hx",8,0x4cf9d178)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(8)
	return s.__s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConstCharStar_Impl__obj,fromString,return )

::String ConstCharStar_Impl__obj::toString(  const ::cpp::Char *  this){
	HX_STACK_FRAME("cpp._ConstCharStar.ConstCharStar_Impl_","toString",0xdba21fe6,"cpp._ConstCharStar.ConstCharStar_Impl_.toString","C:\\HaxeToolkit\\haxe\\std/cpp/ConstCharStar.hx",11,0x4cf9d178)
	HX_STACK_ARG(this,"this")
	HX_STACK_LINE(11)
	return ::String(this);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConstCharStar_Impl__obj,toString,return )

 const ::cpp::Char *  ConstCharStar_Impl__obj::toPointer(  const ::cpp::Char *  this){
	HX_STACK_FRAME("cpp._ConstCharStar.ConstCharStar_Impl_","toPointer",0xaa67fc08,"cpp._ConstCharStar.ConstCharStar_Impl_.toPointer","C:\\HaxeToolkit\\haxe\\std/cpp/ConstCharStar.hx",14,0x4cf9d178)
	HX_STACK_ARG(this,"this")
	HX_STACK_LINE(14)
	return this;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConstCharStar_Impl__obj,toPointer,return )


ConstCharStar_Impl__obj::ConstCharStar_Impl__obj()
{
}

bool ConstCharStar_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
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
	HX_MARK_MEMBER_NAME(ConstCharStar_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConstCharStar_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class ConstCharStar_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toPointer","\x82","\xf8","\xb5","\x80"),
	::String(null()) };

void ConstCharStar_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp._ConstCharStar.ConstCharStar_Impl_","\x74","\xe0","\xef","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConstCharStar_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ConstCharStar_Impl__obj >;
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
} // end namespace _ConstCharStar
