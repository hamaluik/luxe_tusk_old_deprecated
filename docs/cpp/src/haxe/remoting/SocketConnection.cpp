#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
#ifndef INCLUDED_haxe_remoting_Context
#include <haxe/remoting/Context.h>
#endif
#ifndef INCLUDED_haxe_remoting_SocketConnection
#include <haxe/remoting/SocketConnection.h>
#endif
#ifndef INCLUDED_haxe_remoting_SocketProtocol
#include <haxe/remoting/SocketProtocol.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
namespace haxe{
namespace remoting{

Void SocketConnection_obj::__construct(Dynamic data,Array< ::String > path)
{
HX_STACK_FRAME("haxe.remoting.SocketConnection","new",0x9c260e06,"haxe.remoting.SocketConnection.new","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketConnection.hx",39,0x0b088651)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(40)
	this->__data = data;
	HX_STACK_LINE(41)
	this->__path = path;
}
;
	return null();
}

//SocketConnection_obj::~SocketConnection_obj() { }

Dynamic SocketConnection_obj::__CreateEmpty() { return  new SocketConnection_obj; }
hx::ObjectPtr< SocketConnection_obj > SocketConnection_obj::__new(Dynamic data,Array< ::String > path)
{  hx::ObjectPtr< SocketConnection_obj > _result_ = new SocketConnection_obj();
	_result_->__construct(data,path);
	return _result_;}

Dynamic SocketConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SocketConnection_obj > _result_ = new SocketConnection_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *SocketConnection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::remoting::AsyncConnection_obj)) return operator ::haxe::remoting::AsyncConnection_obj *();
	return super::__ToInterface(inType);
}

SocketConnection_obj::operator ::haxe::remoting::AsyncConnection_obj *()
	{ return new ::haxe::remoting::AsyncConnection_delegate_< SocketConnection_obj >(this); }
::haxe::remoting::AsyncConnection SocketConnection_obj::resolve( ::String name){
	HX_STACK_FRAME("haxe.remoting.SocketConnection","resolve",0x5a191b92,"haxe.remoting.SocketConnection.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketConnection.hx",44,0x0b088651)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(45)
	Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	::haxe::remoting::SocketConnection tmp1 = ::haxe::remoting::SocketConnection_obj::__new(tmp,this->__path->copy());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	::haxe::remoting::SocketConnection s = tmp1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(46)
	::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	s->__path->push(tmp2);
	HX_STACK_LINE(47)
	::haxe::remoting::SocketConnection tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SocketConnection_obj,resolve,return )

