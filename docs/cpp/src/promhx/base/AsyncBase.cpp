#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_promhx_Deferred
#include <promhx/Deferred.h>
#endif
#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
#ifndef INCLUDED_promhx_base_EventLoop
#include <promhx/base/EventLoop.h>
#endif
namespace promhx{
namespace base{

Void AsyncBase_obj::__construct(::promhx::Deferred d)
{
HX_STACK_FRAME("promhx.base.AsyncBase","new",0x69b652a0,"promhx.base.AsyncBase.new","promhx/base/AsyncBase.hx",40,0xe6f74d30)
HX_STACK_THIS(this)
HX_STACK_ARG(d,"d")
{
	HX_STACK_LINE(42)
	this->_resolved = false;
	HX_STACK_LINE(43)
	this->_pending = false;
	HX_STACK_LINE(44)
	this->_errorPending = false;
	HX_STACK_LINE(45)
	this->_fulfilled = false;
	HX_STACK_LINE(46)
	this->_update = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(47)
	this->_error = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(48)
	this->_errored = false;
	HX_STACK_LINE(50)
	bool tmp = (d != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	if ((tmp)){
		HX_STACK_LINE(51)
		::promhx::base::AsyncBase next = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(next,"next");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
		int __ArgCount() const { return 1; }
		Dynamic run(Dynamic x){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","promhx/base/AsyncBase.hx",51,0xe6f74d30)
			HX_STACK_ARG(x,"x")
			{
				HX_STACK_LINE(51)
				Dynamic tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(51)
				return tmp1;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(51)
		Dynamic f =  Dynamic(new _Function_2_1());		HX_STACK_VAR(f,"f");
		struct _Function_2_2{
			inline static Dynamic Block( ::promhx::base::AsyncBase &next,Dynamic &f){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/base/AsyncBase.hx",51,0xe6f74d30)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , next,false);

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,::promhx::base::AsyncBase,next,Dynamic,f)
					int __ArgCount() const { return 1; }
					Void run(Dynamic x){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","promhx/base/AsyncBase.hx",51,0xe6f74d30)
						HX_STACK_ARG(x,"x")
						{
							HX_STACK_LINE(51)
							Dynamic tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(51)
							Dynamic tmp2 = f(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(51)
							next->handleResolve(tmp2);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") ,  Dynamic(new _Function_3_1(next,f)),true);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(51)
		Dynamic tmp1 = _Function_2_2::Block(next,f);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		d->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(51)
		::promhx::Deferred tmp2 = d;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		::promhx::base::AsyncBase tmp3 = next;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		Dynamic tmp4 = f;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		::promhx::base::AsyncBase_obj::immediateLinkUpdate(tmp2,tmp3,tmp4);
	}
}
;
	return null();
}

//AsyncBase_obj::~AsyncBase_obj() { }

Dynamic AsyncBase_obj::__CreateEmpty() { return  new AsyncBase_obj; }
hx::ObjectPtr< AsyncBase_obj > AsyncBase_obj::__new(::promhx::Deferred d)
{  hx::ObjectPtr< AsyncBase_obj > _result_ = new AsyncBase_obj();
	_result_->__construct(d);
	return _result_;}

Dynamic AsyncBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AsyncBase_obj > _result_ = new AsyncBase_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::promhx::base::AsyncBase AsyncBase_obj::catchError( Dynamic f){
	HX_STACK_FRAME("promhx.base.AsyncBase","catchError",0x36d0cf4d,"promhx.base.AsyncBase.catchError","promhx/base/AsyncBase.hx",61,0xe6f74d30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(62)
	Dynamic tmp = f;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	this->_error->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(63)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,catchError,return )

::promhx::base::AsyncBase AsyncBase_obj::errorThen( Dynamic f){
	HX_STACK_FRAME("promhx.base.AsyncBase","errorThen",0x5df23105,"promhx.base.AsyncBase.errorThen","promhx/base/AsyncBase.hx",69,0xe6f74d30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(70)
	this->_errorMap = f;
	HX_STACK_LINE(71)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,errorThen,return )

bool AsyncBase_obj::isResolved( ){
	HX_STACK_FRAME("promhx.base.AsyncBase","isResolved",0xd8cdd3c2,"promhx.base.AsyncBase.isResolved","promhx/base/AsyncBase.hx",78,0xe6f74d30)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	bool tmp = this->_resolved;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncBase_obj,isResolved,return )

bool AsyncBase_obj::isErrored( ){
	HX_STACK_FRAME("promhx.base.AsyncBase","isErrored",0xd896d59d,"promhx.base.AsyncBase.isErrored","promhx/base/AsyncBase.hx",84,0xe6f74d30)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	bool tmp = this->_errored;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncBase_obj,isErrored,return )

bool AsyncBase_obj::isErrorHandled( ){
	HX_STACK_FRAME("promhx.base.AsyncBase","isErrorHandled",0xc10b999e,"promhx.base.AsyncBase.isErrorHandled","promhx/base/AsyncBase.hx",90,0xe6f74d30)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	int tmp = this->_error->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncBase_obj,isErrorHandled,return )

bool AsyncBase_obj::isErrorPending( ){
	HX_STACK_FRAME("promhx.base.AsyncBase","isErrorPending",0xa7228239,"promhx.base.AsyncBase.isErrorPending","promhx/base/AsyncBase.hx",96,0xe6f74d30)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	bool tmp = this->_errorPending;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncBase_obj,isErrorPending,return )

bool AsyncBase_obj::isFulfilled( ){
	HX_STACK_FRAME("promhx.base.AsyncBase","isFulfilled",0x0e0a9e95,"promhx.base.AsyncBase.isFulfilled","promhx/base/AsyncBase.hx",102,0xe6f74d30)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	bool tmp = this->_fulfilled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncBase_obj,isFulfilled,return )

bool AsyncBase_obj::isPending( ){
	HX_STACK_FRAME("promhx.base.AsyncBase","isPending",0x1a78c7cd,"promhx.base.AsyncBase.isPending","promhx/base/AsyncBase.hx",109,0xe6f74d30)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	bool tmp = this->_pending;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncBase_obj,isPending,return )

Void AsyncBase_obj::handleResolve( Dynamic val){
{
		HX_STACK_FRAME("promhx.base.AsyncBase","handleResolve",0x61c8ce64,"promhx.base.AsyncBase.handleResolve","promhx/base/AsyncBase.hx",112,0xe6f74d30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(113)
		Dynamic tmp = val;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		this->_resolve(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,handleResolve,(void))

Void AsyncBase_obj::_resolve( Dynamic val){
{
		HX_STACK_FRAME("promhx.base.AsyncBase","_resolve",0xf035c22d,"promhx.base.AsyncBase._resolve","promhx/base/AsyncBase.hx",118,0xe6f74d30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(118)
		::promhx::base::AsyncBase _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		bool tmp = this->_pending;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		if ((tmp)){
			HX_STACK_LINE(123)
			::List tmp1 = ::promhx::base::EventLoop_obj::queue;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(123)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				Dynamic tmp3 = this->_resolve_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(123)
				Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(123)
				Dynamic a1 = val;		HX_STACK_VAR(a1,"a1");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,a1,Dynamic,f)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","promhx/base/AsyncBase.hx",123,0xe6f74d30)
					{
						HX_STACK_LINE(123)
						Dynamic tmp4 = a1;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(123)
						f(tmp4).Cast< Void >();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(123)
				tmp2 =  Dynamic(new _Function_3_1(a1,f));
			}
			HX_STACK_LINE(123)
			tmp1->add(tmp2);
			HX_STACK_LINE(123)
			::promhx::base::EventLoop_obj::continueOnNextLoop();
		}
		else{
			HX_STACK_LINE(127)
			this->_resolved = true;
			HX_STACK_LINE(131)
			this->_pending = true;
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				::List tmp1 = ::promhx::base::EventLoop_obj::queue;		HX_STACK_VAR(tmp1,"tmp1");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,::promhx::base::AsyncBase,_g,Dynamic,val)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","promhx/base/AsyncBase.hx",134,0xe6f74d30)
					{
						HX_STACK_LINE(135)
						_g->_val = val;
						HX_STACK_LINE(136)
						{
							HX_STACK_LINE(136)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(136)
							cpp::ArrayBase _g2 = _g->_update;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(136)
							while((true)){
								HX_STACK_LINE(136)
								bool tmp2 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
								HX_STACK_LINE(136)
								bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(136)
								if ((tmp3)){
									HX_STACK_LINE(136)
									break;
								}
								HX_STACK_LINE(136)
								Dynamic tmp4 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(136)
								Dynamic up = tmp4;		HX_STACK_VAR(up,"up");
								HX_STACK_LINE(136)
								++(_g1);
								HX_STACK_LINE(140)
								try
								{
								HX_STACK_CATCHABLE(Dynamic, 0);
								{
									HX_STACK_LINE(140)
									Dynamic tmp5 = val;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(140)
									up->__Field(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75"), hx::paccDynamic )(tmp5);
								}
								}
								catch(Dynamic __e){
									{
										HX_STACK_BEGIN_CATCH
										Dynamic e = __e;{
											HX_STACK_LINE(141)
											Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
											HX_STACK_LINE(141)
											up->__Field(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26"), hx::paccDynamic )->__Field(HX_HCSTRING("handleError","\x00","\x77","\x73","\x25"), hx::paccDynamic )(tmp5);
										}
									}
								}
							}
						}
						HX_STACK_LINE(144)
						_g->_fulfilled = true;
						HX_STACK_LINE(145)
						_g->_pending = false;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(134)
				tmp1->add( Dynamic(new _Function_3_1(_g,val)));
				HX_STACK_LINE(134)
				::promhx::base::EventLoop_obj::continueOnNextLoop();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,_resolve,(void))

Void AsyncBase_obj::handleError( Dynamic error){
{
		HX_STACK_FRAME("promhx.base.AsyncBase","handleError",0x14823940,"promhx.base.AsyncBase.handleError","promhx/base/AsyncBase.hx",154,0xe6f74d30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(error,"error")
		HX_STACK_LINE(155)
		Dynamic tmp = error;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		this->_handleError(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,handleError,(void))

Void AsyncBase_obj::_handleError( Dynamic error){
{
		HX_STACK_FRAME("promhx.base.AsyncBase","_handleError",0xc9585ac1,"promhx.base.AsyncBase._handleError","promhx/base/AsyncBase.hx",158,0xe6f74d30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(error,"error")
		HX_STACK_LINE(158)
		::promhx::base::AsyncBase _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::promhx::base::AsyncBase,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","promhx/base/AsyncBase.hx",159,0xe6f74d30)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(160)
				int tmp = _g->_error->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(160)
				bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(160)
				if ((tmp1)){
					HX_STACK_LINE(160)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(160)
					cpp::ArrayBase _g2 = _g->_error;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(160)
					while((true)){
						HX_STACK_LINE(160)
						bool tmp2 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(160)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(160)
						if ((tmp3)){
							HX_STACK_LINE(160)
							break;
						}
						HX_STACK_LINE(160)
						Dynamic tmp4 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(160)
						Dynamic ef = tmp4;		HX_STACK_VAR(ef,"ef");
						HX_STACK_LINE(160)
						++(_g1);
						HX_STACK_LINE(160)
						Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(160)
						ef(tmp5).Cast< Void >();
					}
				}
				else{
					HX_STACK_LINE(161)
					int tmp2 = _g->_update->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(161)
					bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(161)
					if ((tmp3)){
						HX_STACK_LINE(161)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(161)
						cpp::ArrayBase _g2 = _g->_update;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(161)
						while((true)){
							HX_STACK_LINE(161)
							bool tmp4 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(161)
							bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(161)
							if ((tmp5)){
								HX_STACK_LINE(161)
								break;
							}
							HX_STACK_LINE(161)
							Dynamic tmp6 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(161)
							Dynamic up = tmp6;		HX_STACK_VAR(up,"up");
							HX_STACK_LINE(161)
							++(_g1);
							HX_STACK_LINE(161)
							Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(161)
							up->__Field(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26"), hx::paccDynamic )->__Field(HX_HCSTRING("handleError","\x00","\x77","\x73","\x25"), hx::paccDynamic )(tmp7);
						}
					}
					else{
						HX_STACK_LINE(167)
						Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(167)
						HX_STACK_DO_THROW(tmp4);
					}
				}
				HX_STACK_LINE(169)
				_g->_errorPending = false;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(159)
		Dynamic update_errors =  Dynamic(new _Function_1_1(_g));		HX_STACK_VAR(update_errors,"update_errors");
		HX_STACK_LINE(171)
		bool tmp = this->_errorPending;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(171)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		if ((tmp1)){
			HX_STACK_LINE(172)
			this->_errorPending = true;
			HX_STACK_LINE(173)
			this->_errored = true;
			HX_STACK_LINE(174)
			this->_errorVal = error;
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				::List tmp2 = ::promhx::base::EventLoop_obj::queue;		HX_STACK_VAR(tmp2,"tmp2");

				HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_3_1,::promhx::base::AsyncBase,_g,Dynamic,update_errors,Dynamic,error)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","promhx/base/AsyncBase.hx",177,0xe6f74d30)
					{
						HX_STACK_LINE(177)
						bool tmp3 = (_g->_errorMap != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(177)
						if ((tmp3)){
							HX_STACK_LINE(182)
							try
							{
							HX_STACK_CATCHABLE(Dynamic, 0);
							{
								HX_STACK_LINE(182)
								Dynamic tmp4 = error;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(182)
								Dynamic tmp5 = _g->_errorMap(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(182)
								_g->_resolve(tmp5);
							}
							}
							catch(Dynamic __e){
								{
									HX_STACK_BEGIN_CATCH
									Dynamic e = __e;{
										HX_STACK_LINE(183)
										Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
										HX_STACK_LINE(183)
										update_errors(tmp4).Cast< Void >();
									}
								}
							}
						}
						else{
							HX_STACK_LINE(186)
							Dynamic tmp4 = error;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(186)
							update_errors(tmp4).Cast< Void >();
						}
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(176)
				tmp2->add( Dynamic(new _Function_3_1(_g,update_errors,error)));
				HX_STACK_LINE(176)
				::promhx::base::EventLoop_obj::continueOnNextLoop();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,_handleError,(void))

::promhx::base::AsyncBase AsyncBase_obj::then( Dynamic f){
	HX_STACK_FRAME("promhx.base.AsyncBase","then",0x19cb789d,"promhx.base.AsyncBase.then","promhx/base/AsyncBase.hx",196,0xe6f74d30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(197)
	::promhx::base::AsyncBase tmp = ::promhx::base::AsyncBase_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	::promhx::base::AsyncBase ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(198)
	{
		HX_STACK_LINE(198)
		::promhx::base::AsyncBase next = ret;		HX_STACK_VAR(next,"next");
		HX_STACK_LINE(198)
		Dynamic f1 = f;		HX_STACK_VAR(f1,"f1");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &f1,::promhx::base::AsyncBase &next){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/base/AsyncBase.hx",198,0xe6f74d30)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , next,false);

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,f1,::promhx::base::AsyncBase,next)
					int __ArgCount() const { return 1; }
					Void run(Dynamic x){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","promhx/base/AsyncBase.hx",198,0xe6f74d30)
						HX_STACK_ARG(x,"x")
						{
							HX_STACK_LINE(198)
							Dynamic tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(198)
							Dynamic tmp2 = f1(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(198)
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
		HX_STACK_LINE(198)
		Dynamic tmp1 = _Function_2_1::Block(f1,next);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		this->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(198)
		::promhx::base::AsyncBase tmp2 = next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		Dynamic tmp3 = f1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		::promhx::base::AsyncBase_obj::immediateLinkUpdate(hx::ObjectPtr<OBJ_>(this),tmp2,tmp3);
	}
	HX_STACK_LINE(199)
	::promhx::base::AsyncBase tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(199)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,then,return )

Void AsyncBase_obj::unlink( ::promhx::base::AsyncBase to){
{
		HX_STACK_FRAME("promhx.base.AsyncBase","unlink",0x9d708493,"promhx.base.AsyncBase.unlink","promhx/base/AsyncBase.hx",206,0xe6f74d30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(to,"to")
		HX_STACK_LINE(206)
		::promhx::base::AsyncBase _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(207)
		{
			HX_STACK_LINE(207)
			::List tmp = ::promhx::base::EventLoop_obj::queue;		HX_STACK_VAR(tmp,"tmp");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::promhx::base::AsyncBase,_g,::promhx::base::AsyncBase,to)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","promhx/base/AsyncBase.hx",208,0xe6f74d30)
				{

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,::promhx::base::AsyncBase,to)
					int __ArgCount() const { return 1; }
					bool run(Dynamic x){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","promhx/base/AsyncBase.hx",208,0xe6f74d30)
						HX_STACK_ARG(x,"x")
						{
							HX_STACK_LINE(208)
							bool tmp1 = (x->__Field(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26"), hx::paccDynamic ) != to);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(208)
							return tmp1;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(208)
					_g->_update = _g->_update->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic )( Dynamic(new _Function_3_1(to)));
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(207)
			tmp->add( Dynamic(new _Function_2_1(_g,to)));
			HX_STACK_LINE(207)
			::promhx::base::EventLoop_obj::continueOnNextLoop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,unlink,(void))

bool AsyncBase_obj::isLinked( ::promhx::base::AsyncBase to){
	HX_STACK_FRAME("promhx.base.AsyncBase","isLinked",0x942bd423,"promhx.base.AsyncBase.isLinked","promhx/base/AsyncBase.hx",215,0xe6f74d30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(to,"to")
	HX_STACK_LINE(216)
	bool updated = false;		HX_STACK_VAR(updated,"updated");
	HX_STACK_LINE(217)
	{
		HX_STACK_LINE(217)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		cpp::ArrayBase _g1 = this->_update;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(217)
		while((true)){
			HX_STACK_LINE(217)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(217)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(217)
			if ((tmp1)){
				HX_STACK_LINE(217)
				break;
			}
			HX_STACK_LINE(217)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			Dynamic u = tmp2;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(217)
			++(_g);
			HX_STACK_LINE(217)
			bool tmp3 = (u->__Field(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26"), hx::paccDynamic ) == to);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(217)
			if ((tmp3)){
				HX_STACK_LINE(217)
				return true;
			}
		}
	}
	HX_STACK_LINE(218)
	bool tmp = updated;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,isLinked,return )

Void AsyncBase_obj::link( ::promhx::base::AsyncBase current,::promhx::base::AsyncBase next,Dynamic f){
{
		HX_STACK_FRAME("promhx.base.AsyncBase","link",0x14828dba,"promhx.base.AsyncBase.link","promhx/base/AsyncBase.hx",228,0xe6f74d30)
		HX_STACK_ARG(current,"current")
		HX_STACK_ARG(next,"next")
		HX_STACK_ARG(f,"f")
		struct _Function_1_1{
			inline static Dynamic Block( ::promhx::base::AsyncBase &next,Dynamic &f){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/base/AsyncBase.hx",232,0xe6f74d30)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , next,false);

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::promhx::base::AsyncBase,next,Dynamic,f)
					int __ArgCount() const { return 1; }
					Void run(Dynamic x){
						HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","promhx/base/AsyncBase.hx",234,0xe6f74d30)
						HX_STACK_ARG(x,"x")
						{
							HX_STACK_LINE(235)
							Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(235)
							Dynamic tmp1 = f(tmp);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(235)
							next->handleResolve(tmp1);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") ,  Dynamic(new _Function_2_1(next,f)),true);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(232)
		Dynamic tmp = _Function_1_1::Block(next,f);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		current->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(238)
		::promhx::base::AsyncBase tmp1 = current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		::promhx::base::AsyncBase tmp2 = next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		Dynamic tmp3 = f;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		::promhx::base::AsyncBase_obj::immediateLinkUpdate(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AsyncBase_obj,link,(void))

Void AsyncBase_obj::immediateLinkUpdate( ::promhx::base::AsyncBase current,::promhx::base::AsyncBase next,Dynamic f){
{
		HX_STACK_FRAME("promhx.base.AsyncBase","immediateLinkUpdate",0x01641b34,"promhx.base.AsyncBase.immediateLinkUpdate","promhx/base/AsyncBase.hx",243,0xe6f74d30)
		HX_STACK_ARG(current,"current")
		HX_STACK_ARG(next,"next")
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(244)
		bool tmp = current->_errored;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(244)
		if ((tmp1)){
			HX_STACK_LINE(245)
			bool tmp3 = current->_errorPending;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(245)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(245)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(245)
			tmp2 = !(tmp5);
		}
		else{
			HX_STACK_LINE(244)
			tmp2 = false;
		}
		HX_STACK_LINE(244)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(244)
		if ((tmp2)){
			HX_STACK_LINE(246)
			int tmp4 = current->_error->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(246)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(246)
			bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(246)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(246)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(246)
			tmp3 = !(tmp8);
		}
		else{
			HX_STACK_LINE(244)
			tmp3 = false;
		}
		HX_STACK_LINE(244)
		if ((tmp3)){
			HX_STACK_LINE(247)
			Dynamic tmp4 = current->_errorVal;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(247)
			next->handleError(tmp4);
		}
		HX_STACK_LINE(250)
		bool tmp4 = current->_resolved;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(250)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(250)
		if ((tmp4)){
			HX_STACK_LINE(250)
			bool tmp6 = current->_pending;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(250)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(250)
			tmp5 = !(tmp7);
		}
		else{
			HX_STACK_LINE(250)
			tmp5 = false;
		}
		HX_STACK_LINE(250)
		if ((tmp5)){
			HX_STACK_LINE(255)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(255)
				Dynamic tmp6 = current->_val;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(255)
				Dynamic tmp7 = f(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(255)
				next->handleResolve(tmp7);
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(256)
						Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(256)
						next->handleError(tmp6);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AsyncBase_obj,immediateLinkUpdate,(void))

Void AsyncBase_obj::linkAll( Dynamic all,::promhx::base::AsyncBase next){
{
		HX_STACK_FRAME("promhx.base.AsyncBase","linkAll",0xd6f6f387,"promhx.base.AsyncBase.linkAll","promhx/base/AsyncBase.hx",264,0xe6f74d30)
		HX_STACK_ARG(all,"all")
		HX_STACK_ARG(next,"next")

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::promhx::base::AsyncBase,next,Dynamic,all)
		int __ArgCount() const { return 3; }
		Void run(Array< ::Dynamic > arr,::promhx::base::AsyncBase current,Dynamic v){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","promhx/base/AsyncBase.hx",269,0xe6f74d30)
			HX_STACK_ARG(arr,"arr")
			HX_STACK_ARG(current,"current")
			HX_STACK_ARG(v,"v")
			{
				HX_STACK_LINE(270)
				bool tmp = (arr->length == (int)0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(270)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(270)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(270)
				if ((tmp1)){
					HX_STACK_LINE(270)
					tmp2 = ::promhx::base::AsyncBase_obj::allFulfilled(arr);
				}
				else{
					HX_STACK_LINE(270)
					tmp2 = true;
				}
				HX_STACK_LINE(270)
				if ((tmp2)){
					HX_STACK_LINE(271)
					cpp::ArrayBase vals;		HX_STACK_VAR(vals,"vals");
					HX_STACK_LINE(271)
					{
						HX_STACK_LINE(271)
						cpp::ArrayBase _g = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(271)
						Dynamic tmp3 = all->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(271)
						for(::cpp::FastIterator_obj< ::promhx::base::AsyncBase > *__it = ::cpp::CreateFastIterator< ::promhx::base::AsyncBase >(tmp3);  __it->hasNext(); ){
							::promhx::base::AsyncBase a = __it->next();
							{
								HX_STACK_LINE(271)
								bool tmp4 = (a == current);		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(271)
								Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(271)
								if ((tmp4)){
									HX_STACK_LINE(271)
									tmp5 = v;
								}
								else{
									HX_STACK_LINE(271)
									tmp5 = a->_val;
								}
								HX_STACK_LINE(271)
								_g->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
							}
;
						}
						HX_STACK_LINE(271)
						vals = _g;
					}
					HX_STACK_LINE(272)
					next->handleResolve(vals);
				}
				HX_STACK_LINE(274)
				Dynamic();
				HX_STACK_LINE(274)
				return null();
			}
			return null();
		}
		HX_END_LOCAL_FUNC3((void))

		HX_STACK_LINE(269)
		Dynamic cthen =  Dynamic(new _Function_1_1(next,all));		HX_STACK_VAR(cthen,"cthen");
		HX_STACK_LINE(276)
		Dynamic tmp = all->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(276)
		for(::cpp::FastIterator_obj< ::promhx::base::AsyncBase > *__it = ::cpp::CreateFastIterator< ::promhx::base::AsyncBase >(tmp);  __it->hasNext(); ){
			::promhx::base::AsyncBase a = __it->next();
			{
				HX_STACK_LINE(278)
				::promhx::base::AsyncBase tmp1 = next;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(279)
				Dynamic tmp2 = cthen;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(279)
				::promhx::base::AsyncBase tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(279)
				Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					Dynamic f = tmp2;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(279)
					Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(279)
						Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(279)
						Dynamic tmp5 = all->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(279)
						for(::cpp::FastIterator_obj< ::promhx::base::AsyncBase > *__it = ::cpp::CreateFastIterator< ::promhx::base::AsyncBase >(tmp5);  __it->hasNext(); ){
							::promhx::base::AsyncBase a2 = __it->next();
							{
								HX_STACK_LINE(279)
								bool tmp6 = (a2 != a);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(279)
								if ((tmp6)){
									HX_STACK_LINE(279)
									::promhx::base::AsyncBase tmp7 = a2;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(279)
									_g->push(tmp7);
								}
							}
;
						}
						HX_STACK_LINE(279)
						a1 = _g;
					}
					HX_STACK_LINE(279)
					::promhx::base::AsyncBase a2 = tmp3;		HX_STACK_VAR(a2,"a2");

					HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,a1,Dynamic,f,::promhx::base::AsyncBase,a2)
					int __ArgCount() const { return 1; }
					Void run(Dynamic v){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","promhx/base/AsyncBase.hx",279,0xe6f74d30)
						HX_STACK_ARG(v,"v")
						{
							HX_STACK_LINE(279)
							::promhx::base::AsyncBase tmp5 = a2;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(279)
							Dynamic tmp6 = v;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(279)
							f(a1,tmp5,tmp6).Cast< Void >();
							HX_STACK_LINE(279)
							return null();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(279)
					tmp4 =  Dynamic(new _Function_3_1(a1,f,a2));
				}
				struct _Function_2_1{
					inline static Dynamic Block( Dynamic &tmp4,::promhx::base::AsyncBase &tmp1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/base/AsyncBase.hx",277,0xe6f74d30)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , tmp1,false);
							__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") , tmp4,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(277)
				Dynamic tmp5 = _Function_2_1::Block(tmp4,tmp1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(277)
				a->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
			}
;
		}
		HX_STACK_LINE(283)
		Dynamic tmp1 = all;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		bool tmp2 = ::promhx::base::AsyncBase_obj::allFulfilled(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(283)
		if ((tmp2)){
			struct _Function_2_1{
				inline static cpp::ArrayBase Block( Dynamic &all){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/base/AsyncBase.hx",284,0xe6f74d30)
					{
						HX_STACK_LINE(284)
						cpp::ArrayBase _g = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(284)
						Dynamic tmp3 = all->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(284)
						for(::cpp::FastIterator_obj< ::promhx::base::AsyncBase > *__it = ::cpp::CreateFastIterator< ::promhx::base::AsyncBase >(tmp3);  __it->hasNext(); ){
							::promhx::base::AsyncBase a = __it->next();
							{
								HX_STACK_LINE(284)
								Dynamic tmp4 = a->_val;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(284)
								_g->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
							}
;
						}
						HX_STACK_LINE(284)
						return _g;
					}
					return null();
				}
			};
			HX_STACK_LINE(284)
			next->handleResolve(_Function_2_1::Block(all));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AsyncBase_obj,linkAll,(void))

Void AsyncBase_obj::pipeLink( ::promhx::base::AsyncBase current,::promhx::base::AsyncBase ret,Dynamic f){
{
		HX_STACK_FRAME("promhx.base.AsyncBase","pipeLink",0x857a3d08,"promhx.base.AsyncBase.pipeLink","promhx/base/AsyncBase.hx",294,0xe6f74d30)
		HX_STACK_ARG(current,"current")
		HX_STACK_ARG(ret,"ret")
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(295)
		Array< bool > linked = Array_obj< bool >::__new().Add(false);		HX_STACK_VAR(linked,"linked");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Array< bool >,linked,::promhx::base::AsyncBase,ret,Dynamic,f)
		int __ArgCount() const { return 1; }
		Void run(Dynamic x){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","promhx/base/AsyncBase.hx",296,0xe6f74d30)
			HX_STACK_ARG(x,"x")
			{
				HX_STACK_LINE(297)
				bool tmp = linked->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(297)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(297)
				if ((tmp1)){
					HX_STACK_LINE(298)
					linked[(int)0] = true;
					HX_STACK_LINE(299)
					Dynamic tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(299)
					::promhx::base::AsyncBase tmp3 = f(tmp2).Cast< ::promhx::base::AsyncBase >();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(299)
					::promhx::base::AsyncBase pipe_ret = tmp3;		HX_STACK_VAR(pipe_ret,"pipe_ret");
					struct _Function_3_1{
						inline static Dynamic Block( ::promhx::base::AsyncBase &ret){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/base/AsyncBase.hx",300,0xe6f74d30)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , ret,false);
								__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") , ret->handleResolve_dyn(),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(300)
					Dynamic tmp4 = _Function_3_1::Block(ret);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(300)
					pipe_ret->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
					HX_STACK_LINE(304)
					::promhx::base::AsyncBase tmp5 = pipe_ret;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(304)
					::promhx::base::AsyncBase tmp6 = ret;		HX_STACK_VAR(tmp6,"tmp6");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
					int __ArgCount() const { return 1; }
					Dynamic run(Dynamic x1){
						HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","promhx/base/AsyncBase.hx",304,0xe6f74d30)
						HX_STACK_ARG(x1,"x1")
						{
							HX_STACK_LINE(304)
							Dynamic tmp7 = x1;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(304)
							return tmp7;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(304)
					::promhx::base::AsyncBase_obj::immediateLinkUpdate(tmp5,tmp6, Dynamic(new _Function_3_2()));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(296)
		Dynamic linkf =  Dynamic(new _Function_1_1(linked,ret,f));		HX_STACK_VAR(linkf,"linkf");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &linkf,::promhx::base::AsyncBase &ret){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","promhx/base/AsyncBase.hx",308,0xe6f74d30)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26") , ret,false);
					__result->Add(HX_HCSTRING("linkf","\x2c","\xe3","\x01","\x75") , linkf,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(308)
		Dynamic tmp = _Function_1_2::Block(linkf,ret);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		current->_update->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(313)
		bool tmp1 = current->_resolved;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(313)
		if ((tmp1)){
			HX_STACK_LINE(313)
			bool tmp3 = current->_pending;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(313)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(313)
			tmp2 = !(tmp4);
		}
		else{
			HX_STACK_LINE(313)
			tmp2 = false;
		}
		HX_STACK_LINE(313)
		if ((tmp2)){
			HX_STACK_LINE(317)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(317)
				Dynamic tmp3 = current->_val;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(317)
				linkf(tmp3).Cast< Void >();
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(318)
						Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(318)
						ret->handleError(tmp3);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AsyncBase_obj,pipeLink,(void))

bool AsyncBase_obj::allResolved( Dynamic as){
	HX_STACK_FRAME("promhx.base.AsyncBase","allResolved",0xc6fa7c79,"promhx.base.AsyncBase.allResolved","promhx/base/AsyncBase.hx",328,0xe6f74d30)
	HX_STACK_ARG(as,"as")
	HX_STACK_LINE(329)
	Dynamic tmp = as->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	for(::cpp::FastIterator_obj< ::promhx::base::AsyncBase > *__it = ::cpp::CreateFastIterator< ::promhx::base::AsyncBase >(tmp);  __it->hasNext(); ){
		::promhx::base::AsyncBase a = __it->next();
		{
			HX_STACK_LINE(330)
			bool tmp1 = a->_resolved;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(330)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(330)
			if ((tmp2)){
				HX_STACK_LINE(330)
				return false;
			}
		}
;
	}
	HX_STACK_LINE(332)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,allResolved,return )

bool AsyncBase_obj::allFulfilled( Dynamic as){
	HX_STACK_FRAME("promhx.base.AsyncBase","allFulfilled",0x86f195fe,"promhx.base.AsyncBase.allFulfilled","promhx/base/AsyncBase.hx",341,0xe6f74d30)
	HX_STACK_ARG(as,"as")
	HX_STACK_LINE(342)
	Dynamic tmp = as->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(342)
	for(::cpp::FastIterator_obj< ::promhx::base::AsyncBase > *__it = ::cpp::CreateFastIterator< ::promhx::base::AsyncBase >(tmp);  __it->hasNext(); ){
		::promhx::base::AsyncBase a = __it->next();
		{
			HX_STACK_LINE(343)
			bool tmp1 = a->_fulfilled;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(343)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(343)
			if ((tmp2)){
				HX_STACK_LINE(343)
				return false;
			}
		}
;
	}
	HX_STACK_LINE(345)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AsyncBase_obj,allFulfilled,return )


AsyncBase_obj::AsyncBase_obj()
{
}

void AsyncBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AsyncBase);
	HX_MARK_MEMBER_NAME(_val,"_val");
	HX_MARK_MEMBER_NAME(_resolved,"_resolved");
	HX_MARK_MEMBER_NAME(_fulfilled,"_fulfilled");
	HX_MARK_MEMBER_NAME(_pending,"_pending");
	HX_MARK_MEMBER_NAME(_update,"_update");
	HX_MARK_MEMBER_NAME(_error,"_error");
	HX_MARK_MEMBER_NAME(_errored,"_errored");
	HX_MARK_MEMBER_NAME(_errorMap,"_errorMap");
	HX_MARK_MEMBER_NAME(_errorVal,"_errorVal");
	HX_MARK_MEMBER_NAME(_errorPending,"_errorPending");
	HX_MARK_END_CLASS();
}

void AsyncBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_val,"_val");
	HX_VISIT_MEMBER_NAME(_resolved,"_resolved");
	HX_VISIT_MEMBER_NAME(_fulfilled,"_fulfilled");
	HX_VISIT_MEMBER_NAME(_pending,"_pending");
	HX_VISIT_MEMBER_NAME(_update,"_update");
	HX_VISIT_MEMBER_NAME(_error,"_error");
	HX_VISIT_MEMBER_NAME(_errored,"_errored");
	HX_VISIT_MEMBER_NAME(_errorMap,"_errorMap");
	HX_VISIT_MEMBER_NAME(_errorVal,"_errorVal");
	HX_VISIT_MEMBER_NAME(_errorPending,"_errorPending");
}

Dynamic AsyncBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_val") ) { return _val; }
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_error") ) { return _error; }
		if (HX_FIELD_EQ(inName,"unlink") ) { return unlink_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_update") ) { return _update; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_pending") ) { return _pending; }
		if (HX_FIELD_EQ(inName,"_errored") ) { return _errored; }
		if (HX_FIELD_EQ(inName,"_resolve") ) { return _resolve_dyn(); }
		if (HX_FIELD_EQ(inName,"isLinked") ) { return isLinked_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_resolved") ) { return _resolved; }
		if (HX_FIELD_EQ(inName,"_errorMap") ) { return _errorMap; }
		if (HX_FIELD_EQ(inName,"_errorVal") ) { return _errorVal; }
		if (HX_FIELD_EQ(inName,"errorThen") ) { return errorThen_dyn(); }
		if (HX_FIELD_EQ(inName,"isErrored") ) { return isErrored_dyn(); }
		if (HX_FIELD_EQ(inName,"isPending") ) { return isPending_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fulfilled") ) { return _fulfilled; }
		if (HX_FIELD_EQ(inName,"catchError") ) { return catchError_dyn(); }
		if (HX_FIELD_EQ(inName,"isResolved") ) { return isResolved_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isFulfilled") ) { return isFulfilled_dyn(); }
		if (HX_FIELD_EQ(inName,"handleError") ) { return handleError_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_handleError") ) { return _handleError_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_errorPending") ) { return _errorPending; }
		if (HX_FIELD_EQ(inName,"handleResolve") ) { return handleResolve_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isErrorHandled") ) { return isErrorHandled_dyn(); }
		if (HX_FIELD_EQ(inName,"isErrorPending") ) { return isErrorPending_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool AsyncBase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"link") ) { outValue = link_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"linkAll") ) { outValue = linkAll_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pipeLink") ) { outValue = pipeLink_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allResolved") ) { outValue = allResolved_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allFulfilled") ) { outValue = allFulfilled_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"immediateLinkUpdate") ) { outValue = immediateLinkUpdate_dyn(); return true;  }
	}
	return false;
}

Dynamic AsyncBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_val") ) { _val=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_error") ) { _error=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_update") ) { _update=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_pending") ) { _pending=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_errored") ) { _errored=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_resolved") ) { _resolved=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_errorMap") ) { _errorMap=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_errorVal") ) { _errorVal=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fulfilled") ) { _fulfilled=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_errorPending") ) { _errorPending=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AsyncBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_val","\xe2","\x23","\x25","\x3f"));
	outFields->push(HX_HCSTRING("_resolved","\x57","\x73","\x46","\x54"));
	outFields->push(HX_HCSTRING("_fulfilled","\x60","\xa1","\x1d","\x9c"));
	outFields->push(HX_HCSTRING("_pending","\xd8","\xf1","\xa4","\x65"));
	outFields->push(HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5"));
	outFields->push(HX_HCSTRING("_error","\x09","\x13","\x11","\x6f"));
	outFields->push(HX_HCSTRING("_errored","\xa8","\xff","\xc2","\x23"));
	outFields->push(HX_HCSTRING("_errorVal","\x58","\x4f","\xd1","\x26"));
	outFields->push(HX_HCSTRING("_errorPending","\x4e","\x10","\x8b","\xbf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncBase_obj,_val),HX_HCSTRING("_val","\xe2","\x23","\x25","\x3f")},
	{hx::fsBool,(int)offsetof(AsyncBase_obj,_resolved),HX_HCSTRING("_resolved","\x57","\x73","\x46","\x54")},
	{hx::fsBool,(int)offsetof(AsyncBase_obj,_fulfilled),HX_HCSTRING("_fulfilled","\x60","\xa1","\x1d","\x9c")},
	{hx::fsBool,(int)offsetof(AsyncBase_obj,_pending),HX_HCSTRING("_pending","\xd8","\xf1","\xa4","\x65")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(AsyncBase_obj,_update),HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(AsyncBase_obj,_error),HX_HCSTRING("_error","\x09","\x13","\x11","\x6f")},
	{hx::fsBool,(int)offsetof(AsyncBase_obj,_errored),HX_HCSTRING("_errored","\xa8","\xff","\xc2","\x23")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncBase_obj,_errorMap),HX_HCSTRING("_errorMap","\x13","\x7b","\xca","\x26")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncBase_obj,_errorVal),HX_HCSTRING("_errorVal","\x58","\x4f","\xd1","\x26")},
	{hx::fsBool,(int)offsetof(AsyncBase_obj,_errorPending),HX_HCSTRING("_errorPending","\x4e","\x10","\x8b","\xbf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_val","\xe2","\x23","\x25","\x3f"),
	HX_HCSTRING("_resolved","\x57","\x73","\x46","\x54"),
	HX_HCSTRING("_fulfilled","\x60","\xa1","\x1d","\x9c"),
	HX_HCSTRING("_pending","\xd8","\xf1","\xa4","\x65"),
	HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5"),
	HX_HCSTRING("_error","\x09","\x13","\x11","\x6f"),
	HX_HCSTRING("_errored","\xa8","\xff","\xc2","\x23"),
	HX_HCSTRING("_errorMap","\x13","\x7b","\xca","\x26"),
	HX_HCSTRING("_errorVal","\x58","\x4f","\xd1","\x26"),
	HX_HCSTRING("_errorPending","\x4e","\x10","\x8b","\xbf"),
	HX_HCSTRING("catchError","\x8d","\x89","\x62","\xe5"),
	HX_HCSTRING("errorThen","\xc5","\x7e","\x64","\x73"),
	HX_HCSTRING("isResolved","\x02","\x8e","\x5f","\x87"),
	HX_HCSTRING("isErrored","\x5d","\x23","\x09","\xee"),
	HX_HCSTRING("isErrorHandled","\xde","\x73","\xa7","\xed"),
	HX_HCSTRING("isErrorPending","\x79","\x5c","\xbe","\xd3"),
	HX_HCSTRING("isFulfilled","\x55","\xdc","\xfb","\x1e"),
	HX_HCSTRING("isPending","\x8d","\x15","\xeb","\x2f"),
	HX_HCSTRING("handleResolve","\x24","\xfc","\xd4","\x7f"),
	HX_HCSTRING("_resolve","\x6d","\x6c","\x18","\xa1"),
	HX_HCSTRING("handleError","\x00","\x77","\x73","\x25"),
	HX_HCSTRING("_handleError","\x01","\x25","\x7d","\x8b"),
	HX_HCSTRING("then","\xdd","\x02","\xfc","\x4c"),
	HX_HCSTRING("unlink","\xd3","\x1e","\x88","\x65"),
	HX_HCSTRING("isLinked","\x63","\x7e","\x0e","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AsyncBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AsyncBase_obj::__mClass,"__mClass");
};

#endif

hx::Class AsyncBase_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("link","\xfa","\x17","\xb3","\x47"),
	HX_HCSTRING("immediateLinkUpdate","\xf4","\x18","\x69","\xa6"),
	HX_HCSTRING("linkAll","\x47","\x51","\x86","\x23"),
	HX_HCSTRING("pipeLink","\x48","\xe7","\x5c","\x36"),
	HX_HCSTRING("allResolved","\x39","\xba","\xeb","\xd7"),
	HX_HCSTRING("allFulfilled","\x3e","\x60","\x16","\x49"),
	::String(null()) };

void AsyncBase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("promhx.base.AsyncBase","\xae","\xc2","\xb8","\xa2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AsyncBase_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AsyncBase_obj >;
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
} // end namespace base
