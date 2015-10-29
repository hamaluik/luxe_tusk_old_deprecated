#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_rtti_CType
#include <haxe/rtti/CType.h>
#endif
#ifndef INCLUDED_haxe_rtti_Rights
#include <haxe/rtti/Rights.h>
#endif
#ifndef INCLUDED_haxe_rtti_TypeApi
#include <haxe/rtti/TypeApi.h>
#endif
#ifndef INCLUDED_haxe_rtti_TypeTree
#include <haxe/rtti/TypeTree.h>
#endif
namespace haxe{
namespace rtti{

Void TypeApi_obj::__construct()
{
	return null();
}

//TypeApi_obj::~TypeApi_obj() { }

Dynamic TypeApi_obj::__CreateEmpty() { return  new TypeApi_obj; }
hx::ObjectPtr< TypeApi_obj > TypeApi_obj::__new()
{  hx::ObjectPtr< TypeApi_obj > _result_ = new TypeApi_obj();
	_result_->__construct();
	return _result_;}

Dynamic TypeApi_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TypeApi_obj > _result_ = new TypeApi_obj();
	_result_->__construct();
	return _result_;}

Dynamic TypeApi_obj::typeInfos( ::haxe::rtti::TypeTree t){
	HX_STACK_FRAME("haxe.rtti.TypeApi","typeInfos",0x858205ee,"haxe.rtti.TypeApi.typeInfos","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/CType.hx",133,0x6c1d6009)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(134)
	Dynamic inf;		HX_STACK_VAR(inf,"inf");
	HX_STACK_LINE(135)
	switch( (int)(t->__Index())){
		case (int)1: {
			HX_STACK_LINE(135)
			Dynamic tmp = (::haxe::rtti::TypeTree(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(135)
			Dynamic c = tmp;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(136)
			inf = c;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(135)
			Dynamic tmp = (::haxe::rtti::TypeTree(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(135)
			Dynamic e = tmp;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(137)
			inf = e;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(135)
			Dynamic tmp = (::haxe::rtti::TypeTree(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(135)
			Dynamic t1 = tmp;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(138)
			inf = t1;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(135)
			Dynamic tmp = (::haxe::rtti::TypeTree(t))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(135)
			Dynamic a = tmp;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(139)
			inf = a;
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(140)
			HX_STACK_DO_THROW(HX_HCSTRING("Unexpected Package","\x37","\x8a","\x7a","\xc7"));
		}
		;break;
	}
	HX_STACK_LINE(142)
	Dynamic tmp = inf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeApi_obj,typeInfos,return )

bool TypeApi_obj::isVar( ::haxe::rtti::CType t){
	HX_STACK_FRAME("haxe.rtti.TypeApi","isVar",0x6a9c2e60,"haxe.rtti.TypeApi.isVar","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/CType.hx",145,0x6c1d6009)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(146)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	switch( (int)(t->__Index())){
		case (int)4: {
			HX_STACK_LINE(147)
			tmp = false;
		}
		;break;
		default: {
			HX_STACK_LINE(148)
			tmp = true;
		}
	}
	HX_STACK_LINE(146)
	return tmp;
	HX_STACK_LINE(146)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeApi_obj,isVar,return )

bool TypeApi_obj::leq( Dynamic f,::List l1,::List l2){
	HX_STACK_FRAME("haxe.rtti.TypeApi","leq",0xeae78a5b,"haxe.rtti.TypeApi.leq","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/CType.hx",152,0x6c1d6009)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(l1,"l1")
	HX_STACK_ARG(l2,"l2")
	HX_STACK_LINE(153)
	::_List::ListIterator tmp = ::_List::ListIterator_obj::__new(l2->h);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	::_List::ListIterator it = tmp;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		::_List::ListIterator tmp1 = ::_List::ListIterator_obj::__new(l1->h);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		::_List::ListIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		while((true)){
			HX_STACK_LINE(154)
			bool tmp2 = (_g->head != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(154)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(154)
			if ((tmp3)){
				HX_STACK_LINE(154)
				break;
			}
			HX_STACK_LINE(154)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				Dynamic tmp5 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(154)
				_g->val = tmp5;
				HX_STACK_LINE(154)
				Dynamic tmp6 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(154)
				_g->head = tmp6;
				HX_STACK_LINE(154)
				tmp4 = _g->val;
			}
			HX_STACK_LINE(154)
			Dynamic e1 = tmp4;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(155)
			bool tmp5 = (it->head != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(155)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(155)
			if ((tmp6)){
				HX_STACK_LINE(156)
				return false;
			}
			HX_STACK_LINE(157)
			Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(157)
			{
				HX_STACK_LINE(157)
				Dynamic tmp8 = it->head->__GetItem((int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(157)
				it->val = tmp8;
				HX_STACK_LINE(157)
				Dynamic tmp9 = it->head->__GetItem((int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(157)
				it->head = tmp9;
				HX_STACK_LINE(157)
				tmp7 = it->val;
			}
			HX_STACK_LINE(157)
			Dynamic e2 = tmp7;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(158)
			Dynamic tmp8 = e1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(158)
			Dynamic tmp9 = e2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(158)
			bool tmp10 = f(tmp8,tmp9).Cast< bool >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(158)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(158)
			if ((tmp11)){
				HX_STACK_LINE(159)
				return false;
			}
		}
	}
	HX_STACK_LINE(161)
	bool tmp1 = (it->head != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(161)
	if ((tmp1)){
		HX_STACK_LINE(162)
		return false;
	}
	HX_STACK_LINE(163)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypeApi_obj,leq,return )

bool TypeApi_obj::rightsEq( ::haxe::rtti::Rights r1,::haxe::rtti::Rights r2){
	HX_STACK_FRAME("haxe.rtti.TypeApi","rightsEq",0xfea18c00,"haxe.rtti.TypeApi.rightsEq","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/CType.hx",166,0x6c1d6009)
	HX_STACK_ARG(r1,"r1")
	HX_STACK_ARG(r2,"r2")
	HX_STACK_LINE(167)
	bool tmp = (r1 == r2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	if ((tmp)){
		HX_STACK_LINE(168)
		return true;
	}
	HX_STACK_LINE(169)
	switch( (int)(r1->__Index())){
		case (int)2: {
			HX_STACK_LINE(169)
			::String tmp1 = (::haxe::rtti::Rights(r1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(169)
			::String m1 = tmp1;		HX_STACK_VAR(m1,"m1");
			HX_STACK_LINE(171)
			switch( (int)(r2->__Index())){
				case (int)2: {
					HX_STACK_LINE(171)
					::String tmp2 = (::haxe::rtti::Rights(r2))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(171)
					::String m2 = tmp2;		HX_STACK_VAR(m2,"m2");
					HX_STACK_LINE(172)
					{
						HX_STACK_LINE(173)
						bool tmp3 = (m1 == m2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(173)
						return tmp3;
					}
				}
				;break;
				default: {
				}
			}
		}
		;break;
		default: {
		}
	}
	HX_STACK_LINE(178)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypeApi_obj,rightsEq,return )

bool TypeApi_obj::typeEq( ::haxe::rtti::CType t1,::haxe::rtti::CType t2){
	HX_STACK_FRAME("haxe.rtti.TypeApi","typeEq",0xc9934723,"haxe.rtti.TypeApi.typeEq","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/CType.hx",181,0x6c1d6009)
	HX_STACK_ARG(t1,"t1")
	HX_STACK_ARG(t2,"t2")
	HX_STACK_LINE(182)
	switch( (int)(t1->__Index())){
		case (int)0: {
			HX_STACK_LINE(183)
			bool tmp = (t2 == ::haxe::rtti::CType_obj::CUnknown);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(183)
			return tmp;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(182)
			::List tmp = (::haxe::rtti::CType(t1))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(182)
			::List params = tmp;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(182)
			::String tmp1 = (::haxe::rtti::CType(t1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(182)
			::String name = tmp1;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(185)
			switch( (int)(t2->__Index())){
				case (int)1: {
					HX_STACK_LINE(185)
					::List tmp2 = (::haxe::rtti::CType(t2))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(185)
					::List params2 = tmp2;		HX_STACK_VAR(params2,"params2");
					HX_STACK_LINE(185)
					::String tmp3 = (::haxe::rtti::CType(t2))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(185)
					::String name2 = tmp3;		HX_STACK_VAR(name2,"name2");
					HX_STACK_LINE(186)
					{
						HX_STACK_LINE(187)
						bool tmp4 = (name == name2);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(187)
						bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(187)
						if ((tmp4)){
							HX_STACK_LINE(187)
							Dynamic tmp6 = ::haxe::rtti::TypeApi_obj::typeEq_dyn();		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(187)
							Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(187)
							::List tmp8 = params;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(187)
							::List tmp9 = params2;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(187)
							Dynamic tmp10 = tmp7;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(187)
							::List tmp11 = tmp8;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(187)
							::List tmp12 = tmp9;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(187)
							tmp5 = ::haxe::rtti::TypeApi_obj::leq(tmp10,tmp11,tmp12);
						}
						else{
							HX_STACK_LINE(187)
							tmp5 = false;
						}
						HX_STACK_LINE(187)
						return tmp5;
					}
				}
				;break;
				default: {
				}
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(182)
			::List tmp = (::haxe::rtti::CType(t1))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(182)
			::List params = tmp;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(182)
			::String tmp1 = (::haxe::rtti::CType(t1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(182)
			::String name = tmp1;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(191)
			switch( (int)(t2->__Index())){
				case (int)2: {
					HX_STACK_LINE(191)
					::List tmp2 = (::haxe::rtti::CType(t2))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(191)
					::List params2 = tmp2;		HX_STACK_VAR(params2,"params2");
					HX_STACK_LINE(191)
					::String tmp3 = (::haxe::rtti::CType(t2))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(191)
					::String name2 = tmp3;		HX_STACK_VAR(name2,"name2");
					HX_STACK_LINE(192)
					{
						HX_STACK_LINE(193)
						bool tmp4 = (name == name2);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(193)
						bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(193)
						if ((tmp4)){
							HX_STACK_LINE(193)
							Dynamic tmp6 = ::haxe::rtti::TypeApi_obj::typeEq_dyn();		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(193)
							Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(193)
							::List tmp8 = params;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(193)
							::List tmp9 = params2;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(193)
							Dynamic tmp10 = tmp7;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(193)
							::List tmp11 = tmp8;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							::List tmp12 = tmp9;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(193)
							tmp5 = ::haxe::rtti::TypeApi_obj::leq(tmp10,tmp11,tmp12);
						}
						else{
							HX_STACK_LINE(193)
							tmp5 = false;
						}
						HX_STACK_LINE(193)
						return tmp5;
					}
				}
				;break;
				default: {
				}
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(182)
			::List tmp = (::haxe::rtti::CType(t1))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(182)
			::List params = tmp;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(182)
			::String tmp1 = (::haxe::rtti::CType(t1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(182)
			::String name = tmp1;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(197)
			switch( (int)(t2->__Index())){
				case (int)7: {
					HX_STACK_LINE(197)
					::List tmp2 = (::haxe::rtti::CType(t2))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(197)
					::List params2 = tmp2;		HX_STACK_VAR(params2,"params2");
					HX_STACK_LINE(197)
					::String tmp3 = (::haxe::rtti::CType(t2))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(197)
					::String name2 = tmp3;		HX_STACK_VAR(name2,"name2");
					HX_STACK_LINE(198)
					{
						HX_STACK_LINE(199)
						bool tmp4 = (name == name2);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(199)
						bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(199)
						if ((tmp4)){
							HX_STACK_LINE(199)
							Dynamic tmp6 = ::haxe::rtti::TypeApi_obj::typeEq_dyn();		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(199)
							Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(199)
							::List tmp8 = params;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(199)
							::List tmp9 = params2;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(199)
							Dynamic tmp10 = tmp7;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(199)
							::List tmp11 = tmp8;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(199)
							::List tmp12 = tmp9;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(199)
							tmp5 = ::haxe::rtti::TypeApi_obj::leq(tmp10,tmp11,tmp12);
						}
						else{
							HX_STACK_LINE(199)
							tmp5 = false;
						}
						HX_STACK_LINE(199)
						return tmp5;
					}
				}
				;break;
				default: {
				}
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(182)
			::List tmp = (::haxe::rtti::CType(t1))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(182)
			::List params = tmp;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(182)
			::String tmp1 = (::haxe::rtti::CType(t1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(182)
			::String name = tmp1;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(203)
			switch( (int)(t2->__Index())){
				case (int)3: {
					HX_STACK_LINE(203)
					::List tmp2 = (::haxe::rtti::CType(t2))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(203)
					::List params2 = tmp2;		HX_STACK_VAR(params2,"params2");
					HX_STACK_LINE(203)
					::String tmp3 = (::haxe::rtti::CType(t2))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(203)
					::String name2 = tmp3;		HX_STACK_VAR(name2,"name2");
					HX_STACK_LINE(204)
					{
						HX_STACK_LINE(205)
						bool tmp4 = (name == name2);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(205)
						bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(205)
						if ((tmp4)){
							HX_STACK_LINE(205)
							Dynamic tmp6 = ::haxe::rtti::TypeApi_obj::typeEq_dyn();		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(205)
							Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(205)
							::List tmp8 = params;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(205)
							::List tmp9 = params2;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(205)
							Dynamic tmp10 = tmp7;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(205)
							::List tmp11 = tmp8;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(205)
							::List tmp12 = tmp9;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(205)
							tmp5 = ::haxe::rtti::TypeApi_obj::leq(tmp10,tmp11,tmp12);
						}
						else{
							HX_STACK_LINE(205)
							tmp5 = false;
						}
						HX_STACK_LINE(205)
						return tmp5;
					}
				}
				;break;
				default: {
				}
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(182)
			::haxe::rtti::CType tmp = (::haxe::rtti::CType(t1))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(182)
			::haxe::rtti::CType ret = tmp;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(182)
			::List tmp1 = (::haxe::rtti::CType(t1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(182)
			::List args = tmp1;		HX_STACK_VAR(args,"args");
			HX_STACK_LINE(209)
			switch( (int)(t2->__Index())){
				case (int)4: {
					HX_STACK_LINE(209)
					::haxe::rtti::CType tmp2 = (::haxe::rtti::CType(t2))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(209)
					::haxe::rtti::CType ret2 = tmp2;		HX_STACK_VAR(ret2,"ret2");
					HX_STACK_LINE(209)
					::List tmp3 = (::haxe::rtti::CType(t2))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(209)
					::List args2 = tmp3;		HX_STACK_VAR(args2,"args2");
					HX_STACK_LINE(210)
					{
						HX_STACK_LINE(213)
						::List tmp4 = args;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(213)
						::List tmp5 = args2;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(213)
						::List tmp6 = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(213)
						::List tmp7 = tmp5;		HX_STACK_VAR(tmp7,"tmp7");

						HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_1)
						int __ArgCount() const { return 2; }
						bool run(Dynamic a,Dynamic b){
							HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/CType.hx",211,0x6c1d6009)
							HX_STACK_ARG(a,"a")
							HX_STACK_ARG(b,"b")
							{
								HX_STACK_LINE(212)
								bool tmp8 = (a->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == b->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(212)
								bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(212)
								bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(212)
								bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(212)
								bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(212)
								if ((tmp12)){
									HX_STACK_LINE(212)
									bool tmp13 = (a->__Field(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"), hx::paccDynamic ) == b->__Field(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(212)
									tmp11 = tmp13;
								}
								else{
									HX_STACK_LINE(212)
									tmp11 = false;
								}
								HX_STACK_LINE(212)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(212)
								bool tmp14 = tmp11;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(212)
								if ((tmp14)){
									HX_STACK_LINE(212)
									::haxe::rtti::CType tmp15 = a->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(212)
									::haxe::rtti::CType tmp16 = b->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(212)
									::haxe::rtti::CType tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(212)
									::haxe::rtti::CType tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(212)
									::haxe::rtti::CType tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(212)
									::haxe::rtti::CType tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(212)
									bool tmp21 = ::haxe::rtti::TypeApi_obj::typeEq(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(212)
									tmp13 = tmp21;
								}
								else{
									HX_STACK_LINE(212)
									tmp13 = false;
								}
								HX_STACK_LINE(212)
								bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(212)
								return tmp15;
							}
							return null();
						}
						HX_END_LOCAL_FUNC2(return)

						HX_STACK_LINE(211)
						bool tmp8 = ::haxe::rtti::TypeApi_obj::leq( Dynamic(new _Function_4_1()),tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(211)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(211)
						if ((tmp8)){
							HX_STACK_LINE(213)
							::haxe::rtti::CType tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(213)
							::haxe::rtti::CType tmp11 = ret2;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(213)
							::haxe::rtti::CType tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(213)
							::haxe::rtti::CType tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(213)
							tmp9 = ::haxe::rtti::TypeApi_obj::typeEq(tmp12,tmp13);
						}
						else{
							HX_STACK_LINE(211)
							tmp9 = false;
						}
						HX_STACK_LINE(211)
						return tmp9;
					}
				}
				;break;
				default: {
				}
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(182)
			::List tmp = (::haxe::rtti::CType(t1))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(182)
			::List fields = tmp;		HX_STACK_VAR(fields,"fields");
			HX_STACK_LINE(217)
			switch( (int)(t2->__Index())){
				case (int)5: {
					HX_STACK_LINE(217)
					::List tmp1 = (::haxe::rtti::CType(t2))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(217)
					::List fields2 = tmp1;		HX_STACK_VAR(fields2,"fields2");
					HX_STACK_LINE(218)
					{
						HX_STACK_LINE(219)
						::List tmp2 = fields;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(219)
						::List tmp3 = fields2;		HX_STACK_VAR(tmp3,"tmp3");

						HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_1)
						int __ArgCount() const { return 2; }
						bool run(Dynamic a,Dynamic b){
							HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/CType.hx",219,0x6c1d6009)
							HX_STACK_ARG(a,"a")
							HX_STACK_ARG(b,"b")
							{
								HX_STACK_LINE(219)
								Dynamic tmp4 = a;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(219)
								Dynamic tmp5 = b;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(219)
								bool tmp6 = ::haxe::rtti::TypeApi_obj::fieldEq(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(219)
								return tmp6;
							}
							return null();
						}
						HX_END_LOCAL_FUNC2(return)

						HX_STACK_LINE(219)
						bool tmp4 = ::haxe::rtti::TypeApi_obj::leq( Dynamic(new _Function_4_1()),tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(219)
						return tmp4;
					}
				}
				;break;
				default: {
				}
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(182)
			::haxe::rtti::CType tmp = (::haxe::rtti::CType(t1))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(182)
			::haxe::rtti::CType t = tmp;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(223)
			switch( (int)(t2->__Index())){
				case (int)6: {
					HX_STACK_LINE(223)
					::haxe::rtti::CType tmp1 = (::haxe::rtti::CType(t2))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(223)
					::haxe::rtti::CType t21 = tmp1;		HX_STACK_VAR(t21,"t21");
					HX_STACK_LINE(224)
					{
						HX_STACK_LINE(225)
						bool tmp2 = (t == null());		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(225)
						bool tmp3 = (t21 == null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(225)
						bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(225)
						if ((tmp4)){
							HX_STACK_LINE(226)
							return false;
						}
						HX_STACK_LINE(227)
						bool tmp5 = (t == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(227)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(227)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(227)
						if ((tmp6)){
							HX_STACK_LINE(227)
							::haxe::rtti::CType tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(227)
							::haxe::rtti::CType tmp9 = t21;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(227)
							::haxe::rtti::CType tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(227)
							::haxe::rtti::CType tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(227)
							tmp7 = ::haxe::rtti::TypeApi_obj::typeEq(tmp10,tmp11);
						}
						else{
							HX_STACK_LINE(227)
							tmp7 = true;
						}
						HX_STACK_LINE(227)
						return tmp7;
					}
				}
				;break;
				default: {
				}
			}
		}
		;break;
	}
	HX_STACK_LINE(231)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypeApi_obj,typeEq,return )

bool TypeApi_obj::fieldEq( Dynamic f1,Dynamic f2){
	HX_STACK_FRAME("haxe.rtti.TypeApi","fieldEq",0x9ab82fc9,"haxe.rtti.TypeApi.fieldEq","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/CType.hx",234,0x6c1d6009)
	HX_STACK_ARG(f1,"f1")
	HX_STACK_ARG(f2,"f2")
	HX_STACK_LINE(235)
	bool tmp = (f1->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) != f2->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	if ((tmp)){
		HX_STACK_LINE(236)
		return false;
	}
	HX_STACK_LINE(237)
	::haxe::rtti::CType tmp1 = f1->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(237)
	::haxe::rtti::CType tmp2 = f2->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(237)
	bool tmp3 = ::haxe::rtti::TypeApi_obj::typeEq(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(237)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(237)
	if ((tmp4)){
		HX_STACK_LINE(238)
		return false;
	}
	HX_STACK_LINE(239)
	bool tmp5 = (f1->__Field(HX_HCSTRING("isPublic","\x33","\x1c","\x5d","\xbf"), hx::paccDynamic ) != f2->__Field(HX_HCSTRING("isPublic","\x33","\x1c","\x5d","\xbf"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(239)
	if ((tmp5)){
		HX_STACK_LINE(240)
		return false;
	}
	HX_STACK_LINE(241)
	bool tmp6 = (f1->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ) != f2->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(241)
	if ((tmp6)){
		HX_STACK_LINE(242)
		return false;
	}
	HX_STACK_LINE(243)
	::haxe::rtti::Rights tmp7 = f1->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(243)
	::haxe::rtti::Rights tmp8 = f2->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(243)
	bool tmp9 = ::haxe::rtti::TypeApi_obj::rightsEq(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(243)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(243)
	if ((tmp10)){
		HX_STACK_LINE(244)
		return false;
	}
	HX_STACK_LINE(245)
	::haxe::rtti::Rights tmp11 = f1->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(245)
	::haxe::rtti::Rights tmp12 = f2->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(245)
	bool tmp13 = ::haxe::rtti::TypeApi_obj::rightsEq(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(245)
	bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(245)
	if ((tmp14)){
		HX_STACK_LINE(246)
		return false;
	}
	HX_STACK_LINE(247)
	bool tmp15 = (f1->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(247)
	bool tmp16 = (f2->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(247)
	bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(247)
	if ((tmp17)){
		HX_STACK_LINE(248)
		return false;
	}
	HX_STACK_LINE(249)
	bool tmp18 = (f1->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(249)
	bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(249)
	if ((tmp18)){
		HX_STACK_LINE(249)
		::String tmp20 = f1->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(249)
		::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(249)
		::String tmp22 = f2->__Field(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(249)
		::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(249)
		tmp19 = (tmp21 != tmp23);
	}
	else{
		HX_STACK_LINE(249)
		tmp19 = false;
	}
	HX_STACK_LINE(249)
	if ((tmp19)){
		HX_STACK_LINE(250)
		return false;
	}
	HX_STACK_LINE(251)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypeApi_obj,fieldEq,return )

bool TypeApi_obj::constructorEq( Dynamic c1,Dynamic c2){
	HX_STACK_FRAME("haxe.rtti.TypeApi","constructorEq",0x9bc5bc49,"haxe.rtti.TypeApi.constructorEq","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/CType.hx",254,0x6c1d6009)
	HX_STACK_ARG(c1,"c1")
	HX_STACK_ARG(c2,"c2")
	HX_STACK_LINE(255)
	bool tmp = (c1->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) != c2->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	if ((tmp)){
		HX_STACK_LINE(256)
		return false;
	}
	HX_STACK_LINE(257)
	bool tmp1 = (c1->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ) != c2->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(257)
	if ((tmp1)){
		HX_STACK_LINE(258)
		return false;
	}
	HX_STACK_LINE(259)
	bool tmp2 = (c1->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(259)
	bool tmp3 = (c2->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(259)
	bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(259)
	if ((tmp4)){
		HX_STACK_LINE(260)
		return false;
	}
	HX_STACK_LINE(261)
	bool tmp5 = (c1->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(261)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(261)
	if ((tmp5)){
		HX_STACK_LINE(261)
		::List tmp7 = c1->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(261)
		::List tmp8 = c2->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(261)
		::List tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(261)
		::List tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
		int __ArgCount() const { return 2; }
		bool run(Dynamic a,Dynamic b){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/CType.hx",261,0x6c1d6009)
			HX_STACK_ARG(a,"a")
			HX_STACK_ARG(b,"b")
			{
				HX_STACK_LINE(261)
				bool tmp11 = (a->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == b->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(261)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(261)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(261)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(261)
				bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(261)
				if ((tmp15)){
					HX_STACK_LINE(261)
					bool tmp16 = (a->__Field(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"), hx::paccDynamic ) == b->__Field(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(261)
					tmp14 = tmp16;
				}
				else{
					HX_STACK_LINE(261)
					tmp14 = false;
				}
				HX_STACK_LINE(261)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(261)
				bool tmp17 = tmp14;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(261)
				if ((tmp17)){
					HX_STACK_LINE(261)
					::haxe::rtti::CType tmp18 = a->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(261)
					::haxe::rtti::CType tmp19 = b->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(261)
					::haxe::rtti::CType tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(261)
					::haxe::rtti::CType tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(261)
					::haxe::rtti::CType tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(261)
					::haxe::rtti::CType tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(261)
					bool tmp24 = ::haxe::rtti::TypeApi_obj::typeEq(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(261)
					tmp16 = tmp24;
				}
				else{
					HX_STACK_LINE(261)
					tmp16 = false;
				}
				HX_STACK_LINE(261)
				bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(261)
				return tmp18;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(261)
		bool tmp11 = ::haxe::rtti::TypeApi_obj::leq( Dynamic(new _Function_2_1()),tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(261)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(261)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(261)
		tmp6 = !(tmp13);
	}
	else{
		HX_STACK_LINE(261)
		tmp6 = false;
	}
	HX_STACK_LINE(261)
	if ((tmp6)){
		HX_STACK_LINE(262)
		return false;
	}
	HX_STACK_LINE(263)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypeApi_obj,constructorEq,return )


TypeApi_obj::TypeApi_obj()
{
}

bool TypeApi_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"leq") ) { outValue = leq_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isVar") ) { outValue = isVar_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"typeEq") ) { outValue = typeEq_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fieldEq") ) { outValue = fieldEq_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rightsEq") ) { outValue = rightsEq_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"typeInfos") ) { outValue = typeInfos_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"constructorEq") ) { outValue = constructorEq_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypeApi_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeApi_obj::__mClass,"__mClass");
};

#endif

hx::Class TypeApi_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("typeInfos","\x2b","\x83","\xee","\x82"),
	HX_HCSTRING("isVar","\x1d","\x09","\x58","\xc1"),
	HX_HCSTRING("leq","\xd8","\x4b","\x52","\x00"),
	HX_HCSTRING("rightsEq","\x63","\x45","\x37","\xe4"),
	HX_HCSTRING("typeEq","\xc6","\xd1","\x36","\x57"),
	HX_HCSTRING("fieldEq","\xc6","\xf3","\x2d","\xfc"),
	HX_HCSTRING("constructorEq","\x06","\x1c","\x26","\xf5"),
	::String(null()) };

void TypeApi_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.rtti.TypeApi","\x71","\x61","\x21","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TypeApi_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TypeApi_obj >;
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
} // end namespace rtti
