#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_rtti_XmlParser
#include <haxe/rtti/XmlParser.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace haxe{
namespace rtti{

Void XmlParser_obj::__construct()
{
HX_STACK_FRAME("haxe.rtti.XmlParser","new",0x122ab839,"haxe.rtti.XmlParser.new","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",32,0xa5172450)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	this->root = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//XmlParser_obj::~XmlParser_obj() { }

Dynamic XmlParser_obj::__CreateEmpty() { return  new XmlParser_obj; }
hx::ObjectPtr< XmlParser_obj > XmlParser_obj::__new()
{  hx::ObjectPtr< XmlParser_obj > _result_ = new XmlParser_obj();
	_result_->__construct();
	return _result_;}

Dynamic XmlParser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XmlParser_obj > _result_ = new XmlParser_obj();
	_result_->__construct();
	return _result_;}

Void XmlParser_obj::sort( Array< ::Dynamic > l){
{
		HX_STACK_FRAME("haxe.rtti.XmlParser","sort",0xd68c1d65,"haxe.rtti.XmlParser.sort","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",35,0xa5172450)
		HX_STACK_THIS(this)
		HX_STACK_ARG(l,"l")
		HX_STACK_LINE(36)
		bool tmp = (l == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		if ((tmp)){
			HX_STACK_LINE(36)
			l = this->root;
		}

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(::haxe::rtti::TypeTree e1,::haxe::rtti::TypeTree e2){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",37,0xa5172450)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(38)
				::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(38)
				switch( (int)(e1->__Index())){
					case (int)0: {
						HX_STACK_LINE(38)
						::String tmp2 = (::haxe::rtti::TypeTree(e1))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(38)
						::String p = tmp2;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(39)
						tmp1 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + p);
					}
					;break;
					default: {
						HX_STACK_LINE(40)
						::haxe::rtti::TypeTree tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(40)
						Dynamic tmp3 = ::haxe::rtti::TypeApi_obj::typeInfos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(40)
						tmp1 = tmp3->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic );
					}
				}
				HX_STACK_LINE(38)
				::String n1 = tmp1;		HX_STACK_VAR(n1,"n1");
				HX_STACK_LINE(42)
				::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(42)
				switch( (int)(e2->__Index())){
					case (int)0: {
						HX_STACK_LINE(42)
						::String tmp3 = (::haxe::rtti::TypeTree(e2))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(42)
						::String p = tmp3;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(43)
						tmp2 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + p);
					}
					;break;
					default: {
						HX_STACK_LINE(44)
						::haxe::rtti::TypeTree tmp3 = e2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(44)
						Dynamic tmp4 = ::haxe::rtti::TypeApi_obj::typeInfos(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(44)
						tmp2 = tmp4->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic );
					}
				}
				HX_STACK_LINE(42)
				::String n2 = tmp2;		HX_STACK_VAR(n2,"n2");
				HX_STACK_LINE(46)
				bool tmp3 = (n1 > n2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(46)
				if ((tmp3)){
					HX_STACK_LINE(47)
					return (int)1;
				}
				HX_STACK_LINE(48)
				return (int)-1;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(37)
		l->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(50)
			while((true)){
				HX_STACK_LINE(50)
				bool tmp1 = (_g < l->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(50)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(50)
				if ((tmp2)){
					HX_STACK_LINE(50)
					break;
				}
				HX_STACK_LINE(50)
				::haxe::rtti::TypeTree tmp3 = l->__get(_g).StaticCast< ::haxe::rtti::TypeTree >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(50)
				::haxe::rtti::TypeTree x = tmp3;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(50)
				++(_g);
				HX_STACK_LINE(51)
				switch( (int)(x->__Index())){
					case (int)0: {
						HX_STACK_LINE(51)
						Array< ::Dynamic > l1 = (::haxe::rtti::TypeTree(x))->__Param(2);		HX_STACK_VAR(l1,"l1");
						HX_STACK_LINE(52)
						this->sort(l1);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(51)
						Dynamic tmp4 = (::haxe::rtti::TypeTree(x))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(51)
						Dynamic c = tmp4;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(53)
						{
							HX_STACK_LINE(54)
							::List tmp5 = c->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(54)
							::List tmp6 = this->sortFields(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(54)
							c->__FieldRef(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80")) = tmp6;
							HX_STACK_LINE(55)
							::List tmp7 = c->__Field(HX_HCSTRING("statics","\x05","\x3c","\x65","\x36"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(55)
							::List tmp8 = this->sortFields(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(55)
							c->__FieldRef(HX_HCSTRING("statics","\x05","\x3c","\x65","\x36")) = tmp8;
						}
					}
					;break;
					case (int)2: {
					}
					;break;
					case (int)4: {
					}
					;break;
					case (int)3: {
					}
					;break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,sort,(void))

::List XmlParser_obj::sortFields( Dynamic fl){
	HX_STACK_FRAME("haxe.rtti.XmlParser","sortFields",0x531ab9be,"haxe.rtti.XmlParser.sortFields","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",62,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fl,"fl")
	HX_STACK_LINE(63)
	Dynamic tmp = fl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	cpp::ArrayBase a = ::Lambda_obj::array(tmp);		HX_STACK_VAR(a,"a");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 2; }
	int run(Dynamic f1,Dynamic f2){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",64,0xa5172450)
		HX_STACK_ARG(f1,"f1")
		HX_STACK_ARG(f2,"f2")
		{
			HX_STACK_LINE(65)
			::haxe::rtti::CType tmp1 = f1->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(65)
			bool tmp2 = ::haxe::rtti::TypeApi_obj::isVar(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(65)
			bool v1 = tmp2;		HX_STACK_VAR(v1,"v1");
			HX_STACK_LINE(66)
			::haxe::rtti::CType tmp3 = f2->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			bool tmp4 = ::haxe::rtti::TypeApi_obj::isVar(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			bool v2 = tmp4;		HX_STACK_VAR(v2,"v2");
			HX_STACK_LINE(67)
			bool tmp5 = v1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			if ((tmp5)){
				HX_STACK_LINE(67)
				bool tmp7 = v2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(67)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(67)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(67)
				tmp6 = false;
			}
			HX_STACK_LINE(67)
			if ((tmp6)){
				HX_STACK_LINE(68)
				return (int)-1;
			}
			HX_STACK_LINE(69)
			bool tmp7 = v2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(69)
			if ((tmp7)){
				HX_STACK_LINE(69)
				bool tmp9 = v1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(69)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(69)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(69)
				tmp8 = false;
			}
			HX_STACK_LINE(69)
			if ((tmp8)){
				HX_STACK_LINE(70)
				return (int)1;
			}
			HX_STACK_LINE(71)
			bool tmp9 = (f1->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(71)
			if ((tmp9)){
				HX_STACK_LINE(72)
				return (int)-1;
			}
			HX_STACK_LINE(73)
			bool tmp10 = (f2->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(73)
			if ((tmp10)){
				HX_STACK_LINE(74)
				return (int)1;
			}
			HX_STACK_LINE(75)
			bool tmp11 = (f1->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) > f2->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(75)
			if ((tmp11)){
				HX_STACK_LINE(76)
				return (int)1;
			}
			HX_STACK_LINE(77)
			return (int)-1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(64)
	a->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(79)
	::List tmp1 = ::Lambda_obj::list(a);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,sortFields,return )

Void XmlParser_obj::process( ::Xml x,::String platform){
{
		HX_STACK_FRAME("haxe.rtti.XmlParser","process",0x2814eac8,"haxe.rtti.XmlParser.process","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",82,0xa5172450)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(platform,"platform")
		HX_STACK_LINE(83)
		this->curplatform = platform;
		HX_STACK_LINE(84)
		::haxe::xml::Fast tmp = ::haxe::xml::Fast_obj::__new(x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		this->xroot(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(XmlParser_obj,process,(void))

bool XmlParser_obj::mergeRights( Dynamic f1,Dynamic f2){
	HX_STACK_FRAME("haxe.rtti.XmlParser","mergeRights",0x15cc2ec8,"haxe.rtti.XmlParser.mergeRights","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",88,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f1,"f1")
	HX_STACK_ARG(f2,"f2")
	HX_STACK_LINE(89)
	bool tmp = (f1->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic ) == ::haxe::rtti::Rights_obj::RInline);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	if ((tmp1)){
		HX_STACK_LINE(89)
		tmp2 = (f1->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic ) == ::haxe::rtti::Rights_obj::RNo);
	}
	else{
		HX_STACK_LINE(89)
		tmp2 = false;
	}
	HX_STACK_LINE(89)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(89)
	if ((tmp3)){
		HX_STACK_LINE(89)
		tmp4 = (f2->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic ) == ::haxe::rtti::Rights_obj::RNormal);
	}
	else{
		HX_STACK_LINE(89)
		tmp4 = false;
	}
	HX_STACK_LINE(89)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(89)
	if ((tmp4)){
		HX_STACK_LINE(89)
		tmp5 = (f2->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic ) == ::haxe::rtti::Rights_obj::RMethod);
	}
	else{
		HX_STACK_LINE(89)
		tmp5 = false;
	}
	HX_STACK_LINE(89)
	if ((tmp5)){
		HX_STACK_LINE(90)
		f1->__FieldRef(HX_HCSTRING("get","\x96","\x80","\x4e","\x00")) = ::haxe::rtti::Rights_obj::RNormal;
		HX_STACK_LINE(91)
		f1->__FieldRef(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00")) = ::haxe::rtti::Rights_obj::RMethod;
		HX_STACK_LINE(92)
		return true;
	}
	HX_STACK_LINE(94)
	::haxe::rtti::Rights tmp6 = f1->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(94)
	::haxe::rtti::Rights tmp7 = f2->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(94)
	::haxe::rtti::Rights tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(94)
	::haxe::rtti::Rights tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(94)
	bool tmp10 = ::Type_obj::enumEq(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(94)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(94)
	if ((tmp10)){
		HX_STACK_LINE(94)
		::haxe::rtti::Rights tmp12 = f1->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(94)
		::haxe::rtti::Rights tmp13 = f2->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(94)
		::haxe::rtti::Rights tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(94)
		::haxe::rtti::Rights tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(94)
		tmp11 = ::Type_obj::enumEq(tmp14,tmp15);
	}
	else{
		HX_STACK_LINE(94)
		tmp11 = false;
	}
	HX_STACK_LINE(94)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC2(XmlParser_obj,mergeRights,return )

bool XmlParser_obj::mergeDoc( Dynamic f1,Dynamic f2){
	HX_STACK_FRAME("haxe.rtti.XmlParser","mergeDoc",0xa292e027,"haxe.rtti.XmlParser.mergeDoc","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",97,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f1,"f1")
	HX_STACK_ARG(f2,"f2")
	HX_STACK_LINE(98)
	bool tmp = (f1->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	if ((tmp)){
		HX_STACK_LINE(99)
		f1->__FieldRef(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00")) = f2->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(100)
		bool tmp1 = (f2->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		if ((tmp1)){
			HX_STACK_LINE(101)
			f2->__FieldRef(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00")) = f1->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic );
		}
	}
	HX_STACK_LINE(102)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(XmlParser_obj,mergeDoc,return )

bool XmlParser_obj::mergeFields( Dynamic f,Dynamic f2){
	HX_STACK_FRAME("haxe.rtti.XmlParser","mergeFields",0x4834682a,"haxe.rtti.XmlParser.mergeFields","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",105,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(f2,"f2")
	HX_STACK_LINE(106)
	Dynamic tmp = f;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	Dynamic tmp1 = f2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	Dynamic tmp2 = tmp;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	Dynamic tmp3 = tmp1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(106)
	bool tmp4 = ::haxe::rtti::TypeApi_obj::fieldEq(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(106)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(106)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(106)
	if ((tmp5)){
		HX_STACK_LINE(106)
		bool tmp7 = (f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == f2->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(106)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(106)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(106)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(106)
		bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(106)
		if ((tmp11)){
			HX_STACK_LINE(106)
			Dynamic tmp12 = f;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(106)
			Dynamic tmp13 = f2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(106)
			Dynamic tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(106)
			Dynamic tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(106)
			Dynamic tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(106)
			Dynamic tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(106)
			Dynamic tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(106)
			Dynamic tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(106)
			Dynamic tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(106)
			Dynamic tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(106)
			bool tmp22 = this->mergeRights(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(106)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(106)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(106)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(106)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(106)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(106)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(106)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(106)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(106)
			bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(106)
			bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(106)
			bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(106)
			bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(106)
			bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(106)
			if ((tmp35)){
				HX_STACK_LINE(106)
				Dynamic tmp36 = f2;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(106)
				Dynamic tmp37 = f;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(106)
				Dynamic tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(106)
				Dynamic tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(106)
				Dynamic tmp40 = tmp38;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(106)
				Dynamic tmp41 = tmp39;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(106)
				Dynamic tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(106)
				Dynamic tmp43 = tmp41;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(106)
				Dynamic tmp44 = tmp42;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(106)
				Dynamic tmp45 = tmp43;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(106)
				bool tmp46 = this->mergeRights(tmp44,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(106)
				tmp10 = tmp46;
			}
			else{
				HX_STACK_LINE(106)
				tmp10 = true;
			}
		}
		else{
			HX_STACK_LINE(106)
			tmp10 = false;
		}
		HX_STACK_LINE(106)
		bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(106)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(106)
		bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(106)
		if ((tmp14)){
			HX_STACK_LINE(106)
			Dynamic tmp15 = f;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(106)
			Dynamic tmp16 = f2;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(106)
			Dynamic tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(106)
			Dynamic tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(106)
			Dynamic tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(106)
			Dynamic tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(106)
			Dynamic tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(106)
			Dynamic tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(106)
			bool tmp23 = this->mergeDoc(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(106)
			tmp13 = tmp23;
		}
		else{
			HX_STACK_LINE(106)
			tmp13 = false;
		}
		HX_STACK_LINE(106)
		bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(106)
		if ((tmp15)){
			HX_STACK_LINE(106)
			Dynamic tmp16 = f;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(106)
			Dynamic tmp17 = f2;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(106)
			Dynamic tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(106)
			Dynamic tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(106)
			Dynamic tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(106)
			Dynamic tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(106)
			tmp6 = ::haxe::rtti::TypeApi_obj::fieldEq(tmp20,tmp21);
		}
		else{
			HX_STACK_LINE(106)
			tmp6 = false;
		}
	}
	else{
		HX_STACK_LINE(106)
		tmp6 = true;
	}
	HX_STACK_LINE(106)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(XmlParser_obj,mergeFields,return )

HX_BEGIN_DEFAULT_FUNC(__default_newField,XmlParser_obj)
Void run(Dynamic c,Dynamic f){
{
		HX_STACK_FRAME("haxe.rtti.XmlParser","newField",0xde12ddc1,"haxe.rtti.XmlParser.newField","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",109,0xa5172450)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(f,"f")
	}
return null();
}
HX_END_LOCAL_FUNC2((void))
HX_END_DEFAULT_FUNC

bool XmlParser_obj::mergeClasses( Dynamic c,Dynamic c2){
	HX_STACK_FRAME("haxe.rtti.XmlParser","mergeClasses",0x5309efd5,"haxe.rtti.XmlParser.mergeClasses","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",112,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(c2,"c2")
	HX_STACK_LINE(114)
	bool tmp = (c->__Field(HX_HCSTRING("isInterface","\x6f","\xe8","\x5a","\x18"), hx::paccDynamic ) != c2->__Field(HX_HCSTRING("isInterface","\x6f","\xe8","\x5a","\x18"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	if ((tmp)){
		HX_STACK_LINE(115)
		return false;
	}
	HX_STACK_LINE(116)
	::String tmp1 = this->curplatform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(116)
	if ((tmp2)){
		HX_STACK_LINE(117)
		::String tmp3 = this->curplatform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		c->__Field(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp3);
	}
	HX_STACK_LINE(118)
	bool tmp3 = (c->__Field(HX_HCSTRING("isExtern","\xea","\x70","\x84","\x1f"), hx::paccDynamic ) != c2->__Field(HX_HCSTRING("isExtern","\xea","\x70","\x84","\x1f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(118)
	if ((tmp3)){
		HX_STACK_LINE(119)
		c->__FieldRef(HX_HCSTRING("isExtern","\xea","\x70","\x84","\x1f")) = false;
	}
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		::_List::ListIterator tmp4 = ::_List::ListIterator_obj::__new(c2->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		::_List::ListIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		while((true)){
			HX_STACK_LINE(121)
			bool tmp5 = (_g->head != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(121)
			if ((tmp6)){
				HX_STACK_LINE(121)
				break;
			}
			HX_STACK_LINE(121)
			Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				Dynamic tmp8 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(121)
				_g->val = tmp8;
				HX_STACK_LINE(121)
				Dynamic tmp9 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(121)
				_g->head = tmp9;
				HX_STACK_LINE(121)
				tmp7 = _g->val;
			}
			HX_STACK_LINE(121)
			Dynamic f2 = tmp7;		HX_STACK_VAR(f2,"f2");
			HX_STACK_LINE(122)
			Dynamic found = null();		HX_STACK_VAR(found,"found");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				::_List::ListIterator tmp8 = ::_List::ListIterator_obj::__new(c->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(123)
				::_List::ListIterator _g1 = tmp8;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(123)
				while((true)){
					HX_STACK_LINE(123)
					bool tmp9 = (_g1->head != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(123)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(123)
					if ((tmp10)){
						HX_STACK_LINE(123)
						break;
					}
					HX_STACK_LINE(123)
					Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(123)
					{
						HX_STACK_LINE(123)
						Dynamic tmp12 = _g1->head->__GetItem((int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(123)
						_g1->val = tmp12;
						HX_STACK_LINE(123)
						Dynamic tmp13 = _g1->head->__GetItem((int)1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(123)
						_g1->head = tmp13;
						HX_STACK_LINE(123)
						tmp11 = _g1->val;
					}
					HX_STACK_LINE(123)
					Dynamic f = tmp11;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(124)
					Dynamic tmp12 = f;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(124)
					Dynamic tmp13 = f2;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(124)
					bool tmp14 = this->mergeFields(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(124)
					if ((tmp14)){
						HX_STACK_LINE(125)
						found = f;
						HX_STACK_LINE(126)
						break;
					}
				}
			}
			HX_STACK_LINE(128)
			bool tmp8 = (found == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(128)
			if ((tmp8)){
				HX_STACK_LINE(129)
				Dynamic tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(129)
				Dynamic tmp10 = f2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(129)
				this->newField(tmp9,tmp10);
				HX_STACK_LINE(130)
				Dynamic tmp11 = f2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(130)
				c->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp11);
			}
			else{
				HX_STACK_LINE(131)
				::String tmp9 = this->curplatform;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(131)
				bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(131)
				if ((tmp10)){
					HX_STACK_LINE(132)
					::String tmp11 = this->curplatform;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(132)
					found->__Field(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp11);
				}
			}
		}
	}
	HX_STACK_LINE(134)
	{
		HX_STACK_LINE(134)
		::_List::ListIterator tmp4 = ::_List::ListIterator_obj::__new(c2->__Field(HX_HCSTRING("statics","\x05","\x3c","\x65","\x36"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		::_List::ListIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(134)
		while((true)){
			HX_STACK_LINE(134)
			bool tmp5 = (_g->head != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			if ((tmp6)){
				HX_STACK_LINE(134)
				break;
			}
			HX_STACK_LINE(134)
			Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				Dynamic tmp8 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(134)
				_g->val = tmp8;
				HX_STACK_LINE(134)
				Dynamic tmp9 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(134)
				_g->head = tmp9;
				HX_STACK_LINE(134)
				tmp7 = _g->val;
			}
			HX_STACK_LINE(134)
			Dynamic f2 = tmp7;		HX_STACK_VAR(f2,"f2");
			HX_STACK_LINE(135)
			Dynamic found = null();		HX_STACK_VAR(found,"found");
			HX_STACK_LINE(136)
			{
				HX_STACK_LINE(136)
				::_List::ListIterator tmp8 = ::_List::ListIterator_obj::__new(c->__Field(HX_HCSTRING("statics","\x05","\x3c","\x65","\x36"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(136)
				::_List::ListIterator _g1 = tmp8;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(136)
				while((true)){
					HX_STACK_LINE(136)
					bool tmp9 = (_g1->head != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(136)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(136)
					if ((tmp10)){
						HX_STACK_LINE(136)
						break;
					}
					HX_STACK_LINE(136)
					Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(136)
					{
						HX_STACK_LINE(136)
						Dynamic tmp12 = _g1->head->__GetItem((int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(136)
						_g1->val = tmp12;
						HX_STACK_LINE(136)
						Dynamic tmp13 = _g1->head->__GetItem((int)1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(136)
						_g1->head = tmp13;
						HX_STACK_LINE(136)
						tmp11 = _g1->val;
					}
					HX_STACK_LINE(136)
					Dynamic f = tmp11;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(137)
					Dynamic tmp12 = f;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(137)
					Dynamic tmp13 = f2;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(137)
					bool tmp14 = this->mergeFields(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(137)
					if ((tmp14)){
						HX_STACK_LINE(138)
						found = f;
						HX_STACK_LINE(139)
						break;
					}
				}
			}
			HX_STACK_LINE(141)
			bool tmp8 = (found == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(141)
			if ((tmp8)){
				HX_STACK_LINE(142)
				Dynamic tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(142)
				Dynamic tmp10 = f2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(142)
				this->newField(tmp9,tmp10);
				HX_STACK_LINE(143)
				Dynamic tmp11 = f2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(143)
				c->__Field(HX_HCSTRING("statics","\x05","\x3c","\x65","\x36"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp11);
			}
			else{
				HX_STACK_LINE(144)
				::String tmp9 = this->curplatform;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(144)
				bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(144)
				if ((tmp10)){
					HX_STACK_LINE(145)
					::String tmp11 = this->curplatform;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(145)
					found->__Field(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp11);
				}
			}
		}
	}
	HX_STACK_LINE(147)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(XmlParser_obj,mergeClasses,return )

bool XmlParser_obj::mergeEnums( Dynamic e,Dynamic e2){
	HX_STACK_FRAME("haxe.rtti.XmlParser","mergeEnums",0x27f3ddc1,"haxe.rtti.XmlParser.mergeEnums","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",150,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(e2,"e2")
	HX_STACK_LINE(151)
	bool tmp = (e->__Field(HX_HCSTRING("isExtern","\xea","\x70","\x84","\x1f"), hx::paccDynamic ) != e2->__Field(HX_HCSTRING("isExtern","\xea","\x70","\x84","\x1f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	if ((tmp)){
		HX_STACK_LINE(152)
		return false;
	}
	HX_STACK_LINE(153)
	::String tmp1 = this->curplatform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(153)
	if ((tmp2)){
		HX_STACK_LINE(154)
		::String tmp3 = this->curplatform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		e->__Field(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp3);
	}
	HX_STACK_LINE(155)
	{
		HX_STACK_LINE(155)
		::_List::ListIterator tmp3 = ::_List::ListIterator_obj::__new(e2->__Field(HX_HCSTRING("constructors","\x39","\x2e","\xc2","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(155)
		::_List::ListIterator _g = tmp3;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(155)
		while((true)){
			HX_STACK_LINE(155)
			bool tmp4 = (_g->head != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(155)
			if ((tmp5)){
				HX_STACK_LINE(155)
				break;
			}
			HX_STACK_LINE(155)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(155)
			{
				HX_STACK_LINE(155)
				Dynamic tmp7 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(155)
				_g->val = tmp7;
				HX_STACK_LINE(155)
				Dynamic tmp8 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(155)
				_g->head = tmp8;
				HX_STACK_LINE(155)
				tmp6 = _g->val;
			}
			HX_STACK_LINE(155)
			Dynamic c2 = tmp6;		HX_STACK_VAR(c2,"c2");
			HX_STACK_LINE(156)
			Dynamic found = null();		HX_STACK_VAR(found,"found");
			HX_STACK_LINE(157)
			{
				HX_STACK_LINE(157)
				::_List::ListIterator tmp7 = ::_List::ListIterator_obj::__new(e->__Field(HX_HCSTRING("constructors","\x39","\x2e","\xc2","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(157)
				::_List::ListIterator _g1 = tmp7;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(157)
				while((true)){
					HX_STACK_LINE(157)
					bool tmp8 = (_g1->head != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(157)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(157)
					if ((tmp9)){
						HX_STACK_LINE(157)
						break;
					}
					HX_STACK_LINE(157)
					Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(157)
					{
						HX_STACK_LINE(157)
						Dynamic tmp11 = _g1->head->__GetItem((int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(157)
						_g1->val = tmp11;
						HX_STACK_LINE(157)
						Dynamic tmp12 = _g1->head->__GetItem((int)1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(157)
						_g1->head = tmp12;
						HX_STACK_LINE(157)
						tmp10 = _g1->val;
					}
					HX_STACK_LINE(157)
					Dynamic c = tmp10;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(158)
					Dynamic tmp11 = c;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(158)
					Dynamic tmp12 = c2;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(158)
					bool tmp13 = ::haxe::rtti::TypeApi_obj::constructorEq(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(158)
					if ((tmp13)){
						HX_STACK_LINE(159)
						found = c;
						HX_STACK_LINE(160)
						break;
					}
				}
			}
			HX_STACK_LINE(162)
			bool tmp7 = (found == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(162)
			if ((tmp7)){
				HX_STACK_LINE(163)
				return false;
			}
			HX_STACK_LINE(164)
			::String tmp8 = this->curplatform;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(164)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(164)
			if ((tmp9)){
				HX_STACK_LINE(165)
				::String tmp10 = this->curplatform;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(165)
				found->__Field(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp10);
			}
		}
	}
	HX_STACK_LINE(167)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(XmlParser_obj,mergeEnums,return )

bool XmlParser_obj::mergeTypedefs( Dynamic t,Dynamic t2){
	HX_STACK_FRAME("haxe.rtti.XmlParser","mergeTypedefs",0x246c92b9,"haxe.rtti.XmlParser.mergeTypedefs","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",170,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(t2,"t2")
	HX_STACK_LINE(171)
	::String tmp = this->curplatform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(171)
	if ((tmp1)){
		HX_STACK_LINE(172)
		return false;
	}
	HX_STACK_LINE(173)
	::String tmp2 = this->curplatform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	t->__Field(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp2);
	HX_STACK_LINE(174)
	::String tmp3 = this->curplatform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(174)
	::haxe::rtti::CType tmp4 = t2->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(174)
	t->__Field(HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp3,tmp4);
	HX_STACK_LINE(175)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(XmlParser_obj,mergeTypedefs,return )

bool XmlParser_obj::mergeAbstracts( Dynamic a,Dynamic a2){
	HX_STACK_FRAME("haxe.rtti.XmlParser","mergeAbstracts",0x78309040,"haxe.rtti.XmlParser.mergeAbstracts","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",178,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(a2,"a2")
	HX_STACK_LINE(179)
	::String tmp = this->curplatform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	if ((tmp1)){
		HX_STACK_LINE(180)
		return false;
	}
	HX_STACK_LINE(181)
	int tmp2 = a->__Field(HX_HCSTRING("to","\x7b","\x65","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(181)
	int tmp3 = a2->__Field(HX_HCSTRING("to","\x7b","\x65","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(181)
	bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(181)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(181)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(181)
	if ((tmp5)){
		HX_STACK_LINE(181)
		int tmp7 = a->__Field(HX_HCSTRING("from","\x6a","\xa5","\xc2","\x43"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(181)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(181)
		int tmp9 = a2->__Field(HX_HCSTRING("from","\x6a","\xa5","\xc2","\x43"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(181)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(181)
		tmp6 = (tmp8 != tmp10);
	}
	else{
		HX_STACK_LINE(181)
		tmp6 = true;
	}
	HX_STACK_LINE(181)
	if ((tmp6)){
		HX_STACK_LINE(182)
		return false;
	}
	HX_STACK_LINE(183)
	{
		HX_STACK_LINE(183)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(183)
		int tmp7 = a->__Field(HX_HCSTRING("to","\x7b","\x65","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(183)
		int _g = tmp7;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(183)
		while((true)){
			HX_STACK_LINE(183)
			bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(183)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(183)
			if ((tmp9)){
				HX_STACK_LINE(183)
				break;
			}
			HX_STACK_LINE(183)
			int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(183)
			int i = tmp10;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(184)
			Dynamic tmp11 = a->__Field(HX_HCSTRING("to","\x7b","\x65","\x00","\x00"), hx::paccDynamic )->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(184)
			::haxe::rtti::CType tmp12 = tmp11->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(184)
			Dynamic tmp13 = a2->__Field(HX_HCSTRING("to","\x7b","\x65","\x00","\x00"), hx::paccDynamic )->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(184)
			::haxe::rtti::CType tmp14 = tmp13->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(184)
			bool tmp15 = ::haxe::rtti::TypeApi_obj::typeEq(tmp12,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(184)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(184)
			if ((tmp16)){
				HX_STACK_LINE(185)
				return false;
			}
		}
	}
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(186)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(186)
		int tmp7 = a->__Field(HX_HCSTRING("from","\x6a","\xa5","\xc2","\x43"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(186)
		int _g = tmp7;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		while((true)){
			HX_STACK_LINE(186)
			bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(186)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(186)
			if ((tmp9)){
				HX_STACK_LINE(186)
				break;
			}
			HX_STACK_LINE(186)
			int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(186)
			int i = tmp10;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(187)
			Dynamic tmp11 = a->__Field(HX_HCSTRING("from","\x6a","\xa5","\xc2","\x43"), hx::paccDynamic )->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(187)
			::haxe::rtti::CType tmp12 = tmp11->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(187)
			Dynamic tmp13 = a2->__Field(HX_HCSTRING("from","\x6a","\xa5","\xc2","\x43"), hx::paccDynamic )->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(187)
			::haxe::rtti::CType tmp14 = tmp13->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(187)
			bool tmp15 = ::haxe::rtti::TypeApi_obj::typeEq(tmp12,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(187)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(187)
			if ((tmp16)){
				HX_STACK_LINE(188)
				return false;
			}
		}
	}
	HX_STACK_LINE(189)
	bool tmp7 = (a2->__Field(HX_HCSTRING("impl","\xe0","\x7e","\xba","\x45"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(189)
	if ((tmp7)){
		HX_STACK_LINE(189)
		Dynamic tmp8 = a->__Field(HX_HCSTRING("impl","\xe0","\x7e","\xba","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(189)
		Dynamic tmp9 = a2->__Field(HX_HCSTRING("impl","\xe0","\x7e","\xba","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(189)
		this->mergeClasses(tmp8,tmp9);
	}
	HX_STACK_LINE(190)
	::String tmp8 = this->curplatform;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(190)
	a->__Field(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp8);
	HX_STACK_LINE(191)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(XmlParser_obj,mergeAbstracts,return )

Void XmlParser_obj::merge( ::haxe::rtti::TypeTree t){
{
		HX_STACK_FRAME("haxe.rtti.XmlParser","merge",0x6909f2d1,"haxe.rtti.XmlParser.merge","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",194,0xa5172450)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(195)
		::haxe::rtti::TypeTree tmp = t;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		Dynamic tmp1 = ::haxe::rtti::TypeApi_obj::typeInfos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		Dynamic inf = tmp1;		HX_STACK_VAR(inf,"inf");
		HX_STACK_LINE(196)
		Array< ::String > pack = inf->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic )->__Field(HX_HCSTRING("split","\xda","\xea","\x6e","\x81"), hx::paccDynamic )(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(pack,"pack");
		HX_STACK_LINE(197)
		Array< ::Dynamic > cur = this->root;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(198)
		Array< ::String > curpack = Array_obj< ::String >::__new();		HX_STACK_VAR(curpack,"curpack");
		HX_STACK_LINE(199)
		pack->pop();
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(200)
			while((true)){
				HX_STACK_LINE(200)
				bool tmp2 = (_g < pack->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(200)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(200)
				if ((tmp3)){
					HX_STACK_LINE(200)
					break;
				}
				HX_STACK_LINE(200)
				::String tmp4 = pack->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(200)
				::String p = tmp4;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(200)
				++(_g);
				HX_STACK_LINE(201)
				bool found = false;		HX_STACK_VAR(found,"found");
				HX_STACK_LINE(202)
				{
					HX_STACK_LINE(202)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(202)
					while((true)){
						HX_STACK_LINE(202)
						bool tmp5 = (_g1 < cur->length);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(202)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(202)
						if ((tmp6)){
							HX_STACK_LINE(202)
							break;
						}
						HX_STACK_LINE(202)
						::haxe::rtti::TypeTree tmp7 = cur->__get(_g1).StaticCast< ::haxe::rtti::TypeTree >();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(202)
						::haxe::rtti::TypeTree pk = tmp7;		HX_STACK_VAR(pk,"pk");
						HX_STACK_LINE(202)
						++(_g1);
						HX_STACK_LINE(203)
						int _switch_1 = (pk->__Index());
						if (  ( _switch_1==(int)0)){
							HX_STACK_LINE(203)
							Array< ::Dynamic > subs = (::haxe::rtti::TypeTree(pk))->__Param(2);		HX_STACK_VAR(subs,"subs");
							HX_STACK_LINE(203)
							::String tmp8 = (::haxe::rtti::TypeTree(pk))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(203)
							::String pname = tmp8;		HX_STACK_VAR(pname,"pname");
							HX_STACK_LINE(204)
							{
								HX_STACK_LINE(205)
								bool tmp9 = (pname == p);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(205)
								if ((tmp9)){
									HX_STACK_LINE(206)
									found = true;
									HX_STACK_LINE(207)
									cur = subs;
									HX_STACK_LINE(208)
									break;
								}
							}
						}
						else  {
						}
;
;
					}
				}
				HX_STACK_LINE(212)
				::String tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(212)
				curpack->push(tmp5);
				HX_STACK_LINE(213)
				bool tmp6 = found;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(213)
				if ((tmp7)){
					HX_STACK_LINE(214)
					Array< ::Dynamic > pk = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(pk,"pk");
					HX_STACK_LINE(215)
					::String tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(215)
					::String tmp9 = curpack->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(215)
					::haxe::rtti::TypeTree tmp10 = ::haxe::rtti::TypeTree_obj::TPackage(tmp8,tmp9,pk);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(215)
					cur->push(tmp10);
					HX_STACK_LINE(216)
					cur = pk;
				}
			}
		}
		HX_STACK_LINE(219)
		Dynamic prev = null();		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(220)
			while((true)){
				HX_STACK_LINE(220)
				bool tmp2 = (_g < cur->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(220)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(220)
				if ((tmp3)){
					HX_STACK_LINE(220)
					break;
				}
				HX_STACK_LINE(220)
				::haxe::rtti::TypeTree tmp4 = cur->__get(_g).StaticCast< ::haxe::rtti::TypeTree >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(220)
				::haxe::rtti::TypeTree ct = tmp4;		HX_STACK_VAR(ct,"ct");
				HX_STACK_LINE(220)
				++(_g);
				HX_STACK_LINE(221)
				Dynamic tinf;		HX_STACK_VAR(tinf,"tinf");
				HX_STACK_LINE(222)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(223)
					::haxe::rtti::TypeTree tmp5 = ct;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(223)
					Dynamic tmp6 = ::haxe::rtti::TypeApi_obj::typeInfos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(223)
					tinf = tmp6;
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
							HX_STACK_LINE(225)
							continue;
						}
					}
				}
				HX_STACK_LINE(227)
				bool tmp5 = (tinf->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic ) == inf->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(227)
				if ((tmp5)){
					HX_STACK_LINE(228)
					bool sameType = true;		HX_STACK_VAR(sameType,"sameType");
					HX_STACK_LINE(229)
					bool tmp6 = (tinf->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(229)
					bool tmp7 = (inf->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(229)
					bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(229)
					if ((tmp8)){
						HX_STACK_LINE(230)
						bool tmp9 = (inf->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(230)
						if ((tmp9)){
							HX_STACK_LINE(231)
							inf->__FieldRef(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00")) = tinf->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic );
						}
						else{
							HX_STACK_LINE(233)
							tinf->__FieldRef(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00")) = inf->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic );
						}
					}
					HX_STACK_LINE(235)
					bool tmp9 = (tinf->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic ) == HX_HCSTRING("haxe._Int64.NativeInt64","\x9e","\x6c","\x62","\xe5"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(235)
					if ((tmp9)){
						HX_STACK_LINE(235)
						continue;
					}
					HX_STACK_LINE(236)
					bool tmp10 = (tinf->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic ) == inf->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(236)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(236)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(236)
					if ((tmp11)){
						HX_STACK_LINE(236)
						tmp12 = (tinf->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ) == inf->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ));
					}
					else{
						HX_STACK_LINE(236)
						tmp12 = false;
					}
					HX_STACK_LINE(236)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(236)
					if ((tmp12)){
						HX_STACK_LINE(236)
						tmp13 = (tinf->__Field(HX_HCSTRING("isPrivate","\x39","\xaa","\x6d","\x8d"), hx::paccDynamic ) == inf->__Field(HX_HCSTRING("isPrivate","\x39","\xaa","\x6d","\x8d"), hx::paccDynamic ));
					}
					else{
						HX_STACK_LINE(236)
						tmp13 = false;
					}
					HX_STACK_LINE(236)
					if ((tmp13)){
						HX_STACK_LINE(237)
						switch( (int)(ct->__Index())){
							case (int)1: {
								HX_STACK_LINE(237)
								Dynamic tmp14 = (::haxe::rtti::TypeTree(ct))->__Param(0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(237)
								Dynamic c = tmp14;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(239)
								switch( (int)(t->__Index())){
									case (int)1: {
										HX_STACK_LINE(239)
										Dynamic tmp15 = (::haxe::rtti::TypeTree(t))->__Param(0);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(239)
										Dynamic c2 = tmp15;		HX_STACK_VAR(c2,"c2");
										HX_STACK_LINE(240)
										{
											HX_STACK_LINE(241)
											Dynamic tmp16 = c;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(241)
											Dynamic tmp17 = c2;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(241)
											bool tmp18 = this->mergeClasses(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(241)
											if ((tmp18)){
												HX_STACK_LINE(242)
												return null();
											}
										}
									}
									;break;
									default: {
										HX_STACK_LINE(244)
										sameType = false;
									}
								}
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(237)
								Dynamic tmp14 = (::haxe::rtti::TypeTree(ct))->__Param(0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(237)
								Dynamic e = tmp14;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(247)
								switch( (int)(t->__Index())){
									case (int)2: {
										HX_STACK_LINE(247)
										Dynamic tmp15 = (::haxe::rtti::TypeTree(t))->__Param(0);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(247)
										Dynamic e2 = tmp15;		HX_STACK_VAR(e2,"e2");
										HX_STACK_LINE(248)
										{
											HX_STACK_LINE(249)
											Dynamic tmp16 = e;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(249)
											Dynamic tmp17 = e2;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(249)
											bool tmp18 = this->mergeEnums(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(249)
											if ((tmp18)){
												HX_STACK_LINE(250)
												return null();
											}
										}
									}
									;break;
									default: {
										HX_STACK_LINE(252)
										sameType = false;
									}
								}
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(237)
								Dynamic tmp14 = (::haxe::rtti::TypeTree(ct))->__Param(0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(237)
								Dynamic td = tmp14;		HX_STACK_VAR(td,"td");
								HX_STACK_LINE(255)
								switch( (int)(t->__Index())){
									case (int)3: {
										HX_STACK_LINE(255)
										Dynamic tmp15 = (::haxe::rtti::TypeTree(t))->__Param(0);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(255)
										Dynamic td2 = tmp15;		HX_STACK_VAR(td2,"td2");
										HX_STACK_LINE(256)
										{
											HX_STACK_LINE(257)
											Dynamic tmp16 = td;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(257)
											Dynamic tmp17 = td2;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(257)
											bool tmp18 = this->mergeTypedefs(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(257)
											if ((tmp18)){
												HX_STACK_LINE(258)
												return null();
											}
										}
									}
									;break;
									default: {
									}
								}
							}
							;break;
							case (int)4: {
								HX_STACK_LINE(237)
								Dynamic tmp14 = (::haxe::rtti::TypeTree(ct))->__Param(0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(237)
								Dynamic a = tmp14;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(262)
								switch( (int)(t->__Index())){
									case (int)4: {
										HX_STACK_LINE(262)
										Dynamic tmp15 = (::haxe::rtti::TypeTree(t))->__Param(0);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(262)
										Dynamic a2 = tmp15;		HX_STACK_VAR(a2,"a2");
										HX_STACK_LINE(263)
										{
											HX_STACK_LINE(264)
											Dynamic tmp16 = a;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(264)
											Dynamic tmp17 = a2;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(264)
											bool tmp18 = this->mergeAbstracts(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(264)
											if ((tmp18)){
												HX_STACK_LINE(265)
												return null();
											}
										}
									}
									;break;
									default: {
										HX_STACK_LINE(267)
										sameType = false;
									}
								}
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(270)
								sameType = false;
							}
							;break;
						}
					}
					HX_STACK_LINE(273)
					bool tmp14 = (tinf->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic ) != inf->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(273)
					::String tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(273)
					if ((tmp14)){
						HX_STACK_LINE(273)
						::String tmp16 = (HX_HCSTRING("module ","\xf4","\xe1","\xfa","\xf7") + inf->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(273)
						::String tmp17 = (tmp16 + HX_HCSTRING(" should be ","\xb0","\x2e","\x91","\xd5"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(273)
						::String tmp18 = tinf->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(273)
						tmp15 = (tmp17 + tmp18);
					}
					else{
						HX_STACK_LINE(274)
						bool tmp16 = (tinf->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ) != inf->__Field(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(274)
						if ((tmp16)){
							HX_STACK_LINE(274)
							tmp15 = HX_HCSTRING("documentation is different","\xe9","\x21","\x68","\x0c");
						}
						else{
							HX_STACK_LINE(275)
							bool tmp17 = (tinf->__Field(HX_HCSTRING("isPrivate","\x39","\xaa","\x6d","\x8d"), hx::paccDynamic ) != inf->__Field(HX_HCSTRING("isPrivate","\x39","\xaa","\x6d","\x8d"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(275)
							if ((tmp17)){
								HX_STACK_LINE(275)
								tmp15 = HX_HCSTRING("private flag is different","\x5a","\x4e","\xcd","\x7b");
							}
							else{
								HX_STACK_LINE(276)
								bool tmp18 = sameType;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(276)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(276)
								if ((tmp19)){
									HX_STACK_LINE(276)
									tmp15 = HX_HCSTRING("type kind is different","\x29","\x8f","\x87","\x48");
								}
								else{
									HX_STACK_LINE(277)
									tmp15 = HX_HCSTRING("could not merge definition","\x27","\x9f","\x66","\x64");
								}
							}
						}
					}
					HX_STACK_LINE(273)
					::String msg = tmp15;		HX_STACK_VAR(msg,"msg");
					HX_STACK_LINE(278)
					::String tmp16 = (HX_HCSTRING("Incompatibilities between ","\x2f","\x1e","\xb3","\xc6") + tinf->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(278)
					::String tmp17 = (tmp16 + HX_HCSTRING(" in ","\x7b","\xe0","\x76","\x15"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(278)
					::String tmp18 = tinf->__Field(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92"), hx::paccDynamic )->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(278)
					::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(278)
					::String tmp20 = (tmp19 + HX_HCSTRING(" and ","\x89","\x11","\x44","\xad"));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(278)
					::String tmp21 = this->curplatform;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(278)
					::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(278)
					::String tmp23 = (tmp22 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(278)
					::String tmp24 = msg;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(278)
					::String tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(278)
					::String tmp26 = (tmp25 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(278)
					HX_STACK_DO_THROW(tmp26);
				}
			}
		}
		HX_STACK_LINE(281)
		::haxe::rtti::TypeTree tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(281)
		cur->push(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,merge,(void))

::String XmlParser_obj::mkPath( ::String p){
	HX_STACK_FRAME("haxe.rtti.XmlParser","mkPath",0xdd943dea,"haxe.rtti.XmlParser.mkPath","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",284,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(285)
	::String tmp = p;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,mkPath,return )

Array< ::String > XmlParser_obj::mkTypeParams( ::String p){
	HX_STACK_FRAME("haxe.rtti.XmlParser","mkTypeParams",0x6ccf83a5,"haxe.rtti.XmlParser.mkTypeParams","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",288,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(289)
	Array< ::String > pl = p.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(pl,"pl");
	HX_STACK_LINE(290)
	::String tmp = pl->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(290)
	bool tmp1 = (tmp == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(290)
	if ((tmp1)){
		HX_STACK_LINE(291)
		return Array_obj< ::String >::__new();
	}
	HX_STACK_LINE(292)
	return pl;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,mkTypeParams,return )

::haxe::rtti::Rights XmlParser_obj::mkRights( ::String r){
	HX_STACK_FRAME("haxe.rtti.XmlParser","mkRights",0xf8e3089c,"haxe.rtti.XmlParser.mkRights","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",295,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(296)
	::String tmp = r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	::haxe::rtti::Rights tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(296)
	::String _switch_2 = (tmp);
	if (  ( _switch_2==HX_HCSTRING("null","\x87","\x9e","\x0e","\x49"))){
		HX_STACK_LINE(297)
		tmp1 = ::haxe::rtti::Rights_obj::RNo;
	}
	else if (  ( _switch_2==HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"))){
		HX_STACK_LINE(298)
		tmp1 = ::haxe::rtti::Rights_obj::RMethod;
	}
	else if (  ( _switch_2==HX_HCSTRING("dynamic","\x7f","\x9f","\x15","\x36"))){
		HX_STACK_LINE(299)
		tmp1 = ::haxe::rtti::Rights_obj::RDynamic;
	}
	else if (  ( _switch_2==HX_HCSTRING("inline","\x59","\xca","\x3f","\x99"))){
		HX_STACK_LINE(300)
		tmp1 = ::haxe::rtti::Rights_obj::RInline;
	}
	else  {
		HX_STACK_LINE(301)
		::String tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		tmp1 = ::haxe::rtti::Rights_obj::RCall(tmp2);
	}
;
;
	HX_STACK_LINE(296)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,mkRights,return )

Dynamic XmlParser_obj::xerror( ::haxe::xml::Fast c){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xerror",0xe59fde17,"haxe.rtti.XmlParser.xerror","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",305,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(306)
	::String tmp = c->get_name();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	::String tmp1 = (HX_HCSTRING("Invalid ","\x69","\x79","\x49","\x7d") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	HX_STACK_DO_THROW(tmp1);
	HX_STACK_LINE(306)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xerror,return )

Void XmlParser_obj::xroot( ::haxe::xml::Fast x){
{
		HX_STACK_FRAME("haxe.rtti.XmlParser","xroot",0xc707dab3,"haxe.rtti.XmlParser.xroot","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",309,0xa5172450)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(310)
		Dynamic tmp = x->x->elements();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp);  __it->hasNext(); ){
			::Xml c = __it->next();
			{
				HX_STACK_LINE(311)
				::Xml tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(311)
				::haxe::rtti::TypeTree tmp2 = this->processElement(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(311)
				this->merge(tmp2);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xroot,(void))

::haxe::rtti::TypeTree XmlParser_obj::processElement( ::Xml x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","processElement",0x61cb54d4,"haxe.rtti.XmlParser.processElement","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",315,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(316)
	::haxe::xml::Fast tmp = ::haxe::xml::Fast_obj::__new(x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(316)
	::haxe::xml::Fast c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(317)
	::haxe::rtti::TypeTree tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(317)
	{
		HX_STACK_LINE(317)
		::String tmp2 = c->get_name();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(317)
		::String _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(317)
		::String tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(317)
		::String _switch_3 = (tmp3);
		if (  ( _switch_3==HX_HCSTRING("class","\x38","\x78","\x58","\x48"))){
			HX_STACK_LINE(318)
			::haxe::xml::Fast tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(318)
			Dynamic tmp5 = this->xclass(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(318)
			tmp1 = ::haxe::rtti::TypeTree_obj::TClassdecl(tmp5);
		}
		else if (  ( _switch_3==HX_HCSTRING("enum","\x01","\x6b","\x16","\x43"))){
			HX_STACK_LINE(319)
			::haxe::xml::Fast tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(319)
			Dynamic tmp5 = this->xenum(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(319)
			tmp1 = ::haxe::rtti::TypeTree_obj::TEnumdecl(tmp5);
		}
		else if (  ( _switch_3==HX_HCSTRING("typedef","\x4b","\x37","\xd8","\xf8"))){
			HX_STACK_LINE(320)
			::haxe::xml::Fast tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(320)
			Dynamic tmp5 = this->xtypedef(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(320)
			tmp1 = ::haxe::rtti::TypeTree_obj::TTypedecl(tmp5);
		}
		else if (  ( _switch_3==HX_HCSTRING("abstract","\xe2","\xc0","\x7e","\xa8"))){
			HX_STACK_LINE(321)
			::haxe::xml::Fast tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(321)
			Dynamic tmp5 = this->xabstract(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(321)
			tmp1 = ::haxe::rtti::TypeTree_obj::TAbstractdecl(tmp5);
		}
		else  {
			HX_STACK_LINE(322)
			::haxe::xml::Fast tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(322)
			tmp1 = this->xerror(tmp4);
		}
;
;
	}
	HX_STACK_LINE(317)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,processElement,return )

cpp::ArrayBase XmlParser_obj::xmeta( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xmeta",0xc3b23756,"haxe.rtti.XmlParser.xmeta","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",326,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(327)
	cpp::ArrayBase ml = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(ml,"ml");
	HX_STACK_LINE(328)
	{
		HX_STACK_LINE(328)
		::_List::ListIterator tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		{
			HX_STACK_LINE(328)
			::List tmp1 = x->nodes->resolve(HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(328)
			::List _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(328)
			tmp = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(328)
		::_List::ListIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(328)
		while((true)){
			HX_STACK_LINE(328)
			bool tmp1 = (_g->head != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(328)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(328)
			if ((tmp2)){
				HX_STACK_LINE(328)
				break;
			}
			HX_STACK_LINE(328)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(328)
			{
				HX_STACK_LINE(328)
				Dynamic tmp4 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(328)
				_g->val = tmp4;
				HX_STACK_LINE(328)
				Dynamic tmp5 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(328)
				_g->head = tmp5;
				HX_STACK_LINE(328)
				tmp3 = _g->val;
			}
			HX_STACK_LINE(328)
			::haxe::xml::Fast m = ((::haxe::xml::Fast)(tmp3));		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(329)
			Array< ::String > pl = Array_obj< ::String >::__new();		HX_STACK_VAR(pl,"pl");
			HX_STACK_LINE(330)
			{
				HX_STACK_LINE(330)
				::_List::ListIterator tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(330)
				{
					HX_STACK_LINE(330)
					::List tmp5 = m->nodes->resolve(HX_HCSTRING("e","\x65","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(330)
					::List _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(330)
					tmp4 = ::_List::ListIterator_obj::__new(_this->h);
				}
				HX_STACK_LINE(330)
				::_List::ListIterator _g1 = tmp4;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(330)
				while((true)){
					HX_STACK_LINE(330)
					bool tmp5 = (_g1->head != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(330)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(330)
					if ((tmp6)){
						HX_STACK_LINE(330)
						break;
					}
					HX_STACK_LINE(330)
					Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(330)
					{
						HX_STACK_LINE(330)
						Dynamic tmp8 = _g1->head->__GetItem((int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(330)
						_g1->val = tmp8;
						HX_STACK_LINE(330)
						Dynamic tmp9 = _g1->head->__GetItem((int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(330)
						_g1->head = tmp9;
						HX_STACK_LINE(330)
						tmp7 = _g1->val;
					}
					HX_STACK_LINE(330)
					::haxe::xml::Fast p = ((::haxe::xml::Fast)(tmp7));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(331)
					::String tmp8 = p->get_innerHTML();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(331)
					pl->push(tmp8);
				}
			}
			HX_STACK_LINE(332)
			::String tmp4 = m->att->resolve(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			struct _Function_3_1{
				inline static Dynamic Block( Array< ::String > &pl,::String &tmp4){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",332,0xa5172450)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp4,false);
						__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , pl,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(332)
			Dynamic tmp5 = _Function_3_1::Block(pl,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(332)
			ml->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		}
	}
	HX_STACK_LINE(334)
	return ml;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xmeta,return )

::List XmlParser_obj::xoverloads( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xoverloads",0xe2124b88,"haxe.rtti.XmlParser.xoverloads","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",337,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(338)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(338)
	::List l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(339)
	Dynamic tmp1 = x->get_elements();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(339)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp1);  __it->hasNext(); ){
		::haxe::xml::Fast m = __it->next();
		{
			HX_STACK_LINE(340)
			::haxe::xml::Fast tmp2 = m;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(340)
			Dynamic tmp3 = this->xclassfield(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(340)
			l->add(tmp3);
		}
;
	}
	HX_STACK_LINE(342)
	::List tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(342)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xoverloads,return )

Dynamic XmlParser_obj::xpath( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xpath",0xc5aad236,"haxe.rtti.XmlParser.xpath","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",345,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(346)
	::String tmp = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(346)
	::String tmp1 = this->mkPath(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(346)
	::String path = tmp1;		HX_STACK_VAR(path,"path");
	HX_STACK_LINE(347)
	::List tmp2 = ::List_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(347)
	::List params = tmp2;		HX_STACK_VAR(params,"params");
	HX_STACK_LINE(348)
	Dynamic tmp3 = x->get_elements();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(348)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp3);  __it->hasNext(); ){
		::haxe::xml::Fast c = __it->next();
		{
			HX_STACK_LINE(349)
			::haxe::xml::Fast tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(349)
			::haxe::rtti::CType tmp5 = this->xtype(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(349)
			params->add(tmp5);
		}
;
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::List &params,::String &path){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",350,0xa5172450)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a") , path,false);
				__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , params,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(350)
	Dynamic tmp4 = _Function_1_1::Block(params,path);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(350)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xpath,return )

Dynamic XmlParser_obj::xclass( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xclass",0xbace8a87,"haxe.rtti.XmlParser.xclass","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",356,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(357)
	Dynamic csuper = null();		HX_STACK_VAR(csuper,"csuper");
	HX_STACK_LINE(358)
	::String doc = null();		HX_STACK_VAR(doc,"doc");
	HX_STACK_LINE(359)
	::haxe::rtti::CType tdynamic = null();		HX_STACK_VAR(tdynamic,"tdynamic");
	HX_STACK_LINE(360)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(360)
	::List interfaces = tmp;		HX_STACK_VAR(interfaces,"interfaces");
	HX_STACK_LINE(361)
	::List tmp1 = ::List_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(361)
	::List fields = tmp1;		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(362)
	::List tmp2 = ::List_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(362)
	::List statics = tmp2;		HX_STACK_VAR(statics,"statics");
	HX_STACK_LINE(363)
	cpp::ArrayBase meta = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(meta,"meta");
	HX_STACK_LINE(364)
	Dynamic tmp3 = x->get_elements();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(364)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp3);  __it->hasNext(); ){
		::haxe::xml::Fast c = __it->next();
		{
			HX_STACK_LINE(365)
			::String tmp4 = c->get_name();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(365)
			::String _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(365)
			::String tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(365)
			::String _switch_4 = (tmp5);
			if (  ( _switch_4==HX_HCSTRING("haxe_doc","\x9f","\xc6","\x83","\x5f"))){
				HX_STACK_LINE(366)
				::String tmp6 = c->get_innerData();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(366)
				doc = tmp6;
			}
			else if (  ( _switch_4==HX_HCSTRING("extends","\x59","\xcd","\x5c","\x70"))){
				HX_STACK_LINE(367)
				::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(367)
				Dynamic tmp7 = this->xpath(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(367)
				csuper = tmp7;
			}
			else if (  ( _switch_4==HX_HCSTRING("implements","\x70","\xfd","\x43","\xa8"))){
				HX_STACK_LINE(368)
				::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(368)
				Dynamic tmp7 = this->xpath(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(368)
				interfaces->add(tmp7);
			}
			else if (  ( _switch_4==HX_HCSTRING("haxe_dynamic","\x26","\xc3","\xff","\x55"))){
				HX_STACK_LINE(369)
				::Xml tmp6 = c->x->firstElement();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(369)
				::haxe::xml::Fast tmp7 = ::haxe::xml::Fast_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(369)
				::haxe::rtti::CType tmp8 = this->xtype(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(369)
				tdynamic = tmp8;
			}
			else if (  ( _switch_4==HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"))){
				HX_STACK_LINE(370)
				::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(370)
				meta = this->xmeta(tmp6);
			}
			else  {
				HX_STACK_LINE(372)
				bool tmp6 = c->x->exists(HX_HCSTRING("static","\xae","\xdc","\xfb","\x05"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(372)
				if ((tmp6)){
					HX_STACK_LINE(373)
					::haxe::xml::Fast tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(373)
					Dynamic tmp8 = this->xclassfield(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(373)
					statics->add(tmp8);
				}
				else{
					HX_STACK_LINE(375)
					::haxe::xml::Fast tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(375)
					Dynamic tmp8 = this->xclassfield(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(375)
					fields->add(tmp8);
				}
			}
;
;
		}
;
	}
	HX_STACK_LINE(378)
	bool tmp4 = x->has->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(378)
	::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(378)
	if ((tmp4)){
		HX_STACK_LINE(378)
		tmp5 = x->att->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	}
	else{
		HX_STACK_LINE(378)
		tmp5 = null();
	}
	HX_STACK_LINE(379)
	::String tmp6 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(379)
	::String tmp7 = this->mkPath(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(380)
	bool tmp8 = x->has->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(380)
	::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(380)
	if ((tmp8)){
		HX_STACK_LINE(380)
		::String tmp10 = x->att->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(380)
		tmp9 = this->mkPath(tmp10);
	}
	else{
		HX_STACK_LINE(380)
		tmp9 = null();
	}
	HX_STACK_LINE(381)
	::String tmp10 = doc;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(382)
	bool tmp11 = x->x->exists(HX_HCSTRING("private","\x03","\x2d","\x6f","\x89"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(383)
	bool tmp12 = x->x->exists(HX_HCSTRING("extern","\x60","\xd5","\x1a","\xc7"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(384)
	bool tmp13 = x->x->exists(HX_HCSTRING("interface","\xb9","\x31","\xda","\x39"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(385)
	::String tmp14 = x->att->resolve(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(386)
	Dynamic tmp15 = csuper;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(387)
	::List tmp16 = interfaces;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(388)
	::List tmp17 = fields;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(389)
	::List tmp18 = statics;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(390)
	::haxe::rtti::CType tmp19 = tdynamic;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(391)
	::List tmp20 = this->defplat();		HX_STACK_VAR(tmp20,"tmp20");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp5,hx::ObjectPtr< ::haxe::rtti::XmlParser_obj > __this,bool &tmp13,::List &tmp17,::List &tmp20,::String &tmp9,bool &tmp11,::haxe::rtti::CType &tmp19,::String &tmp10,Dynamic &tmp15,cpp::ArrayBase &meta,::String &tmp7,bool &tmp12,::List &tmp16,::List &tmp18,::String &tmp14){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",377,0xa5172450)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , tmp5,false);
				__result->Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a") , tmp7,false);
				__result->Add(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0") , tmp9,false);
				__result->Add(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00") , tmp10,false);
				__result->Add(HX_HCSTRING("isPrivate","\x39","\xaa","\x6d","\x8d") , tmp11,false);
				__result->Add(HX_HCSTRING("isExtern","\xea","\x70","\x84","\x1f") , tmp12,false);
				__result->Add(HX_HCSTRING("isInterface","\x6f","\xe8","\x5a","\x18") , tmp13,false);
				__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , __this->mkTypeParams(tmp14),false);
				__result->Add(HX_HCSTRING("superClass","\xbd","\xa8","\x07","\xa8") , tmp15,false);
				__result->Add(HX_HCSTRING("interfaces","\x9a","\x50","\x11","\x65") , tmp16,false);
				__result->Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80") , tmp17,false);
				__result->Add(HX_HCSTRING("statics","\x05","\x3c","\x65","\x36") , tmp18,false);
				__result->Add(HX_HCSTRING("tdynamic","\x8b","\x55","\xf1","\x20") , tmp19,false);
				__result->Add(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92") , tmp20,false);
				__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , meta,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(377)
	Dynamic tmp21 = _Function_1_1::Block(tmp5,this,tmp13,tmp17,tmp20,tmp9,tmp11,tmp19,tmp10,tmp15,meta,tmp7,tmp12,tmp16,tmp18,tmp14);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(377)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xclass,return )

Dynamic XmlParser_obj::xclassfield( ::haxe::xml::Fast x,Dynamic __o_defPublic){
Dynamic defPublic = __o_defPublic.Default(false);
	HX_STACK_FRAME("haxe.rtti.XmlParser","xclassfield",0x94fe80d3,"haxe.rtti.XmlParser.xclassfield","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",396,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(defPublic,"defPublic")
{
		HX_STACK_LINE(397)
		Dynamic tmp = x->get_elements();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		Dynamic e = tmp;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(398)
		::haxe::xml::Fast tmp1 = e->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(398)
		::haxe::rtti::CType tmp2 = this->xtype(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		::haxe::rtti::CType t = tmp2;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(399)
		::String doc = null();		HX_STACK_VAR(doc,"doc");
		HX_STACK_LINE(400)
		cpp::ArrayBase meta = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(meta,"meta");
		HX_STACK_LINE(401)
		::List overloads = null();		HX_STACK_VAR(overloads,"overloads");
		HX_STACK_LINE(402)
		Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(402)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp3);  __it->hasNext(); ){
			::haxe::xml::Fast c = __it->next();
			{
				HX_STACK_LINE(403)
				::String tmp4 = c->get_name();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(403)
				::String _g = tmp4;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(403)
				::String tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(403)
				::String _switch_5 = (tmp5);
				if (  ( _switch_5==HX_HCSTRING("haxe_doc","\x9f","\xc6","\x83","\x5f"))){
					HX_STACK_LINE(404)
					::String tmp6 = c->get_innerData();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(404)
					doc = tmp6;
				}
				else if (  ( _switch_5==HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"))){
					HX_STACK_LINE(405)
					::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(405)
					meta = this->xmeta(tmp6);
				}
				else if (  ( _switch_5==HX_HCSTRING("overloads","\xb9","\x65","\x83","\x49"))){
					HX_STACK_LINE(406)
					::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(406)
					::List tmp7 = this->xoverloads(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(406)
					overloads = tmp7;
				}
				else  {
					HX_STACK_LINE(407)
					::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(407)
					this->xerror(tmp6);
				}
;
;
			}
;
		}
		HX_STACK_LINE(410)
		::String tmp4 = x->get_name();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(411)
		::haxe::rtti::CType tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(412)
		bool tmp6 = x->x->exists(HX_HCSTRING("public","\xa9","\x80","\xf3","\x66"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(412)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(412)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(412)
		if ((tmp7)){
			HX_STACK_LINE(412)
			tmp8 = defPublic;
		}
		else{
			HX_STACK_LINE(412)
			tmp8 = true;
		}
		HX_STACK_LINE(413)
		bool tmp9 = x->x->exists(HX_HCSTRING("override","\x4c","\x22","\x28","\x49"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(414)
		bool tmp10 = x->has->resolve(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(414)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(414)
		if ((tmp10)){
			HX_STACK_LINE(414)
			::String tmp12 = x->att->resolve(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(414)
			tmp11 = ::Std_obj::parseInt(tmp12);
		}
		else{
			HX_STACK_LINE(414)
			tmp11 = null();
		}
		HX_STACK_LINE(415)
		::String tmp12 = doc;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(416)
		bool tmp13 = x->has->resolve(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(416)
		::haxe::rtti::Rights tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(416)
		if ((tmp13)){
			HX_STACK_LINE(416)
			::String tmp15 = x->att->resolve(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(416)
			tmp14 = this->mkRights(tmp15);
		}
		else{
			HX_STACK_LINE(416)
			tmp14 = ::haxe::rtti::Rights_obj::RNormal;
		}
		HX_STACK_LINE(417)
		bool tmp15 = x->has->resolve(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(417)
		::haxe::rtti::Rights tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(417)
		if ((tmp15)){
			HX_STACK_LINE(417)
			::String tmp17 = x->att->resolve(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(417)
			tmp16 = this->mkRights(tmp17);
		}
		else{
			HX_STACK_LINE(417)
			tmp16 = ::haxe::rtti::Rights_obj::RNormal;
		}
		HX_STACK_LINE(418)
		bool tmp17 = x->has->resolve(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(419)
		::List tmp18 = this->defplat();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(421)
		::List tmp19 = overloads;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(422)
		bool tmp20 = x->has->resolve(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(422)
		::String tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(422)
		if ((tmp20)){
			HX_STACK_LINE(422)
			tmp21 = x->att->resolve(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"));
		}
		else{
			HX_STACK_LINE(422)
			tmp21 = null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::haxe::rtti::CType &tmp5,hx::ObjectPtr< ::haxe::rtti::XmlParser_obj > __this,bool &tmp17,bool &tmp9,Dynamic &tmp11,::List &tmp19,::String &tmp4,::haxe::xml::Fast &x,::String &tmp21,cpp::ArrayBase &meta,bool &tmp8,::String &tmp12,::haxe::rtti::Rights &tmp16,::List &tmp18,::haxe::rtti::Rights &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",409,0xa5172450)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp4,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , tmp5,false);
					__result->Add(HX_HCSTRING("isPublic","\x33","\x1c","\x5d","\xbf") , tmp8,false);
					__result->Add(HX_HCSTRING("isOverride","\x56","\x34","\xd7","\xc3") , tmp9,false);
					__result->Add(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47") , tmp11,false);
					__result->Add(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00") , tmp12,false);
					__result->Add(HX_HCSTRING("get","\x96","\x80","\x4e","\x00") , tmp14,false);
					__result->Add(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00") , tmp16,false);
					struct _Function_2_1{
						inline static Array< ::String > Block( hx::ObjectPtr< ::haxe::rtti::XmlParser_obj > __this,::haxe::xml::Fast &x){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",418,0xa5172450)
							{
								HX_STACK_LINE(418)
								::String tmp22 = x->att->resolve(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(418)
								return __this->mkTypeParams(tmp22);
							}
							return null();
						}
					};
					__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , (  ((tmp17)) ? Array< ::String >(_Function_2_1::Block(__this,x)) : Array< ::String >(Array_obj< ::String >::__new()) ),false);
					__result->Add(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92") , tmp18,false);
					__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , meta,false);
					__result->Add(HX_HCSTRING("overloads","\xb9","\x65","\x83","\x49") , tmp19,false);
					__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp21,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(409)
		Dynamic tmp22 = _Function_1_1::Block(tmp5,this,tmp17,tmp9,tmp11,tmp19,tmp4,x,tmp21,meta,tmp8,tmp12,tmp16,tmp18,tmp14);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(409)
		return tmp22;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(XmlParser_obj,xclassfield,return )

Dynamic XmlParser_obj::xenum( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xenum",0xbe6f5792,"haxe.rtti.XmlParser.xenum","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",426,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(427)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(427)
	::List cl = tmp;		HX_STACK_VAR(cl,"cl");
	HX_STACK_LINE(428)
	::String doc = null();		HX_STACK_VAR(doc,"doc");
	HX_STACK_LINE(429)
	cpp::ArrayBase meta = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(meta,"meta");
	HX_STACK_LINE(430)
	Dynamic tmp1 = x->get_elements();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(430)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp1);  __it->hasNext(); ){
		::haxe::xml::Fast c = __it->next();
		{
			HX_STACK_LINE(431)
			::String tmp2 = c->get_name();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(431)
			bool tmp3 = (tmp2 == HX_HCSTRING("haxe_doc","\x9f","\xc6","\x83","\x5f"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(431)
			if ((tmp3)){
				HX_STACK_LINE(432)
				::String tmp4 = c->get_innerData();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(432)
				doc = tmp4;
			}
			else{
				HX_STACK_LINE(433)
				::String tmp4 = c->get_name();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(433)
				bool tmp5 = (tmp4 == HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(433)
				if ((tmp5)){
					HX_STACK_LINE(434)
					::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(434)
					meta = this->xmeta(tmp6);
				}
				else{
					HX_STACK_LINE(436)
					::haxe::xml::Fast tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(436)
					Dynamic tmp7 = this->xenumfield(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(436)
					cl->add(tmp7);
				}
			}
		}
;
	}
	HX_STACK_LINE(438)
	bool tmp2 = x->has->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(438)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(438)
	if ((tmp2)){
		HX_STACK_LINE(438)
		tmp3 = x->att->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	}
	else{
		HX_STACK_LINE(438)
		tmp3 = null();
	}
	HX_STACK_LINE(439)
	::String tmp4 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(439)
	::String tmp5 = this->mkPath(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(440)
	bool tmp6 = x->has->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(440)
	::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(440)
	if ((tmp6)){
		HX_STACK_LINE(440)
		::String tmp8 = x->att->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(440)
		tmp7 = this->mkPath(tmp8);
	}
	else{
		HX_STACK_LINE(440)
		tmp7 = null();
	}
	HX_STACK_LINE(441)
	::String tmp8 = doc;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(442)
	bool tmp9 = x->x->exists(HX_HCSTRING("private","\x03","\x2d","\x6f","\x89"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(443)
	bool tmp10 = x->x->exists(HX_HCSTRING("extern","\x60","\xd5","\x1a","\xc7"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(444)
	::String tmp11 = x->att->resolve(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(445)
	::List tmp12 = cl;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(446)
	::List tmp13 = this->defplat();		HX_STACK_VAR(tmp13,"tmp13");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp5,hx::ObjectPtr< ::haxe::rtti::XmlParser_obj > __this,::List &tmp13,bool &tmp9,::String &tmp11,bool &tmp10,::String &tmp3,cpp::ArrayBase &meta,::String &tmp7,::String &tmp8,::List &tmp12){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",437,0xa5172450)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , tmp3,false);
				__result->Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a") , tmp5,false);
				__result->Add(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0") , tmp7,false);
				__result->Add(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00") , tmp8,false);
				__result->Add(HX_HCSTRING("isPrivate","\x39","\xaa","\x6d","\x8d") , tmp9,false);
				__result->Add(HX_HCSTRING("isExtern","\xea","\x70","\x84","\x1f") , tmp10,false);
				__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , __this->mkTypeParams(tmp11),false);
				__result->Add(HX_HCSTRING("constructors","\x39","\x2e","\xc2","\x34") , tmp12,false);
				__result->Add(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92") , tmp13,false);
				__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , meta,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(437)
	Dynamic tmp14 = _Function_1_1::Block(tmp5,this,tmp13,tmp9,tmp11,tmp10,tmp3,meta,tmp7,tmp8,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(437)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xenum,return )

Dynamic XmlParser_obj::xenumfield( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xenumfield",0xfc438be8,"haxe.rtti.XmlParser.xenumfield","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",451,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(452)
	::List args = null();		HX_STACK_VAR(args,"args");
	HX_STACK_LINE(453)
	Dynamic tmp = x->x->elementsNamed(HX_HCSTRING("haxe_doc","\x9f","\xc6","\x83","\x5f"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(453)
	::Xml tmp1 = tmp->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(453)
	::Xml xdoc = tmp1;		HX_STACK_VAR(xdoc,"xdoc");
	HX_STACK_LINE(454)
	bool tmp2 = x->hasNode->resolve(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(454)
	cpp::ArrayBase meta;		HX_STACK_VAR(meta,"meta");
	HX_STACK_LINE(454)
	if ((tmp2)){
		HX_STACK_LINE(454)
		::haxe::xml::Fast tmp3 = x->node->resolve(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(454)
		meta = this->xmeta(tmp3);
	}
	else{
		HX_STACK_LINE(454)
		meta = cpp::ArrayBase_obj::__new();
	}
	HX_STACK_LINE(455)
	bool tmp3 = x->has->resolve(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(455)
	if ((tmp3)){
		HX_STACK_LINE(456)
		::String tmp4 = x->att->resolve(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(456)
		Array< ::String > names = tmp4.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(names,"names");
		HX_STACK_LINE(457)
		Dynamic tmp5 = x->get_elements();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(457)
		Dynamic elts = tmp5;		HX_STACK_VAR(elts,"elts");
		HX_STACK_LINE(458)
		::List tmp6 = ::List_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(458)
		args = tmp6;
		HX_STACK_LINE(459)
		{
			HX_STACK_LINE(459)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(459)
			while((true)){
				HX_STACK_LINE(459)
				bool tmp7 = (_g < names->length);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(459)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(459)
				if ((tmp8)){
					HX_STACK_LINE(459)
					break;
				}
				HX_STACK_LINE(459)
				::String tmp9 = names->__get(_g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(459)
				::String c = tmp9;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(459)
				++(_g);
				HX_STACK_LINE(460)
				bool opt = false;		HX_STACK_VAR(opt,"opt");
				HX_STACK_LINE(461)
				::String tmp10 = c.charAt((int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(461)
				bool tmp11 = (tmp10 == HX_HCSTRING("?","\x3f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(461)
				if ((tmp11)){
					HX_STACK_LINE(462)
					opt = true;
					HX_STACK_LINE(463)
					::String tmp12 = c.substr((int)1,null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(463)
					c = tmp12;
				}
				HX_STACK_LINE(466)
				::String tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(467)
				bool tmp13 = opt;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(468)
				::haxe::xml::Fast tmp14 = elts->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(468)
				::haxe::rtti::CType tmp15 = this->xtype(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				struct _Function_4_1{
					inline static Dynamic Block( bool &tmp13,::haxe::rtti::CType &tmp15,::String &tmp12){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",465,0xa5172450)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp12,false);
							__result->Add(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00") , tmp13,false);
							__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp15,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(465)
				Dynamic tmp16 = _Function_4_1::Block(tmp13,tmp15,tmp12);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(465)
				args->add(tmp16);
			}
		}
	}
	HX_STACK_LINE(473)
	::String tmp4 = x->get_name();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(474)
	::List tmp5 = args;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(475)
	bool tmp6 = (xdoc == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(475)
	::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(475)
	if ((tmp6)){
		HX_STACK_LINE(475)
		tmp7 = null();
	}
	else{
		HX_STACK_LINE(475)
		::haxe::xml::Fast tmp8 = ::haxe::xml::Fast_obj::__new(xdoc);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(475)
		tmp7 = tmp8->get_innerData();
	}
	HX_STACK_LINE(477)
	::List tmp8 = this->defplat();		HX_STACK_VAR(tmp8,"tmp8");
	struct _Function_1_1{
		inline static Dynamic Block( ::List &tmp5,::String &tmp4,cpp::ArrayBase &meta,::String &tmp7,::List &tmp8){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",472,0xa5172450)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp4,false);
				__result->Add(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40") , tmp5,false);
				__result->Add(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00") , tmp7,false);
				__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , meta,false);
				__result->Add(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92") , tmp8,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(472)
	Dynamic tmp9 = _Function_1_1::Block(tmp5,tmp4,meta,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(472)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xenumfield,return )

Dynamic XmlParser_obj::xabstract( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xabstract",0xbdd7c9f3,"haxe.rtti.XmlParser.xabstract","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",481,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(482)
	::String doc = null();		HX_STACK_VAR(doc,"doc");
	HX_STACK_LINE(482)
	Dynamic impl = null();		HX_STACK_VAR(impl,"impl");
	HX_STACK_LINE(482)
	::haxe::rtti::CType athis = null();		HX_STACK_VAR(athis,"athis");
	HX_STACK_LINE(483)
	cpp::ArrayBase meta = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(meta,"meta");
	HX_STACK_LINE(483)
	cpp::ArrayBase to = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(to,"to");
	HX_STACK_LINE(483)
	cpp::ArrayBase from = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(from,"from");
	HX_STACK_LINE(484)
	Dynamic tmp = x->get_elements();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(484)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp);  __it->hasNext(); ){
		::haxe::xml::Fast c = __it->next();
		{
			HX_STACK_LINE(485)
			::String tmp1 = c->get_name();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(485)
			::String _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(485)
			::String tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(485)
			::String _switch_6 = (tmp2);
			if (  ( _switch_6==HX_HCSTRING("haxe_doc","\x9f","\xc6","\x83","\x5f"))){
				HX_STACK_LINE(487)
				::String tmp3 = c->get_innerData();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(487)
				doc = tmp3;
			}
			else if (  ( _switch_6==HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"))){
				HX_STACK_LINE(489)
				::haxe::xml::Fast tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(489)
				meta = this->xmeta(tmp3);
			}
			else if (  ( _switch_6==HX_HCSTRING("to","\x7b","\x65","\x00","\x00"))){
				HX_STACK_LINE(491)
				Dynamic tmp3 = c->get_elements();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(491)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp3);  __it->hasNext(); ){
					::haxe::xml::Fast t = __it->next();
					{
						HX_STACK_LINE(492)
						::Xml tmp4 = t->x->firstElement();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(492)
						::haxe::xml::Fast tmp5 = ::haxe::xml::Fast_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(492)
						::haxe::rtti::CType tmp6 = this->xtype(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(492)
						bool tmp7 = t->has->resolve(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(492)
						::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(492)
						if ((tmp7)){
							HX_STACK_LINE(492)
							tmp8 = t->att->resolve(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));
						}
						else{
							HX_STACK_LINE(492)
							tmp8 = null();
						}
						struct _Function_4_1{
							inline static Dynamic Block( ::haxe::rtti::CType &tmp6,::String &tmp8){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",492,0xa5172450)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp6,false);
									__result->Add(HX_HCSTRING("field","\xba","\x94","\x93","\x00") , tmp8,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(492)
						Dynamic tmp9 = _Function_4_1::Block(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(492)
						to->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
					}
;
				}
			}
			else if (  ( _switch_6==HX_HCSTRING("from","\x6a","\xa5","\xc2","\x43"))){
				HX_STACK_LINE(494)
				Dynamic tmp3 = c->get_elements();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(494)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp3);  __it->hasNext(); ){
					::haxe::xml::Fast t = __it->next();
					{
						HX_STACK_LINE(495)
						::Xml tmp4 = t->x->firstElement();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(495)
						::haxe::xml::Fast tmp5 = ::haxe::xml::Fast_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(495)
						::haxe::rtti::CType tmp6 = this->xtype(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(495)
						bool tmp7 = t->has->resolve(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(495)
						::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(495)
						if ((tmp7)){
							HX_STACK_LINE(495)
							tmp8 = t->att->resolve(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));
						}
						else{
							HX_STACK_LINE(495)
							tmp8 = null();
						}
						struct _Function_4_1{
							inline static Dynamic Block( ::haxe::rtti::CType &tmp6,::String &tmp8){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",495,0xa5172450)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp6,false);
									__result->Add(HX_HCSTRING("field","\xba","\x94","\x93","\x00") , tmp8,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(495)
						Dynamic tmp9 = _Function_4_1::Block(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(495)
						from->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
					}
;
				}
			}
			else if (  ( _switch_6==HX_HCSTRING("impl","\xe0","\x7e","\xba","\x45"))){
				HX_STACK_LINE(497)
				::haxe::xml::Fast tmp3 = c->node->resolve(HX_HCSTRING("class","\x38","\x78","\x58","\x48"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(497)
				Dynamic tmp4 = this->xclass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(497)
				impl = tmp4;
			}
			else if (  ( _switch_6==HX_HCSTRING("this","\x5e","\x06","\xfc","\x4c"))){
				HX_STACK_LINE(499)
				::Xml tmp3 = c->x->firstElement();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(499)
				::haxe::xml::Fast tmp4 = ::haxe::xml::Fast_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(499)
				::haxe::rtti::CType tmp5 = this->xtype(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(499)
				athis = tmp5;
			}
			else  {
				HX_STACK_LINE(501)
				::haxe::xml::Fast tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(501)
				this->xerror(tmp3);
			}
;
;
		}
;
	}
	HX_STACK_LINE(504)
	bool tmp1 = x->has->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(504)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(504)
	if ((tmp1)){
		HX_STACK_LINE(504)
		tmp2 = x->att->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	}
	else{
		HX_STACK_LINE(504)
		tmp2 = null();
	}
	HX_STACK_LINE(505)
	::String tmp3 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(505)
	::String tmp4 = this->mkPath(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(506)
	bool tmp5 = x->has->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(506)
	::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(506)
	if ((tmp5)){
		HX_STACK_LINE(506)
		::String tmp7 = x->att->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(506)
		tmp6 = this->mkPath(tmp7);
	}
	else{
		HX_STACK_LINE(506)
		tmp6 = null();
	}
	HX_STACK_LINE(507)
	::String tmp7 = doc;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(508)
	bool tmp8 = x->x->exists(HX_HCSTRING("private","\x03","\x2d","\x6f","\x89"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(509)
	::String tmp9 = x->att->resolve(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(510)
	::List tmp10 = this->defplat();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(512)
	::haxe::rtti::CType tmp11 = athis;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(515)
	Dynamic tmp12 = impl;		HX_STACK_VAR(tmp12,"tmp12");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp6,hx::ObjectPtr< ::haxe::rtti::XmlParser_obj > __this,::String &tmp9,::haxe::rtti::CType &tmp11,::String &tmp4,::List &tmp10,::String &tmp2,cpp::ArrayBase &meta,::String &tmp7,bool &tmp8,cpp::ArrayBase &from,Dynamic &tmp12,cpp::ArrayBase &to){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",503,0xa5172450)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , tmp2,false);
				__result->Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a") , tmp4,false);
				__result->Add(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0") , tmp6,false);
				__result->Add(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00") , tmp7,false);
				__result->Add(HX_HCSTRING("isPrivate","\x39","\xaa","\x6d","\x8d") , tmp8,false);
				__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , __this->mkTypeParams(tmp9),false);
				__result->Add(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92") , tmp10,false);
				__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , meta,false);
				__result->Add(HX_HCSTRING("athis","\x3f","\x4b","\xda","\x26") , tmp11,false);
				__result->Add(HX_HCSTRING("to","\x7b","\x65","\x00","\x00") , to,false);
				__result->Add(HX_HCSTRING("from","\x6a","\xa5","\xc2","\x43") , from,false);
				__result->Add(HX_HCSTRING("impl","\xe0","\x7e","\xba","\x45") , tmp12,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(503)
	Dynamic tmp13 = _Function_1_1::Block(tmp6,this,tmp9,tmp11,tmp4,tmp10,tmp2,meta,tmp7,tmp8,from,tmp12,to);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(503)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xabstract,return )

Dynamic XmlParser_obj::xtypedef( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xtypedef",0x82b2bb5a,"haxe.rtti.XmlParser.xtypedef","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",520,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(521)
	::String doc = null();		HX_STACK_VAR(doc,"doc");
	HX_STACK_LINE(522)
	::haxe::rtti::CType t = null();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(523)
	cpp::ArrayBase meta = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(meta,"meta");
	HX_STACK_LINE(524)
	Dynamic tmp = x->get_elements();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(524)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp);  __it->hasNext(); ){
		::haxe::xml::Fast c = __it->next();
		{
			HX_STACK_LINE(525)
			::String tmp1 = c->get_name();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(525)
			bool tmp2 = (tmp1 == HX_HCSTRING("haxe_doc","\x9f","\xc6","\x83","\x5f"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(525)
			if ((tmp2)){
				HX_STACK_LINE(526)
				::String tmp3 = c->get_innerData();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(526)
				doc = tmp3;
			}
			else{
				HX_STACK_LINE(527)
				::String tmp3 = c->get_name();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(527)
				bool tmp4 = (tmp3 == HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(527)
				if ((tmp4)){
					HX_STACK_LINE(528)
					::haxe::xml::Fast tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(528)
					meta = this->xmeta(tmp5);
				}
				else{
					HX_STACK_LINE(530)
					::haxe::xml::Fast tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(530)
					::haxe::rtti::CType tmp6 = this->xtype(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(530)
					t = tmp6;
				}
			}
		}
;
	}
	HX_STACK_LINE(531)
	::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(531)
	::haxe::ds::StringMap types = tmp1;		HX_STACK_VAR(types,"types");
	HX_STACK_LINE(532)
	::String tmp2 = this->curplatform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(532)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(532)
	if ((tmp3)){
		HX_STACK_LINE(533)
		::String tmp4 = this->curplatform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(533)
		::haxe::rtti::CType tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(533)
		types->set(tmp4,tmp5);
	}
	HX_STACK_LINE(535)
	bool tmp4 = x->has->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(535)
	::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(535)
	if ((tmp4)){
		HX_STACK_LINE(535)
		tmp5 = x->att->resolve(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	}
	else{
		HX_STACK_LINE(535)
		tmp5 = null();
	}
	HX_STACK_LINE(536)
	::String tmp6 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(536)
	::String tmp7 = this->mkPath(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(537)
	bool tmp8 = x->has->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(537)
	::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(537)
	if ((tmp8)){
		HX_STACK_LINE(537)
		::String tmp10 = x->att->resolve(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(537)
		tmp9 = this->mkPath(tmp10);
	}
	else{
		HX_STACK_LINE(537)
		tmp9 = null();
	}
	HX_STACK_LINE(538)
	::String tmp10 = doc;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(539)
	bool tmp11 = x->x->exists(HX_HCSTRING("private","\x03","\x2d","\x6f","\x89"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(540)
	::String tmp12 = x->att->resolve(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(541)
	::haxe::rtti::CType tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(534)
	::haxe::ds::StringMap tmp14 = types;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(543)
	::List tmp15 = this->defplat();		HX_STACK_VAR(tmp15,"tmp15");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp5,hx::ObjectPtr< ::haxe::rtti::XmlParser_obj > __this,::haxe::rtti::CType &tmp13,::String &tmp9,bool &tmp11,::String &tmp10,::List &tmp15,cpp::ArrayBase &meta,::String &tmp7,::String &tmp12,::haxe::ds::StringMap &tmp14){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",534,0xa5172450)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , tmp5,false);
				__result->Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a") , tmp7,false);
				__result->Add(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0") , tmp9,false);
				__result->Add(HX_HCSTRING("doc","\x78","\x42","\x4c","\x00") , tmp10,false);
				__result->Add(HX_HCSTRING("isPrivate","\x39","\xaa","\x6d","\x8d") , tmp11,false);
				__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , __this->mkTypeParams(tmp12),false);
				__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , tmp13,false);
				__result->Add(HX_HCSTRING("types","\x79","\x70","\xcb","\x1a") , tmp14,false);
				__result->Add(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92") , tmp15,false);
				__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , meta,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(534)
	Dynamic tmp16 = _Function_1_1::Block(tmp5,this,tmp13,tmp9,tmp11,tmp10,tmp15,meta,tmp7,tmp12,tmp14);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(534)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xtypedef,return )

::haxe::rtti::CType XmlParser_obj::xtype( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xtype",0xc861df4b,"haxe.rtti.XmlParser.xtype","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",548,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(549)
	::haxe::rtti::CType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(549)
	{
		HX_STACK_LINE(549)
		::String tmp1 = x->get_name();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(549)
		::String _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(549)
		::String tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(549)
		::String _switch_7 = (tmp2);
		if (  ( _switch_7==HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"))){
			HX_STACK_LINE(551)
			tmp = ::haxe::rtti::CType_obj::CUnknown;
		}
		else if (  ( _switch_7==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
			HX_STACK_LINE(553)
			::String tmp3 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(553)
			::String tmp4 = this->mkPath(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(553)
			::haxe::xml::Fast tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(553)
			::List tmp6 = this->xtypeparams(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(553)
			tmp = ::haxe::rtti::CType_obj::CEnum(tmp4,tmp6);
		}
		else if (  ( _switch_7==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
			HX_STACK_LINE(555)
			::String tmp3 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(555)
			::String tmp4 = this->mkPath(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(555)
			::haxe::xml::Fast tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(555)
			::List tmp6 = this->xtypeparams(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(555)
			tmp = ::haxe::rtti::CType_obj::CClass(tmp4,tmp6);
		}
		else if (  ( _switch_7==HX_HCSTRING("t","\x74","\x00","\x00","\x00"))){
			HX_STACK_LINE(557)
			::String tmp3 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(557)
			::String tmp4 = this->mkPath(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(557)
			::haxe::xml::Fast tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(557)
			::List tmp6 = this->xtypeparams(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(557)
			tmp = ::haxe::rtti::CType_obj::CTypedef(tmp4,tmp6);
		}
		else if (  ( _switch_7==HX_HCSTRING("x","\x78","\x00","\x00","\x00"))){
			HX_STACK_LINE(559)
			::String tmp3 = x->att->resolve(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(559)
			::String tmp4 = this->mkPath(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(559)
			::haxe::xml::Fast tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(559)
			::List tmp6 = this->xtypeparams(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(559)
			tmp = ::haxe::rtti::CType_obj::CAbstract(tmp4,tmp6);
		}
		else if (  ( _switch_7==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
			HX_STACK_LINE(561)
			::List tmp3 = ::List_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(561)
			::List args = tmp3;		HX_STACK_VAR(args,"args");
			HX_STACK_LINE(562)
			::String tmp4 = x->att->resolve(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(562)
			Array< ::String > aname = tmp4.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(aname,"aname");
			HX_STACK_LINE(563)
			Dynamic tmp5 = aname->iterator();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(563)
			Dynamic eargs = tmp5;		HX_STACK_VAR(eargs,"eargs");
			HX_STACK_LINE(564)
			bool tmp6 = x->has->resolve(HX_HCSTRING("v","\x76","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(564)
			Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(564)
			if ((tmp6)){
				HX_STACK_LINE(564)
				::String tmp8 = x->att->resolve(HX_HCSTRING("v","\x76","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(564)
				tmp7 = tmp8.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"))->iterator();
			}
			else{
				HX_STACK_LINE(564)
				tmp7 = null();
			}
			HX_STACK_LINE(564)
			Dynamic evalues = tmp7;		HX_STACK_VAR(evalues,"evalues");
			HX_STACK_LINE(565)
			Dynamic tmp8 = x->get_elements();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(565)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp8);  __it->hasNext(); ){
				::haxe::xml::Fast e = __it->next();
				{
					HX_STACK_LINE(566)
					bool opt = false;		HX_STACK_VAR(opt,"opt");
					HX_STACK_LINE(567)
					::String tmp9 = eargs->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(567)
					::String a = tmp9;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(568)
					bool tmp10 = (a == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(568)
					if ((tmp10)){
						HX_STACK_LINE(569)
						a = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(570)
					::String tmp11 = a.charAt((int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(570)
					bool tmp12 = (tmp11 == HX_HCSTRING("?","\x3f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(570)
					if ((tmp12)){
						HX_STACK_LINE(571)
						opt = true;
						HX_STACK_LINE(572)
						::String tmp13 = a.substr((int)1,null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(572)
						a = tmp13;
					}
					HX_STACK_LINE(574)
					bool tmp13 = (evalues == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(574)
					::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(574)
					if ((tmp13)){
						HX_STACK_LINE(574)
						tmp14 = null();
					}
					else{
						HX_STACK_LINE(574)
						tmp14 = evalues->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();
					}
					HX_STACK_LINE(574)
					::String v = tmp14;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(576)
					::String tmp15 = a;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(577)
					bool tmp16 = opt;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(578)
					::haxe::xml::Fast tmp17 = e;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(578)
					::haxe::rtti::CType tmp18 = this->xtype(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(579)
					bool tmp19 = (v == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(579)
					::String tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(579)
					if ((tmp19)){
						HX_STACK_LINE(579)
						tmp20 = null();
					}
					else{
						HX_STACK_LINE(579)
						tmp20 = v;
					}
					struct _Function_4_1{
						inline static Dynamic Block( ::String &tmp20,::String &tmp15,bool &tmp16,::haxe::rtti::CType &tmp18){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",575,0xa5172450)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp15,false);
								__result->Add(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00") , tmp16,false);
								__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp18,false);
								__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp20,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(575)
					Dynamic tmp21 = _Function_4_1::Block(tmp20,tmp15,tmp16,tmp18);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(575)
					args->add(tmp21);
				}
;
			}
			HX_STACK_LINE(582)
			Dynamic tmp9 = args->last();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(582)
			Dynamic ret = tmp9;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(583)
			Dynamic tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(583)
			args->remove(tmp10);
			HX_STACK_LINE(584)
			::List tmp11 = args;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(584)
			::haxe::rtti::CType tmp12 = ret->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(584)
			tmp = ::haxe::rtti::CType_obj::CFunction(tmp11,tmp12);
		}
		else if (  ( _switch_7==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
			HX_STACK_LINE(586)
			::List tmp3 = ::List_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(586)
			::List fields = tmp3;		HX_STACK_VAR(fields,"fields");
			HX_STACK_LINE(587)
			Dynamic tmp4 = x->get_elements();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(587)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp4);  __it->hasNext(); ){
				::haxe::xml::Fast f = __it->next();
				{
					HX_STACK_LINE(588)
					::haxe::xml::Fast tmp5 = f;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(588)
					Dynamic tmp6 = this->xclassfield(tmp5,true);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(588)
					Dynamic f1 = tmp6;		HX_STACK_VAR(f1,"f1");
					HX_STACK_LINE(589)
					::List tmp7 = ::List_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(589)
					f1->__FieldRef(HX_HCSTRING("platforms","\x60","\xaa","\x82","\x92")) = tmp7;
					HX_STACK_LINE(590)
					Dynamic tmp8 = f1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(590)
					fields->add(tmp8);
				}
;
			}
			HX_STACK_LINE(592)
			::List tmp5 = fields;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(592)
			tmp = ::haxe::rtti::CType_obj::CAnonymous(tmp5);
		}
		else if (  ( _switch_7==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
			HX_STACK_LINE(594)
			::haxe::rtti::CType t = null();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(595)
			::Xml tmp3 = x->x->firstElement();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(595)
			::Xml tx = tmp3;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(596)
			bool tmp4 = (tx != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(596)
			if ((tmp4)){
				HX_STACK_LINE(597)
				::haxe::xml::Fast tmp5 = ::haxe::xml::Fast_obj::__new(tx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(597)
				::haxe::rtti::CType tmp6 = this->xtype(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(597)
				t = tmp6;
			}
			HX_STACK_LINE(598)
			::haxe::rtti::CType tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(598)
			tmp = ::haxe::rtti::CType_obj::CDynamic(tmp5);
		}
		else  {
			HX_STACK_LINE(600)
			::haxe::xml::Fast tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(600)
			tmp = this->xerror(tmp3);
		}
;
;
	}
	HX_STACK_LINE(549)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xtype,return )

::List XmlParser_obj::xtypeparams( ::haxe::xml::Fast x){
	HX_STACK_FRAME("haxe.rtti.XmlParser","xtypeparams",0x15d7e4d1,"haxe.rtti.XmlParser.xtypeparams","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",604,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(605)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(605)
	::List p = tmp;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(606)
	Dynamic tmp1 = x->get_elements();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(606)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp1);  __it->hasNext(); ){
		::haxe::xml::Fast c = __it->next();
		{
			HX_STACK_LINE(607)
			::haxe::xml::Fast tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(607)
			::haxe::rtti::CType tmp3 = this->xtype(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(607)
			p->add(tmp3);
		}
;
	}
	HX_STACK_LINE(608)
	::List tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(608)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(XmlParser_obj,xtypeparams,return )

::List XmlParser_obj::defplat( ){
	HX_STACK_FRAME("haxe.rtti.XmlParser","defplat",0xdc71768d,"haxe.rtti.XmlParser.defplat","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/XmlParser.hx",611,0xa5172450)
	HX_STACK_THIS(this)
	HX_STACK_LINE(612)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(612)
	::List l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(613)
	::String tmp1 = this->curplatform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(613)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(613)
	if ((tmp2)){
		HX_STACK_LINE(614)
		::String tmp3 = this->curplatform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(614)
		l->add(tmp3);
	}
	HX_STACK_LINE(615)
	::List tmp3 = l;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(615)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(XmlParser_obj,defplat,return )


XmlParser_obj::XmlParser_obj()
{
	newField = new __default_newField(this);
}

void XmlParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(XmlParser);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(curplatform,"curplatform");
	HX_MARK_MEMBER_NAME(newField,"newField");
	HX_MARK_END_CLASS();
}

void XmlParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(curplatform,"curplatform");
	HX_VISIT_MEMBER_NAME(newField,"newField");
}

Dynamic XmlParser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"xroot") ) { return xroot_dyn(); }
		if (HX_FIELD_EQ(inName,"xmeta") ) { return xmeta_dyn(); }
		if (HX_FIELD_EQ(inName,"xpath") ) { return xpath_dyn(); }
		if (HX_FIELD_EQ(inName,"xenum") ) { return xenum_dyn(); }
		if (HX_FIELD_EQ(inName,"xtype") ) { return xtype_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mkPath") ) { return mkPath_dyn(); }
		if (HX_FIELD_EQ(inName,"xerror") ) { return xerror_dyn(); }
		if (HX_FIELD_EQ(inName,"xclass") ) { return xclass_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"defplat") ) { return defplat_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mergeDoc") ) { return mergeDoc_dyn(); }
		if (HX_FIELD_EQ(inName,"newField") ) { return newField; }
		if (HX_FIELD_EQ(inName,"mkRights") ) { return mkRights_dyn(); }
		if (HX_FIELD_EQ(inName,"xtypedef") ) { return xtypedef_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"xabstract") ) { return xabstract_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortFields") ) { return sortFields_dyn(); }
		if (HX_FIELD_EQ(inName,"mergeEnums") ) { return mergeEnums_dyn(); }
		if (HX_FIELD_EQ(inName,"xoverloads") ) { return xoverloads_dyn(); }
		if (HX_FIELD_EQ(inName,"xenumfield") ) { return xenumfield_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curplatform") ) { return curplatform; }
		if (HX_FIELD_EQ(inName,"mergeRights") ) { return mergeRights_dyn(); }
		if (HX_FIELD_EQ(inName,"mergeFields") ) { return mergeFields_dyn(); }
		if (HX_FIELD_EQ(inName,"xclassfield") ) { return xclassfield_dyn(); }
		if (HX_FIELD_EQ(inName,"xtypeparams") ) { return xtypeparams_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mergeClasses") ) { return mergeClasses_dyn(); }
		if (HX_FIELD_EQ(inName,"mkTypeParams") ) { return mkTypeParams_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mergeTypedefs") ) { return mergeTypedefs_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mergeAbstracts") ) { return mergeAbstracts_dyn(); }
		if (HX_FIELD_EQ(inName,"processElement") ) { return processElement_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic XmlParser_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"newField") ) { newField=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curplatform") ) { curplatform=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void XmlParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("curplatform","\x33","\xb8","\x86","\x0f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(XmlParser_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsString,(int)offsetof(XmlParser_obj,curplatform),HX_HCSTRING("curplatform","\x33","\xb8","\x86","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(XmlParser_obj,newField),HX_HCSTRING("newField","\x3a","\xd8","\xdd","\x23")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("curplatform","\x33","\xb8","\x86","\x0f"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("sortFields","\x77","\x04","\x74","\xdd"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("mergeRights","\xef","\x45","\x94","\x99"),
	HX_HCSTRING("mergeDoc","\xa0","\xda","\x5d","\xe8"),
	HX_HCSTRING("mergeFields","\x51","\x7f","\xfc","\xcb"),
	HX_HCSTRING("newField","\x3a","\xd8","\xdd","\x23"),
	HX_HCSTRING("mergeClasses","\xce","\x1a","\x56","\x1e"),
	HX_HCSTRING("mergeEnums","\x7a","\x28","\x4d","\xb2"),
	HX_HCSTRING("mergeTypedefs","\xa0","\x01","\xc6","\x3b"),
	HX_HCSTRING("mergeAbstracts","\x79","\x2b","\x18","\xcf"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("mkPath","\x23","\x78","\xf1","\x65"),
	HX_HCSTRING("mkTypeParams","\x9e","\xae","\x1b","\x38"),
	HX_HCSTRING("mkRights","\x15","\x03","\xae","\x3e"),
	HX_HCSTRING("xerror","\x50","\x18","\xfd","\x6d"),
	HX_HCSTRING("xroot","\x9a","\x8a","\xc4","\x63"),
	HX_HCSTRING("processElement","\x0d","\xf0","\xb2","\xb8"),
	HX_HCSTRING("xmeta","\x3d","\xe7","\x6e","\x60"),
	HX_HCSTRING("xoverloads","\x41","\x96","\x6b","\x6c"),
	HX_HCSTRING("xpath","\x1d","\x82","\x67","\x62"),
	HX_HCSTRING("xclass","\xc0","\xc4","\x2b","\x43"),
	HX_HCSTRING("xclassfield","\xfa","\x97","\xc6","\x18"),
	HX_HCSTRING("xenum","\x79","\x07","\x2c","\x5b"),
	HX_HCSTRING("xenumfield","\xa1","\xd6","\x9c","\x86"),
	HX_HCSTRING("xabstract","\x5a","\xf9","\xa7","\x89"),
	HX_HCSTRING("xtypedef","\xd3","\xb5","\x7d","\xc8"),
	HX_HCSTRING("xtype","\x32","\x8f","\x1e","\x65"),
	HX_HCSTRING("xtypeparams","\xf8","\xfb","\x9f","\x99"),
	HX_HCSTRING("defplat","\x34","\x2e","\xa7","\xa5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XmlParser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XmlParser_obj::__mClass,"__mClass");
};

#endif

hx::Class XmlParser_obj::__mClass;

void XmlParser_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.rtti.XmlParser","\xc7","\x27","\x12","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< XmlParser_obj >;
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
