#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_Http
#include <haxe/Http.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
namespace haxe{

Void Http_obj::__construct(::String url)
{
HX_STACK_FRAME("haxe.Http","new",0x57ac51e2,"haxe.Http.new","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",88,0xd46eaf46)
HX_STACK_THIS(this)
HX_STACK_ARG(url,"url")
{
	HX_STACK_LINE(89)
	this->url = url;
	HX_STACK_LINE(90)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	this->headers = tmp;
	HX_STACK_LINE(91)
	::List tmp1 = ::List_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	this->params = tmp1;
	HX_STACK_LINE(96)
	this->cnxTimeout = (int)10;
}
;
	return null();
}

//Http_obj::~Http_obj() { }

Dynamic Http_obj::__CreateEmpty() { return  new Http_obj; }
hx::ObjectPtr< Http_obj > Http_obj::__new(::String url)
{  hx::ObjectPtr< Http_obj > _result_ = new Http_obj();
	_result_->__construct(url);
	return _result_;}

Dynamic Http_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Http_obj > _result_ = new Http_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxe::Http Http_obj::setHeader( ::String header,::String value){
	HX_STACK_FRAME("haxe.Http","setHeader",0x34bd0dd1,"haxe.Http.setHeader","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",110,0xd46eaf46)
	HX_STACK_THIS(this)
	HX_STACK_ARG(header,"header")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(111)
	::List tmp = this->headers;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::String,header)
	int __ArgCount() const { return 1; }
	bool run(Dynamic h){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",111,0xd46eaf46)
		HX_STACK_ARG(h,"h")
		{
			HX_STACK_LINE(111)
			bool tmp1 = (h->__Field(HX_HCSTRING("header","\x8d","\x09","\x00","\xfd"), hx::paccDynamic ) != header);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(111)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(111)
	::List tmp1 = ::Lambda_obj::filter(tmp, Dynamic(new _Function_1_1(header)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	this->headers = tmp1;
	HX_STACK_LINE(112)
	::List tmp2 = this->headers;		HX_STACK_VAR(tmp2,"tmp2");
	struct _Function_1_2{
		inline static Dynamic Block( ::String &header,::String &value){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",112,0xd46eaf46)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("header","\x8d","\x09","\x00","\xfd") , header,false);
				__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , value,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(112)
	Dynamic tmp3 = _Function_1_2::Block(header,value);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(112)
	tmp2->push(tmp3);
	HX_STACK_LINE(113)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Http_obj,setHeader,return )

::haxe::Http Http_obj::addHeader( ::String header,::String value){
	HX_STACK_FRAME("haxe.Http","addHeader",0x8d39cd90,"haxe.Http.addHeader","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",116,0xd46eaf46)
	HX_STACK_THIS(this)
	HX_STACK_ARG(header,"header")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(117)
	::List tmp = this->headers;		HX_STACK_VAR(tmp,"tmp");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &header,::String &value){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",117,0xd46eaf46)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("header","\x8d","\x09","\x00","\xfd") , header,false);
				__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , value,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(117)
	Dynamic tmp1 = _Function_1_1::Block(header,value);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	tmp->push(tmp1);
	HX_STACK_LINE(118)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Http_obj,addHeader,return )

::haxe::Http Http_obj::setParameter( ::String param,::String value){
	HX_STACK_FRAME("haxe.Http","setParameter",0x96e033e5,"haxe.Http.setParameter","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",128,0xd46eaf46)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(129)
	::List tmp = this->params;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::String,param)
	int __ArgCount() const { return 1; }
	bool run(Dynamic p){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",129,0xd46eaf46)
		HX_STACK_ARG(p,"p")
		{
			HX_STACK_LINE(129)
			bool tmp1 = (p->__Field(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"), hx::paccDynamic ) != param);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(129)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(129)
	::List tmp1 = ::Lambda_obj::filter(tmp, Dynamic(new _Function_1_1(param)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(129)
	this->params = tmp1;
	HX_STACK_LINE(130)
	::List tmp2 = this->params;		HX_STACK_VAR(tmp2,"tmp2");
	struct _Function_1_2{
		inline static Dynamic Block( ::String &param,::String &value){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",130,0xd46eaf46)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd") , param,false);
				__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , value,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(130)
	Dynamic tmp3 = _Function_1_2::Block(param,value);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(130)
	tmp2->push(tmp3);
	HX_STACK_LINE(131)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Http_obj,setParameter,return )

::haxe::Http Http_obj::addParameter( ::String param,::String value){
	HX_STACK_FRAME("haxe.Http","addParameter",0x71e49586,"haxe.Http.addParameter","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",134,0xd46eaf46)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(135)
	::List tmp = this->params;		HX_STACK_VAR(tmp,"tmp");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &param,::String &value){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",135,0xd46eaf46)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd") , param,false);
				__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , value,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(135)
	Dynamic tmp1 = _Function_1_1::Block(param,value);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	tmp->push(tmp1);
	HX_STACK_LINE(136)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Http_obj,addParameter,return )

::haxe::Http Http_obj::setPostData( ::String data){
	HX_STACK_FRAME("haxe.Http","setPostData",0x64dc53ee,"haxe.Http.setPostData","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",149,0xd46eaf46)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(150)
	this->postData = data;
	HX_STACK_LINE(151)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Http_obj,setPostData,return )

Void Http_obj::request( Dynamic post){
{
		HX_STACK_FRAME("haxe.Http","request",0xb2c949d1,"haxe.Http.request","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",195,0xd46eaf46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(post,"post")
		HX_STACK_LINE(195)
		::haxe::Http _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(196)
		::haxe::Http me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(332)
		::haxe::Http me1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me1,"me1");
		HX_STACK_LINE(333)
		::haxe::io::BytesOutput tmp = ::haxe::io::BytesOutput_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		::haxe::io::BytesOutput output = tmp;		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(334)
		Dynamic tmp1 = this->onError_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		Dynamic old = tmp1;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(335)
		Array< bool > err = Array_obj< bool >::__new().Add(false);		HX_STACK_VAR(err,"err");

		HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_Function_1_1,Dynamic,old,::haxe::Http,_g,::haxe::Http,me1,::haxe::io::BytesOutput,output,Array< bool >,err)
		int __ArgCount() const { return 1; }
		Void run(::String e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",336,0xd46eaf46)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(340)
				::haxe::io::Bytes tmp2 = output->getBytes();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(340)
				::String tmp3 = tmp2->toString();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(340)
				me1->responseData = tmp3;
				HX_STACK_LINE(342)
				err[(int)0] = true;
				HX_STACK_LINE(344)
				_g->onError = old;
				HX_STACK_LINE(345)
				::String tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(345)
				_g->onError(tmp4);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(336)
		this->onError =  Dynamic(new _Function_1_1(old,_g,me1,output,err));
		HX_STACK_LINE(347)
		Dynamic tmp2 = post;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(347)
		::haxe::io::BytesOutput tmp3 = output;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(347)
		this->customRequest(tmp2,tmp3,null(),null());
		HX_STACK_LINE(348)
		bool tmp4 = err->__get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(348)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(348)
		if ((tmp5)){
			HX_STACK_LINE(352)
			::haxe::io::Bytes tmp6 = output->getBytes();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(352)
			::String tmp7 = tmp6->toString();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(352)
			::String tmp8 = me1->responseData = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(352)
			me1->onData(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Http_obj,request,(void))

Void Http_obj::fileTransfert( ::String argname,::String filename,::haxe::io::Input file,int size,::String __o_mimeType){
::String mimeType = __o_mimeType.Default(HX_HCSTRING("application/octet-stream","\x5d","\xf8","\x82","\x30"));
	HX_STACK_FRAME("haxe.Http","fileTransfert",0x5f2130cf,"haxe.Http.fileTransfert","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",363,0xd46eaf46)
	HX_STACK_THIS(this)
	HX_STACK_ARG(argname,"argname")
	HX_STACK_ARG(filename,"filename")
	HX_STACK_ARG(file,"file")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(mimeType,"mimeType")
{
		HX_STACK_LINE(364)
		::String tmp = argname;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(364)
		::String tmp1 = filename;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(364)
		::haxe::io::Input tmp2 = file;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(364)
		int tmp3 = size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(364)
		::String tmp4 = mimeType;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(364)
		this->fileTransfer(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Http_obj,fileTransfert,(void))

Void Http_obj::fileTransfer( ::String argname,::String filename,::haxe::io::Input file,int size,::String __o_mimeType){
::String mimeType = __o_mimeType.Default(HX_HCSTRING("application/octet-stream","\x5d","\xf8","\x82","\x30"));
	HX_STACK_FRAME("haxe.Http","fileTransfer",0x44285405,"haxe.Http.fileTransfer","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",367,0xd46eaf46)
	HX_STACK_THIS(this)
	HX_STACK_ARG(argname,"argname")
	HX_STACK_ARG(filename,"filename")
	HX_STACK_ARG(file,"file")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(mimeType,"mimeType")
{
		struct _Function_1_1{
			inline static Dynamic Block( ::String &mimeType,int &size,::String &filename,::haxe::io::Input &file,::String &argname){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",368,0xd46eaf46)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd") , argname,false);
					__result->Add(HX_HCSTRING("filename","\xc7","\x2e","\x6a","\x77") , filename,false);
					__result->Add(HX_HCSTRING("io","\xe6","\x5b","\x00","\x00") , file,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , size,false);
					__result->Add(HX_HCSTRING("mimeType","\x8e","\x56","\x09","\x5d") , mimeType,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(368)
		Dynamic tmp = _Function_1_1::Block(mimeType,size,filename,file,argname);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(368)
		this->file = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Http_obj,fileTransfer,(void))

Void Http_obj::customRequest( bool post,::haxe::io::Output api,Dynamic sock,::String method){
{
		HX_STACK_FRAME("haxe.Http","customRequest",0x68e97fa0,"haxe.Http.customRequest","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",371,0xd46eaf46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(post,"post")
		HX_STACK_ARG(api,"api")
		HX_STACK_ARG(sock,"sock")
		HX_STACK_ARG(method,"method")
		HX_STACK_LINE(372)
		this->responseData = null();
		HX_STACK_LINE(373)
		::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("^(https?://)?([a-zA-Z\\.0-9_-]+)(:[0-9]+)?(.*)$","\x00","\x3e","\x3a","\x6c"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(373)
		::EReg url_regexp = tmp;		HX_STACK_VAR(url_regexp,"url_regexp");
		HX_STACK_LINE(374)
		::String tmp1 = this->url;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(374)
		bool tmp2 = url_regexp->match(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(374)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(374)
		if ((tmp3)){
			HX_STACK_LINE(375)
			this->onError(HX_HCSTRING("Invalid URL","\x86","\x55","\xd0","\x76"));
			HX_STACK_LINE(376)
			return null();
		}
		HX_STACK_LINE(378)
		::String tmp4 = url_regexp->matched((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(378)
		bool tmp5 = (tmp4 == HX_HCSTRING("https://","\xcf","\xb4","\xae","\x3e"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(378)
		bool secure = tmp5;		HX_STACK_VAR(secure,"secure");
		HX_STACK_LINE(379)
		bool tmp6 = (sock == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(379)
		if ((tmp6)){
			HX_STACK_LINE(380)
			bool tmp7 = secure;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(380)
			if ((tmp7)){
				HX_STACK_LINE(392)
				HX_STACK_DO_THROW(HX_HCSTRING("Https is only supported with -lib hxssl","\xe9","\xc3","\x05","\x32"));
			}
			else{
				HX_STACK_LINE(395)
				::sys::net::Socket tmp8 = ::sys::net::Socket_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(395)
				sock = tmp8;
			}
		}
		HX_STACK_LINE(397)
		::String tmp7 = url_regexp->matched((int)2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(397)
		::String host = tmp7;		HX_STACK_VAR(host,"host");
		HX_STACK_LINE(398)
		::String tmp8 = url_regexp->matched((int)3);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(398)
		::String portString = tmp8;		HX_STACK_VAR(portString,"portString");
		HX_STACK_LINE(399)
		::String tmp9 = url_regexp->matched((int)4);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(399)
		::String request = tmp9;		HX_STACK_VAR(request,"request");
		HX_STACK_LINE(400)
		bool tmp10 = (request == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(400)
		if ((tmp10)){
			HX_STACK_LINE(401)
			request = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
		}
		HX_STACK_LINE(402)
		bool tmp11 = (portString == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(402)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(402)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(402)
		if ((tmp12)){
			HX_STACK_LINE(402)
			tmp13 = (portString == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(402)
			tmp13 = true;
		}
		HX_STACK_LINE(402)
		Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(402)
		if ((tmp13)){
			HX_STACK_LINE(402)
			bool tmp15 = secure;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(402)
			if ((tmp15)){
				HX_STACK_LINE(402)
				tmp14 = (int)443;
			}
			else{
				HX_STACK_LINE(402)
				tmp14 = (int)80;
			}
		}
		else{
			HX_STACK_LINE(402)
			int tmp15 = (portString.length - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(402)
			::String tmp16 = portString.substr((int)1,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(402)
			tmp14 = ::Std_obj::parseInt(tmp16);
		}
		HX_STACK_LINE(402)
		Dynamic port = tmp14;		HX_STACK_VAR(port,"port");
		HX_STACK_LINE(403)
		Dynamic data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(405)
		Dynamic tmp15 = this->file;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(405)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(405)
		bool multipart = tmp16;		HX_STACK_VAR(multipart,"multipart");
		HX_STACK_LINE(406)
		::String boundary = null();		HX_STACK_VAR(boundary,"boundary");
		HX_STACK_LINE(407)
		::String uri = null();		HX_STACK_VAR(uri,"uri");
		HX_STACK_LINE(408)
		bool tmp17 = multipart;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(408)
		if ((tmp17)){
			HX_STACK_LINE(409)
			post = true;
			HX_STACK_LINE(410)
			int tmp18 = ::Std_obj::random((int)1000);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(410)
			::String tmp19 = ::Std_obj::string(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(410)
			int tmp20 = ::Std_obj::random((int)1000);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(410)
			::String tmp21 = ::Std_obj::string(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(410)
			::String tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(410)
			int tmp23 = ::Std_obj::random((int)1000);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(410)
			::String tmp24 = ::Std_obj::string(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(410)
			::String tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(410)
			int tmp26 = ::Std_obj::random((int)1000);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(410)
			::String tmp27 = ::Std_obj::string(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(410)
			::String tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(410)
			boundary = tmp28;
			HX_STACK_LINE(411)
			while((true)){
				HX_STACK_LINE(411)
				bool tmp29 = (boundary.length < (int)38);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(411)
				bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(411)
				if ((tmp30)){
					HX_STACK_LINE(411)
					break;
				}
				HX_STACK_LINE(412)
				::String tmp31 = (HX_HCSTRING("-","\x2d","\x00","\x00","\x00") + boundary);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(412)
				boundary = tmp31;
			}
			HX_STACK_LINE(413)
			::StringBuf tmp29 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(413)
			::StringBuf b = tmp29;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(414)
			{
				HX_STACK_LINE(414)
				::List tmp30 = this->params;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(414)
				::_List::ListIterator tmp31 = ::_List::ListIterator_obj::__new(tmp30->h);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(414)
				::_List::ListIterator _g = tmp31;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(414)
				while((true)){
					HX_STACK_LINE(414)
					bool tmp32 = (_g->head != null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(414)
					bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(414)
					if ((tmp33)){
						HX_STACK_LINE(414)
						break;
					}
					HX_STACK_LINE(414)
					Dynamic tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(414)
					{
						HX_STACK_LINE(414)
						Dynamic tmp35 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(414)
						_g->val = tmp35;
						HX_STACK_LINE(414)
						Dynamic tmp36 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(414)
						_g->head = tmp36;
						HX_STACK_LINE(414)
						tmp34 = _g->val;
					}
					HX_STACK_LINE(414)
					Dynamic p = tmp34;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(415)
					b->add(HX_HCSTRING("--","\x60","\x27","\x00","\x00"));
					HX_STACK_LINE(416)
					::String tmp35 = boundary;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(416)
					b->add(tmp35);
					HX_STACK_LINE(417)
					b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
					HX_STACK_LINE(418)
					b->add(HX_HCSTRING("Content-Disposition: form-data; name=\"","\xbf","\x46","\x3a","\x1c"));
					HX_STACK_LINE(419)
					::String tmp36 = p->__Field(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(419)
					b->add(tmp36);
					HX_STACK_LINE(420)
					b->add(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
					HX_STACK_LINE(421)
					b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
					HX_STACK_LINE(422)
					b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
					HX_STACK_LINE(423)
					::String tmp37 = p->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(423)
					b->add(tmp37);
					HX_STACK_LINE(424)
					b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
				}
			}
			HX_STACK_LINE(426)
			b->add(HX_HCSTRING("--","\x60","\x27","\x00","\x00"));
			HX_STACK_LINE(427)
			::String tmp30 = boundary;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(427)
			b->add(tmp30);
			HX_STACK_LINE(428)
			b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
			HX_STACK_LINE(429)
			b->add(HX_HCSTRING("Content-Disposition: form-data; name=\"","\xbf","\x46","\x3a","\x1c"));
			HX_STACK_LINE(430)
			Dynamic tmp31 = this->file;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(430)
			::String tmp32 = tmp31->__Field(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(430)
			b->add(tmp32);
			HX_STACK_LINE(431)
			b->add(HX_HCSTRING("\"; filename=\"","\xb3","\x3a","\xe5","\x4f"));
			HX_STACK_LINE(432)
			Dynamic tmp33 = this->file;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(432)
			::String tmp34 = tmp33->__Field(HX_HCSTRING("filename","\xc7","\x2e","\x6a","\x77"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(432)
			b->add(tmp34);
			HX_STACK_LINE(433)
			b->add(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
			HX_STACK_LINE(434)
			b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
			HX_STACK_LINE(435)
			Dynamic tmp35 = this->file;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(435)
			::String tmp36 = tmp35->__Field(HX_HCSTRING("mimeType","\x8e","\x56","\x09","\x5d"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(435)
			::String tmp37 = (HX_HCSTRING("Content-Type: ","\xf4","\x2b","\xe6","\x1d") + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(435)
			::String tmp38 = (tmp37 + HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(435)
			::String tmp39 = (tmp38 + HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(435)
			b->add(tmp39);
			HX_STACK_LINE(436)
			::String tmp40 = b->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(436)
			uri = tmp40;
		}
		else{
			HX_STACK_LINE(438)
			::List tmp18 = this->params;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(438)
			::_List::ListIterator tmp19 = ::_List::ListIterator_obj::__new(tmp18->h);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(438)
			::_List::ListIterator _g = tmp19;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(438)
			while((true)){
				HX_STACK_LINE(438)
				bool tmp20 = (_g->head != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(438)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(438)
				if ((tmp21)){
					HX_STACK_LINE(438)
					break;
				}
				HX_STACK_LINE(438)
				Dynamic tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(438)
				{
					HX_STACK_LINE(438)
					Dynamic tmp23 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(438)
					_g->val = tmp23;
					HX_STACK_LINE(438)
					Dynamic tmp24 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(438)
					_g->head = tmp24;
					HX_STACK_LINE(438)
					tmp22 = _g->val;
				}
				HX_STACK_LINE(438)
				Dynamic p = tmp22;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(439)
				bool tmp23 = (uri == null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(439)
				if ((tmp23)){
					HX_STACK_LINE(440)
					uri = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(442)
					hx::AddEq(uri,HX_HCSTRING("&","\x26","\x00","\x00","\x00"));
				}
				HX_STACK_LINE(443)
				::String tmp24 = p->__Field(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(443)
				::String tmp25 = ::StringTools_obj::urlEncode(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(443)
				::String tmp26 = (tmp25 + HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(443)
				::String tmp27 = p->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(443)
				::String tmp28 = ::StringTools_obj::urlEncode(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(443)
				::String tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(443)
				hx::AddEq(uri,tmp29);
			}
		}
		HX_STACK_LINE(447)
		::StringBuf tmp18 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(447)
		::StringBuf b = tmp18;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(448)
		bool tmp19 = (method != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(448)
		if ((tmp19)){
			HX_STACK_LINE(449)
			::String tmp20 = method;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(449)
			b->add(tmp20);
			HX_STACK_LINE(450)
			b->add(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(451)
			bool tmp20 = post;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(451)
			if ((tmp20)){
				HX_STACK_LINE(452)
				b->add(HX_HCSTRING("POST ","\xc0","\x87","\x85","\x44"));
			}
			else{
				HX_STACK_LINE(454)
				b->add(HX_HCSTRING("GET ","\xea","\xca","\x22","\x2f"));
			}
		}
		HX_STACK_LINE(456)
		Dynamic tmp20 = ::haxe::Http_obj::PROXY;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(456)
		bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(456)
		if ((tmp21)){
			HX_STACK_LINE(457)
			b->add(HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a"));
			HX_STACK_LINE(458)
			::String tmp22 = host;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(458)
			b->add(tmp22);
			HX_STACK_LINE(459)
			bool tmp23 = (port != (int)80);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(459)
			if ((tmp23)){
				HX_STACK_LINE(460)
				b->add(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));
				HX_STACK_LINE(461)
				Dynamic tmp24 = port;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(461)
				b->add(tmp24);
			}
		}
		HX_STACK_LINE(464)
		::String tmp22 = request;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(464)
		b->add(tmp22);
		HX_STACK_LINE(466)
		bool tmp23 = post;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(466)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(466)
		bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(466)
		bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(466)
		if ((tmp25)){
			HX_STACK_LINE(466)
			tmp26 = (uri != null());
		}
		else{
			HX_STACK_LINE(466)
			tmp26 = false;
		}
		HX_STACK_LINE(466)
		if ((tmp26)){
			HX_STACK_LINE(467)
			int tmp27 = request.indexOf(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(467)
			bool tmp28 = (tmp27 >= (int)0);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(467)
			if ((tmp28)){
				HX_STACK_LINE(468)
				b->add(HX_HCSTRING("&","\x26","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(470)
				b->add(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(471)
			::String tmp29 = uri;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(471)
			b->add(tmp29);
		}
		HX_STACK_LINE(473)
		::String tmp27 = (HX_HCSTRING(" HTTP/1.1\r\nHost: ","\xd8","\xa9","\xd9","\x24") + host);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(473)
		::String tmp28 = (tmp27 + HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(473)
		b->add(tmp28);
		HX_STACK_LINE(474)
		::String tmp29 = this->postData;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(474)
		bool tmp30 = (tmp29 != null());		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(474)
		if ((tmp30)){
			HX_STACK_LINE(475)
			::String tmp31 = this->postData;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(475)
			int tmp32 = tmp31.length;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(475)
			::String tmp33 = (HX_HCSTRING("Content-Length: ","\x20","\xde","\x22","\x7c") + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(475)
			::String tmp34 = (tmp33 + HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(475)
			b->add(tmp34);
		}
		else{
			HX_STACK_LINE(476)
			bool tmp31 = post;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(476)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(476)
			if ((tmp31)){
				HX_STACK_LINE(476)
				tmp32 = (uri != null());
			}
			else{
				HX_STACK_LINE(476)
				tmp32 = false;
			}
			HX_STACK_LINE(476)
			if ((tmp32)){
				HX_STACK_LINE(477)
				bool tmp33 = multipart;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(477)
				bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(477)
				bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(477)
				if ((tmp34)){
					HX_STACK_LINE(477)
					::List tmp36 = this->headers;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(477)
					::List tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(477)
					::List tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_1)
					int __ArgCount() const { return 1; }
					bool run(Dynamic h){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",477,0xd46eaf46)
						HX_STACK_ARG(h,"h")
						{
							HX_STACK_LINE(477)
							bool tmp39 = (h->__Field(HX_HCSTRING("header","\x8d","\x09","\x00","\xfd"), hx::paccDynamic ) == HX_HCSTRING("Content-Type","\xce","\x69","\x5d","\x3c"));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(477)
							bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(477)
							bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(477)
							return tmp41;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(477)
					bool tmp39 = ::Lambda_obj::exists(tmp38, Dynamic(new _Function_4_1()));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(477)
					bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(477)
					bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(477)
					tmp35 = !(tmp41);
				}
				else{
					HX_STACK_LINE(477)
					tmp35 = true;
				}
				HX_STACK_LINE(477)
				if ((tmp35)){
					HX_STACK_LINE(478)
					b->add(HX_HCSTRING("Content-Type: ","\xf4","\x2b","\xe6","\x1d"));
					HX_STACK_LINE(479)
					bool tmp36 = multipart;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(479)
					if ((tmp36)){
						HX_STACK_LINE(480)
						b->add(HX_HCSTRING("multipart/form-data","\xf0","\xf8","\x88","\xdb"));
						HX_STACK_LINE(481)
						b->add(HX_HCSTRING("; boundary=","\xee","\xf7","\xf2","\x1a"));
						HX_STACK_LINE(482)
						::String tmp37 = boundary;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(482)
						b->add(tmp37);
					}
					else{
						HX_STACK_LINE(484)
						b->add(HX_HCSTRING("application/x-www-form-urlencoded","\x9e","\x61","\x91","\xfa"));
					}
					HX_STACK_LINE(485)
					b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
				}
				HX_STACK_LINE(487)
				bool tmp36 = multipart;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(487)
				if ((tmp36)){
					HX_STACK_LINE(488)
					int tmp37 = uri.length;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(488)
					Dynamic tmp38 = this->file;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(488)
					int tmp39 = tmp38->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(488)
					int tmp40 = (tmp37 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(488)
					int tmp41 = boundary.length;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(488)
					int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(488)
					int tmp43 = (tmp42 + (int)6);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(488)
					::String tmp44 = (HX_HCSTRING("Content-Length: ","\x20","\xde","\x22","\x7c") + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(488)
					::String tmp45 = (tmp44 + HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(488)
					b->add(tmp45);
				}
				else{
					HX_STACK_LINE(490)
					::String tmp37 = (HX_HCSTRING("Content-Length: ","\x20","\xde","\x22","\x7c") + uri.length);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(490)
					::String tmp38 = (tmp37 + HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(490)
					b->add(tmp38);
				}
			}
		}
		HX_STACK_LINE(492)
		{
			HX_STACK_LINE(492)
			::List tmp31 = this->headers;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(492)
			::_List::ListIterator tmp32 = ::_List::ListIterator_obj::__new(tmp31->h);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(492)
			::_List::ListIterator _g = tmp32;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(492)
			while((true)){
				HX_STACK_LINE(492)
				bool tmp33 = (_g->head != null());		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(492)
				bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(492)
				if ((tmp34)){
					HX_STACK_LINE(492)
					break;
				}
				HX_STACK_LINE(492)
				Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(492)
				{
					HX_STACK_LINE(492)
					Dynamic tmp36 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(492)
					_g->val = tmp36;
					HX_STACK_LINE(492)
					Dynamic tmp37 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(492)
					_g->head = tmp37;
					HX_STACK_LINE(492)
					tmp35 = _g->val;
				}
				HX_STACK_LINE(492)
				Dynamic h = tmp35;		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(493)
				::String tmp36 = h->__Field(HX_HCSTRING("header","\x8d","\x09","\x00","\xfd"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(493)
				b->add(tmp36);
				HX_STACK_LINE(494)
				b->add(HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));
				HX_STACK_LINE(495)
				::String tmp37 = h->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(495)
				b->add(tmp37);
				HX_STACK_LINE(496)
				b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
			}
		}
		HX_STACK_LINE(498)
		b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
		HX_STACK_LINE(499)
		::String tmp31 = this->postData;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(499)
		bool tmp32 = (tmp31 != null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(499)
		if ((tmp32)){
			HX_STACK_LINE(500)
			::String tmp33 = this->postData;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(500)
			b->add(tmp33);
		}
		else{
			HX_STACK_LINE(501)
			bool tmp33 = post;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(501)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(501)
			if ((tmp33)){
				HX_STACK_LINE(501)
				tmp34 = (uri != null());
			}
			else{
				HX_STACK_LINE(501)
				tmp34 = false;
			}
			HX_STACK_LINE(501)
			if ((tmp34)){
				HX_STACK_LINE(502)
				::String tmp35 = uri;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(502)
				b->add(tmp35);
			}
		}
		HX_STACK_LINE(503)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(504)
			Dynamic tmp33 = ::haxe::Http_obj::PROXY;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(504)
			bool tmp34 = (tmp33 != null());		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(504)
			if ((tmp34)){
				HX_STACK_LINE(505)
				Dynamic tmp35 = ::haxe::Http_obj::PROXY;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(505)
				::String tmp36 = tmp35->__Field(HX_HCSTRING("host","\x68","\xcf","\x12","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(505)
				::sys::net::Host tmp37 = ::sys::net::Host_obj::__new(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(505)
				Dynamic tmp38 = ::haxe::Http_obj::PROXY;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(505)
				int tmp39 = tmp38->__Field(HX_HCSTRING("port","\x81","\x83","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(505)
				sock->__Field(HX_HCSTRING("connect","\xea","\x3b","\x80","\x15"), hx::paccDynamic )(tmp37,tmp39);
			}
			else{
				HX_STACK_LINE(507)
				::sys::net::Host tmp35 = ::sys::net::Host_obj::__new(host);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(507)
				Dynamic tmp36 = port;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(507)
				sock->__Field(HX_HCSTRING("connect","\xea","\x3b","\x80","\x15"), hx::paccDynamic )(tmp35,tmp36);
			}
			HX_STACK_LINE(508)
			::String tmp35 = b->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(508)
			sock->__Field(HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"), hx::paccDynamic )(tmp35);
			HX_STACK_LINE(509)
			bool tmp36 = multipart;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(509)
			if ((tmp36)){
				HX_STACK_LINE(510)
				int bufsize = (int)4096;		HX_STACK_VAR(bufsize,"bufsize");
				HX_STACK_LINE(511)
				int tmp37 = bufsize;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(511)
				::haxe::io::Bytes tmp38 = ::haxe::io::Bytes_obj::alloc(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(511)
				::haxe::io::Bytes buf = tmp38;		HX_STACK_VAR(buf,"buf");
				HX_STACK_LINE(512)
				while((true)){
					HX_STACK_LINE(512)
					Dynamic tmp39 = this->file;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(512)
					int tmp40 = tmp39->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(512)
					bool tmp41 = (tmp40 > (int)0);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(512)
					bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(512)
					if ((tmp42)){
						HX_STACK_LINE(512)
						break;
					}
					HX_STACK_LINE(513)
					Dynamic tmp43 = this->file;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(513)
					int tmp44 = tmp43->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(513)
					int tmp45 = bufsize;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(513)
					bool tmp46 = (tmp44 > tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(513)
					int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(513)
					if ((tmp46)){
						HX_STACK_LINE(513)
						tmp47 = bufsize;
					}
					else{
						HX_STACK_LINE(513)
						Dynamic tmp48 = this->file;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(513)
						tmp47 = tmp48->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );
					}
					HX_STACK_LINE(513)
					int size = tmp47;		HX_STACK_VAR(size,"size");
					HX_STACK_LINE(514)
					int len = (int)0;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(515)
					try
					{
					HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
					{
						HX_STACK_LINE(516)
						Dynamic tmp48 = this->file;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(516)
						::haxe::io::Bytes tmp49 = buf;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(516)
						int tmp50 = size;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(516)
						int tmp51 = tmp48->__Field(HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"), hx::paccDynamic )(tmp49,(int)0,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(516)
						len = tmp51;
					}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::haxe::io::Eof >() ){
							HX_STACK_BEGIN_CATCH
							::haxe::io::Eof e = __e;{
								HX_STACK_LINE(517)
								break;
							}
						}
						else {
						    HX_STACK_DO_THROW(__e);
						}
					}
					HX_STACK_LINE(518)
					::haxe::io::Bytes tmp48 = buf;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(518)
					int tmp49 = len;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(518)
					sock->__Field(HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"), hx::paccDynamic )->__Field(HX_HCSTRING("writeFullBytes","\x7d","\xe7","\x66","\xa4"), hx::paccDynamic )(tmp48,(int)0,tmp49);
					HX_STACK_LINE(519)
					Dynamic tmp50 = this->file;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(519)
					hx::SubEq(tmp50->__FieldRef(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")),len);
				}
				HX_STACK_LINE(521)
				sock->__Field(HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"), hx::paccDynamic )(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
				HX_STACK_LINE(522)
				sock->__Field(HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"), hx::paccDynamic )(HX_HCSTRING("--","\x60","\x27","\x00","\x00"));
				HX_STACK_LINE(523)
				::String tmp39 = boundary;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(523)
				sock->__Field(HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"), hx::paccDynamic )(tmp39);
				HX_STACK_LINE(524)
				sock->__Field(HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"), hx::paccDynamic )(HX_HCSTRING("--","\x60","\x27","\x00","\x00"));
			}
			HX_STACK_LINE(526)
			::haxe::io::Output tmp37 = api;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(526)
			Dynamic tmp38 = sock;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(526)
			this->readHttpResponse(tmp37,tmp38);
			HX_STACK_LINE(527)
			sock->__Field(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"), hx::paccDynamic )();
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(529)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(529)
						sock->__Field(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"), hx::paccDynamic )();
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e1 = __e;{
							}
						}
					}
					HX_STACK_LINE(530)
					Dynamic tmp33 = e;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(530)
					::String tmp34 = ::Std_obj::string(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(530)
					this->onError(tmp34);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Http_obj,customRequest,(void))

Void Http_obj::readHttpResponse( ::haxe::io::Output api,Dynamic sock){
{
		HX_STACK_FRAME("haxe.Http","readHttpResponse",0x6bff43dd,"haxe.Http.readHttpResponse","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",534,0xd46eaf46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(api,"api")
		HX_STACK_ARG(sock,"sock")
		HX_STACK_LINE(536)
		::haxe::io::BytesBuffer tmp = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(536)
		::haxe::io::BytesBuffer b = tmp;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(537)
		int k = (int)4;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(538)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc((int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(538)
		::haxe::io::Bytes s = tmp1;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(539)
		Float tmp2 = this->cnxTimeout;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(539)
		sock->__Field(HX_HCSTRING("setTimeout","\x1f","\x3f","\xd6","\x2b"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(540)
		while((true)){
			HX_STACK_LINE(541)
			::haxe::io::Bytes tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(541)
			int tmp4 = k;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(541)
			int tmp5 = sock->__Field(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"), hx::paccDynamic )(tmp3,(int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(541)
			int p = tmp5;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(542)
			while((true)){
				HX_STACK_LINE(542)
				bool tmp6 = (p != k);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(542)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(542)
				if ((tmp7)){
					HX_STACK_LINE(542)
					break;
				}
				HX_STACK_LINE(543)
				::haxe::io::Bytes tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(543)
				int tmp9 = p;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(543)
				int tmp10 = (k - p);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(543)
				int tmp11 = sock->__Field(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"), hx::paccDynamic )(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(543)
				hx::AddEq(p,tmp11);
			}
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(544)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(544)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(544)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(544)
				if ((tmp8)){
					HX_STACK_LINE(544)
					tmp9 = (k < (int)0);
				}
				else{
					HX_STACK_LINE(544)
					tmp9 = true;
				}
				HX_STACK_LINE(544)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(544)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(544)
				if ((tmp10)){
					HX_STACK_LINE(544)
					int tmp12 = k;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(544)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(544)
					int tmp14 = s->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(544)
					tmp11 = (tmp13 > tmp14);
				}
				else{
					HX_STACK_LINE(544)
					tmp11 = true;
				}
				HX_STACK_LINE(544)
				if ((tmp11)){
					HX_STACK_LINE(544)
					HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
				}
				HX_STACK_LINE(544)
				Array< unsigned char > b1 = b->b;		HX_STACK_VAR(b1,"b1");
				HX_STACK_LINE(544)
				Array< unsigned char > b2 = s->b;		HX_STACK_VAR(b2,"b2");
				HX_STACK_LINE(544)
				{
					HX_STACK_LINE(544)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(544)
					int tmp12 = k;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(544)
					int _g = tmp12;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(544)
					while((true)){
						HX_STACK_LINE(544)
						bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(544)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(544)
						if ((tmp14)){
							HX_STACK_LINE(544)
							break;
						}
						HX_STACK_LINE(544)
						int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(544)
						int i = tmp15;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(544)
						unsigned char tmp16 = b2->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(544)
						b->b->push(tmp16);
					}
				}
			}
			HX_STACK_LINE(545)
			int tmp6 = k;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(545)
			int _switch_1 = (tmp6);
			if (  ( _switch_1==(int)1)){
				HX_STACK_LINE(547)
				int tmp7 = s->b->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(547)
				int c = tmp7;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(548)
				bool tmp8 = (c == (int)10);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(548)
				if ((tmp8)){
					HX_STACK_LINE(549)
					break;
				}
				HX_STACK_LINE(550)
				bool tmp9 = (c == (int)13);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(550)
				if ((tmp9)){
					HX_STACK_LINE(551)
					k = (int)3;
				}
				else{
					HX_STACK_LINE(553)
					k = (int)4;
				}
			}
			else if (  ( _switch_1==(int)2)){
				HX_STACK_LINE(555)
				int tmp7 = s->b->__get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(555)
				int c = tmp7;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(556)
				bool tmp8 = (c == (int)10);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(556)
				if ((tmp8)){
					HX_STACK_LINE(557)
					int tmp9 = s->b->__get((int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(557)
					bool tmp10 = (tmp9 == (int)13);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(557)
					if ((tmp10)){
						HX_STACK_LINE(558)
						break;
					}
					HX_STACK_LINE(559)
					k = (int)4;
				}
				else{
					HX_STACK_LINE(560)
					bool tmp9 = (c == (int)13);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(560)
					if ((tmp9)){
						HX_STACK_LINE(561)
						k = (int)3;
					}
					else{
						HX_STACK_LINE(563)
						k = (int)4;
					}
				}
			}
			else if (  ( _switch_1==(int)3)){
				HX_STACK_LINE(565)
				int tmp7 = s->b->__get((int)2);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(565)
				int c = tmp7;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(566)
				bool tmp8 = (c == (int)10);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(566)
				if ((tmp8)){
					HX_STACK_LINE(567)
					int tmp9 = s->b->__get((int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(567)
					bool tmp10 = (tmp9 != (int)13);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(567)
					if ((tmp10)){
						HX_STACK_LINE(568)
						k = (int)4;
					}
					else{
						HX_STACK_LINE(569)
						int tmp11 = s->b->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(569)
						bool tmp12 = (tmp11 != (int)10);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(569)
						if ((tmp12)){
							HX_STACK_LINE(570)
							k = (int)2;
						}
						else{
							HX_STACK_LINE(572)
							break;
						}
					}
				}
				else{
					HX_STACK_LINE(573)
					bool tmp9 = (c == (int)13);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(573)
					if ((tmp9)){
						HX_STACK_LINE(574)
						int tmp10 = s->b->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(574)
						bool tmp11 = (tmp10 != (int)10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(574)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(574)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(574)
						if ((tmp12)){
							HX_STACK_LINE(574)
							int tmp14 = s->b->__get((int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(574)
							int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(574)
							tmp13 = (tmp15 != (int)13);
						}
						else{
							HX_STACK_LINE(574)
							tmp13 = true;
						}
						HX_STACK_LINE(574)
						if ((tmp13)){
							HX_STACK_LINE(575)
							k = (int)1;
						}
						else{
							HX_STACK_LINE(577)
							k = (int)3;
						}
					}
					else{
						HX_STACK_LINE(579)
						k = (int)4;
					}
				}
			}
			else if (  ( _switch_1==(int)4)){
				HX_STACK_LINE(581)
				int tmp7 = s->b->__get((int)3);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(581)
				int c = tmp7;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(582)
				bool tmp8 = (c == (int)10);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(582)
				if ((tmp8)){
					HX_STACK_LINE(583)
					int tmp9 = s->b->__get((int)2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(583)
					bool tmp10 = (tmp9 != (int)13);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(583)
					if ((tmp10)){
						HX_STACK_LINE(584)
						continue;
					}
					else{
						HX_STACK_LINE(585)
						int tmp11 = s->b->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(585)
						bool tmp12 = (tmp11 != (int)10);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(585)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(585)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(585)
						if ((tmp13)){
							HX_STACK_LINE(585)
							int tmp15 = s->b->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(585)
							int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(585)
							tmp14 = (tmp16 != (int)13);
						}
						else{
							HX_STACK_LINE(585)
							tmp14 = true;
						}
						HX_STACK_LINE(585)
						if ((tmp14)){
							HX_STACK_LINE(586)
							k = (int)2;
						}
						else{
							HX_STACK_LINE(588)
							break;
						}
					}
				}
				else{
					HX_STACK_LINE(589)
					bool tmp9 = (c == (int)13);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(589)
					if ((tmp9)){
						HX_STACK_LINE(590)
						int tmp10 = s->b->__get((int)2);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(590)
						bool tmp11 = (tmp10 != (int)10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(590)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(590)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(590)
						if ((tmp12)){
							HX_STACK_LINE(590)
							int tmp14 = s->b->__get((int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(590)
							int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(590)
							tmp13 = (tmp15 != (int)13);
						}
						else{
							HX_STACK_LINE(590)
							tmp13 = true;
						}
						HX_STACK_LINE(590)
						if ((tmp13)){
							HX_STACK_LINE(591)
							k = (int)3;
						}
						else{
							HX_STACK_LINE(593)
							k = (int)1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(600)
		::haxe::io::Bytes tmp3 = b->getBytes();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(600)
		::String tmp4 = tmp3->toString();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(600)
		Array< ::String > headers = tmp4.split(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));		HX_STACK_VAR(headers,"headers");
		HX_STACK_LINE(602)
		::String tmp5 = headers->shift();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(602)
		::String response = tmp5;		HX_STACK_VAR(response,"response");
		HX_STACK_LINE(603)
		Array< ::String > rp = response.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(rp,"rp");
		HX_STACK_LINE(604)
		::String tmp6 = rp->__get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(604)
		Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(604)
		Dynamic status = tmp7;		HX_STACK_VAR(status,"status");
		HX_STACK_LINE(605)
		bool tmp8 = (status == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(605)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(605)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(605)
		if ((tmp9)){
			HX_STACK_LINE(605)
			tmp10 = (status == null());
		}
		else{
			HX_STACK_LINE(605)
			tmp10 = true;
		}
		HX_STACK_LINE(605)
		if ((tmp10)){
			HX_STACK_LINE(606)
			HX_STACK_DO_THROW(HX_HCSTRING("Response status error","\x39","\x25","\x42","\xe1"));
		}
		HX_STACK_LINE(609)
		headers->pop();
		HX_STACK_LINE(610)
		headers->pop();
		HX_STACK_LINE(611)
		::haxe::ds::StringMap tmp11 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(611)
		this->responseHeaders = tmp11;
		HX_STACK_LINE(612)
		Dynamic size = null();		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(613)
		bool chunked = false;		HX_STACK_VAR(chunked,"chunked");
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(614)
			while((true)){
				HX_STACK_LINE(614)
				bool tmp12 = (_g < headers->length);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(614)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(614)
				if ((tmp13)){
					HX_STACK_LINE(614)
					break;
				}
				HX_STACK_LINE(614)
				::String tmp14 = headers->__get(_g);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(614)
				::String hline = tmp14;		HX_STACK_VAR(hline,"hline");
				HX_STACK_LINE(614)
				++(_g);
				HX_STACK_LINE(615)
				Array< ::String > a = hline.split(HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(616)
				::String tmp15 = a->shift();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(616)
				::String hname = tmp15;		HX_STACK_VAR(hname,"hname");
				HX_STACK_LINE(617)
				bool tmp16 = (a->length == (int)1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(617)
				::String tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(617)
				if ((tmp16)){
					HX_STACK_LINE(617)
					tmp17 = a->__get((int)0);
				}
				else{
					HX_STACK_LINE(617)
					tmp17 = a->join(HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));
				}
				HX_STACK_LINE(617)
				::String hval = tmp17;		HX_STACK_VAR(hval,"hval");
				HX_STACK_LINE(618)
				::String tmp18 = hval;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(618)
				::String tmp19 = ::StringTools_obj::rtrim(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(618)
				::String tmp20 = ::StringTools_obj::ltrim(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(618)
				hval = tmp20;
				HX_STACK_LINE(619)
				::haxe::ds::StringMap tmp21 = this->responseHeaders;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(619)
				::String tmp22 = hname;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(619)
				::String tmp23 = hval;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(619)
				tmp21->set(tmp22,tmp23);
				HX_STACK_LINE(620)
				{
					HX_STACK_LINE(620)
					::String tmp24 = hname.toLowerCase();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(620)
					::String _g1 = tmp24;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(620)
					::String tmp25 = _g1;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(620)
					::String _switch_2 = (tmp25);
					if (  ( _switch_2==HX_HCSTRING("content-length","\xba","\xf0","\xcc","\x86"))){
						HX_STACK_LINE(623)
						::String tmp26 = hval;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(623)
						Dynamic tmp27 = ::Std_obj::parseInt(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(623)
						size = tmp27;
					}
					else if (  ( _switch_2==HX_HCSTRING("transfer-encoding","\x75","\x95","\x2e","\x69"))){
						HX_STACK_LINE(625)
						::String tmp26 = hval.toLowerCase();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(625)
						bool tmp27 = (tmp26 == HX_HCSTRING("chunked","\x0c","\x54","\xd3","\x50"));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(625)
						chunked = tmp27;
					}
				}
			}
		}
		HX_STACK_LINE(629)
		Dynamic tmp12 = status;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(629)
		this->onStatus(tmp12);
		HX_STACK_LINE(631)
		::EReg tmp13 = ::EReg_obj::__new(HX_HCSTRING("^([0-9A-Fa-f]+)[ ]*\r\n","\xdf","\x97","\xed","\x19"),HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(631)
		::EReg chunk_re = tmp13;		HX_STACK_VAR(chunk_re,"chunk_re");
		HX_STACK_LINE(632)
		this->chunk_size = null();
		HX_STACK_LINE(633)
		this->chunk_buf = null();
		HX_STACK_LINE(635)
		int bufsize = (int)1024;		HX_STACK_VAR(bufsize,"bufsize");
		HX_STACK_LINE(636)
		int tmp14 = bufsize;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(636)
		::haxe::io::Bytes tmp15 = ::haxe::io::Bytes_obj::alloc(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(636)
		::haxe::io::Bytes buf = tmp15;		HX_STACK_VAR(buf,"buf");
		HX_STACK_LINE(637)
		bool tmp16 = (size == null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(637)
		if ((tmp16)){
			HX_STACK_LINE(638)
			bool tmp17 = this->noShutdown;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(638)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(638)
			if ((tmp18)){
				HX_STACK_LINE(639)
				sock->__Field(HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"), hx::paccDynamic )(false,true);
			}
			HX_STACK_LINE(640)
			try
			{
			HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
			{
				HX_STACK_LINE(641)
				while((true)){
					HX_STACK_LINE(642)
					::haxe::io::Bytes tmp19 = buf;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(642)
					int tmp20 = bufsize;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(642)
					int tmp21 = sock->__Field(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"), hx::paccDynamic )(tmp19,(int)0,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(642)
					int len = tmp21;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(643)
					bool tmp22 = chunked;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(643)
					if ((tmp22)){
						HX_STACK_LINE(644)
						::EReg tmp23 = chunk_re;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(644)
						::haxe::io::Output tmp24 = api;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(644)
						::haxe::io::Bytes tmp25 = buf;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(644)
						int tmp26 = len;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(644)
						bool tmp27 = this->readChunk(tmp23,tmp24,tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(644)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(644)
						if ((tmp28)){
							HX_STACK_LINE(645)
							break;
						}
					}
					else{
						HX_STACK_LINE(647)
						::haxe::io::Bytes tmp23 = buf;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(647)
						int tmp24 = len;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(647)
						api->writeBytes(tmp23,(int)0,tmp24);
					}
				}
			}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::haxe::io::Eof >() ){
					HX_STACK_BEGIN_CATCH
					::haxe::io::Eof e = __e;{
					}
				}
				else {
				    HX_STACK_DO_THROW(__e);
				}
			}
		}
		else{
			HX_STACK_LINE(652)
			Dynamic tmp17 = size;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(652)
			api->prepare(tmp17);
			HX_STACK_LINE(653)
			try
			{
			HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
			{
				HX_STACK_LINE(654)
				while((true)){
					HX_STACK_LINE(654)
					bool tmp18 = (size > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(654)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(654)
					if ((tmp19)){
						HX_STACK_LINE(654)
						break;
					}
					HX_STACK_LINE(655)
					::haxe::io::Bytes tmp20 = buf;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(655)
					bool tmp21 = (size > bufsize);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(655)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(655)
					if ((tmp21)){
						HX_STACK_LINE(655)
						tmp22 = bufsize;
					}
					else{
						HX_STACK_LINE(655)
						tmp22 = size;
					}
					HX_STACK_LINE(655)
					int tmp23 = sock->__Field(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"), hx::paccDynamic )(tmp20,(int)0,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(655)
					int len = tmp23;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(656)
					bool tmp24 = chunked;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(656)
					if ((tmp24)){
						HX_STACK_LINE(657)
						::EReg tmp25 = chunk_re;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(657)
						::haxe::io::Output tmp26 = api;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(657)
						::haxe::io::Bytes tmp27 = buf;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(657)
						int tmp28 = len;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(657)
						bool tmp29 = this->readChunk(tmp25,tmp26,tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(657)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(657)
						if ((tmp30)){
							HX_STACK_LINE(658)
							break;
						}
					}
					else{
						HX_STACK_LINE(660)
						::haxe::io::Bytes tmp25 = buf;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(660)
						int tmp26 = len;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(660)
						api->writeBytes(tmp25,(int)0,tmp26);
					}
					HX_STACK_LINE(661)
					hx::SubEq(size,len);
				}
			}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::haxe::io::Eof >() ){
					HX_STACK_BEGIN_CATCH
					::haxe::io::Eof e = __e;{
						HX_STACK_LINE(664)
						HX_STACK_DO_THROW(HX_HCSTRING("Transfer aborted","\x3a","\xe2","\xd2","\x6a"));
					}
				}
				else {
				    HX_STACK_DO_THROW(__e);
				}
			}
		}
		HX_STACK_LINE(667)
		bool tmp17 = chunked;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(667)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(667)
		if ((tmp17)){
			HX_STACK_LINE(667)
			Dynamic tmp19 = this->chunk_size;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(667)
			Dynamic tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(667)
			bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(667)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(667)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(667)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(667)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(667)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(667)
			if ((tmp26)){
				HX_STACK_LINE(667)
				::haxe::io::Bytes tmp27 = this->chunk_buf;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(667)
				::haxe::io::Bytes tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(667)
				::haxe::io::Bytes tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(667)
				tmp18 = (tmp29 != null());
			}
			else{
				HX_STACK_LINE(667)
				tmp18 = true;
			}
		}
		else{
			HX_STACK_LINE(667)
			tmp18 = false;
		}
		HX_STACK_LINE(667)
		if ((tmp18)){
			HX_STACK_LINE(668)
			HX_STACK_DO_THROW(HX_HCSTRING("Invalid chunk","\x64","\x90","\xfb","\x29"));
		}
		HX_STACK_LINE(669)
		bool tmp19 = (status < (int)200);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(669)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(669)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(669)
		if ((tmp20)){
			HX_STACK_LINE(669)
			tmp21 = (status >= (int)400);
		}
		else{
			HX_STACK_LINE(669)
			tmp21 = true;
		}
		HX_STACK_LINE(669)
		if ((tmp21)){
			HX_STACK_LINE(670)
			::String tmp22 = (HX_HCSTRING("Http Error #","\x33","\x85","\xa5","\x2b") + status);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(670)
			HX_STACK_DO_THROW(tmp22);
		}
		HX_STACK_LINE(671)
		api->close();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Http_obj,readHttpResponse,(void))

bool Http_obj::readChunk( ::EReg chunk_re,::haxe::io::Output api,::haxe::io::Bytes buf,int len){
	HX_STACK_FRAME("haxe.Http","readChunk",0xeebfa239,"haxe.Http.readChunk","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",674,0xd46eaf46)
	HX_STACK_THIS(this)
	HX_STACK_ARG(chunk_re,"chunk_re")
	HX_STACK_ARG(api,"api")
	HX_STACK_ARG(buf,"buf")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(675)
	Dynamic tmp = this->chunk_size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(675)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(675)
	if ((tmp1)){
		HX_STACK_LINE(676)
		::haxe::io::Bytes tmp2 = this->chunk_buf;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(676)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(676)
		if ((tmp3)){
			HX_STACK_LINE(677)
			::haxe::io::BytesBuffer tmp4 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(677)
			::haxe::io::BytesBuffer b = tmp4;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(678)
			{
				HX_STACK_LINE(678)
				::haxe::io::Bytes tmp5 = this->chunk_buf;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(678)
				::haxe::io::Bytes src = tmp5;		HX_STACK_VAR(src,"src");
				HX_STACK_LINE(678)
				Array< unsigned char > b1 = b->b;		HX_STACK_VAR(b1,"b1");
				HX_STACK_LINE(678)
				Array< unsigned char > b2 = src->b;		HX_STACK_VAR(b2,"b2");
				HX_STACK_LINE(678)
				{
					HX_STACK_LINE(678)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(678)
					int _g = src->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(678)
					while((true)){
						HX_STACK_LINE(678)
						bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(678)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(678)
						if ((tmp7)){
							HX_STACK_LINE(678)
							break;
						}
						HX_STACK_LINE(678)
						int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(678)
						int i = tmp8;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(678)
						unsigned char tmp9 = b2->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(678)
						b->b->push(tmp9);
					}
				}
			}
			HX_STACK_LINE(679)
			{
				HX_STACK_LINE(679)
				bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(679)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(679)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(679)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(679)
				if ((tmp7)){
					HX_STACK_LINE(679)
					tmp8 = (len < (int)0);
				}
				else{
					HX_STACK_LINE(679)
					tmp8 = true;
				}
				HX_STACK_LINE(679)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(679)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(679)
				if ((tmp9)){
					HX_STACK_LINE(679)
					int tmp11 = len;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(679)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(679)
					int tmp13 = buf->length;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(679)
					tmp10 = (tmp12 > tmp13);
				}
				else{
					HX_STACK_LINE(679)
					tmp10 = true;
				}
				HX_STACK_LINE(679)
				if ((tmp10)){
					HX_STACK_LINE(679)
					HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
				}
				HX_STACK_LINE(679)
				Array< unsigned char > b1 = b->b;		HX_STACK_VAR(b1,"b1");
				HX_STACK_LINE(679)
				Array< unsigned char > b2 = buf->b;		HX_STACK_VAR(b2,"b2");
				HX_STACK_LINE(679)
				{
					HX_STACK_LINE(679)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(679)
					int tmp11 = len;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(679)
					int _g = tmp11;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(679)
					while((true)){
						HX_STACK_LINE(679)
						bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(679)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(679)
						if ((tmp13)){
							HX_STACK_LINE(679)
							break;
						}
						HX_STACK_LINE(679)
						int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(679)
						int i = tmp14;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(679)
						unsigned char tmp15 = b2->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(679)
						b->b->push(tmp15);
					}
				}
			}
			HX_STACK_LINE(680)
			::haxe::io::Bytes tmp5 = b->getBytes();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(680)
			buf = tmp5;
			HX_STACK_LINE(681)
			::haxe::io::Bytes tmp6 = this->chunk_buf;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(681)
			hx::AddEq(len,tmp6->length);
			HX_STACK_LINE(682)
			this->chunk_buf = null();
		}
		HX_STACK_LINE(687)
		::String tmp4 = buf->toString();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(687)
		bool tmp5 = chunk_re->match(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(687)
		if ((tmp5)){
			HX_STACK_LINE(689)
			Dynamic tmp6 = chunk_re->matchedPos();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(689)
			Dynamic p = tmp6;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(690)
			bool tmp7 = (p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ) <= len);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(690)
			if ((tmp7)){
				HX_STACK_LINE(691)
				::String tmp8 = chunk_re->matched((int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(691)
				::String cstr = tmp8;		HX_STACK_VAR(cstr,"cstr");
				HX_STACK_LINE(692)
				::String tmp9 = (HX_HCSTRING("0x","\x48","\x2a","\x00","\x00") + cstr);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(692)
				Dynamic tmp10 = ::Std_obj::parseInt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(692)
				this->chunk_size = tmp10;
				HX_STACK_LINE(693)
				bool tmp11 = (cstr == HX_HCSTRING("0","\x30","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(693)
				if ((tmp11)){
					HX_STACK_LINE(694)
					this->chunk_size = null();
					HX_STACK_LINE(695)
					this->chunk_buf = null();
					HX_STACK_LINE(696)
					return false;
				}
				HX_STACK_LINE(698)
				hx::SubEq(len,p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ));
				HX_STACK_LINE(699)
				::EReg tmp12 = chunk_re;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(699)
				::haxe::io::Output tmp13 = api;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(699)
				int tmp14 = p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(699)
				int tmp15 = len;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(699)
				::haxe::io::Bytes tmp16 = buf->sub(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(699)
				int tmp17 = len;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(699)
				bool tmp18 = this->readChunk(tmp12,tmp13,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(699)
				return tmp18;
			}
		}
		HX_STACK_LINE(703)
		bool tmp6 = (len > (int)10);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(703)
		if ((tmp6)){
			HX_STACK_LINE(704)
			this->onError(HX_HCSTRING("Invalid chunk","\x64","\x90","\xfb","\x29"));
			HX_STACK_LINE(705)
			return false;
		}
		HX_STACK_LINE(707)
		int tmp7 = len;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(707)
		::haxe::io::Bytes tmp8 = buf->sub((int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(707)
		this->chunk_buf = tmp8;
		HX_STACK_LINE(708)
		return true;
	}
	HX_STACK_LINE(710)
	Dynamic tmp2 = this->chunk_size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(710)
	int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(710)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(710)
	if ((tmp4)){
		HX_STACK_LINE(711)
		hx::SubEq(this->chunk_size,len);
		HX_STACK_LINE(712)
		::haxe::io::Bytes tmp5 = buf;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(712)
		int tmp6 = len;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(712)
		api->writeBytes(tmp5,(int)0,tmp6);
		HX_STACK_LINE(713)
		return true;
	}
	HX_STACK_LINE(715)
	Dynamic tmp5 = this->chunk_size;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(715)
	int tmp6 = (tmp5 + (int)2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(715)
	int end = tmp6;		HX_STACK_VAR(end,"end");
	HX_STACK_LINE(716)
	bool tmp7 = (len >= end);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(716)
	if ((tmp7)){
		HX_STACK_LINE(717)
		Dynamic tmp8 = this->chunk_size;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(717)
		bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(717)
		if ((tmp9)){
			HX_STACK_LINE(718)
			::haxe::io::Bytes tmp10 = buf;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(718)
			Dynamic tmp11 = this->chunk_size;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(718)
			api->writeBytes(tmp10,(int)0,tmp11);
		}
		HX_STACK_LINE(719)
		hx::SubEq(len,end);
		HX_STACK_LINE(720)
		this->chunk_size = null();
		HX_STACK_LINE(721)
		bool tmp10 = (len == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(721)
		if ((tmp10)){
			HX_STACK_LINE(722)
			return true;
		}
		HX_STACK_LINE(723)
		::EReg tmp11 = chunk_re;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(723)
		::haxe::io::Output tmp12 = api;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(723)
		int tmp13 = end;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(723)
		int tmp14 = len;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(723)
		::haxe::io::Bytes tmp15 = buf->sub(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(723)
		int tmp16 = len;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(723)
		bool tmp17 = this->readChunk(tmp11,tmp12,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(723)
		return tmp17;
	}
	HX_STACK_LINE(725)
	Dynamic tmp8 = this->chunk_size;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(725)
	bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(725)
	if ((tmp9)){
		HX_STACK_LINE(726)
		::haxe::io::Bytes tmp10 = buf;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(726)
		Dynamic tmp11 = this->chunk_size;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(726)
		api->writeBytes(tmp10,(int)0,tmp11);
	}
	HX_STACK_LINE(727)
	hx::SubEq(this->chunk_size,len);
	HX_STACK_LINE(728)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC4(Http_obj,readChunk,return )

HX_BEGIN_DEFAULT_FUNC(__default_onData,Http_obj)
Void run(::String data){
{
		HX_STACK_FRAME("haxe.Http","onData",0x4f093aa7,"haxe.Http.onData","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",740,0xd46eaf46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onError,Http_obj)
Void run(::String msg){
{
		HX_STACK_FRAME("haxe.Http","onError",0x77abd4ab,"haxe.Http.onError","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",750,0xd46eaf46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onStatus,Http_obj)
Void run(int status){
{
		HX_STACK_FRAME("haxe.Http","onStatus",0xf341a4ef,"haxe.Http.onStatus","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",760,0xd46eaf46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(status,"status")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

Dynamic Http_obj::PROXY;

::String Http_obj::requestUrl( ::String url){
	HX_STACK_FRAME("haxe.Http","requestUrl",0x3bd0d21e,"haxe.Http.requestUrl","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",772,0xd46eaf46)
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(773)
	::haxe::Http tmp = ::haxe::Http_obj::__new(url);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(773)
	::haxe::Http h = tmp;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(777)
	Array< ::String > r = Array_obj< ::String >::__new().Add(null());		HX_STACK_VAR(r,"r");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::String >,r)
	int __ArgCount() const { return 1; }
	Void run(::String d){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",779,0xd46eaf46)
		HX_STACK_ARG(d,"d")
		{
			HX_STACK_LINE(779)
			r[(int)0] = d;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(778)
	h->onData =  Dynamic(new _Function_1_1(r));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	int __ArgCount() const { return 1; }
	Void run(::String e){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","C:\\HaxeToolkit\\haxe\\std/haxe/Http.hx",781,0xd46eaf46)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(782)
			::String tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(782)
			HX_STACK_DO_THROW(tmp1);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(781)
	h->onError =  Dynamic(new _Function_1_2());
	HX_STACK_LINE(784)
	h->request(false);
	HX_STACK_LINE(785)
	::String tmp1 = r->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(785)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Http_obj,requestUrl,return )


Http_obj::Http_obj()
{
	onData = new __default_onData(this);
	onError = new __default_onError(this);
	onStatus = new __default_onStatus(this);
}

void Http_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Http);
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(responseData,"responseData");
	HX_MARK_MEMBER_NAME(noShutdown,"noShutdown");
	HX_MARK_MEMBER_NAME(cnxTimeout,"cnxTimeout");
	HX_MARK_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_MARK_MEMBER_NAME(chunk_size,"chunk_size");
	HX_MARK_MEMBER_NAME(chunk_buf,"chunk_buf");
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(postData,"postData");
	HX_MARK_MEMBER_NAME(headers,"headers");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(onData,"onData");
	HX_MARK_MEMBER_NAME(onError,"onError");
	HX_MARK_MEMBER_NAME(onStatus,"onStatus");
	HX_MARK_END_CLASS();
}

void Http_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(responseData,"responseData");
	HX_VISIT_MEMBER_NAME(noShutdown,"noShutdown");
	HX_VISIT_MEMBER_NAME(cnxTimeout,"cnxTimeout");
	HX_VISIT_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_VISIT_MEMBER_NAME(chunk_size,"chunk_size");
	HX_VISIT_MEMBER_NAME(chunk_buf,"chunk_buf");
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(postData,"postData");
	HX_VISIT_MEMBER_NAME(headers,"headers");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(onData,"onData");
	HX_VISIT_MEMBER_NAME(onError,"onError");
	HX_VISIT_MEMBER_NAME(onStatus,"onStatus");
}

Dynamic Http_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return file; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"onData") ) { return onData; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"headers") ) { return headers; }
		if (HX_FIELD_EQ(inName,"request") ) { return request_dyn(); }
		if (HX_FIELD_EQ(inName,"onError") ) { return onError; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"postData") ) { return postData; }
		if (HX_FIELD_EQ(inName,"onStatus") ) { return onStatus; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"chunk_buf") ) { return chunk_buf; }
		if (HX_FIELD_EQ(inName,"setHeader") ) { return setHeader_dyn(); }
		if (HX_FIELD_EQ(inName,"addHeader") ) { return addHeader_dyn(); }
		if (HX_FIELD_EQ(inName,"readChunk") ) { return readChunk_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noShutdown") ) { return noShutdown; }
		if (HX_FIELD_EQ(inName,"cnxTimeout") ) { return cnxTimeout; }
		if (HX_FIELD_EQ(inName,"chunk_size") ) { return chunk_size; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setPostData") ) { return setPostData_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"responseData") ) { return responseData; }
		if (HX_FIELD_EQ(inName,"setParameter") ) { return setParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"addParameter") ) { return addParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"fileTransfer") ) { return fileTransfer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fileTransfert") ) { return fileTransfert_dyn(); }
		if (HX_FIELD_EQ(inName,"customRequest") ) { return customRequest_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { return responseHeaders; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readHttpResponse") ) { return readHttpResponse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Http_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"PROXY") ) { outValue = PROXY; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"requestUrl") ) { outValue = requestUrl_dyn(); return true;  }
	}
	return false;
}

Dynamic Http_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { params=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onData") ) { onData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"headers") ) { headers=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onError") ) { onError=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"postData") ) { postData=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onStatus") ) { onStatus=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"chunk_buf") ) { chunk_buf=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noShutdown") ) { noShutdown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cnxTimeout") ) { cnxTimeout=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"chunk_size") ) { chunk_size=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"responseData") ) { responseData=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { responseHeaders=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Http_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"PROXY") ) { PROXY=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Http_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("responseData","\x4b","\x05","\xe9","\xc4"));
	outFields->push(HX_HCSTRING("noShutdown","\xf7","\xc1","\x69","\x5b"));
	outFields->push(HX_HCSTRING("cnxTimeout","\xb4","\x3a","\x75","\x76"));
	outFields->push(HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"));
	outFields->push(HX_HCSTRING("chunk_size","\x13","\x8b","\xba","\xd8"));
	outFields->push(HX_HCSTRING("chunk_buf","\x21","\x09","\x61","\xa7"));
	outFields->push(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	outFields->push(HX_HCSTRING("postData","\xaa","\xb6","\xa2","\x00"));
	outFields->push(HX_HCSTRING("headers","\x46","\x52","\x08","\x63"));
	outFields->push(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Http_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsString,(int)offsetof(Http_obj,responseData),HX_HCSTRING("responseData","\x4b","\x05","\xe9","\xc4")},
	{hx::fsBool,(int)offsetof(Http_obj,noShutdown),HX_HCSTRING("noShutdown","\xf7","\xc1","\x69","\x5b")},
	{hx::fsFloat,(int)offsetof(Http_obj,cnxTimeout),HX_HCSTRING("cnxTimeout","\xb4","\x3a","\x75","\x76")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Http_obj,responseHeaders),HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Http_obj,chunk_size),HX_HCSTRING("chunk_size","\x13","\x8b","\xba","\xd8")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Http_obj,chunk_buf),HX_HCSTRING("chunk_buf","\x21","\x09","\x61","\xa7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Http_obj,file),HX_HCSTRING("file","\x7c","\xce","\xbb","\x43")},
	{hx::fsString,(int)offsetof(Http_obj,postData),HX_HCSTRING("postData","\xaa","\xb6","\xa2","\x00")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Http_obj,headers),HX_HCSTRING("headers","\x46","\x52","\x08","\x63")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Http_obj,params),HX_HCSTRING("params","\x46","\xfb","\x7a","\xed")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Http_obj,onData),HX_HCSTRING("onData","\xe9","\x5e","\xed","\xe4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Http_obj,onError),HX_HCSTRING("onError","\x29","\x6a","\x67","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Http_obj,onStatus),HX_HCSTRING("onStatus","\xb1","\xdd","\xa8","\xe5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Http_obj::PROXY,HX_HCSTRING("PROXY","\x4e","\x26","\x7e","\x46")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("responseData","\x4b","\x05","\xe9","\xc4"),
	HX_HCSTRING("noShutdown","\xf7","\xc1","\x69","\x5b"),
	HX_HCSTRING("cnxTimeout","\xb4","\x3a","\x75","\x76"),
	HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"),
	HX_HCSTRING("chunk_size","\x13","\x8b","\xba","\xd8"),
	HX_HCSTRING("chunk_buf","\x21","\x09","\x61","\xa7"),
	HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"),
	HX_HCSTRING("postData","\xaa","\xb6","\xa2","\x00"),
	HX_HCSTRING("headers","\x46","\x52","\x08","\x63"),
	HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"),
	HX_HCSTRING("setHeader","\xcf","\x7e","\xa7","\x5c"),
	HX_HCSTRING("addHeader","\x8e","\x3e","\x24","\xb5"),
	HX_HCSTRING("setParameter","\xa7","\xf5","\xff","\x6c"),
	HX_HCSTRING("addParameter","\x48","\x57","\x04","\x48"),
	HX_HCSTRING("setPostData","\x6c","\x80","\x03","\x31"),
	HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"),
	HX_HCSTRING("fileTransfert","\xcd","\xf8","\xca","\xe4"),
	HX_HCSTRING("fileTransfer","\xc7","\x15","\x48","\x1a"),
	HX_HCSTRING("customRequest","\x9e","\x47","\x93","\xee"),
	HX_HCSTRING("readHttpResponse","\x9f","\x0e","\x50","\x47"),
	HX_HCSTRING("readChunk","\x37","\x13","\xaa","\x16"),
	HX_HCSTRING("onData","\xe9","\x5e","\xed","\xe4"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("onStatus","\xb1","\xdd","\xa8","\xe5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Http_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Http_obj::PROXY,"PROXY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Http_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Http_obj::PROXY,"PROXY");
};

#endif

hx::Class Http_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PROXY","\x4e","\x26","\x7e","\x46"),
	HX_HCSTRING("requestUrl","\x60","\x3f","\x09","\x01"),
	::String(null()) };

void Http_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Http","\xf0","\x78","\xa9","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Http_obj::__GetStatic;
	__mClass->mSetStaticField = &Http_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Http_obj >;
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

void Http_obj::__boot()
{
	PROXY= null();
}

} // end namespace haxe
