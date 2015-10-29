#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml_Attrib
#include <haxe/xml/Attrib.h>
#endif
#ifndef INCLUDED_haxe_xml_Check
#include <haxe/xml/Check.h>
#endif
#ifndef INCLUDED_haxe_xml_Filter
#include <haxe/xml/Filter.h>
#endif
#ifndef INCLUDED_haxe_xml_Rule
#include <haxe/xml/Rule.h>
#endif
#ifndef INCLUDED_haxe_xml__Check_CheckResult
#include <haxe/xml/_Check/CheckResult.h>
#endif
namespace haxe{
namespace xml{

Void Check_obj::__construct()
{
	return null();
}

//Check_obj::~Check_obj() { }

Dynamic Check_obj::__CreateEmpty() { return  new Check_obj; }
hx::ObjectPtr< Check_obj > Check_obj::__new()
{  hx::ObjectPtr< Check_obj > _result_ = new Check_obj();
	_result_->__construct();
	return _result_;}

Dynamic Check_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Check_obj > _result_ = new Check_obj();
	_result_->__construct();
	return _result_;}

::EReg Check_obj::blanks;

bool Check_obj::isBlank( ::Xml x){
	HX_STACK_FRAME("haxe.xml.Check","isBlank",0xd3446a25,"haxe.xml.Check.isBlank","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Check.hx",61,0x6a06705e)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(62)
	int tmp = x->nodeType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	int tmp1 = ::Xml_obj::PCData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	if ((tmp3)){
		HX_STACK_LINE(62)
		::EReg tmp5 = ::haxe::xml::Check_obj::blanks;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		::EReg tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(62)
		::EReg tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(62)
		::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			int tmp9 = x->nodeType;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(62)
			int tmp10 = ::Xml_obj::Document;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(62)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(62)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(62)
			bool tmp13 = (tmp9 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(62)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(62)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(62)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(62)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(62)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(62)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(62)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(62)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(62)
			bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(62)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(62)
			if ((tmp23)){
				HX_STACK_LINE(62)
				int tmp24 = x->nodeType;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(62)
				int tmp25 = ::Xml_obj::Element;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(62)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(62)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(62)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(62)
				bool tmp29 = (tmp24 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(62)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(62)
				tmp21 = tmp30;
			}
			else{
				HX_STACK_LINE(62)
				tmp21 = true;
			}
			HX_STACK_LINE(62)
			bool tmp24 = tmp21;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(62)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(62)
			if ((tmp25)){
				HX_STACK_LINE(62)
				::String tmp26 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + x->nodeType);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(62)
				::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(62)
				::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(62)
				::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(62)
				::String tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(62)
				HX_STACK_DO_THROW(tmp30);
			}
			HX_STACK_LINE(62)
			tmp8 = x->nodeValue;
		}
		HX_STACK_LINE(62)
		::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(62)
		::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(62)
		tmp4 = tmp7->match(tmp10);
	}
	else{
		HX_STACK_LINE(62)
		tmp4 = false;
	}
	HX_STACK_LINE(62)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	if ((tmp5)){
		HX_STACK_LINE(62)
		int tmp7 = x->nodeType;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(62)
		int tmp8 = ::Xml_obj::Comment;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(62)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(62)
		tmp6 = (tmp7 == tmp9);
	}
	else{
		HX_STACK_LINE(62)
		tmp6 = true;
	}
	HX_STACK_LINE(62)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Check_obj,isBlank,return )

bool Check_obj::filterMatch( ::String s,::haxe::xml::Filter f){
	HX_STACK_FRAME("haxe.xml.Check","filterMatch",0x2673af08,"haxe.xml.Check.filterMatch","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Check.hx",66,0x6a06705e)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(66)
	switch( (int)(f->__Index())){
		case (int)0: {
			HX_STACK_LINE(67)
			::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(67)
			::EReg tmp1 = ::EReg_obj::__new(HX_HCSTRING("[0-9]+","\x8f","\xd9","\x9f","\x23"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			::haxe::xml::Filter tmp2 = ::haxe::xml::Filter_obj::FReg(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			bool tmp3 = ::haxe::xml::Check_obj::filterMatch(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			return tmp3;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(68)
			::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(68)
			::haxe::xml::Filter tmp1 = ::haxe::xml::Filter_obj::FEnum(Array_obj< ::String >::__new().Add(HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d")).Add(HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb")).Add(HX_HCSTRING("0","\x30","\x00","\x00","\x00")).Add(HX_HCSTRING("1","\x31","\x00","\x00","\x00")));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(68)
			bool tmp2 = ::haxe::xml::Check_obj::filterMatch(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(68)
			return tmp2;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(66)
			Array< ::String > values = (::haxe::xml::Filter(f))->__Param(0);		HX_STACK_VAR(values,"values");
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(70)
				{
					HX_STACK_LINE(70)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(70)
					while((true)){
						HX_STACK_LINE(70)
						bool tmp = (_g < values->length);		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(70)
						bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(70)
						if ((tmp1)){
							HX_STACK_LINE(70)
							break;
						}
						HX_STACK_LINE(70)
						::String tmp2 = values->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(70)
						::String v = tmp2;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(70)
						++(_g);
						HX_STACK_LINE(71)
						bool tmp3 = (s == v);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(71)
						if ((tmp3)){
							HX_STACK_LINE(72)
							return true;
						}
					}
				}
				HX_STACK_LINE(73)
				return false;
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(66)
			::EReg tmp = (::haxe::xml::Filter(f))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(66)
			::EReg r = tmp;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(74)
			{
				HX_STACK_LINE(75)
				::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(75)
				bool tmp2 = r->match(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(75)
				return tmp2;
			}
		}
		;break;
	}
	HX_STACK_LINE(66)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Check_obj,filterMatch,return )

bool Check_obj::isNullable( ::haxe::xml::Rule r){
	HX_STACK_FRAME("haxe.xml.Check","isNullable",0x15bba970,"haxe.xml.Check.isNullable","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Check.hx",80,0x6a06705e)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(80)
	switch( (int)(r->__Index())){
		case (int)2: {
			HX_STACK_LINE(80)
			Dynamic tmp = (::haxe::xml::Rule(r))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(80)
			Dynamic one = tmp;		HX_STACK_VAR(one,"one");
			HX_STACK_LINE(80)
			::haxe::xml::Rule tmp1 = (::haxe::xml::Rule(r))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(80)
			::haxe::xml::Rule r1 = tmp1;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(82)
				bool tmp2 = (one != true);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(82)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(82)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(82)
				if ((tmp3)){
					HX_STACK_LINE(82)
					::haxe::xml::Rule tmp5 = r1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(82)
					::haxe::xml::Rule tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(82)
					tmp4 = ::haxe::xml::Check_obj::isNullable(tmp6);
				}
				else{
					HX_STACK_LINE(82)
					tmp4 = true;
				}
				HX_STACK_LINE(82)
				return tmp4;
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(80)
			Array< ::Dynamic > rl = (::haxe::xml::Rule(r))->__Param(0);		HX_STACK_VAR(rl,"rl");
			HX_STACK_LINE(83)
			{
				HX_STACK_LINE(84)
				{
					HX_STACK_LINE(84)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(84)
					while((true)){
						HX_STACK_LINE(84)
						bool tmp = (_g < rl->length);		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(84)
						bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(84)
						if ((tmp1)){
							HX_STACK_LINE(84)
							break;
						}
						HX_STACK_LINE(84)
						::haxe::xml::Rule tmp2 = rl->__get(_g).StaticCast< ::haxe::xml::Rule >();		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(84)
						::haxe::xml::Rule r1 = tmp2;		HX_STACK_VAR(r1,"r1");
						HX_STACK_LINE(84)
						++(_g);
						HX_STACK_LINE(85)
						::haxe::xml::Rule tmp3 = r1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(85)
						bool tmp4 = ::haxe::xml::Check_obj::isNullable(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(85)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(85)
						if ((tmp5)){
							HX_STACK_LINE(86)
							return false;
						}
					}
				}
				HX_STACK_LINE(87)
				return true;
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(80)
			Array< ::Dynamic > rl = (::haxe::xml::Rule(r))->__Param(0);		HX_STACK_VAR(rl,"rl");
			HX_STACK_LINE(88)
			{
				HX_STACK_LINE(89)
				{
					HX_STACK_LINE(89)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(89)
					while((true)){
						HX_STACK_LINE(89)
						bool tmp = (_g < rl->length);		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(89)
						bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(89)
						if ((tmp1)){
							HX_STACK_LINE(89)
							break;
						}
						HX_STACK_LINE(89)
						::haxe::xml::Rule tmp2 = rl->__get(_g).StaticCast< ::haxe::xml::Rule >();		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(89)
						::haxe::xml::Rule r1 = tmp2;		HX_STACK_VAR(r1,"r1");
						HX_STACK_LINE(89)
						++(_g);
						HX_STACK_LINE(90)
						::haxe::xml::Rule tmp3 = r1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(90)
						bool tmp4 = ::haxe::xml::Check_obj::isNullable(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(90)
						if ((tmp4)){
							HX_STACK_LINE(91)
							return true;
						}
					}
				}
				HX_STACK_LINE(92)
				return false;
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(94)
			return false;
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(96)
			return false;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(98)
			return true;
		}
		;break;
	}
	HX_STACK_LINE(80)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Check_obj,isNullable,return )

::haxe::xml::_Check::CheckResult Check_obj::check( ::Xml x,::haxe::xml::Rule r){
	HX_STACK_FRAME("haxe.xml.Check","check",0xc9b3f323,"haxe.xml.Check.check","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Check.hx",103,0x6a06705e)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(103)
	switch( (int)(r->__Index())){
		case (int)0: {
			HX_STACK_LINE(103)
			::haxe::xml::Rule tmp = (::haxe::xml::Rule(r))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(103)
			::haxe::xml::Rule childs = tmp;		HX_STACK_VAR(childs,"childs");
			HX_STACK_LINE(103)
			Array< ::Dynamic > attribs = (::haxe::xml::Rule(r))->__Param(1);		HX_STACK_VAR(attribs,"attribs");
			HX_STACK_LINE(103)
			::String tmp1 = (::haxe::xml::Rule(r))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			::String name = tmp1;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(105)
			{
				HX_STACK_LINE(106)
				int tmp2 = x->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(106)
				int tmp3 = ::Xml_obj::Element;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(106)
				bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(106)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(106)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(106)
				if ((tmp5)){
					HX_STACK_LINE(106)
					::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(106)
					{
						HX_STACK_LINE(106)
						int tmp8 = x->nodeType;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(106)
						int tmp9 = ::Xml_obj::Element;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(106)
						int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(106)
						bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(106)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(106)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(106)
						if ((tmp13)){
							HX_STACK_LINE(106)
							::String tmp14 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + x->nodeType);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(106)
							::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(106)
							::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(106)
							HX_STACK_DO_THROW(tmp16);
						}
						HX_STACK_LINE(106)
						tmp7 = x->nodeName;
					}
					HX_STACK_LINE(106)
					::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(106)
					tmp6 = (tmp7 != tmp8);
				}
				else{
					HX_STACK_LINE(106)
					tmp6 = true;
				}
				HX_STACK_LINE(106)
				if ((tmp6)){
					HX_STACK_LINE(107)
					::String tmp7 = name;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(107)
					::Xml tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(107)
					::haxe::xml::_Check::CheckResult tmp9 = ::haxe::xml::_Check::CheckResult_obj::CElementExpected(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(107)
					return tmp9;
				}
				HX_STACK_LINE(108)
				bool tmp7 = (attribs == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(108)
				Array< ::Dynamic > attribs1;		HX_STACK_VAR(attribs1,"attribs1");
				HX_STACK_LINE(108)
				if ((tmp7)){
					HX_STACK_LINE(108)
					attribs1 = Array_obj< ::Dynamic >::__new();
				}
				else{
					HX_STACK_LINE(108)
					attribs1 = attribs->copy();
				}
				HX_STACK_LINE(110)
				Dynamic tmp8 = x->attributes();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(110)
				for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp8);  __it->hasNext(); ){
					::String xatt = __it->next();
					{
						HX_STACK_LINE(111)
						bool found = false;		HX_STACK_VAR(found,"found");
						HX_STACK_LINE(112)
						{
							HX_STACK_LINE(112)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(112)
							while((true)){
								HX_STACK_LINE(112)
								bool tmp9 = (_g < attribs1->length);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(112)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(112)
								if ((tmp10)){
									HX_STACK_LINE(112)
									break;
								}
								HX_STACK_LINE(112)
								::haxe::xml::Attrib tmp11 = attribs1->__get(_g).StaticCast< ::haxe::xml::Attrib >();		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(112)
								::haxe::xml::Attrib att = tmp11;		HX_STACK_VAR(att,"att");
								HX_STACK_LINE(112)
								++(_g);
								HX_STACK_LINE(113)
								{
									HX_STACK_LINE(113)
									::haxe::xml::Filter tmp12 = (::haxe::xml::Attrib(att))->__Param(1);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(113)
									::haxe::xml::Filter filter = tmp12;		HX_STACK_VAR(filter,"filter");
									HX_STACK_LINE(113)
									::String tmp13 = (::haxe::xml::Attrib(att))->__Param(0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(113)
									::String name1 = tmp13;		HX_STACK_VAR(name1,"name1");
									HX_STACK_LINE(114)
									{
										HX_STACK_LINE(115)
										bool tmp14 = (xatt != name1);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(115)
										if ((tmp14)){
											HX_STACK_LINE(116)
											continue;
										}
										HX_STACK_LINE(117)
										bool tmp15 = (filter != null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(117)
										bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(117)
										if ((tmp15)){
											HX_STACK_LINE(117)
											::String tmp17 = xatt;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(117)
											::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(117)
											::String tmp19 = x->get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(117)
											::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(117)
											::haxe::xml::Filter tmp21 = filter;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(117)
											::String tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(117)
											::haxe::xml::Filter tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(117)
											bool tmp24 = ::haxe::xml::Check_obj::filterMatch(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(117)
											bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(117)
											bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(117)
											tmp16 = !(tmp26);
										}
										else{
											HX_STACK_LINE(117)
											tmp16 = false;
										}
										HX_STACK_LINE(117)
										if ((tmp16)){
											HX_STACK_LINE(118)
											::String tmp17 = name1;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(118)
											::Xml tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(118)
											::haxe::xml::Filter tmp19 = filter;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(118)
											::haxe::xml::_Check::CheckResult tmp20 = ::haxe::xml::_Check::CheckResult_obj::CInvalidAttrib(tmp17,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(118)
											return tmp20;
										}
										HX_STACK_LINE(119)
										::haxe::xml::Attrib tmp17 = att;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(119)
										attribs1->remove(tmp17);
										HX_STACK_LINE(120)
										found = true;
									}
								}
							}
						}
						HX_STACK_LINE(122)
						bool tmp9 = found;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(122)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(122)
						if ((tmp10)){
							HX_STACK_LINE(123)
							::String tmp11 = xatt;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(123)
							::Xml tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(123)
							::haxe::xml::_Check::CheckResult tmp13 = ::haxe::xml::_Check::CheckResult_obj::CExtraAttrib(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(123)
							return tmp13;
						}
					}
;
				}
				HX_STACK_LINE(126)
				{
					HX_STACK_LINE(126)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(126)
					while((true)){
						HX_STACK_LINE(126)
						bool tmp9 = (_g < attribs1->length);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(126)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(126)
						if ((tmp10)){
							HX_STACK_LINE(126)
							break;
						}
						HX_STACK_LINE(126)
						::haxe::xml::Attrib tmp11 = attribs1->__get(_g).StaticCast< ::haxe::xml::Attrib >();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(126)
						::haxe::xml::Attrib att = tmp11;		HX_STACK_VAR(att,"att");
						HX_STACK_LINE(126)
						++(_g);
						HX_STACK_LINE(127)
						{
							HX_STACK_LINE(127)
							::String tmp12 = (::haxe::xml::Attrib(att))->__Param(2);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(127)
							::String defvalue = tmp12;		HX_STACK_VAR(defvalue,"defvalue");
							HX_STACK_LINE(127)
							::String tmp13 = (::haxe::xml::Attrib(att))->__Param(0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(127)
							::String name1 = tmp13;		HX_STACK_VAR(name1,"name1");
							HX_STACK_LINE(128)
							{
								HX_STACK_LINE(129)
								bool tmp14 = (defvalue == null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(129)
								if ((tmp14)){
									HX_STACK_LINE(130)
									::String tmp15 = name1;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(130)
									::Xml tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(130)
									::haxe::xml::_Check::CheckResult tmp17 = ::haxe::xml::_Check::CheckResult_obj::CMissingAttrib(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(130)
									return tmp17;
								}
							}
						}
					}
				}
				HX_STACK_LINE(133)
				bool tmp9 = (childs == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(133)
				if ((tmp9)){
					HX_STACK_LINE(134)
					::haxe::xml::Rule tmp10 = ::haxe::xml::Rule_obj::RList(Array_obj< ::Dynamic >::__new(),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(134)
					childs = tmp10;
				}
				HX_STACK_LINE(135)
				Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(135)
				{
					HX_STACK_LINE(135)
					{
						HX_STACK_LINE(135)
						int tmp11 = x->nodeType;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(135)
						int tmp12 = ::Xml_obj::Document;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(135)
						bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(135)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(135)
						if ((tmp13)){
							HX_STACK_LINE(135)
							int tmp15 = x->nodeType;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(135)
							int tmp16 = ::Xml_obj::Element;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(135)
							int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(135)
							tmp14 = (tmp15 != tmp17);
						}
						else{
							HX_STACK_LINE(135)
							tmp14 = false;
						}
						HX_STACK_LINE(135)
						if ((tmp14)){
							HX_STACK_LINE(135)
							::String tmp15 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + x->nodeType);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(135)
							HX_STACK_DO_THROW(tmp15);
						}
					}
					HX_STACK_LINE(135)
					tmp10 = x->children->iteratorFast< ::Xml >();
				}
				HX_STACK_LINE(135)
				::haxe::xml::Rule tmp11 = childs;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(135)
				::haxe::xml::_Check::CheckResult tmp12 = ::haxe::xml::Check_obj::checkList(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(135)
				::haxe::xml::_Check::CheckResult m = tmp12;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(136)
				bool tmp13 = (m != ::haxe::xml::_Check::CheckResult_obj::CMatch);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(136)
				if ((tmp13)){
					HX_STACK_LINE(137)
					::Xml tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(137)
					::haxe::xml::_Check::CheckResult tmp15 = m;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(137)
					::haxe::xml::_Check::CheckResult tmp16 = ::haxe::xml::_Check::CheckResult_obj::CInElement(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(137)
					return tmp16;
				}
				HX_STACK_LINE(139)
				{
					HX_STACK_LINE(139)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(139)
					while((true)){
						HX_STACK_LINE(139)
						bool tmp14 = (_g < attribs1->length);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(139)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(139)
						if ((tmp15)){
							HX_STACK_LINE(139)
							break;
						}
						HX_STACK_LINE(139)
						::haxe::xml::Attrib tmp16 = attribs1->__get(_g).StaticCast< ::haxe::xml::Attrib >();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(139)
						::haxe::xml::Attrib att = tmp16;		HX_STACK_VAR(att,"att");
						HX_STACK_LINE(139)
						++(_g);
						HX_STACK_LINE(140)
						{
							HX_STACK_LINE(140)
							::String tmp17 = (::haxe::xml::Attrib(att))->__Param(2);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(140)
							::String defvalue = tmp17;		HX_STACK_VAR(defvalue,"defvalue");
							HX_STACK_LINE(140)
							::String tmp18 = (::haxe::xml::Attrib(att))->__Param(0);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(140)
							::String name1 = tmp18;		HX_STACK_VAR(name1,"name1");
							HX_STACK_LINE(141)
							{
								HX_STACK_LINE(142)
								::String tmp19 = name1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(142)
								::String tmp20 = defvalue;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(142)
								x->set(tmp19,tmp20);
							}
						}
					}
				}
				HX_STACK_LINE(144)
				return ::haxe::xml::_Check::CheckResult_obj::CMatch;
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(103)
			::haxe::xml::Filter tmp = (::haxe::xml::Rule(r))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(103)
			::haxe::xml::Filter filter = tmp;		HX_STACK_VAR(filter,"filter");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(147)
				int tmp1 = x->nodeType;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(147)
				int tmp2 = ::Xml_obj::PCData;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(147)
				bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(147)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(147)
				if ((tmp3)){
					HX_STACK_LINE(147)
					int tmp5 = x->nodeType;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(147)
					int tmp6 = ::Xml_obj::CData;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(147)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(147)
					tmp4 = (tmp5 != tmp7);
				}
				else{
					HX_STACK_LINE(147)
					tmp4 = false;
				}
				HX_STACK_LINE(147)
				if ((tmp4)){
					HX_STACK_LINE(148)
					::Xml tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(148)
					::haxe::xml::_Check::CheckResult tmp6 = ::haxe::xml::_Check::CheckResult_obj::CDataExpected(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(148)
					return tmp6;
				}
				HX_STACK_LINE(149)
				bool tmp5 = (filter != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(149)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(149)
				if ((tmp5)){
					HX_STACK_LINE(149)
					::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(149)
					{
						HX_STACK_LINE(149)
						int tmp8 = x->nodeType;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(149)
						int tmp9 = ::Xml_obj::Document;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(149)
						int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(149)
						bool tmp11 = (tmp8 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(149)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(149)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(149)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(149)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(149)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(149)
						bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(149)
						if ((tmp17)){
							HX_STACK_LINE(149)
							int tmp18 = x->nodeType;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(149)
							int tmp19 = ::Xml_obj::Element;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(149)
							int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(149)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(149)
							bool tmp22 = (tmp18 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(149)
							tmp16 = tmp22;
						}
						else{
							HX_STACK_LINE(149)
							tmp16 = true;
						}
						HX_STACK_LINE(149)
						bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(149)
						if ((tmp18)){
							HX_STACK_LINE(149)
							::String tmp19 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + x->nodeType);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(149)
							::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(149)
							::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(149)
							HX_STACK_DO_THROW(tmp21);
						}
						HX_STACK_LINE(149)
						tmp7 = x->nodeValue;
					}
					HX_STACK_LINE(149)
					::haxe::xml::Filter tmp8 = filter;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(149)
					::String tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(149)
					::haxe::xml::Filter tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(149)
					bool tmp11 = ::haxe::xml::Check_obj::filterMatch(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(149)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(149)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(149)
					tmp6 = !(tmp13);
				}
				else{
					HX_STACK_LINE(149)
					tmp6 = false;
				}
				HX_STACK_LINE(149)
				if ((tmp6)){
					HX_STACK_LINE(150)
					::Xml tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(150)
					::haxe::xml::Filter tmp8 = filter;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(150)
					::haxe::xml::_Check::CheckResult tmp9 = ::haxe::xml::_Check::CheckResult_obj::CInvalidData(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(150)
					return tmp9;
				}
				HX_STACK_LINE(151)
				return ::haxe::xml::_Check::CheckResult_obj::CMatch;
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(103)
			Array< ::Dynamic > choices = (::haxe::xml::Rule(r))->__Param(0);		HX_STACK_VAR(choices,"choices");
			HX_STACK_LINE(153)
			{
				HX_STACK_LINE(154)
				bool tmp = (choices->length == (int)0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(154)
				if ((tmp)){
					HX_STACK_LINE(155)
					HX_STACK_DO_THROW(HX_HCSTRING("No choice possible","\x51","\xa9","\x26","\xc9"));
				}
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(156)
					while((true)){
						HX_STACK_LINE(156)
						bool tmp1 = (_g < choices->length);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(156)
						bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(156)
						if ((tmp2)){
							HX_STACK_LINE(156)
							break;
						}
						HX_STACK_LINE(156)
						::haxe::xml::Rule tmp3 = choices->__get(_g).StaticCast< ::haxe::xml::Rule >();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(156)
						::haxe::xml::Rule c = tmp3;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(156)
						++(_g);
						HX_STACK_LINE(157)
						::Xml tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(157)
						::haxe::xml::Rule tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(157)
						::haxe::xml::_Check::CheckResult tmp6 = ::haxe::xml::Check_obj::check(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(157)
						bool tmp7 = (tmp6 == ::haxe::xml::_Check::CheckResult_obj::CMatch);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(157)
						if ((tmp7)){
							HX_STACK_LINE(158)
							return ::haxe::xml::_Check::CheckResult_obj::CMatch;
						}
					}
				}
				HX_STACK_LINE(159)
				::Xml tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(159)
				::haxe::xml::Rule tmp2 = choices->__get((int)0).StaticCast< ::haxe::xml::Rule >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(159)
				::haxe::xml::_Check::CheckResult tmp3 = ::haxe::xml::Check_obj::check(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(159)
				return tmp3;
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(103)
			::haxe::xml::Rule tmp = (::haxe::xml::Rule(r))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(103)
			::haxe::xml::Rule r1 = tmp;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(160)
			{
				HX_STACK_LINE(161)
				::Xml tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(161)
				::haxe::xml::Rule tmp2 = r1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(161)
				::haxe::xml::_Check::CheckResult tmp3 = ::haxe::xml::Check_obj::check(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(161)
				return tmp3;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(163)
			::haxe::xml::Rule tmp = r;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(163)
			::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(163)
			::String tmp2 = (HX_HCSTRING("Unexpected ","\x0f","\x99","\xd1","\x53") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(163)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(103)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Check_obj,check,return )

::haxe::xml::_Check::CheckResult Check_obj::checkList( Dynamic it,::haxe::xml::Rule r){
	HX_STACK_FRAME("haxe.xml.Check","checkList",0xd7bc0921,"haxe.xml.Check.checkList","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Check.hx",168,0x6a06705e)
	HX_STACK_ARG(it,"it")
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(168)
	switch( (int)(r->__Index())){
		case (int)3: {
			HX_STACK_LINE(168)
			Dynamic tmp = (::haxe::xml::Rule(r))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(168)
			Dynamic ordered = tmp;		HX_STACK_VAR(ordered,"ordered");
			HX_STACK_LINE(168)
			Array< ::Dynamic > rules = (::haxe::xml::Rule(r))->__Param(0);		HX_STACK_VAR(rules,"rules");
			HX_STACK_LINE(169)
			{
				HX_STACK_LINE(170)
				Array< ::Dynamic > rules1 = rules->copy();		HX_STACK_VAR(rules1,"rules1");
				HX_STACK_LINE(171)
				Dynamic tmp1 = it;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(171)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp1);  __it->hasNext(); ){
					::Xml x = __it->next();
					{
						HX_STACK_LINE(172)
						::Xml tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(172)
						bool tmp3 = ::haxe::xml::Check_obj::isBlank(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(172)
						if ((tmp3)){
							HX_STACK_LINE(173)
							continue;
						}
						HX_STACK_LINE(174)
						bool found = false;		HX_STACK_VAR(found,"found");
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(175)
							while((true)){
								HX_STACK_LINE(175)
								bool tmp4 = (_g < rules1->length);		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(175)
								bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(175)
								if ((tmp5)){
									HX_STACK_LINE(175)
									break;
								}
								HX_STACK_LINE(175)
								::haxe::xml::Rule tmp6 = rules1->__get(_g).StaticCast< ::haxe::xml::Rule >();		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(175)
								::haxe::xml::Rule r1 = tmp6;		HX_STACK_VAR(r1,"r1");
								HX_STACK_LINE(175)
								++(_g);
								HX_STACK_LINE(176)
								Dynamic tmp7 = Array_obj< ::Dynamic >::__new().Add(x)->iteratorFast< ::Xml >();		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(176)
								::haxe::xml::Rule tmp8 = r1;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(176)
								::haxe::xml::_Check::CheckResult tmp9 = ::haxe::xml::Check_obj::checkList(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(176)
								::haxe::xml::_Check::CheckResult m = tmp9;		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(177)
								bool tmp10 = (m == ::haxe::xml::_Check::CheckResult_obj::CMatch);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(177)
								if ((tmp10)){
									HX_STACK_LINE(178)
									found = true;
									HX_STACK_LINE(179)
									switch( (int)(r1->__Index())){
										case (int)2: {
											HX_STACK_LINE(179)
											Dynamic tmp11 = (::haxe::xml::Rule(r1))->__Param(1);		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(179)
											Dynamic one = tmp11;		HX_STACK_VAR(one,"one");
											HX_STACK_LINE(179)
											::haxe::xml::Rule tmp12 = (::haxe::xml::Rule(r1))->__Param(0);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(179)
											::haxe::xml::Rule rsub = tmp12;		HX_STACK_VAR(rsub,"rsub");
											HX_STACK_LINE(180)
											{
												HX_STACK_LINE(181)
												Dynamic tmp13 = one;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(181)
												if ((tmp13)){
													HX_STACK_LINE(182)
													Dynamic i;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(183)
													{
														HX_STACK_LINE(183)
														int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
														HX_STACK_LINE(183)
														int _g1 = rules1->length;		HX_STACK_VAR(_g1,"_g1");
														HX_STACK_LINE(183)
														while((true)){
															HX_STACK_LINE(183)
															bool tmp14 = (_g2 < _g1);		HX_STACK_VAR(tmp14,"tmp14");
															HX_STACK_LINE(183)
															bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
															HX_STACK_LINE(183)
															if ((tmp15)){
																HX_STACK_LINE(183)
																break;
															}
															HX_STACK_LINE(183)
															int tmp16 = (_g2)++;		HX_STACK_VAR(tmp16,"tmp16");
															HX_STACK_LINE(183)
															int i1 = tmp16;		HX_STACK_VAR(i1,"i1");
															HX_STACK_LINE(184)
															::haxe::xml::Rule tmp17 = rules1->__get(i1).StaticCast< ::haxe::xml::Rule >();		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(184)
															::haxe::xml::Rule tmp18 = r1;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(184)
															bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(184)
															if ((tmp19)){
																HX_STACK_LINE(185)
																::haxe::xml::Rule tmp20 = rsub;		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(185)
																::haxe::xml::Rule tmp21 = ::haxe::xml::Rule_obj::RMulti(tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(185)
																rules1[i1] = tmp21;
															}
														}
													}
												}
											}
										}
										;break;
										default: {
											HX_STACK_LINE(188)
											::haxe::xml::Rule tmp11 = r1;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(188)
											rules1->remove(tmp11);
										}
									}
									HX_STACK_LINE(190)
									break;
								}
								else{
									HX_STACK_LINE(191)
									Dynamic tmp11 = ordered;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(191)
									bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(191)
									if ((tmp11)){
										HX_STACK_LINE(191)
										::haxe::xml::Rule tmp13 = r1;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(191)
										::haxe::xml::Rule tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(191)
										bool tmp15 = ::haxe::xml::Check_obj::isNullable(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(191)
										bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(191)
										bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(191)
										tmp12 = !(tmp17);
									}
									else{
										HX_STACK_LINE(191)
										tmp12 = false;
									}
									HX_STACK_LINE(191)
									if ((tmp12)){
										HX_STACK_LINE(192)
										::haxe::xml::_Check::CheckResult tmp13 = m;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(192)
										return tmp13;
									}
								}
							}
						}
						HX_STACK_LINE(194)
						bool tmp4 = found;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(194)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(194)
						if ((tmp5)){
							HX_STACK_LINE(195)
							::Xml tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(195)
							::haxe::xml::_Check::CheckResult tmp7 = ::haxe::xml::_Check::CheckResult_obj::CExtra(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(195)
							return tmp7;
						}
					}
;
				}
				HX_STACK_LINE(197)
				{
					HX_STACK_LINE(197)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(197)
					while((true)){
						HX_STACK_LINE(197)
						bool tmp2 = (_g < rules1->length);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(197)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(197)
						if ((tmp3)){
							HX_STACK_LINE(197)
							break;
						}
						HX_STACK_LINE(197)
						::haxe::xml::Rule tmp4 = rules1->__get(_g).StaticCast< ::haxe::xml::Rule >();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(197)
						::haxe::xml::Rule r1 = tmp4;		HX_STACK_VAR(r1,"r1");
						HX_STACK_LINE(197)
						++(_g);
						HX_STACK_LINE(198)
						::haxe::xml::Rule tmp5 = r1;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(198)
						bool tmp6 = ::haxe::xml::Check_obj::isNullable(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(198)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(198)
						if ((tmp7)){
							HX_STACK_LINE(199)
							::haxe::xml::Rule tmp8 = r1;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(199)
							::haxe::xml::_Check::CheckResult tmp9 = ::haxe::xml::_Check::CheckResult_obj::CMissing(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(199)
							return tmp9;
						}
					}
				}
				HX_STACK_LINE(200)
				return ::haxe::xml::_Check::CheckResult_obj::CMatch;
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(168)
			Dynamic tmp = (::haxe::xml::Rule(r))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(168)
			Dynamic one = tmp;		HX_STACK_VAR(one,"one");
			HX_STACK_LINE(168)
			::haxe::xml::Rule tmp1 = (::haxe::xml::Rule(r))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(168)
			::haxe::xml::Rule r1 = tmp1;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(201)
			{
				HX_STACK_LINE(202)
				bool found = false;		HX_STACK_VAR(found,"found");
				HX_STACK_LINE(203)
				Dynamic tmp2 = it;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(203)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp2);  __it->hasNext(); ){
					::Xml x = __it->next();
					{
						HX_STACK_LINE(204)
						::Xml tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(204)
						bool tmp4 = ::haxe::xml::Check_obj::isBlank(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(204)
						if ((tmp4)){
							HX_STACK_LINE(205)
							continue;
						}
						HX_STACK_LINE(206)
						Dynamic tmp5 = Array_obj< ::Dynamic >::__new().Add(x)->iteratorFast< ::Xml >();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(206)
						::haxe::xml::Rule tmp6 = r1;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(206)
						::haxe::xml::_Check::CheckResult tmp7 = ::haxe::xml::Check_obj::checkList(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(206)
						::haxe::xml::_Check::CheckResult m = tmp7;		HX_STACK_VAR(m,"m");
						HX_STACK_LINE(207)
						bool tmp8 = (m != ::haxe::xml::_Check::CheckResult_obj::CMatch);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(207)
						if ((tmp8)){
							HX_STACK_LINE(208)
							::haxe::xml::_Check::CheckResult tmp9 = m;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(208)
							return tmp9;
						}
						HX_STACK_LINE(209)
						found = true;
					}
;
				}
				HX_STACK_LINE(211)
				Dynamic tmp3 = one;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(211)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(211)
				if ((tmp3)){
					HX_STACK_LINE(211)
					bool tmp5 = found;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(211)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(211)
					tmp4 = !(tmp6);
				}
				else{
					HX_STACK_LINE(211)
					tmp4 = false;
				}
				HX_STACK_LINE(211)
				if ((tmp4)){
					HX_STACK_LINE(212)
					::haxe::xml::Rule tmp5 = r1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(212)
					::haxe::xml::_Check::CheckResult tmp6 = ::haxe::xml::_Check::CheckResult_obj::CMissing(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(212)
					return tmp6;
				}
				HX_STACK_LINE(213)
				return ::haxe::xml::_Check::CheckResult_obj::CMatch;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(215)
			bool found = false;		HX_STACK_VAR(found,"found");
			HX_STACK_LINE(216)
			Dynamic tmp = it;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(216)
			for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp);  __it->hasNext(); ){
				::Xml x = __it->next();
				{
					HX_STACK_LINE(217)
					::Xml tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(217)
					bool tmp2 = ::haxe::xml::Check_obj::isBlank(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(217)
					if ((tmp2)){
						HX_STACK_LINE(218)
						continue;
					}
					HX_STACK_LINE(219)
					::Xml tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(219)
					::haxe::xml::Rule tmp4 = r;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(219)
					::haxe::xml::_Check::CheckResult tmp5 = ::haxe::xml::Check_obj::check(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(219)
					::haxe::xml::_Check::CheckResult m = tmp5;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(220)
					bool tmp6 = (m != ::haxe::xml::_Check::CheckResult_obj::CMatch);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(220)
					if ((tmp6)){
						HX_STACK_LINE(221)
						::haxe::xml::_Check::CheckResult tmp7 = m;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(221)
						return tmp7;
					}
					HX_STACK_LINE(222)
					found = true;
					HX_STACK_LINE(223)
					break;
				}
;
			}
			HX_STACK_LINE(225)
			bool tmp1 = found;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(225)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(225)
			if ((tmp2)){
				HX_STACK_LINE(226)
				switch( (int)(r->__Index())){
					case (int)5: {
					}
					;break;
					default: {
						HX_STACK_LINE(228)
						::haxe::xml::Rule tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(228)
						::haxe::xml::_Check::CheckResult tmp4 = ::haxe::xml::_Check::CheckResult_obj::CMissing(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(228)
						return tmp4;
					}
				}
			}
			HX_STACK_LINE(231)
			Dynamic tmp3 = it;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(231)
			for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp3);  __it->hasNext(); ){
				::Xml x = __it->next();
				{
					HX_STACK_LINE(232)
					::Xml tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(232)
					bool tmp5 = ::haxe::xml::Check_obj::isBlank(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(232)
					if ((tmp5)){
						HX_STACK_LINE(233)
						continue;
					}
					HX_STACK_LINE(234)
					::Xml tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(234)
					::haxe::xml::_Check::CheckResult tmp7 = ::haxe::xml::_Check::CheckResult_obj::CExtra(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(234)
					return tmp7;
				}
;
			}
			HX_STACK_LINE(236)
			return ::haxe::xml::_Check::CheckResult_obj::CMatch;
		}
	}
	HX_STACK_LINE(168)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Check_obj,checkList,return )

::String Check_obj::makeWhere( Array< ::Dynamic > path){
	HX_STACK_FRAME("haxe.xml.Check","makeWhere",0xd97bdaf4,"haxe.xml.Check.makeWhere","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Check.hx",240,0x6a06705e)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(241)
	bool tmp = (path->length == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(241)
	if ((tmp)){
		HX_STACK_LINE(242)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(243)
	::String s = HX_HCSTRING("In ","\x7b","\xc4","\x37","\x00");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(244)
	bool first = true;		HX_STACK_VAR(first,"first");
	HX_STACK_LINE(245)
	{
		HX_STACK_LINE(245)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(245)
		while((true)){
			HX_STACK_LINE(245)
			bool tmp1 = (_g < path->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(245)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(245)
			if ((tmp2)){
				HX_STACK_LINE(245)
				break;
			}
			HX_STACK_LINE(245)
			::Xml tmp3 = path->__get(_g).StaticCast< ::Xml >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(245)
			::Xml x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(245)
			++(_g);
			HX_STACK_LINE(246)
			bool tmp4 = first;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(246)
			if ((tmp4)){
				HX_STACK_LINE(247)
				first = false;
			}
			else{
				HX_STACK_LINE(249)
				hx::AddEq(s,HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(250)
			::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				int tmp6 = x->nodeType;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(250)
				int tmp7 = ::Xml_obj::Element;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(250)
				bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(250)
				if ((tmp8)){
					HX_STACK_LINE(250)
					::String tmp9 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + x->nodeType);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(250)
					HX_STACK_DO_THROW(tmp9);
				}
				HX_STACK_LINE(250)
				tmp5 = x->nodeName;
			}
			HX_STACK_LINE(250)
			hx::AddEq(s,tmp5);
		}
	}
	HX_STACK_LINE(252)
	::String tmp1 = (s + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(252)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Check_obj,makeWhere,return )

::String Check_obj::makeString( ::Xml x){
	HX_STACK_FRAME("haxe.xml.Check","makeString",0xcad63924,"haxe.xml.Check.makeString","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Check.hx",255,0x6a06705e)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(256)
	int tmp = x->nodeType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	int tmp1 = ::Xml_obj::Element;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	if ((tmp2)){
		HX_STACK_LINE(257)
		::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(257)
		{
			HX_STACK_LINE(257)
			int tmp4 = x->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(257)
			int tmp5 = ::Xml_obj::Element;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(257)
			bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(257)
			if ((tmp6)){
				HX_STACK_LINE(257)
				::String tmp7 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + x->nodeType);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(257)
				HX_STACK_DO_THROW(tmp7);
			}
			HX_STACK_LINE(257)
			tmp3 = x->nodeName;
		}
		HX_STACK_LINE(257)
		::String tmp4 = (HX_HCSTRING("element ","\xe4","\x35","\xc4","\x83") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(257)
		return tmp4;
	}
	HX_STACK_LINE(258)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(258)
	{
		HX_STACK_LINE(258)
		int tmp4 = x->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(258)
		int tmp5 = ::Xml_obj::Document;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(258)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(258)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(258)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(258)
		if ((tmp7)){
			HX_STACK_LINE(258)
			int tmp9 = x->nodeType;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(258)
			int tmp10 = ::Xml_obj::Element;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(258)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(258)
			tmp8 = (tmp9 == tmp11);
		}
		else{
			HX_STACK_LINE(258)
			tmp8 = true;
		}
		HX_STACK_LINE(258)
		if ((tmp8)){
			HX_STACK_LINE(258)
			::String tmp9 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + x->nodeType);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(258)
			HX_STACK_DO_THROW(tmp9);
		}
		HX_STACK_LINE(258)
		tmp3 = x->nodeValue;
	}
	HX_STACK_LINE(258)
	::String tmp4 = tmp3.split(HX_HCSTRING("\r","\x0d","\x00","\x00","\x00"))->join(HX_HCSTRING("\\r","\x96","\x50","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(258)
	::String tmp5 = tmp4.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"))->join(HX_HCSTRING("\\n","\x92","\x50","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(258)
	::String tmp6 = tmp5.split(HX_HCSTRING("\t","\x09","\x00","\x00","\x00"))->join(HX_HCSTRING("\\t","\x98","\x50","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(258)
	::String s = tmp6;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(259)
	bool tmp7 = (s.length > (int)20);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(259)
	if ((tmp7)){
		HX_STACK_LINE(260)
		::String tmp8 = s.substr((int)0,(int)17);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(260)
		::String tmp9 = (tmp8 + HX_HCSTRING("...","\xee","\x0f","\x23","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(260)
		return tmp9;
	}
	HX_STACK_LINE(261)
	::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(261)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Check_obj,makeString,return )

::String Check_obj::makeRule( ::haxe::xml::Rule r){
	HX_STACK_FRAME("haxe.xml.Check","makeRule",0x53cebe8f,"haxe.xml.Check.makeRule","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Check.hx",265,0x6a06705e)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(265)
	switch( (int)(r->__Index())){
		case (int)0: {
			HX_STACK_LINE(265)
			::String tmp = (::haxe::xml::Rule(r))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(265)
			::String name = tmp;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				::String tmp1 = (HX_HCSTRING("element ","\xe4","\x35","\xc4","\x83") + name);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(266)
				return tmp1;
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(267)
			return HX_HCSTRING("data","\x2a","\x56","\x63","\x42");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(265)
			::haxe::xml::Rule tmp = (::haxe::xml::Rule(r))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(265)
			::haxe::xml::Rule r1 = tmp;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(268)
			{
				HX_STACK_LINE(268)
				::haxe::xml::Rule tmp1 = r1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(268)
				::String tmp2 = ::haxe::xml::Check_obj::makeRule(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(268)
				return tmp2;
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(265)
			Array< ::Dynamic > rules = (::haxe::xml::Rule(r))->__Param(0);		HX_STACK_VAR(rules,"rules");
			HX_STACK_LINE(269)
			{
				HX_STACK_LINE(269)
				::haxe::xml::Rule tmp = rules->__get((int)0).StaticCast< ::haxe::xml::Rule >();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(269)
				::String tmp1 = ::haxe::xml::Check_obj::makeRule(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(269)
				return tmp1;
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(265)
			Array< ::Dynamic > choices = (::haxe::xml::Rule(r))->__Param(0);		HX_STACK_VAR(choices,"choices");
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				::haxe::xml::Rule tmp = choices->__get((int)0).StaticCast< ::haxe::xml::Rule >();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(270)
				::String tmp1 = ::haxe::xml::Check_obj::makeRule(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(270)
				return tmp1;
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(265)
			::haxe::xml::Rule tmp = (::haxe::xml::Rule(r))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(265)
			::haxe::xml::Rule r1 = tmp;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(271)
				::haxe::xml::Rule tmp1 = r1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(271)
				::String tmp2 = ::haxe::xml::Check_obj::makeRule(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(271)
				return tmp2;
			}
		}
		;break;
	}
	HX_STACK_LINE(265)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Check_obj,makeRule,return )

::String Check_obj::makeError( ::haxe::xml::_Check::CheckResult m,Array< ::Dynamic > path){
	HX_STACK_FRAME("haxe.xml.Check","makeError",0x82eb66d5,"haxe.xml.Check.makeError","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Check.hx",275,0x6a06705e)
	HX_STACK_ARG(m,"m")
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(276)
	bool tmp = (path == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(276)
	if ((tmp)){
		HX_STACK_LINE(277)
		path = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(278)
	switch( (int)(m->__Index())){
		case (int)0: {
			HX_STACK_LINE(279)
			HX_STACK_DO_THROW(HX_HCSTRING("assert","\xc6","\x46","\x03","\x4c"));
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(278)
			::haxe::xml::Rule tmp1 = (::haxe::xml::_Check::CheckResult(m))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(278)
			::haxe::xml::Rule r = tmp1;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(280)
			{
				HX_STACK_LINE(281)
				::String tmp2 = ::haxe::xml::Check_obj::makeWhere(path);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(281)
				::String tmp3 = (tmp2 + HX_HCSTRING("Missing ","\x1a","\x76","\x54","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(281)
				::haxe::xml::Rule tmp4 = r;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(281)
				::String tmp5 = ::haxe::xml::Check_obj::makeRule(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(281)
				::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(281)
				return tmp6;
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(278)
			::Xml tmp1 = (::haxe::xml::_Check::CheckResult(m))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(278)
			::Xml x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(282)
			{
				HX_STACK_LINE(283)
				::String tmp2 = ::haxe::xml::Check_obj::makeWhere(path);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(283)
				::String tmp3 = (tmp2 + HX_HCSTRING("Unexpected ","\x0f","\x99","\xd1","\x53"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(283)
				::Xml tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(283)
				::String tmp5 = ::haxe::xml::Check_obj::makeString(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(283)
				::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(283)
				return tmp6;
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(278)
			::Xml tmp1 = (::haxe::xml::_Check::CheckResult(m))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(278)
			::Xml x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(278)
			::String tmp2 = (::haxe::xml::_Check::CheckResult(m))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(278)
			::String name = tmp2;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(284)
			{
				HX_STACK_LINE(285)
				::String tmp3 = ::haxe::xml::Check_obj::makeWhere(path);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(285)
				::Xml tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(285)
				::String tmp5 = ::haxe::xml::Check_obj::makeString(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(285)
				::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(285)
				::String tmp7 = (tmp6 + HX_HCSTRING(" while expected element ","\x3d","\x7c","\xa2","\x5b"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(285)
				::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(285)
				::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(285)
				return tmp9;
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(278)
			::Xml tmp1 = (::haxe::xml::_Check::CheckResult(m))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(278)
			::Xml x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(287)
				::String tmp2 = ::haxe::xml::Check_obj::makeWhere(path);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(287)
				::Xml tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(287)
				::String tmp4 = ::haxe::xml::Check_obj::makeString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(287)
				::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(287)
				::String tmp6 = (tmp5 + HX_HCSTRING(" while data expected","\x5f","\xda","\x9b","\x81"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(287)
				return tmp6;
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(278)
			::Xml tmp1 = (::haxe::xml::_Check::CheckResult(m))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(278)
			::Xml x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(278)
			::String tmp2 = (::haxe::xml::_Check::CheckResult(m))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(278)
			::String att = tmp2;		HX_STACK_VAR(att,"att");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(289)
				::Xml tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(289)
				path->push(tmp3);
				HX_STACK_LINE(290)
				::String tmp4 = ::haxe::xml::Check_obj::makeWhere(path);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(290)
				::String tmp5 = (tmp4 + HX_HCSTRING("unexpected attribute ","\x73","\x9a","\x11","\xeb"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(290)
				::String tmp6 = att;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(290)
				::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(290)
				return tmp7;
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(278)
			::Xml tmp1 = (::haxe::xml::_Check::CheckResult(m))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(278)
			::Xml x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(278)
			::String tmp2 = (::haxe::xml::_Check::CheckResult(m))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(278)
			::String att = tmp2;		HX_STACK_VAR(att,"att");
			HX_STACK_LINE(291)
			{
				HX_STACK_LINE(292)
				::Xml tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(292)
				path->push(tmp3);
				HX_STACK_LINE(293)
				::String tmp4 = ::haxe::xml::Check_obj::makeWhere(path);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(293)
				::String tmp5 = (tmp4 + HX_HCSTRING("missing required attribute ","\xeb","\x77","\x1b","\x11"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(293)
				::String tmp6 = att;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(293)
				::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(293)
				return tmp7;
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(278)
			::Xml tmp1 = (::haxe::xml::_Check::CheckResult(m))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(278)
			::Xml x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(278)
			::String tmp2 = (::haxe::xml::_Check::CheckResult(m))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(278)
			::String att = tmp2;		HX_STACK_VAR(att,"att");
			HX_STACK_LINE(294)
			{
				HX_STACK_LINE(295)
				::Xml tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(295)
				path->push(tmp3);
				HX_STACK_LINE(296)
				::String tmp4 = ::haxe::xml::Check_obj::makeWhere(path);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(296)
				::String tmp5 = (tmp4 + HX_HCSTRING("invalid attribute value for ","\x53","\x45","\x69","\x2a"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(296)
				::String tmp6 = att;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(296)
				::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(296)
				return tmp7;
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(278)
			::Xml tmp1 = (::haxe::xml::_Check::CheckResult(m))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(278)
			::Xml x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(298)
				::String tmp2 = ::haxe::xml::Check_obj::makeWhere(path);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(298)
				::String tmp3 = (tmp2 + HX_HCSTRING("invalid data format for ","\xd3","\x1a","\x36","\xd0"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(298)
				::Xml tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(298)
				::String tmp5 = ::haxe::xml::Check_obj::makeString(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(298)
				::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(298)
				return tmp6;
			}
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(278)
			::haxe::xml::_Check::CheckResult tmp1 = (::haxe::xml::_Check::CheckResult(m))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(278)
			::haxe::xml::_Check::CheckResult m1 = tmp1;		HX_STACK_VAR(m1,"m1");
			HX_STACK_LINE(278)
			::Xml tmp2 = (::haxe::xml::_Check::CheckResult(m))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(278)
			::Xml x = tmp2;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(299)
			{
				HX_STACK_LINE(300)
				::Xml tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(300)
				path->push(tmp3);
				HX_STACK_LINE(301)
				::haxe::xml::_Check::CheckResult tmp4 = m1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(301)
				::String tmp5 = ::haxe::xml::Check_obj::makeError(tmp4,path);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(301)
				return tmp5;
			}
		}
		;break;
	}
	HX_STACK_LINE(278)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Check_obj,makeError,return )

Void Check_obj::checkNode( ::Xml x,::haxe::xml::Rule r){
{
		HX_STACK_FRAME("haxe.xml.Check","checkNode",0xd912f6c5,"haxe.xml.Check.checkNode","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Check.hx",305,0x6a06705e)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(306)
		Dynamic tmp = Array_obj< ::Dynamic >::__new().Add(x)->iteratorFast< ::Xml >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		::haxe::xml::Rule tmp1 = r;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		::haxe::xml::_Check::CheckResult tmp2 = ::haxe::xml::Check_obj::checkList(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		::haxe::xml::_Check::CheckResult m = tmp2;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(307)
		bool tmp3 = (m == ::haxe::xml::_Check::CheckResult_obj::CMatch);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(307)
		if ((tmp3)){
			HX_STACK_LINE(308)
			return null();
		}
		HX_STACK_LINE(309)
		::haxe::xml::_Check::CheckResult tmp4 = m;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(309)
		::String tmp5 = ::haxe::xml::Check_obj::makeError(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(309)
		HX_STACK_DO_THROW(tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Check_obj,checkNode,(void))

Void Check_obj::checkDocument( ::Xml x,::haxe::xml::Rule r){
{
		HX_STACK_FRAME("haxe.xml.Check","checkDocument",0xa724f95e,"haxe.xml.Check.checkDocument","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Check.hx",312,0x6a06705e)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(313)
		int tmp = x->nodeType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		int tmp1 = ::Xml_obj::Document;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(313)
		if ((tmp2)){
			HX_STACK_LINE(314)
			HX_STACK_DO_THROW(HX_HCSTRING("Document expected","\xfd","\xe3","\x54","\x80"));
		}
		HX_STACK_LINE(315)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(315)
		{
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(315)
				int tmp4 = x->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(315)
				int tmp5 = ::Xml_obj::Document;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(315)
				bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(315)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(315)
				if ((tmp6)){
					HX_STACK_LINE(315)
					int tmp8 = x->nodeType;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(315)
					int tmp9 = ::Xml_obj::Element;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(315)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(315)
					tmp7 = (tmp8 != tmp10);
				}
				else{
					HX_STACK_LINE(315)
					tmp7 = false;
				}
				HX_STACK_LINE(315)
				if ((tmp7)){
					HX_STACK_LINE(315)
					::String tmp8 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + x->nodeType);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(315)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(315)
			tmp3 = x->children->iteratorFast< ::Xml >();
		}
		HX_STACK_LINE(315)
		::haxe::xml::Rule tmp4 = r;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(315)
		::haxe::xml::_Check::CheckResult tmp5 = ::haxe::xml::Check_obj::checkList(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(315)
		::haxe::xml::_Check::CheckResult m = tmp5;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(316)
		bool tmp6 = (m == ::haxe::xml::_Check::CheckResult_obj::CMatch);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(316)
		if ((tmp6)){
			HX_STACK_LINE(317)
			return null();
		}
		HX_STACK_LINE(318)
		::haxe::xml::_Check::CheckResult tmp7 = m;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(318)
		::String tmp8 = ::haxe::xml::Check_obj::makeError(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(318)
		HX_STACK_DO_THROW(tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Check_obj,checkDocument,(void))


Check_obj::Check_obj()
{
}

bool Check_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { outValue = check_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"blanks") ) { outValue = blanks; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isBlank") ) { outValue = isBlank_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"makeRule") ) { outValue = makeRule_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"checkList") ) { outValue = checkList_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"makeWhere") ) { outValue = makeWhere_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"makeError") ) { outValue = makeError_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"checkNode") ) { outValue = checkNode_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isNullable") ) { outValue = isNullable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"makeString") ) { outValue = makeString_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterMatch") ) { outValue = filterMatch_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkDocument") ) { outValue = checkDocument_dyn(); return true;  }
	}
	return false;
}

bool Check_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"blanks") ) { blanks=ioValue.Cast< ::EReg >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(void *) &Check_obj::blanks,HX_HCSTRING("blanks","\x9f","\x8a","\xb1","\x9e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Check_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Check_obj::blanks,"blanks");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Check_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Check_obj::blanks,"blanks");
};

#endif

hx::Class Check_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("blanks","\x9f","\x8a","\xb1","\x9e"),
	HX_HCSTRING("isBlank","\x0a","\x83","\x77","\x51"),
	HX_HCSTRING("filterMatch","\x6d","\x9e","\xd5","\xb2"),
	HX_HCSTRING("isNullable","\xab","\x6d","\xe5","\xad"),
	HX_HCSTRING("check","\xc8","\x98","\xb6","\x45"),
	HX_HCSTRING("checkList","\x46","\xe5","\x92","\x9b"),
	HX_HCSTRING("makeWhere","\x19","\xb7","\x52","\x9d"),
	HX_HCSTRING("makeString","\x5f","\xfd","\xff","\x62"),
	HX_HCSTRING("makeRule","\x0a","\x6e","\x51","\x42"),
	HX_HCSTRING("makeError","\xfa","\x42","\xc2","\x46"),
	HX_HCSTRING("checkNode","\xea","\xd2","\xe9","\x9c"),
	HX_HCSTRING("checkDocument","\x03","\x4c","\x6d","\x83"),
	::String(null()) };

void Check_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml.Check","\x89","\x34","\x37","\xbf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Check_obj::__GetStatic;
	__mClass->mSetStaticField = &Check_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Check_obj >;
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

void Check_obj::__boot()
{
	blanks= ::EReg_obj::__new(HX_HCSTRING("^[ \r\n\t]*$","\x4e","\x17","\x21","\xf7"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));
}

} // end namespace haxe
} // end namespace xml
