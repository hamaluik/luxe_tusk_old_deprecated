#include <hxcpp.h>

#ifndef INCLUDED_haxe_remoting_AsyncAdapter
#include <haxe/remoting/AsyncAdapter.h>
#endif
#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
#ifndef INCLUDED_haxe_remoting_Connection
#include <haxe/remoting/Connection.h>
#endif
namespace haxe{
namespace remoting{

Void AsyncAdapter_obj::__construct(::haxe::remoting::Connection cnx,Dynamic error)
{
HX_STACK_FRAME("haxe.remoting.AsyncAdapter","new",0x92b24088,"haxe.remoting.AsyncAdapter.new","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncAdapter.hx",32,0x2651ba8f)
HX_STACK_THIS(this)
HX_STACK_ARG(cnx,"cnx")
HX_STACK_ARG(error,"error")
{
	HX_STACK_LINE(33)
	this->__cnx = cnx;
	HX_STACK_LINE(34)
	this->__error = error;
}
;
	return null();
}

//AsyncAdapter_obj::~AsyncAdapter_obj() { }

Dynamic AsyncAdapter_obj::__CreateEmpty() { return  new AsyncAdapter_obj; }
hx::ObjectPtr< AsyncAdapter_obj > AsyncAdapter_obj::__new(::haxe::remoting::Connection cnx,Dynamic error)
{  hx::ObjectPtr< AsyncAdapter_obj > _result_ = new AsyncAdapter_obj();
	_result_->__construct(cnx,error);
	return _result_;}

Dynamic AsyncAdapter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AsyncAdapter_obj > _result_ = new AsyncAdapter_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *AsyncAdapter_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::remoting::AsyncConnection_obj)) return operator ::haxe::remoting::AsyncConnection_obj *();
	return super::__ToInterface(inType);
}

AsyncAdapter_obj::operator ::haxe::remoting::AsyncConnection_obj *()
	{ return new ::haxe::remoting::AsyncConnection_delegate_< AsyncAdapter_obj >(this); }
::haxe::remoting::AsyncConnection AsyncAdapter_obj::resolve( ::String name){
	HX_STACK_FRAME("haxe.remoting.AsyncAdapter","resolve",0x69bdb714,"haxe.remoting.AsyncAdapter.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncAdapter.hx",37,0x2651ba8f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(38)
	::haxe::remoting::Connection tmp = this->__cnx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	::haxe::remoting::Connection tmp2 = tmp->resolve(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	Dynamic tmp3 = this->__error;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	::haxe::remoting::AsyncAdapter tmp4 = ::haxe::remoting::AsyncAdapter_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncAdapter_obj,resolve,return )

Void AsyncAdapter_obj::setErrorHandler( Dynamic h){
{
		HX_STACK_FRAME("haxe.remoting.AsyncAdapter","setErrorHandler",0xda1573cc,"haxe.remoting.AsyncAdapter.setErrorHandler","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncAdapter.hx",41,0x2651ba8f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(42)
		Dynamic tmp = this->__error;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		tmp->__FieldRef(HX_HCSTRING("ref","\x53","\xd9","\x56","\x00")) = h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncAdapter_obj,setErrorHandler,(void))

Void AsyncAdapter_obj::call( cpp::ArrayBase params,Dynamic onResult){
{
		HX_STACK_FRAME("haxe.remoting.AsyncAdapter","call",0xc1fdcb76,"haxe.remoting.AsyncAdapter.call","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncAdapter.hx",45,0x2651ba8f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(params,"params")
		HX_STACK_ARG(onResult,"onResult")
		HX_STACK_LINE(46)
		Dynamic ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(47)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(48)
			::haxe::remoting::Connection tmp = this->__cnx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(48)
			Dynamic tmp1 = tmp->call(params);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(48)
			ret = tmp1;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(50)
					Dynamic tmp = this->__error;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(50)
					Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(50)
					tmp->__Field(HX_HCSTRING("ref","\x53","\xd9","\x56","\x00"), hx::paccDynamic )(tmp1);
					HX_STACK_LINE(51)
					return null();
				}
			}
		}
		HX_STACK_LINE(53)
		bool tmp = (onResult != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		if ((tmp)){
			HX_STACK_LINE(53)
			Dynamic tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			onResult(tmp1).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AsyncAdapter_obj,call,(void))

::haxe::remoting::AsyncConnection AsyncAdapter_obj::create( ::haxe::remoting::Connection cnx){
	HX_STACK_FRAME("haxe.remoting.AsyncAdapter","create",0x5ac77fd4,"haxe.remoting.AsyncAdapter.create","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncAdapter.hx",56,0x2651ba8f)
	HX_STACK_ARG(cnx,"cnx")
	HX_STACK_LINE(57)
	::haxe::remoting::Connection tmp = cnx;		HX_STACK_VAR(tmp,"tmp");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncAdapter.hx",57,0x2651ba8f)
			{
				hx::Anon __result = hx::Anon_obj::Create();

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
				int __ArgCount() const { return 1; }
				Void run(Dynamic e){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncAdapter.hx",57,0x2651ba8f)
					HX_STACK_ARG(e,"e")
					{
						HX_STACK_LINE(57)
						Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(57)
						HX_STACK_DO_THROW(tmp1);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				__result->Add(HX_HCSTRING("ref","\x53","\xd9","\x56","\x00") ,  Dynamic(new _Function_2_1()),true);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(57)
	Dynamic tmp1 = _Function_1_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	::haxe::remoting::AsyncAdapter tmp2 = ::haxe::remoting::AsyncAdapter_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AsyncAdapter_obj,create,return )


AsyncAdapter_obj::AsyncAdapter_obj()
{
}

void AsyncAdapter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AsyncAdapter);
	HX_MARK_MEMBER_NAME(__cnx,"__cnx");
	HX_MARK_MEMBER_NAME(__error,"__error");
	HX_MARK_END_CLASS();
}

void AsyncAdapter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__cnx,"__cnx");
	HX_VISIT_MEMBER_NAME(__error,"__error");
}

Dynamic AsyncAdapter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__cnx") ) { return __cnx; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__error") ) { return __error; }
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setErrorHandler") ) { return setErrorHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool AsyncAdapter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
	}
	return false;
}

Dynamic AsyncAdapter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__cnx") ) { __cnx=inValue.Cast< ::haxe::remoting::Connection >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__error") ) { __error=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AsyncAdapter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__cnx","\x4d","\xe0","\x27","\xf2"));
	outFields->push(HX_HCSTRING("__error","\xa8","\x24","\x88","\xdd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::remoting::Connection*/ ,(int)offsetof(AsyncAdapter_obj,__cnx),HX_HCSTRING("__cnx","\x4d","\xe0","\x27","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncAdapter_obj,__error),HX_HCSTRING("__error","\xa8","\x24","\x88","\xdd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__cnx","\x4d","\xe0","\x27","\xf2"),
	HX_HCSTRING("__error","\xa8","\x24","\x88","\xdd"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("setErrorHandler","\xa4","\x67","\xbb","\x15"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AsyncAdapter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AsyncAdapter_obj::__mClass,"__mClass");
};

#endif

hx::Class AsyncAdapter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null()) };

void AsyncAdapter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.AsyncAdapter","\x96","\x9c","\xdd","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AsyncAdapter_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AsyncAdapter_obj >;
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
} // end namespace remoting
