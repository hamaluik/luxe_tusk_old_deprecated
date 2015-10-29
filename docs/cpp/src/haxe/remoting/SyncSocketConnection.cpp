#include <hxcpp.h>

#ifndef INCLUDED_haxe_remoting_Connection
#include <haxe/remoting/Connection.h>
#endif
#ifndef INCLUDED_haxe_remoting_Context
#include <haxe/remoting/Context.h>
#endif
#ifndef INCLUDED_haxe_remoting_SocketProtocol
#include <haxe/remoting/SocketProtocol.h>
#endif
#ifndef INCLUDED_haxe_remoting_SyncSocketConnection
#include <haxe/remoting/SyncSocketConnection.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
namespace haxe{
namespace remoting{

Void SyncSocketConnection_obj::__construct(::haxe::remoting::SocketProtocol proto,Array< ::String > path)
{
HX_STACK_FRAME("haxe.remoting.SyncSocketConnection","new",0x215e5181,"haxe.remoting.SyncSocketConnection.new","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SyncSocketConnection.hx",30,0xb7162ab6)
HX_STACK_THIS(this)
HX_STACK_ARG(proto,"proto")
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(31)
	this->__proto = proto;
	HX_STACK_LINE(32)
	this->__path = path;
}
;
	return null();
}

//SyncSocketConnection_obj::~SyncSocketConnection_obj() { }

Dynamic SyncSocketConnection_obj::__CreateEmpty() { return  new SyncSocketConnection_obj; }
hx::ObjectPtr< SyncSocketConnection_obj > SyncSocketConnection_obj::__new(::haxe::remoting::SocketProtocol proto,Array< ::String > path)
{  hx::ObjectPtr< SyncSocketConnection_obj > _result_ = new SyncSocketConnection_obj();
	_result_->__construct(proto,path);
	return _result_;}

Dynamic SyncSocketConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SyncSocketConnection_obj > _result_ = new SyncSocketConnection_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *SyncSocketConnection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::remoting::Connection_obj)) return operator ::haxe::remoting::Connection_obj *();
	return super::__ToInterface(inType);
}

SyncSocketConnection_obj::operator ::haxe::remoting::Connection_obj *()
	{ return new ::haxe::remoting::Connection_delegate_< SyncSocketConnection_obj >(this); }
