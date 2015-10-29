#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_promhx_Deferred
#include <promhx/Deferred.h>
#endif
#ifndef INCLUDED_promhx_Promise
#include <promhx/Promise.h>
#endif
#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
#ifndef INCLUDED_promhx_base_EventLoop
#include <promhx/base/EventLoop.h>
#endif
#ifndef INCLUDED_promhx_error_PromiseError
#include <promhx/error/PromiseError.h>
#endif
namespace promhx{

Void Promise_obj::__construct(::promhx::Deferred d)
{
HX_STACK_FRAME("promhx.Promise","new",0xc9b9b52f,"promhx.Promise.new","promhx/Promise.hx",15,0x4985b062)
HX_STACK_THIS(this)
HX_STACK_ARG(d,"d")
{
	HX_STACK_LINE(16)
	::promhx::Deferred tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	super::__construct(tmp);
	HX_STACK_LINE(17)
	this->_rejected = false;
}
;
	return null();
}

//Promise_obj::~Promise_obj() { }

Dynamic Promise_obj::__CreateEmpty() { return  new Promise_obj; }
hx::ObjectPtr< Promise_obj > Promise_obj::__new(::promhx::Deferred d)
{  hx::ObjectPtr< Promise_obj > _result_ = new Promise_obj();
	_result_->__construct(d);
	return _result_;}

Dynamic Promise_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Promise_obj > _result_ = new Promise_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool Promise_obj::isRejected( ){
	HX_STACK_FRAME("promhx.Promise","isRejected",0xb0dbf499,"promhx.Promise.isRejected","promhx/Promise.hx",64,0x4985b062)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	bool tmp = this->_rejected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,isRejected,return )

Void Promise_obj::reject( Dynamic e){
{
		HX_STACK_FRAME("promhx.Promise","reject",0xa3b917f0,"promhx.Promise.reject","promhx/Promise.hx",71,0x4985b062)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(72)
		this->_rejected = true;
		HX_STACK_LINE(73)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		this->handleError(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,reject,(void))

Void Promise_obj::handleResolve( Dynamic val){
{
		HX_STACK_FRAME("promhx.Promise","handleResolve",0x24d899b3,"promhx.Promise.handleResolve","promhx/Promise.hx",89,0x4985b062)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(90)
		bool tmp = this->_resolved;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		if ((tmp)){
			HX_STACK_LINE(91)
			::String msg = HX_HCSTRING("Promise has already been resolved","\xf9","\x14","\xe6","\x73");		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(92)
			::String tmp1 = msg;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(92)
			::promhx::error::PromiseError tmp2 = ::promhx::error::PromiseError_obj::AlreadyResolved(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(94)
		Dynamic tmp1 = val;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		this->_resolve(tmp1);
	}
return null();
}


::promhx::base::AsyncBase Promise_obj::then( Dynamic f){
	HX_STACK_FRAME("promhx.Promise","then",0xbcbe532e,"promhx.Promise.then","promhx/Promise.hx",100,0x4985b062)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(101)
	::promhx::Promise tmp = ::promhx::Promise_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	::promhx::Promise ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		::promhx::base::AsyncBase next = ret;		HX_STACK_VAR(next,"next");
		HX_STACK_LINE(102)
		Dynamic f1 = f;		HX_STACK_VAR(f1,"f1");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &f1,::promhx::base::AsyncBase &next){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/Promise.hx",102,0x4985b062)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , next,false);

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,f1,::promhx::base::AsyncBase,next)
					int __ArgCount() const { return 1; }
					Void run(Dynamic x){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","promhx/Promise.hx",102,0x4985b062)
						HX_STACK_ARG(x,"x")
						{
							HX_STACK_LINE(102)
							Dynamic tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(102)
							Dynamic tmp2 = f1(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(102)
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
		HX_STACK_LINE(102)
		Dynamic tmp1 = _Function_2_1::Block(f1,next);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		this->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(102)
		::promhx::base::AsyncBase tmp2 = next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		Dynamic tmp3 = f1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		::promhx::base::AsyncBase_obj::immediateLinkUpdate(hx::ObjectPtr<OBJ_>(this),tmp2,tmp3);
	}
	HX_STACK_LINE(103)
	::promhx::Promise tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	return tmp1;
}


Void Promise_obj::unlink( ::promhx::base::AsyncBase to){
{
		HX_STACK_FRAME("promhx.Promise","unlink",0x06bbe564,"promhx.Promise.unlink","promhx/Promise.hx",106,0x4985b062)
		HX_STACK_THIS(this)
		HX_STACK_ARG(to,"to")
		HX_STACK_LINE(106)
		::promhx::Promise _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			::List tmp = ::promhx::base::EventLoop_obj::queue;		HX_STACK_VAR(tmp,"tmp");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::promhx::Promise,_g,::promhx::base::AsyncBase,to)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","promhx/Promise.hx",108,0x4985b062)
				{
					HX_STACK_LINE(108)
					bool tmp1 = _g->_fulfilled;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(108)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(108)
					if ((tmp2)){
						HX_STACK_LINE(109)
						::String msg = HX_HCSTRING("Downstream Promise is not fullfilled","\xd1","\x9a","\x9d","\x4f");		HX_STACK_VAR(msg,"msg");
						HX_STACK_LINE(110)
						::String tmp3 = msg;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(110)
						::promhx::error::PromiseError tmp4 = ::promhx::error::PromiseError_obj::DownstreamNotFullfilled(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(110)
						_g->handleError(tmp4);
					}
					else{

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::promhx::base::AsyncBase,to)
						int __ArgCount() const { return 1; }
						bool run(Dynamic x){
							HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","promhx/Promise.hx",113,0x4985b062)
							HX_STACK_ARG(x,"x")
							{
								HX_STACK_LINE(113)
								bool tmp3 = (x->__Field(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26"), hx::paccDynamic ) != to);		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(113)
								return tmp3;
							}
							return null();
						}
						HX_END_LOCAL_FUNC1(return)

						HX_STACK_LINE(113)
						_g->_update = _g->_update->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic )( Dynamic(new _Function_4_1(to)));
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(107)
			tmp->add( Dynamic(new _Function_2_1(_g,to)));
			HX_STACK_LINE(107)
			::promhx::base::EventLoop_obj::continueOnNextLoop();
		}
	}
return null();
}


Void Promise_obj::handleError( Dynamic error){
{
		HX_STACK_FRAME("promhx.Promise","handleError",0xee9142cf,"promhx.Promise.handleError","promhx/Promise.hx",118,0x4985b062)
		HX_STACK_THIS(this)
		HX_STACK_ARG(error,"error")
		HX_STACK_LINE(119)
		this->_rejected = true;
		HX_STACK_LINE(120)
		Dynamic tmp = error;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		this->_handleError(tmp);
	}
return null();
}


::promhx::Promise Promise_obj::pipe( Dynamic f){
	HX_STACK_FRAME("promhx.Promise","pipe",0xba1a447f,"promhx.Promise.pipe","promhx/Promise.hx",123,0x4985b062)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(124)
	::promhx::Promise tmp = ::promhx::Promise_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	::promhx::Promise ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(125)
	{
		HX_STACK_LINE(125)
		::promhx::base::AsyncBase ret1 = ret;		HX_STACK_VAR(ret1,"ret1");
		HX_STACK_LINE(125)
		Dynamic f1 = f;		HX_STACK_VAR(f1,"f1");
		HX_STACK_LINE(125)
		Array< bool > linked = Array_obj< bool >::__new().Add(false);		HX_STACK_VAR(linked,"linked");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,Dynamic,f1,::promhx::base::AsyncBase,ret1,Array< bool >,linked)
		int __ArgCount() const { return 1; }
		Void run(Dynamic x){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","promhx/Promise.hx",125,0x4985b062)
			HX_STACK_ARG(x,"x")
			{
				HX_STACK_LINE(125)
				bool tmp1 = linked->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(125)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(125)
				if ((tmp2)){
					HX_STACK_LINE(125)
					linked[(int)0] = true;
					HX_STACK_LINE(125)
					Dynamic tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(125)
					::promhx::base::AsyncBase tmp4 = f1(tmp3).Cast< ::promhx::base::AsyncBase >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(125)
					::promhx::base::AsyncBase pipe_ret = tmp4;		HX_STACK_VAR(pipe_ret,"pipe_ret");
					struct _Function_4_1{
						inline static Dynamic Block( ::promhx::base::AsyncBase &ret1){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/Promise.hx",125,0x4985b062)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , ret1,false);
								__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") , ret1->handleResolve_dyn(),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(125)
					Dynamic tmp5 = _Function_4_1::Block(ret1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(125)
					pipe_ret->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
					HX_STACK_LINE(125)
					::promhx::base::AsyncBase tmp6 = pipe_ret;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(125)
					::promhx::base::AsyncBase tmp7 = ret1;		HX_STACK_VAR(tmp7,"tmp7");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_2)
					int __ArgCount() const { return 1; }
					Dynamic run(Dynamic x1){
						HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","promhx/Promise.hx",125,0x4985b062)
						HX_STACK_ARG(x1,"x1")
						{
							HX_STACK_LINE(125)
							Dynamic tmp8 = x1;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(125)
							return tmp8;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(125)
					::promhx::base::AsyncBase_obj::immediateLinkUpdate(tmp6,tmp7, Dynamic(new _Function_4_2()));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(125)
		Dynamic linkf =  Dynamic(new _Function_2_1(f1,ret1,linked));		HX_STACK_VAR(linkf,"linkf");
		struct _Function_2_2{
			inline static Dynamic Block( ::promhx::base::AsyncBase &ret1,Dynamic &linkf){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/Promise.hx",125,0x4985b062)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , ret1,false);
					__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") , linkf,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(125)
		Dynamic tmp1 = _Function_2_2::Block(ret1,linkf);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		this->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(125)
		bool tmp2 = this->_resolved;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(125)
		if ((tmp2)){
			HX_STACK_LINE(125)
			bool tmp4 = this->_pending;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(125)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(125)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(125)
			tmp3 = false;
		}
		HX_STACK_LINE(125)
		if ((tmp3)){
			HX_STACK_LINE(125)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(125)
				Dynamic tmp4 = this->_val;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(125)
				linkf(tmp4).Cast< Void >();
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(125)
						Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(125)
						ret1->handleError(tmp4);
					}
				}
			}
		}
	}
	HX_STACK_LINE(126)
	::promhx::Promise tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,pipe,return )

::promhx::Promise Promise_obj::errorPipe( Dynamic f){
	HX_STACK_FRAME("promhx.Promise","errorPipe",0x91845a25,"promhx.Promise.errorPipe","promhx/Promise.hx",132,0x4985b062)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(133)
	::promhx::Promise tmp = ::promhx::Promise_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	::promhx::Promise ret = tmp;		HX_STACK_VAR(ret,"ret");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::promhx::Promise,ret,Dynamic,f)
	int __ArgCount() const { return 1; }
	Void run(Dynamic e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","promhx/Promise.hx",134,0x4985b062)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(135)
			Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(135)
			::promhx::Promise tmp2 = f(tmp1).Cast< ::promhx::Promise >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(135)
			::promhx::Promise piped = tmp2;		HX_STACK_VAR(piped,"piped");
			HX_STACK_LINE(136)
			Dynamic tmp3 = ret->_resolve_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(136)
			hx::TCast< ::promhx::Promise >::cast(piped->then(tmp3));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(134)
	this->catchError( Dynamic(new _Function_1_1(ret,f)));
	HX_STACK_LINE(138)
	Dynamic tmp1 = ret->_resolve_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	hx::TCast< ::promhx::Promise >::cast(this->then(tmp1));
	HX_STACK_LINE(139)
	::promhx::Promise tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,errorPipe,return )

Dynamic Promise_obj::when;

::promhx::Promise Promise_obj::whenAll( Dynamic itb){
	HX_STACK_FRAME("promhx.Promise","whenAll",0xc61172d6,"promhx.Promise.whenAll","promhx/Promise.hx",80,0x4985b062)
	HX_STACK_ARG(itb,"itb")
	HX_STACK_LINE(81)
	::promhx::Promise tmp = ::promhx::Promise_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	::promhx::Promise ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		Dynamic all = itb;		HX_STACK_VAR(all,"all");
		HX_STACK_LINE(82)
		::promhx::base::AsyncBase next = ret;		HX_STACK_VAR(next,"next");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::promhx::base::AsyncBase,next,Dynamic,all)
		int __ArgCount() const { return 3; }
		Void run(Array< ::Dynamic > arr,::promhx::base::AsyncBase current,Dynamic v){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","promhx/Promise.hx",82,0x4985b062)
			HX_STACK_ARG(arr,"arr")
			HX_STACK_ARG(current,"current")
			HX_STACK_ARG(v,"v")
			{
				HX_STACK_LINE(82)
				bool tmp1 = (arr->length == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(82)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(82)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(82)
				if ((tmp2)){
					HX_STACK_LINE(82)
					tmp3 = ::promhx::base::AsyncBase_obj::allFulfilled(arr);
				}
				else{
					HX_STACK_LINE(82)
					tmp3 = true;
				}
				HX_STACK_LINE(82)
				if ((tmp3)){
					HX_STACK_LINE(82)
					cpp::ArrayBase vals;		HX_STACK_VAR(vals,"vals");
					HX_STACK_LINE(82)
					{
						HX_STACK_LINE(82)
						cpp::ArrayBase _g = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(82)
						Dynamic tmp4 = all->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(82)
						for(::cpp::FastIterator_obj< ::promhx::base::AsyncBase > *__it = ::cpp::CreateFastIterator< ::promhx::base::AsyncBase >(tmp4);  __it->hasNext(); ){
							::promhx::base::AsyncBase a = __it->next();
							{
								HX_STACK_LINE(82)
								bool tmp5 = (a == current);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(82)
								Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(82)
								if ((tmp5)){
									HX_STACK_LINE(82)
									tmp6 = v;
								}
								else{
									HX_STACK_LINE(82)
									tmp6 = a->_val;
								}
								HX_STACK_LINE(82)
								_g->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
							}
;
						}
						HX_STACK_LINE(82)
						vals = _g;
					}
					HX_STACK_LINE(82)
					next->handleResolve(vals);
				}
				HX_STACK_LINE(82)
				Dynamic();
				HX_STACK_LINE(82)
				return null();
			}
			return null();
		}
		HX_END_LOCAL_FUNC3((void))

		HX_STACK_LINE(82)
		Dynamic cthen =  Dynamic(new _Function_2_1(next,all));		HX_STACK_VAR(cthen,"cthen");
		HX_STACK_LINE(82)
		Dynamic tmp1 = all->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		for(::cpp::FastIterator_obj< ::promhx::base::AsyncBase > *__it = ::cpp::CreateFastIterator< ::promhx::base::AsyncBase >(tmp1);  __it->hasNext(); ){
			::promhx::base::AsyncBase a = __it->next();
			{
				HX_STACK_LINE(82)
				::promhx::base::AsyncBase tmp2 = next;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(82)
				Dynamic tmp3 = cthen;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(82)
				::promhx::base::AsyncBase tmp4 = a;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(82)
				Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(82)
				{
					HX_STACK_LINE(82)
					Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(82)
					Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(82)
					{
						HX_STACK_LINE(82)
						Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(82)
						Dynamic tmp6 = all->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(82)
						for(::cpp::FastIterator_obj< ::promhx::base::AsyncBase > *__it = ::cpp::CreateFastIterator< ::promhx::base::AsyncBase >(tmp6);  __it->hasNext(); ){
							::promhx::base::AsyncBase a2 = __it->next();
							{
								HX_STACK_LINE(82)
								bool tmp7 = (a2 != a);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(82)
								if ((tmp7)){
									HX_STACK_LINE(82)
									::promhx::base::AsyncBase tmp8 = a2;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(82)
									_g->push(tmp8);
								}
							}
;
						}
						HX_STACK_LINE(82)
						a1 = _g;
					}
					HX_STACK_LINE(82)
					::promhx::base::AsyncBase a2 = tmp4;		HX_STACK_VAR(a2,"a2");

					HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,a1,Dynamic,f,::promhx::base::AsyncBase,a2)
					int __ArgCount() const { return 1; }
					Void run(Dynamic v){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","promhx/Promise.hx",82,0x4985b062)
						HX_STACK_ARG(v,"v")
						{
							HX_STACK_LINE(82)
							::promhx::base::AsyncBase tmp6 = a2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(82)
							Dynamic tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(82)
							f(a1,tmp6,tmp7).Cast< Void >();
							HX_STACK_LINE(82)
							return null();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(82)
					tmp5 =  Dynamic(new _Function_4_1(a1,f,a2));
				}
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &tmp5,::promhx::base::AsyncBase &tmp2){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/Promise.hx",82,0x4985b062)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , tmp2,false);
							__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") , tmp5,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(82)
				Dynamic tmp6 = _Function_3_1::Block(tmp5,tmp2);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(82)
				a->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
			}
;
		}
		HX_STACK_LINE(82)
		Dynamic tmp2 = all;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		bool tmp3 = ::promhx::base::AsyncBase_obj::allFulfilled(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		if ((tmp3)){
			struct _Function_3_1{
				inline static cpp::ArrayBase Block( Dynamic &all){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/Promise.hx",82,0x4985b062)
					{
						HX_STACK_LINE(82)
						cpp::ArrayBase _g = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(82)
						Dynamic tmp4 = all->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(82)
						for(::cpp::FastIterator_obj< ::promhx::base::AsyncBase > *__it = ::cpp::CreateFastIterator< ::promhx::base::AsyncBase >(tmp4);  __it->hasNext(); ){
							::promhx::base::AsyncBase a = __it->next();
							{
								HX_STACK_LINE(82)
								Dynamic tmp5 = a->_val;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(82)
								_g->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
							}
;
						}
						HX_STACK_LINE(82)
						return _g;
					}
					return null();
				}
			};
			HX_STACK_LINE(82)
			next->handleResolve(_Function_3_1::Block(all));
		}
	}
	HX_STACK_LINE(83)
	::promhx::Promise tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,whenAll,return )

::promhx::Promise Promise_obj::promise( Dynamic _val){
	HX_STACK_FRAME("promhx.Promise","promise",0x6403c5ea,"promhx.Promise.promise","promhx/Promise.hx",145,0x4985b062)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(146)
	::promhx::Promise tmp = ::promhx::Promise_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	::promhx::Promise ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(147)
	Dynamic tmp1 = _val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	ret->handleResolve(tmp1);
	HX_STACK_LINE(148)
	::promhx::Promise tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,promise,return )


Promise_obj::Promise_obj()
{
}

Dynamic Promise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		if (HX_FIELD_EQ(inName,"pipe") ) { return pipe_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reject") ) { return reject_dyn(); }
		if (HX_FIELD_EQ(inName,"unlink") ) { return unlink_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rejected") ) { return _rejected; }
		if (HX_FIELD_EQ(inName,"errorPipe") ) { return errorPipe_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isRejected") ) { return isRejected_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"handleError") ) { return handleError_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleResolve") ) { return handleResolve_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Promise_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"when") ) { outValue = when; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"whenAll") ) { outValue = whenAll_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"promise") ) { outValue = promise_dyn(); return true;  }
	}
	return false;
}

Dynamic Promise_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_rejected") ) { _rejected=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Promise_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"when") ) { when=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Promise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_rejected","\xdd","\xf6","\x19","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Promise_obj,_rejected),HX_HCSTRING("_rejected","\xdd","\xf6","\x19","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Promise_obj::when,HX_HCSTRING("when","\xba","\xa6","\xf7","\x4e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_rejected","\xdd","\xf6","\x19","\xf3"),
	HX_HCSTRING("isRejected","\x88","\x11","\x33","\x26"),
	HX_HCSTRING("reject","\x5f","\x51","\x85","\x02"),
	HX_HCSTRING("handleResolve","\x24","\xfc","\xd4","\x7f"),
	HX_HCSTRING("then","\xdd","\x02","\xfc","\x4c"),
	HX_HCSTRING("unlink","\xd3","\x1e","\x88","\x65"),
	HX_HCSTRING("handleError","\x00","\x77","\x73","\x25"),
	HX_HCSTRING("pipe","\x2e","\xf4","\x57","\x4a"),
	HX_HCSTRING("errorPipe","\x16","\x70","\xc0","\x70"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Promise_obj::when,"when");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Promise_obj::when,"when");
};

#endif

hx::Class Promise_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("when","\xba","\xa6","\xf7","\x4e"),
	HX_HCSTRING("whenAll","\x87","\x7a","\xf7","\x59"),
	HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"),
	::String(null()) };

void Promise_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("promhx.Promise","\xbd","\xf1","\xf5","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Promise_obj::__GetStatic;
	__mClass->mSetStaticField = &Promise_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Promise_obj >;
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
