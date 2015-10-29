#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_ExprArrayTools
#include <haxe/macro/ExprArrayTools.h>
#endif
namespace haxe{
namespace macro{

Void ExprArrayTools_obj::__construct()
{
	return null();
}

//ExprArrayTools_obj::~ExprArrayTools_obj() { }

Dynamic ExprArrayTools_obj::__CreateEmpty() { return  new ExprArrayTools_obj; }
hx::ObjectPtr< ExprArrayTools_obj > ExprArrayTools_obj::__new()
{  hx::ObjectPtr< ExprArrayTools_obj > _result_ = new ExprArrayTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic ExprArrayTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExprArrayTools_obj > _result_ = new ExprArrayTools_obj();
	_result_->__construct();
	return _result_;}

cpp::ArrayBase ExprArrayTools_obj::map( cpp::ArrayBase el,Dynamic f){
	HX_STACK_FRAME("haxe.macro.ExprArrayTools","map",0xe818068f,"haxe.macro.ExprArrayTools.map","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",302,0x6b786beb)
	HX_STACK_ARG(el,"el")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(303)
	cpp::ArrayBase ret = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(304)
	{
		HX_STACK_LINE(304)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(304)
		while((true)){
			HX_STACK_LINE(304)
			bool tmp = (_g < el->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(304)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(304)
			if ((tmp1)){
				HX_STACK_LINE(304)
				break;
			}
			HX_STACK_LINE(304)
			Dynamic tmp2 = el->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(304)
			Dynamic e = tmp2;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(304)
			++(_g);
			HX_STACK_LINE(305)
			Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(305)
			Dynamic tmp4 = f(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(305)
			ret->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		}
	}
	HX_STACK_LINE(306)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprArrayTools_obj,map,return )

Void ExprArrayTools_obj::iter( cpp::ArrayBase el,Dynamic f){
{
		HX_STACK_FRAME("haxe.macro.ExprArrayTools","iter",0x2a573dc5,"haxe.macro.ExprArrayTools.iter","C:\\HaxeToolkit\\haxe\\std/haxe/macro/ExprTools.hx",310,0x6b786beb)
		HX_STACK_ARG(el,"el")
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(310)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(310)
		while((true)){
			HX_STACK_LINE(310)
			bool tmp = (_g < el->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(310)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(310)
			if ((tmp1)){
				HX_STACK_LINE(310)
				break;
			}
			HX_STACK_LINE(310)
			Dynamic tmp2 = el->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(310)
			Dynamic e = tmp2;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(310)
			++(_g);
			HX_STACK_LINE(311)
			Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(311)
			f(tmp3).Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprArrayTools_obj,iter,(void))


ExprArrayTools_obj::ExprArrayTools_obj()
{
}

bool ExprArrayTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"iter") ) { outValue = iter_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExprArrayTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExprArrayTools_obj::__mClass,"__mClass");
};

#endif

hx::Class ExprArrayTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("iter","\x18","\xc5","\xbf","\x45"),
	::String(null()) };

void ExprArrayTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.macro.ExprArrayTools","\xe1","\xa6","\x69","\x4f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ExprArrayTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ExprArrayTools_obj >;
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
} // end namespace macro
