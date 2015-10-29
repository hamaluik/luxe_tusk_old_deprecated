#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_rtti_Meta
#include <haxe/rtti/Meta.h>
#endif
#ifndef INCLUDED_haxe_web_Dispatch
#include <haxe/web/Dispatch.h>
#endif
#ifndef INCLUDED_haxe_web_DispatchError
#include <haxe/web/DispatchError.h>
#endif
#ifndef INCLUDED_haxe_web_DispatchRule
#include <haxe/web/DispatchRule.h>
#endif
#ifndef INCLUDED_haxe_web_MatchRule
#include <haxe/web/MatchRule.h>
#endif
#ifndef INCLUDED_haxe_web_Redirect
#include <haxe/web/Redirect.h>
#endif
namespace haxe{
namespace web{

Void Dispatch_obj::__construct(::String url,::haxe::ds::StringMap params)
{
HX_STACK_FRAME("haxe.web.Dispatch","new",0xa574ba2e,"haxe.web.Dispatch.new","C:\\HaxeToolkit\\haxe\\std/haxe/web/Dispatch.hx",77,0x23767a19)
HX_STACK_THIS(this)
HX_STACK_ARG(url,"url")
HX_STACK_ARG(params,"params")
{
	HX_STACK_LINE(78)
	this->parts = url.split(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
	HX_STACK_LINE(79)
	::String tmp = this->parts->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	bool tmp1 = (tmp == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	if ((tmp1)){
		HX_STACK_LINE(79)
		this->parts->shift();
	}
	HX_STACK_LINE(80)
	this->params = params;
}
;
	return null();
}

//Dispatch_obj::~Dispatch_obj() { }

Dynamic Dispatch_obj::__CreateEmpty() { return  new Dispatch_obj; }
hx::ObjectPtr< Dispatch_obj > Dispatch_obj::__new(::String url,::haxe::ds::StringMap params)
{  hx::ObjectPtr< Dispatch_obj > _result_ = new Dispatch_obj();
	_result_->__construct(url,params);
	return _result_;}

Dynamic Dispatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Dispatch_obj > _result_ = new Dispatch_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

HX_BEGIN_DEFAULT_FUNC(__default_onMeta,Dispatch_obj)
Void run(::String v,cpp::ArrayBase args){
{
		HX_STACK_FRAME("haxe.web.Dispatch","onMeta",0xc4a3fe76,"haxe.web.Dispatch.onMeta","C:\\HaxeToolkit\\haxe\\std/haxe/web/Dispatch.hx",103,0x23767a19)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(args,"args")
	}
return null();
}
HX_END_LOCAL_FUNC2((void))
HX_END_DEFAULT_FUNC

::String Dispatch_obj::resolveName( ::String name){
	HX_STACK_FRAME("haxe.web.Dispatch","resolveName",0x202eff25,"haxe.web.Dispatch.resolveName","C:\\HaxeToolkit\\haxe\\std/haxe/web/Dispatch.hx",106,0x23767a19)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(107)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Dispatch_obj,resolveName,return )

Void Dispatch_obj::runtimeDispatch( Dynamic cfg){
{
		HX_STACK_FRAME("haxe.web.Dispatch","runtimeDispatch",0x293a3e80,"haxe.web.Dispatch.runtimeDispatch","C:\\HaxeToolkit\\haxe\\std/haxe/web/Dispatch.hx",110,0x23767a19)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cfg,"cfg")
		HX_STACK_LINE(111)
		::String tmp = this->parts->shift();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		this->name = tmp;
		HX_STACK_LINE(112)
		::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		if ((tmp2)){
			HX_STACK_LINE(113)
			this->name = HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b");
		}
		HX_STACK_LINE(114)
		::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		::String tmp4 = this->resolveName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(114)
		this->name = tmp4;
		HX_STACK_LINE(115)
		this->cfg = cfg;
		HX_STACK_LINE(116)
		Dynamic tmp5 = cfg->__Field(HX_HCSTRING("rules","\xf7","\x63","\x56","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		::String tmp6 = this->name;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(116)
		Dynamic tmp7 = ::Reflect_obj::field(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(116)
		::haxe::web::DispatchRule r = tmp7;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(117)
		bool tmp8 = (r == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		if ((tmp8)){
			HX_STACK_LINE(118)
			Dynamic tmp9 = cfg->__Field(HX_HCSTRING("rules","\xf7","\x63","\x56","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(118)
			Dynamic tmp10 = ::Reflect_obj::field(tmp9,HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(118)
			r = tmp10;
			HX_STACK_LINE(119)
			bool tmp11 = (r == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(119)
			if ((tmp11)){
				HX_STACK_LINE(120)
				::String tmp12 = this->name;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(120)
				::haxe::web::DispatchError tmp13 = ::haxe::web::DispatchError_obj::DENotFound(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(120)
				HX_STACK_DO_THROW(tmp13);
			}
			HX_STACK_LINE(121)
			::String tmp12 = this->name;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(121)
			this->parts->unshift(tmp12);
			HX_STACK_LINE(122)
			this->name = HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b");
		}
		HX_STACK_LINE(124)
		::String tmp9 = this->name;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(124)
		::String tmp10 = tmp9.charAt((int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(124)
		::String tmp11 = tmp10.toUpperCase();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(124)
		::String tmp12 = (HX_HCSTRING("do","\x8b","\x57","\x00","\x00") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(124)
		::String tmp13 = this->name;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(124)
		::String tmp14 = tmp13.substr((int)1,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(124)
		::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(124)
		this->name = tmp15;
		HX_STACK_LINE(125)
		cpp::ArrayBase args = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(126)
		this->subDispatch = false;
		HX_STACK_LINE(127)
		::haxe::web::DispatchRule tmp16 = r;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(127)
		this->loop(args,tmp16);
		HX_STACK_LINE(128)
		int tmp17 = this->parts->length;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(128)
		bool tmp18 = (tmp17 > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(128)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(128)
		if ((tmp18)){
			HX_STACK_LINE(128)
			bool tmp20 = this->subDispatch;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(128)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(128)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(128)
			tmp19 = !(tmp22);
		}
		else{
			HX_STACK_LINE(128)
			tmp19 = false;
		}
		HX_STACK_LINE(128)
		if ((tmp19)){
			HX_STACK_LINE(129)
			int tmp20 = this->parts->length;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(129)
			bool tmp21 = (tmp20 == (int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(129)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(129)
			if ((tmp21)){
				HX_STACK_LINE(129)
				int tmp23 = this->parts->length;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(129)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(129)
				int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(129)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(129)
				::String tmp27 = this->parts->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(129)
				::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(129)
				tmp22 = (tmp28 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(129)
				tmp22 = false;
			}
			HX_STACK_LINE(129)
			if ((tmp22)){
				HX_STACK_LINE(129)
				this->parts->pop();
			}
			else{
				HX_STACK_LINE(129)
				HX_STACK_DO_THROW(::haxe::web::DispatchError_obj::DETooManyValues);
			}
		}
		HX_STACK_LINE(131)
		try
		{
		HX_STACK_CATCHABLE(::haxe::web::Redirect, 0);
		{
			HX_STACK_LINE(132)
			Dynamic tmp20 = cfg->__Field(HX_HCSTRING("obj","\xf7","\x8f","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(132)
			Dynamic tmp21 = cfg->__Field(HX_HCSTRING("obj","\xf7","\x8f","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(132)
			::String tmp22 = this->name;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(132)
			Dynamic tmp23 = ::Reflect_obj::field(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(132)
			::Reflect_obj::callMethod(tmp20,tmp23,args);
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::haxe::web::Redirect >() ){
				HX_STACK_BEGIN_CATCH
				::haxe::web::Redirect e = __e;{
					HX_STACK_LINE(134)
					Dynamic tmp20 = cfg;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(134)
					this->runtimeDispatch(tmp20);
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Dispatch_obj,runtimeDispatch,(void))

Void Dispatch_obj::redirect( ::String url,::haxe::ds::StringMap params){
{
		HX_STACK_FRAME("haxe.web.Dispatch","redirect",0xe84fc28e,"haxe.web.Dispatch.redirect","C:\\HaxeToolkit\\haxe\\std/haxe/web/Dispatch.hx",138,0x23767a19)
		HX_STACK_THIS(this)
		HX_STACK_ARG(url,"url")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(139)
		this->parts = url.split(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
		HX_STACK_LINE(140)
		::String tmp = this->parts->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		bool tmp1 = (tmp == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		if ((tmp1)){
			HX_STACK_LINE(140)
			this->parts->shift();
		}
		HX_STACK_LINE(141)
		bool tmp2 = (params != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		if ((tmp2)){
			HX_STACK_LINE(141)
			this->params = params;
		}
		HX_STACK_LINE(142)
		::haxe::web::Redirect tmp3 = ::haxe::web::Redirect_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		HX_STACK_DO_THROW(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Dispatch_obj,redirect,(void))

Dynamic Dispatch_obj::runtimeGetParams( int cfgIndex){
	HX_STACK_FRAME("haxe.web.Dispatch","runtimeGetParams",0xda9ce1f6,"haxe.web.Dispatch.runtimeGetParams","C:\\HaxeToolkit\\haxe\\std/haxe/web/Dispatch.hx",146,0x23767a19)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cfgIndex,"cfgIndex")
	HX_STACK_LINE(147)
	bool tmp = (::haxe::web::Dispatch_obj::GET_RULES == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	if ((tmp)){
		HX_STACK_LINE(148)
		Dynamic tmp1 = ::haxe::rtti::Meta_obj::getType(hx::ClassOf< ::haxe::web::Dispatch >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("getParams","\x7c","\x84","\xd1","\x69"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		Dynamic tmp3 = ::haxe::Unserializer_obj::run(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		::haxe::web::Dispatch_obj::GET_RULES = tmp3;
	}
	HX_STACK_LINE(149)
	Dynamic tmp1 = this->checkParams(::haxe::web::Dispatch_obj::GET_RULES->__get(cfgIndex).StaticCast< cpp::ArrayBase >(),true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Dispatch_obj,runtimeGetParams,return )

Dynamic Dispatch_obj::match( ::String v,::haxe::web::MatchRule r,bool opt){
	HX_STACK_FRAME("haxe.web.Dispatch","match",0xe1acc293,"haxe.web.Dispatch.match","C:\\HaxeToolkit\\haxe\\std/haxe/web/Dispatch.hx",153,0x23767a19)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(opt,"opt")
	HX_STACK_LINE(153)
	switch( (int)(r->__Index())){
		case (int)0: {
			HX_STACK_LINE(155)
			bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(155)
			if ((tmp)){
				HX_STACK_LINE(155)
				HX_STACK_DO_THROW(::haxe::web::DispatchError_obj::DEMissing);
			}
			HX_STACK_LINE(156)
			bool tmp1 = opt;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(156)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(156)
			if ((tmp1)){
				HX_STACK_LINE(156)
				tmp2 = (v == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(156)
				tmp2 = false;
			}
			HX_STACK_LINE(156)
			if ((tmp2)){
				HX_STACK_LINE(156)
				return null();
			}
			HX_STACK_LINE(157)
			::String tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(157)
			Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(157)
			Dynamic v1 = tmp4;		HX_STACK_VAR(v1,"v1");
			HX_STACK_LINE(158)
			bool tmp5 = (v1 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(158)
			if ((tmp5)){
				HX_STACK_LINE(158)
				HX_STACK_DO_THROW(::haxe::web::DispatchError_obj::DEInvalidValue);
			}
			HX_STACK_LINE(159)
			Dynamic tmp6 = v1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(159)
			return tmp6;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(161)
			bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(161)
			if ((tmp)){
				HX_STACK_LINE(161)
				HX_STACK_DO_THROW(::haxe::web::DispatchError_obj::DEMissing);
			}
			HX_STACK_LINE(162)
			bool tmp1 = opt;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(162)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(162)
			if ((tmp1)){
				HX_STACK_LINE(162)
				tmp2 = (v == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(162)
				tmp2 = false;
			}
			HX_STACK_LINE(162)
			if ((tmp2)){
				HX_STACK_LINE(162)
				return null();
			}
			HX_STACK_LINE(163)
			::String tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(163)
			Float tmp4 = ::Std_obj::parseFloat(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(163)
			Float v1 = tmp4;		HX_STACK_VAR(v1,"v1");
			HX_STACK_LINE(164)
			Float tmp5 = v1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			bool tmp6 = ::Math_obj::isNaN(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(164)
			if ((tmp6)){
				HX_STACK_LINE(164)
				HX_STACK_DO_THROW(::haxe::web::DispatchError_obj::DEInvalidValue);
			}
			HX_STACK_LINE(165)
			Float tmp7 = v1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(165)
			return tmp7;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(167)
			bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(167)
			if ((tmp)){
				HX_STACK_LINE(167)
				HX_STACK_DO_THROW(::haxe::web::DispatchError_obj::DEMissing);
			}
			HX_STACK_LINE(168)
			::String tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(168)
			return tmp1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(170)
			bool tmp = (v != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(170)
			bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(170)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(170)
			if ((tmp1)){
				HX_STACK_LINE(170)
				tmp2 = (v != HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(170)
				tmp2 = false;
			}
			HX_STACK_LINE(170)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			if ((tmp3)){
				HX_STACK_LINE(170)
				tmp4 = (v != HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb"));
			}
			else{
				HX_STACK_LINE(170)
				tmp4 = false;
			}
			HX_STACK_LINE(170)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(170)
			if ((tmp4)){
				HX_STACK_LINE(170)
				tmp5 = (v != HX_HCSTRING("null","\x87","\x9e","\x0e","\x49"));
			}
			else{
				HX_STACK_LINE(170)
				tmp5 = false;
			}
			HX_STACK_LINE(170)
			return tmp5;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(172)
			bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(172)
			if ((tmp)){
				HX_STACK_LINE(172)
				HX_STACK_DO_THROW(::haxe::web::DispatchError_obj::DEMissing);
			}
			HX_STACK_LINE(173)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(174)
				::String tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(174)
				::Date tmp2 = ::Date_obj::fromString(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(174)
				return tmp2;
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(::haxe::web::DispatchError_obj::DEInvalidValue);
					}
				}
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(153)
			::String tmp = (::haxe::web::MatchRule(r))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(153)
			::String e = tmp;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(178)
			{
				HX_STACK_LINE(179)
				bool tmp1 = (v == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(179)
				if ((tmp1)){
					HX_STACK_LINE(179)
					HX_STACK_DO_THROW(::haxe::web::DispatchError_obj::DEMissing);
				}
				HX_STACK_LINE(180)
				bool tmp2 = opt;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(180)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(180)
				if ((tmp2)){
					HX_STACK_LINE(180)
					tmp3 = (v == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(180)
					tmp3 = false;
				}
				HX_STACK_LINE(180)
				if ((tmp3)){
					HX_STACK_LINE(180)
					return null();
				}
				HX_STACK_LINE(181)
				bool tmp4 = (v == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(181)
				if ((tmp4)){
					HX_STACK_LINE(181)
					HX_STACK_DO_THROW(::haxe::web::DispatchError_obj::DEMissing);
				}
				HX_STACK_LINE(182)
				::String tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(182)
				::Enum tmp6 = ::Type_obj::resolveEnum(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(182)
				Dynamic en = tmp6;		HX_STACK_VAR(en,"en");
				HX_STACK_LINE(183)
				bool tmp7 = (en == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(183)
				if ((tmp7)){
					HX_STACK_LINE(183)
					HX_STACK_DO_THROW(HX_HCSTRING("assert","\xc6","\x46","\x03","\x4c"));
				}
				HX_STACK_LINE(184)
				Dynamic ev;		HX_STACK_VAR(ev,"ev");
				HX_STACK_LINE(185)
				Dynamic tmp8 = v.charCodeAt((int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(185)
				bool tmp9 = (tmp8 >= (int)48);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(185)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(185)
				if ((tmp9)){
					HX_STACK_LINE(185)
					Dynamic tmp11 = v.charCodeAt((int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(185)
					Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(185)
					tmp10 = (tmp12 <= (int)57);
				}
				else{
					HX_STACK_LINE(185)
					tmp10 = false;
				}
				HX_STACK_LINE(185)
				if ((tmp10)){
					HX_STACK_LINE(186)
					Dynamic tmp11 = en;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(186)
					::String tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(186)
					Dynamic tmp13 = ::Std_obj::parseInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(186)
					Dynamic tmp14 = ::Type_obj::createEnumIndex(tmp11,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(186)
					ev = tmp14;
				}
				else{
					HX_STACK_LINE(188)
					Dynamic tmp11 = en;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(188)
					::String tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(188)
					Dynamic tmp13 = ::Type_obj::createEnum(tmp11,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(188)
					ev = tmp13;
				}
				HX_STACK_LINE(190)
				Dynamic tmp11 = ev;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				return tmp11;
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(192)
			bool tmp = (v != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(192)
			if ((tmp)){
				HX_STACK_LINE(193)
				::String tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(193)
				this->parts->unshift(tmp1);
			}
			HX_STACK_LINE(194)
			this->subDispatch = true;
			HX_STACK_LINE(195)
			return hx::ObjectPtr<OBJ_>(this);
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(153)
			bool tmp = (::haxe::web::MatchRule(r))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(153)
			bool lock = tmp;		HX_STACK_VAR(lock,"lock");
			HX_STACK_LINE(153)
			::String tmp1 = (::haxe::web::MatchRule(r))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(153)
			::String c = tmp1;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(196)
			{
				HX_STACK_LINE(197)
				bool tmp2 = (v == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(197)
				if ((tmp2)){
					HX_STACK_LINE(197)
					HX_STACK_DO_THROW(::haxe::web::DispatchError_obj::DEMissing);
				}
				HX_STACK_LINE(198)
				::String tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(198)
				Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(198)
				Dynamic v1 = tmp4;		HX_STACK_VAR(v1,"v1");
				HX_STACK_LINE(199)
				bool tmp5 = (v1 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(199)
				if ((tmp5)){
					HX_STACK_LINE(199)
					HX_STACK_DO_THROW(::haxe::web::DispatchError_obj::DEInvalidValue);
				}
				HX_STACK_LINE(200)
				::String tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(200)
				::hx::Class tmp7 = ::Type_obj::resolveClass(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(200)
				Dynamic cl = tmp7;		HX_STACK_VAR(cl,"cl");
				HX_STACK_LINE(201)
				bool tmp8 = (cl == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(201)
				if ((tmp8)){
					HX_STACK_LINE(201)
					HX_STACK_DO_THROW(HX_HCSTRING("assert","\xc6","\x46","\x03","\x4c"));
				}
				HX_STACK_LINE(202)
				Dynamic o;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(204)
				Dynamic tmp9 = cl->__Field(HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"), hx::paccDynamic )->__Field(HX_HCSTRING("unsafeGet","\x10","\x50","\x9c","\x70"), hx::paccDynamic )(v1,lock);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(204)
				o = tmp9;
				HX_STACK_LINE(208)
				bool tmp10 = (o == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(208)
				if ((tmp10)){
					HX_STACK_LINE(208)
					HX_STACK_DO_THROW(::haxe::web::DispatchError_obj::DEInvalidValue);
				}
				HX_STACK_LINE(209)
				Dynamic tmp11 = o;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(209)
				return tmp11;
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(153)
			::haxe::web::MatchRule tmp = (::haxe::web::MatchRule(r))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(153)
			::haxe::web::MatchRule r1 = tmp;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(210)
			{
				HX_STACK_LINE(211)
				bool tmp1 = (v == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(211)
				if ((tmp1)){
					HX_STACK_LINE(212)
					return null();
				}
				HX_STACK_LINE(213)
				::String tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(213)
				::haxe::web::MatchRule tmp3 = r1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(213)
				Dynamic tmp4 = this->match(tmp2,tmp3,true);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(213)
				return tmp4;
			}
		}
		;break;
	}
	HX_STACK_LINE(153)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Dispatch_obj,match,return )

Dynamic Dispatch_obj::checkParams( cpp::ArrayBase params,bool opt){
	HX_STACK_FRAME("haxe.web.Dispatch","checkParams",0x0b8135fc,"haxe.web.Dispatch.checkParams","C:\\HaxeToolkit\\haxe\\std/haxe/web/Dispatch.hx",217,0x23767a19)
	HX_STACK_THIS(this)
	HX_STACK_ARG(params,"params")
	HX_STACK_ARG(opt,"opt")
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/web/Dispatch.hx",218,0x23767a19)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(218)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	Dynamic po = tmp;		HX_STACK_VAR(po,"po");
	HX_STACK_LINE(219)
	{
		HX_STACK_LINE(219)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(219)
		while((true)){
			HX_STACK_LINE(219)
			bool tmp1 = (_g < params->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(219)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(219)
			if ((tmp2)){
				HX_STACK_LINE(219)
				break;
			}
			HX_STACK_LINE(219)
			Dynamic tmp3 = params->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(219)
			Dynamic p = tmp3;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(219)
			++(_g);
			HX_STACK_LINE(220)
			::haxe::ds::StringMap tmp4 = this->params;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(220)
			::String tmp5 = p->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(220)
			::String tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(220)
			::String v = tmp6;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(221)
			bool tmp7 = (v == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(221)
			if ((tmp7)){
				HX_STACK_LINE(222)
				bool tmp8 = p->__Field(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(222)
				if ((tmp8)){
					HX_STACK_LINE(222)
					continue;
				}
				HX_STACK_LINE(223)
				bool tmp9 = opt;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(223)
				if ((tmp9)){
					HX_STACK_LINE(223)
					return null();
				}
				HX_STACK_LINE(224)
				::String tmp10 = p->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(224)
				::haxe::web::DispatchError tmp11 = ::haxe::web::DispatchError_obj::DEMissingParam(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(224)
				HX_STACK_DO_THROW(tmp11);
			}
			HX_STACK_LINE(226)
			Dynamic tmp8 = po;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(226)
			::String tmp9 = p->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(226)
			::String tmp10 = v;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(226)
			::haxe::web::MatchRule tmp11 = p->__Field(HX_HCSTRING("rule","\xfc","\x78","\xb3","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(226)
			bool tmp12 = p->__Field(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(226)
			Dynamic tmp13 = this->match(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(226)
			::Reflect_obj::setField(tmp8,tmp9,tmp13);
		}
	}
	HX_STACK_LINE(228)
	Dynamic tmp1 = po;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(Dispatch_obj,checkParams,return )

Void Dispatch_obj::loop( cpp::ArrayBase args,::haxe::web::DispatchRule r){
{
		HX_STACK_FRAME("haxe.web.Dispatch","loop",0x1f6350d6,"haxe.web.Dispatch.loop","C:\\HaxeToolkit\\haxe\\std/haxe/web/Dispatch.hx",232,0x23767a19)
		HX_STACK_THIS(this)
		HX_STACK_ARG(args,"args")
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(232)
		switch( (int)(r->__Index())){
			case (int)2: {
				HX_STACK_LINE(232)
				bool tmp = (::haxe::web::DispatchRule(r))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(232)
				bool opt = tmp;		HX_STACK_VAR(opt,"opt");
				HX_STACK_LINE(232)
				cpp::ArrayBase params = (::haxe::web::DispatchRule(r))->__Param(1);		HX_STACK_VAR(params,"params");
				HX_STACK_LINE(232)
				::haxe::web::DispatchRule tmp1 = (::haxe::web::DispatchRule(r))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(232)
				::haxe::web::DispatchRule r1 = tmp1;		HX_STACK_VAR(r1,"r1");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(234)
					::haxe::web::DispatchRule tmp2 = r1;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(234)
					this->loop(args,tmp2);
					HX_STACK_LINE(235)
					bool tmp3 = opt;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(235)
					Dynamic tmp4 = this->checkParams(params,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(235)
					args->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(232)
				::haxe::web::MatchRule tmp = (::haxe::web::DispatchRule(r))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(232)
				::haxe::web::MatchRule r1 = tmp;		HX_STACK_VAR(r1,"r1");
				HX_STACK_LINE(236)
				{
					HX_STACK_LINE(237)
					::String tmp1 = this->parts->shift();		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(237)
					::haxe::web::MatchRule tmp2 = r1;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(237)
					Dynamic tmp3 = this->match(tmp1,tmp2,false);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(237)
					args->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(232)
				Array< ::Dynamic > rl = (::haxe::web::DispatchRule(r))->__Param(0);		HX_STACK_VAR(rl,"rl");
				HX_STACK_LINE(239)
				{
					HX_STACK_LINE(239)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(239)
					while((true)){
						HX_STACK_LINE(239)
						bool tmp = (_g < rl->length);		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(239)
						bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(239)
						if ((tmp1)){
							HX_STACK_LINE(239)
							break;
						}
						HX_STACK_LINE(239)
						::haxe::web::MatchRule tmp2 = rl->__get(_g).StaticCast< ::haxe::web::MatchRule >();		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(239)
						::haxe::web::MatchRule r1 = tmp2;		HX_STACK_VAR(r1,"r1");
						HX_STACK_LINE(239)
						++(_g);
						HX_STACK_LINE(240)
						::String tmp3 = this->parts->shift();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(240)
						::haxe::web::MatchRule tmp4 = r1;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(240)
						Dynamic tmp5 = this->match(tmp3,tmp4,false);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(240)
						args->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
					}
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(232)
				::haxe::web::DispatchRule tmp = (::haxe::web::DispatchRule(r))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(232)
				::haxe::web::DispatchRule r1 = tmp;		HX_STACK_VAR(r1,"r1");
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(242)
					::haxe::web::DispatchRule tmp1 = r1;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(242)
					this->loop(args,tmp1);
					HX_STACK_LINE(243)
					Dynamic tmp2 = this->cfg;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(243)
					Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("obj","\xf7","\x8f","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(243)
					::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(243)
					::hx::Class c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(244)
					Dynamic m;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(245)
					while((true)){
						HX_STACK_LINE(246)
						bool tmp5 = (c == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(246)
						if ((tmp5)){
							HX_STACK_LINE(246)
							HX_STACK_DO_THROW(HX_HCSTRING("assert","\xc6","\x46","\x03","\x4c"));
						}
						HX_STACK_LINE(247)
						::hx::Class tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(247)
						Dynamic tmp7 = ::haxe::rtti::Meta_obj::getFields(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(247)
						::String tmp8 = this->name;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(247)
						Dynamic tmp9 = ::Reflect_obj::field(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(247)
						m = tmp9;
						HX_STACK_LINE(248)
						::hx::Class tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(248)
						::hx::Class tmp11 = ::Type_obj::getSuperClass(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(248)
						c = tmp11;
						HX_STACK_LINE(249)
						bool tmp12 = (m == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(249)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(245)
						if ((tmp13)){
							HX_STACK_LINE(245)
							break;
						}
					}
					HX_STACK_LINE(250)
					{
						HX_STACK_LINE(250)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(250)
						Dynamic tmp5 = m;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(250)
						Array< ::String > _g1 = ::Reflect_obj::fields(tmp5);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(250)
						while((true)){
							HX_STACK_LINE(250)
							bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(250)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(250)
							if ((tmp7)){
								HX_STACK_LINE(250)
								break;
							}
							HX_STACK_LINE(250)
							::String tmp8 = _g1->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(250)
							::String mv = tmp8;		HX_STACK_VAR(mv,"mv");
							HX_STACK_LINE(250)
							++(_g);
							HX_STACK_LINE(251)
							::String tmp9 = mv;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(251)
							Dynamic tmp10 = m;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(251)
							::String tmp11 = mv;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(251)
							Dynamic tmp12 = ::Reflect_obj::field(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(251)
							this->onMeta(tmp9,tmp12);
						}
					}
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Dispatch_obj,loop,(void))

Array< ::Dynamic > Dispatch_obj::GET_RULES;

Dynamic Dispatch_obj::make;

Dynamic Dispatch_obj::run;

Dynamic Dispatch_obj::extractConfig( Dynamic obj){
	HX_STACK_FRAME("haxe.web.Dispatch","extractConfig",0xac72de31,"haxe.web.Dispatch.extractConfig","C:\\HaxeToolkit\\haxe\\std/haxe/web/Dispatch.hx",468,0x23767a19)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(470)
	Dynamic tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(470)
	::hx::Class tmp1 = ::Type_obj::getClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(470)
	::hx::Class c = tmp1;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(471)
	::hx::Class tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(471)
	Dynamic tmp3 = ::haxe::rtti::Meta_obj::getType(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(471)
	Dynamic dc = tmp3;		HX_STACK_VAR(dc,"dc");
	HX_STACK_LINE(472)
	Dynamic tmp4 = dc->__Field(HX_HCSTRING("dispatchConfig","\x1c","\x61","\x31","\x03"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(472)
	Dynamic m = tmp4;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(473)
	Dynamic tmp5 = m;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(473)
	bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(473)
	if ((tmp6)){
		HX_STACK_LINE(474)
		Dynamic tmp7 = m;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(474)
		Dynamic tmp8 = ::haxe::Unserializer_obj::run(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(474)
		m = tmp8;
		HX_STACK_LINE(475)
		Dynamic tmp9 = m;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(475)
		hx::IndexRef((dc->__Field(HX_HCSTRING("dispatchConfig","\x1c","\x61","\x31","\x03"), hx::paccDynamic )).mPtr,(int)0) = tmp9;
	}
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &m,Dynamic &obj){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/web/Dispatch.hx",477,0x23767a19)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("obj","\xf7","\x8f","\x54","\x00") , obj,false);
				__result->Add(HX_HCSTRING("rules","\xf7","\x63","\x56","\xf1") , m,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(477)
	Dynamic tmp7 = _Function_1_1::Block(m,obj);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(477)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dispatch_obj,extractConfig,return )


Dispatch_obj::Dispatch_obj()
{
	onMeta = new __default_onMeta(this);
}

void Dispatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Dispatch);
	HX_MARK_MEMBER_NAME(parts,"parts");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(cfg,"cfg");
	HX_MARK_MEMBER_NAME(subDispatch,"subDispatch");
	HX_MARK_MEMBER_NAME(dispatch,"dispatch");
	HX_MARK_MEMBER_NAME(getParams,"getParams");
	HX_MARK_MEMBER_NAME(onMeta,"onMeta");
	HX_MARK_END_CLASS();
}

void Dispatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parts,"parts");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(cfg,"cfg");
	HX_VISIT_MEMBER_NAME(subDispatch,"subDispatch");
	HX_VISIT_MEMBER_NAME(dispatch,"dispatch");
	HX_VISIT_MEMBER_NAME(getParams,"getParams");
	HX_VISIT_MEMBER_NAME(onMeta,"onMeta");
}

Dynamic Dispatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cfg") ) { return cfg; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parts") ) { return parts; }
		if (HX_FIELD_EQ(inName,"match") ) { return match_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"onMeta") ) { return onMeta; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch; }
		if (HX_FIELD_EQ(inName,"redirect") ) { return redirect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getParams") ) { return getParams; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subDispatch") ) { return subDispatch; }
		if (HX_FIELD_EQ(inName,"resolveName") ) { return resolveName_dyn(); }
		if (HX_FIELD_EQ(inName,"checkParams") ) { return checkParams_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"runtimeDispatch") ) { return runtimeDispatch_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"runtimeGetParams") ) { return runtimeGetParams_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Dispatch_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { outValue = make; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"GET_RULES") ) { outValue = GET_RULES; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"extractConfig") ) { outValue = extractConfig_dyn(); return true;  }
	}
	return false;
}

Dynamic Dispatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cfg") ) { cfg=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parts") ) { parts=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { params=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMeta") ) { onMeta=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { dispatch=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getParams") ) { getParams=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subDispatch") ) { subDispatch=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Dispatch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { make=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"GET_RULES") ) { GET_RULES=ioValue.Cast< Array< ::Dynamic > >(); return true; }
	}
	return false;
}

void Dispatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parts","\x20","\x91","\x55","\xbd"));
	outFields->push(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("cfg","\x64","\x78","\x4b","\x00"));
	outFields->push(HX_HCSTRING("subDispatch","\x5a","\xb4","\x72","\x7e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Dispatch_obj,parts),HX_HCSTRING("parts","\x20","\x91","\x55","\xbd")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Dispatch_obj,params),HX_HCSTRING("params","\x46","\xfb","\x7a","\xed")},
	{hx::fsString,(int)offsetof(Dispatch_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Dispatch_obj,cfg),HX_HCSTRING("cfg","\x64","\x78","\x4b","\x00")},
	{hx::fsBool,(int)offsetof(Dispatch_obj,subDispatch),HX_HCSTRING("subDispatch","\x5a","\xb4","\x72","\x7e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Dispatch_obj,dispatch),HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Dispatch_obj,getParams),HX_HCSTRING("getParams","\x7c","\x84","\xd1","\x69")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Dispatch_obj,onMeta),HX_HCSTRING("onMeta","\x84","\x53","\xe3","\xea")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Dispatch_obj::GET_RULES,HX_HCSTRING("GET_RULES","\x0e","\xbc","\xc3","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Dispatch_obj::make,HX_HCSTRING("make","\xee","\x39","\x56","\x48")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Dispatch_obj::run,HX_HCSTRING("run","\x4b","\xe7","\x56","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("parts","\x20","\x91","\x55","\xbd"),
	HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("cfg","\x64","\x78","\x4b","\x00"),
	HX_HCSTRING("subDispatch","\x5a","\xb4","\x72","\x7e"),
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	HX_HCSTRING("getParams","\x7c","\x84","\xd1","\x69"),
	HX_HCSTRING("onMeta","\x84","\x53","\xe3","\xea"),
	HX_HCSTRING("resolveName","\x57","\x97","\x3a","\xe4"),
	HX_HCSTRING("runtimeDispatch","\xb2","\xd7","\xfa","\x00"),
	HX_HCSTRING("redirect","\x1c","\xf7","\xd8","\x9c"),
	HX_HCSTRING("runtimeGetParams","\x84","\x54","\x62","\xcb"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("checkParams","\x2e","\xce","\x8c","\xcf"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Dispatch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Dispatch_obj::GET_RULES,"GET_RULES");
	HX_MARK_MEMBER_NAME(Dispatch_obj::make,"make");
	HX_MARK_MEMBER_NAME(Dispatch_obj::run,"run");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Dispatch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Dispatch_obj::GET_RULES,"GET_RULES");
	HX_VISIT_MEMBER_NAME(Dispatch_obj::make,"make");
	HX_VISIT_MEMBER_NAME(Dispatch_obj::run,"run");
};

#endif

hx::Class Dispatch_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("GET_RULES","\x0e","\xbc","\xc3","\xfb"),
	HX_HCSTRING("make","\xee","\x39","\x56","\x48"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("extractConfig","\xe3","\x66","\xba","\x3c"),
	::String(null()) };

void Dispatch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.web.Dispatch","\x3c","\xcb","\xec","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Dispatch_obj::__GetStatic;
	__mClass->mSetStaticField = &Dispatch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Dispatch_obj >;
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
} // end namespace web
