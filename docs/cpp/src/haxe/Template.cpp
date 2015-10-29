#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_Template
#include <haxe/Template.h>
#endif
#ifndef INCLUDED_haxe__Template_TemplateExpr
#include <haxe/_Template/TemplateExpr.h>
#endif
namespace haxe{

Void Template_obj::__construct(::String str)
{
HX_STACK_FRAME("haxe.Template","new",0xf79fb394,"haxe.Template.new","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",82,0x4d73a5d4)
HX_STACK_THIS(this)
HX_STACK_ARG(str,"str")
{
	HX_STACK_LINE(83)
	::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	::List tmp1 = this->parseTokens(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	::List tokens = tmp1;		HX_STACK_VAR(tokens,"tokens");
	HX_STACK_LINE(84)
	::List tmp2 = tokens;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	::haxe::_Template::TemplateExpr tmp3 = this->parseBlock(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	this->expr = tmp3;
	HX_STACK_LINE(85)
	bool tmp4 = tokens->isEmpty();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(85)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(85)
	if ((tmp5)){
		HX_STACK_LINE(86)
		Dynamic tmp6 = tokens->first();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(86)
		bool tmp7 = tmp6->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(86)
		::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(86)
		::String tmp9 = (HX_HCSTRING("Unexpected '","\x38","\x54","\x94","\x03") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(86)
		::String tmp10 = (tmp9 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(86)
		HX_STACK_DO_THROW(tmp10);
	}
}
;
	return null();
}

//Template_obj::~Template_obj() { }

Dynamic Template_obj::__CreateEmpty() { return  new Template_obj; }
hx::ObjectPtr< Template_obj > Template_obj::__new(::String str)
{  hx::ObjectPtr< Template_obj > _result_ = new Template_obj();
	_result_->__construct(str);
	return _result_;}

Dynamic Template_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Template_obj > _result_ = new Template_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Template_obj::execute( Dynamic context,Dynamic macros){
	HX_STACK_FRAME("haxe.Template","execute",0xab5c9769,"haxe.Template.execute","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",105,0x4d73a5d4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(context,"context")
	HX_STACK_ARG(macros,"macros")
	HX_STACK_LINE(106)
	bool tmp = (macros == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	if ((tmp)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",106,0x4d73a5d4)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(106)
		tmp1 = _Function_2_1::Block();
	}
	else{
		HX_STACK_LINE(106)
		tmp1 = macros;
	}
	HX_STACK_LINE(106)
	this->macros = tmp1;
	HX_STACK_LINE(107)
	this->context = context;
	HX_STACK_LINE(108)
	::List tmp2 = ::List_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(108)
	this->stack = tmp2;
	HX_STACK_LINE(109)
	::StringBuf tmp3 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(109)
	this->buf = tmp3;
	HX_STACK_LINE(110)
	::haxe::_Template::TemplateExpr tmp4 = this->expr;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(110)
	this->run(tmp4);
	HX_STACK_LINE(111)
	::StringBuf tmp5 = this->buf;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(111)
	::String tmp6 = tmp5->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(111)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(Template_obj,execute,return )

Dynamic Template_obj::resolve( ::String v){
	HX_STACK_FRAME("haxe.Template","resolve",0x46afa020,"haxe.Template.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",114,0x4d73a5d4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(115)
	Dynamic tmp = this->context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	::String tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	bool tmp2 = ::Reflect_obj::hasField(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	if ((tmp2)){
		HX_STACK_LINE(116)
		Dynamic tmp3 = this->context;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		::String tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		Dynamic tmp5 = ::Reflect_obj::field(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		return tmp5;
	}
	HX_STACK_LINE(117)
	{
		HX_STACK_LINE(117)
		::List tmp3 = this->stack;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		::_List::ListIterator tmp4 = ::_List::ListIterator_obj::__new(tmp3->h);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(117)
		::_List::ListIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		while((true)){
			HX_STACK_LINE(117)
			bool tmp5 = (_g->head != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(117)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(117)
			if ((tmp6)){
				HX_STACK_LINE(117)
				break;
			}
			HX_STACK_LINE(117)
			Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(117)
			{
				HX_STACK_LINE(117)
				Dynamic tmp8 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(117)
				_g->val = tmp8;
				HX_STACK_LINE(117)
				Dynamic tmp9 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(117)
				_g->head = tmp9;
				HX_STACK_LINE(117)
				tmp7 = _g->val;
			}
			HX_STACK_LINE(117)
			Dynamic ctx = tmp7;		HX_STACK_VAR(ctx,"ctx");
			HX_STACK_LINE(118)
			Dynamic tmp8 = ctx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(118)
			::String tmp9 = v;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(118)
			bool tmp10 = ::Reflect_obj::hasField(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(118)
			if ((tmp10)){
				HX_STACK_LINE(119)
				Dynamic tmp11 = ctx;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(119)
				::String tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(119)
				Dynamic tmp13 = ::Reflect_obj::field(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(119)
				return tmp13;
			}
		}
	}
	HX_STACK_LINE(120)
	bool tmp3 = (v == HX_HCSTRING("__current__","\x79","\x78","\x5a","\x6f"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	if ((tmp3)){
		HX_STACK_LINE(121)
		Dynamic tmp4 = this->context;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		return tmp4;
	}
	HX_STACK_LINE(122)
	Dynamic tmp4 = ::haxe::Template_obj::globals;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(122)
	::String tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(122)
	Dynamic tmp6 = ::Reflect_obj::field(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(122)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Template_obj,resolve,return )

::List Template_obj::parseTokens( ::String data){
	HX_STACK_FRAME("haxe.Template","parseTokens",0xb093fb21,"haxe.Template.parseTokens","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",125,0x4d73a5d4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(126)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	::List tokens = tmp;		HX_STACK_VAR(tokens,"tokens");
	HX_STACK_LINE(127)
	while((true)){
		HX_STACK_LINE(127)
		::EReg tmp1 = ::haxe::Template_obj::splitter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		::String tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		bool tmp3 = tmp1->match(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(127)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(127)
		if ((tmp4)){
			HX_STACK_LINE(127)
			break;
		}
		HX_STACK_LINE(128)
		::EReg tmp5 = ::haxe::Template_obj::splitter;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		Dynamic tmp6 = tmp5->matchedPos();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(128)
		Dynamic p = tmp6;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(129)
		bool tmp7 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(129)
		if ((tmp7)){
			HX_STACK_LINE(130)
			int tmp8 = p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(130)
			::String tmp9 = data.substr((int)0,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_3_1{
				inline static Dynamic Block( ::String &tmp9){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",130,0x4d73a5d4)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("p","\x70","\x00","\x00","\x00") , tmp9,false);
						__result->Add(HX_HCSTRING("s","\x73","\x00","\x00","\x00") , true,false);
						__result->Add(HX_HCSTRING("l","\x6c","\x00","\x00","\x00") , null(),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(130)
			Dynamic tmp10 = _Function_3_1::Block(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(130)
			tokens->add(tmp10);
		}
		HX_STACK_LINE(133)
		int tmp8 = p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(133)
		Dynamic tmp9 = data.charCodeAt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(133)
		bool tmp10 = (tmp9 == (int)58);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(133)
		if ((tmp10)){
			HX_STACK_LINE(134)
			int tmp11 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + (int)2);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(134)
			int tmp12 = (p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ) - (int)4);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(134)
			::String tmp13 = data.substr(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			struct _Function_3_1{
				inline static Dynamic Block( ::String &tmp13){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",134,0x4d73a5d4)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("p","\x70","\x00","\x00","\x00") , tmp13,false);
						__result->Add(HX_HCSTRING("s","\x73","\x00","\x00","\x00") , false,false);
						__result->Add(HX_HCSTRING("l","\x6c","\x00","\x00","\x00") , null(),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(134)
			Dynamic tmp14 = _Function_3_1::Block(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(134)
			tokens->add(tmp14);
			HX_STACK_LINE(135)
			::EReg tmp15 = ::haxe::Template_obj::splitter;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(135)
			::String tmp16 = tmp15->matchedRight();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(135)
			data = tmp16;
			HX_STACK_LINE(136)
			continue;
		}
		HX_STACK_LINE(140)
		int tmp11 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(140)
		int parp = tmp11;		HX_STACK_VAR(parp,"parp");
		HX_STACK_LINE(141)
		int npar = (int)1;		HX_STACK_VAR(npar,"npar");
		HX_STACK_LINE(142)
		Array< ::String > params = Array_obj< ::String >::__new();		HX_STACK_VAR(params,"params");
		HX_STACK_LINE(143)
		::String part = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(part,"part");
		HX_STACK_LINE(144)
		while((true)){
			HX_STACK_LINE(145)
			int tmp12 = parp;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(145)
			Dynamic tmp13 = data.charCodeAt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(145)
			Dynamic c = tmp13;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(146)
			(parp)++;
			HX_STACK_LINE(147)
			bool tmp14 = (c == (int)40);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(147)
			if ((tmp14)){
				HX_STACK_LINE(148)
				(npar)++;
			}
			else{
				HX_STACK_LINE(149)
				bool tmp15 = (c == (int)41);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(149)
				if ((tmp15)){
					HX_STACK_LINE(150)
					(npar)--;
					HX_STACK_LINE(151)
					bool tmp16 = (npar <= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(151)
					if ((tmp16)){
						HX_STACK_LINE(151)
						break;
					}
				}
				else{
					HX_STACK_LINE(152)
					bool tmp16 = (c == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(152)
					if ((tmp16)){
						HX_STACK_LINE(153)
						HX_STACK_DO_THROW(HX_HCSTRING("Unclosed macro parenthesis","\xc7","\x16","\xf6","\xc7"));
					}
				}
			}
			HX_STACK_LINE(155)
			bool tmp15 = (c == (int)44);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(155)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(155)
			if ((tmp15)){
				HX_STACK_LINE(155)
				tmp16 = (npar == (int)1);
			}
			else{
				HX_STACK_LINE(155)
				tmp16 = false;
			}
			HX_STACK_LINE(155)
			if ((tmp16)){
				HX_STACK_LINE(156)
				::String tmp17 = part;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(156)
				params->push(tmp17);
				HX_STACK_LINE(157)
				part = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			else{
				HX_STACK_LINE(159)
				Dynamic tmp17 = c;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(159)
				::String tmp18 = ::String::fromCharCode(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(159)
				hx::AddEq(part,tmp18);
			}
		}
		HX_STACK_LINE(162)
		::String tmp12 = part;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(162)
		params->push(tmp12);
		HX_STACK_LINE(163)
		::EReg tmp13 = ::haxe::Template_obj::splitter;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(163)
		::String tmp14 = tmp13->matched((int)2);		HX_STACK_VAR(tmp14,"tmp14");
		struct _Function_2_1{
			inline static Dynamic Block( Array< ::String > &params,::String &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",163,0x4d73a5d4)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("p","\x70","\x00","\x00","\x00") , tmp14,false);
					__result->Add(HX_HCSTRING("s","\x73","\x00","\x00","\x00") , false,false);
					__result->Add(HX_HCSTRING("l","\x6c","\x00","\x00","\x00") , params,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(163)
		Dynamic tmp15 = _Function_2_1::Block(params,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(163)
		tokens->add(tmp15);
		HX_STACK_LINE(164)
		int tmp16 = parp;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(164)
		int tmp17 = (data.length - parp);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(164)
		::String tmp18 = data.substr(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(164)
		data = tmp18;
	}
	HX_STACK_LINE(166)
	bool tmp1 = (data.length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(166)
	if ((tmp1)){
		struct _Function_2_1{
			inline static Dynamic Block( ::String &data){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",167,0x4d73a5d4)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("p","\x70","\x00","\x00","\x00") , data,false);
					__result->Add(HX_HCSTRING("s","\x73","\x00","\x00","\x00") , true,false);
					__result->Add(HX_HCSTRING("l","\x6c","\x00","\x00","\x00") , null(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(167)
		Dynamic tmp2 = _Function_2_1::Block(data);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		tokens->add(tmp2);
	}
	HX_STACK_LINE(168)
	::List tmp2 = tokens;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(168)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Template_obj,parseTokens,return )

::haxe::_Template::TemplateExpr Template_obj::parseBlock( ::List tokens){
	HX_STACK_FRAME("haxe.Template","parseBlock",0x90636766,"haxe.Template.parseBlock","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",171,0x4d73a5d4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tokens,"tokens")
	HX_STACK_LINE(172)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	::List l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(173)
	while((true)){
		HX_STACK_LINE(174)
		Dynamic tmp1 = tokens->first();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		Dynamic t = tmp1;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(175)
		bool tmp2 = (t == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		if ((tmp2)){
			HX_STACK_LINE(176)
			break;
		}
		HX_STACK_LINE(177)
		bool tmp3 = t->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(177)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(177)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(177)
		if ((tmp5)){
			HX_STACK_LINE(177)
			bool tmp7 = (t->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic ) == HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(177)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(177)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(177)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(177)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(177)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(177)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(177)
			bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(177)
			if ((tmp14)){
				HX_STACK_LINE(177)
				bool tmp15 = (t->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic ) == HX_HCSTRING("else","\xb9","\xe4","\x14","\x43"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(177)
				tmp13 = tmp15;
			}
			else{
				HX_STACK_LINE(177)
				tmp13 = true;
			}
			HX_STACK_LINE(177)
			bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(177)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(177)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(177)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(177)
			if ((tmp18)){
				HX_STACK_LINE(177)
				::String tmp19 = t->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("substr","\x31","\xef","\x0a","\x9a"), hx::paccDynamic )((int)0,(int)7);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(177)
				::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(177)
				::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(177)
				tmp6 = (tmp21 == HX_HCSTRING("elseif ","\x8a","\x1a","\xaa","\x10"));
			}
			else{
				HX_STACK_LINE(177)
				tmp6 = true;
			}
		}
		else{
			HX_STACK_LINE(177)
			tmp6 = false;
		}
		HX_STACK_LINE(177)
		if ((tmp6)){
			HX_STACK_LINE(178)
			break;
		}
		HX_STACK_LINE(179)
		::List tmp7 = tokens;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(179)
		::haxe::_Template::TemplateExpr tmp8 = this->parse(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(179)
		l->add(tmp8);
	}
	HX_STACK_LINE(181)
	bool tmp1 = (l->length == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	if ((tmp1)){
		HX_STACK_LINE(182)
		::haxe::_Template::TemplateExpr tmp2 = l->first();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		return tmp2;
	}
	HX_STACK_LINE(183)
	::List tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(183)
	::haxe::_Template::TemplateExpr tmp3 = ::haxe::_Template::TemplateExpr_obj::OpBlock(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(183)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Template_obj,parseBlock,return )

::haxe::_Template::TemplateExpr Template_obj::parse( ::List tokens){
	HX_STACK_FRAME("haxe.Template","parse",0x09c7a867,"haxe.Template.parse","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",186,0x4d73a5d4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tokens,"tokens")
	HX_STACK_LINE(187)
	Dynamic tmp = tokens->pop();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	Dynamic t = tmp;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(188)
	::String p = t->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(189)
	bool tmp1 = t->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	if ((tmp1)){
		HX_STACK_LINE(190)
		::String tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		::haxe::_Template::TemplateExpr tmp3 = ::haxe::_Template::TemplateExpr_obj::OpStr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		return tmp3;
	}
	HX_STACK_LINE(192)
	bool tmp2 = (t->__Field(HX_HCSTRING("l","\x6c","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	if ((tmp2)){
		HX_STACK_LINE(193)
		::List tmp3 = ::List_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		::List pe = tmp3;		HX_STACK_VAR(pe,"pe");
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(194)
			Array< ::String > _g1 = t->__Field(HX_HCSTRING("l","\x6c","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(194)
			while((true)){
				HX_STACK_LINE(194)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(194)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(194)
				if ((tmp5)){
					HX_STACK_LINE(194)
					break;
				}
				HX_STACK_LINE(194)
				::String tmp6 = _g1->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(194)
				::String p1 = tmp6;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(194)
				++(_g);
				HX_STACK_LINE(195)
				::String tmp7 = p1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(195)
				::List tmp8 = this->parseTokens(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(195)
				::haxe::_Template::TemplateExpr tmp9 = this->parseBlock(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(195)
				pe->add(tmp9);
			}
		}
		HX_STACK_LINE(196)
		::String tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		::List tmp5 = pe;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		::haxe::_Template::TemplateExpr tmp6 = ::haxe::_Template::TemplateExpr_obj::OpMacro(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(196)
		return tmp6;
	}
	HX_STACK_LINE(199)
	::String tmp3 = p.substr((int)0,(int)3);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	bool tmp4 = (tmp3 == HX_HCSTRING("if ","\xa3","\x05","\x50","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(199)
	if ((tmp4)){
		HX_STACK_LINE(200)
		int tmp5 = (p.length - (int)3);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(200)
		::String tmp6 = p.substr((int)3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(200)
		p = tmp6;
		HX_STACK_LINE(201)
		::String tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(201)
		Dynamic tmp8 = this->parseExpr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(201)
		Dynamic e = tmp8;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(202)
		::List tmp9 = tokens;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(202)
		::haxe::_Template::TemplateExpr tmp10 = this->parseBlock(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(202)
		::haxe::_Template::TemplateExpr eif = tmp10;		HX_STACK_VAR(eif,"eif");
		HX_STACK_LINE(203)
		Dynamic tmp11 = tokens->first();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(203)
		Dynamic t1 = tmp11;		HX_STACK_VAR(t1,"t1");
		HX_STACK_LINE(204)
		::haxe::_Template::TemplateExpr eelse;		HX_STACK_VAR(eelse,"eelse");
		HX_STACK_LINE(205)
		bool tmp12 = (t1 == null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(205)
		if ((tmp12)){
			HX_STACK_LINE(206)
			HX_STACK_DO_THROW(HX_HCSTRING("Unclosed 'if'","\xfe","\x74","\x80","\x71"));
		}
		HX_STACK_LINE(207)
		bool tmp13 = (t1->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic ) == HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(207)
		if ((tmp13)){
			HX_STACK_LINE(208)
			tokens->pop();
			HX_STACK_LINE(209)
			eelse = null();
		}
		else{
			HX_STACK_LINE(210)
			bool tmp14 = (t1->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic ) == HX_HCSTRING("else","\xb9","\xe4","\x14","\x43"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(210)
			if ((tmp14)){
				HX_STACK_LINE(211)
				tokens->pop();
				HX_STACK_LINE(212)
				::List tmp15 = tokens;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(212)
				::haxe::_Template::TemplateExpr tmp16 = this->parseBlock(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(212)
				eelse = tmp16;
				HX_STACK_LINE(213)
				Dynamic tmp17 = tokens->pop();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(213)
				t1 = tmp17;
				HX_STACK_LINE(214)
				bool tmp18 = (t1 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(214)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(214)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(214)
				if ((tmp19)){
					HX_STACK_LINE(214)
					tmp20 = (t1->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic ) != HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
				}
				else{
					HX_STACK_LINE(214)
					tmp20 = true;
				}
				HX_STACK_LINE(214)
				if ((tmp20)){
					HX_STACK_LINE(215)
					HX_STACK_DO_THROW(HX_HCSTRING("Unclosed 'else'","\xa2","\x29","\xdd","\xe0"));
				}
			}
			else{
				HX_STACK_LINE(217)
				int tmp15 = t1->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(217)
				int tmp16 = (tmp15 - (int)4);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(217)
				::String tmp17 = t1->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("substr","\x31","\xef","\x0a","\x9a"), hx::paccDynamic )((int)4,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(217)
				t1->__FieldRef(HX_HCSTRING("p","\x70","\x00","\x00","\x00")) = tmp17;
				HX_STACK_LINE(218)
				::List tmp18 = tokens;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(218)
				::haxe::_Template::TemplateExpr tmp19 = this->parse(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(218)
				eelse = tmp19;
			}
		}
		HX_STACK_LINE(220)
		Dynamic tmp14 = e;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(220)
		::haxe::_Template::TemplateExpr tmp15 = eif;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(220)
		::haxe::_Template::TemplateExpr tmp16 = eelse;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(220)
		::haxe::_Template::TemplateExpr tmp17 = ::haxe::_Template::TemplateExpr_obj::OpIf(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(220)
		return tmp17;
	}
	HX_STACK_LINE(222)
	::String tmp5 = p.substr((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(222)
	bool tmp6 = (tmp5 == HX_HCSTRING("foreach ","\x56","\xdb","\x78","\xce"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(222)
	if ((tmp6)){
		HX_STACK_LINE(223)
		int tmp7 = (p.length - (int)8);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(223)
		::String tmp8 = p.substr((int)8,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(223)
		p = tmp8;
		HX_STACK_LINE(224)
		::String tmp9 = p;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(224)
		Dynamic tmp10 = this->parseExpr(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(224)
		Dynamic e = tmp10;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(225)
		::List tmp11 = tokens;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(225)
		::haxe::_Template::TemplateExpr tmp12 = this->parseBlock(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(225)
		::haxe::_Template::TemplateExpr efor = tmp12;		HX_STACK_VAR(efor,"efor");
		HX_STACK_LINE(226)
		Dynamic tmp13 = tokens->pop();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(226)
		Dynamic t1 = tmp13;		HX_STACK_VAR(t1,"t1");
		HX_STACK_LINE(227)
		bool tmp14 = (t1 == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(227)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(227)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(227)
		if ((tmp15)){
			HX_STACK_LINE(227)
			tmp16 = (t1->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic ) != HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
		}
		else{
			HX_STACK_LINE(227)
			tmp16 = true;
		}
		HX_STACK_LINE(227)
		if ((tmp16)){
			HX_STACK_LINE(228)
			HX_STACK_DO_THROW(HX_HCSTRING("Unclosed 'foreach'","\x89","\x5b","\x50","\x42"));
		}
		HX_STACK_LINE(229)
		Dynamic tmp17 = e;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(229)
		::haxe::_Template::TemplateExpr tmp18 = efor;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(229)
		::haxe::_Template::TemplateExpr tmp19 = ::haxe::_Template::TemplateExpr_obj::OpForeach(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(229)
		return tmp19;
	}
	HX_STACK_LINE(231)
	::EReg tmp7 = ::haxe::Template_obj::expr_splitter;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(231)
	::String tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(231)
	bool tmp9 = tmp7->match(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(231)
	if ((tmp9)){
		HX_STACK_LINE(232)
		::String tmp10 = p;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(232)
		Dynamic tmp11 = this->parseExpr(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(232)
		::haxe::_Template::TemplateExpr tmp12 = ::haxe::_Template::TemplateExpr_obj::OpExpr(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(232)
		return tmp12;
	}
	HX_STACK_LINE(233)
	::String tmp10 = p;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(233)
	::haxe::_Template::TemplateExpr tmp11 = ::haxe::_Template::TemplateExpr_obj::OpVar(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(233)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Template_obj,parse,return )

Dynamic Template_obj::parseExpr( ::String data){
	HX_STACK_FRAME("haxe.Template","parseExpr",0xc6f8913c,"haxe.Template.parseExpr","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",236,0x4d73a5d4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(237)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(237)
	::List l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(238)
	::String expr = data;		HX_STACK_VAR(expr,"expr");
	HX_STACK_LINE(239)
	while((true)){
		HX_STACK_LINE(239)
		::EReg tmp1 = ::haxe::Template_obj::expr_splitter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		::String tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		bool tmp3 = tmp1->match(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(239)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(239)
		if ((tmp4)){
			HX_STACK_LINE(239)
			break;
		}
		HX_STACK_LINE(240)
		::EReg tmp5 = ::haxe::Template_obj::expr_splitter;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(240)
		Dynamic tmp6 = tmp5->matchedPos();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(240)
		Dynamic p = tmp6;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(241)
		int tmp7 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(241)
		int k = tmp7;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(242)
		bool tmp8 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(242)
		if ((tmp8)){
			HX_STACK_LINE(243)
			int tmp9 = p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(243)
			::String tmp10 = data.substr((int)0,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			struct _Function_3_1{
				inline static Dynamic Block( ::String &tmp10){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",243,0x4d73a5d4)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("p","\x70","\x00","\x00","\x00") , tmp10,false);
						__result->Add(HX_HCSTRING("s","\x73","\x00","\x00","\x00") , true,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(243)
			Dynamic tmp11 = _Function_3_1::Block(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(243)
			l->add(tmp11);
		}
		HX_STACK_LINE(244)
		::EReg tmp9 = ::haxe::Template_obj::expr_splitter;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(244)
		::String tmp10 = tmp9->matched((int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(244)
		::String p1 = tmp10;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(245)
		::String tmp11 = p1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(245)
		int tmp12 = p1.indexOf(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(245)
		bool tmp13 = (tmp12 >= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		struct _Function_2_1{
			inline static Dynamic Block( bool &tmp13,::String &tmp11){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",245,0x4d73a5d4)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("p","\x70","\x00","\x00","\x00") , tmp11,false);
					__result->Add(HX_HCSTRING("s","\x73","\x00","\x00","\x00") , tmp13,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(245)
		Dynamic tmp14 = _Function_2_1::Block(tmp13,tmp11);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(245)
		l->add(tmp14);
		HX_STACK_LINE(246)
		::EReg tmp15 = ::haxe::Template_obj::expr_splitter;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(246)
		::String tmp16 = tmp15->matchedRight();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(246)
		data = tmp16;
	}
	HX_STACK_LINE(248)
	bool tmp1 = (data.length != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(248)
	if ((tmp1)){
		struct _Function_2_1{
			inline static Dynamic Block( ::String &data){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",249,0x4d73a5d4)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("p","\x70","\x00","\x00","\x00") , data,false);
					__result->Add(HX_HCSTRING("s","\x73","\x00","\x00","\x00") , true,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(249)
		Dynamic tmp2 = _Function_2_1::Block(data);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		l->add(tmp2);
	}
	HX_STACK_LINE(250)
	Dynamic e;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(251)
	try
	{
	HX_STACK_CATCHABLE(::String, 0);
	{
		HX_STACK_LINE(252)
		::List tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		Dynamic tmp3 = this->makeExpr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(252)
		e = tmp3;
		HX_STACK_LINE(253)
		bool tmp4 = l->isEmpty();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(253)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(253)
		if ((tmp5)){
			HX_STACK_LINE(254)
			Dynamic tmp6 = l->first();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(254)
			::String tmp7 = tmp6->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(254)
			HX_STACK_DO_THROW(tmp7);
		}
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String s = __e;{
				HX_STACK_LINE(256)
				::String tmp2 = (HX_HCSTRING("Unexpected '","\x38","\x54","\x94","\x03") + s);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(256)
				::String tmp3 = (tmp2 + HX_HCSTRING("' in ","\x22","\x80","\x17","\x8a"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(256)
				::String tmp4 = expr;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(256)
				::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(256)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::String,expr,Dynamic,e)
	int __ArgCount() const { return 0; }
	Dynamic run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",259,0x4d73a5d4)
		{
			HX_STACK_LINE(259)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(260)
				Dynamic tmp2 = e();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(260)
				return tmp2;
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic exc = __e;{
						HX_STACK_LINE(262)
						Dynamic tmp2 = exc;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(262)
						::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(262)
						::String tmp4 = (HX_HCSTRING("Error : ","\x1e","\xf8","\xc3","\xb8") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(262)
						::String tmp5 = (tmp4 + HX_HCSTRING(" in ","\x7b","\xe0","\x76","\x15"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(262)
						::String tmp6 = expr;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(262)
						::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(262)
						HX_STACK_DO_THROW(tmp7);
					}
				}
			}
			HX_STACK_LINE(259)
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(258)
	return  Dynamic(new _Function_1_1(expr,e));
}


HX_DEFINE_DYNAMIC_FUNC1(Template_obj,parseExpr,return )

Dynamic Template_obj::makeConst( ::String v){
	HX_STACK_FRAME("haxe.Template","makeConst",0x1a2ab2c9,"haxe.Template.makeConst","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",267,0x4d73a5d4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(268)
	::EReg tmp = ::haxe::Template_obj::expr_trim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	::String tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	tmp->match(tmp1);
	HX_STACK_LINE(269)
	::EReg tmp2 = ::haxe::Template_obj::expr_trim;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(269)
	::String tmp3 = tmp2->matched((int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(269)
	v = tmp3;
	HX_STACK_LINE(270)
	Dynamic tmp4 = v.charCodeAt((int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(270)
	bool tmp5 = (tmp4 == (int)34);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(270)
	if ((tmp5)){
		HX_STACK_LINE(271)
		int tmp6 = (v.length - (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(271)
		::String tmp7 = v.substr((int)1,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(271)
		::String str = tmp7;		HX_STACK_VAR(str,"str");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::String,str)
		int __ArgCount() const { return 0; }
		::String run(){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",272,0x4d73a5d4)
			{
				HX_STACK_LINE(272)
				::String tmp8 = str;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(272)
				return tmp8;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(272)
		return  Dynamic(new _Function_2_1(str));
	}
	HX_STACK_LINE(274)
	::EReg tmp6 = ::haxe::Template_obj::expr_int;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(274)
	::String tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(274)
	bool tmp8 = tmp6->match(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(274)
	if ((tmp8)){
		HX_STACK_LINE(275)
		::String tmp9 = v;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(275)
		Dynamic tmp10 = ::Std_obj::parseInt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(275)
		Dynamic i = tmp10;		HX_STACK_VAR(i,"i");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,i)
		int __ArgCount() const { return 0; }
		Dynamic run(){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",276,0x4d73a5d4)
			{
				HX_STACK_LINE(276)
				Dynamic tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(276)
				return tmp11;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(276)
		return  Dynamic(new _Function_2_1(i));
	}
	HX_STACK_LINE(278)
	::EReg tmp9 = ::haxe::Template_obj::expr_float;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(278)
	::String tmp10 = v;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(278)
	bool tmp11 = tmp9->match(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(278)
	if ((tmp11)){
		HX_STACK_LINE(279)
		::String tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(279)
		Float tmp13 = ::Std_obj::parseFloat(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(279)
		Float f = tmp13;		HX_STACK_VAR(f,"f");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Float,f)
		int __ArgCount() const { return 0; }
		Float run(){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",280,0x4d73a5d4)
			{
				HX_STACK_LINE(280)
				Float tmp14 = f;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(280)
				return tmp14;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(280)
		return  Dynamic(new _Function_2_1(f));
	}
	HX_STACK_LINE(282)
	::haxe::Template me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::String,v,::haxe::Template,me)
	int __ArgCount() const { return 0; }
	Dynamic run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",283,0x4d73a5d4)
		{
			HX_STACK_LINE(283)
			::String tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(283)
			Dynamic tmp13 = me->resolve(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(283)
			return tmp13;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(283)
	return  Dynamic(new _Function_1_1(v,me));
}


HX_DEFINE_DYNAMIC_FUNC1(Template_obj,makeConst,return )

Dynamic Template_obj::makePath( Dynamic e,::List l){
	HX_STACK_FRAME("haxe.Template","makePath",0xc73bdaff,"haxe.Template.makePath","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",286,0x4d73a5d4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(287)
	Dynamic tmp = l->first();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(287)
	Dynamic p = tmp;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(288)
	bool tmp1 = (p == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(288)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(288)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(288)
	if ((tmp2)){
		HX_STACK_LINE(288)
		tmp3 = (p->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic ) != HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(288)
		tmp3 = true;
	}
	HX_STACK_LINE(288)
	if ((tmp3)){
		HX_STACK_LINE(289)
		Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(289)
		return tmp4;
	}
	HX_STACK_LINE(290)
	l->pop();
	HX_STACK_LINE(291)
	Dynamic tmp4 = l->pop();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(291)
	Dynamic field = tmp4;		HX_STACK_VAR(field,"field");
	HX_STACK_LINE(292)
	bool tmp5 = (field == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(292)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(292)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(292)
	if ((tmp6)){
		HX_STACK_LINE(292)
		bool tmp8 = field->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(292)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(292)
		tmp7 = !(tmp9);
	}
	else{
		HX_STACK_LINE(292)
		tmp7 = true;
	}
	HX_STACK_LINE(292)
	if ((tmp7)){
		HX_STACK_LINE(293)
		::String tmp8 = field->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(293)
		HX_STACK_DO_THROW(tmp8);
	}
	HX_STACK_LINE(294)
	::String f = field->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(295)
	::EReg tmp8 = ::haxe::Template_obj::expr_trim;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(295)
	::String tmp9 = f;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(295)
	tmp8->match(tmp9);
	HX_STACK_LINE(296)
	::EReg tmp10 = ::haxe::Template_obj::expr_trim;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(296)
	::String tmp11 = tmp10->matched((int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(296)
	f = tmp11;
	HX_STACK_LINE(297)
	::List tmp12 = l;		HX_STACK_VAR(tmp12,"tmp12");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,e,::String,f)
	int __ArgCount() const { return 0; }
	Dynamic run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",297,0x4d73a5d4)
		{
			HX_STACK_LINE(297)
			Dynamic tmp13 = e();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(297)
			::String tmp14 = f;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(297)
			Dynamic tmp15 = ::Reflect_obj::field(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(297)
			return tmp15;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(297)
	Dynamic tmp13 = this->makePath( Dynamic(new _Function_1_1(e,f)),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(297)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC2(Template_obj,makePath,return )

Dynamic Template_obj::makeExpr( ::List l){
	HX_STACK_FRAME("haxe.Template","makeExpr",0xc007f28f,"haxe.Template.makeExpr","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",300,0x4d73a5d4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(301)
	::List tmp = l;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(301)
	Dynamic tmp1 = this->makeExpr2(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(301)
	::List tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(301)
	Dynamic tmp3 = this->makePath(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(301)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Template_obj,makeExpr,return )

Dynamic Template_obj::makeExpr2( ::List l){
	HX_STACK_FRAME("haxe.Template","makeExpr2",0x46ec4ac3,"haxe.Template.makeExpr2","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",304,0x4d73a5d4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(305)
	Dynamic tmp = l->pop();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(305)
	Dynamic p = tmp;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(306)
	bool tmp1 = (p == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	if ((tmp1)){
		HX_STACK_LINE(307)
		HX_STACK_DO_THROW(HX_HCSTRING("<eof>","\x3e","\xee","\x21","\xcf"));
	}
	HX_STACK_LINE(308)
	bool tmp2 = p->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(308)
	if ((tmp2)){
		HX_STACK_LINE(309)
		::String tmp3 = p->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(309)
		Dynamic tmp4 = this->makeConst(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(309)
		return tmp4;
	}
	HX_STACK_LINE(310)
	{
		HX_STACK_LINE(310)
		::String _g = p->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(310)
		::String tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(310)
		::String _switch_1 = (tmp3);
		if (  ( _switch_1==HX_HCSTRING("(","\x28","\x00","\x00","\x00"))){
			HX_STACK_LINE(312)
			::List tmp4 = l;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(312)
			Dynamic tmp5 = this->makeExpr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(312)
			Dynamic e1 = tmp5;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(313)
			Dynamic tmp6 = l->pop();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(313)
			Dynamic p1 = tmp6;		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(314)
			bool tmp7 = (p1 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(314)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(314)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(314)
			if ((tmp8)){
				HX_STACK_LINE(314)
				tmp9 = p1->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(314)
				tmp9 = true;
			}
			HX_STACK_LINE(314)
			if ((tmp9)){
				HX_STACK_LINE(315)
				::String tmp10 = p1->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(315)
				HX_STACK_DO_THROW(tmp10);
			}
			HX_STACK_LINE(316)
			bool tmp10 = (p1->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic ) == HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(316)
			if ((tmp10)){
				HX_STACK_LINE(317)
				Dynamic tmp11 = e1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(317)
				return tmp11;
			}
			HX_STACK_LINE(318)
			::List tmp11 = l;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(318)
			Dynamic tmp12 = this->makeExpr(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(318)
			Dynamic e2 = tmp12;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(319)
			Dynamic tmp13 = l->pop();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(319)
			Dynamic p2 = tmp13;		HX_STACK_VAR(p2,"p2");
			HX_STACK_LINE(320)
			bool tmp14 = (p2 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(320)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(320)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(320)
			if ((tmp15)){
				HX_STACK_LINE(320)
				tmp16 = (p2->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic ) != HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(320)
				tmp16 = true;
			}
			HX_STACK_LINE(320)
			if ((tmp16)){
				HX_STACK_LINE(321)
				::String tmp17 = p2->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(321)
				HX_STACK_DO_THROW(tmp17);
			}
			HX_STACK_LINE(322)
			Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				::String _g1 = p1->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(322)
				::String tmp18 = _g1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(322)
				::String _switch_2 = (tmp18);
				if (  ( _switch_2==HX_HCSTRING("+","\x2b","\x00","\x00","\x00"))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Dynamic,e1,Dynamic,e2)
					int __ArgCount() const { return 0; }
					Dynamic run(){
						HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",323,0x4d73a5d4)
						{
							HX_STACK_LINE(323)
							Dynamic tmp19 = e1();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(323)
							Dynamic tmp20 = e2();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(323)
							Dynamic tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(323)
							Dynamic tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(323)
							return tmp22;
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(323)
					tmp17 =  Dynamic(new _Function_5_1(e1,e2));
				}
				else if (  ( _switch_2==HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Dynamic,e1,Dynamic,e2)
					int __ArgCount() const { return 0; }
					Dynamic run(){
						HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",324,0x4d73a5d4)
						{
							HX_STACK_LINE(324)
							Dynamic tmp19 = e1();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(324)
							Dynamic tmp20 = e2();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(324)
							Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(324)
							Dynamic tmp22 = ((Dynamic)(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(324)
							return tmp22;
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(324)
					tmp17 =  Dynamic(new _Function_5_1(e1,e2));
				}
				else if (  ( _switch_2==HX_HCSTRING("*","\x2a","\x00","\x00","\x00"))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Dynamic,e1,Dynamic,e2)
					int __ArgCount() const { return 0; }
					Dynamic run(){
						HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",325,0x4d73a5d4)
						{
							HX_STACK_LINE(325)
							Dynamic tmp19 = e1();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(325)
							Dynamic tmp20 = e2();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(325)
							Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(325)
							Dynamic tmp22 = ((Dynamic)(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(325)
							return tmp22;
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(325)
					tmp17 =  Dynamic(new _Function_5_1(e1,e2));
				}
				else if (  ( _switch_2==HX_HCSTRING("/","\x2f","\x00","\x00","\x00"))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Dynamic,e1,Dynamic,e2)
					int __ArgCount() const { return 0; }
					Dynamic run(){
						HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",326,0x4d73a5d4)
						{
							HX_STACK_LINE(326)
							Dynamic tmp19 = e1();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(326)
							Dynamic tmp20 = e2();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(326)
							Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(326)
							Dynamic tmp22 = ((Dynamic)(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(326)
							return tmp22;
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(326)
					tmp17 =  Dynamic(new _Function_5_1(e1,e2));
				}
				else if (  ( _switch_2==HX_HCSTRING(">","\x3e","\x00","\x00","\x00"))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Dynamic,e1,Dynamic,e2)
					int __ArgCount() const { return 0; }
					Dynamic run(){
						HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",327,0x4d73a5d4)
						{
							HX_STACK_LINE(327)
							Dynamic tmp19 = e1();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(327)
							Dynamic tmp20 = e2();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(327)
							bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(327)
							Dynamic tmp22 = ((Dynamic)(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(327)
							return tmp22;
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(327)
					tmp17 =  Dynamic(new _Function_5_1(e1,e2));
				}
				else if (  ( _switch_2==HX_HCSTRING("<","\x3c","\x00","\x00","\x00"))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Dynamic,e1,Dynamic,e2)
					int __ArgCount() const { return 0; }
					Dynamic run(){
						HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",328,0x4d73a5d4)
						{
							HX_STACK_LINE(328)
							Dynamic tmp19 = e1();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(328)
							Dynamic tmp20 = e2();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(328)
							bool tmp21 = (tmp19 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(328)
							Dynamic tmp22 = ((Dynamic)(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(328)
							return tmp22;
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(328)
					tmp17 =  Dynamic(new _Function_5_1(e1,e2));
				}
				else if (  ( _switch_2==HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Dynamic,e1,Dynamic,e2)
					int __ArgCount() const { return 0; }
					Dynamic run(){
						HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",329,0x4d73a5d4)
						{
							HX_STACK_LINE(329)
							Dynamic tmp19 = e1();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(329)
							Dynamic tmp20 = e2();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(329)
							bool tmp21 = (tmp19 >= tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(329)
							Dynamic tmp22 = ((Dynamic)(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(329)
							return tmp22;
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(329)
					tmp17 =  Dynamic(new _Function_5_1(e1,e2));
				}
				else if (  ( _switch_2==HX_HCSTRING("<=","\x81","\x34","\x00","\x00"))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Dynamic,e1,Dynamic,e2)
					int __ArgCount() const { return 0; }
					Dynamic run(){
						HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",330,0x4d73a5d4)
						{
							HX_STACK_LINE(330)
							Dynamic tmp19 = e1();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(330)
							Dynamic tmp20 = e2();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(330)
							bool tmp21 = (tmp19 <= tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(330)
							Dynamic tmp22 = ((Dynamic)(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(330)
							return tmp22;
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(330)
					tmp17 =  Dynamic(new _Function_5_1(e1,e2));
				}
				else if (  ( _switch_2==HX_HCSTRING("==","\x60","\x35","\x00","\x00"))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Dynamic,e1,Dynamic,e2)
					int __ArgCount() const { return 0; }
					Dynamic run(){
						HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",331,0x4d73a5d4)
						{
							HX_STACK_LINE(331)
							Dynamic tmp19 = e1();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(331)
							Dynamic tmp20 = e2();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(331)
							bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(331)
							Dynamic tmp22 = ((Dynamic)(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(331)
							return tmp22;
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(331)
					tmp17 =  Dynamic(new _Function_5_1(e1,e2));
				}
				else if (  ( _switch_2==HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Dynamic,e1,Dynamic,e2)
					int __ArgCount() const { return 0; }
					Dynamic run(){
						HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",332,0x4d73a5d4)
						{
							HX_STACK_LINE(332)
							Dynamic tmp19 = e1();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(332)
							Dynamic tmp20 = e2();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(332)
							bool tmp21 = (tmp19 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(332)
							Dynamic tmp22 = ((Dynamic)(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(332)
							return tmp22;
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(332)
					tmp17 =  Dynamic(new _Function_5_1(e1,e2));
				}
				else if (  ( _switch_2==HX_HCSTRING("&&","\x40","\x21","\x00","\x00"))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Dynamic,e1,Dynamic,e2)
					int __ArgCount() const { return 0; }
					Dynamic run(){
						HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",333,0x4d73a5d4)
						{
							HX_STACK_LINE(333)
							Dynamic tmp19 = e1();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(333)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(333)
							if ((tmp19)){
								HX_STACK_LINE(333)
								tmp20 = e2();
							}
							else{
								HX_STACK_LINE(333)
								tmp20 = false;
							}
							HX_STACK_LINE(333)
							Dynamic tmp21 = ((Dynamic)(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(333)
							return tmp21;
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(333)
					tmp17 =  Dynamic(new _Function_5_1(e1,e2));
				}
				else if (  ( _switch_2==HX_HCSTRING("||","\x80","\x6c","\x00","\x00"))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Dynamic,e1,Dynamic,e2)
					int __ArgCount() const { return 0; }
					Dynamic run(){
						HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",334,0x4d73a5d4)
						{
							HX_STACK_LINE(334)
							Dynamic tmp19 = e1();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(334)
							bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(334)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(334)
							if ((tmp20)){
								HX_STACK_LINE(334)
								tmp21 = e2();
							}
							else{
								HX_STACK_LINE(334)
								tmp21 = true;
							}
							HX_STACK_LINE(334)
							Dynamic tmp22 = ((Dynamic)(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(334)
							return tmp22;
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(334)
					tmp17 =  Dynamic(new _Function_5_1(e1,e2));
				}
				else  {
					HX_STACK_LINE(335)
					::String tmp19 = (HX_HCSTRING("Unknown operation ","\x0f","\x7f","\x15","\x6f") + p1->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(335)
					HX_STACK_DO_THROW(tmp19);
				}
;
;
			}
			HX_STACK_LINE(322)
			return tmp17;
		}
		else if (  ( _switch_1==HX_HCSTRING("!","\x21","\x00","\x00","\x00"))){
			HX_STACK_LINE(338)
			::List tmp4 = l;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(338)
			Dynamic tmp5 = this->makeExpr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(338)
			Dynamic e = tmp5;		HX_STACK_VAR(e,"e");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e)
			int __ArgCount() const { return 0; }
			bool run(){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",339,0x4d73a5d4)
				{
					HX_STACK_LINE(340)
					Dynamic tmp6 = e();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(340)
					Dynamic v = tmp6;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(341)
					bool tmp7 = (v == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(341)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(341)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(341)
					if ((tmp8)){
						HX_STACK_LINE(341)
						tmp9 = (v == false);
					}
					else{
						HX_STACK_LINE(341)
						tmp9 = true;
					}
					HX_STACK_LINE(341)
					return tmp9;
				}
				return null();
			}
			HX_END_LOCAL_FUNC0(return)

			HX_STACK_LINE(339)
			return  Dynamic(new _Function_3_1(e));
		}
		else if (  ( _switch_1==HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))){
			HX_STACK_LINE(344)
			::List tmp4 = l;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(344)
			Dynamic tmp5 = this->makeExpr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(344)
			Dynamic e = tmp5;		HX_STACK_VAR(e,"e");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e)
			int __ArgCount() const { return 0; }
			Float run(){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",345,0x4d73a5d4)
				{
					HX_STACK_LINE(345)
					Dynamic tmp6 = e();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(345)
					Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(345)
					return tmp7;
				}
				return null();
			}
			HX_END_LOCAL_FUNC0(return)

			HX_STACK_LINE(345)
			return  Dynamic(new _Function_3_1(e));
		}
	}
	HX_STACK_LINE(347)
	::String tmp3 = p->__Field(HX_HCSTRING("p","\x70","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(347)
	HX_STACK_DO_THROW(tmp3);
	HX_STACK_LINE(347)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Template_obj,makeExpr2,return )

Void Template_obj::run( ::haxe::_Template::TemplateExpr e){
{
		HX_STACK_FRAME("haxe.Template","run",0xf7a2ca7f,"haxe.Template.run","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",351,0x4d73a5d4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(351)
		switch( (int)(e->__Index())){
			case (int)0: {
				HX_STACK_LINE(351)
				::String tmp = (::haxe::_Template::TemplateExpr(e))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(351)
				::String v = tmp;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(352)
				{
					HX_STACK_LINE(353)
					::StringBuf tmp1 = this->buf;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(353)
					::String tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(353)
					Dynamic tmp3 = this->resolve(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(353)
					::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(353)
					tmp1->add(tmp4);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(351)
				Dynamic tmp = (::haxe::_Template::TemplateExpr(e))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(351)
				Dynamic e1 = tmp;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(354)
				{
					HX_STACK_LINE(355)
					::StringBuf tmp1 = this->buf;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(355)
					Dynamic tmp2 = e1();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(355)
					::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(355)
					tmp1->add(tmp3);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(351)
				::haxe::_Template::TemplateExpr tmp = (::haxe::_Template::TemplateExpr(e))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(351)
				::haxe::_Template::TemplateExpr eelse = tmp;		HX_STACK_VAR(eelse,"eelse");
				HX_STACK_LINE(351)
				::haxe::_Template::TemplateExpr tmp1 = (::haxe::_Template::TemplateExpr(e))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(351)
				::haxe::_Template::TemplateExpr eif = tmp1;		HX_STACK_VAR(eif,"eif");
				HX_STACK_LINE(351)
				Dynamic tmp2 = (::haxe::_Template::TemplateExpr(e))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(351)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(357)
					Dynamic tmp3 = e1();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(357)
					Dynamic v = tmp3;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(358)
					bool tmp4 = (v == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(358)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(358)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(358)
					if ((tmp5)){
						HX_STACK_LINE(358)
						tmp6 = (v == false);
					}
					else{
						HX_STACK_LINE(358)
						tmp6 = true;
					}
					HX_STACK_LINE(358)
					if ((tmp6)){
						HX_STACK_LINE(359)
						bool tmp7 = (eelse != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(359)
						if ((tmp7)){
							HX_STACK_LINE(359)
							::haxe::_Template::TemplateExpr tmp8 = eelse;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(359)
							this->run(tmp8);
						}
					}
					else{
						HX_STACK_LINE(361)
						::haxe::_Template::TemplateExpr tmp7 = eif;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(361)
						this->run(tmp7);
					}
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(351)
				::String tmp = (::haxe::_Template::TemplateExpr(e))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(351)
				::String str = tmp;		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(362)
				{
					HX_STACK_LINE(363)
					::StringBuf tmp1 = this->buf;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(363)
					::String tmp2 = str;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(363)
					tmp1->add(tmp2);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(351)
				::List tmp = (::haxe::_Template::TemplateExpr(e))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(351)
				::List l = tmp;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::_List::ListIterator tmp1 = ::_List::ListIterator_obj::__new(l->h);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(365)
					::_List::ListIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(365)
					while((true)){
						HX_STACK_LINE(365)
						bool tmp2 = (_g->head != null());		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(365)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(365)
						if ((tmp3)){
							HX_STACK_LINE(365)
							break;
						}
						HX_STACK_LINE(365)
						Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							Dynamic tmp5 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(365)
							_g->val = tmp5;
							HX_STACK_LINE(365)
							Dynamic tmp6 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(365)
							_g->head = tmp6;
							HX_STACK_LINE(365)
							tmp4 = _g->val;
						}
						HX_STACK_LINE(365)
						::haxe::_Template::TemplateExpr e1 = ((::haxe::_Template::TemplateExpr)(tmp4));		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(366)
						::haxe::_Template::TemplateExpr tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(366)
						this->run(tmp5);
					}
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(351)
				::haxe::_Template::TemplateExpr tmp = (::haxe::_Template::TemplateExpr(e))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(351)
				::haxe::_Template::TemplateExpr loop = tmp;		HX_STACK_VAR(loop,"loop");
				HX_STACK_LINE(351)
				Dynamic tmp1 = (::haxe::_Template::TemplateExpr(e))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(351)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(367)
				{
					HX_STACK_LINE(368)
					Dynamic tmp2 = e1();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(368)
					Dynamic v = tmp2;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(369)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(370)
						Dynamic tmp3 = v->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(370)
						Dynamic x = tmp3;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(371)
						bool tmp4 = (x->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(371)
						if ((tmp4)){
							HX_STACK_LINE(371)
							HX_STACK_DO_THROW(null());
						}
						HX_STACK_LINE(372)
						v = x;
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e2 = __e;{
								HX_STACK_LINE(373)
								try
								{
								HX_STACK_CATCHABLE(Dynamic, 0);
								{
									HX_STACK_LINE(374)
									bool tmp3 = (v->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
									HX_STACK_LINE(374)
									if ((tmp3)){
										HX_STACK_LINE(374)
										HX_STACK_DO_THROW(null());
									}
								}
								}
								catch(Dynamic __e){
									{
										HX_STACK_BEGIN_CATCH
										Dynamic e3 = __e;{
											HX_STACK_LINE(376)
											Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
											HX_STACK_LINE(376)
											::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
											HX_STACK_LINE(376)
											::String tmp5 = (HX_HCSTRING("Cannot iter on ","\xb6","\xff","\x79","\xc3") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
											HX_STACK_LINE(376)
											HX_STACK_DO_THROW(tmp5);
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(378)
					::List tmp3 = this->stack;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(378)
					Dynamic tmp4 = this->context;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(378)
					tmp3->push(tmp4);
					HX_STACK_LINE(379)
					Dynamic v1 = v;		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(380)
					Dynamic tmp5 = v1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(380)
					for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp5);  __it->hasNext(); ){
						Dynamic ctx = __it->next();
						{
							HX_STACK_LINE(381)
							this->context = ctx;
							HX_STACK_LINE(382)
							::haxe::_Template::TemplateExpr tmp6 = loop;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(382)
							this->run(tmp6);
						}
;
					}
					HX_STACK_LINE(384)
					::List tmp6 = this->stack;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(384)
					Dynamic tmp7 = tmp6->pop();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(384)
					this->context = tmp7;
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(351)
				::List tmp = (::haxe::_Template::TemplateExpr(e))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(351)
				::List params = tmp;		HX_STACK_VAR(params,"params");
				HX_STACK_LINE(351)
				::String tmp1 = (::haxe::_Template::TemplateExpr(e))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(351)
				::String m = tmp1;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(385)
				{
					HX_STACK_LINE(386)
					Dynamic tmp2 = this->macros;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(386)
					::String tmp3 = m;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(386)
					Dynamic tmp4 = ::Reflect_obj::field(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(386)
					Dynamic v = tmp4;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(387)
					cpp::ArrayBase pl = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(pl,"pl");
					HX_STACK_LINE(388)
					::StringBuf tmp5 = this->buf;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(388)
					::StringBuf old = tmp5;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(389)
					Dynamic tmp6 = this->resolve_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(389)
					pl->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						::_List::ListIterator tmp7 = ::_List::ListIterator_obj::__new(params->h);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(390)
						::_List::ListIterator _g = tmp7;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(390)
						while((true)){
							HX_STACK_LINE(390)
							bool tmp8 = (_g->head != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(390)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(390)
							if ((tmp9)){
								HX_STACK_LINE(390)
								break;
							}
							HX_STACK_LINE(390)
							Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(390)
							{
								HX_STACK_LINE(390)
								Dynamic tmp11 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(390)
								_g->val = tmp11;
								HX_STACK_LINE(390)
								Dynamic tmp12 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(390)
								_g->head = tmp12;
								HX_STACK_LINE(390)
								tmp10 = _g->val;
							}
							HX_STACK_LINE(390)
							::haxe::_Template::TemplateExpr p = ((::haxe::_Template::TemplateExpr)(tmp10));		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(391)
							switch( (int)(p->__Index())){
								case (int)0: {
									HX_STACK_LINE(391)
									::String tmp11 = (::haxe::_Template::TemplateExpr(p))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(391)
									::String v1 = tmp11;		HX_STACK_VAR(v1,"v1");
									HX_STACK_LINE(392)
									{
										HX_STACK_LINE(392)
										::String tmp12 = v1;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(392)
										Dynamic tmp13 = this->resolve(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(392)
										pl->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp13);
									}
								}
								;break;
								default: {
									HX_STACK_LINE(394)
									::StringBuf tmp11 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(394)
									this->buf = tmp11;
									HX_STACK_LINE(395)
									::haxe::_Template::TemplateExpr tmp12 = p;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(395)
									this->run(tmp12);
									HX_STACK_LINE(396)
									::StringBuf tmp13 = this->buf;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(396)
									::String tmp14 = tmp13->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(396)
									pl->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp14);
								}
							}
						}
					}
					HX_STACK_LINE(399)
					this->buf = old;
					HX_STACK_LINE(400)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(401)
						::StringBuf tmp7 = this->buf;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(401)
						Dynamic tmp8 = this->macros;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(401)
						Dynamic tmp9 = v;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(401)
						Dynamic tmp10 = ::Reflect_obj::callMethod(tmp8,tmp9,pl);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(401)
						::String tmp11 = ::Std_obj::string(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(401)
						tmp7->add(tmp11);
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e1 = __e;{
								HX_STACK_LINE(403)
								::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(403)
								try
								{
								HX_STACK_CATCHABLE(Dynamic, 0);
								{
									HX_STACK_LINE(403)
									tmp7 = pl->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
								}
								}
								catch(Dynamic __e){
									{
										HX_STACK_BEGIN_CATCH
										Dynamic e2 = __e;{
											HX_STACK_LINE(403)
											tmp7 = HX_HCSTRING("???","\x1f","\x05","\x30","\x00");
										}
									}
								}
								HX_STACK_LINE(403)
								::String plstr = tmp7;		HX_STACK_VAR(plstr,"plstr");
								HX_STACK_LINE(404)
								::String tmp8 = (HX_HCSTRING("Macro call ","\x8e","\x96","\x45","\xbf") + m);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(404)
								::String tmp9 = (tmp8 + HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(404)
								::String tmp10 = plstr;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(404)
								::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(404)
								::String tmp12 = (tmp11 + HX_HCSTRING(") failed (","\xdc","\xdd","\xa3","\x23"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(404)
								Dynamic tmp13 = e1;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(404)
								::String tmp14 = ::Std_obj::string(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(404)
								::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(404)
								::String tmp16 = (tmp15 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(404)
								::String msg = tmp16;		HX_STACK_VAR(msg,"msg");
								HX_STACK_LINE(408)
								::String tmp17 = msg;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(408)
								HX_STACK_DO_THROW(tmp17);
							}
						}
					}
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Template_obj,run,(void))

::EReg Template_obj::splitter;

::EReg Template_obj::expr_splitter;

::EReg Template_obj::expr_trim;

::EReg Template_obj::expr_int;

::EReg Template_obj::expr_float;

Dynamic Template_obj::globals;


Template_obj::Template_obj()
{
}

void Template_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Template);
	HX_MARK_MEMBER_NAME(expr,"expr");
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(macros,"macros");
	HX_MARK_MEMBER_NAME(stack,"stack");
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_END_CLASS();
}

void Template_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(expr,"expr");
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(macros,"macros");
	HX_VISIT_MEMBER_NAME(stack,"stack");
	HX_VISIT_MEMBER_NAME(buf,"buf");
}

Dynamic Template_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return buf; }
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"expr") ) { return expr; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { return stack; }
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"macros") ) { return macros; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"makePath") ) { return makePath_dyn(); }
		if (HX_FIELD_EQ(inName,"makeExpr") ) { return makeExpr_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseExpr") ) { return parseExpr_dyn(); }
		if (HX_FIELD_EQ(inName,"makeConst") ) { return makeConst_dyn(); }
		if (HX_FIELD_EQ(inName,"makeExpr2") ) { return makeExpr2_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseBlock") ) { return parseBlock_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseTokens") ) { return parseTokens_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Template_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { outValue = globals; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"splitter") ) { outValue = splitter; return true;  }
		if (HX_FIELD_EQ(inName,"expr_int") ) { outValue = expr_int; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"expr_trim") ) { outValue = expr_trim; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"expr_float") ) { outValue = expr_float; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"expr_splitter") ) { outValue = expr_splitter; return true;  }
	}
	return false;
}

Dynamic Template_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< ::StringBuf >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"expr") ) { expr=inValue.Cast< ::haxe::_Template::TemplateExpr >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { stack=inValue.Cast< ::List >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"macros") ) { macros=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Template_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { globals=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"splitter") ) { splitter=ioValue.Cast< ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"expr_int") ) { expr_int=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"expr_trim") ) { expr_trim=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"expr_float") ) { expr_float=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"expr_splitter") ) { expr_splitter=ioValue.Cast< ::EReg >(); return true; }
	}
	return false;
}

void Template_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"));
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("macros","\xe7","\x9a","\x8b","\xb0"));
	outFields->push(HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"));
	outFields->push(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::_Template::TemplateExpr*/ ,(int)offsetof(Template_obj,expr),HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Template_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Template_obj,macros),HX_HCSTRING("macros","\xe7","\x9a","\x8b","\xb0")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Template_obj,stack),HX_HCSTRING("stack","\x48","\x67","\x0b","\x84")},
	{hx::fsObject /*::StringBuf*/ ,(int)offsetof(Template_obj,buf),HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(void *) &Template_obj::splitter,HX_HCSTRING("splitter","\x47","\x37","\xb0","\xd3")},
	{hx::fsObject /*::EReg*/ ,(void *) &Template_obj::expr_splitter,HX_HCSTRING("expr_splitter","\xd1","\x62","\x6b","\x74")},
	{hx::fsObject /*::EReg*/ ,(void *) &Template_obj::expr_trim,HX_HCSTRING("expr_trim","\x6c","\xbb","\x0b","\xcf")},
	{hx::fsObject /*::EReg*/ ,(void *) &Template_obj::expr_int,HX_HCSTRING("expr_int","\xa5","\x8d","\xb8","\xb9")},
	{hx::fsObject /*::EReg*/ ,(void *) &Template_obj::expr_float,HX_HCSTRING("expr_float","\xd2","\x5f","\xa9","\x47")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Template_obj::globals,HX_HCSTRING("globals","\xb0","\x05","\x39","\x14")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"),
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("macros","\xe7","\x9a","\x8b","\xb0"),
	HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"),
	HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"),
	HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("parseTokens","\xed","\xc3","\x23","\x0d"),
	HX_HCSTRING("parseBlock","\x1a","\xbc","\xdd","\xde"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("parseExpr","\x08","\x4f","\xc4","\xca"),
	HX_HCSTRING("makeConst","\x95","\x70","\xf6","\x1d"),
	HX_HCSTRING("makePath","\xb3","\xda","\xef","\x40"),
	HX_HCSTRING("makeExpr","\x43","\xf2","\xbb","\x39"),
	HX_HCSTRING("makeExpr2","\x8f","\x08","\xb8","\x4a"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Template_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Template_obj::splitter,"splitter");
	HX_MARK_MEMBER_NAME(Template_obj::expr_splitter,"expr_splitter");
	HX_MARK_MEMBER_NAME(Template_obj::expr_trim,"expr_trim");
	HX_MARK_MEMBER_NAME(Template_obj::expr_int,"expr_int");
	HX_MARK_MEMBER_NAME(Template_obj::expr_float,"expr_float");
	HX_MARK_MEMBER_NAME(Template_obj::globals,"globals");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Template_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Template_obj::splitter,"splitter");
	HX_VISIT_MEMBER_NAME(Template_obj::expr_splitter,"expr_splitter");
	HX_VISIT_MEMBER_NAME(Template_obj::expr_trim,"expr_trim");
	HX_VISIT_MEMBER_NAME(Template_obj::expr_int,"expr_int");
	HX_VISIT_MEMBER_NAME(Template_obj::expr_float,"expr_float");
	HX_VISIT_MEMBER_NAME(Template_obj::globals,"globals");
};

#endif

hx::Class Template_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("splitter","\x47","\x37","\xb0","\xd3"),
	HX_HCSTRING("expr_splitter","\xd1","\x62","\x6b","\x74"),
	HX_HCSTRING("expr_trim","\x6c","\xbb","\x0b","\xcf"),
	HX_HCSTRING("expr_int","\xa5","\x8d","\xb8","\xb9"),
	HX_HCSTRING("expr_float","\xd2","\x5f","\xa9","\x47"),
	HX_HCSTRING("globals","\xb0","\x05","\x39","\x14"),
	::String(null()) };

void Template_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Template","\xa2","\x99","\xb9","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Template_obj::__GetStatic;
	__mClass->mSetStaticField = &Template_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Template_obj >;
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

void Template_obj::__boot()
{
	splitter= ::EReg_obj::__new(HX_HCSTRING("(::[A-Za-z0-9_ ()&|!+=/><*.\"-]+::|\\$\\$([A-Za-z0-9_-]+)\\()","\xe5","\xee","\x5c","\xfe"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	expr_splitter= ::EReg_obj::__new(HX_HCSTRING("(\\(|\\)|[ \r\n\t]*\"[^\"]*\"[ \r\n\t]*|[!+=/><*.&|-]+)","\xea","\x08","\x2c","\xb0"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	expr_trim= ::EReg_obj::__new(HX_HCSTRING("^[ ]*([^ ]+)[ ]*$","\x1c","\x7f","\x18","\x5f"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	expr_int= ::EReg_obj::__new(HX_HCSTRING("^[0-9]+$","\x17","\x6b","\xc4","\x08"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	expr_float= ::EReg_obj::__new(HX_HCSTRING("^([+-]?)(?=\\d|,\\d)\\d*(,\\d*)?([Ee]([+-]?\\d+))?$","\x30","\xca","\x4e","\xef"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",64,0x4d73a5d4)
		{
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/Template.hx",64,0x4d73a5d4)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(64)
			Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(64)
			return tmp;
		}
		return null();
	}
};
	globals= _Function_0_1::Block();
}

} // end namespace haxe
