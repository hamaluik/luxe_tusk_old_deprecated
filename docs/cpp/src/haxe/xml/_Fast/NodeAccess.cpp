#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
namespace haxe{
namespace xml{
namespace _Fast{

Void NodeAccess_obj::__construct(::Xml x)
{
HX_STACK_FRAME("haxe.xml._Fast.NodeAccess","new",0xde09fb0a,"haxe.xml._Fast.NodeAccess.new","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",29,0x60a2153a)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
{
	HX_STACK_LINE(29)
	this->__x = x;
}
;
	return null();
}

//NodeAccess_obj::~NodeAccess_obj() { }

Dynamic NodeAccess_obj::__CreateEmpty() { return  new NodeAccess_obj; }
hx::ObjectPtr< NodeAccess_obj > NodeAccess_obj::__new(::Xml x)
{  hx::ObjectPtr< NodeAccess_obj > _result_ = new NodeAccess_obj();
	_result_->__construct(x);
	return _result_;}

Dynamic NodeAccess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NodeAccess_obj > _result_ = new NodeAccess_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxe::xml::Fast NodeAccess_obj::resolve( ::String name){
	HX_STACK_FRAME("haxe.xml._Fast.NodeAccess","resolve",0x0e91da96,"haxe.xml._Fast.NodeAccess.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",32,0x60a2153a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(33)
	::Xml tmp = this->__x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	Dynamic tmp2 = tmp->elementsNamed(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	::Xml tmp3 = tmp2->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	::Xml x = tmp3;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(34)
	bool tmp4 = (x == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	if ((tmp4)){
		HX_STACK_LINE(35)
		::Xml tmp5 = this->__x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		int tmp6 = tmp5->nodeType;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		int tmp7 = ::Xml_obj::Document;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(35)
		bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(35)
		::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(35)
		if ((tmp8)){
			HX_STACK_LINE(35)
			tmp9 = HX_HCSTRING("Document","\x3b","\xab","\xc4","\x74");
		}
		else{
			HX_STACK_LINE(35)
			::Xml tmp10 = this->__x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(35)
			::Xml _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(35)
			int tmp11 = _this->nodeType;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(35)
			int tmp12 = ::Xml_obj::Element;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(35)
			bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(35)
			if ((tmp13)){
				HX_STACK_LINE(35)
				::String tmp14 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + _this->nodeType);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(35)
				HX_STACK_DO_THROW(tmp14);
			}
			HX_STACK_LINE(35)
			tmp9 = _this->nodeName;
		}
		HX_STACK_LINE(35)
		::String xname = tmp9;		HX_STACK_VAR(xname,"xname");
		HX_STACK_LINE(36)
		::String tmp10 = (xname + HX_HCSTRING(" is missing element ","\xb4","\xea","\x58","\xcb"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(36)
		::String tmp11 = name;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(36)
		::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(36)
		HX_STACK_DO_THROW(tmp12);
	}
	HX_STACK_LINE(38)
	::haxe::xml::Fast tmp5 = ::haxe::xml::Fast_obj::__new(x);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(NodeAccess_obj,resolve,return )


NodeAccess_obj::NodeAccess_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void NodeAccess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NodeAccess);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_END_CLASS();
}

void NodeAccess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__x,"__x");
}

Dynamic NodeAccess_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return __x; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic NodeAccess_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< ::Xml >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void NodeAccess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__x","\x58","\x69","\x48","\x00"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(NodeAccess_obj,__x),HX_HCSTRING("__x","\x58","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__x","\x58","\x69","\x48","\x00"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NodeAccess_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NodeAccess_obj::__mClass,"__mClass");
};

#endif

hx::Class NodeAccess_obj::__mClass;

void NodeAccess_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml._Fast.NodeAccess","\x18","\x6e","\x61","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NodeAccess_obj >;
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
} // end namespace xml
} // end namespace _Fast
