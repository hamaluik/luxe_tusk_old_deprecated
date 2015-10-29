#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_rtti_CType
#include <haxe/rtti/CType.h>
#endif
#ifndef INCLUDED_haxe_rtti_CTypeTools
#include <haxe/rtti/CTypeTools.h>
#endif
namespace haxe{
namespace rtti{

Void CTypeTools_obj::__construct()
{
	return null();
}

//CTypeTools_obj::~CTypeTools_obj() { }

Dynamic CTypeTools_obj::__CreateEmpty() { return  new CTypeTools_obj; }
hx::ObjectPtr< CTypeTools_obj > CTypeTools_obj::__new()
{  hx::ObjectPtr< CTypeTools_obj > _result_ = new CTypeTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic CTypeTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CTypeTools_obj > _result_ = new CTypeTools_obj();
	_result_->__construct();
	return _result_;}

::String CTypeTools_obj::toString( ::haxe::rtti::CType t){
	HX_STACK_FRAME("haxe.rtti.CTypeTools","toString",0x778427ed,"haxe.rtti.CTypeTools.toString","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/CType.hx",269,0x6c1d6009)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(270)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	switch( (int)(t->__Index())){
		case (int)0: {
			HX_STACK_LINE(272)
			tmp = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(270)
			::List tmp1 = (::haxe::rtti::CType(t))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(270)
			::List params = tmp1;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(270)
			::String tmp2 = (::haxe::rtti::CType(t))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(270)
			::String name = tmp2;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(273)
			{
				HX_STACK_LINE(274)
				::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(274)
				::List tmp4 = params;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(274)
				tmp = ::haxe::rtti::CTypeTools_obj::nameWithParams(tmp3,tmp4);
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(270)
			::List tmp1 = (::haxe::rtti::CType(t))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(270)
			::List params = tmp1;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(270)
			::String tmp2 = (::haxe::rtti::CType(t))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(270)
			::String name = tmp2;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(273)
			{
				HX_STACK_LINE(274)
				::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(274)
				::List tmp4 = params;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(274)
				tmp = ::haxe::rtti::CTypeTools_obj::nameWithParams(tmp3,tmp4);
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(270)
			::List tmp1 = (::haxe::rtti::CType(t))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(270)
			::List params = tmp1;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(270)
			::String tmp2 = (::haxe::rtti::CType(t))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(270)
			::String name = tmp2;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(273)
			{
				HX_STACK_LINE(274)
				::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(274)
				::List tmp4 = params;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(274)
				tmp = ::haxe::rtti::CTypeTools_obj::nameWithParams(tmp3,tmp4);
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(270)
			::List tmp1 = (::haxe::rtti::CType(t))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(270)
			::List params = tmp1;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(270)
			::String tmp2 = (::haxe::rtti::CType(t))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(270)
			::String name = tmp2;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(273)
			{
				HX_STACK_LINE(274)
				::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(274)
				::List tmp4 = params;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(274)
				tmp = ::haxe::rtti::CTypeTools_obj::nameWithParams(tmp3,tmp4);
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(270)
			::haxe::rtti::CType tmp1 = (::haxe::rtti::CType(t))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(270)
			::haxe::rtti::CType ret = tmp1;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(270)
			::List tmp2 = (::haxe::rtti::CType(t))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(270)
			::List args = tmp2;		HX_STACK_VAR(args,"args");
			HX_STACK_LINE(275)
			{
				HX_STACK_LINE(276)
				bool tmp3 = (args->length == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(276)
				if ((tmp3)){
					HX_STACK_LINE(277)
					::haxe::rtti::CType tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(277)
					::String tmp5 = ::haxe::rtti::CTypeTools_obj::toString(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(277)
					tmp = (HX_HCSTRING("Void -> ","\xe3","\xe8","\x94","\xe3") + tmp5);
				}
				else{
					HX_STACK_LINE(279)
					Dynamic tmp4 = ::haxe::rtti::CTypeTools_obj::functionArgumentName_dyn();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(279)
					::List tmp5 = args->map(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(279)
					tmp = tmp5->join(HX_HCSTRING(" -> ","\x6f","\x2f","\x49","\x15"));
				}
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(270)
			::haxe::rtti::CType tmp1 = (::haxe::rtti::CType(t))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(270)
			::haxe::rtti::CType d = tmp1;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(281)
			{
				HX_STACK_LINE(282)
				bool tmp2 = (d == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(282)
				if ((tmp2)){
					HX_STACK_LINE(283)
					tmp = HX_HCSTRING("Dynamic","\x5f","\xc7","\x66","\x03");
				}
				else{
					HX_STACK_LINE(285)
					::haxe::rtti::CType tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(285)
					::String tmp4 = ::haxe::rtti::CTypeTools_obj::toString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(285)
					::String tmp5 = (HX_HCSTRING("Dynamic<","\xfd","\xab","\x87","\xf6") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(285)
					tmp = (tmp5 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
				}
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(270)
			::List tmp1 = (::haxe::rtti::CType(t))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(270)
			::List fields = tmp1;		HX_STACK_VAR(fields,"fields");
			HX_STACK_LINE(287)
			{
				HX_STACK_LINE(288)
				Dynamic tmp2 = ::haxe::rtti::CTypeTools_obj::classField_dyn();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(288)
				::List tmp3 = fields->map(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(288)
				::String tmp4 = tmp3->join(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(288)
				tmp = (HX_HCSTRING("{ ","\x45","\x6b","\x00","\x00") + tmp4);
			}
		}
		;break;
	}
	HX_STACK_LINE(270)
	return tmp;
	HX_STACK_LINE(270)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CTypeTools_obj,toString,return )

::String CTypeTools_obj::nameWithParams( ::String name,::List params){
	HX_STACK_FRAME("haxe.rtti.CTypeTools","nameWithParams",0x51c54e18,"haxe.rtti.CTypeTools.nameWithParams","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/CType.hx",292,0x6c1d6009)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(293)
	bool tmp = (params->length == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	if ((tmp)){
		HX_STACK_LINE(294)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		return tmp1;
	}
	HX_STACK_LINE(296)
	::String tmp1 = (name + HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(296)
	Dynamic tmp2 = ::haxe::rtti::CTypeTools_obj::toString_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(296)
	::List tmp3 = params->map(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(296)
	::String tmp4 = tmp3->join(HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(296)
	::String tmp5 = (tmp1 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(296)
	::String tmp6 = (tmp5 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(296)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CTypeTools_obj,nameWithParams,return )

::String CTypeTools_obj::functionArgumentName( Dynamic arg){
	HX_STACK_FRAME("haxe.rtti.CTypeTools","functionArgumentName",0x27487f61,"haxe.rtti.CTypeTools.functionArgumentName","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/CType.hx",299,0x6c1d6009)
	HX_STACK_ARG(arg,"arg")
	HX_STACK_LINE(300)
	bool tmp = arg->__Field(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(300)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(300)
	if ((tmp)){
		HX_STACK_LINE(300)
		tmp1 = HX_HCSTRING("?","\x3f","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(300)
		tmp1 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(300)
	::String tmp2 = arg->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(300)
	::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(300)
	::String tmp4 = (tmp3 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(300)
	::haxe::rtti::CType tmp5 = arg->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(300)
	::String tmp6 = ::haxe::rtti::CTypeTools_obj::toString(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(300)
	::String tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(300)
	bool tmp8 = (arg->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(300)
	::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(300)
	if ((tmp8)){
		HX_STACK_LINE(300)
		tmp9 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(300)
		tmp9 = (HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00") + arg->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ));
	}
	HX_STACK_LINE(300)
	::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(300)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CTypeTools_obj,functionArgumentName,return )

::String CTypeTools_obj::classField( Dynamic cf){
	HX_STACK_FRAME("haxe.rtti.CTypeTools","classField",0x743c2ae3,"haxe.rtti.CTypeTools.classField","C:\\HaxeToolkit\\haxe\\std/haxe/rtti/CType.hx",303,0x6c1d6009)
	HX_STACK_ARG(cf,"cf")
	HX_STACK_LINE(304)
	::String tmp = (cf->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(304)
	::haxe::rtti::CType tmp1 = cf->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(304)
	::String tmp2 = ::haxe::rtti::CTypeTools_obj::toString(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(304)
	::String tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(304)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CTypeTools_obj,classField,return )


CTypeTools_obj::CTypeTools_obj()
{
}

bool CTypeTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"classField") ) { outValue = classField_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nameWithParams") ) { outValue = nameWithParams_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"functionArgumentName") ) { outValue = functionArgumentName_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CTypeTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CTypeTools_obj::__mClass,"__mClass");
};

#endif

hx::Class CTypeTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("nameWithParams","\x17","\x90","\xa1","\xba"),
	HX_HCSTRING("functionArgumentName","\xa0","\xca","\x2c","\xfc"),
	HX_HCSTRING("classField","\x62","\xc1","\xb1","\x43"),
	::String(null()) };

void CTypeTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.rtti.CTypeTools","\x4d","\xf5","\x2a","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CTypeTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CTypeTools_obj >;
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
