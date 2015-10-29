#include <hxcpp.h>

#ifndef INCLUDED_haxe__EnumFlags_EnumFlags_Impl_
#include <haxe/_EnumFlags/EnumFlags_Impl_.h>
#endif
namespace haxe{
namespace _EnumFlags{

Void EnumFlags_Impl__obj::__construct()
{
	return null();
}

//EnumFlags_Impl__obj::~EnumFlags_Impl__obj() { }

Dynamic EnumFlags_Impl__obj::__CreateEmpty() { return  new EnumFlags_Impl__obj; }
hx::ObjectPtr< EnumFlags_Impl__obj > EnumFlags_Impl__obj::__new()
{  hx::ObjectPtr< EnumFlags_Impl__obj > _result_ = new EnumFlags_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic EnumFlags_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnumFlags_Impl__obj > _result_ = new EnumFlags_Impl__obj();
	_result_->__construct();
	return _result_;}

int EnumFlags_Impl__obj::_new( hx::Null< int >  __o_i){
int i = __o_i.Default(0);
	HX_STACK_FRAME("haxe._EnumFlags.EnumFlags_Impl_","_new",0xab4ad0a8,"haxe._EnumFlags.EnumFlags_Impl_._new","C:\\HaxeToolkit\\haxe\\std/haxe/EnumFlags.hx",40,0xb63b70e8)
	HX_STACK_ARG(i,"i")
{
		HX_STACK_LINE(40)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EnumFlags_Impl__obj,_new,return )

bool EnumFlags_Impl__obj::has( int this1,Dynamic v){
	HX_STACK_FRAME("haxe._EnumFlags.EnumFlags_Impl_","has",0xcbfcc9f3,"haxe._EnumFlags.EnumFlags_Impl_.has","C:\\HaxeToolkit\\haxe\\std/haxe/EnumFlags.hx",51,0xb63b70e8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(52)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	int tmp1 = v->__Index();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	int tmp2 = (int((int)1) << int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	int tmp3 = (int(tmp) & int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EnumFlags_Impl__obj,has,return )

Void EnumFlags_Impl__obj::set( int this1,Dynamic v){
{
		HX_STACK_FRAME("haxe._EnumFlags.EnumFlags_Impl_","set",0xcc05263b,"haxe._EnumFlags.EnumFlags_Impl_.set","C:\\HaxeToolkit\\haxe\\std/haxe/EnumFlags.hx",63,0xb63b70e8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(64)
		int tmp = v->__Index();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		int tmp1 = (int((int)1) << int(tmp));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		hx::OrEq(this1,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EnumFlags_Impl__obj,set,(void))

Void EnumFlags_Impl__obj::unset( int this1,Dynamic v){
{
		HX_STACK_FRAME("haxe._EnumFlags.EnumFlags_Impl_","unset",0xe10715c2,"haxe._EnumFlags.EnumFlags_Impl_.unset","C:\\HaxeToolkit\\haxe\\std/haxe/EnumFlags.hx",75,0xb63b70e8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(76)
		int tmp = v->__Index();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		int tmp1 = (int((int)1) << int(tmp));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		int tmp2 = ((int)268435455 - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		hx::AndEq(this1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EnumFlags_Impl__obj,unset,(void))

int EnumFlags_Impl__obj::ofInt( int i){
	HX_STACK_FRAME("haxe._EnumFlags.EnumFlags_Impl_","ofInt",0x67360ef1,"haxe._EnumFlags.EnumFlags_Impl_.ofInt","C:\\HaxeToolkit\\haxe\\std/haxe/EnumFlags.hx",83,0xb63b70e8)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(84)
	int tmp = i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EnumFlags_Impl__obj,ofInt,return )

int EnumFlags_Impl__obj::toInt( int this1){
	HX_STACK_FRAME("haxe._EnumFlags.EnumFlags_Impl_","toInt",0x4e29e10d,"haxe._EnumFlags.EnumFlags_Impl_.toInt","C:\\HaxeToolkit\\haxe\\std/haxe/EnumFlags.hx",91,0xb63b70e8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(92)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EnumFlags_Impl__obj,toInt,return )


EnumFlags_Impl__obj::EnumFlags_Impl__obj()
{
}

bool EnumFlags_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { outValue = has_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unset") ) { outValue = unset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ofInt") ) { outValue = ofInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnumFlags_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnumFlags_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class EnumFlags_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("unset","\xe9","\xf2","\xee","\xa6"),
	HX_HCSTRING("ofInt","\x18","\xec","\x1d","\x2d"),
	HX_HCSTRING("toInt","\x34","\xbe","\x11","\x14"),
	::String(null()) };

void EnumFlags_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe._EnumFlags.EnumFlags_Impl_","\x87","\x6a","\xb0","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EnumFlags_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EnumFlags_Impl__obj >;
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
} // end namespace _EnumFlags