Void SocketConnection_obj::call( cpp::ArrayBase params,Dynamic onResult){
{
		HX_STACK_FRAME("haxe.remoting.SocketConnection","call",0xfdddcc38,"haxe.remoting.SocketConnection.call","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketConnection.hx",51,0x0b088651)
		HX_STACK_THIS(this)
		HX_STACK_ARG(params,"params")
		HX_STACK_ARG(onResult,"onResult")
		HX_STACK_LINE(51)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(52)
			Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(52)
			tmp->__Field(HX_HCSTRING("protocol","\x58","\x56","\x63","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("sendRequest","\xe7","\x32","\x91","\xce"), hx::paccDynamic )(this->__path,params);
			HX_STACK_LINE(53)
			Dynamic tmp1 = this->__data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			Dynamic tmp2 = onResult;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			Dynamic tmp3 = this->__data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			Dynamic tmp4 = tmp3->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &tmp4,Dynamic &tmp2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketConnection.hx",53,0x0b088651)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("onResult","\x5c","\x5f","\x31","\xe8") , tmp2,false);
						__result->Add(HX_HCSTRING("onError","\x29","\x6a","\x67","\x09") , tmp4,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(53)
			Dynamic tmp5 = _Function_2_1::Block(tmp4,tmp2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			tmp1->__Field(HX_HCSTRING("results","\xf6","\x58","\x57","\x6b"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp5);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(55)
					Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(55)
					Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(55)
					tmp->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic )(tmp1);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SocketConnection_obj,call,(void))

Void SocketConnection_obj::setErrorHandler( Dynamic h){
{
		HX_STACK_FRAME("haxe.remoting.SocketConnection","setErrorHandler",0x3d46864a,"haxe.remoting.SocketConnection.setErrorHandler","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketConnection.hx",59,0x0b088651)
		HX_STACK_THIS(this)
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(60)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		tmp->__FieldRef(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")) = h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SocketConnection_obj,setErrorHandler,(void))

Void SocketConnection_obj::setErrorLogger( Dynamic h){
{
		HX_STACK_FRAME("haxe.remoting.SocketConnection","setErrorLogger",0x63425010,"haxe.remoting.SocketConnection.setErrorLogger","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketConnection.hx",63,0x0b088651)
		HX_STACK_THIS(this)
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(64)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		tmp->__FieldRef(HX_HCSTRING("log","\x84","\x54","\x52","\x00")) = h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SocketConnection_obj,setErrorLogger,(void))

Void SocketConnection_obj::setProtocol( ::haxe::remoting::SocketProtocol p){
{
		HX_STACK_FRAME("haxe.remoting.SocketConnection","setProtocol",0x3d2573c0,"haxe.remoting.SocketConnection.setProtocol","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketConnection.hx",67,0x0b088651)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(68)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		tmp->__FieldRef(HX_HCSTRING("protocol","\x58","\x56","\x63","\x00")) = p;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SocketConnection_obj,setProtocol,(void))

::haxe::remoting::SocketProtocol SocketConnection_obj::getProtocol( ){
	HX_STACK_FRAME("haxe.remoting.SocketConnection","getProtocol",0x32b86cb4,"haxe.remoting.SocketConnection.getProtocol","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketConnection.hx",71,0x0b088651)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	::haxe::remoting::SocketProtocol tmp1 = tmp->__Field(HX_HCSTRING("protocol","\x58","\x56","\x63","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SocketConnection_obj,getProtocol,return )

Void SocketConnection_obj::close( ){
{
		HX_STACK_FRAME("haxe.remoting.SocketConnection","close",0x2b7c8ade,"haxe.remoting.SocketConnection.close","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketConnection.hx",76,0x0b088651)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(76)
			Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(76)
			::sys::net::Socket tmp1 = tmp->__Field(HX_HCSTRING("protocol","\x58","\x56","\x63","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("socket","\xb3","\x8b","\x46","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(76)
			tmp1->close();
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


HX_DEFINE_DYNAMIC_FUNC0(SocketConnection_obj,close,(void))

Void SocketConnection_obj::processMessage( ::String data){
{
		HX_STACK_FRAME("haxe.remoting.SocketConnection","processMessage",0xbd1d6f32,"haxe.remoting.SocketConnection.processMessage","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketConnection.hx",79,0x0b088651)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(80)
		bool request;		HX_STACK_VAR(request,"request");
		HX_STACK_LINE(81)
		Dynamic tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		::haxe::remoting::SocketProtocol proto = tmp->__Field(HX_HCSTRING("protocol","\x58","\x56","\x63","\x00"), hx::paccDynamic );		HX_STACK_VAR(proto,"proto");
		HX_STACK_LINE(82)
		::String tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		::String tmp2 = proto->decodeData(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		data = tmp2;
		HX_STACK_LINE(83)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(84)
			::String tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			bool tmp4 = proto->isRequest(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			request = tmp4;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(86)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(86)
					::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(86)
					::String tmp5 = (tmp4 + HX_HCSTRING(" (in ","\x93","\x25","\x93","\x87"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(86)
					::String tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(86)
					::String tmp7 = ::StringTools_obj::urlEncode(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(86)
					::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(86)
					::String tmp9 = (tmp8 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(86)
					::String msg = tmp9;		HX_STACK_VAR(msg,"msg");
					HX_STACK_LINE(87)
					Dynamic tmp10 = this->__data;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(87)
					::String tmp11 = msg;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(87)
					tmp10->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic )(tmp11);
					HX_STACK_LINE(88)
					return null();
				}
			}
		}
		HX_STACK_LINE(91)
		bool tmp3 = request;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		if ((tmp3)){
			HX_STACK_LINE(92)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(92)
				::String tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(92)
				Dynamic tmp5 = this->__data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(92)
				Dynamic tmp6 = tmp5->__Field(HX_HCSTRING("log","\x84","\x54","\x52","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				proto->processRequest(tmp4,tmp6);
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(92)
						Dynamic tmp4 = this->__data;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(92)
						Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(92)
						tmp4->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic )(tmp5);
					}
				}
			}
			HX_STACK_LINE(93)
			return null();
		}
		HX_STACK_LINE(96)
		Dynamic tmp4 = this->__data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("results","\xf6","\x58","\x57","\x6b"), hx::paccDynamic )->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		Dynamic f = tmp5;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(97)
		bool tmp6 = (f == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(97)
		if ((tmp6)){
			HX_STACK_LINE(98)
			Dynamic tmp7 = this->__data;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			::String tmp8 = (HX_HCSTRING("No response excepted (","\xc0","\x23","\x81","\x5b") + data);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(98)
			::String tmp9 = (tmp8 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(98)
			tmp7->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic )(tmp9);
			HX_STACK_LINE(99)
			return null();
		}
		HX_STACK_LINE(101)
		Dynamic ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(102)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(103)
			::String tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(103)
			Dynamic tmp8 = proto->processAnswer(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(103)
			ret = tmp8;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(105)
					Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(105)
					f->__Field(HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"), hx::paccDynamic )(tmp7);
					HX_STACK_LINE(106)
					return null();
				}
			}
		}
		HX_STACK_LINE(108)
		bool tmp7 = (f->__Field(HX_HCSTRING("onResult","\x5c","\x5f","\x31","\xe8"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(108)
		if ((tmp7)){
			HX_STACK_LINE(108)
			Dynamic tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(108)
			f->__Field(HX_HCSTRING("onResult","\x5c","\x5f","\x31","\xe8"), hx::paccDynamic )(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SocketConnection_obj,processMessage,(void))

Void SocketConnection_obj::defaultLog( Dynamic path,Dynamic args,Dynamic e){
{
		HX_STACK_FRAME("haxe.remoting.SocketConnection","defaultLog",0xa454c55d,"haxe.remoting.SocketConnection.defaultLog","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketConnection.hx",111,0x0b088651)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(args,"args")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(113)
		::String astr;		HX_STACK_VAR(astr,"astr");
		HX_STACK_LINE(113)
		::String estr;		HX_STACK_VAR(estr,"estr");
		HX_STACK_LINE(114)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(114)
			::String tmp = args->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(114)
			astr = tmp;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e1 = __e;{
					HX_STACK_LINE(114)
					astr = HX_HCSTRING("???","\x1f","\x05","\x30","\x00");
				}
			}
		}
		HX_STACK_LINE(115)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(115)
			Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(115)
			::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(115)
			estr = tmp1;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e1 = __e;{
					HX_STACK_LINE(115)
					estr = HX_HCSTRING("???","\x1f","\x05","\x30","\x00");
				}
			}
		}
		HX_STACK_LINE(116)
		::String tmp = path->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		::String tmp1 = (HX_HCSTRING("Error in call to ","\xe6","\x64","\xdf","\x34") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		::String tmp2 = (tmp1 + HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		::String tmp3 = astr;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		::String tmp5 = (tmp4 + HX_HCSTRING(") : ","\x3d","\x3a","\x32","\x1b"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		::String header = tmp5;		HX_STACK_VAR(header,"header");
		HX_STACK_LINE(117)
		Dynamic tmp6 = this->__data;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		::String tmp7 = (header + estr);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(117)
		tmp6->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic )(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SocketConnection_obj,defaultLog,(void))

::haxe::remoting::SocketConnection SocketConnection_obj::create( ::sys::net::Socket s,::haxe::remoting::Context ctx){
	HX_STACK_FRAME("haxe.remoting.SocketConnection","create",0x4f3ab516,"haxe.remoting.SocketConnection.create","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketConnection.hx",120,0x0b088651)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(ctx,"ctx")
	HX_STACK_LINE(122)
	::haxe::remoting::SocketProtocol tmp = ::haxe::remoting::SocketProtocol_obj::__new(s,ctx);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	::List tmp1 = ::List_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::remoting::SocketProtocol &tmp,::List &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketConnection.hx",121,0x0b088651)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("protocol","\x58","\x56","\x63","\x00") , tmp,false);
				__result->Add(HX_HCSTRING("results","\xf6","\x58","\x57","\x6b") , tmp1,false);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
				int __ArgCount() const { return 1; }
				Void run(Dynamic e){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketConnection.hx",124,0x0b088651)
					HX_STACK_ARG(e,"e")
					{
						HX_STACK_LINE(124)
						Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(124)
						HX_STACK_DO_THROW(tmp2);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				__result->Add(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73") ,  Dynamic(new _Function_2_1()),true);
				__result->Add(HX_HCSTRING("log","\x84","\x54","\x52","\x00") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(121)
	Dynamic tmp2 = _Function_1_1::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(121)
	Dynamic data = tmp2;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(131)
	::haxe::remoting::SocketConnection tmp3 = ::haxe::remoting::SocketConnection_obj::__new(data,Array_obj< ::String >::__new());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(131)
	::haxe::remoting::SocketConnection sc = tmp3;		HX_STACK_VAR(sc,"sc");
	HX_STACK_LINE(132)
	data->__FieldRef(HX_HCSTRING("log","\x84","\x54","\x52","\x00")) = sc->defaultLog_dyn();
	HX_STACK_LINE(172)
	::haxe::remoting::SocketConnection tmp4 = sc;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(172)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SocketConnection_obj,create,return )


SocketConnection_obj::SocketConnection_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void SocketConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SocketConnection);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__path,"__path");
	HX_MARK_MEMBER_NAME(__data,"__data");
	HX_MARK_END_CLASS();
}

void SocketConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__path,"__path");
	HX_VISIT_MEMBER_NAME(__data,"__data");
}

Dynamic SocketConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"__data") ) { return __data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultLog") ) { return defaultLog_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setProtocol") ) { return setProtocol_dyn(); }
		if (HX_FIELD_EQ(inName,"getProtocol") ) { return getProtocol_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setErrorLogger") ) { return setErrorLogger_dyn(); }
		if (HX_FIELD_EQ(inName,"processMessage") ) { return processMessage_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setErrorHandler") ) { return setErrorHandler_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

bool SocketConnection_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
	}
	return false;
}

Dynamic SocketConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { __path=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__data") ) { __data=inValue.Cast< Dynamic >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void SocketConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"));
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SocketConnection_obj,__path),HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SocketConnection_obj,__data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"),
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	HX_HCSTRING("setErrorHandler","\xa4","\x67","\xbb","\x15"),
	HX_HCSTRING("setErrorLogger","\xf6","\x57","\x94","\xf2"),
	HX_HCSTRING("setProtocol","\x1a","\x20","\xc4","\x30"),
	HX_HCSTRING("getProtocol","\x0e","\x19","\x57","\x26"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("processMessage","\x18","\x77","\x6f","\x4c"),
	HX_HCSTRING("defaultLog","\x43","\x62","\xff","\x25"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SocketConnection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SocketConnection_obj::__mClass,"__mClass");
};

#endif

hx::Class SocketConnection_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null()) };

void SocketConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.SocketConnection","\x14","\x53","\xc1","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SocketConnection_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SocketConnection_obj >;
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
