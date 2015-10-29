#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
#ifndef INCLUDED_haxe_remoting_AsyncDebugConnection
#include <haxe/remoting/AsyncDebugConnection.h>
#endif
namespace haxe{
namespace remoting{

Void AsyncDebugConnection_obj::__construct(Array< ::String > path,::haxe::remoting::AsyncConnection cnx,Dynamic data)
{
HX_STACK_FRAME("haxe.remoting.AsyncDebugConnection","new",0x0f29484a,"haxe.remoting.AsyncDebugConnection.new","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncDebugConnection.hx",35,0x4e89e00d)
HX_STACK_THIS(this)
HX_STACK_ARG(path,"path")
HX_STACK_ARG(cnx,"cnx")
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(36)
	this->__path = path;
	HX_STACK_LINE(37)
	this->__cnx = cnx;
	HX_STACK_LINE(38)
	this->__data = data;
}
;
	return null();
}

//AsyncDebugConnection_obj::~AsyncDebugConnection_obj() { }

Dynamic AsyncDebugConnection_obj::__CreateEmpty() { return  new AsyncDebugConnection_obj; }
hx::ObjectPtr< AsyncDebugConnection_obj > AsyncDebugConnection_obj::__new(Array< ::String > path,::haxe::remoting::AsyncConnection cnx,Dynamic data)
{  hx::ObjectPtr< AsyncDebugConnection_obj > _result_ = new AsyncDebugConnection_obj();
	_result_->__construct(path,cnx,data);
	return _result_;}

Dynamic AsyncDebugConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AsyncDebugConnection_obj > _result_ = new AsyncDebugConnection_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *AsyncDebugConnection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::remoting::AsyncConnection_obj)) return operator ::haxe::remoting::AsyncConnection_obj *();
	return super::__ToInterface(inType);
}

AsyncDebugConnection_obj::operator ::haxe::remoting::AsyncConnection_obj *()
	{ return new ::haxe::remoting::AsyncConnection_delegate_< AsyncDebugConnection_obj >(this); }
