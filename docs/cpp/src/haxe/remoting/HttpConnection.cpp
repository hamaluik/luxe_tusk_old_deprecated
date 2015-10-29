#include <hxcpp.h>

#ifndef INCLUDED_haxe_Http
#include <haxe/Http.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_remoting_Connection
#include <haxe/remoting/Connection.h>
#endif
#ifndef INCLUDED_haxe_remoting_Context
#include <haxe/remoting/Context.h>
#endif
#ifndef INCLUDED_haxe_remoting_HttpConnection
#include <haxe/remoting/HttpConnection.h>
#endif
namespace haxe{
namespace remoting{

Void HttpConnection_obj::__construct(::String url,Array< ::String > path)
{
HX_STACK_FRAME("haxe.remoting.HttpConnection","new",0x64dab9db,"haxe.remoting.HttpConnection.new","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/HttpConnection.hx",31,0xf1d8445c)
HX_STACK_THIS(this)
HX_STACK_ARG(url,"url")
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(32)
	this->__url = url;
	HX_STACK_LINE(33)
	this->__path = path;
}
;
	return null();
}

//HttpConnection_obj::~HttpConnection_obj() { }

Dynamic HttpConnection_obj::__CreateEmpty() { return  new HttpConnection_obj; }
hx::ObjectPtr< HttpConnection_obj > HttpConnection_obj::__new(::String url,Array< ::String > path)
{  hx::ObjectPtr< HttpConnection_obj > _result_ = new HttpConnection_obj();
	_result_->__construct(url,path);
	return _result_;}

Dynamic HttpConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HttpConnection_obj > _result_ = new HttpConnection_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *HttpConnection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::remoting::Connection_obj)) return operator ::haxe::remoting::Connection_obj *();
	return super::__ToInterface(inType);
}

HttpConnection_obj::operator ::haxe::remoting::Connection_obj *()
	{ return new ::haxe::remoting::Connection_delegate_< HttpConnection_obj >(this); }
