#include <hxcpp.h>

#ifndef INCLUDED__Map_Map_Impl_
#include <_Map/Map_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace _Map{

Void Map_Impl__obj::__construct()
{
	return null();
}

//Map_Impl__obj::~Map_Impl__obj() { }

Dynamic Map_Impl__obj::__CreateEmpty() { return  new Map_Impl__obj; }
hx::ObjectPtr< Map_Impl__obj > Map_Impl__obj::__new()
{  hx::ObjectPtr< Map_Impl__obj > _result_ = new Map_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Map_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Map_Impl__obj > _result_ = new Map_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Map_Impl__obj::_new;

Void Map_Impl__obj::set( ::haxe::IMap this1,Dynamic key,Dynamic value){
{
		HX_STACK_FRAME("_Map.Map_Impl_","set",0x2d56f19f,"_Map.Map_Impl_.set","C:\\HaxeToolkit\\haxe\\std/Map.hx",71,0x23c97a5b)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(71)
		Dynamic tmp = key;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		this1->set(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Map_Impl__obj,set,(void))

Dynamic Map_Impl__obj::get( ::haxe::IMap this1,Dynamic key){
	HX_STACK_FRAME("_Map.Map_Impl_","get",0x2d4dd693,"_Map.Map_Impl_.get","C:\\HaxeToolkit\\haxe\\std/Map.hx",88,0x23c97a5b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(88)
	Dynamic tmp = key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	Dynamic tmp1 = this1->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Map_Impl__obj,get,return )

bool Map_Impl__obj::exists( ::haxe::IMap this1,Dynamic key){
	HX_STACK_FRAME("_Map.Map_Impl_","exists",0x529ee3ff,"_Map.Map_Impl_.exists","C:\\HaxeToolkit\\haxe\\std/Map.hx",95,0x23c97a5b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(95)
	Dynamic tmp = key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	bool tmp1 = this1->exists(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Map_Impl__obj,exists,return )

bool Map_Impl__obj::remove( ::haxe::IMap this1,Dynamic key){
	HX_STACK_FRAME("_Map.Map_Impl_","remove",0x97476267,"_Map.Map_Impl_.remove","C:\\HaxeToolkit\\haxe\\std/Map.hx",103,0x23c97a5b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(103)
	Dynamic tmp = key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	bool tmp1 = this1->remove(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Map_Impl__obj,remove,return )

Dynamic Map_Impl__obj::keys( ::haxe::IMap this1){
	HX_STACK_FRAME("_Map.Map_Impl_","keys",0x7972c957,"_Map.Map_Impl_.keys","C:\\HaxeToolkit\\haxe\\std/Map.hx",110,0x23c97a5b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(111)
	Dynamic tmp = this1->keys();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,keys,return )

Dynamic Map_Impl__obj::iterator( ::haxe::IMap this1){
	HX_STACK_FRAME("_Map.Map_Impl_","iterator",0x68311ed1,"_Map.Map_Impl_.iterator","C:\\HaxeToolkit\\haxe\\std/Map.hx",119,0x23c97a5b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(120)
	Dynamic tmp = this1->iterator();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,iterator,return )

::String Map_Impl__obj::toString( ::haxe::IMap this1){
	HX_STACK_FRAME("_Map.Map_Impl_","toString",0x0d05a58f,"_Map.Map_Impl_.toString","C:\\HaxeToolkit\\haxe\\std/Map.hx",128,0x23c97a5b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(129)
	::String tmp = this1->toString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,toString,return )

Dynamic Map_Impl__obj::arrayWrite( ::haxe::IMap this1,Dynamic k,Dynamic v){
	HX_STACK_FRAME("_Map.Map_Impl_","arrayWrite",0x12269829,"_Map.Map_Impl_.arrayWrite","C:\\HaxeToolkit\\haxe\\std/Map.hx",132,0x23c97a5b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(k,"k")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(133)
	Dynamic tmp = k;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	this1->set(tmp,tmp1);
	HX_STACK_LINE(134)
	Dynamic tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Map_Impl__obj,arrayWrite,return )

::haxe::ds::StringMap Map_Impl__obj::toStringMap( ::haxe::IMap t){
	HX_STACK_FRAME("_Map.Map_Impl_","toStringMap",0x930fc04d,"_Map.Map_Impl_.toStringMap","C:\\HaxeToolkit\\haxe\\std/Map.hx",137,0x23c97a5b)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(138)
	::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,toStringMap,return )

::haxe::ds::IntMap Map_Impl__obj::toIntMap( ::haxe::IMap t){
	HX_STACK_FRAME("_Map.Map_Impl_","toIntMap",0x9a49b1ab,"_Map.Map_Impl_.toIntMap","C:\\HaxeToolkit\\haxe\\std/Map.hx",141,0x23c97a5b)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(142)
	::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,toIntMap,return )

::haxe::ds::EnumValueMap Map_Impl__obj::toEnumValueMapMap( ::haxe::IMap t){
	HX_STACK_FRAME("_Map.Map_Impl_","toEnumValueMapMap",0x168455b2,"_Map.Map_Impl_.toEnumValueMapMap","C:\\HaxeToolkit\\haxe\\std/Map.hx",145,0x23c97a5b)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(146)
	::haxe::ds::EnumValueMap tmp = ::haxe::ds::EnumValueMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,toEnumValueMapMap,return )

::haxe::ds::ObjectMap Map_Impl__obj::toObjectMap( ::haxe::IMap t){
	HX_STACK_FRAME("_Map.Map_Impl_","toObjectMap",0x0ed4531f,"_Map.Map_Impl_.toObjectMap","C:\\HaxeToolkit\\haxe\\std/Map.hx",149,0x23c97a5b)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(150)
	::haxe::ds::ObjectMap tmp = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,toObjectMap,return )

::haxe::ds::StringMap Map_Impl__obj::fromStringMap( ::haxe::ds::StringMap map){
	HX_STACK_FRAME("_Map.Map_Impl_","fromStringMap",0x72ce03be,"_Map.Map_Impl_.fromStringMap","C:\\HaxeToolkit\\haxe\\std/Map.hx",153,0x23c97a5b)
	HX_STACK_ARG(map,"map")
	HX_STACK_LINE(154)
	::haxe::ds::StringMap tmp = map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,fromStringMap,return )

::haxe::ds::IntMap Map_Impl__obj::fromIntMap( ::haxe::ds::IntMap map){
	HX_STACK_FRAME("_Map.Map_Impl_","fromIntMap",0x29584d9a,"_Map.Map_Impl_.fromIntMap","C:\\HaxeToolkit\\haxe\\std/Map.hx",157,0x23c97a5b)
	HX_STACK_ARG(map,"map")
	HX_STACK_LINE(158)
	::haxe::ds::IntMap tmp = map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,fromIntMap,return )

::haxe::ds::ObjectMap Map_Impl__obj::fromObjectMap( ::haxe::ds::ObjectMap map){
	HX_STACK_FRAME("_Map.Map_Impl_","fromObjectMap",0xee929690,"_Map.Map_Impl_.fromObjectMap","C:\\HaxeToolkit\\haxe\\std/Map.hx",161,0x23c97a5b)
	HX_STACK_ARG(map,"map")
	HX_STACK_LINE(162)
	::haxe::ds::ObjectMap tmp = map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Map_Impl__obj,fromObjectMap,return )


Map_Impl__obj::Map_Impl__obj()
{
}

bool Map_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new; return true;  }
		if (HX_FIELD_EQ(inName,"keys") ) { outValue = keys_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"remove") ) { outValue = remove_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toIntMap") ) { outValue = toIntMap_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"arrayWrite") ) { outValue = arrayWrite_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromIntMap") ) { outValue = fromIntMap_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toStringMap") ) { outValue = toStringMap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toObjectMap") ) { outValue = toObjectMap_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromStringMap") ) { outValue = fromStringMap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromObjectMap") ) { outValue = fromObjectMap_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"toEnumValueMapMap") ) { outValue = toEnumValueMapMap_dyn(); return true;  }
	}
	return false;
}

bool Map_Impl__obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { _new=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Map_Impl__obj::_new,HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Map_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Map_Impl__obj::_new,"_new");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Map_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Map_Impl__obj::_new,"_new");
};

#endif

hx::Class Map_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("arrayWrite","\x86","\x84","\x86","\xca"),
	HX_HCSTRING("toStringMap","\x50","\xa5","\x9e","\x2e"),
	HX_HCSTRING("toIntMap","\xc8","\xdc","\xb2","\xc5"),
	HX_HCSTRING("toEnumValueMapMap","\xf5","\x5e","\x8d","\x00"),
	HX_HCSTRING("toObjectMap","\x22","\x38","\x63","\xaa"),
	HX_HCSTRING("fromStringMap","\x81","\x6f","\xa2","\x3b"),
	HX_HCSTRING("fromIntMap","\xf7","\x39","\xb8","\xe1"),
	HX_HCSTRING("fromObjectMap","\x53","\x02","\x67","\xb7"),
	::String(null()) };

void Map_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("_Map.Map_Impl_","\xeb","\xb3","\x17","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Map_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &Map_Impl__obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Map_Impl__obj >;
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

} // end namespace _Map
