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
#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
#ifndef INCLUDED_haxe_remoting_HttpAsyncConnection
#include <haxe/remoting/HttpAsyncConnection.h>
#endif
namespace haxe{
namespace remoting{

Void HttpAsyncConnection_obj::__construct(Dynamic data,Array< ::String > path)
{
HX_STACK_FRAME("haxe.remoting.HttpAsyncConnection","new",0x4f0e7ac1,"haxe.remoting.HttpAsyncConnection.new","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/HttpAsyncConnection.hx",29,0xb374f808)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(30)
	this->__data = data;
	HX_STACK_LINE(31)
	this->__path = path;
}
;
	return null();
}

//HttpAsyncConnection_obj::~HttpAsyncConnection_obj() { }

Dynamic HttpAsyncConnection_obj::__CreateEmpty() { return  new HttpAsyncConnection_obj; }
hx::ObjectPtr< HttpAsyncConnection_obj > HttpAsyncConnection_obj::__new(Dynamic data,Array< ::String > path)
{  hx::ObjectPtr< HttpAsyncConnection_obj > _result_ = new HttpAsyncConnection_obj();
	_result_->__construct(data,path);
	return _result_;}

Dynamic HttpAsyncConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HttpAsyncConnection_obj > _result_ = new HttpAsyncConnection_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *HttpAsyncConnection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::remoting::AsyncConnection_obj)) return operator ::haxe::remoting::AsyncConnection_obj *();
	return super::__ToInterface(inType);
}

HttpAsyncConnection_obj::operator ::haxe::remoting::AsyncConnection_obj *()
	{ return new ::haxe::remoting::AsyncConnection_delegate_< HttpAsyncConnection_obj >(this); }
