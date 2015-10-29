#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_net_Poll
#include <cpp/net/Poll.h>
#endif
#ifndef INCLUDED_cpp_net_ThreadServer
#include <cpp/net/ThreadServer.h>
#endif
#ifndef INCLUDED_cpp_vm_Lock
#include <cpp/vm/Lock.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
namespace cpp{
namespace net{

Void ThreadServer_obj::__construct()
{
HX_STACK_FRAME("cpp.net.ThreadServer","new",0x0d14ad1b,"cpp.net.ThreadServer.new","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",59,0x4d657bba)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(60)
	this->threads = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(61)
	::String tmp = ::Sys_obj::systemName();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	bool tmp1 = (tmp == HX_HCSTRING("Windows","\x63","\x06","\xc6","\xb5"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	if ((tmp1)){
		HX_STACK_LINE(61)
		tmp2 = (int)150;
	}
	else{
		HX_STACK_LINE(61)
		tmp2 = (int)10;
	}
	HX_STACK_LINE(61)
	this->nthreads = tmp2;
	HX_STACK_LINE(62)
	this->messageHeaderSize = (int)1;
	HX_STACK_LINE(63)
	this->listen = (int)10;
	HX_STACK_LINE(64)
	this->connectLag = ((Float)0.5);
	HX_STACK_LINE(65)
	::haxe::io::Output tmp3 = ::Sys_obj::_stderr();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	this->errorOutput = tmp3;
	HX_STACK_LINE(66)
	int tmp4 = (int)1024;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	this->initialBufferSize = tmp4;
	HX_STACK_LINE(67)
	int tmp5 = (int)65536;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(67)
	this->maxBufferSize = tmp5;
	HX_STACK_LINE(68)
	this->maxSockPerThread = (int)64;
	HX_STACK_LINE(69)
	this->updateTime = (int)1;
}
;
	return null();
}

//ThreadServer_obj::~ThreadServer_obj() { }

Dynamic ThreadServer_obj::__CreateEmpty() { return  new ThreadServer_obj; }
hx::ObjectPtr< ThreadServer_obj > ThreadServer_obj::__new()
{  hx::ObjectPtr< ThreadServer_obj > _result_ = new ThreadServer_obj();
	_result_->__construct();
	return _result_;}

Dynamic ThreadServer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ThreadServer_obj > _result_ = new ThreadServer_obj();
	_result_->__construct();
	return _result_;}

Void ThreadServer_obj::runThread( Dynamic t){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","runThread",0xa4117b70,"cpp.net.ThreadServer.runThread","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",73,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(73)
		while((true)){
			HX_STACK_LINE(74)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(75)
				Dynamic tmp = t;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(75)
				this->loopThread(tmp);
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(77)
						Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(77)
						this->logError(tmp);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadServer_obj,runThread,(void))

Void ThreadServer_obj::readClientData( Dynamic c){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","readClientData",0xcccc9c30,"cpp.net.ThreadServer.readClientData","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",82,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(83)
		int tmp = c->__Field(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		int tmp1 = c->__Field(HX_HCSTRING("bufpos","\x41","\x5c","\x9c","\xd0"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		int available = tmp2;		HX_STACK_VAR(available,"available");
		HX_STACK_LINE(84)
		bool tmp3 = (available == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		if ((tmp3)){
			HX_STACK_LINE(85)
			int tmp4 = c->__Field(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(85)
			int tmp5 = (tmp4 * (int)2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(85)
			int newsize = tmp5;		HX_STACK_VAR(newsize,"newsize");
			HX_STACK_LINE(86)
			int tmp6 = newsize;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(86)
			int tmp7 = this->maxBufferSize;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(86)
			bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(86)
			if ((tmp8)){
				HX_STACK_LINE(87)
				int tmp9 = this->maxBufferSize;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(87)
				newsize = tmp9;
				HX_STACK_LINE(88)
				int tmp10 = c->__Field(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(88)
				int tmp11 = this->maxBufferSize;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(88)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(88)
				if ((tmp12)){
					HX_STACK_LINE(89)
					HX_STACK_DO_THROW(HX_HCSTRING("Max buffer size reached","\xb7","\x0b","\xe0","\x00"));
				}
			}
			HX_STACK_LINE(91)
			int tmp9 = newsize;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(91)
			::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(91)
			::haxe::io::Bytes newbuf = tmp10;		HX_STACK_VAR(newbuf,"newbuf");
			HX_STACK_LINE(92)
			::haxe::io::Bytes tmp11 = c->__Field(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(92)
			int tmp12 = c->__Field(HX_HCSTRING("bufpos","\x41","\x5c","\x9c","\xd0"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(92)
			newbuf->blit((int)0,tmp11,(int)0,tmp12);
			HX_STACK_LINE(93)
			c->__FieldRef(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00")) = newbuf;
			HX_STACK_LINE(94)
			int tmp13 = (newsize - c->__Field(HX_HCSTRING("bufpos","\x41","\x5c","\x9c","\xd0"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(94)
			available = tmp13;
		}
		HX_STACK_LINE(96)
		::haxe::io::Input tmp4 = c->__Field(HX_HCSTRING("sock","\x44","\x1a","\x58","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		::haxe::io::Bytes tmp5 = c->__Field(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		int tmp6 = c->__Field(HX_HCSTRING("bufpos","\x41","\x5c","\x9c","\xd0"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		int tmp7 = available;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		int tmp8 = tmp4->readBytes(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		int bytes = tmp8;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(97)
		int pos = (int)0;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(98)
		int tmp9 = (c->__Field(HX_HCSTRING("bufpos","\x41","\x5c","\x9c","\xd0"), hx::paccDynamic ) + bytes);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(98)
		int len = tmp9;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(99)
		while((true)){
			HX_STACK_LINE(99)
			int tmp10 = len;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(99)
			int tmp11 = this->messageHeaderSize;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(99)
			bool tmp12 = (tmp10 >= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(99)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(99)
			if ((tmp13)){
				HX_STACK_LINE(99)
				break;
			}
			HX_STACK_LINE(100)
			Dynamic tmp14 = c->__Field(HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(100)
			::haxe::io::Bytes tmp15 = c->__Field(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(100)
			int tmp16 = pos;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(100)
			int tmp17 = len;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(100)
			Dynamic tmp18 = this->readClientMessage(tmp14,tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(100)
			Dynamic m = tmp18;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(101)
			bool tmp19 = (m == null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(101)
			if ((tmp19)){
				HX_STACK_LINE(102)
				break;
			}
			HX_STACK_LINE(103)
			hx::AddEq(pos,m->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic ));
			HX_STACK_LINE(104)
			hx::SubEq(len,m->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic ));
			HX_STACK_LINE(105)
			Dynamic tmp20 = this->clientMessage_dyn();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(105)
			Dynamic tmp21 = c->__Field(HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(105)
			Dynamic tmp22 = m->__Field(HX_HCSTRING("msg","\x41","\x1a","\x53","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(105)
			Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(105)
			{
				HX_STACK_LINE(105)
				Dynamic f = tmp20;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(105)
				Dynamic c1 = tmp21;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(105)
				Dynamic a1 = tmp22;		HX_STACK_VAR(a1,"a1");

				HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_3_1,Dynamic,c1,Dynamic,a1,Dynamic,f)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",105,0x4d657bba)
					{
						HX_STACK_LINE(105)
						Dynamic tmp24 = c1;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(105)
						Dynamic tmp25 = a1;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(105)
						f(tmp24,tmp25).Cast< Void >();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(105)
				tmp23 =  Dynamic(new _Function_3_1(c1,a1,f));
			}
			HX_STACK_LINE(105)
			this->work(tmp23);
		}
		HX_STACK_LINE(107)
		bool tmp10 = (pos > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(107)
		if ((tmp10)){
			HX_STACK_LINE(108)
			::haxe::io::Bytes tmp11 = c->__Field(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(108)
			int tmp12 = pos;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(108)
			int tmp13 = len;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(108)
			c->__Field(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("blit","\x35","\x38","\x19","\x41"), hx::paccDynamic )((int)0,tmp11,tmp12,tmp13);
		}
		HX_STACK_LINE(109)
		c->__FieldRef(HX_HCSTRING("bufpos","\x41","\x5c","\x9c","\xd0")) = len;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadServer_obj,readClientData,(void))

Void ThreadServer_obj::loopThread( Dynamic t){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","loopThread",0x84d478f3,"cpp.net.ThreadServer.loopThread","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",112,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(113)
		int tmp = t->__Field(HX_HCSTRING("socks","\xaf","\xe1","\xbe","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		if ((tmp1)){
			HX_STACK_LINE(114)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(114)
			Float tmp2 = this->connectLag;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(114)
			Array< ::Dynamic > _g1 = t->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("poll","\x3f","\x7e","\x5c","\x4a"), hx::paccDynamic )(t->__Field(HX_HCSTRING("socks","\xaf","\xe1","\xbe","\x80"), hx::paccDynamic ),tmp2);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(114)
			while((true)){
				HX_STACK_LINE(114)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(114)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(114)
				if ((tmp4)){
					HX_STACK_LINE(114)
					break;
				}
				HX_STACK_LINE(114)
				::sys::net::Socket tmp5 = _g1->__get(_g).StaticCast< ::sys::net::Socket >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(114)
				::sys::net::Socket s = tmp5;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(114)
				++(_g);
				HX_STACK_LINE(115)
				Dynamic infos = s->custom;		HX_STACK_VAR(infos,"infos");
				HX_STACK_LINE(116)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(117)
					Dynamic tmp6 = infos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(117)
					this->readClientData(tmp6);
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
							HX_STACK_LINE(119)
							::sys::net::Socket tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(119)
							t->__Field(HX_HCSTRING("socks","\xaf","\xe1","\xbe","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp6);
							HX_STACK_LINE(120)
							Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(120)
							bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::haxe::io::Eof >());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(120)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(120)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(120)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(120)
							if ((tmp10)){
								HX_STACK_LINE(120)
								Dynamic tmp12 = e;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(120)
								Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(120)
								bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::haxe::io::Error >());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(120)
								bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(120)
								bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(120)
								tmp11 = !(tmp16);
							}
							else{
								HX_STACK_LINE(120)
								tmp11 = false;
							}
							HX_STACK_LINE(120)
							if ((tmp11)){
								HX_STACK_LINE(121)
								Dynamic tmp12 = e;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(121)
								this->logError(tmp12);
							}
							HX_STACK_LINE(122)
							Dynamic tmp12 = this->doClientDisconnected_dyn();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(122)
							::sys::net::Socket tmp13 = s;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(122)
							Dynamic tmp14 = infos->__Field(HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(122)
							Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(122)
							{
								HX_STACK_LINE(122)
								Dynamic f = tmp12;		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(122)
								Dynamic s1 = tmp13;		HX_STACK_VAR(s1,"s1");
								HX_STACK_LINE(122)
								Dynamic c = tmp14;		HX_STACK_VAR(c,"c");

								HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_5_1,Dynamic,c,Dynamic,f,Dynamic,s1)
								int __ArgCount() const { return 0; }
								Void run(){
									HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",122,0x4d657bba)
									{
										HX_STACK_LINE(122)
										Dynamic tmp16 = s1;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(122)
										Dynamic tmp17 = c;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(122)
										f(tmp16,tmp17).Cast< Void >();
									}
									return null();
								}
								HX_END_LOCAL_FUNC0((void))

								HX_STACK_LINE(122)
								tmp15 =  Dynamic(new _Function_5_1(c,f,s1));
							}
							HX_STACK_LINE(122)
							this->work(tmp15);
						}
					}
				}
			}
		}
		HX_STACK_LINE(125)
		while((true)){
			HX_STACK_LINE(126)
			int tmp2 = t->__Field(HX_HCSTRING("socks","\xaf","\xe1","\xbe","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			Dynamic tmp4 = ::cpp::vm::Thread_obj::readMessage(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			Dynamic m = tmp4;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(127)
			bool tmp5 = (m == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(127)
			if ((tmp5)){
				HX_STACK_LINE(128)
				break;
			}
			HX_STACK_LINE(129)
			bool tmp6 = m->__Field(HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(129)
			if ((tmp6)){
				HX_STACK_LINE(130)
				::sys::net::Socket tmp7 = m->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(130)
				t->__Field(HX_HCSTRING("socks","\xaf","\xe1","\xbe","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
			}
			else{
				HX_STACK_LINE(131)
				::sys::net::Socket tmp7 = m->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(131)
				bool tmp8 = t->__Field(HX_HCSTRING("socks","\xaf","\xe1","\xbe","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(131)
				if ((tmp8)){
					HX_STACK_LINE(132)
					Dynamic tmp9 = m->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(132)
					Dynamic infos = tmp9;		HX_STACK_VAR(infos,"infos");
					HX_STACK_LINE(133)
					Dynamic tmp10 = this->doClientDisconnected_dyn();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(133)
					::sys::net::Socket tmp11 = m->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(133)
					Dynamic tmp12 = infos->__Field(HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(133)
					Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(133)
					{
						HX_STACK_LINE(133)
						Dynamic f = tmp10;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(133)
						Dynamic s = tmp11;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(133)
						Dynamic c = tmp12;		HX_STACK_VAR(c,"c");

						HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_5_1,Dynamic,c,Dynamic,s,Dynamic,f)
						int __ArgCount() const { return 0; }
						Void run(){
							HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",133,0x4d657bba)
							{
								HX_STACK_LINE(133)
								Dynamic tmp14 = s;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(133)
								Dynamic tmp15 = c;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(133)
								f(tmp14,tmp15).Cast< Void >();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0((void))

						HX_STACK_LINE(133)
						tmp13 =  Dynamic(new _Function_5_1(c,s,f));
					}
					HX_STACK_LINE(133)
					this->work(tmp13);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadServer_obj,loopThread,(void))

Void ThreadServer_obj::doClientDisconnected( Dynamic s,Dynamic c){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","doClientDisconnected",0x3cbec1f6,"cpp.net.ThreadServer.doClientDisconnected","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",138,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(139)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(139)
			s->__Field(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"), hx::paccDynamic )();
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
				}
			}
		}
		HX_STACK_LINE(140)
		Dynamic tmp = c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		this->clientDisconnected(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ThreadServer_obj,doClientDisconnected,(void))

Void ThreadServer_obj::runWorker( ){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","runWorker",0xdef63124,"cpp.net.ThreadServer.runWorker","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",144,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_LINE(144)
		while((true)){
			HX_STACK_LINE(145)
			Dynamic tmp = ::cpp::vm::Thread_obj::readMessage(true);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(145)
			Dynamic f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(146)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(147)
				f();
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(149)
						Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(149)
						this->logError(tmp1);
					}
				}
			}
			HX_STACK_LINE(151)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(152)
				this->afterEvent();
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(154)
						Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(154)
						this->logError(tmp1);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ThreadServer_obj,runWorker,(void))

Void ThreadServer_obj::work( Dynamic f){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","work",0x6afd48b6,"cpp.net.ThreadServer.work","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",159,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(160)
		::cpp::vm::Thread tmp = this->worker;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		Dynamic tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		tmp->sendMessage(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadServer_obj,work,(void))

Void ThreadServer_obj::logError( Dynamic e){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","logError",0x618e2609,"cpp.net.ThreadServer.logError","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",163,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(164)
		Array< ::Dynamic > stack = ::haxe::CallStack_obj::exceptionStack();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(165)
		::cpp::vm::Thread tmp = ::cpp::vm::Thread_obj::current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		::cpp::vm::Thread tmp1 = this->worker;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		if ((tmp2)){
			HX_STACK_LINE(166)
			Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			this->onError(tmp3,stack);
		}
		else{
			HX_STACK_LINE(168)
			Dynamic tmp3 = this->onError_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(168)
			Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(168)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			{
				HX_STACK_LINE(168)
				Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(168)
				Dynamic e1 = tmp4;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(168)
				Array< ::Dynamic > a1 = stack;		HX_STACK_VAR(a1,"a1");

				HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_3_1,Dynamic,e1,Array< ::Dynamic >,a1,Dynamic,f)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",168,0x4d657bba)
					{
						HX_STACK_LINE(168)
						Dynamic tmp6 = e1;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(168)
						f(tmp6,a1).Cast< Void >();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(168)
				tmp5 =  Dynamic(new _Function_3_1(e1,a1,f));
			}
			HX_STACK_LINE(168)
			this->work(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadServer_obj,logError,(void))

Void ThreadServer_obj::addClient( ::sys::net::Socket sock){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","addClient",0xb16f9a47,"cpp.net.ThreadServer.addClient","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",171,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sock,"sock")
		HX_STACK_LINE(172)
		int tmp = this->nthreads;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		int tmp1 = ::Std_obj::random(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		int start = tmp1;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(173)
		{
			HX_STACK_LINE(173)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(173)
			int tmp2 = this->nthreads;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(173)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(173)
			while((true)){
				HX_STACK_LINE(173)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(173)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(173)
				if ((tmp4)){
					HX_STACK_LINE(173)
					break;
				}
				HX_STACK_LINE(173)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(173)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(174)
				int tmp6 = (start + i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(174)
				int tmp7 = this->nthreads;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(174)
				int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(174)
				Dynamic tmp9 = this->threads->__GetItem(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(174)
				Dynamic t = tmp9;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(175)
				int tmp10 = t->__Field(HX_HCSTRING("socks","\xaf","\xe1","\xbe","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(175)
				int tmp11 = this->maxSockPerThread;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(175)
				bool tmp12 = (tmp10 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(175)
				if ((tmp12)){
					HX_STACK_LINE(177)
					Dynamic tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(178)
					::sys::net::Socket tmp14 = sock;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(178)
					Dynamic tmp15 = this->clientConnected(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(179)
					::sys::net::Socket tmp16 = sock;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(180)
					int tmp17 = this->initialBufferSize;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(180)
					::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					struct _Function_4_1{
						inline static Dynamic Block( Dynamic &tmp13,Dynamic &tmp15,::sys::net::Socket &tmp16,::haxe::io::Bytes &tmp18){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",176,0x4d657bba)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("thread","\xca","\x7a","\xb9","\x8e") , tmp13,false);
								__result->Add(HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a") , tmp15,false);
								__result->Add(HX_HCSTRING("sock","\x44","\x1a","\x58","\x4c") , tmp16,false);
								__result->Add(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00") , tmp18,false);
								__result->Add(HX_HCSTRING("bufpos","\x41","\x5c","\x9c","\xd0") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(176)
					Dynamic tmp19 = _Function_4_1::Block(tmp13,tmp15,tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(176)
					Dynamic infos = tmp19;		HX_STACK_VAR(infos,"infos");
					HX_STACK_LINE(183)
					sock->custom = infos;
					HX_STACK_LINE(184)
					::cpp::vm::Thread tmp20 = infos->__Field(HX_HCSTRING("thread","\xca","\x7a","\xb9","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
					struct _Function_4_2{
						inline static Dynamic Block( ::sys::net::Socket &sock){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",184,0x4d657bba)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("s","\x73","\x00","\x00","\x00") , sock,false);
								__result->Add(HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00") , true,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(184)
					Dynamic tmp21 = _Function_4_2::Block(sock);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(184)
					tmp20->sendMessage(tmp21);
					HX_STACK_LINE(185)
					return null();
				}
			}
		}
		HX_STACK_LINE(188)
		::sys::net::Socket tmp2 = sock;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		this->refuseClient(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadServer_obj,addClient,(void))

Void ThreadServer_obj::refuseClient( ::sys::net::Socket sock){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","refuseClient",0x4e2e7224,"cpp.net.ThreadServer.refuseClient","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",193,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sock,"sock")
		HX_STACK_LINE(193)
		sock->close();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadServer_obj,refuseClient,(void))

Void ThreadServer_obj::runTimer( ){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","runTimer",0x1bc915df,"cpp.net.ThreadServer.runTimer","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",196,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		::cpp::vm::Lock tmp = ::cpp::vm::Lock_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		::cpp::vm::Lock l = tmp;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(198)
		while((true)){
			HX_STACK_LINE(199)
			Float tmp1 = this->updateTime;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(199)
			l->wait(tmp1);
			HX_STACK_LINE(200)
			Dynamic tmp2 = this->update_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(200)
			this->work(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ThreadServer_obj,runTimer,(void))

Void ThreadServer_obj::init( ){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","init",0x61bb81f5,"cpp.net.ThreadServer.init","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",204,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_LINE(205)
		Dynamic tmp = this->runWorker_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(205)
		::cpp::vm::Thread tmp1 = ::cpp::vm::Thread_obj::create(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		this->worker = tmp1;
		HX_STACK_LINE(206)
		Dynamic tmp2 = this->runTimer_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		::cpp::vm::Thread tmp3 = ::cpp::vm::Thread_obj::create(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		this->timer = tmp3;
		HX_STACK_LINE(207)
		{
			HX_STACK_LINE(207)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(207)
			int tmp4 = this->nthreads;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(207)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(207)
			while((true)){
				HX_STACK_LINE(207)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(207)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(207)
				if ((tmp6)){
					HX_STACK_LINE(207)
					break;
				}
				HX_STACK_LINE(207)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(207)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(209)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(212)
				int tmp9 = this->maxSockPerThread;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(212)
				::cpp::net::Poll tmp10 = ::cpp::net::Poll_obj::__new(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				struct _Function_3_1{
					inline static Dynamic Block( ::cpp::net::Poll &tmp10,int &tmp8){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",208,0x4d657bba)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp8,false);
							__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , null(),false);
							__result->Add(HX_HCSTRING("socks","\xaf","\xe1","\xbe","\x80") , Array_obj< ::Dynamic >::__new(),false);
							__result->Add(HX_HCSTRING("p","\x70","\x00","\x00","\x00") , tmp10,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(208)
				Dynamic tmp11 = _Function_3_1::Block(tmp10,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(208)
				Dynamic t = tmp11;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(214)
				Dynamic tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(214)
				this->threads->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp12);
				HX_STACK_LINE(215)
				Dynamic tmp13 = this->runThread_dyn();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(215)
				Dynamic tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(215)
				Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(215)
				{
					HX_STACK_LINE(215)
					Dynamic f = tmp13;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(215)
					Dynamic t1 = tmp14;		HX_STACK_VAR(t1,"t1");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,t1,Dynamic,f)
					int __ArgCount() const { return 0; }
					Void run(){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",215,0x4d657bba)
						{
							HX_STACK_LINE(215)
							Dynamic tmp16 = t1;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(215)
							f(tmp16).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(215)
					tmp15 =  Dynamic(new _Function_4_1(t1,f));
				}
				HX_STACK_LINE(215)
				::cpp::vm::Thread tmp16 = ::cpp::vm::Thread_obj::create(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(215)
				t->__FieldRef(HX_HCSTRING("t","\x74","\x00","\x00","\x00")) = tmp16;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ThreadServer_obj,init,(void))

Void ThreadServer_obj::addSocket( ::sys::net::Socket s){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","addSocket",0xcd665baf,"cpp.net.ThreadServer.addSocket","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",219,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(220)
		s->setBlocking(false);
		HX_STACK_LINE(221)
		Dynamic tmp = this->addClient_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		::sys::net::Socket tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			Dynamic f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(221)
			::sys::net::Socket a1 = tmp1;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::sys::net::Socket,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",221,0x4d657bba)
				{
					HX_STACK_LINE(221)
					::sys::net::Socket tmp3 = a1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(221)
					f(tmp3).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(221)
			tmp2 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(221)
		this->work(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadServer_obj,addSocket,(void))

Void ThreadServer_obj::run( ::String host,int port){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","run",0x0d17c406,"cpp.net.ThreadServer.run","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",224,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(host,"host")
		HX_STACK_ARG(port,"port")
		HX_STACK_LINE(225)
		::sys::net::Socket tmp = ::sys::net::Socket_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		this->sock = tmp;
		HX_STACK_LINE(226)
		::sys::net::Socket tmp1 = this->sock;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(226)
		::sys::net::Host tmp2 = ::sys::net::Host_obj::__new(host);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(226)
		int tmp3 = port;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(226)
		tmp1->bind(tmp2,tmp3);
		HX_STACK_LINE(227)
		::sys::net::Socket tmp4 = this->sock;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(227)
		int tmp5 = this->listen;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(227)
		tmp4->listen(tmp5);
		HX_STACK_LINE(228)
		this->init();
		HX_STACK_LINE(229)
		while((true)){
			HX_STACK_LINE(230)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(231)
				::sys::net::Socket tmp6 = this->sock;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(231)
				::sys::net::Socket tmp7 = tmp6->accept();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(231)
				this->addSocket(tmp7);
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(233)
						Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(233)
						this->logError(tmp6);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ThreadServer_obj,run,(void))

Void ThreadServer_obj::sendData( ::sys::net::Socket s,::String data){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","sendData",0xd98f70f7,"cpp.net.ThreadServer.sendData","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",239,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(239)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(240)
			::String tmp = data;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(240)
			s->write(tmp);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(242)
					::sys::net::Socket tmp = s;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(242)
					this->stopClient(tmp);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ThreadServer_obj,sendData,(void))

Void ThreadServer_obj::stopClient( ::sys::net::Socket s){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","stopClient",0x612b1c92,"cpp.net.ThreadServer.stopClient","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",246,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(247)
		Dynamic infos = s->custom;		HX_STACK_VAR(infos,"infos");
		HX_STACK_LINE(248)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(248)
			s->shutdown(true,true);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
				}
			}
		}
		HX_STACK_LINE(249)
		::cpp::vm::Thread tmp = infos->__Field(HX_HCSTRING("thread","\xca","\x7a","\xb9","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_1{
			inline static Dynamic Block( ::sys::net::Socket &s){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",249,0x4d657bba)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("s","\x73","\x00","\x00","\x00") , s,false);
					__result->Add(HX_HCSTRING("cnx","\x6d","\x7f","\x4b","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(249)
		Dynamic tmp1 = _Function_1_1::Block(s);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		tmp->sendMessage(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadServer_obj,stopClient,(void))

HX_BEGIN_DEFAULT_FUNC(__default_onError,ThreadServer_obj)
Void run(Dynamic e,Array< ::Dynamic > stack){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","onError",0x49b4c064,"cpp.net.ThreadServer.onError","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",254,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(stack,"stack")
		HX_STACK_LINE(255)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(255)
			Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(255)
			tmp = ::Std_obj::string(tmp1);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e2 = __e;{
					HX_STACK_LINE(255)
					::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(255)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(255)
						Dynamic tmp2 = e2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(255)
						::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(255)
						::String tmp4 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(255)
						tmp1 = (tmp4 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e1 = __e;{
								HX_STACK_LINE(255)
								tmp1 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							}
						}
					}
					HX_STACK_LINE(255)
					tmp = (HX_HCSTRING("???","\x1f","\x05","\x30","\x00") + tmp1);
				}
			}
		}
		HX_STACK_LINE(255)
		::String estr = tmp;		HX_STACK_VAR(estr,"estr");
		HX_STACK_LINE(256)
		::haxe::io::Output tmp1 = __this->errorOutput;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		::String tmp2 = (estr + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(256)
		::String tmp3 = ::haxe::CallStack_obj::toString(stack);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(256)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(256)
		tmp1->writeString(tmp4);
		HX_STACK_LINE(257)
		::haxe::io::Output tmp5 = __this->errorOutput;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(257)
		tmp5->flush();
	}
return null();
}
HX_END_LOCAL_FUNC2((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_clientConnected,ThreadServer_obj)
Dynamic run(::sys::net::Socket s){
	HX_STACK_FRAME("cpp.net.ThreadServer","clientConnected",0x9d386039,"cpp.net.ThreadServer.clientConnected","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",261,0x4d657bba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(261)
	return null();
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_clientDisconnected,ThreadServer_obj)
Void run(Dynamic c){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","clientDisconnected",0x9c7e144b,"cpp.net.ThreadServer.clientDisconnected","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",264,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_readClientMessage,ThreadServer_obj)
Dynamic run(Dynamic c,::haxe::io::Bytes buf,int pos,int len){
	HX_STACK_FRAME("cpp.net.ThreadServer","readClientMessage",0x002ef781,"cpp.net.ThreadServer.readClientMessage","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",267,0x4d657bba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(buf,"buf")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	struct _Function_1_1{
		inline static Dynamic Block( int &len){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",268,0x4d657bba)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("msg","\x41","\x1a","\x53","\x00") , null(),false);
				__result->Add(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd") , len,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(268)
	Dynamic tmp = _Function_1_1::Block(len);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	return tmp;
}
HX_END_LOCAL_FUNC4(return )
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_clientMessage,ThreadServer_obj)
Void run(Dynamic c,Dynamic msg){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","clientMessage",0x282b7737,"cpp.net.ThreadServer.clientMessage","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",274,0x4d657bba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(msg,"msg")
	}
return null();
}
HX_END_LOCAL_FUNC2((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_update,ThreadServer_obj)
Void run(){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","update",0xd8d1102e,"cpp.net.ThreadServer.update","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",277,0x4d657bba)
		HX_STACK_THIS(this)
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_afterEvent,ThreadServer_obj)
Void run(){
{
		HX_STACK_FRAME("cpp.net.ThreadServer","afterEvent",0x06082d03,"cpp.net.ThreadServer.afterEvent","C:\\HaxeToolkit\\haxe\\std/cpp/net/ThreadServer.hx",280,0x4d657bba)
		HX_STACK_THIS(this)
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC


ThreadServer_obj::ThreadServer_obj()
{
	onError = new __default_onError(this);
	clientConnected = new __default_clientConnected(this);
	clientDisconnected = new __default_clientDisconnected(this);
	readClientMessage = new __default_readClientMessage(this);
	clientMessage = new __default_clientMessage(this);
	update = new __default_update(this);
	afterEvent = new __default_afterEvent(this);
}

void ThreadServer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThreadServer);
	HX_MARK_MEMBER_NAME(threads,"threads");
	HX_MARK_MEMBER_NAME(sock,"sock");
	HX_MARK_MEMBER_NAME(worker,"worker");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(listen,"listen");
	HX_MARK_MEMBER_NAME(nthreads,"nthreads");
	HX_MARK_MEMBER_NAME(connectLag,"connectLag");
	HX_MARK_MEMBER_NAME(errorOutput,"errorOutput");
	HX_MARK_MEMBER_NAME(initialBufferSize,"initialBufferSize");
	HX_MARK_MEMBER_NAME(maxBufferSize,"maxBufferSize");
	HX_MARK_MEMBER_NAME(messageHeaderSize,"messageHeaderSize");
	HX_MARK_MEMBER_NAME(updateTime,"updateTime");
	HX_MARK_MEMBER_NAME(maxSockPerThread,"maxSockPerThread");
	HX_MARK_MEMBER_NAME(onError,"onError");
	HX_MARK_MEMBER_NAME(clientConnected,"clientConnected");
	HX_MARK_MEMBER_NAME(clientDisconnected,"clientDisconnected");
	HX_MARK_MEMBER_NAME(readClientMessage,"readClientMessage");
	HX_MARK_MEMBER_NAME(clientMessage,"clientMessage");
	HX_MARK_MEMBER_NAME(update,"update");
	HX_MARK_MEMBER_NAME(afterEvent,"afterEvent");
	HX_MARK_END_CLASS();
}

void ThreadServer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(threads,"threads");
	HX_VISIT_MEMBER_NAME(sock,"sock");
	HX_VISIT_MEMBER_NAME(worker,"worker");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(listen,"listen");
	HX_VISIT_MEMBER_NAME(nthreads,"nthreads");
	HX_VISIT_MEMBER_NAME(connectLag,"connectLag");
	HX_VISIT_MEMBER_NAME(errorOutput,"errorOutput");
	HX_VISIT_MEMBER_NAME(initialBufferSize,"initialBufferSize");
	HX_VISIT_MEMBER_NAME(maxBufferSize,"maxBufferSize");
	HX_VISIT_MEMBER_NAME(messageHeaderSize,"messageHeaderSize");
	HX_VISIT_MEMBER_NAME(updateTime,"updateTime");
	HX_VISIT_MEMBER_NAME(maxSockPerThread,"maxSockPerThread");
	HX_VISIT_MEMBER_NAME(onError,"onError");
	HX_VISIT_MEMBER_NAME(clientConnected,"clientConnected");
	HX_VISIT_MEMBER_NAME(clientDisconnected,"clientDisconnected");
	HX_VISIT_MEMBER_NAME(readClientMessage,"readClientMessage");
	HX_VISIT_MEMBER_NAME(clientMessage,"clientMessage");
	HX_VISIT_MEMBER_NAME(update,"update");
	HX_VISIT_MEMBER_NAME(afterEvent,"afterEvent");
}

Dynamic ThreadServer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sock") ) { return sock; }
		if (HX_FIELD_EQ(inName,"work") ) { return work_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"worker") ) { return worker; }
		if (HX_FIELD_EQ(inName,"listen") ) { return listen; }
		if (HX_FIELD_EQ(inName,"update") ) { return update; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"threads") ) { return threads; }
		if (HX_FIELD_EQ(inName,"onError") ) { return onError; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nthreads") ) { return nthreads; }
		if (HX_FIELD_EQ(inName,"logError") ) { return logError_dyn(); }
		if (HX_FIELD_EQ(inName,"runTimer") ) { return runTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"sendData") ) { return sendData_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"runThread") ) { return runThread_dyn(); }
		if (HX_FIELD_EQ(inName,"runWorker") ) { return runWorker_dyn(); }
		if (HX_FIELD_EQ(inName,"addClient") ) { return addClient_dyn(); }
		if (HX_FIELD_EQ(inName,"addSocket") ) { return addSocket_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"connectLag") ) { return connectLag; }
		if (HX_FIELD_EQ(inName,"updateTime") ) { return updateTime; }
		if (HX_FIELD_EQ(inName,"loopThread") ) { return loopThread_dyn(); }
		if (HX_FIELD_EQ(inName,"stopClient") ) { return stopClient_dyn(); }
		if (HX_FIELD_EQ(inName,"afterEvent") ) { return afterEvent; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"errorOutput") ) { return errorOutput; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"refuseClient") ) { return refuseClient_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"maxBufferSize") ) { return maxBufferSize; }
		if (HX_FIELD_EQ(inName,"clientMessage") ) { return clientMessage; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readClientData") ) { return readClientData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clientConnected") ) { return clientConnected; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"maxSockPerThread") ) { return maxSockPerThread; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"initialBufferSize") ) { return initialBufferSize; }
		if (HX_FIELD_EQ(inName,"messageHeaderSize") ) { return messageHeaderSize; }
		if (HX_FIELD_EQ(inName,"readClientMessage") ) { return readClientMessage; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"clientDisconnected") ) { return clientDisconnected; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"doClientDisconnected") ) { return doClientDisconnected_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ThreadServer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sock") ) { sock=inValue.Cast< ::sys::net::Socket >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::cpp::vm::Thread >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"worker") ) { worker=inValue.Cast< ::cpp::vm::Thread >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen") ) { listen=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"update") ) { update=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"threads") ) { threads=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onError") ) { onError=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nthreads") ) { nthreads=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"connectLag") ) { connectLag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updateTime") ) { updateTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"afterEvent") ) { afterEvent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"errorOutput") ) { errorOutput=inValue.Cast< ::haxe::io::Output >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"maxBufferSize") ) { maxBufferSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clientMessage") ) { clientMessage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clientConnected") ) { clientConnected=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"maxSockPerThread") ) { maxSockPerThread=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"initialBufferSize") ) { initialBufferSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"messageHeaderSize") ) { messageHeaderSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"readClientMessage") ) { readClientMessage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"clientDisconnected") ) { clientDisconnected=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ThreadServer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("threads","\x69","\xf6","\x91","\x53"));
	outFields->push(HX_HCSTRING("sock","\x44","\x1a","\x58","\x4c"));
	outFields->push(HX_HCSTRING("worker","\x7e","\x30","\x9e","\xc9"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	outFields->push(HX_HCSTRING("listen","\x47","\xc8","\xf9","\xef"));
	outFields->push(HX_HCSTRING("nthreads","\xbb","\xff","\x3e","\xe7"));
	outFields->push(HX_HCSTRING("connectLag","\x88","\x92","\xfc","\xf4"));
	outFields->push(HX_HCSTRING("errorOutput","\xe9","\x54","\xee","\xfa"));
	outFields->push(HX_HCSTRING("initialBufferSize","\x85","\x6b","\xd7","\x15"));
	outFields->push(HX_HCSTRING("maxBufferSize","\xa5","\x4d","\xd5","\x98"));
	outFields->push(HX_HCSTRING("messageHeaderSize","\x95","\xf9","\x00","\xe8"));
	outFields->push(HX_HCSTRING("updateTime","\xb6","\xb6","\xb1","\x05"));
	outFields->push(HX_HCSTRING("maxSockPerThread","\x5f","\x93","\xd9","\x9c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ThreadServer_obj,threads),HX_HCSTRING("threads","\x69","\xf6","\x91","\x53")},
	{hx::fsObject /*::sys::net::Socket*/ ,(int)offsetof(ThreadServer_obj,sock),HX_HCSTRING("sock","\x44","\x1a","\x58","\x4c")},
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(ThreadServer_obj,worker),HX_HCSTRING("worker","\x7e","\x30","\x9e","\xc9")},
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(ThreadServer_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsInt,(int)offsetof(ThreadServer_obj,listen),HX_HCSTRING("listen","\x47","\xc8","\xf9","\xef")},
	{hx::fsInt,(int)offsetof(ThreadServer_obj,nthreads),HX_HCSTRING("nthreads","\xbb","\xff","\x3e","\xe7")},
	{hx::fsFloat,(int)offsetof(ThreadServer_obj,connectLag),HX_HCSTRING("connectLag","\x88","\x92","\xfc","\xf4")},
	{hx::fsObject /*::haxe::io::Output*/ ,(int)offsetof(ThreadServer_obj,errorOutput),HX_HCSTRING("errorOutput","\xe9","\x54","\xee","\xfa")},
	{hx::fsInt,(int)offsetof(ThreadServer_obj,initialBufferSize),HX_HCSTRING("initialBufferSize","\x85","\x6b","\xd7","\x15")},
	{hx::fsInt,(int)offsetof(ThreadServer_obj,maxBufferSize),HX_HCSTRING("maxBufferSize","\xa5","\x4d","\xd5","\x98")},
	{hx::fsInt,(int)offsetof(ThreadServer_obj,messageHeaderSize),HX_HCSTRING("messageHeaderSize","\x95","\xf9","\x00","\xe8")},
	{hx::fsFloat,(int)offsetof(ThreadServer_obj,updateTime),HX_HCSTRING("updateTime","\xb6","\xb6","\xb1","\x05")},
	{hx::fsInt,(int)offsetof(ThreadServer_obj,maxSockPerThread),HX_HCSTRING("maxSockPerThread","\x5f","\x93","\xd9","\x9c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ThreadServer_obj,onError),HX_HCSTRING("onError","\x29","\x6a","\x67","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ThreadServer_obj,clientConnected),HX_HCSTRING("clientConnected","\xfe","\xd6","\x01","\x11")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ThreadServer_obj,clientDisconnected),HX_HCSTRING("clientDisconnected","\xa6","\x66","\xb9","\x6d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ThreadServer_obj,readClientMessage),HX_HCSTRING("readClientMessage","\x86","\x69","\x57","\x12")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ThreadServer_obj,clientMessage),HX_HCSTRING("clientMessage","\xbc","\x42","\xc7","\x64")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ThreadServer_obj,update),HX_HCSTRING("update","\x09","\x86","\x05","\x87")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ThreadServer_obj,afterEvent),HX_HCSTRING("afterEvent","\x5e","\x2c","\xdc","\xd8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("threads","\x69","\xf6","\x91","\x53"),
	HX_HCSTRING("sock","\x44","\x1a","\x58","\x4c"),
	HX_HCSTRING("worker","\x7e","\x30","\x9e","\xc9"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("listen","\x47","\xc8","\xf9","\xef"),
	HX_HCSTRING("nthreads","\xbb","\xff","\x3e","\xe7"),
	HX_HCSTRING("connectLag","\x88","\x92","\xfc","\xf4"),
	HX_HCSTRING("errorOutput","\xe9","\x54","\xee","\xfa"),
	HX_HCSTRING("initialBufferSize","\x85","\x6b","\xd7","\x15"),
	HX_HCSTRING("maxBufferSize","\xa5","\x4d","\xd5","\x98"),
	HX_HCSTRING("messageHeaderSize","\x95","\xf9","\x00","\xe8"),
	HX_HCSTRING("updateTime","\xb6","\xb6","\xb1","\x05"),
	HX_HCSTRING("maxSockPerThread","\x5f","\x93","\xd9","\x9c"),
	HX_HCSTRING("runThread","\x75","\xe0","\x15","\xb5"),
	HX_HCSTRING("readClientData","\x0b","\xe5","\x82","\x98"),
	HX_HCSTRING("loopThread","\x4e","\x78","\xa8","\x57"),
	HX_HCSTRING("doClientDisconnected","\x11","\xa1","\x37","\x51"),
	HX_HCSTRING("runWorker","\x29","\x96","\xfa","\xef"),
	HX_HCSTRING("work","\xd1","\x01","\xfd","\x4e"),
	HX_HCSTRING("logError","\xa4","\x08","\x30","\x5e"),
	HX_HCSTRING("addClient","\x4c","\xff","\x73","\xc2"),
	HX_HCSTRING("refuseClient","\x3f","\x3e","\x85","\x7d"),
	HX_HCSTRING("runTimer","\x7a","\xf8","\x6a","\x18"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("addSocket","\xb4","\xc0","\x6a","\xde"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("sendData","\x92","\x53","\x31","\xd6"),
	HX_HCSTRING("stopClient","\xed","\x1b","\xff","\x33"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("clientConnected","\xfe","\xd6","\x01","\x11"),
	HX_HCSTRING("clientDisconnected","\xa6","\x66","\xb9","\x6d"),
	HX_HCSTRING("readClientMessage","\x86","\x69","\x57","\x12"),
	HX_HCSTRING("clientMessage","\xbc","\x42","\xc7","\x64"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("afterEvent","\x5e","\x2c","\xdc","\xd8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThreadServer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThreadServer_obj::__mClass,"__mClass");
};

#endif

hx::Class ThreadServer_obj::__mClass;

void ThreadServer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.net.ThreadServer","\xa9","\x83","\x23","\xd4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ThreadServer_obj >;
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

} // end namespace cpp
} // end namespace net
