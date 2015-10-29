#include <hxcpp.h>

#ifndef INCLUDED_haxe_remoting_AMFConnection
#include <haxe/remoting/AMFConnection.h>
#endif
#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
namespace haxe{
namespace remoting{

Void AMFConnection_obj::__construct(Dynamic data,Array< ::String > path)
{
HX_STACK_FRAME("haxe.remoting.AMFConnection","new",0x20c82ce7,"haxe.remoting.AMFConnection.new","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AMFConnection.hx",36,0x7086ebe2)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(37)
	this->__data = data;
	HX_STACK_LINE(38)
	this->__path = path;
}
;
	return null();
}

//AMFConnection_obj::~AMFConnection_obj() { }

Dynamic AMFConnection_obj::__CreateEmpty() { return  new AMFConnection_obj; }
hx::ObjectPtr< AMFConnection_obj > AMFConnection_obj::__new(Dynamic data,Array< ::String > path)
{  hx::ObjectPtr< AMFConnection_obj > _result_ = new AMFConnection_obj();
	_result_->__construct(data,path);
	return _result_;}

Dynamic AMFConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AMFConnection_obj > _result_ = new AMFConnection_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *AMFConnection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::remoting::AsyncConnection_obj)) return operator ::haxe::remoting::AsyncConnection_obj *();
	return super::__ToInterface(inType);
}

AMFConnection_obj::operator ::haxe::remoting::AsyncConnection_obj *()
	{ return new ::haxe::remoting::AsyncConnection_delegate_< AMFConnection_obj >(this); }
::haxe::remoting::AsyncConnection AMFConnection_obj::resolve( ::String name){
	HX_STACK_FRAME("haxe.remoting.AMFConnection","resolve",0x6a4abef3,"haxe.remoting.AMFConnection.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AMFConnection.hx",41,0x7086ebe2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(42)
	Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::haxe::remoting::AMFConnection tmp1 = ::haxe::remoting::AMFConnection_obj::__new(tmp,this->__path->copy());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	::haxe::remoting::AMFConnection s = tmp1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(43)
	::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	s->__path->push(tmp2);
	HX_STACK_LINE(44)
	::haxe::remoting::AMFConnection tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AMFConnection_obj,resolve,return )

Void AMFConnection_obj::setErrorHandler( Dynamic h){
{
		HX_STACK_FRAME("haxe.remoting.AMFConnection","setErrorHandler",0x09cbf2ab,"haxe.remoting.AMFConnection.setErrorHandler","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AMFConnection.hx",47,0x7086ebe2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(48)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		tmp->__FieldRef(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")) = h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AMFConnection_obj,setErrorHandler,(void))

Void AMFConnection_obj::close( ){
{
		HX_STACK_FRAME("haxe.remoting.AMFConnection","close",0xb40ce3ff,"haxe.remoting.AMFConnection.close","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AMFConnection.hx",51,0x7086ebe2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		tmp->__Field(HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AMFConnection_obj,close,(void))

Void AMFConnection_obj::call( cpp::ArrayBase params,Dynamic onResult){
{
		HX_STACK_FRAME("haxe.remoting.AMFConnection","call",0x8716b237,"haxe.remoting.AMFConnection.call","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AMFConnection.hx",55,0x7086ebe2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(params,"params")
		HX_STACK_ARG(onResult,"onResult")
		HX_STACK_LINE(56)
		bool tmp = (onResult == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		if ((tmp)){

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Void run(Dynamic e){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AMFConnection.hx",56,0x7086ebe2)
				HX_STACK_ARG(e,"e")
				{
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(56)
			onResult =  Dynamic(new _Function_2_1());
		}
		HX_STACK_LINE(57)
		cpp::ArrayBase p = params->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(61)
		Dynamic tmp1 = this->__data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		Dynamic tmp3 = onResult;		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp2,Dynamic &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AMFConnection.hx",61,0x7086ebe2)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("onStatus","\xb1","\xdd","\xa8","\xe5") , tmp2,false);
					__result->Add(HX_HCSTRING("onResult","\x5c","\x5f","\x31","\xe8") , tmp3,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(61)
		Dynamic tmp4 = _Function_1_1::Block(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		p->__Field(HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"), hx::paccDynamic )(tmp4);
		HX_STACK_LINE(63)
		::String tmp5 = this->__path->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		p->__Field(HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"), hx::paccDynamic )(tmp5);
		HX_STACK_LINE(64)
		Dynamic tmp6 = this->__data;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		tmp6->__Field(HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("call","\x9e","\x18","\xba","\x41"), hx::paccDynamic )->__Field(HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"), hx::paccDynamic )(this->__data,p);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AMFConnection_obj,call,(void))


AMFConnection_obj::AMFConnection_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void AMFConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AMFConnection);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__data,"__data");
	HX_MARK_MEMBER_NAME(__path,"__path");
	HX_MARK_END_CLASS();
}

void AMFConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__data,"__data");
	HX_VISIT_MEMBER_NAME(__path,"__path");
}

Dynamic AMFConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return __data; }
		if (HX_FIELD_EQ(inName,"__path") ) { return __path; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setErrorHandler") ) { return setErrorHandler_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic AMFConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { __data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__path") ) { __path=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void AMFConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	outFields->push(HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AMFConnection_obj,__data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(AMFConnection_obj,__path),HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("setErrorHandler","\xa4","\x67","\xbb","\x15"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AMFConnection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AMFConnection_obj::__mClass,"__mClass");
};

#endif

hx::Class AMFConnection_obj::__mClass;

void AMFConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.AMFConnection","\x75","\x2d","\x10","\x54");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AMFConnection_obj >;
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