::haxe::remoting::Connection SyncSocketConnection_obj::resolve( ::String name){
	HX_STACK_FRAME("haxe.remoting.SyncSocketConnection","resolve",0x8678388d,"haxe.remoting.SyncSocketConnection.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SyncSocketConnection.hx",35,0xb7162ab6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(36)
	::haxe::remoting::SocketProtocol tmp = this->__proto;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	::haxe::remoting::SyncSocketConnection tmp1 = ::haxe::remoting::SyncSocketConnection_obj::__new(tmp,this->__path->copy());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	::haxe::remoting::SyncSocketConnection s = tmp1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(37)
	::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	s->__path->push(tmp2);
	HX_STACK_LINE(38)
	::haxe::remoting::SyncSocketConnection tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SyncSocketConnection_obj,resolve,return )

Dynamic SyncSocketConnection_obj::call( cpp::ArrayBase params){
	HX_STACK_FRAME("haxe.remoting.SyncSocketConnection","call",0x09e0945d,"haxe.remoting.SyncSocketConnection.call","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SyncSocketConnection.hx",41,0xb7162ab6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(42)
	::haxe::remoting::SocketProtocol tmp = this->__proto;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::haxe::remoting::SocketProtocol proto = tmp;		HX_STACK_VAR(proto,"proto");
	HX_STACK_LINE(43)
	proto->sendRequest(this->__path,params);
	HX_STACK_LINE(44)
	while((true)){
		HX_STACK_LINE(45)
		::String tmp1 = proto->readMessage();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::String data = tmp1;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(46)
		::String tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		bool tmp3 = proto->isRequest(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		if ((tmp3)){
			HX_STACK_LINE(47)
			bool tmp4 = (proto->context == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(47)
			if ((tmp4)){
				HX_STACK_LINE(48)
				HX_STACK_DO_THROW(HX_HCSTRING("Request received","\x32","\x80","\x87","\x9b"));
			}
			HX_STACK_LINE(49)
			::String tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(49)
			Dynamic tmp6 = this->onRequestError_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			proto->processRequest(tmp5,tmp6);
			HX_STACK_LINE(50)
			continue;
		}
		HX_STACK_LINE(52)
		::String tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		Dynamic tmp5 = proto->processAnswer(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		return tmp5;
	}
	HX_STACK_LINE(54)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SyncSocketConnection_obj,call,return )

Void SyncSocketConnection_obj::processRequest( ){
{
		HX_STACK_FRAME("haxe.remoting.SyncSocketConnection","processRequest",0xae03611f,"haxe.remoting.SyncSocketConnection.processRequest","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SyncSocketConnection.hx",57,0xb7162ab6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		::haxe::remoting::SocketProtocol tmp = this->__proto;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		::haxe::remoting::Context tmp1 = tmp->context;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		if ((tmp2)){
			HX_STACK_LINE(59)
			HX_STACK_DO_THROW(HX_HCSTRING("Can't process request","\xdb","\xe4","\x92","\xf2"));
		}
		HX_STACK_LINE(60)
		::haxe::remoting::SocketProtocol tmp3 = this->__proto;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		::String tmp4 = tmp3->readMessage();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		::String data = tmp4;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(61)
		::haxe::remoting::SocketProtocol tmp5 = this->__proto;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		::String tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		Dynamic tmp7 = this->onRequestError_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		tmp5->processRequest(tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SyncSocketConnection_obj,processRequest,(void))

Void SyncSocketConnection_obj::onRequestError( Array< ::String > path,cpp::ArrayBase args,Dynamic exc){
{
		HX_STACK_FRAME("haxe.remoting.SyncSocketConnection","onRequestError",0xf00b1e37,"haxe.remoting.SyncSocketConnection.onRequestError","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SyncSocketConnection.hx",64,0xb7162ab6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(args,"args")
		HX_STACK_ARG(exc,"exc")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SyncSocketConnection_obj,onRequestError,(void))

Void SyncSocketConnection_obj::setProtocol( ::haxe::remoting::SocketProtocol p){
{
		HX_STACK_FRAME("haxe.remoting.SyncSocketConnection","setProtocol",0x42d62a3b,"haxe.remoting.SyncSocketConnection.setProtocol","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SyncSocketConnection.hx",68,0xb7162ab6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(68)
		this->__proto = p;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SyncSocketConnection_obj,setProtocol,(void))

::haxe::remoting::SocketProtocol SyncSocketConnection_obj::getProtocol( ){
	HX_STACK_FRAME("haxe.remoting.SyncSocketConnection","getProtocol",0x3869232f,"haxe.remoting.SyncSocketConnection.getProtocol","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SyncSocketConnection.hx",71,0xb7162ab6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	::haxe::remoting::SocketProtocol tmp = this->__proto;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SyncSocketConnection_obj,getProtocol,return )

Void SyncSocketConnection_obj::close( ){
{
		HX_STACK_FRAME("haxe.remoting.SyncSocketConnection","close",0xa1e8e319,"haxe.remoting.SyncSocketConnection.close","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SyncSocketConnection.hx",76,0xb7162ab6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(76)
			::haxe::remoting::SocketProtocol tmp = this->__proto;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(76)
			tmp->socket->close();
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SyncSocketConnection_obj,close,(void))

::haxe::remoting::SyncSocketConnection SyncSocketConnection_obj::create( ::sys::net::Socket s,::haxe::remoting::Context ctx){
	HX_STACK_FRAME("haxe.remoting.SyncSocketConnection","create",0x779b907b,"haxe.remoting.SyncSocketConnection.create","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SyncSocketConnection.hx",79,0xb7162ab6)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(ctx,"ctx")
	HX_STACK_LINE(80)
	::haxe::remoting::SocketProtocol tmp = ::haxe::remoting::SocketProtocol_obj::__new(s,ctx);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	::haxe::remoting::SyncSocketConnection tmp1 = ::haxe::remoting::SyncSocketConnection_obj::__new(tmp,Array_obj< ::String >::__new());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SyncSocketConnection_obj,create,return )


SyncSocketConnection_obj::SyncSocketConnection_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void SyncSocketConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SyncSocketConnection);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__path,"__path");
	HX_MARK_MEMBER_NAME(__proto,"__proto");
	HX_MARK_END_CLASS();
}

void SyncSocketConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__path,"__path");
	HX_VISIT_MEMBER_NAME(__proto,"__proto");
}

Dynamic SyncSocketConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { return __path; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__proto") ) { return __proto; }
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setProtocol") ) { return setProtocol_dyn(); }
		if (HX_FIELD_EQ(inName,"getProtocol") ) { return getProtocol_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"processRequest") ) { return processRequest_dyn(); }
		if (HX_FIELD_EQ(inName,"onRequestError") ) { return onRequestError_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

bool SyncSocketConnection_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
	}
	return false;
}

Dynamic SyncSocketConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { __path=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__proto") ) { __proto=inValue.Cast< ::haxe::remoting::SocketProtocol >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void SyncSocketConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"));
	outFields->push(HX_HCSTRING("__proto","\xc8","\x43","\xee","\x32"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SyncSocketConnection_obj,__path),HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9")},
	{hx::fsObject /*::haxe::remoting::SocketProtocol*/ ,(int)offsetof(SyncSocketConnection_obj,__proto),HX_HCSTRING("__proto","\xc8","\x43","\xee","\x32")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"),
	HX_HCSTRING("__proto","\xc8","\x43","\xee","\x32"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	HX_HCSTRING("processRequest","\xa0","\x20","\xe3","\xf6"),
	HX_HCSTRING("onRequestError","\xb8","\xdd","\xea","\x38"),
	HX_HCSTRING("setProtocol","\x1a","\x20","\xc4","\x30"),
	HX_HCSTRING("getProtocol","\x0e","\x19","\x57","\x26"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SyncSocketConnection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SyncSocketConnection_obj::__mClass,"__mClass");
};

#endif

hx::Class SyncSocketConnection_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null()) };

void SyncSocketConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.SyncSocketConnection","\x0f","\x7d","\x9d","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SyncSocketConnection_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SyncSocketConnection_obj >;
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