::haxe::remoting::AsyncConnection AsyncDebugConnection_obj::resolve( ::String name){
	HX_STACK_FRAME("haxe.remoting.AsyncDebugConnection","resolve",0x6f80c7d6,"haxe.remoting.AsyncDebugConnection.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncDebugConnection.hx",41,0x4e89e00d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(42)
	::haxe::remoting::AsyncConnection tmp = this->__cnx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	::haxe::remoting::AsyncConnection tmp2 = tmp->resolve(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	Dynamic tmp3 = this->__data;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	::haxe::remoting::AsyncDebugConnection tmp4 = ::haxe::remoting::AsyncDebugConnection_obj::__new(this->__path->copy(),tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	::haxe::remoting::AsyncDebugConnection cnx = tmp4;		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(43)
	::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	cnx->__path->push(tmp5);
	HX_STACK_LINE(44)
	::haxe::remoting::AsyncDebugConnection tmp6 = cnx;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncDebugConnection_obj,resolve,return )

Void AsyncDebugConnection_obj::setErrorHandler( Dynamic h){
{
		HX_STACK_FRAME("haxe.remoting.AsyncDebugConnection","setErrorHandler",0xcc5a168e,"haxe.remoting.AsyncDebugConnection.setErrorHandler","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncDebugConnection.hx",47,0x4e89e00d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(48)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		tmp->__FieldRef(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")) = h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncDebugConnection_obj,setErrorHandler,(void))

Void AsyncDebugConnection_obj::setErrorDebug( Dynamic h){
{
		HX_STACK_FRAME("haxe.remoting.AsyncDebugConnection","setErrorDebug",0xe7d9c017,"haxe.remoting.AsyncDebugConnection.setErrorDebug","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncDebugConnection.hx",51,0x4e89e00d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(52)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		tmp->__FieldRef(HX_HCSTRING("onerror","\x49","\xfa","\x39","\x76")) = h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncDebugConnection_obj,setErrorDebug,(void))

Void AsyncDebugConnection_obj::setResultDebug( Dynamic h){
{
		HX_STACK_FRAME("haxe.remoting.AsyncDebugConnection","setResultDebug",0x21a6700a,"haxe.remoting.AsyncDebugConnection.setResultDebug","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncDebugConnection.hx",55,0x4e89e00d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(56)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		tmp->__FieldRef(HX_HCSTRING("onresult","\x3c","\xeb","\x9c","\xb3")) = h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncDebugConnection_obj,setResultDebug,(void))

Void AsyncDebugConnection_obj::setCallDebug( Dynamic h){
{
		HX_STACK_FRAME("haxe.remoting.AsyncDebugConnection","setCallDebug",0xd803a7a9,"haxe.remoting.AsyncDebugConnection.setCallDebug","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncDebugConnection.hx",59,0x4e89e00d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(60)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		tmp->__FieldRef(HX_HCSTRING("oncall","\x3d","\xf5","\x6a","\xf9")) = h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncDebugConnection_obj,setCallDebug,(void))

Void AsyncDebugConnection_obj::call( cpp::ArrayBase params,Dynamic onResult){
{
		HX_STACK_FRAME("haxe.remoting.AsyncDebugConnection","call",0x2dad8d74,"haxe.remoting.AsyncDebugConnection.call","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncDebugConnection.hx",63,0x4e89e00d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(params,"params")
		HX_STACK_ARG(onResult,"onResult")
		HX_STACK_LINE(64)
		::haxe::remoting::AsyncDebugConnection me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(65)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		tmp->__Field(HX_HCSTRING("oncall","\x3d","\xf5","\x6a","\xf9"), hx::paccDynamic )(this->__path,params);
		HX_STACK_LINE(66)
		::haxe::remoting::AsyncConnection tmp1 = this->__cnx;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::haxe::remoting::AsyncDebugConnection,me,cpp::ArrayBase,params)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncDebugConnection.hx",66,0x4e89e00d)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(67)
				Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(67)
				me->__data->__Field(HX_HCSTRING("onerror","\x49","\xfa","\x39","\x76"), hx::paccDynamic )(me->__path,params,tmp2);
				HX_STACK_LINE(68)
				Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(68)
				me->__data->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic )(tmp3);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(66)
		tmp1->setErrorHandler( Dynamic(new _Function_1_1(me,params)));
		HX_STACK_LINE(70)
		::haxe::remoting::AsyncConnection tmp2 = this->__cnx;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_2,::haxe::remoting::AsyncDebugConnection,me,cpp::ArrayBase,params,Dynamic,onResult)
		int __ArgCount() const { return 1; }
		Void run(Dynamic r){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncDebugConnection.hx",70,0x4e89e00d)
			HX_STACK_ARG(r,"r")
			{
				HX_STACK_LINE(71)
				Dynamic tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(71)
				me->__data->__Field(HX_HCSTRING("onresult","\x3c","\xeb","\x9c","\xb3"), hx::paccDynamic )(me->__path,params,tmp3);
				HX_STACK_LINE(72)
				bool tmp4 = (onResult != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(72)
				if ((tmp4)){
					HX_STACK_LINE(72)
					Dynamic tmp5 = r;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(72)
					onResult(tmp5).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(70)
		tmp2->call(params, Dynamic(new _Function_1_2(me,params,onResult)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AsyncDebugConnection_obj,call,(void))

::haxe::remoting::AsyncDebugConnection AsyncDebugConnection_obj::create( ::haxe::remoting::AsyncConnection cnx){
	HX_STACK_FRAME("haxe.remoting.AsyncDebugConnection","create",0xe36a3d52,"haxe.remoting.AsyncDebugConnection.create","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncDebugConnection.hx",76,0x4e89e00d)
	HX_STACK_ARG(cnx,"cnx")
	HX_STACK_LINE(77)
	::haxe::remoting::AsyncConnection tmp = cnx;		HX_STACK_VAR(tmp,"tmp");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncDebugConnection.hx",77,0x4e89e00d)
			{
				hx::Anon __result = hx::Anon_obj::Create();

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
				int __ArgCount() const { return 1; }
				Void run(Dynamic e){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncDebugConnection.hx",78,0x4e89e00d)
					HX_STACK_ARG(e,"e")
					{
						HX_STACK_LINE(78)
						Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(78)
						HX_STACK_DO_THROW(tmp1);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				__result->Add(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73") ,  Dynamic(new _Function_2_1()),true);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_2)
				int __ArgCount() const { return 2; }
				Void run(Array< ::String > path,cpp::ArrayBase params){
					HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncDebugConnection.hx",79,0x4e89e00d)
					HX_STACK_ARG(path,"path")
					HX_STACK_ARG(params,"params")
					{
					}
					return null();
				}
				HX_END_LOCAL_FUNC2((void))

				__result->Add(HX_HCSTRING("oncall","\x3d","\xf5","\x6a","\xf9") ,  Dynamic(new _Function_2_2()),true);
				__result->Add(HX_HCSTRING("onerror","\x49","\xfa","\x39","\x76") , null(),false);
				__result->Add(HX_HCSTRING("onresult","\x3c","\xeb","\x9c","\xb3") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(77)
	Dynamic tmp1 = _Function_1_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	::haxe::remoting::AsyncDebugConnection tmp2 = ::haxe::remoting::AsyncDebugConnection_obj::__new(Array_obj< ::String >::__new(),tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	::haxe::remoting::AsyncDebugConnection cnx1 = tmp2;		HX_STACK_VAR(cnx1,"cnx1");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	int __ArgCount() const { return 3; }
	Void run(Array< ::String > path,cpp::ArrayBase params,Dynamic e){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncDebugConnection.hx",83,0x4e89e00d)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(params,"params")
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(83)
			::String tmp3 = path->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			::String tmp4 = (tmp3 + HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			::String tmp5 = params->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			::String tmp7 = (tmp6 + HX_HCSTRING(") = ERROR ","\xd2","\x8b","\xb9","\x01"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(83)
			Dynamic tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(83)
			::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(83)
			::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(83)
			Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("AsyncDebugConnection.hx","\x49","\x59","\x84","\x01"),83,HX_HCSTRING("haxe.remoting.AsyncDebugConnection","\x58","\x1b","\x01","\x5f"),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(83)
			::haxe::Log_obj::trace(tmp10,tmp11);
		}
		return null();
	}
	HX_END_LOCAL_FUNC3((void))

	HX_STACK_LINE(83)
	cnx1->setErrorDebug( Dynamic(new _Function_1_2()));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	int __ArgCount() const { return 3; }
	Void run(Array< ::String > path,cpp::ArrayBase params,Dynamic e){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/AsyncDebugConnection.hx",84,0x4e89e00d)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(params,"params")
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(84)
			::String tmp3 = path->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			::String tmp4 = (tmp3 + HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			::String tmp5 = params->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			::String tmp7 = (tmp6 + HX_HCSTRING(") = ","\xda","\x3c","\x32","\x1b"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			Dynamic tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(84)
			::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(84)
			::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(84)
			Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("AsyncDebugConnection.hx","\x49","\x59","\x84","\x01"),84,HX_HCSTRING("haxe.remoting.AsyncDebugConnection","\x58","\x1b","\x01","\x5f"),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(84)
			::haxe::Log_obj::trace(tmp10,tmp11);
		}
		return null();
	}
	HX_END_LOCAL_FUNC3((void))

	HX_STACK_LINE(84)
	cnx1->setResultDebug( Dynamic(new _Function_1_3()));
	HX_STACK_LINE(85)
	::haxe::remoting::AsyncDebugConnection tmp3 = cnx1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AsyncDebugConnection_obj,create,return )


AsyncDebugConnection_obj::AsyncDebugConnection_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void AsyncDebugConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AsyncDebugConnection);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__path,"__path");
	HX_MARK_MEMBER_NAME(__cnx,"__cnx");
	HX_MARK_MEMBER_NAME(__data,"__data");
	HX_MARK_END_CLASS();
}

void AsyncDebugConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__path,"__path");
	HX_VISIT_MEMBER_NAME(__cnx,"__cnx");
	HX_VISIT_MEMBER_NAME(__data,"__data");
}

Dynamic AsyncDebugConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__cnx") ) { return __cnx; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { return __path; }
		if (HX_FIELD_EQ(inName,"__data") ) { return __data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setCallDebug") ) { return setCallDebug_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setErrorDebug") ) { return setErrorDebug_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setResultDebug") ) { return setResultDebug_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setErrorHandler") ) { return setErrorHandler_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

bool AsyncDebugConnection_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
	}
	return false;
}

Dynamic AsyncDebugConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__cnx") ) { __cnx=inValue.Cast< ::haxe::remoting::AsyncConnection >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { __path=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__data") ) { __data=inValue.Cast< Dynamic >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void AsyncDebugConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"));
	outFields->push(HX_HCSTRING("__cnx","\x4d","\xe0","\x27","\xf2"));
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(AsyncDebugConnection_obj,__path),HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9")},
	{hx::fsObject /*::haxe::remoting::AsyncConnection*/ ,(int)offsetof(AsyncDebugConnection_obj,__cnx),HX_HCSTRING("__cnx","\x4d","\xe0","\x27","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncDebugConnection_obj,__data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"),
	HX_HCSTRING("__cnx","\x4d","\xe0","\x27","\xf2"),
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("setErrorHandler","\xa4","\x67","\xbb","\x15"),
	HX_HCSTRING("setErrorDebug","\xad","\x7f","\x9b","\xed"),
	HX_HCSTRING("setResultDebug","\xb4","\x53","\x6c","\x25"),
	HX_HCSTRING("setCallDebug","\xd3","\x6c","\xae","\x87"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AsyncDebugConnection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AsyncDebugConnection_obj::__mClass,"__mClass");
};

#endif

hx::Class AsyncDebugConnection_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null()) };

void AsyncDebugConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.AsyncDebugConnection","\x58","\x1b","\x01","\x5f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AsyncDebugConnection_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AsyncDebugConnection_obj >;
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
