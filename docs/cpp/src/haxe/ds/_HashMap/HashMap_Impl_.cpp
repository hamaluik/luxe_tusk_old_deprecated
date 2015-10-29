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
#ifndef INCLUDED_haxe_ds__HashMap_HashMap_Impl_
#include <haxe/ds/_HashMap/HashMap_Impl_.h>
#endif
namespace haxe{
namespace ds{
namespace _HashMap{

Void HashMap_Impl__obj::__construct()
{
	return null();
}

//HashMap_Impl__obj::~HashMap_Impl__obj() { }

Dynamic HashMap_Impl__obj::__CreateEmpty() { return  new HashMap_Impl__obj; }
hx::ObjectPtr< HashMap_Impl__obj > HashMap_Impl__obj::__new()
{  hx::ObjectPtr< HashMap_Impl__obj > _result_ = new HashMap_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic HashMap_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HashMap_Impl__obj > _result_ = new HashMap_Impl__obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::_HashMap::HashMapData HashMap_Impl__obj::_new( ){
	HX_STACK_FRAME("haxe.ds._HashMap.HashMap_Impl_","_new",0x2a77b589,"haxe.ds._HashMap.HashMap_Impl_._new","C:\\HaxeToolkit\\haxe\\std/haxe/ds/HashMap.hx",26,0xcd22ad20)
	HX_STACK_LINE(26)
	::haxe::ds::_HashMap::HashMapData tmp = ::haxe::ds::_HashMap::HashMapData_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::haxe::ds::_HashMap::HashMapData tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HashMap_Impl__obj,_new,return )

Void HashMap_Impl__obj::set( ::haxe::ds::_HashMap::HashMapData this1,Dynamic k,Dynamic v){
{
		HX_STACK_FRAME("haxe.ds._HashMap.HashMap_Impl_","set",0x5f88387a,"haxe.ds._HashMap.HashMap_Impl_.set","C:\\HaxeToolkit\\haxe\\std/haxe/ds/HashMap.hx",28,0xcd22ad20)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(k,"k")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(29)
		int tmp = k->__Field(HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		Dynamic tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		this1->keys->set(tmp,tmp1);
		HX_STACK_LINE(30)
		int tmp2 = k->__Field(HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		this1->values->set(tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HashMap_Impl__obj,set,(void))

Dynamic HashMap_Impl__obj::get( ::haxe::ds::_HashMap::HashMapData this1,Dynamic k){
	HX_STACK_FRAME("haxe.ds._HashMap.HashMap_Impl_","get",0x5f7f1d6e,"haxe.ds._HashMap.HashMap_Impl_.get","C:\\HaxeToolkit\\haxe\\std/haxe/ds/HashMap.hx",32,0xcd22ad20)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(33)
	int tmp = k->__Field(HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	Dynamic tmp1 = this1->values->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HashMap_Impl__obj,get,return )

bool HashMap_Impl__obj::exists( ::haxe::ds::_HashMap::HashMapData this1,Dynamic k){
	HX_STACK_FRAME("haxe.ds._HashMap.HashMap_Impl_","exists",0xaabf1804,"haxe.ds._HashMap.HashMap_Impl_.exists","C:\\HaxeToolkit\\haxe\\std/haxe/ds/HashMap.hx",35,0xcd22ad20)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(36)
	int tmp = k->__Field(HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	bool tmp1 = this1->values->exists(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HashMap_Impl__obj,exists,return )

bool HashMap_Impl__obj::remove( ::haxe::ds::_HashMap::HashMapData this1,Dynamic k){
	HX_STACK_FRAME("haxe.ds._HashMap.HashMap_Impl_","remove",0xef67966c,"haxe.ds._HashMap.HashMap_Impl_.remove","C:\\HaxeToolkit\\haxe\\std/haxe/ds/HashMap.hx",38,0xcd22ad20)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(39)
	int tmp = k->__Field(HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	this1->values->remove(tmp);
	HX_STACK_LINE(40)
	int tmp1 = k->__Field(HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	bool tmp2 = this1->keys->remove(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HashMap_Impl__obj,remove,return )

Dynamic HashMap_Impl__obj::keys( ::haxe::ds::_HashMap::HashMapData this1){
	HX_STACK_FRAME("haxe.ds._HashMap.HashMap_Impl_","keys",0x325f821c,"haxe.ds._HashMap.HashMap_Impl_.keys","C:\\HaxeToolkit\\haxe\\std/haxe/ds/HashMap.hx",42,0xcd22ad20)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(43)
	Dynamic tmp = this1->keys->iterator();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HashMap_Impl__obj,keys,return )

Dynamic HashMap_Impl__obj::iterator( ::haxe::ds::_HashMap::HashMapData this1){
	HX_STACK_FRAME("haxe.ds._HashMap.HashMap_Impl_","iterator",0x2fca1e16,"haxe.ds._HashMap.HashMap_Impl_.iterator","C:\\HaxeToolkit\\haxe\\std/haxe/ds/HashMap.hx",45,0xcd22ad20)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(46)
	Dynamic tmp = this1->values->iterator();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HashMap_Impl__obj,iterator,return )


HashMap_Impl__obj::HashMap_Impl__obj()
{
}

bool HashMap_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"keys") ) { outValue = keys_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"remove") ) { outValue = remove_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HashMap_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HashMap_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class HashMap_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	::String(null()) };

void HashMap_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds._HashMap.HashMap_Impl_","\x46","\xb1","\x8f","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HashMap_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HashMap_Impl__obj >;
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
