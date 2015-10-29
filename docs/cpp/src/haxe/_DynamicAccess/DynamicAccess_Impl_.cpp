#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe__DynamicAccess_DynamicAccess_Impl_
#include <haxe/_DynamicAccess/DynamicAccess_Impl_.h>
#endif
namespace haxe{
namespace _DynamicAccess{

Void DynamicAccess_Impl__obj::__construct()
{
	return null();
}

//DynamicAccess_Impl__obj::~DynamicAccess_Impl__obj() { }

Dynamic DynamicAccess_Impl__obj::__CreateEmpty() { return  new DynamicAccess_Impl__obj; }
hx::ObjectPtr< DynamicAccess_Impl__obj > DynamicAccess_Impl__obj::__new()
{  hx::ObjectPtr< DynamicAccess_Impl__obj > _result_ = new DynamicAccess_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic DynamicAccess_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DynamicAccess_Impl__obj > _result_ = new DynamicAccess_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic DynamicAccess_Impl__obj::_new( ){
	HX_STACK_FRAME("haxe._DynamicAccess.DynamicAccess_Impl_","_new",0x08acfd2e,"haxe._DynamicAccess.DynamicAccess_Impl_._new","C:\\HaxeToolkit\\haxe\\std/haxe/DynamicAccess.hx",37,0x60b29f0b)
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/DynamicAccess.hx",37,0x60b29f0b)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(37)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DynamicAccess_Impl__obj,_new,return )

Dynamic DynamicAccess_Impl__obj::get( Dynamic this1,::String key){
	HX_STACK_FRAME("haxe._DynamicAccess.DynamicAccess_Impl_","get",0x1a775169,"haxe._DynamicAccess.DynamicAccess_Impl_.get","C:\\HaxeToolkit\\haxe\\std/haxe/DynamicAccess.hx",47,0x60b29f0b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(51)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	Dynamic tmp2 = ::Reflect_obj::field(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DynamicAccess_Impl__obj,get,return )

Dynamic DynamicAccess_Impl__obj::set( Dynamic this1,::String key,Dynamic value){
	HX_STACK_FRAME("haxe._DynamicAccess.DynamicAccess_Impl_","set",0x1a806c75,"haxe._DynamicAccess.DynamicAccess_Impl_.set","C:\\HaxeToolkit\\haxe\\std/haxe/DynamicAccess.hx",65,0x60b29f0b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(69)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	::Reflect_obj::setField(tmp,tmp1,tmp2);
	HX_STACK_LINE(70)
	Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(DynamicAccess_Impl__obj,set,return )

bool DynamicAccess_Impl__obj::exists( Dynamic this1,::String key){
	HX_STACK_FRAME("haxe._DynamicAccess.DynamicAccess_Impl_","exists",0x769152e9,"haxe._DynamicAccess.DynamicAccess_Impl_.exists","C:\\HaxeToolkit\\haxe\\std/haxe/DynamicAccess.hx",79,0x60b29f0b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(79)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	bool tmp2 = ::Reflect_obj::hasField(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DynamicAccess_Impl__obj,exists,return )

bool DynamicAccess_Impl__obj::remove( Dynamic this1,::String key){
	HX_STACK_FRAME("haxe._DynamicAccess.DynamicAccess_Impl_","remove",0xbb39d151,"haxe._DynamicAccess.DynamicAccess_Impl_.remove","C:\\HaxeToolkit\\haxe\\std/haxe/DynamicAccess.hx",88,0x60b29f0b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(88)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	bool tmp2 = ::Reflect_obj::deleteField(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DynamicAccess_Impl__obj,remove,return )

Array< ::String > DynamicAccess_Impl__obj::keys( Dynamic this1){
	HX_STACK_FRAME("haxe._DynamicAccess.DynamicAccess_Impl_","keys",0x1094c9c1,"haxe._DynamicAccess.DynamicAccess_Impl_.keys","C:\\HaxeToolkit\\haxe\\std/haxe/DynamicAccess.hx",93,0x60b29f0b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(93)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	return ::Reflect_obj::fields(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DynamicAccess_Impl__obj,keys,return )


DynamicAccess_Impl__obj::DynamicAccess_Impl__obj()
{
}

bool DynamicAccess_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"keys") ) { outValue = keys_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"remove") ) { outValue = remove_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DynamicAccess_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DynamicAccess_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class DynamicAccess_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	::String(null()) };

void DynamicAccess_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe._DynamicAccess.DynamicAccess_Impl_","\xc1","\x8b","\x49","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DynamicAccess_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DynamicAccess_Impl__obj >;
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
} // end namespace _DynamicAccess
