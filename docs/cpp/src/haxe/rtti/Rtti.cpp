#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_rtti_Rtti
#include <haxe/rtti/Rtti.h>
#endif
#ifndef INCLUDED_haxe_rtti_TypeTree
#include <haxe/rtti/TypeTree.h>
#endif
#ifndef INCLUDED_haxe_rtti_XmlParser
#include <haxe/rtti/XmlParser.h>
#endif
namespace haxe{
namespace rtti{

Void Rtti_obj::__construct()
{
	return null();
}

//Rtti_obj::~Rtti_obj() { }

Dynamic Rtti_obj::__CreateEmpty() { return  new Rtti_obj; }
hx::ObjectPtr< Rtti_obj > Rtti_obj::__new()
{  hx::ObjectPtr< Rtti_obj > _result_ = new Rtti_obj();
	_result_->__construct();
	return _result_;}

Dynamic Rtti_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rtti_obj > _result_ = new Rtti_obj();
	_result_->__construct();
	return _result_;}

Dynamic Rtti_obj::getRtti( ::hx::Class c){
	HX_STACK_FRAME("haxe.rtti.Rtti","getRtti",0xd34572a5,"haxe.rtti.Rtti.getRtti","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/Rtti.hx",39,0xefb3107f)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(40)
	::hx::Class tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	Dynamic tmp1 = ::Reflect_obj::field(tmp,HX_HCSTRING("__rtti","\xd7","\x20","\xab","\xfa"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	::String rtti = tmp1;		HX_STACK_VAR(rtti,"rtti");
	HX_STACK_LINE(41)
	bool tmp2 = (rtti == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	if ((tmp2)){
		HX_STACK_LINE(42)
		::hx::Class tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		::String tmp5 = (HX_HCSTRING("Class ","\x08","\x2d","\xa5","\x39") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		::String tmp6 = (tmp5 + HX_HCSTRING(" has no RTTI information, consider adding @:rtti","\x79","\xe3","\xee","\x20"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		HX_STACK_DO_THROW(tmp6);
	}
	HX_STACK_LINE(44)
	::String tmp3 = rtti;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	::Xml tmp4 = ::Xml_obj::parse(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	::Xml tmp5 = tmp4->firstElement();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	::Xml x = tmp5;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(45)
	::haxe::rtti::XmlParser tmp6 = ::haxe::rtti::XmlParser_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(45)
	::Xml tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(45)
	::haxe::rtti::TypeTree tmp8 = tmp6->processElement(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(45)
	::haxe::rtti::TypeTree infos = tmp8;		HX_STACK_VAR(infos,"infos");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::haxe::rtti::TypeTree t = infos;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(46)
		switch( (int)(infos->__Index())){
			case (int)1: {
				HX_STACK_LINE(46)
				Dynamic tmp9 = (::haxe::rtti::TypeTree(infos))->__Param(0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(46)
				Dynamic c1 = tmp9;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(47)
				{
					HX_STACK_LINE(47)
					Dynamic tmp10 = c1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(47)
					return tmp10;
				}
			}
			;break;
			default: {
				HX_STACK_LINE(48)
				::haxe::rtti::TypeTree tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(48)
				::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(48)
				::String tmp11 = (HX_HCSTRING("Enum mismatch: expected TClassDecl but found ","\x5a","\x0e","\x42","\xc4") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(48)
				HX_STACK_DO_THROW(tmp11);
			}
		}
	}
	HX_STACK_LINE(46)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Rtti_obj,getRtti,return )

bool Rtti_obj::hasRtti( ::hx::Class c){
	HX_STACK_FRAME("haxe.rtti.Rtti","hasRtti",0xd006e369,"haxe.rtti.Rtti.hasRtti","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/Rtti.hx",57,0xefb3107f)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(58)
	::hx::Class tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	bool tmp1 = ::Lambda_obj::has(::Type_obj::getClassFields(tmp),HX_HCSTRING("__rtti","\xd7","\x20","\xab","\xfa"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Rtti_obj,hasRtti,return )


Rtti_obj::Rtti_obj()
{
}

bool Rtti_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getRtti") ) { outValue = getRtti_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hasRtti") ) { outValue = hasRtti_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rtti_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rtti_obj::__mClass,"__mClass");
};

#endif

hx::Class Rtti_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getRtti","\x6d","\x6d","\x35","\x1e"),
	HX_HCSTRING("hasRtti","\x31","\xde","\xf6","\x1a"),
	::String(null()) };

void Rtti_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.rtti.Rtti","\xa6","\x6d","\xc0","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Rtti_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Rtti_obj >;
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
