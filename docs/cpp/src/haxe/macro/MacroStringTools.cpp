#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_macro_ComplexType
#include <haxe/macro/ComplexType.h>
#endif
#ifndef INCLUDED_haxe_macro_Constant
#include <haxe/macro/Constant.h>
#endif
#ifndef INCLUDED_haxe_macro_ExprDef
#include <haxe/macro/ExprDef.h>
#endif
#ifndef INCLUDED_haxe_macro_MacroStringTools
#include <haxe/macro/MacroStringTools.h>
#endif
#ifndef INCLUDED_haxe_macro_TypeParam
#include <haxe/macro/TypeParam.h>
#endif
namespace haxe{
namespace macro{

Void MacroStringTools_obj::__construct()
{
	return null();
}

//MacroStringTools_obj::~MacroStringTools_obj() { }

Dynamic MacroStringTools_obj::__CreateEmpty() { return  new MacroStringTools_obj; }
hx::ObjectPtr< MacroStringTools_obj > MacroStringTools_obj::__new()
{  hx::ObjectPtr< MacroStringTools_obj > _result_ = new MacroStringTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic MacroStringTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MacroStringTools_obj > _result_ = new MacroStringTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic MacroStringTools_obj::toFieldExpr( Array< ::String > sl){
	HX_STACK_FRAME("haxe.macro.MacroStringTools","toFieldExpr",0x6615118e,"haxe.macro.MacroStringTools.toFieldExpr","C:\\HaxeToolkit\\haxe\\std/haxe/macro/MacroStringTools.hx",72,0x492748ed)
	HX_STACK_ARG(sl,"sl")

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 2; }
	Dynamic run(::String s,Dynamic e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/macro/MacroStringTools.hx",73,0x492748ed)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(73)
			bool tmp = (e == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(73)
			Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(73)
			if ((tmp)){
				HX_STACK_LINE(73)
				::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(73)
				::haxe::macro::Constant tmp3 = ::haxe::macro::Constant_obj::CIdent(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(73)
				::haxe::macro::ExprDef tmp4 = ::haxe::macro::ExprDef_obj::EConst(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/MacroStringTools.hx",73,0x492748ed)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , HX_HCSTRING("C:\\HaxeToolkit\\haxe\\std/haxe/macro/MacroStringTools.hx","\xed","\x48","\x27","\x49"),false);
							__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , (int)2474,false);
							__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , (int)2477,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(73)
				Dynamic tmp5 = _Function_3_1::Block();		HX_STACK_VAR(tmp5,"tmp5");
				struct _Function_3_2{
					inline static Dynamic Block( Dynamic &tmp5,::haxe::macro::ExprDef &tmp4){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/MacroStringTools.hx",73,0x492748ed)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp4,false);
							__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(73)
				Dynamic tmp6 = _Function_3_2::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				tmp1 = tmp6;
			}
			else{
				HX_STACK_LINE(73)
				Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(73)
				::String tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(73)
				::haxe::macro::ExprDef tmp4 = ::haxe::macro::ExprDef_obj::EField(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/MacroStringTools.hx",73,0x492748ed)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , HX_HCSTRING("C:\\HaxeToolkit\\haxe\\std/haxe/macro/MacroStringTools.hx","\xed","\x48","\x27","\x49"),false);
							__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , (int)2488,false);
							__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , (int)2493,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(73)
				Dynamic tmp5 = _Function_3_1::Block();		HX_STACK_VAR(tmp5,"tmp5");
				struct _Function_3_2{
					inline static Dynamic Block( Dynamic &tmp5,::haxe::macro::ExprDef &tmp4){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/MacroStringTools.hx",73,0x492748ed)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , tmp4,false);
							__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp5,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(73)
				Dynamic tmp6 = _Function_3_2::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				tmp1 = tmp6;
			}
			HX_STACK_LINE(73)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(73)
	Dynamic tmp = ::Lambda_obj::fold(sl, Dynamic(new _Function_1_1()),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MacroStringTools_obj,toFieldExpr,return )

::String MacroStringTools_obj::toDotPath( Array< ::String > pack,::String name){
	HX_STACK_FRAME("haxe.macro.MacroStringTools","toDotPath",0x8ddd4d8d,"haxe.macro.MacroStringTools.toDotPath","C:\\HaxeToolkit\\haxe\\std/haxe/macro/MacroStringTools.hx",87,0x492748ed)
	HX_STACK_ARG(pack,"pack")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(88)
	bool tmp = (pack->length == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	if ((tmp)){
		HX_STACK_LINE(88)
		tmp1 = name;
	}
	else{
		HX_STACK_LINE(88)
		::String tmp2 = pack->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		::String tmp3 = (tmp2 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		tmp1 = (tmp3 + tmp4);
	}
	HX_STACK_LINE(88)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MacroStringTools_obj,toDotPath,return )

::haxe::macro::ComplexType MacroStringTools_obj::toComplex( ::String path){
	HX_STACK_FRAME("haxe.macro.MacroStringTools","toComplex",0x71a8e6ef,"haxe.macro.MacroStringTools.toComplex","C:\\HaxeToolkit\\haxe\\std/haxe/macro/MacroStringTools.hx",91,0x492748ed)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(92)
	Array< ::String > pack = path.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(pack,"pack");
	HX_STACK_LINE(93)
	::String tmp = pack->pop();		HX_STACK_VAR(tmp,"tmp");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp,Array< ::String > &pack){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/macro/MacroStringTools.hx",93,0x492748ed)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a") , pack,false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp,false);
				__result->Add(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed") , Array_obj< ::Dynamic >::__new(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(93)
	Dynamic tmp1 = _Function_1_1::Block(tmp,pack);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	::haxe::macro::ComplexType tmp2 = ::haxe::macro::ComplexType_obj::TPath(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MacroStringTools_obj,toComplex,return )


MacroStringTools_obj::MacroStringTools_obj()
{
}

bool MacroStringTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"toDotPath") ) { outValue = toDotPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toComplex") ) { outValue = toComplex_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toFieldExpr") ) { outValue = toFieldExpr_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MacroStringTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MacroStringTools_obj::__mClass,"__mClass");
};

#endif

hx::Class MacroStringTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("toFieldExpr","\x14","\x16","\x52","\x41"),
	HX_HCSTRING("toDotPath","\x93","\x04","\x3a","\xcf"),
	HX_HCSTRING("toComplex","\xf5","\x9d","\x05","\xb3"),
	::String(null()) };

void MacroStringTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.macro.MacroStringTools","\xe8","\x8c","\xc9","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MacroStringTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MacroStringTools_obj >;
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
