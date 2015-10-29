#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_promhx_Deferred
#include <promhx/Deferred.h>
#endif
#ifndef INCLUDED_promhx_Promise
#include <promhx/Promise.h>
#endif
#ifndef INCLUDED_promhx_Stream
#include <promhx/Stream.h>
#endif
#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
#ifndef INCLUDED_promhx_base_EventLoop
#include <promhx/base/EventLoop.h>
#endif
namespace promhx{

Void Stream_obj::__construct(::promhx::Deferred d)
{
HX_STACK_FRAME("promhx.Stream","new",0x42e89290,"promhx.Stream.new","promhx/Stream.hx",20,0x5cb766bf)
HX_STACK_THIS(this)
HX_STACK_ARG(d,"d")
{
	HX_STACK_LINE(21)
	::promhx::Deferred tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	super::__construct(tmp);
	HX_STACK_LINE(22)
	::promhx::Deferred tmp1 = ::promhx::Deferred_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	this->_end_deferred = tmp1;
	HX_STACK_LINE(23)
	::promhx::Deferred tmp2 = this->_end_deferred;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	::promhx::Promise tmp3 = tmp2->promise();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	this->_end_promise = tmp3;
}
;
	return null();
}

//Stream_obj::~Stream_obj() { }

Dynamic Stream_obj::__CreateEmpty() { return  new Stream_obj; }
hx::ObjectPtr< Stream_obj > Stream_obj::__new(::promhx::Deferred d)
{  hx::ObjectPtr< Stream_obj > _result_ = new Stream_obj();
	_result_->__construct(d);
	return _result_;}

Dynamic Stream_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stream_obj > _result_ = new Stream_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::promhx::base::AsyncBase Stream_obj::then( Dynamic f){
	HX_STACK_FRAME("promhx.Stream","then",0x4c912aad,"promhx.Stream.then","promhx/Stream.hx",82,0x5cb766bf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(83)
	::promhx::Stream tmp = ::promhx::Stream_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	::promhx::Stream ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		::promhx::base::AsyncBase next = ret;		HX_STACK_VAR(next,"next");
		HX_STACK_LINE(84)
		Dynamic f1 = f;		HX_STACK_VAR(f1,"f1");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &f1,::promhx::base::AsyncBase &next){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/Stream.hx",84,0x5cb766bf)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , next,false);

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,f1,::promhx::base::AsyncBase,next)
					int __ArgCount() const { return 1; }
					Void run(Dynamic x){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","promhx/Stream.hx",84,0x5cb766bf)
						HX_STACK_ARG(x,"x")
						{
							HX_STACK_LINE(84)
							Dynamic tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(84)
							Dynamic tmp2 = f1(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(84)
							next->handleResolve(tmp2);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") ,  Dynamic(new _Function_3_1(f1,next)),true);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(84)
		Dynamic tmp1 = _Function_2_1::Block(f1,next);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		this->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(84)
		::promhx::base::AsyncBase tmp2 = next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		Dynamic tmp3 = f1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		::promhx::base::AsyncBase_obj::immediateLinkUpdate(hx::ObjectPtr<OBJ_>(this),tmp2,tmp3);
	}
	HX_STACK_LINE(85)
	::promhx::Promise tmp1 = this->_end_promise;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::promhx::Stream,ret)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ds::Option x){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","promhx/Stream.hx",85,0x5cb766bf)
		HX_STACK_ARG(x,"x")
		{
			HX_STACK_LINE(85)
			ret->end();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(85)
	hx::TCast< ::promhx::Promise >::cast(tmp1->then( Dynamic(new _Function_1_1(ret))));
	HX_STACK_LINE(86)
	::promhx::Stream tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	return tmp2;
}


bool Stream_obj::detachStream( ::promhx::Stream str){
	HX_STACK_FRAME("promhx.Stream","detachStream",0x26739e03,"promhx.Stream.detachStream","promhx/Stream.hx",89,0x5cb766bf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(90)
	cpp::ArrayBase filtered = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(filtered,"filtered");
	HX_STACK_LINE(91)
	bool removed = false;		HX_STACK_VAR(removed,"removed");
	HX_STACK_LINE(92)
	{
		HX_STACK_LINE(92)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(92)
		cpp::ArrayBase _g1 = this->_update;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(92)
		while((true)){
			HX_STACK_LINE(92)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(92)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(92)
			if ((tmp1)){
				HX_STACK_LINE(92)
				break;
			}
			HX_STACK_LINE(92)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			Dynamic u = tmp2;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(92)
			++(_g);
			HX_STACK_LINE(93)
			bool tmp3 = (u->__Field(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26"), hx::paccDynamic ) == str);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(93)
			if ((tmp3)){
				HX_STACK_LINE(93)
				removed = true;
			}
			else{
				HX_STACK_LINE(94)
				Dynamic tmp4 = u;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(94)
				filtered->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
			}
		}
	}
	HX_STACK_LINE(96)
	this->_update = filtered;
	HX_STACK_LINE(97)
	bool tmp = removed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,detachStream,return )

::promhx::Promise Stream_obj::first( ){
	HX_STACK_FRAME("promhx.Stream","first",0xa38b2660,"promhx.Stream.first","promhx/Stream.hx",133,0x5cb766bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	::promhx::Promise tmp = ::promhx::Promise_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	::promhx::Promise s = tmp;		HX_STACK_VAR(s,"s");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::promhx::Promise,s)
	int __ArgCount() const { return 1; }
	Void run(Dynamic x){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","promhx/Stream.hx",135,0x5cb766bf)
		HX_STACK_ARG(x,"x")
		{
			HX_STACK_LINE(135)
			bool tmp1 = s->_resolved;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(135)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(135)
			if ((tmp2)){
				HX_STACK_LINE(135)
				Dynamic tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(135)
				s->handleResolve(tmp3);
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(135)
	hx::TCast< ::promhx::Stream >::cast(this->then( Dynamic(new _Function_1_1(s))));
	HX_STACK_LINE(136)
	::promhx::Promise tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stream_obj,first,return )

Void Stream_obj::handleResolve( Dynamic val){
{
		HX_STACK_FRAME("promhx.Stream","handleResolve",0xfa645a54,"promhx.Stream.handleResolve","promhx/Stream.hx",139,0x5cb766bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(140)
		bool tmp = this->_end;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		if ((tmp2)){
			HX_STACK_LINE(140)
			bool tmp4 = this->_pause;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(140)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(140)
			tmp3 = false;
		}
		HX_STACK_LINE(140)
		if ((tmp3)){
			HX_STACK_LINE(140)
			Dynamic tmp4 = val;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			this->_resolve(tmp4);
		}
	}
return null();
}


Void Stream_obj::pause( Dynamic set){
{
		HX_STACK_FRAME("promhx.Stream","pause",0x60458526,"promhx.Stream.pause","promhx/Stream.hx",147,0x5cb766bf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(set,"set")
		HX_STACK_LINE(148)
		bool tmp = (set == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		if ((tmp)){
			HX_STACK_LINE(148)
			bool tmp1 = this->_pause;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(148)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(148)
			set = tmp2;
		}
		HX_STACK_LINE(149)
		this->_pause = set;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,pause,(void))

::promhx::Stream Stream_obj::pipe( Dynamic f){
	HX_STACK_FRAME("promhx.Stream","pipe",0x49ed1bfe,"promhx.Stream.pipe","promhx/Stream.hx",152,0x5cb766bf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(153)
	::promhx::Stream tmp = ::promhx::Stream_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	::promhx::Stream ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		::promhx::base::AsyncBase ret1 = ret;		HX_STACK_VAR(ret1,"ret1");
		HX_STACK_LINE(154)
		Dynamic f1 = f;		HX_STACK_VAR(f1,"f1");
		HX_STACK_LINE(154)
		Array< bool > linked = Array_obj< bool >::__new().Add(false);		HX_STACK_VAR(linked,"linked");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,Dynamic,f1,::promhx::base::AsyncBase,ret1,Array< bool >,linked)
		int __ArgCount() const { return 1; }
		Void run(Dynamic x){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","promhx/Stream.hx",154,0x5cb766bf)
			HX_STACK_ARG(x,"x")
			{
				HX_STACK_LINE(154)
				bool tmp1 = linked->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(154)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(154)
				if ((tmp2)){
					HX_STACK_LINE(154)
					linked[(int)0] = true;
					HX_STACK_LINE(154)
					Dynamic tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(154)
					::promhx::base::AsyncBase tmp4 = f1(tmp3).Cast< ::promhx::base::AsyncBase >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(154)
					::promhx::base::AsyncBase pipe_ret = tmp4;		HX_STACK_VAR(pipe_ret,"pipe_ret");
					struct _Function_4_1{
						inline static Dynamic Block( ::promhx::base::AsyncBase &ret1){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/Stream.hx",154,0x5cb766bf)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , ret1,false);
								__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") , ret1->handleResolve_dyn(),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(154)
					Dynamic tmp5 = _Function_4_1::Block(ret1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(154)
					pipe_ret->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
					HX_STACK_LINE(154)
					::promhx::base::AsyncBase tmp6 = pipe_ret;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(154)
					::promhx::base::AsyncBase tmp7 = ret1;		HX_STACK_VAR(tmp7,"tmp7");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_2)
					int __ArgCount() const { return 1; }
					Dynamic run(Dynamic x1){
						HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","promhx/Stream.hx",154,0x5cb766bf)
						HX_STACK_ARG(x1,"x1")
						{
							HX_STACK_LINE(154)
							Dynamic tmp8 = x1;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(154)
							return tmp8;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(154)
					::promhx::base::AsyncBase_obj::immediateLinkUpdate(tmp6,tmp7, Dynamic(new _Function_4_2()));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(154)
		Dynamic linkf =  Dynamic(new _Function_2_1(f1,ret1,linked));		HX_STACK_VAR(linkf,"linkf");
		struct _Function_2_2{
			inline static Dynamic Block( ::promhx::base::AsyncBase &ret1,Dynamic &linkf){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/Stream.hx",154,0x5cb766bf)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , ret1,false);
					__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") , linkf,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(154)
		Dynamic tmp1 = _Function_2_2::Block(ret1,linkf);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		this->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(154)
		bool tmp2 = this->_resolved;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		if ((tmp2)){
			HX_STACK_LINE(154)
			bool tmp4 = this->_pending;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(154)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(154)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(154)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(154)
			tmp3 = false;
		}
		HX_STACK_LINE(154)
		if ((tmp3)){
			HX_STACK_LINE(154)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(154)
				Dynamic tmp4 = this->_val;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(154)
				linkf(tmp4).Cast< Void >();
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(154)
						Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(154)
						ret1->handleError(tmp4);
					}
				}
			}
		}
	}
	HX_STACK_LINE(155)
	::promhx::Promise tmp1 = this->_end_promise;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::promhx::Stream,ret)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ds::Option x){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","promhx/Stream.hx",155,0x5cb766bf)
		HX_STACK_ARG(x,"x")
		{
			HX_STACK_LINE(155)
			ret->end();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(155)
	hx::TCast< ::promhx::Promise >::cast(tmp1->then( Dynamic(new _Function_1_1(ret))));
	HX_STACK_LINE(156)
	::promhx::Stream tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,pipe,return )

::promhx::Stream Stream_obj::errorPipe( Dynamic f){
	HX_STACK_FRAME("promhx.Stream","errorPipe",0xea58f646,"promhx.Stream.errorPipe","promhx/Stream.hx",162,0x5cb766bf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(163)
	::promhx::Stream tmp = ::promhx::Stream_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	::promhx::Stream ret = tmp;		HX_STACK_VAR(ret,"ret");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::promhx::Stream,ret,Dynamic,f)
	int __ArgCount() const { return 1; }
	Void run(Dynamic e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","promhx/Stream.hx",164,0x5cb766bf)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(165)
			Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(165)
			::promhx::Stream tmp2 = f(tmp1).Cast< ::promhx::Stream >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(165)
			::promhx::Stream piped = tmp2;		HX_STACK_VAR(piped,"piped");
			HX_STACK_LINE(166)
			Dynamic tmp3 = ret->_resolve_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			hx::TCast< ::promhx::Stream >::cast(piped->then(tmp3));
			HX_STACK_LINE(167)
			Dynamic tmp4 = ret->_end_promise->_resolve_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(167)
			hx::TCast< ::promhx::Promise >::cast(piped->_end_promise->then(tmp4));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(164)
	this->catchError( Dynamic(new _Function_1_1(ret,f)));
	HX_STACK_LINE(169)
	Dynamic tmp1 = ret->_resolve_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	hx::TCast< ::promhx::Stream >::cast(this->then(tmp1));
	HX_STACK_LINE(170)
	::promhx::Promise tmp2 = this->_end_promise;		HX_STACK_VAR(tmp2,"tmp2");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::promhx::Stream,ret)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ds::Option x){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","promhx/Stream.hx",170,0x5cb766bf)
		HX_STACK_ARG(x,"x")
		{
			HX_STACK_LINE(170)
			ret->end();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(170)
	hx::TCast< ::promhx::Promise >::cast(tmp2->then( Dynamic(new _Function_1_2(ret))));
	HX_STACK_LINE(171)
	::promhx::Stream tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(171)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,errorPipe,return )

Void Stream_obj::handleEnd( ){
{
		HX_STACK_FRAME("promhx.Stream","handleEnd",0x23ef7743,"promhx.Stream.handleEnd","promhx/Stream.hx",177,0x5cb766bf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(179)
		bool tmp = this->_pending;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		if ((tmp)){
			HX_STACK_LINE(179)
			::List tmp1 = ::promhx::base::EventLoop_obj::queue;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(179)
			Dynamic tmp2 = this->handleEnd_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(179)
			tmp1->add(tmp2);
			HX_STACK_LINE(179)
			::promhx::base::EventLoop_obj::continueOnNextLoop();
		}
		else{
			HX_STACK_LINE(180)
			::promhx::Promise tmp1 = this->_end_promise;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(180)
			bool tmp2 = tmp1->_resolved;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(180)
			if ((tmp2)){
				HX_STACK_LINE(180)
				return null();
			}
			else{
				HX_STACK_LINE(182)
				this->_end = true;
				HX_STACK_LINE(183)
				bool tmp3 = this->_resolved;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(183)
				::haxe::ds::Option tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(183)
				if ((tmp3)){
					HX_STACK_LINE(183)
					Dynamic tmp5 = this->_val;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(183)
					tmp4 = ::haxe::ds::Option_obj::Some(tmp5);
				}
				else{
					HX_STACK_LINE(183)
					tmp4 = ::haxe::ds::Option_obj::None;
				}
				HX_STACK_LINE(183)
				::haxe::ds::Option o = tmp4;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(184)
				::promhx::Promise tmp5 = this->_end_promise;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(184)
				::haxe::ds::Option tmp6 = o;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(184)
				tmp5->handleResolve(tmp6);
				HX_STACK_LINE(185)
				this->_update = cpp::ArrayBase_obj::__new();
				HX_STACK_LINE(186)
				this->_error = cpp::ArrayBase_obj::__new();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stream_obj,handleEnd,(void))

::promhx::Stream Stream_obj::end( ){
	HX_STACK_FRAME("promhx.Stream","end",0x42e1c60b,"promhx.Stream.end","promhx/Stream.hx",190,0x5cb766bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	{
		HX_STACK_LINE(191)
		::List tmp = ::promhx::base::EventLoop_obj::queue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		Dynamic tmp1 = this->handleEnd_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(191)
		tmp->add(tmp1);
		HX_STACK_LINE(191)
		::promhx::base::EventLoop_obj::continueOnNextLoop();
	}
	HX_STACK_LINE(192)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Stream_obj,end,return )

::promhx::Promise Stream_obj::endThen( Dynamic f){
	HX_STACK_FRAME("promhx.Stream","endThen",0xab7a5688,"promhx.Stream.endThen","promhx/Stream.hx",195,0x5cb766bf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(196)
	::promhx::Promise tmp = this->_end_promise;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	Dynamic tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	::promhx::Promise tmp2 = hx::TCast< ::promhx::Promise >::cast(tmp->then(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,endThen,return )

::promhx::Stream Stream_obj::filter( Dynamic f){
	HX_STACK_FRAME("promhx.Stream","filter",0x723fdb88,"promhx.Stream.filter","promhx/Stream.hx",203,0x5cb766bf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(204)
	::promhx::Stream tmp = ::promhx::Stream_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	::promhx::Stream ret = tmp;		HX_STACK_VAR(ret,"ret");
	struct _Function_1_1{
		inline static Dynamic Block( ::promhx::Stream &ret,Dynamic &f){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/Stream.hx",205,0x5cb766bf)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , ((::promhx::base::AsyncBase)(ret)),false);

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::promhx::Stream,ret,Dynamic,f)
				int __ArgCount() const { return 1; }
				Void run(Dynamic x){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","promhx/Stream.hx",207,0x5cb766bf)
					HX_STACK_ARG(x,"x")
					{
						HX_STACK_LINE(207)
						Dynamic tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(207)
						bool tmp2 = f(tmp1).Cast< bool >();		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(207)
						if ((tmp2)){
							HX_STACK_LINE(207)
							Dynamic tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(207)
							ret->handleResolve(tmp3);
						}
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") ,  Dynamic(new _Function_2_1(ret,f)),true);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(205)
	Dynamic tmp1 = _Function_1_1::Block(ret,f);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	this->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	HX_STACK_LINE(209)
	::promhx::Stream tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	int __ArgCount() const { return 1; }
	Dynamic run(Dynamic x){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","promhx/Stream.hx",209,0x5cb766bf)
		HX_STACK_ARG(x,"x")
		{
			HX_STACK_LINE(209)
			Dynamic tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(209)
			return tmp3;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(209)
	::promhx::base::AsyncBase_obj::immediateLinkUpdate(hx::ObjectPtr<OBJ_>(this),tmp2, Dynamic(new _Function_1_2()));
	HX_STACK_LINE(210)
	::promhx::Stream tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(210)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,filter,return )

::promhx::Stream Stream_obj::concat( ::promhx::Stream s){
	HX_STACK_FRAME("promhx.Stream","concat",0xb4dac4e4,"promhx.Stream.concat","promhx/Stream.hx",218,0x5cb766bf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(219)
	::promhx::Stream tmp = ::promhx::Stream_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	::promhx::Stream ret = tmp;		HX_STACK_VAR(ret,"ret");
	struct _Function_1_1{
		inline static Dynamic Block( ::promhx::Stream &ret){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/Stream.hx",220,0x5cb766bf)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , ((::promhx::base::AsyncBase)(ret)),false);
				__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") , ret->handleResolve_dyn(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(220)
	Dynamic tmp1 = _Function_1_1::Block(ret);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	this->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	HX_STACK_LINE(224)
	::promhx::Stream tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	int __ArgCount() const { return 1; }
	Dynamic run(Dynamic x){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","promhx/Stream.hx",224,0x5cb766bf)
		HX_STACK_ARG(x,"x")
		{
			HX_STACK_LINE(224)
			Dynamic tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(224)
			return tmp3;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(224)
	::promhx::base::AsyncBase_obj::immediateLinkUpdate(hx::ObjectPtr<OBJ_>(this),tmp2, Dynamic(new _Function_1_2()));
	HX_STACK_LINE(225)
	::promhx::Promise tmp3 = this->_end_promise;		HX_STACK_VAR(tmp3,"tmp3");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_3,::promhx::Stream,s,::promhx::Stream,ret)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ds::Option _){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","promhx/Stream.hx",225,0x5cb766bf)
		HX_STACK_ARG(_,"_")
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::promhx::Stream,ret)
			int __ArgCount() const { return 1; }
			::promhx::Stream run(Dynamic x){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","promhx/Stream.hx",226,0x5cb766bf)
				HX_STACK_ARG(x,"x")
				{
					HX_STACK_LINE(227)
					Dynamic tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(227)
					ret->handleResolve(tmp4);
					HX_STACK_LINE(228)
					::promhx::Stream tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(228)
					return tmp5;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(226)
			s->pipe( Dynamic(new _Function_2_1(ret)));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::promhx::Stream,ret)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ds::Option _1){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","promhx/Stream.hx",231,0x5cb766bf)
				HX_STACK_ARG(_1,"_1")
				{
					HX_STACK_LINE(231)
					ret->end();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(230)
			hx::TCast< ::promhx::Promise >::cast(s->_end_promise->then( Dynamic(new _Function_2_2(ret))));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(225)
	hx::TCast< ::promhx::Promise >::cast(tmp3->then( Dynamic(new _Function_1_3(s,ret))));
	HX_STACK_LINE(234)
	::promhx::Stream tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(234)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,concat,return )

::promhx::Stream Stream_obj::merge( ::promhx::Stream s){
	HX_STACK_FRAME("promhx.Stream","merge",0xa8b450e8,"promhx.Stream.merge","promhx/Stream.hx",240,0x5cb766bf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(241)
	::promhx::Stream tmp = ::promhx::Stream_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(241)
	::promhx::Stream ret = tmp;		HX_STACK_VAR(ret,"ret");
	struct _Function_1_1{
		inline static Dynamic Block( ::promhx::Stream &ret){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/Stream.hx",242,0x5cb766bf)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , ((::promhx::base::AsyncBase)(ret)),false);
				__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") , ret->handleResolve_dyn(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(242)
	Dynamic tmp1 = _Function_1_1::Block(ret);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	this->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	struct _Function_1_2{
		inline static Dynamic Block( ::promhx::Stream &ret){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/Stream.hx",246,0x5cb766bf)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , ((::promhx::base::AsyncBase)(ret)),false);
				__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") , ret->handleResolve_dyn(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(246)
	Dynamic tmp2 = _Function_1_2::Block(ret);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	s->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
	HX_STACK_LINE(250)
	::promhx::Stream tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	int __ArgCount() const { return 1; }
	Dynamic run(Dynamic x){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","promhx/Stream.hx",250,0x5cb766bf)
		HX_STACK_ARG(x,"x")
		{
			HX_STACK_LINE(250)
			Dynamic tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(250)
			return tmp4;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(250)
	::promhx::base::AsyncBase_obj::immediateLinkUpdate(hx::ObjectPtr<OBJ_>(this),tmp3, Dynamic(new _Function_1_3()));
	HX_STACK_LINE(251)
	::promhx::Stream tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(251)
	::promhx::Stream tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
	int __ArgCount() const { return 1; }
	Dynamic run(Dynamic x){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","promhx/Stream.hx",251,0x5cb766bf)
		HX_STACK_ARG(x,"x")
		{
			HX_STACK_LINE(251)
			Dynamic tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(251)
			return tmp6;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(251)
	::promhx::base::AsyncBase_obj::immediateLinkUpdate(tmp4,tmp5, Dynamic(new _Function_1_4()));
	HX_STACK_LINE(252)
	::promhx::Stream tmp6 = ret;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(252)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,merge,return )

Dynamic Stream_obj::whenever;

::promhx::Stream Stream_obj::foreach( Dynamic itb){
	HX_STACK_FRAME("promhx.Stream","foreach",0x563e97ba,"promhx.Stream.foreach","promhx/Stream.hx",71,0x5cb766bf)
	HX_STACK_ARG(itb,"itb")
	HX_STACK_LINE(72)
	::promhx::Stream tmp = ::promhx::Stream_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	::promhx::Stream s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(73)
	Dynamic tmp1 = itb->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp1);  __it->hasNext(); ){
		Dynamic i = __it->next();
		{
			HX_STACK_LINE(73)
			Dynamic tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			s->handleResolve(tmp2);
		}
;
	}
	HX_STACK_LINE(74)
	s->end();
	HX_STACK_LINE(75)
	::promhx::Stream tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,foreach,return )

::promhx::Stream Stream_obj::wheneverAll( Dynamic itb){
	HX_STACK_FRAME("promhx.Stream","wheneverAll",0x51137f59,"promhx.Stream.wheneverAll","promhx/Stream.hx",104,0x5cb766bf)
	HX_STACK_ARG(itb,"itb")
	HX_STACK_LINE(105)
	::promhx::Stream tmp = ::promhx::Stream_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	::promhx::Stream ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(106)
	{
		HX_STACK_LINE(106)
		Dynamic all = itb;		HX_STACK_VAR(all,"all");
		HX_STACK_LINE(106)
		::promhx::base::AsyncBase next = ret;		HX_STACK_VAR(next,"next");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::promhx::base::AsyncBase,next,Dynamic,all)
		int __ArgCount() const { return 3; }
		Void run(Array< ::Dynamic > arr,::promhx::base::AsyncBase current,Dynamic v){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","promhx/Stream.hx",106,0x5cb766bf)
			HX_STACK_ARG(arr,"arr")
			HX_STACK_ARG(current,"current")
			HX_STACK_ARG(v,"v")
			{
				HX_STACK_LINE(106)
				bool tmp1 = (arr->length == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(106)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(106)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(106)
				if ((tmp2)){
					HX_STACK_LINE(106)
					tmp3 = ::promhx::base::AsyncBase_obj::allFulfilled(arr);
				}
				else{
					HX_STACK_LINE(106)
					tmp3 = true;
				}
				HX_STACK_LINE(106)
				if ((tmp3)){
					HX_STACK_LINE(106)
					cpp::ArrayBase vals;		HX_STACK_VAR(vals,"vals");
					HX_STACK_LINE(106)
					{
						HX_STACK_LINE(106)
						cpp::ArrayBase _g = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(106)
						Dynamic tmp4 = all->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(106)
						for(::cpp::FastIterator_obj< ::promhx::base::AsyncBase > *__it = ::cpp::CreateFastIterator< ::promhx::base::AsyncBase >(tmp4);  __it->hasNext(); ){
							::promhx::base::AsyncBase a = __it->next();
							{
								HX_STACK_LINE(106)
								bool tmp5 = (a == current);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(106)
								Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(106)
								if ((tmp5)){
									HX_STACK_LINE(106)
									tmp6 = v;
								}
								else{
									HX_STACK_LINE(106)
									tmp6 = a->_val;
								}
								HX_STACK_LINE(106)
								_g->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
							}
;
						}
						HX_STACK_LINE(106)
						vals = _g;
					}
					HX_STACK_LINE(106)
					next->handleResolve(vals);
				}
				HX_STACK_LINE(106)
				Dynamic();
				HX_STACK_LINE(106)
				return null();
			}
			return null();
		}
		HX_END_LOCAL_FUNC3((void))

		HX_STACK_LINE(106)
		Dynamic cthen =  Dynamic(new _Function_2_1(next,all));		HX_STACK_VAR(cthen,"cthen");
		HX_STACK_LINE(106)
		Dynamic tmp1 = all->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		for(::cpp::FastIterator_obj< ::promhx::base::AsyncBase > *__it = ::cpp::CreateFastIterator< ::promhx::base::AsyncBase >(tmp1);  __it->hasNext(); ){
			::promhx::base::AsyncBase a = __it->next();
			{
				HX_STACK_LINE(106)
				::promhx::base::AsyncBase tmp2 = next;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(106)
				Dynamic tmp3 = cthen;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(106)
				::promhx::base::AsyncBase tmp4 = a;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(106)
				Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(106)
				{
					HX_STACK_LINE(106)
					Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(106)
					Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(106)
					{
						HX_STACK_LINE(106)
						Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(106)
						Dynamic tmp6 = all->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(106)
						for(::cpp::FastIterator_obj< ::promhx::base::AsyncBase > *__it = ::cpp::CreateFastIterator< ::promhx::base::AsyncBase >(tmp6);  __it->hasNext(); ){
							::promhx::base::AsyncBase a2 = __it->next();
							{
								HX_STACK_LINE(106)
								bool tmp7 = (a2 != a);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(106)
								if ((tmp7)){
									HX_STACK_LINE(106)
									::promhx::base::AsyncBase tmp8 = a2;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(106)
									_g->push(tmp8);
								}
							}
;
						}
						HX_STACK_LINE(106)
						a1 = _g;
					}
					HX_STACK_LINE(106)
					::promhx::base::AsyncBase a2 = tmp4;		HX_STACK_VAR(a2,"a2");

					HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,a1,Dynamic,f,::promhx::base::AsyncBase,a2)
					int __ArgCount() const { return 1; }
					Void run(Dynamic v){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","promhx/Stream.hx",106,0x5cb766bf)
						HX_STACK_ARG(v,"v")
						{
							HX_STACK_LINE(106)
							::promhx::base::AsyncBase tmp6 = a2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(106)
							Dynamic tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(106)
							f(a1,tmp6,tmp7).Cast< Void >();
							HX_STACK_LINE(106)
							return null();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(106)
					tmp5 =  Dynamic(new _Function_4_1(a1,f,a2));
				}
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &tmp5,::promhx::base::AsyncBase &tmp2){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/Stream.hx",106,0x5cb766bf)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , tmp2,false);
							__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") , tmp5,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(106)
				Dynamic tmp6 = _Function_3_1::Block(tmp5,tmp2);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(106)
				a->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
			}
;
		}
		HX_STACK_LINE(106)
		Dynamic tmp2 = all;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		bool tmp3 = ::promhx::base::AsyncBase_obj::allFulfilled(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		if ((tmp3)){
			struct _Function_3_1{
				inline static cpp::ArrayBase Block( Dynamic &all){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/Stream.hx",106,0x5cb766bf)
					{
						HX_STACK_LINE(106)
						cpp::ArrayBase _g = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(106)
						Dynamic tmp4 = all->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(106)
						for(::cpp::FastIterator_obj< ::promhx::base::AsyncBase > *__it = ::cpp::CreateFastIterator< ::promhx::base::AsyncBase >(tmp4);  __it->hasNext(); ){
							::promhx::base::AsyncBase a = __it->next();
							{
								HX_STACK_LINE(106)
								Dynamic tmp5 = a->_val;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(106)
								_g->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
							}
;
						}
						HX_STACK_LINE(106)
						return _g;
					}
					return null();
				}
			};
			HX_STACK_LINE(106)
			next->handleResolve(_Function_3_1::Block(all));
		}
	}
	HX_STACK_LINE(107)
	::promhx::Stream tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,wheneverAll,return )

::promhx::Stream Stream_obj::concatAll( Dynamic itb){
	HX_STACK_FRAME("promhx.Stream","concatAll",0x741e129d,"promhx.Stream.concatAll","promhx/Stream.hx",114,0x5cb766bf)
	HX_STACK_ARG(itb,"itb")
	HX_STACK_LINE(115)
	::promhx::Stream tmp = ::promhx::Stream_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	::promhx::Stream ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(116)
	Dynamic tmp1 = itb->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	for(::cpp::FastIterator_obj< ::promhx::Stream > *__it = ::cpp::CreateFastIterator< ::promhx::Stream >(tmp1);  __it->hasNext(); ){
		::promhx::Stream i = __it->next();
		{
			HX_STACK_LINE(116)
			::promhx::Stream tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(116)
			ret->concat(tmp2);
		}
;
	}
	HX_STACK_LINE(117)
	::promhx::Stream tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,concatAll,return )

::promhx::Stream Stream_obj::mergeAll( Dynamic itb){
	HX_STACK_FRAME("promhx.Stream","mergeAll",0x3a68e119,"promhx.Stream.mergeAll","promhx/Stream.hx",124,0x5cb766bf)
	HX_STACK_ARG(itb,"itb")
	HX_STACK_LINE(125)
	::promhx::Stream tmp = ::promhx::Stream_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	::promhx::Stream ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(126)
	Dynamic tmp1 = itb->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	for(::cpp::FastIterator_obj< ::promhx::Stream > *__it = ::cpp::CreateFastIterator< ::promhx::Stream >(tmp1);  __it->hasNext(); ){
		::promhx::Stream i = __it->next();
		{
			HX_STACK_LINE(126)
			::promhx::Stream tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			ret->merge(tmp2);
		}
;
	}
	HX_STACK_LINE(127)
	::promhx::Stream tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,mergeAll,return )

::promhx::Stream Stream_obj::stream( Dynamic _val){
	HX_STACK_FRAME("promhx.Stream","stream",0xfe37d050,"promhx.Stream.stream","promhx/Stream.hx",258,0x5cb766bf)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(259)
	::promhx::Stream tmp = ::promhx::Stream_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	::promhx::Stream ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(260)
	Dynamic tmp1 = _val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	ret->handleResolve(tmp1);
	HX_STACK_LINE(261)
	::promhx::Stream tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(261)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stream_obj,stream,return )


Stream_obj::Stream_obj()
{
}

void Stream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stream);
	HX_MARK_MEMBER_NAME(deferred,"deferred");
	HX_MARK_MEMBER_NAME(_pause,"_pause");
	HX_MARK_MEMBER_NAME(_end,"_end");
	HX_MARK_MEMBER_NAME(_end_promise,"_end_promise");
	HX_MARK_MEMBER_NAME(_end_deferred,"_end_deferred");
	::promhx::base::AsyncBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(deferred,"deferred");
	HX_VISIT_MEMBER_NAME(_pause,"_pause");
	HX_VISIT_MEMBER_NAME(_end,"_end");
	HX_VISIT_MEMBER_NAME(_end_promise,"_end_promise");
	HX_VISIT_MEMBER_NAME(_end_deferred,"_end_deferred");
	::promhx::base::AsyncBase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stream_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_end") ) { return _end; }
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		if (HX_FIELD_EQ(inName,"pipe") ) { return pipe_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return first_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pause") ) { return _pause; }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endThen") ) { return endThen_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deferred") ) { return deferred; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"errorPipe") ) { return errorPipe_dyn(); }
		if (HX_FIELD_EQ(inName,"handleEnd") ) { return handleEnd_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_end_promise") ) { return _end_promise; }
		if (HX_FIELD_EQ(inName,"detachStream") ) { return detachStream_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_end_deferred") ) { return _end_deferred; }
		if (HX_FIELD_EQ(inName,"handleResolve") ) { return handleResolve_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Stream_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"stream") ) { outValue = stream_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"foreach") ) { outValue = foreach_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"whenever") ) { outValue = whenever; return true;  }
		if (HX_FIELD_EQ(inName,"mergeAll") ) { outValue = mergeAll_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"concatAll") ) { outValue = concatAll_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wheneverAll") ) { outValue = wheneverAll_dyn(); return true;  }
	}
	return false;
}

Dynamic Stream_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_end") ) { _end=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pause") ) { _pause=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deferred") ) { deferred=inValue.Cast< ::promhx::Deferred >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_end_promise") ) { _end_promise=inValue.Cast< ::promhx::Promise >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_end_deferred") ) { _end_deferred=inValue.Cast< ::promhx::Deferred >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stream_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"whenever") ) { whenever=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Stream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("deferred","\x1f","\xff","\x3c","\xfb"));
	outFields->push(HX_HCSTRING("_pause","\x37","\x1e","\x3f","\xb9"));
	outFields->push(HX_HCSTRING("_end","\xdc","\x48","\x18","\x3f"));
	outFields->push(HX_HCSTRING("_end_promise","\xf8","\xab","\xb8","\x75"));
	outFields->push(HX_HCSTRING("_end_deferred","\x22","\xb2","\x70","\x92"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::promhx::Deferred*/ ,(int)offsetof(Stream_obj,deferred),HX_HCSTRING("deferred","\x1f","\xff","\x3c","\xfb")},
	{hx::fsBool,(int)offsetof(Stream_obj,_pause),HX_HCSTRING("_pause","\x37","\x1e","\x3f","\xb9")},
	{hx::fsBool,(int)offsetof(Stream_obj,_end),HX_HCSTRING("_end","\xdc","\x48","\x18","\x3f")},
	{hx::fsObject /*::promhx::Promise*/ ,(int)offsetof(Stream_obj,_end_promise),HX_HCSTRING("_end_promise","\xf8","\xab","\xb8","\x75")},
	{hx::fsObject /*::promhx::Deferred*/ ,(int)offsetof(Stream_obj,_end_deferred),HX_HCSTRING("_end_deferred","\x22","\xb2","\x70","\x92")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Stream_obj::whenever,HX_HCSTRING("whenever","\xd8","\xfa","\x66","\x76")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("deferred","\x1f","\xff","\x3c","\xfb"),
	HX_HCSTRING("_pause","\x37","\x1e","\x3f","\xb9"),
	HX_HCSTRING("_end","\xdc","\x48","\x18","\x3f"),
	HX_HCSTRING("_end_promise","\xf8","\xab","\xb8","\x75"),
	HX_HCSTRING("_end_deferred","\x22","\xb2","\x70","\x92"),
	HX_HCSTRING("then","\xdd","\x02","\xfc","\x4c"),
	HX_HCSTRING("detachStream","\x33","\x26","\xba","\xde"),
	HX_HCSTRING("first","\x30","\x78","\x9d","\x00"),
	HX_HCSTRING("handleResolve","\x24","\xfc","\xd4","\x7f"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("pipe","\x2e","\xf4","\x57","\x4a"),
	HX_HCSTRING("errorPipe","\x16","\x70","\xc0","\x70"),
	HX_HCSTRING("handleEnd","\x13","\xf1","\x56","\xaa"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("endThen","\x58","\xbc","\x20","\x2f"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stream_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stream_obj::whenever,"whenever");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stream_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stream_obj::whenever,"whenever");
};

#endif

hx::Class Stream_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("whenever","\xd8","\xfa","\x66","\x76"),
	HX_HCSTRING("foreach","\x8a","\xfd","\xe4","\xd9"),
	HX_HCSTRING("wheneverAll","\x29","\x0d","\xa9","\xdb"),
	HX_HCSTRING("concatAll","\x6d","\x8c","\x85","\xfa"),
	HX_HCSTRING("mergeAll","\x49","\x91","\x5b","\xe8"),
	HX_HCSTRING("stream","\x80","\x14","\x2d","\x11"),
	::String(null()) };

void Stream_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("promhx.Stream","\x9e","\x4a","\xf0","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stream_obj::__GetStatic;
	__mClass->mSetStaticField = &Stream_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stream_obj >;
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

} // end namespace promhx
