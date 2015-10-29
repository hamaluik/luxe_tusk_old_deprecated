#include <hxcpp.h>

#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_remoting_Context
#include <haxe/remoting/Context.h>
#endif
#ifndef INCLUDED_haxe_remoting_SocketProtocol
#include <haxe/remoting/SocketProtocol.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
namespace haxe{
namespace remoting{

Void SocketProtocol_obj::__construct(::sys::net::Socket sock,::haxe::remoting::Context ctx)
{
HX_STACK_FRAME("haxe.remoting.SocketProtocol","new",0x4abedfc0,"haxe.remoting.SocketProtocol.new","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketProtocol.hx",54,0x42162217)
HX_STACK_THIS(this)
HX_STACK_ARG(sock,"sock")
HX_STACK_ARG(ctx,"ctx")
{
	HX_STACK_LINE(55)
	this->socket = sock;
	HX_STACK_LINE(56)
	this->context = ctx;
}
;
	return null();
}

//SocketProtocol_obj::~SocketProtocol_obj() { }

Dynamic SocketProtocol_obj::__CreateEmpty() { return  new SocketProtocol_obj; }
hx::ObjectPtr< SocketProtocol_obj > SocketProtocol_obj::__new(::sys::net::Socket sock,::haxe::remoting::Context ctx)
{  hx::ObjectPtr< SocketProtocol_obj > _result_ = new SocketProtocol_obj();
	_result_->__construct(sock,ctx);
	return _result_;}

Dynamic SocketProtocol_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SocketProtocol_obj > _result_ = new SocketProtocol_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Dynamic SocketProtocol_obj::decodeChar( int c){
	HX_STACK_FRAME("haxe.remoting.SocketProtocol","decodeChar",0xdcf6b3c4,"haxe.remoting.SocketProtocol.decodeChar","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketProtocol.hx",59,0x42162217)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(61)
	bool tmp = (c >= (int)65);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	if ((tmp)){
		HX_STACK_LINE(61)
		tmp1 = (c <= (int)90);
	}
	else{
		HX_STACK_LINE(61)
		tmp1 = false;
	}
	HX_STACK_LINE(61)
	if ((tmp1)){
		HX_STACK_LINE(62)
		int tmp2 = (c - (int)65);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		return tmp2;
	}
	HX_STACK_LINE(64)
	bool tmp2 = (c >= (int)97);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	if ((tmp2)){
		HX_STACK_LINE(64)
		tmp3 = (c <= (int)122);
	}
	else{
		HX_STACK_LINE(64)
		tmp3 = false;
	}
	HX_STACK_LINE(64)
	if ((tmp3)){
		HX_STACK_LINE(65)
		int tmp4 = (c - (int)97);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		int tmp5 = (tmp4 + (int)26);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(65)
		return tmp5;
	}
	HX_STACK_LINE(67)
	bool tmp4 = (c >= (int)48);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(67)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(67)
	if ((tmp4)){
		HX_STACK_LINE(67)
		tmp5 = (c <= (int)57);
	}
	else{
		HX_STACK_LINE(67)
		tmp5 = false;
	}
	HX_STACK_LINE(67)
	if ((tmp5)){
		HX_STACK_LINE(68)
		int tmp6 = (c - (int)48);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		int tmp7 = (tmp6 + (int)52);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		return tmp7;
	}
	HX_STACK_LINE(70)
	bool tmp6 = (c == (int)43);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(70)
	if ((tmp6)){
		HX_STACK_LINE(71)
		return (int)62;
	}
	HX_STACK_LINE(73)
	bool tmp7 = (c == (int)47);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(73)
	if ((tmp7)){
		HX_STACK_LINE(74)
		return (int)63;
	}
	HX_STACK_LINE(75)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SocketProtocol_obj,decodeChar,return )

Dynamic SocketProtocol_obj::encodeChar( int c){
	HX_STACK_FRAME("haxe.remoting.SocketProtocol","encodeChar",0x07bddcac,"haxe.remoting.SocketProtocol.encodeChar","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketProtocol.hx",78,0x42162217)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(79)
	bool tmp = (c < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	if ((tmp)){
		HX_STACK_LINE(80)
		return null();
	}
	HX_STACK_LINE(82)
	bool tmp1 = (c < (int)26);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	if ((tmp1)){
		HX_STACK_LINE(83)
		int tmp2 = (c + (int)65);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		return tmp2;
	}
	HX_STACK_LINE(85)
	bool tmp2 = (c < (int)52);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	if ((tmp2)){
		HX_STACK_LINE(86)
		int tmp3 = (c - (int)26);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		int tmp4 = (tmp3 + (int)97);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		return tmp4;
	}
	HX_STACK_LINE(88)
	bool tmp3 = (c < (int)62);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(88)
	if ((tmp3)){
		HX_STACK_LINE(89)
		int tmp4 = (c - (int)52);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		int tmp5 = (tmp4 + (int)48);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		return tmp5;
	}
	HX_STACK_LINE(91)
	bool tmp4 = (c == (int)62);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(91)
	if ((tmp4)){
		HX_STACK_LINE(92)
		return (int)43;
	}
	HX_STACK_LINE(94)
	bool tmp5 = (c == (int)63);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(94)
	if ((tmp5)){
		HX_STACK_LINE(95)
		return (int)47;
	}
	HX_STACK_LINE(96)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SocketProtocol_obj,encodeChar,return )

Dynamic SocketProtocol_obj::messageLength( int c1,int c2){
	HX_STACK_FRAME("haxe.remoting.SocketProtocol","messageLength",0x0f0e556d,"haxe.remoting.SocketProtocol.messageLength","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketProtocol.hx",99,0x42162217)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c1,"c1")
	HX_STACK_ARG(c2,"c2")
	HX_STACK_LINE(100)
	int tmp = c1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	Dynamic tmp1 = this->decodeChar(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
	HX_STACK_LINE(101)
	int tmp2 = c2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	Dynamic tmp3 = this->decodeChar(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(101)
	Dynamic e2 = tmp3;		HX_STACK_VAR(e2,"e2");
	HX_STACK_LINE(102)
	bool tmp4 = (e1 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(102)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(102)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(102)
	if ((tmp5)){
		HX_STACK_LINE(102)
		tmp6 = (e2 == null());
	}
	else{
		HX_STACK_LINE(102)
		tmp6 = true;
	}
	HX_STACK_LINE(102)
	if ((tmp6)){
		HX_STACK_LINE(103)
		return null();
	}
	HX_STACK_LINE(104)
	int tmp7 = (int(e1) << int((int)6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(104)
	Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(104)
	int tmp9 = (int(tmp7) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(104)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC2(SocketProtocol_obj,messageLength,return )

Dynamic SocketProtocol_obj::encodeMessageLength( int len){
	HX_STACK_FRAME("haxe.remoting.SocketProtocol","encodeMessageLength",0xba3c6577,"haxe.remoting.SocketProtocol.encodeMessageLength","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketProtocol.hx",107,0x42162217)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(108)
	int tmp = (int(len) >> int((int)6));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	Dynamic tmp1 = this->encodeChar(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	Dynamic c1 = tmp1;		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(109)
	bool tmp2 = (c1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(109)
	if ((tmp2)){
		HX_STACK_LINE(110)
		HX_STACK_DO_THROW(HX_HCSTRING("Message is too big","\xd7","\x14","\xed","\x79"));
	}
	HX_STACK_LINE(111)
	int tmp3 = (int(len) & int((int)63));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(111)
	Dynamic tmp4 = this->encodeChar(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(111)
	Dynamic c2 = tmp4;		HX_STACK_VAR(c2,"c2");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &c1,Dynamic &c2){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketProtocol.hx",112,0x42162217)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("c1","\x6e","\x56","\x00","\x00") , c1,false);
				__result->Add(HX_HCSTRING("c2","\x6f","\x56","\x00","\x00") , c2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(112)
	Dynamic tmp5 = _Function_1_1::Block(c1,c2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(112)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(SocketProtocol_obj,encodeMessageLength,return )

Void SocketProtocol_obj::sendRequest( Array< ::String > path,cpp::ArrayBase params){
{
		HX_STACK_FRAME("haxe.remoting.SocketProtocol","sendRequest",0x3baaa247,"haxe.remoting.SocketProtocol.sendRequest","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketProtocol.hx",115,0x42162217)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(116)
		::haxe::Serializer tmp = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		::haxe::Serializer s = tmp;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(117)
		s->serialize(true);
		HX_STACK_LINE(118)
		s->serialize(path);
		HX_STACK_LINE(119)
		s->serialize(params);
		HX_STACK_LINE(120)
		::String tmp1 = s->toString();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		this->sendMessage(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SocketProtocol_obj,sendRequest,(void))

Void SocketProtocol_obj::sendAnswer( Dynamic answer,Dynamic isException){
{
		HX_STACK_FRAME("haxe.remoting.SocketProtocol","sendAnswer",0x1cf5c186,"haxe.remoting.SocketProtocol.sendAnswer","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketProtocol.hx",123,0x42162217)
		HX_STACK_THIS(this)
		HX_STACK_ARG(answer,"answer")
		HX_STACK_ARG(isException,"isException")
		HX_STACK_LINE(124)
		::haxe::Serializer tmp = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		::haxe::Serializer s = tmp;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(125)
		s->serialize(false);
		HX_STACK_LINE(126)
		Dynamic tmp1 = isException;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		if ((tmp1)){
			HX_STACK_LINE(127)
			Dynamic tmp2 = answer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			s->serializeException(tmp2);
		}
		else{
			HX_STACK_LINE(129)
			Dynamic tmp2 = answer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(129)
			s->serialize(tmp2);
		}
		HX_STACK_LINE(130)
		::String tmp2 = s->toString();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		this->sendMessage(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SocketProtocol_obj,sendAnswer,(void))

Void SocketProtocol_obj::sendMessage( ::String msg){
{
		HX_STACK_FRAME("haxe.remoting.SocketProtocol","sendMessage",0x9136f8bf,"haxe.remoting.SocketProtocol.sendMessage","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketProtocol.hx",133,0x42162217)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(134)
		int tmp = (msg.length + (int)3);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		Dynamic tmp1 = this->encodeMessageLength(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		Dynamic e = tmp1;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(136)
		::sys::net::Socket tmp2 = this->socket;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		::haxe::io::Output o = tmp2->output;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(137)
		Dynamic tmp3 = e->__Field(HX_HCSTRING("c1","\x6e","\x56","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		o->writeByte(tmp3);
		HX_STACK_LINE(138)
		Dynamic tmp4 = e->__Field(HX_HCSTRING("c2","\x6f","\x56","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(138)
		o->writeByte(tmp4);
		HX_STACK_LINE(139)
		::String tmp5 = msg;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		o->writeString(tmp5);
		HX_STACK_LINE(140)
		o->writeByte((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SocketProtocol_obj,sendMessage,(void))

HX_BEGIN_DEFAULT_FUNC(__default_decodeData,SocketProtocol_obj)
::String run(::String data){
	HX_STACK_FRAME("haxe.remoting.SocketProtocol","decodeData",0xdd9aab18,"haxe.remoting.SocketProtocol.decodeData","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketProtocol.hx",146,0x42162217)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(147)
	::String tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	return tmp;
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

bool SocketProtocol_obj::isRequest( ::String data){
	HX_STACK_FRAME("haxe.remoting.SocketProtocol","isRequest",0x0f3033e5,"haxe.remoting.SocketProtocol.isRequest","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketProtocol.hx",150,0x42162217)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(151)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	{
		HX_STACK_LINE(151)
		::String tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		Dynamic tmp2 = ::haxe::Unserializer_obj::run(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		Dynamic _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(151)
		Dynamic tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		Dynamic _switch_1 = (tmp3);
		if (  ( _switch_1==true)){
			HX_STACK_LINE(152)
			tmp = true;
		}
		else if (  ( _switch_1==false)){
			HX_STACK_LINE(153)
			tmp = false;
		}
		else  {
			HX_STACK_LINE(154)
			HX_STACK_DO_THROW(HX_HCSTRING("Invalid data","\x13","\x38","\x70","\x89"));
		}
;
;
	}
	HX_STACK_LINE(151)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(SocketProtocol_obj,isRequest,return )

Void SocketProtocol_obj::processRequest( ::String data,Dynamic onError){
{
		HX_STACK_FRAME("haxe.remoting.SocketProtocol","processRequest",0x9d8d8d40,"haxe.remoting.SocketProtocol.processRequest","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketProtocol.hx",158,0x42162217)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(onError,"onError")
		HX_STACK_LINE(159)
		::haxe::Unserializer tmp = ::haxe::Unserializer_obj::__new(data);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		::haxe::Unserializer s = tmp;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(160)
		Dynamic result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(161)
		bool isException = false;		HX_STACK_VAR(isException,"isException");
		HX_STACK_LINE(162)
		Dynamic tmp1 = s->unserialize();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		bool tmp2 = (tmp1 != true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		if ((tmp2)){
			HX_STACK_LINE(163)
			HX_STACK_DO_THROW(HX_HCSTRING("Not a request","\x23","\x47","\x0a","\x89"));
		}
		HX_STACK_LINE(164)
		Dynamic tmp3 = s->unserialize();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		Array< ::String > path = tmp3;		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(165)
		Dynamic tmp4 = s->unserialize();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		cpp::ArrayBase args = tmp4;		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(166)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(167)
			::haxe::remoting::Context tmp5 = this->context;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(167)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(167)
			if ((tmp6)){
				HX_STACK_LINE(167)
				HX_STACK_DO_THROW(HX_HCSTRING("No context is shared","\x2b","\x4b","\xf4","\x37"));
			}
			HX_STACK_LINE(168)
			::haxe::remoting::Context tmp7 = this->context;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(168)
			Dynamic tmp8 = tmp7->call(path,args);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(168)
			result = tmp8;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(170)
					result = e;
					HX_STACK_LINE(171)
					isException = true;
				}
			}
		}
		HX_STACK_LINE(174)
		Dynamic tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(174)
		bool tmp6 = isException;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		this->sendAnswer(tmp5,tmp6);
		HX_STACK_LINE(176)
		bool tmp7 = isException;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(176)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(176)
		if ((tmp7)){
			HX_STACK_LINE(176)
			tmp8 = (onError != null());
		}
		else{
			HX_STACK_LINE(176)
			tmp8 = false;
		}
		HX_STACK_LINE(176)
		if ((tmp8)){
			HX_STACK_LINE(177)
			Dynamic tmp9 = result;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(177)
			onError(path,args,tmp9).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SocketProtocol_obj,processRequest,(void))

Dynamic SocketProtocol_obj::processAnswer( ::String data){
	HX_STACK_FRAME("haxe.remoting.SocketProtocol","processAnswer",0x3b3f18ad,"haxe.remoting.SocketProtocol.processAnswer","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketProtocol.hx",180,0x42162217)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(181)
	::haxe::Unserializer tmp = ::haxe::Unserializer_obj::__new(data);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	::haxe::Unserializer s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(182)
	Dynamic tmp1 = s->unserialize();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	bool tmp2 = (tmp1 != false);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(182)
	if ((tmp2)){
		HX_STACK_LINE(183)
		HX_STACK_DO_THROW(HX_HCSTRING("Not an answer","\xe4","\x02","\xa3","\x4f"));
	}
	HX_STACK_LINE(184)
	Dynamic tmp3 = s->unserialize();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SocketProtocol_obj,processAnswer,return )

::String SocketProtocol_obj::readMessage( ){
	HX_STACK_FRAME("haxe.remoting.SocketProtocol","readMessage",0x5a163871,"haxe.remoting.SocketProtocol.readMessage","C:\\HaxeToolkit\\haxe\\std/haxe/remoting/SocketProtocol.hx",189,0x42162217)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	::sys::net::Socket tmp = this->socket;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	::haxe::io::Input i = tmp->input;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(191)
	int tmp1 = i->readByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	int c1 = tmp1;		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(192)
	int tmp2 = i->readByte();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	int c2 = tmp2;		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(193)
	int tmp3 = c1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(193)
	int tmp4 = c2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(193)
	Dynamic tmp5 = this->messageLength(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(193)
	Dynamic len = tmp5;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(194)
	bool tmp6 = (len == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(194)
	if ((tmp6)){
		HX_STACK_LINE(195)
		HX_STACK_DO_THROW(HX_HCSTRING("Invalid header","\xb6","\xf7","\x77","\xca"));
	}
	HX_STACK_LINE(196)
	int tmp7 = (len - (int)3);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(196)
	::String tmp8 = i->readString(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(196)
	::String data = tmp8;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(197)
	int tmp9 = i->readByte();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(197)
	bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(197)
	if ((tmp10)){
		HX_STACK_LINE(198)
		HX_STACK_DO_THROW(HX_HCSTRING("Invalid message","\x7e","\xab","\x89","\x95"));
	}
	HX_STACK_LINE(199)
	::String tmp11 = data;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(199)
	::String tmp12 = this->decodeData(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(199)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(SocketProtocol_obj,readMessage,return )


SocketProtocol_obj::SocketProtocol_obj()
{
	decodeData = new __default_decodeData(this);
}

void SocketProtocol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SocketProtocol);
	HX_MARK_MEMBER_NAME(socket,"socket");
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(decodeData,"decodeData");
	HX_MARK_END_CLASS();
}

void SocketProtocol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(socket,"socket");
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(decodeData,"decodeData");
}

Dynamic SocketProtocol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"socket") ) { return socket; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isRequest") ) { return isRequest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decodeChar") ) { return decodeChar_dyn(); }
		if (HX_FIELD_EQ(inName,"encodeChar") ) { return encodeChar_dyn(); }
		if (HX_FIELD_EQ(inName,"sendAnswer") ) { return sendAnswer_dyn(); }
		if (HX_FIELD_EQ(inName,"decodeData") ) { return decodeData; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sendRequest") ) { return sendRequest_dyn(); }
		if (HX_FIELD_EQ(inName,"sendMessage") ) { return sendMessage_dyn(); }
		if (HX_FIELD_EQ(inName,"readMessage") ) { return readMessage_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"messageLength") ) { return messageLength_dyn(); }
		if (HX_FIELD_EQ(inName,"processAnswer") ) { return processAnswer_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"processRequest") ) { return processRequest_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"encodeMessageLength") ) { return encodeMessageLength_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SocketProtocol_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"socket") ) { socket=inValue.Cast< ::sys::net::Socket >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::haxe::remoting::Context >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decodeData") ) { decodeData=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SocketProtocol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("socket","\xb3","\x8b","\x46","\x26"));
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sys::net::Socket*/ ,(int)offsetof(SocketProtocol_obj,socket),HX_HCSTRING("socket","\xb3","\x8b","\x46","\x26")},
	{hx::fsObject /*::haxe::remoting::Context*/ ,(int)offsetof(SocketProtocol_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SocketProtocol_obj,decodeData),HX_HCSTRING("decodeData","\x78","\x0e","\x0b","\xcd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("socket","\xb3","\x8b","\x46","\x26"),
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("decodeChar","\x24","\x17","\x67","\xcc"),
	HX_HCSTRING("encodeChar","\x0c","\x40","\x2e","\xf7"),
	HX_HCSTRING("messageLength","\x0d","\x4e","\x32","\x15"),
	HX_HCSTRING("encodeMessageLength","\x17","\x96","\x14","\x45"),
	HX_HCSTRING("sendRequest","\xe7","\x32","\x91","\xce"),
	HX_HCSTRING("sendAnswer","\xe6","\x24","\x66","\x0c"),
	HX_HCSTRING("sendMessage","\x5f","\x89","\x1d","\x24"),
	HX_HCSTRING("decodeData","\x78","\x0e","\x0b","\xcd"),
	HX_HCSTRING("isRequest","\x85","\x5c","\x83","\x48"),
	HX_HCSTRING("processRequest","\xa0","\x20","\xe3","\xf6"),
	HX_HCSTRING("processAnswer","\x4d","\x11","\x63","\x41"),
	HX_HCSTRING("readMessage","\x11","\xc9","\xfc","\xec"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SocketProtocol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SocketProtocol_obj::__mClass,"__mClass");
};

#endif

hx::Class SocketProtocol_obj::__mClass;

void SocketProtocol_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.SocketProtocol","\xce","\x3f","\xec","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SocketProtocol_obj >;
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
