#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_Manager
#include <sys/db/Manager.h>
#endif
#ifndef INCLUDED_sys_db_Transaction
#include <sys/db/Transaction.h>
#endif
namespace sys{
namespace db{

Void Transaction_obj::__construct()
{
	return null();
}

//Transaction_obj::~Transaction_obj() { }

Dynamic Transaction_obj::__CreateEmpty() { return  new Transaction_obj; }
hx::ObjectPtr< Transaction_obj > Transaction_obj::__new()
{  hx::ObjectPtr< Transaction_obj > _result_ = new Transaction_obj();
	_result_->__construct();
	return _result_;}

Dynamic Transaction_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transaction_obj > _result_ = new Transaction_obj();
	_result_->__construct();
	return _result_;}

bool Transaction_obj::isDeadlock( Dynamic e){
	HX_STACK_FRAME("sys.db.Transaction","isDeadlock",0x01562998,"sys.db.Transaction.isDeadlock","C:\\HaxeToolkit\\haxe\\std/sys/db/Transaction.hx",26,0x3f602d36)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(27)
	Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	if ((tmp2)){
		HX_STACK_LINE(27)
		::EReg tmp4 = ::EReg_obj::__new(HX_HCSTRING("try restarting transaction","\xf6","\xbc","\x69","\xe7"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		::EReg tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(27)
		tmp3 = tmp5->match(tmp7);
	}
	else{
		HX_STACK_LINE(27)
		tmp3 = false;
	}
	HX_STACK_LINE(27)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Transaction_obj,isDeadlock,return )

Void Transaction_obj::runMainLoop( Dynamic mainFun,Dynamic logError,int count){
{
		HX_STACK_FRAME("sys.db.Transaction","runMainLoop",0x80d215c9,"sys.db.Transaction.runMainLoop","C:\\HaxeToolkit\\haxe\\std/sys/db/Transaction.hx",31,0x3f602d36)
		HX_STACK_ARG(mainFun,"mainFun")
		HX_STACK_ARG(logError,"logError")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(31)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(32)
			mainFun().Cast< Void >();
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(34)
					bool tmp = (count > (int)0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(34)
					bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(34)
					if ((tmp)){
						HX_STACK_LINE(34)
						Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(34)
						Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(34)
						tmp1 = ::sys::db::Transaction_obj::isDeadlock(tmp3);
					}
					else{
						HX_STACK_LINE(34)
						tmp1 = false;
					}
					HX_STACK_LINE(34)
					if ((tmp1)){
						HX_STACK_LINE(35)
						::sys::db::Manager_obj::cleanup();
						HX_STACK_LINE(36)
						::sys::db::Connection tmp2 = ::sys::db::Manager_obj::cnx;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(36)
						tmp2->rollback();
						HX_STACK_LINE(37)
						::sys::db::Connection tmp3 = ::sys::db::Manager_obj::cnx;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(37)
						tmp3->startTransaction();
						HX_STACK_LINE(38)
						Dynamic tmp4 = mainFun;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(38)
						Dynamic tmp5 = logError;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(38)
						int tmp6 = (count - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(38)
						::sys::db::Transaction_obj::runMainLoop(tmp4,tmp5,tmp6);
						HX_STACK_LINE(39)
						return null();
					}
					HX_STACK_LINE(41)
					bool tmp2 = (logError == null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(41)
					if ((tmp2)){
						HX_STACK_LINE(42)
						::sys::db::Connection tmp3 = ::sys::db::Manager_obj::cnx;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(42)
						tmp3->rollback();
						HX_STACK_LINE(46)
						Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(46)
						HX_STACK_DO_THROW(tmp4);
					}
					HX_STACK_LINE(49)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(49)
					logError(tmp3).Cast< Void >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Transaction_obj,runMainLoop,(void))

Void Transaction_obj::main( ::sys::db::Connection cnx,Dynamic mainFun,Dynamic logError){
{
		HX_STACK_FRAME("sys.db.Transaction","main",0x1e4ae9f8,"sys.db.Transaction.main","C:\\HaxeToolkit\\haxe\\std/sys/db/Transaction.hx",53,0x3f602d36)
		HX_STACK_ARG(cnx,"cnx")
		HX_STACK_ARG(mainFun,"mainFun")
		HX_STACK_ARG(logError,"logError")
		HX_STACK_LINE(54)
		::sys::db::Manager_obj::initialize();
		HX_STACK_LINE(55)
		::sys::db::Connection tmp = cnx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		::sys::db::Manager_obj::set_cnx(tmp);
		HX_STACK_LINE(56)
		::sys::db::Connection tmp1 = ::sys::db::Manager_obj::cnx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		tmp1->startTransaction();
		HX_STACK_LINE(57)
		Dynamic tmp2 = mainFun;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		Dynamic tmp3 = logError;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		::sys::db::Transaction_obj::runMainLoop(tmp2,tmp3,(int)3);
		HX_STACK_LINE(58)
		try
		{
		HX_STACK_CATCHABLE(::String, 0);
		{
			HX_STACK_LINE(59)
			::sys::db::Connection tmp4 = ::sys::db::Manager_obj::cnx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(59)
			tmp4->commit();
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::String >() ){
				HX_STACK_BEGIN_CATCH
				::String e = __e;{
					HX_STACK_LINE(62)
					::EReg tmp4 = ::EReg_obj::__new(HX_HCSTRING("Database is busy","\x6a","\xc7","\x75","\x78"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(62)
					::String tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(62)
					bool tmp6 = tmp4->match(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(62)
					if ((tmp6)){
						HX_STACK_LINE(63)
						::String tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(63)
						logError(tmp7).Cast< Void >();
					}
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
		HX_STACK_LINE(65)
		::sys::db::Connection tmp4 = ::sys::db::Manager_obj::cnx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		tmp4->close();
		HX_STACK_LINE(66)
		::sys::db::Manager_obj::set_cnx(null());
		HX_STACK_LINE(67)
		::sys::db::Manager_obj::cleanup();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Transaction_obj,main,(void))


Transaction_obj::Transaction_obj()
{
}

bool Transaction_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDeadlock") ) { outValue = isDeadlock_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"runMainLoop") ) { outValue = runMainLoop_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transaction_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transaction_obj::__mClass,"__mClass");
};

#endif

hx::Class Transaction_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("isDeadlock","\x99","\x1e","\xc3","\xde"),
	HX_HCSTRING("runMainLoop","\xa8","\x81","\xbb","\x62"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void Transaction_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db.Transaction","\x0f","\x07","\x7b","\x27");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Transaction_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Transaction_obj >;
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
