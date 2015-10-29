#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_sys_db_Manager
#include <sys/db/Manager.h>
#endif
#ifndef INCLUDED_sys_db_Object
#include <sys/db/Object.h>
#endif
namespace sys{
namespace db{

Void Object_obj::__construct()
{
HX_STACK_FRAME("sys.db.Object","new",0x20b4b720,"sys.db.Object.new","C:\\HaxeToolkit\\haxe\\std/sys/db/Object.hx",38,0x1685df89)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(40)
	::sys::db::Manager tmp = this->_manager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	if ((tmp1)){
		HX_STACK_LINE(40)
		::sys::db::Manager tmp2 = this->__getManager();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		this->_manager = tmp2;
	}
}
;
	return null();
}

//Object_obj::~Object_obj() { }

Dynamic Object_obj::__CreateEmpty() { return  new Object_obj; }
hx::ObjectPtr< Object_obj > Object_obj::__new()
{  hx::ObjectPtr< Object_obj > _result_ = new Object_obj();
	_result_->__construct();
	return _result_;}

Dynamic Object_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Object_obj > _result_ = new Object_obj();
	_result_->__construct();
	return _result_;}

::sys::db::Manager Object_obj::__getManager( ){
	HX_STACK_FRAME("sys.db.Object","__getManager",0x8ee2d4d7,"sys.db.Object.__getManager","C:\\HaxeToolkit\\haxe\\std/sys/db/Object.hx",46,0x1685df89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	::hx::Class tmp = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	Dynamic cls = tmp;		HX_STACK_VAR(cls,"cls");
	HX_STACK_LINE(48)
	return cls->__Field(HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"), hx::paccDynamic );
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,__getManager,return )

Void Object_obj::insert( ){
{
		HX_STACK_FRAME("sys.db.Object","insert",0x7f791479,"sys.db.Object.insert","C:\\HaxeToolkit\\haxe\\std/sys/db/Object.hx",52,0x1685df89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		::sys::db::Manager tmp = this->_manager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		tmp->doInsert(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,insert,(void))

Void Object_obj::update( ){
{
		HX_STACK_FRAME("sys.db.Object","update",0x68a15749,"sys.db.Object.update","C:\\HaxeToolkit\\haxe\\std/sys/db/Object.hx",56,0x1685df89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		::sys::db::Manager tmp = this->_manager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		tmp->doUpdate(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,update,(void))

Void Object_obj::lock( ){
{
		HX_STACK_FRAME("sys.db.Object","lock",0x7c209d2b,"sys.db.Object.lock","C:\\HaxeToolkit\\haxe\\std/sys/db/Object.hx",60,0x1685df89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		::sys::db::Manager tmp = this->_manager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		tmp->doLock(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,lock,(void))

Void Object_obj::_delete( ){
{
		HX_STACK_FRAME("sys.db.Object","delete",0x4c74916b,"sys.db.Object.delete","C:\\HaxeToolkit\\haxe\\std/sys/db/Object.hx",64,0x1685df89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		::sys::db::Manager tmp = this->_manager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		tmp->doDelete(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,_delete,(void))

bool Object_obj::isLocked( ){
	HX_STACK_FRAME("sys.db.Object","isLocked",0x0f5341d4,"sys.db.Object.isLocked","C:\\HaxeToolkit\\haxe\\std/sys/db/Object.hx",68,0x1685df89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	bool tmp = this->_lock;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,isLocked,return )

::String Object_obj::toString( ){
	HX_STACK_FRAME("sys.db.Object","toString",0x959171ec,"sys.db.Object.toString","C:\\HaxeToolkit\\haxe\\std/sys/db/Object.hx",72,0x1685df89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	::sys::db::Manager tmp = this->_manager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	::String tmp1 = tmp->objectToString(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,toString,return )


Object_obj::Object_obj()
{
}

void Object_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Object);
	HX_MARK_MEMBER_NAME(_lock,"_lock");
	HX_MARK_MEMBER_NAME(_manager,"_manager");
	HX_MARK_MEMBER_NAME(__cache__,"__cache__");
	HX_MARK_END_CLASS();
}

void Object_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lock,"_lock");
	HX_VISIT_MEMBER_NAME(_manager,"_manager");
	HX_VISIT_MEMBER_NAME(__cache__,"__cache__");
}

Dynamic Object_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_lock") ) { return _lock; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"delete") ) { return _delete_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_manager") ) { return _manager; }
		if (HX_FIELD_EQ(inName,"isLocked") ) { return isLocked_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__cache__") ) { return __cache__; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__getManager") ) { return __getManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Object_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_lock") ) { _lock=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_manager") ) { _manager=inValue.Cast< ::sys::db::Manager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__cache__") ) { __cache__=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Object_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_lock","\xca","\xb7","\xc8","\xfa"));
	outFields->push(HX_HCSTRING("_manager","\xee","\xeb","\x79","\x4d"));
	outFields->push(HX_HCSTRING("__cache__","\xc2","\xd2","\x6f","\xa4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Object_obj,_lock),HX_HCSTRING("_lock","\xca","\xb7","\xc8","\xfa")},
	{hx::fsObject /*::sys::db::Manager*/ ,(int)offsetof(Object_obj,_manager),HX_HCSTRING("_manager","\xee","\xeb","\x79","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Object_obj,__cache__),HX_HCSTRING("__cache__","\xc2","\xd2","\x6f","\xa4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_lock","\xca","\xb7","\xc8","\xfa"),
	HX_HCSTRING("_manager","\xee","\xeb","\x79","\x4d"),
	HX_HCSTRING("__cache__","\xc2","\xd2","\x6f","\xa4"),
	HX_HCSTRING("__getManager","\x97","\x93","\xb6","\x9b"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a"),
	HX_HCSTRING("isLocked","\x94","\xa0","\x30","\xb2"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Object_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Object_obj::__mClass,"__mClass");
};

#endif

hx::Class Object_obj::__mClass;

void Object_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db.Object","\x2e","\xe7","\x8a","\xe8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Object_obj >;
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

} // end namespace sys
} // end namespace db
