#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_cpp_Xml
#include <cpp/Xml.h>
#endif
#ifndef INCLUDED_cpp_XmlType
#include <cpp/XmlType.h>
#endif
namespace cpp{

Void Xml_obj::__construct()
{
HX_STACK_FRAME("cpp.Xml","new",0xb58fcbde,"cpp.Xml.new","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",45,0x6a01d7e3)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Xml_obj::~Xml_obj() { }

Dynamic Xml_obj::__CreateEmpty() { return  new Xml_obj; }
hx::ObjectPtr< Xml_obj > Xml_obj::__new()
{  hx::ObjectPtr< Xml_obj > _result_ = new Xml_obj();
	_result_->__construct();
	return _result_;}

Dynamic Xml_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Xml_obj > _result_ = new Xml_obj();
	_result_->__construct();
	return _result_;}

void Xml_obj::__init__() {
HX_STACK_FRAME("cpp.Xml","__init__",0xa8e97912,"cpp.Xml.__init__","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",407,0x6a01d7e3)
{
	HX_STACK_LINE(408)
	::cpp::XmlType tmp = ::Type_obj::createEnum(hx::ClassOf< ::cpp::XmlType >(),HX_HCSTRING("__","\x20","\x53","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(408)
	::cpp::Xml_obj::PCData = tmp;
	HX_STACK_LINE(409)
	::cpp::XmlType tmp1 = ::Type_obj::createEnum(hx::ClassOf< ::cpp::XmlType >(),HX_HCSTRING("__","\x20","\x53","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(409)
	::cpp::Xml_obj::Element = tmp1;
	HX_STACK_LINE(410)
	::cpp::XmlType tmp2 = ::Type_obj::createEnum(hx::ClassOf< ::cpp::XmlType >(),HX_HCSTRING("__","\x20","\x53","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(410)
	::cpp::Xml_obj::CData = tmp2;
	HX_STACK_LINE(411)
	::cpp::XmlType tmp3 = ::Type_obj::createEnum(hx::ClassOf< ::cpp::XmlType >(),HX_HCSTRING("__","\x20","\x53","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(411)
	::cpp::Xml_obj::Comment = tmp3;
	HX_STACK_LINE(412)
	::cpp::XmlType tmp4 = ::Type_obj::createEnum(hx::ClassOf< ::cpp::XmlType >(),HX_HCSTRING("__","\x20","\x53","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(412)
	::cpp::Xml_obj::DocType = tmp4;
	HX_STACK_LINE(413)
	::cpp::XmlType tmp5 = ::Type_obj::createEnum(hx::ClassOf< ::cpp::XmlType >(),HX_HCSTRING("__","\x20","\x53","\x00","\x00"),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(413)
	::cpp::Xml_obj::ProcessingInstruction = tmp5;
	HX_STACK_LINE(414)
	::cpp::XmlType tmp6 = ::Type_obj::createEnum(hx::ClassOf< ::cpp::XmlType >(),HX_HCSTRING("__","\x20","\x53","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(414)
	::cpp::Xml_obj::Document = tmp6;
	HX_STACK_LINE(415)
	::__hxcpp_enum_force(::cpp::Xml_obj::PCData,HX_HCSTRING("pcdata","\x9d","\x2d","\x07","\x0b"),(int)0);
	HX_STACK_LINE(416)
	::__hxcpp_enum_force(::cpp::Xml_obj::Element,HX_HCSTRING("element","\xbc","\xae","\x54","\x06"),(int)1);
	HX_STACK_LINE(417)
	::__hxcpp_enum_force(::cpp::Xml_obj::CData,HX_HCSTRING("cdata","\x0d","\xc4","\x0e","\x43"),(int)2);
	HX_STACK_LINE(418)
	::__hxcpp_enum_force(::cpp::Xml_obj::Comment,HX_HCSTRING("comment","\x5f","\x7a","\x70","\x81"),(int)3);
	HX_STACK_LINE(419)
	::__hxcpp_enum_force(::cpp::Xml_obj::DocType,HX_HCSTRING("doctype","\x32","\xd1","\xb3","\xed"),(int)4);
	HX_STACK_LINE(420)
	::__hxcpp_enum_force(::cpp::Xml_obj::ProcessingInstruction,HX_HCSTRING("processingInstruction","\xfb","\xee","\x80","\x9f"),(int)5);
	HX_STACK_LINE(421)
	::__hxcpp_enum_force(::cpp::Xml_obj::Document,HX_HCSTRING("document","\x1b","\xef","\x12","\x9b"),(int)6);
}
}

::String Xml_obj::get_nodeName( ){
	HX_STACK_FRAME("cpp.Xml","get_nodeName",0x9b2a2a38,"cpp.Xml.get_nodeName","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",172,0x6a01d7e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	::cpp::XmlType tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	::cpp::XmlType tmp1 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	if ((tmp2)){
		HX_STACK_LINE(174)
		HX_STACK_DO_THROW(HX_HCSTRING("bad nodeType","\x97","\xdf","\x58","\x71"));
	}
	HX_STACK_LINE(175)
	::String tmp3 = this->_nodeName;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(175)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,get_nodeName,return )

::String Xml_obj::set_nodeName( ::String n){
	HX_STACK_FRAME("cpp.Xml","set_nodeName",0xb0234dac,"cpp.Xml.set_nodeName","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",178,0x6a01d7e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(179)
	::cpp::XmlType tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	::cpp::XmlType tmp1 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(179)
	if ((tmp2)){
		HX_STACK_LINE(180)
		HX_STACK_DO_THROW(HX_HCSTRING("bad nodeType","\x97","\xdf","\x58","\x71"));
	}
	HX_STACK_LINE(181)
	::String tmp3 = this->_nodeName = n;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(181)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,set_nodeName,return )

::String Xml_obj::get_nodeValue( ){
	HX_STACK_FRAME("cpp.Xml","get_nodeValue",0xc4eeb6e4,"cpp.Xml.get_nodeValue","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",184,0x6a01d7e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	::cpp::XmlType tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	::cpp::XmlType tmp1 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(185)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(185)
	if ((tmp3)){
		HX_STACK_LINE(185)
		::cpp::XmlType tmp5 = this->nodeType;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(185)
		::cpp::XmlType tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(185)
		::cpp::XmlType tmp7 = ::cpp::Xml_obj::Document;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(185)
		::cpp::XmlType tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(185)
		tmp4 = (tmp6 == tmp8);
	}
	else{
		HX_STACK_LINE(185)
		tmp4 = true;
	}
	HX_STACK_LINE(185)
	if ((tmp4)){
		HX_STACK_LINE(186)
		HX_STACK_DO_THROW(HX_HCSTRING("bad nodeType","\x97","\xdf","\x58","\x71"));
	}
	HX_STACK_LINE(187)
	::String tmp5 = this->_nodeValue;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(187)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,get_nodeValue,return )

::String Xml_obj::set_nodeValue( ::String v){
	HX_STACK_FRAME("cpp.Xml","set_nodeValue",0x09f498f0,"cpp.Xml.set_nodeValue","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",190,0x6a01d7e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(191)
	::cpp::XmlType tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	::cpp::XmlType tmp1 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(191)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(191)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(191)
	if ((tmp3)){
		HX_STACK_LINE(191)
		::cpp::XmlType tmp5 = this->nodeType;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		::cpp::XmlType tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		::cpp::XmlType tmp7 = ::cpp::Xml_obj::Document;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(191)
		::cpp::XmlType tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(191)
		tmp4 = (tmp6 == tmp8);
	}
	else{
		HX_STACK_LINE(191)
		tmp4 = true;
	}
	HX_STACK_LINE(191)
	if ((tmp4)){
		HX_STACK_LINE(192)
		HX_STACK_DO_THROW(HX_HCSTRING("bad nodeType","\x97","\xdf","\x58","\x71"));
	}
	HX_STACK_LINE(193)
	::String tmp5 = this->_nodeValue = v;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(193)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,set_nodeValue,return )

::cpp::Xml Xml_obj::get_parent( ){
	HX_STACK_FRAME("cpp.Xml","get_parent",0xb2e30535,"cpp.Xml.get_parent","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",197,0x6a01d7e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	::cpp::Xml tmp = this->_parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,get_parent,return )

::String Xml_obj::get( ::String att){
	HX_STACK_FRAME("cpp.Xml","get",0xb58a7c14,"cpp.Xml.get","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",201,0x6a01d7e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(att,"att")
	HX_STACK_LINE(202)
	::cpp::XmlType tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	::cpp::XmlType tmp1 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(202)
	if ((tmp2)){
		HX_STACK_LINE(203)
		HX_STACK_DO_THROW(HX_HCSTRING("bad nodeType","\x97","\xdf","\x58","\x71"));
	}
	HX_STACK_LINE(204)
	Dynamic tmp3 = this->_attributes;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(204)
	::String tmp4 = att;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(204)
	Dynamic tmp5 = ::Reflect_obj::field(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(204)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,get,return )

Void Xml_obj::set( ::String att,::String value){
{
		HX_STACK_FRAME("cpp.Xml","set",0xb5939720,"cpp.Xml.set","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",207,0x6a01d7e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(att,"att")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(208)
		::cpp::XmlType tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		::cpp::XmlType tmp1 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		if ((tmp2)){
			HX_STACK_LINE(209)
			HX_STACK_DO_THROW(HX_HCSTRING("bad nodeType","\x97","\xdf","\x58","\x71"));
		}
		HX_STACK_LINE(210)
		Dynamic tmp3 = this->_attributes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(210)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(210)
		if ((tmp4)){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",211,0x6a01d7e3)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(211)
			Dynamic tmp5 = _Function_2_1::Block();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(211)
			this->_attributes = tmp5;
		}
		HX_STACK_LINE(212)
		Dynamic tmp5 = this->_attributes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(212)
		::String tmp6 = att;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(212)
		::String tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(212)
		::Reflect_obj::setField(tmp5,tmp6,tmp7);
		HX_STACK_LINE(213)
		Dynamic();
		HX_STACK_LINE(213)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Xml_obj,set,(void))

Void Xml_obj::remove( ::String att){
{
		HX_STACK_FRAME("cpp.Xml","remove",0x42046386,"cpp.Xml.remove","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",216,0x6a01d7e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(att,"att")
		HX_STACK_LINE(217)
		::cpp::XmlType tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		::cpp::XmlType tmp1 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(217)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		if ((tmp2)){
			HX_STACK_LINE(218)
			HX_STACK_DO_THROW(HX_HCSTRING("bad nodeType","\x97","\xdf","\x58","\x71"));
		}
		HX_STACK_LINE(219)
		Dynamic tmp3 = this->_attributes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(219)
		::String tmp4 = att;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(219)
		::Reflect_obj::deleteField(tmp3,tmp4);
		HX_STACK_LINE(220)
		Dynamic();
		HX_STACK_LINE(220)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,remove,(void))

bool Xml_obj::exists( ::String att){
	HX_STACK_FRAME("cpp.Xml","exists",0xfd5be51e,"cpp.Xml.exists","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",223,0x6a01d7e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(att,"att")
	HX_STACK_LINE(224)
	::cpp::XmlType tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	::cpp::XmlType tmp1 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(224)
	if ((tmp2)){
		HX_STACK_LINE(225)
		HX_STACK_DO_THROW(HX_HCSTRING("bad nodeType","\x97","\xdf","\x58","\x71"));
	}
	HX_STACK_LINE(226)
	Dynamic tmp3 = this->_attributes;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(226)
	::String tmp4 = att;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(226)
	bool tmp5 = ::Reflect_obj::hasField(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(226)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,exists,return )

Dynamic Xml_obj::attributes( ){
	HX_STACK_FRAME("cpp.Xml","attributes",0x6c4f3919,"cpp.Xml.attributes","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",229,0x6a01d7e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	::cpp::XmlType tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	::cpp::XmlType tmp1 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(230)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	if ((tmp2)){
		HX_STACK_LINE(231)
		HX_STACK_DO_THROW(HX_HCSTRING("bad nodeType","\x97","\xdf","\x58","\x71"));
	}
	HX_STACK_LINE(232)
	Dynamic tmp3 = this->_attributes;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(232)
	Dynamic tmp4 = ::Reflect_obj::fields(tmp3)->iterator();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(232)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,attributes,return )

Dynamic Xml_obj::iterator( ){
	HX_STACK_FRAME("cpp.Xml","iterator",0xfd07e5b0,"cpp.Xml.iterator","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",235,0x6a01d7e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	bool tmp = (this->_children == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	if ((tmp)){
		HX_STACK_LINE(237)
		HX_STACK_DO_THROW(HX_HCSTRING("bad nodetype","\x77","\xb3","\x7f","\x86"));
	}
	HX_STACK_LINE(238)
	Dynamic tmp1 = this->_children->iteratorFast< ::cpp::Xml >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,iterator,return )

Dynamic Xml_obj::elements( ){
	HX_STACK_FRAME("cpp.Xml","elements",0xed31d1f9,"cpp.Xml.elements","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",242,0x6a01d7e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	bool tmp = (this->_children == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	if ((tmp)){
		HX_STACK_LINE(244)
		HX_STACK_DO_THROW(HX_HCSTRING("bad nodetype","\x77","\xb3","\x7f","\x86"));
	}
	HX_STACK_LINE(245)
	Array< ::Dynamic > children = this->_children;		HX_STACK_VAR(children,"children");
	struct _Function_1_1{
		inline static Dynamic Block( Array< ::Dynamic > &children){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",246,0x6a01d7e3)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00") , (int)0,false);

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalThisFunc,_Function_2_1,Array< ::Dynamic >,children)
				int __ArgCount() const { return 0; }
				bool run(){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",248,0x6a01d7e3)
					HX_STACK_THIS(__this.mPtr)
					{
						HX_STACK_LINE(249)
						int k = __this->__Field(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"), hx::paccDynamic );		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(250)
						int l = children->length;		HX_STACK_VAR(l,"l");
						HX_STACK_LINE(251)
						while((true)){
							HX_STACK_LINE(251)
							bool tmp1 = (k < l);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(251)
							bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(251)
							if ((tmp2)){
								HX_STACK_LINE(251)
								break;
							}
							HX_STACK_LINE(252)
							::cpp::Xml tmp3 = children->__get(k).StaticCast< ::cpp::Xml >();		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(252)
							::cpp::XmlType tmp4 = tmp3->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(252)
							::cpp::XmlType tmp5 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(252)
							bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(252)
							if ((tmp6)){
								HX_STACK_LINE(253)
								break;
							}
							HX_STACK_LINE(254)
							hx::AddEq(k,(int)1);
						}
						HX_STACK_LINE(256)
						__this->__FieldRef(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00")) = k;
						HX_STACK_LINE(257)
						bool tmp1 = (k < l);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(257)
						return tmp1;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				__result->Add(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18") ,  Dynamic(new _Function_2_1(children)),true);

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalThisFunc,_Function_2_2,Array< ::Dynamic >,children)
				int __ArgCount() const { return 0; }
				::cpp::Xml run(){
					HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",259,0x6a01d7e3)
					HX_STACK_THIS(__this.mPtr)
					{
						HX_STACK_LINE(260)
						int k = __this->__Field(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"), hx::paccDynamic );		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(261)
						int l = children->length;		HX_STACK_VAR(l,"l");
						HX_STACK_LINE(262)
						while((true)){
							HX_STACK_LINE(262)
							bool tmp1 = (k < l);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(262)
							bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(262)
							if ((tmp2)){
								HX_STACK_LINE(262)
								break;
							}
							HX_STACK_LINE(263)
							::cpp::Xml tmp3 = children->__get(k).StaticCast< ::cpp::Xml >();		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(263)
							::cpp::Xml n = tmp3;		HX_STACK_VAR(n,"n");
							HX_STACK_LINE(264)
							hx::AddEq(k,(int)1);
							HX_STACK_LINE(265)
							::cpp::XmlType tmp4 = n->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(265)
							::cpp::XmlType tmp5 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(265)
							bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(265)
							if ((tmp6)){
								HX_STACK_LINE(266)
								__this->__FieldRef(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00")) = k;
								HX_STACK_LINE(267)
								::cpp::Xml tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(267)
								return tmp7;
							}
						}
						HX_STACK_LINE(270)
						return null();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				__result->Add(HX_HCSTRING("next","\xf3","\x84","\x02","\x49") ,  Dynamic(new _Function_2_2(children)),true);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(246)
	Dynamic tmp1 = _Function_1_1::Block(children);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(246)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,elements,return )

Dynamic Xml_obj::elementsNamed( ::String name){
	HX_STACK_FRAME("cpp.Xml","elementsNamed",0xf0276700,"cpp.Xml.elementsNamed","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",275,0x6a01d7e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(276)
	bool tmp = (this->_children == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(276)
	if ((tmp)){
		HX_STACK_LINE(277)
		HX_STACK_DO_THROW(HX_HCSTRING("bad nodetype","\x77","\xb3","\x7f","\x86"));
	}
	HX_STACK_LINE(278)
	Array< ::Dynamic > children = this->_children;		HX_STACK_VAR(children,"children");
	struct _Function_1_1{
		inline static Dynamic Block( Array< ::Dynamic > &children,::String &name){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",279,0x6a01d7e3)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00") , (int)0,false);

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalThisFunc,_Function_2_1,Array< ::Dynamic >,children,::String,name)
				int __ArgCount() const { return 0; }
				bool run(){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",281,0x6a01d7e3)
					HX_STACK_THIS(__this.mPtr)
					{
						HX_STACK_LINE(282)
						int k = __this->__Field(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"), hx::paccDynamic );		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(283)
						int l = children->length;		HX_STACK_VAR(l,"l");
						HX_STACK_LINE(284)
						while((true)){
							HX_STACK_LINE(284)
							bool tmp1 = (k < l);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(284)
							bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(284)
							if ((tmp2)){
								HX_STACK_LINE(284)
								break;
							}
							HX_STACK_LINE(285)
							::cpp::Xml tmp3 = children->__get(k).StaticCast< ::cpp::Xml >();		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(285)
							::cpp::Xml n = tmp3;		HX_STACK_VAR(n,"n");
							HX_STACK_LINE(286)
							::cpp::XmlType tmp4 = n->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(286)
							::cpp::XmlType tmp5 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(286)
							bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(286)
							bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(286)
							if ((tmp6)){
								HX_STACK_LINE(286)
								tmp7 = (n->_nodeName == name);
							}
							else{
								HX_STACK_LINE(286)
								tmp7 = false;
							}
							HX_STACK_LINE(286)
							if ((tmp7)){
								HX_STACK_LINE(287)
								break;
							}
							HX_STACK_LINE(288)
							(k)++;
						}
						HX_STACK_LINE(290)
						__this->__FieldRef(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00")) = k;
						HX_STACK_LINE(291)
						bool tmp1 = (k < l);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(291)
						return tmp1;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				__result->Add(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18") ,  Dynamic(new _Function_2_1(children,name)),true);

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalThisFunc,_Function_2_2,Array< ::Dynamic >,children,::String,name)
				int __ArgCount() const { return 0; }
				::cpp::Xml run(){
					HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",293,0x6a01d7e3)
					HX_STACK_THIS(__this.mPtr)
					{
						HX_STACK_LINE(294)
						int k = __this->__Field(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"), hx::paccDynamic );		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(295)
						int l = children->length;		HX_STACK_VAR(l,"l");
						HX_STACK_LINE(296)
						while((true)){
							HX_STACK_LINE(296)
							bool tmp1 = (k < l);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(296)
							bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(296)
							if ((tmp2)){
								HX_STACK_LINE(296)
								break;
							}
							HX_STACK_LINE(297)
							::cpp::Xml tmp3 = children->__get(k).StaticCast< ::cpp::Xml >();		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(297)
							::cpp::Xml n = tmp3;		HX_STACK_VAR(n,"n");
							HX_STACK_LINE(298)
							(k)++;
							HX_STACK_LINE(299)
							::cpp::XmlType tmp4 = n->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(299)
							::cpp::XmlType tmp5 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(299)
							bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(299)
							bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(299)
							if ((tmp6)){
								HX_STACK_LINE(299)
								tmp7 = (n->_nodeName == name);
							}
							else{
								HX_STACK_LINE(299)
								tmp7 = false;
							}
							HX_STACK_LINE(299)
							if ((tmp7)){
								HX_STACK_LINE(300)
								__this->__FieldRef(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00")) = k;
								HX_STACK_LINE(301)
								::cpp::Xml tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(301)
								return tmp8;
							}
						}
						HX_STACK_LINE(304)
						return null();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				__result->Add(HX_HCSTRING("next","\xf3","\x84","\x02","\x49") ,  Dynamic(new _Function_2_2(children,name)),true);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(279)
	Dynamic tmp1 = _Function_1_1::Block(children,name);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,elementsNamed,return )

::cpp::Xml Xml_obj::firstChild( ){
	HX_STACK_FRAME("cpp.Xml","firstChild",0x5875838e,"cpp.Xml.firstChild","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",309,0x6a01d7e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(310)
	bool tmp = (this->_children == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(310)
	if ((tmp)){
		HX_STACK_LINE(311)
		HX_STACK_DO_THROW(HX_HCSTRING("bad nodetype","\x77","\xb3","\x7f","\x86"));
	}
	HX_STACK_LINE(312)
	::cpp::Xml tmp1 = this->_children->__get((int)0).StaticCast< ::cpp::Xml >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(312)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,firstChild,return )

::cpp::Xml Xml_obj::firstElement( ){
	HX_STACK_FRAME("cpp.Xml","firstElement",0x2330692e,"cpp.Xml.firstElement","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",315,0x6a01d7e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(316)
	bool tmp = (this->_children == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(316)
	if ((tmp)){
		HX_STACK_LINE(317)
		HX_STACK_DO_THROW(HX_HCSTRING("bad nodetype","\x77","\xb3","\x7f","\x86"));
	}
	HX_STACK_LINE(318)
	{
		HX_STACK_LINE(318)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(318)
		int tmp1 = this->_children->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(318)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(318)
		while((true)){
			HX_STACK_LINE(318)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(318)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(318)
			if ((tmp3)){
				HX_STACK_LINE(318)
				break;
			}
			HX_STACK_LINE(318)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(318)
			int cur = tmp4;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(319)
			::cpp::Xml tmp5 = this->_children->__get(cur).StaticCast< ::cpp::Xml >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(319)
			::cpp::Xml n = tmp5;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(320)
			::cpp::XmlType tmp6 = n->nodeType;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(320)
			::cpp::XmlType tmp7 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(320)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(320)
			if ((tmp8)){
				HX_STACK_LINE(321)
				::cpp::Xml tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(321)
				return tmp9;
			}
		}
	}
	HX_STACK_LINE(323)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,firstElement,return )

Void Xml_obj::addChild( ::cpp::Xml x){
{
		HX_STACK_FRAME("cpp.Xml","addChild",0x28846b7d,"cpp.Xml.addChild","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",326,0x6a01d7e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(327)
		bool tmp = (this->_children == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(327)
		if ((tmp)){
			HX_STACK_LINE(328)
			HX_STACK_DO_THROW(HX_HCSTRING("bad nodetype","\x77","\xb3","\x7f","\x86"));
		}
		HX_STACK_LINE(329)
		bool tmp1 = (x->_parent != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		if ((tmp1)){
			HX_STACK_LINE(329)
			::cpp::Xml tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(329)
			x->_parent->_children->remove(tmp2);
		}
		HX_STACK_LINE(330)
		x->_parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(331)
		::cpp::Xml tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(331)
		this->_children->push(tmp2);
		HX_STACK_LINE(332)
		Dynamic();
		HX_STACK_LINE(332)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,addChild,(void))

bool Xml_obj::removeChild( ::cpp::Xml x){
	HX_STACK_FRAME("cpp.Xml","removeChild",0xb0ee3036,"cpp.Xml.removeChild","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",335,0x6a01d7e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(336)
	bool tmp = (this->_children == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(336)
	if ((tmp)){
		HX_STACK_LINE(337)
		HX_STACK_DO_THROW(HX_HCSTRING("bad nodetype","\x77","\xb3","\x7f","\x86"));
	}
	HX_STACK_LINE(338)
	::cpp::Xml tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(338)
	bool tmp2 = this->_children->remove(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(338)
	bool b = tmp2;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(339)
	bool tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(339)
	if ((tmp3)){
		HX_STACK_LINE(339)
		x->_parent = null();
	}
	HX_STACK_LINE(340)
	bool tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(340)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,removeChild,return )

Void Xml_obj::insertChild( ::cpp::Xml x,int pos){
{
		HX_STACK_FRAME("cpp.Xml","insertChild",0xfa6f3121,"cpp.Xml.insertChild","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",343,0x6a01d7e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(344)
		bool tmp = (this->_children == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(344)
		if ((tmp)){
			HX_STACK_LINE(345)
			HX_STACK_DO_THROW(HX_HCSTRING("bad nodetype","\x77","\xb3","\x7f","\x86"));
		}
		HX_STACK_LINE(346)
		bool tmp1 = (x->_parent != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		if ((tmp1)){
			HX_STACK_LINE(346)
			::cpp::Xml tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(346)
			x->_parent->_children->remove(tmp2);
		}
		HX_STACK_LINE(347)
		x->_parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(348)
		int tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(348)
		::cpp::Xml tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(348)
		this->_children->insert(tmp2,tmp3);
		HX_STACK_LINE(349)
		Dynamic();
		HX_STACK_LINE(349)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Xml_obj,insertChild,(void))

::String Xml_obj::toString( ){
	HX_STACK_FRAME("cpp.Xml","toString",0xa1dc6c6e,"cpp.Xml.toString","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",352,0x6a01d7e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(353)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(353)
	::StringBuf s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(354)
	::StringBuf tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(354)
	this->toStringRec(tmp1);
	HX_STACK_LINE(355)
	::String tmp2 = s->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(355)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,toString,return )

Void Xml_obj::toStringRec( ::StringBuf s){
{
		HX_STACK_FRAME("cpp.Xml","toStringRec",0x9ba31d82,"cpp.Xml.toStringRec","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",358,0x6a01d7e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(359)
		::cpp::XmlType tmp = this->nodeType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(359)
		::cpp::XmlType _switch_1 = (tmp);
		if (  ( _switch_1==::cpp::Xml_obj::Document)){
			HX_STACK_LINE(361)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(361)
			Array< ::Dynamic > _g1 = this->_children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(361)
			while((true)){
				HX_STACK_LINE(361)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(361)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(361)
				if ((tmp2)){
					HX_STACK_LINE(361)
					break;
				}
				HX_STACK_LINE(361)
				::cpp::Xml tmp3 = _g1->__get(_g).StaticCast< ::cpp::Xml >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(361)
				::cpp::Xml x = tmp3;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(361)
				++(_g);
				HX_STACK_LINE(362)
				::StringBuf tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(362)
				x->toStringRec(tmp4);
			}
		}
		else if (  ( _switch_1==::cpp::Xml_obj::Element)){
			HX_STACK_LINE(364)
			{
				HX_STACK_LINE(364)
				::String tmp1 = HX_HCSTRING("<","\x3c","\x00","\x00","\x00");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(364)
				s->b->push(tmp1);
			}
			HX_STACK_LINE(365)
			::String tmp1 = this->_nodeName;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(365)
			s->add(tmp1);
			HX_STACK_LINE(366)
			{
				HX_STACK_LINE(366)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(366)
				Dynamic tmp2 = this->_attributes;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(366)
				Array< ::String > _g1 = ::Reflect_obj::fields(tmp2);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(366)
				while((true)){
					HX_STACK_LINE(366)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(366)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(366)
					if ((tmp4)){
						HX_STACK_LINE(366)
						break;
					}
					HX_STACK_LINE(366)
					::String tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(366)
					::String k = tmp5;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(366)
					++(_g);
					HX_STACK_LINE(367)
					{
						HX_STACK_LINE(367)
						::String tmp6 = HX_HCSTRING(" ","\x20","\x00","\x00","\x00");		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(367)
						s->b->push(tmp6);
					}
					HX_STACK_LINE(368)
					::String tmp6 = k;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(368)
					s->add(tmp6);
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(369)
						::String tmp7 = HX_HCSTRING("=","\x3d","\x00","\x00","\x00");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(369)
						s->b->push(tmp7);
					}
					HX_STACK_LINE(370)
					{
						HX_STACK_LINE(370)
						::String tmp7 = HX_HCSTRING("\"","\x22","\x00","\x00","\x00");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(370)
						s->b->push(tmp7);
					}
					HX_STACK_LINE(371)
					Dynamic tmp7 = this->_attributes;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(371)
					::String tmp8 = k;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(371)
					Dynamic tmp9 = ::Reflect_obj::field(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(371)
					s->add(tmp9);
					HX_STACK_LINE(372)
					{
						HX_STACK_LINE(372)
						::String tmp10 = HX_HCSTRING("\"","\x22","\x00","\x00","\x00");		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(372)
						s->b->push(tmp10);
					}
				}
			}
			HX_STACK_LINE(374)
			int tmp2 = this->_children->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(374)
			bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(374)
			if ((tmp3)){
				HX_STACK_LINE(375)
				{
					HX_STACK_LINE(375)
					::String tmp4 = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(375)
					s->b->push(tmp4);
				}
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					::String tmp4 = HX_HCSTRING(">","\x3e","\x00","\x00","\x00");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(376)
					s->b->push(tmp4);
				}
				HX_STACK_LINE(377)
				return null();
			}
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(379)
				::String tmp4 = HX_HCSTRING(">","\x3e","\x00","\x00","\x00");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(379)
				s->b->push(tmp4);
			}
			HX_STACK_LINE(380)
			{
				HX_STACK_LINE(380)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(380)
				Array< ::Dynamic > _g1 = this->_children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(380)
				while((true)){
					HX_STACK_LINE(380)
					bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(380)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(380)
					if ((tmp5)){
						HX_STACK_LINE(380)
						break;
					}
					HX_STACK_LINE(380)
					::cpp::Xml tmp6 = _g1->__get(_g).StaticCast< ::cpp::Xml >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(380)
					::cpp::Xml x = tmp6;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(380)
					++(_g);
					HX_STACK_LINE(381)
					::StringBuf tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(381)
					x->toStringRec(tmp7);
				}
			}
			HX_STACK_LINE(382)
			{
				HX_STACK_LINE(382)
				::String tmp4 = HX_HCSTRING("<","\x3c","\x00","\x00","\x00");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(382)
				s->b->push(tmp4);
			}
			HX_STACK_LINE(383)
			{
				HX_STACK_LINE(383)
				::String tmp4 = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(383)
				s->b->push(tmp4);
			}
			HX_STACK_LINE(384)
			::String tmp4 = this->_nodeName;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(384)
			s->add(tmp4);
			HX_STACK_LINE(385)
			{
				HX_STACK_LINE(385)
				::String tmp5 = HX_HCSTRING(">","\x3e","\x00","\x00","\x00");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(385)
				s->b->push(tmp5);
			}
		}
		else if (  ( _switch_1==::cpp::Xml_obj::PCData)){
			HX_STACK_LINE(387)
			::String tmp1 = this->_nodeValue;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(387)
			::String tmp2 = ::StringTools_obj::htmlEscape(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(387)
			s->add(tmp2);
		}
		else if (  ( _switch_1==::cpp::Xml_obj::CData)){
			HX_STACK_LINE(389)
			s->add(HX_HCSTRING("<![CDATA[","\xa4","\xfc","\x95","\xb4"));
			HX_STACK_LINE(390)
			::String tmp1 = this->_nodeValue;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(390)
			s->add(tmp1);
			HX_STACK_LINE(391)
			s->add(HX_HCSTRING("]]>","\xde","\xe2","\x46","\x00"));
		}
		else if (  ( _switch_1==::cpp::Xml_obj::Comment)){
			HX_STACK_LINE(393)
			s->add(HX_HCSTRING("<!--","\x05","\xff","\xc1","\x27"));
			HX_STACK_LINE(394)
			::String tmp1 = this->_nodeValue;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(394)
			s->add(tmp1);
			HX_STACK_LINE(395)
			s->add(HX_HCSTRING("-->","\xde","\x4c","\x22","\x00"));
		}
		else if (  ( _switch_1==::cpp::Xml_obj::DocType)){
			HX_STACK_LINE(397)
			s->add(HX_HCSTRING("<!DOCTYPE ","\x33","\x6c","\xbb","\xab"));
			HX_STACK_LINE(398)
			::String tmp1 = this->_nodeValue;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(398)
			s->add(tmp1);
			HX_STACK_LINE(399)
			s->add(HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
		}
		else if (  ( _switch_1==::cpp::Xml_obj::ProcessingInstruction)){
			HX_STACK_LINE(401)
			s->add(HX_HCSTRING("<?","\x83","\x34","\x00","\x00"));
			HX_STACK_LINE(402)
			::String tmp1 = this->_nodeValue;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(402)
			s->add(tmp1);
			HX_STACK_LINE(403)
			s->add(HX_HCSTRING("?>","\x1f","\x37","\x00","\x00"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,toStringRec,(void))

::cpp::XmlType Xml_obj::Element;

::cpp::XmlType Xml_obj::PCData;

::cpp::XmlType Xml_obj::CData;

::cpp::XmlType Xml_obj::Comment;

::cpp::XmlType Xml_obj::DocType;

::cpp::XmlType Xml_obj::ProcessingInstruction;

::cpp::XmlType Xml_obj::Document;

Dynamic Xml_obj::_parse;

::cpp::Xml Xml_obj::parse( ::String str){
	HX_STACK_FRAME("cpp.Xml","parse",0x3625e731,"cpp.Xml.parse","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",50,0x6a01d7e3)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(51)
	::cpp::Xml tmp = ::cpp::Xml_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	::cpp::Xml x = tmp;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(52)
	x->_children = Array_obj< ::Dynamic >::__new();
	struct _Function_1_1{
		inline static Dynamic Block( ::cpp::Xml &x){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",53,0x6a01d7e3)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00") , x,false);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalThisFunc,_Function_2_1)
				int __ArgCount() const { return 2; }
				Void run(::String name,Dynamic att){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",55,0x6a01d7e3)
					HX_STACK_THIS(__this.mPtr)
					HX_STACK_ARG(name,"name")
					HX_STACK_ARG(att,"att")
					{
						HX_STACK_LINE(56)
						::cpp::Xml tmp1 = ::cpp::Xml_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(56)
						::cpp::Xml x1 = tmp1;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(57)
						x1->_parent = __this->__Field(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"), hx::paccDynamic );
						HX_STACK_LINE(58)
						::cpp::XmlType tmp2 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(58)
						x1->nodeType = tmp2;
						HX_STACK_LINE(59)
						::String tmp3 = ::String(name);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(59)
						x1->_nodeName = tmp3;
						HX_STACK_LINE(60)
						x1->_attributes = att;
						HX_STACK_LINE(61)
						x1->_children = Array_obj< ::Dynamic >::__new();
						HX_STACK_LINE(62)
						{
							HX_STACK_LINE(63)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(64)
							::cpp::Xml tmp4 = x1;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(64)
							__this->__Field(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"), hx::paccDynamic )(tmp4);
							HX_STACK_LINE(65)
							__this->__FieldRef(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00")) = x1;
						}
					}
					return null();
				}
				HX_END_LOCAL_FUNC2((void))

				__result->Add(HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00") ,  Dynamic(new _Function_2_1()),true);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalThisFunc,_Function_2_2)
				int __ArgCount() const { return 1; }
				Void run(::String text){
					HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",68,0x6a01d7e3)
					HX_STACK_THIS(__this.mPtr)
					HX_STACK_ARG(text,"text")
					{
						HX_STACK_LINE(69)
						::cpp::Xml tmp1 = ::cpp::Xml_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(69)
						::cpp::Xml x1 = tmp1;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(70)
						x1->_parent = __this->__Field(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"), hx::paccDynamic );
						HX_STACK_LINE(71)
						::cpp::XmlType tmp2 = ::cpp::Xml_obj::CData;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(71)
						x1->nodeType = tmp2;
						HX_STACK_LINE(72)
						::String tmp3 = ::String(text);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(72)
						x1->_nodeValue = tmp3;
						HX_STACK_LINE(73)
						::cpp::Xml tmp4 = x1;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(73)
						__this->__Field(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"), hx::paccDynamic )(tmp4);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				__result->Add(HX_HCSTRING("cdata","\x0d","\xc4","\x0e","\x43") ,  Dynamic(new _Function_2_2()),true);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalThisFunc,_Function_2_3)
				int __ArgCount() const { return 1; }
				Void run(::String text){
					HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",75,0x6a01d7e3)
					HX_STACK_THIS(__this.mPtr)
					HX_STACK_ARG(text,"text")
					{
						HX_STACK_LINE(76)
						::cpp::Xml tmp1 = ::cpp::Xml_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(76)
						::cpp::Xml x1 = tmp1;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(77)
						x1->_parent = __this->__Field(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"), hx::paccDynamic );
						HX_STACK_LINE(78)
						::cpp::XmlType tmp2 = ::cpp::Xml_obj::PCData;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(78)
						x1->nodeType = tmp2;
						HX_STACK_LINE(79)
						::String tmp3 = ::String(text);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(79)
						x1->_nodeValue = tmp3;
						HX_STACK_LINE(80)
						::cpp::Xml tmp4 = x1;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(80)
						__this->__Field(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"), hx::paccDynamic )(tmp4);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				__result->Add(HX_HCSTRING("pcdata","\x9d","\x2d","\x07","\x0b") ,  Dynamic(new _Function_2_3()),true);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalThisFunc,_Function_2_4)
				int __ArgCount() const { return 1; }
				Void run(::String text){
					HX_STACK_FRAME("*","_Function_2_4",0x5201af7b,"*._Function_2_4","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",82,0x6a01d7e3)
					HX_STACK_THIS(__this.mPtr)
					HX_STACK_ARG(text,"text")
					{
						HX_STACK_LINE(83)
						::cpp::Xml tmp1 = ::cpp::Xml_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(83)
						::cpp::Xml x1 = tmp1;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(84)
						x1->_parent = __this->__Field(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"), hx::paccDynamic );
						HX_STACK_LINE(85)
						int tmp2 = text.cca((int)0);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(85)
						bool tmp3 = (tmp2 == (int)63);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(85)
						if ((tmp3)){
							HX_STACK_LINE(86)
							::cpp::XmlType tmp4 = ::cpp::Xml_obj::ProcessingInstruction;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(86)
							x1->nodeType = tmp4;
							HX_STACK_LINE(87)
							::String tmp5 = ::String(text);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(87)
							text = tmp5;
							HX_STACK_LINE(88)
							int tmp6 = (text.length - (int)2);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(88)
							::String tmp7 = text.substr((int)1,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(88)
							text = tmp7;
						}
						else{
							HX_STACK_LINE(90)
							::cpp::XmlType tmp4 = ::cpp::Xml_obj::Comment;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(90)
							x1->nodeType = tmp4;
							HX_STACK_LINE(91)
							::String tmp5 = ::String(text);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(91)
							text = tmp5;
						}
						HX_STACK_LINE(93)
						x1->_nodeValue = text;
						HX_STACK_LINE(94)
						::cpp::Xml tmp4 = x1;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(94)
						__this->__Field(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"), hx::paccDynamic )(tmp4);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				__result->Add(HX_HCSTRING("comment","\x5f","\x7a","\x70","\x81") ,  Dynamic(new _Function_2_4()),true);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalThisFunc,_Function_2_5)
				int __ArgCount() const { return 1; }
				Void run(::String text){
					HX_STACK_FRAME("*","_Function_2_5",0x5201af7c,"*._Function_2_5","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",96,0x6a01d7e3)
					HX_STACK_THIS(__this.mPtr)
					HX_STACK_ARG(text,"text")
					{
						HX_STACK_LINE(97)
						::cpp::Xml tmp1 = ::cpp::Xml_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(97)
						::cpp::Xml x1 = tmp1;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(98)
						x1->_parent = __this->__Field(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"), hx::paccDynamic );
						HX_STACK_LINE(99)
						::cpp::XmlType tmp2 = ::cpp::Xml_obj::DocType;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(99)
						x1->nodeType = tmp2;
						HX_STACK_LINE(100)
						::String tmp3 = ::String(text);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(100)
						::String tmp4 = tmp3.substr((int)1,null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(100)
						x1->_nodeValue = tmp4;
						HX_STACK_LINE(101)
						::cpp::Xml p = __this->__Field(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"), hx::paccDynamic );		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(102)
						::cpp::Xml tmp5 = x1;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(102)
						p->addChild(tmp5);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				__result->Add(HX_HCSTRING("doctype","\x32","\xd1","\xb3","\xed") ,  Dynamic(new _Function_2_5()),true);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalThisFunc,_Function_2_6)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_2_6",0x5201af7d,"*._Function_2_6","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",104,0x6a01d7e3)
					HX_STACK_THIS(__this.mPtr)
					{
						HX_STACK_LINE(105)
						Dynamic tmp1 = __this->__Field(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(105)
						__this->__FieldRef(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00")) = tmp1;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				__result->Add(HX_HCSTRING("done","\x82","\xf0","\x6d","\x42") ,  Dynamic(new _Function_2_6()),true);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(53)
	Dynamic tmp1 = _Function_1_1::Block(x);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	Dynamic parser = tmp1;		HX_STACK_VAR(parser,"parser");
	HX_STACK_LINE(108)
	::String tmp2 = str;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(108)
	Dynamic tmp3 = parser;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(108)
	::cpp::Xml_obj::_parse(tmp2,tmp3);
	HX_STACK_LINE(109)
	::cpp::XmlType tmp4 = ::cpp::Xml_obj::Document;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(109)
	x->nodeType = tmp4;
	HX_STACK_LINE(110)
	::cpp::Xml tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(110)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,parse,return )

::cpp::Xml Xml_obj::createElement( ::String name){
	HX_STACK_FRAME("cpp.Xml","createElement",0x1c340c1e,"cpp.Xml.createElement","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",114,0x6a01d7e3)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(115)
	::cpp::Xml tmp = ::cpp::Xml_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	::cpp::Xml r = tmp;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(116)
	::cpp::XmlType tmp1 = ::cpp::Xml_obj::Element;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	r->nodeType = tmp1;
	HX_STACK_LINE(117)
	r->_nodeName = name;
	HX_STACK_LINE(118)
	r->_attributes = null();
	HX_STACK_LINE(119)
	r->_children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(120)
	::cpp::Xml tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createElement,return )

::cpp::Xml Xml_obj::createPCData( ::String data){
	HX_STACK_FRAME("cpp.Xml","createPCData",0x9ef6ae7b,"cpp.Xml.createPCData","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",123,0x6a01d7e3)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(124)
	::cpp::Xml tmp = ::cpp::Xml_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	::cpp::Xml r = tmp;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(125)
	::cpp::XmlType tmp1 = ::cpp::Xml_obj::PCData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	r->nodeType = tmp1;
	HX_STACK_LINE(126)
	r->_nodeValue = data;
	HX_STACK_LINE(127)
	::cpp::Xml tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createPCData,return )

::cpp::Xml Xml_obj::createCData( ::String data){
	HX_STACK_FRAME("cpp.Xml","createCData",0xc463d10f,"cpp.Xml.createCData","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",130,0x6a01d7e3)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(131)
	::cpp::Xml tmp = ::cpp::Xml_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	::cpp::Xml r = tmp;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(132)
	::cpp::XmlType tmp1 = ::cpp::Xml_obj::CData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	r->nodeType = tmp1;
	HX_STACK_LINE(133)
	r->_nodeValue = data;
	HX_STACK_LINE(134)
	::cpp::Xml tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createCData,return )

::cpp::Xml Xml_obj::createComment( ::String data){
	HX_STACK_FRAME("cpp.Xml","createComment",0x974fd7c1,"cpp.Xml.createComment","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",137,0x6a01d7e3)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(138)
	::cpp::Xml tmp = ::cpp::Xml_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	::cpp::Xml r = tmp;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(139)
	::cpp::XmlType tmp1 = ::cpp::Xml_obj::Comment;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	r->nodeType = tmp1;
	HX_STACK_LINE(140)
	r->_nodeValue = data;
	HX_STACK_LINE(141)
	::cpp::Xml tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createComment,return )

::cpp::Xml Xml_obj::createDocType( ::String data){
	HX_STACK_FRAME("cpp.Xml","createDocType",0xee6c5ab4,"cpp.Xml.createDocType","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",144,0x6a01d7e3)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(145)
	::cpp::Xml tmp = ::cpp::Xml_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	::cpp::Xml r = tmp;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(146)
	::cpp::XmlType tmp1 = ::cpp::Xml_obj::DocType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	r->nodeType = tmp1;
	HX_STACK_LINE(147)
	r->_nodeValue = data;
	HX_STACK_LINE(148)
	::cpp::Xml tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createDocType,return )

::cpp::Xml Xml_obj::createProcessingInstruction( ::String data){
	HX_STACK_FRAME("cpp.Xml","createProcessingInstruction",0x0efc33dd,"cpp.Xml.createProcessingInstruction","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",151,0x6a01d7e3)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(152)
	::cpp::Xml tmp = ::cpp::Xml_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	::cpp::Xml r = tmp;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(153)
	::cpp::XmlType tmp1 = ::cpp::Xml_obj::ProcessingInstruction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	r->nodeType = tmp1;
	HX_STACK_LINE(154)
	r->_nodeValue = data;
	HX_STACK_LINE(155)
	::cpp::Xml tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(155)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,createProcessingInstruction,return )

::cpp::Xml Xml_obj::createDocument( ){
	HX_STACK_FRAME("cpp.Xml","createDocument",0xa8a54779,"cpp.Xml.createDocument","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",158,0x6a01d7e3)
	HX_STACK_LINE(159)
	::cpp::Xml tmp = ::cpp::Xml_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	::cpp::Xml r = tmp;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(160)
	::cpp::XmlType tmp1 = ::cpp::Xml_obj::Document;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	r->nodeType = tmp1;
	HX_STACK_LINE(161)
	r->_children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(162)
	::cpp::Xml tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(162)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Xml_obj,createDocument,return )


Xml_obj::Xml_obj()
{
}

void Xml_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Xml);
	HX_MARK_MEMBER_NAME(_nodeName,"_nodeName");
	HX_MARK_MEMBER_NAME(_nodeValue,"_nodeValue");
	HX_MARK_MEMBER_NAME(_attributes,"_attributes");
	HX_MARK_MEMBER_NAME(_children,"_children");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(nodeType,"nodeType");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void Xml_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_nodeName,"_nodeName");
	HX_VISIT_MEMBER_NAME(_nodeValue,"_nodeValue");
	HX_VISIT_MEMBER_NAME(_attributes,"_attributes");
	HX_VISIT_MEMBER_NAME(_children,"_children");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(nodeType,"nodeType");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic Xml_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return inCallProp == hx::paccAlways ? get_parent() : parent; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nodeType") ) { return nodeType; }
		if (HX_FIELD_EQ(inName,"nodeName") ) { if (inCallProp == hx::paccAlways) return get_nodeName(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"elements") ) { return elements_dyn(); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_nodeName") ) { return _nodeName; }
		if (HX_FIELD_EQ(inName,"_children") ) { return _children; }
		if (HX_FIELD_EQ(inName,"nodeValue") ) { if (inCallProp == hx::paccAlways) return get_nodeValue(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_nodeValue") ) { return _nodeValue; }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"attributes") ) { return attributes_dyn(); }
		if (HX_FIELD_EQ(inName,"firstChild") ) { return firstChild_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_attributes") ) { return _attributes; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"insertChild") ) { return insertChild_dyn(); }
		if (HX_FIELD_EQ(inName,"toStringRec") ) { return toStringRec_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_nodeName") ) { return get_nodeName_dyn(); }
		if (HX_FIELD_EQ(inName,"set_nodeName") ) { return set_nodeName_dyn(); }
		if (HX_FIELD_EQ(inName,"firstElement") ) { return firstElement_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_nodeValue") ) { return get_nodeValue_dyn(); }
		if (HX_FIELD_EQ(inName,"set_nodeValue") ) { return set_nodeValue_dyn(); }
		if (HX_FIELD_EQ(inName,"elementsNamed") ) { return elementsNamed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Xml_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CData") ) { outValue = CData; return true;  }
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PCData") ) { outValue = PCData; return true;  }
		if (HX_FIELD_EQ(inName,"_parse") ) { outValue = _parse; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Element") ) { outValue = Element; return true;  }
		if (HX_FIELD_EQ(inName,"Comment") ) { outValue = Comment; return true;  }
		if (HX_FIELD_EQ(inName,"DocType") ) { outValue = DocType; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Document") ) { outValue = Document; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createCData") ) { outValue = createCData_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createPCData") ) { outValue = createPCData_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createElement") ) { outValue = createElement_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createComment") ) { outValue = createComment_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createDocType") ) { outValue = createDocType_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDocument") ) { outValue = createDocument_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ProcessingInstruction") ) { outValue = ProcessingInstruction; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"createProcessingInstruction") ) { outValue = createProcessingInstruction_dyn(); return true;  }
	}
	return false;
}

Dynamic Xml_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::cpp::Xml >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::cpp::Xml >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nodeType") ) { nodeType=inValue.Cast< ::cpp::XmlType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nodeName") ) { if (inCallProp == hx::paccAlways) return set_nodeName(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_nodeName") ) { _nodeName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_children") ) { _children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nodeValue") ) { if (inCallProp == hx::paccAlways) return set_nodeValue(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_nodeValue") ) { _nodeValue=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_attributes") ) { _attributes=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Xml_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CData") ) { CData=ioValue.Cast< ::cpp::XmlType >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PCData") ) { PCData=ioValue.Cast< ::cpp::XmlType >(); return true; }
		if (HX_FIELD_EQ(inName,"_parse") ) { _parse=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Element") ) { Element=ioValue.Cast< ::cpp::XmlType >(); return true; }
		if (HX_FIELD_EQ(inName,"Comment") ) { Comment=ioValue.Cast< ::cpp::XmlType >(); return true; }
		if (HX_FIELD_EQ(inName,"DocType") ) { DocType=ioValue.Cast< ::cpp::XmlType >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Document") ) { Document=ioValue.Cast< ::cpp::XmlType >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ProcessingInstruction") ) { ProcessingInstruction=ioValue.Cast< ::cpp::XmlType >(); return true; }
	}
	return false;
}

void Xml_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_nodeName","\xcc","\xc8","\x12","\x3a"));
	outFields->push(HX_HCSTRING("_nodeValue","\xd0","\xd9","\x90","\x31"));
	outFields->push(HX_HCSTRING("_attributes","\xf6","\x75","\xfb","\x69"));
	outFields->push(HX_HCSTRING("_children","\x9e","\x10","\x00","\xb8"));
	outFields->push(HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"));
	outFields->push(HX_HCSTRING("nodeType","\xdc","\x51","\x86","\xf6"));
	outFields->push(HX_HCSTRING("nodeName","\x6d","\xd1","\x7c","\xf2"));
	outFields->push(HX_HCSTRING("nodeValue","\x0f","\x5e","\xee","\xd5"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Xml_obj,_nodeName),HX_HCSTRING("_nodeName","\xcc","\xc8","\x12","\x3a")},
	{hx::fsString,(int)offsetof(Xml_obj,_nodeValue),HX_HCSTRING("_nodeValue","\xd0","\xd9","\x90","\x31")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Xml_obj,_attributes),HX_HCSTRING("_attributes","\xf6","\x75","\xfb","\x69")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Xml_obj,_children),HX_HCSTRING("_children","\x9e","\x10","\x00","\xb8")},
	{hx::fsObject /*::cpp::Xml*/ ,(int)offsetof(Xml_obj,_parent),HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b")},
	{hx::fsObject /*::cpp::XmlType*/ ,(int)offsetof(Xml_obj,nodeType),HX_HCSTRING("nodeType","\xdc","\x51","\x86","\xf6")},
	{hx::fsObject /*::cpp::Xml*/ ,(int)offsetof(Xml_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::XmlType*/ ,(void *) &Xml_obj::Element,HX_HCSTRING("Element","\x9c","\xd6","\xa5","\xd3")},
	{hx::fsObject /*::cpp::XmlType*/ ,(void *) &Xml_obj::PCData,HX_HCSTRING("PCData","\xbd","\x3d","\xa2","\xbd")},
	{hx::fsObject /*::cpp::XmlType*/ ,(void *) &Xml_obj::CData,HX_HCSTRING("CData","\x0d","\x60","\x15","\xc1")},
	{hx::fsObject /*::cpp::XmlType*/ ,(void *) &Xml_obj::Comment,HX_HCSTRING("Comment","\x3f","\xa2","\xc1","\x4e")},
	{hx::fsObject /*::cpp::XmlType*/ ,(void *) &Xml_obj::DocType,HX_HCSTRING("DocType","\x32","\x25","\xde","\xa5")},
	{hx::fsObject /*::cpp::XmlType*/ ,(void *) &Xml_obj::ProcessingInstruction,HX_HCSTRING("ProcessingInstruction","\xdb","\x1e","\x14","\x6a")},
	{hx::fsObject /*::cpp::XmlType*/ ,(void *) &Xml_obj::Document,HX_HCSTRING("Document","\x3b","\xab","\xc4","\x74")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Xml_obj::_parse,HX_HCSTRING("_parse","\x74","\xd7","\x3c","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_nodeName","\xcc","\xc8","\x12","\x3a"),
	HX_HCSTRING("_nodeValue","\xd0","\xd9","\x90","\x31"),
	HX_HCSTRING("_attributes","\xf6","\x75","\xfb","\x69"),
	HX_HCSTRING("_children","\x9e","\x10","\x00","\xb8"),
	HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"),
	HX_HCSTRING("nodeType","\xdc","\x51","\x86","\xf6"),
	HX_HCSTRING("get_nodeName","\x76","\x85","\x96","\xa7"),
	HX_HCSTRING("set_nodeName","\xea","\xa8","\x8f","\xbc"),
	HX_HCSTRING("get_nodeValue","\xe6","\x31","\x52","\x97"),
	HX_HCSTRING("set_nodeValue","\xf2","\x13","\x58","\xdc"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("get_parent","\xf3","\x74","\x05","\xde"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("elements","\x37","\x36","\xc4","\x83"),
	HX_HCSTRING("elementsNamed","\x02","\xe2","\x8a","\xc2"),
	HX_HCSTRING("firstChild","\x4c","\xf3","\x97","\x83"),
	HX_HCSTRING("firstElement","\x6c","\xc4","\x9c","\x2f"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("insertChild","\xa3","\x87","\x6e","\x8d"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toStringRec","\x04","\x74","\xa2","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Xml_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Xml_obj::Element,"Element");
	HX_MARK_MEMBER_NAME(Xml_obj::PCData,"PCData");
	HX_MARK_MEMBER_NAME(Xml_obj::CData,"CData");
	HX_MARK_MEMBER_NAME(Xml_obj::Comment,"Comment");
	HX_MARK_MEMBER_NAME(Xml_obj::DocType,"DocType");
	HX_MARK_MEMBER_NAME(Xml_obj::ProcessingInstruction,"ProcessingInstruction");
	HX_MARK_MEMBER_NAME(Xml_obj::Document,"Document");
	HX_MARK_MEMBER_NAME(Xml_obj::_parse,"_parse");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Xml_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Xml_obj::Element,"Element");
	HX_VISIT_MEMBER_NAME(Xml_obj::PCData,"PCData");
	HX_VISIT_MEMBER_NAME(Xml_obj::CData,"CData");
	HX_VISIT_MEMBER_NAME(Xml_obj::Comment,"Comment");
	HX_VISIT_MEMBER_NAME(Xml_obj::DocType,"DocType");
	HX_VISIT_MEMBER_NAME(Xml_obj::ProcessingInstruction,"ProcessingInstruction");
	HX_VISIT_MEMBER_NAME(Xml_obj::Document,"Document");
	HX_VISIT_MEMBER_NAME(Xml_obj::_parse,"_parse");
};

#endif

hx::Class Xml_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Element","\x9c","\xd6","\xa5","\xd3"),
	HX_HCSTRING("PCData","\xbd","\x3d","\xa2","\xbd"),
	HX_HCSTRING("CData","\x0d","\x60","\x15","\xc1"),
	HX_HCSTRING("Comment","\x3f","\xa2","\xc1","\x4e"),
	HX_HCSTRING("DocType","\x32","\x25","\xde","\xa5"),
	HX_HCSTRING("ProcessingInstruction","\xdb","\x1e","\x14","\x6a"),
	HX_HCSTRING("Document","\x3b","\xab","\xc4","\x74"),
	HX_HCSTRING("_parse","\x74","\xd7","\x3c","\xb9"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("createElement","\x20","\x87","\x97","\xee"),
	HX_HCSTRING("createPCData","\xb9","\x09","\x63","\xab"),
	HX_HCSTRING("createCData","\x91","\x27","\x63","\x57"),
	HX_HCSTRING("createComment","\xc3","\x52","\xb3","\x69"),
	HX_HCSTRING("createDocType","\xb6","\xd5","\xcf","\xc0"),
	HX_HCSTRING("createProcessingInstruction","\x5f","\x2e","\x58","\x38"),
	HX_HCSTRING("createDocument","\x37","\x6e","\x4d","\xed"),
	::String(null()) };

void Xml_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.Xml","\xec","\x44","\x51","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Xml_obj::__GetStatic;
	__mClass->mSetStaticField = &Xml_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Xml_obj >;
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

void Xml_obj::__boot()
{
	_parse= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("parse_xml","\x8b","\xd8","\xf3","\xdb"),(int)2);
}

} // end namespace cpp