::haxe::remoting::Connection HttpConnection_obj::resolve( ::String name){
	HX_STACK_FRAME("haxe.remoting.HttpConnection","resolve",0xb658d5e7,"haxe.remoting.HttpConnection.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/HttpConnection.hx",36,0xf1d8445c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(37)
	::String tmp = this->__url;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	::haxe::remoting::HttpConnection tmp1 = ::haxe::remoting::HttpConnection_obj::__new(tmp,this->__path->copy());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	::haxe::remoting::HttpConnection c = tmp1;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(38)
	::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	c->__path->push(tmp2);
	HX_STACK_LINE(39)
	::haxe::remoting::HttpConnection tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(HttpConnection_obj,resolve,return )

Dynamic HttpConnection_obj::call( cpp::ArrayBase params){
	HX_STACK_FRAME("haxe.remoting.HttpConnection","call",0xd33f7ac3,"haxe.remoting.HttpConnection.call","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/HttpConnection.hx",42,0xf1d8445c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(43)
	Array< ::String > data = Array_obj< ::String >::__new().Add(null());		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(44)
	::String tmp = this->__url;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	::haxe::Http tmp1 = ::haxe::Http_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	::haxe::Http h = tmp1;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(52)
	Float tmp2 = ::haxe::remoting::HttpConnection_obj::TIMEOUT;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	h->cnxTimeout = tmp2;
	HX_STACK_LINE(54)
	::haxe::Serializer tmp3 = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	::haxe::Serializer s = tmp3;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(55)
	s->serialize(this->__path);
	HX_STACK_LINE(56)
	s->serialize(params);
	HX_STACK_LINE(57)
	h->setHeader(HX_HCSTRING("X-Haxe-Remoting","\x95","\x5b","\x33","\xd6"),HX_HCSTRING("1","\x31","\x00","\x00","\x00"));
	HX_STACK_LINE(58)
	::String tmp4 = s->toString();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	h->setParameter(HX_HCSTRING("__x","\x58","\x69","\x48","\x00"),tmp4);

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::String >,data)
	int __ArgCount() const { return 1; }
	Void run(::String d){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/HttpConnection.hx",59,0xf1d8445c)
		HX_STACK_ARG(d,"d")
		{
			HX_STACK_LINE(59)
			data[(int)0] = d;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(59)
	h->onData =  Dynamic(new _Function_1_1(data));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	int __ArgCount() const { return 1; }
	Void run(::String e){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/HttpConnection.hx",60,0xf1d8445c)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(60)
			::String tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			HX_STACK_DO_THROW(tmp5);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(60)
	h->onError =  Dynamic(new _Function_1_2());
	HX_STACK_LINE(61)
	h->request(true);
	HX_STACK_LINE(62)
	::String tmp5 = data->__get((int)0).substr((int)0,(int)3);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	bool tmp6 = (tmp5 != HX_HCSTRING("hxr","\x62","\x53","\x4f","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	if ((tmp6)){
		HX_STACK_LINE(63)
		::String tmp7 = (HX_HCSTRING("Invalid response : '","\x8b","\xe8","\x0d","\x0b") + data->__get((int)0));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(63)
		::String tmp8 = (tmp7 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(63)
		HX_STACK_DO_THROW(tmp8);
	}
	HX_STACK_LINE(64)
	::String tmp7 = data->__get((int)0).substr((int)3,null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(64)
	data[(int)0] = tmp7;
	HX_STACK_LINE(65)
	::haxe::Unserializer tmp8 = ::haxe::Unserializer_obj::__new(data->__get((int)0));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(65)
	Dynamic tmp9 = tmp8->unserialize();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(65)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(HttpConnection_obj,call,return )

Float HttpConnection_obj::TIMEOUT;

::String HttpConnection_obj::processRequest( ::String requestData,::haxe::remoting::Context ctx){
	HX_STACK_FRAME("haxe.remoting.HttpConnection","processRequest",0x45dc8305,"haxe.remoting.HttpConnection.processRequest","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/HttpConnection.hx",95,0xf1d8445c)
	HX_STACK_ARG(requestData,"requestData")
	HX_STACK_ARG(ctx,"ctx")
	HX_STACK_LINE(95)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(96)
		::haxe::Unserializer tmp = ::haxe::Unserializer_obj::__new(requestData);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		::haxe::Unserializer u = tmp;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(97)
		Dynamic tmp1 = u->unserialize();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		Array< ::String > path = tmp1;		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(98)
		Dynamic tmp2 = u->unserialize();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		cpp::ArrayBase args = tmp2;		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(99)
		Dynamic tmp3 = ctx->call(path,args);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		Dynamic data = tmp3;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(100)
		::haxe::Serializer tmp4 = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		::haxe::Serializer s = tmp4;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(101)
		Dynamic tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(101)
		s->serialize(tmp5);
		HX_STACK_LINE(102)
		::String tmp6 = s->toString();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(102)
		::String tmp7 = (HX_HCSTRING("hxr","\x62","\x53","\x4f","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(102)
		return tmp7;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(104)
				::haxe::Serializer tmp = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(104)
				::haxe::Serializer s = tmp;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(105)
				Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(105)
				s->serializeException(tmp1);
				HX_STACK_LINE(106)
				::String tmp2 = s->toString();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(106)
				::String tmp3 = (HX_HCSTRING("hxr","\x62","\x53","\x4f","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(106)
				return tmp3;
			}
		}
	}
	HX_STACK_LINE(95)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HttpConnection_obj,processRequest,return )


HttpConnection_obj::HttpConnection_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void HttpConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HttpConnection);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__url,"__url");
	HX_MARK_MEMBER_NAME(__path,"__path");
	HX_MARK_END_CLASS();
}

void HttpConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__url,"__url");
	HX_VISIT_MEMBER_NAME(__path,"__path");
}

Dynamic HttpConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__url") ) { return __url; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { return __path; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

bool HttpConnection_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"TIMEOUT") ) { outValue = TIMEOUT; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"processRequest") ) { outValue = processRequest_dyn(); return true;  }
	}
	return false;
}

Dynamic HttpConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__url") ) { __url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { __path=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

bool HttpConnection_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"TIMEOUT") ) { TIMEOUT=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void HttpConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__url","\x4f","\x8c","\x35","\xf2"));
	outFields->push(HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(HttpConnection_obj,__url),HX_HCSTRING("__url","\x4f","\x8c","\x35","\xf2")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(HttpConnection_obj,__path),HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &HttpConnection_obj::TIMEOUT,HX_HCSTRING("TIMEOUT","\x81","\xee","\xca","\x58")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__url","\x4f","\x8c","\x35","\xf2"),
	HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HttpConnection_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HttpConnection_obj::TIMEOUT,"TIMEOUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HttpConnection_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HttpConnection_obj::TIMEOUT,"TIMEOUT");
};

#endif

hx::Class HttpConnection_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TIMEOUT","\x81","\xee","\xca","\x58"),
	HX_HCSTRING("processRequest","\xa0","\x20","\xe3","\xf6"),
	::String(null()) };

void HttpConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.HttpConnection","\x69","\x30","\x34","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HttpConnection_obj::__GetStatic;
	__mClass->mSetStaticField = &HttpConnection_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HttpConnection_obj >;
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

void HttpConnection_obj::__boot()
{
	TIMEOUT= ((Float)10.);
}

} // end namespace haxe
} // end namespace remoting