::haxe::remoting::AsyncConnection HttpAsyncConnection_obj::resolve( ::String name){
	HX_STACK_FRAME("haxe.remoting.HttpAsyncConnection","resolve",0x939601cd,"haxe.remoting.HttpAsyncConnection.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/HttpAsyncConnection.hx",34,0xb374f808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(35)
	Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	::haxe::remoting::HttpAsyncConnection tmp1 = ::haxe::remoting::HttpAsyncConnection_obj::__new(tmp,this->__path->copy());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	::haxe::remoting::HttpAsyncConnection c = tmp1;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(36)
	::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	c->__path->push(tmp2);
	HX_STACK_LINE(37)
	::haxe::remoting::HttpAsyncConnection tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(HttpAsyncConnection_obj,resolve,return )

Void HttpAsyncConnection_obj::setErrorHandler( Dynamic h){
{
		HX_STACK_FRAME("haxe.remoting.HttpAsyncConnection","setErrorHandler",0xd4bc9f85,"haxe.remoting.HttpAsyncConnection.setErrorHandler","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/HttpAsyncConnection.hx",40,0xb374f808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(41)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		tmp->__FieldRef(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")) = h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HttpAsyncConnection_obj,setErrorHandler,(void))

Void HttpAsyncConnection_obj::call( cpp::ArrayBase params,Dynamic onResult){
{
		HX_STACK_FRAME("haxe.remoting.HttpAsyncConnection","call",0xd654831d,"haxe.remoting.HttpAsyncConnection.call","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/HttpAsyncConnection.hx",44,0xb374f808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(params,"params")
		HX_STACK_ARG(onResult,"onResult")
		HX_STACK_LINE(45)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		::String tmp1 = tmp->__Field(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::haxe::Http tmp2 = ::haxe::Http_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		::haxe::Http h = tmp2;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(49)
		::haxe::Serializer tmp3 = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::haxe::Serializer s = tmp3;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(50)
		s->serialize(this->__path);
		HX_STACK_LINE(51)
		s->serialize(params);
		HX_STACK_LINE(52)
		h->setHeader(HX_HCSTRING("X-Haxe-Remoting","\x95","\x5b","\x33","\xd6"),HX_HCSTRING("1","\x31","\x00","\x00","\x00"));
		HX_STACK_LINE(53)
		::String tmp4 = s->toString();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		h->setParameter(HX_HCSTRING("__x","\x58","\x69","\x48","\x00"),tmp4);
		HX_STACK_LINE(54)
		Dynamic tmp5 = this->__data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		Dynamic error = tmp5->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic );		HX_STACK_VAR(error,"error");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,error,Dynamic,onResult)
		int __ArgCount() const { return 1; }
		Void run(::String response){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/HttpAsyncConnection.hx",55,0xb374f808)
			HX_STACK_ARG(response,"response")
			{
				HX_STACK_LINE(56)
				bool ok = true;		HX_STACK_VAR(ok,"ok");
				HX_STACK_LINE(57)
				Dynamic ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(58)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(59)
					::String tmp6 = response.substr((int)0,(int)3);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(59)
					bool tmp7 = (tmp6 != HX_HCSTRING("hxr","\x62","\x53","\x4f","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(59)
					if ((tmp7)){
						HX_STACK_LINE(59)
						::String tmp8 = (HX_HCSTRING("Invalid response : '","\x8b","\xe8","\x0d","\x0b") + response);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(59)
						::String tmp9 = (tmp8 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(59)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(60)
					::String tmp8 = response.substr((int)3,null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(60)
					::haxe::Unserializer tmp9 = ::haxe::Unserializer_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(60)
					::haxe::Unserializer s1 = tmp9;		HX_STACK_VAR(s1,"s1");
					HX_STACK_LINE(61)
					Dynamic tmp10 = s1->unserialize();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(61)
					ret = tmp10;
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic err = __e;{
							HX_STACK_LINE(63)
							ret = null();
							HX_STACK_LINE(64)
							ok = false;
							HX_STACK_LINE(65)
							Dynamic tmp6 = err;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(65)
							error(tmp6).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(67)
				bool tmp6 = ok;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(67)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(67)
				if ((tmp6)){
					HX_STACK_LINE(67)
					tmp7 = (onResult != null());
				}
				else{
					HX_STACK_LINE(67)
					tmp7 = false;
				}
				HX_STACK_LINE(67)
				if ((tmp7)){
					HX_STACK_LINE(67)
					Dynamic tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(67)
					onResult(tmp8).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(55)
		h->onData =  Dynamic(new _Function_1_1(error,onResult));
		HX_STACK_LINE(69)
		h->onError = error;
		HX_STACK_LINE(70)
		h->request(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HttpAsyncConnection_obj,call,(void))

::haxe::remoting::HttpAsyncConnection HttpAsyncConnection_obj::urlConnect( ::String url){
	HX_STACK_FRAME("haxe.remoting.HttpAsyncConnection","urlConnect",0x5e0ee7fa,"haxe.remoting.HttpAsyncConnection.urlConnect","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/HttpAsyncConnection.hx",73,0xb374f808)
	HX_STACK_ARG(url,"url")
	struct _Function_1_1{
		inline static Dynamic Block( ::String &url){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/HttpAsyncConnection.hx",74,0xb374f808)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00") , url,false);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
				int __ArgCount() const { return 1; }
				Void run(Dynamic e){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/HttpAsyncConnection.hx",74,0xb374f808)
					HX_STACK_ARG(e,"e")
					{
						HX_STACK_LINE(74)
						Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(74)
						HX_STACK_DO_THROW(tmp);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				__result->Add(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73") ,  Dynamic(new _Function_2_1()),true);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(74)
	Dynamic tmp = _Function_1_1::Block(url);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::haxe::remoting::HttpAsyncConnection tmp1 = ::haxe::remoting::HttpAsyncConnection_obj::__new(tmp,Array_obj< ::String >::__new());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HttpAsyncConnection_obj,urlConnect,return )


HttpAsyncConnection_obj::HttpAsyncConnection_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void HttpAsyncConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HttpAsyncConnection);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__data,"__data");
	HX_MARK_MEMBER_NAME(__path,"__path");
	HX_MARK_END_CLASS();
}

void HttpAsyncConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__data,"__data");
	HX_VISIT_MEMBER_NAME(__path,"__path");
}

Dynamic HttpAsyncConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
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

bool HttpAsyncConnection_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"urlConnect") ) { outValue = urlConnect_dyn(); return true;  }
	}
	return false;
}

Dynamic HttpAsyncConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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

void HttpAsyncConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	outFields->push(HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(HttpAsyncConnection_obj,__data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(HttpAsyncConnection_obj,__path),HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("setErrorHandler","\xa4","\x67","\xbb","\x15"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HttpAsyncConnection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HttpAsyncConnection_obj::__mClass,"__mClass");
};

#endif

hx::Class HttpAsyncConnection_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("urlConnect","\x3b","\x14","\xa3","\xd5"),
	::String(null()) };

void HttpAsyncConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.HttpAsyncConnection","\x4f","\x06","\x30","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HttpAsyncConnection_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HttpAsyncConnection_obj >;
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
