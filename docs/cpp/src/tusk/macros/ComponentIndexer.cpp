#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_macro_Constant
#include <haxe/macro/Constant.h>
#endif
#ifndef INCLUDED_haxe_macro_ExprDef
#include <haxe/macro/ExprDef.h>
#endif
#ifndef INCLUDED_tusk_macros_ComponentIndexer
#include <tusk/macros/ComponentIndexer.h>
#endif
namespace tusk{
namespace macros{

Void ComponentIndexer_obj::__construct()
{
	return null();
}

//ComponentIndexer_obj::~ComponentIndexer_obj() { }

Dynamic ComponentIndexer_obj::__CreateEmpty() { return  new ComponentIndexer_obj; }
hx::ObjectPtr< ComponentIndexer_obj > ComponentIndexer_obj::__new()
{  hx::ObjectPtr< ComponentIndexer_obj > _result_ = new ComponentIndexer_obj();
	_result_->__construct();
	return _result_;}

Dynamic ComponentIndexer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ComponentIndexer_obj > _result_ = new ComponentIndexer_obj();
	_result_->__construct();
	return _result_;}

int ComponentIndexer_obj::nextID;

::haxe::ds::StringMap ComponentIndexer_obj::componentMap;

::haxe::ds::IntMap ComponentIndexer_obj::indexMap;

Dynamic ComponentIndexer_obj::index;

Void ComponentIndexer_obj::ensureID( ::String name){
{
		HX_STACK_FRAME("tusk.macros.ComponentIndexer","ensureID",0xb88da593,"tusk.macros.ComponentIndexer.ensureID","tusk/macros/ComponentIndexer.hx",62,0x2304c9ea)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(63)
		::haxe::ds::StringMap tmp = ::tusk::macros::ComponentIndexer_obj::componentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		if ((tmp3)){
			HX_STACK_LINE(64)
			::haxe::ds::StringMap tmp4 = ::tusk::macros::ComponentIndexer_obj::componentMap;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(64)
			int tmp6 = ::tusk::macros::ComponentIndexer_obj::nextID;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			tmp4->set(tmp5,tmp6);
			HX_STACK_LINE(65)
			::haxe::ds::IntMap tmp7 = ::tusk::macros::ComponentIndexer_obj::indexMap;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(65)
			int tmp8 = ::tusk::macros::ComponentIndexer_obj::nextID;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			::String tmp9 = name;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(65)
			tmp7->set(tmp8,tmp9);
			HX_STACK_LINE(67)
			(::tusk::macros::ComponentIndexer_obj::nextID)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentIndexer_obj,ensureID,(void))

::String ComponentIndexer_obj::getCompName( Dynamic e){
	HX_STACK_FRAME("tusk.macros.ComponentIndexer","getCompName",0xe6c8d176,"tusk.macros.ComponentIndexer.getCompName","tusk/macros/ComponentIndexer.hx",71,0x2304c9ea)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(72)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		::haxe::macro::ExprDef _g = e->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(72)
				::haxe::macro::Constant tmp1 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(72)
				::haxe::macro::Constant c = tmp1;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(74)
				switch( (int)(c->__Index())){
					case (int)3: {
						HX_STACK_LINE(74)
						::String tmp2 = (::haxe::macro::Constant(c))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(74)
						::String s = tmp2;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(75)
						tmp = s;
					}
					;break;
					default: {
						HX_STACK_LINE(76)
						tmp = null();
					}
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(72)
				::String tmp1 = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(72)
				::String field = tmp1;		HX_STACK_VAR(field,"field");
				HX_STACK_LINE(72)
				Dynamic tmp2 = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(72)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(79)
					Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(79)
					::String tmp4 = ::tusk::macros::ComponentIndexer_obj::getCompName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(79)
					::String tmp5 = (tmp4 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(79)
					::String tmp6 = field;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(79)
					tmp = (tmp5 + tmp6);
				}
			}
			;break;
			default: {
				HX_STACK_LINE(80)
				tmp = null();
			}
		}
	}
	HX_STACK_LINE(72)
	return tmp;
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentIndexer_obj,getCompName,return )

Dynamic ComponentIndexer_obj::ID;

Dynamic ComponentIndexer_obj::GetName;


ComponentIndexer_obj::ComponentIndexer_obj()
{
}

bool ComponentIndexer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { outValue = ID; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { outValue = index; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nextID") ) { outValue = nextID; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"GetName") ) { outValue = GetName; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"indexMap") ) { outValue = indexMap; return true;  }
		if (HX_FIELD_EQ(inName,"ensureID") ) { outValue = ensureID_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getCompName") ) { outValue = getCompName_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"componentMap") ) { outValue = componentMap; return true;  }
	}
	return false;
}

bool ComponentIndexer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nextID") ) { nextID=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"GetName") ) { GetName=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"indexMap") ) { indexMap=ioValue.Cast< ::haxe::ds::IntMap >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"componentMap") ) { componentMap=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ComponentIndexer_obj::nextID,HX_HCSTRING("nextID","\x8e","\x27","\x64","\x72")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &ComponentIndexer_obj::componentMap,HX_HCSTRING("componentMap","\xdf","\x25","\xea","\x26")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &ComponentIndexer_obj::indexMap,HX_HCSTRING("indexMap","\xaa","\xde","\x9e","\xc6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ComponentIndexer_obj::index,HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ComponentIndexer_obj::ID,HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ComponentIndexer_obj::GetName,HX_HCSTRING("GetName","\xe1","\x49","\xd3","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentIndexer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ComponentIndexer_obj::nextID,"nextID");
	HX_MARK_MEMBER_NAME(ComponentIndexer_obj::componentMap,"componentMap");
	HX_MARK_MEMBER_NAME(ComponentIndexer_obj::indexMap,"indexMap");
	HX_MARK_MEMBER_NAME(ComponentIndexer_obj::index,"index");
	HX_MARK_MEMBER_NAME(ComponentIndexer_obj::ID,"ID");
	HX_MARK_MEMBER_NAME(ComponentIndexer_obj::GetName,"GetName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentIndexer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ComponentIndexer_obj::nextID,"nextID");
	HX_VISIT_MEMBER_NAME(ComponentIndexer_obj::componentMap,"componentMap");
	HX_VISIT_MEMBER_NAME(ComponentIndexer_obj::indexMap,"indexMap");
	HX_VISIT_MEMBER_NAME(ComponentIndexer_obj::index,"index");
	HX_VISIT_MEMBER_NAME(ComponentIndexer_obj::ID,"ID");
	HX_VISIT_MEMBER_NAME(ComponentIndexer_obj::GetName,"GetName");
};

#endif

hx::Class ComponentIndexer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nextID","\x8e","\x27","\x64","\x72"),
	HX_HCSTRING("componentMap","\xdf","\x25","\xea","\x26"),
	HX_HCSTRING("indexMap","\xaa","\xde","\x9e","\xc6"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("ensureID","\x19","\xa1","\xb3","\x13"),
	HX_HCSTRING("getCompName","\xb0","\x4d","\xe4","\x91"),
	HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"),
	HX_HCSTRING("GetName","\xe1","\x49","\xd3","\xe8"),
	::String(null()) };

void ComponentIndexer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.macros.ComponentIndexer","\x34","\xd3","\xf4","\x93");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ComponentIndexer_obj::__GetStatic;
	__mClass->mSetStaticField = &ComponentIndexer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ComponentIndexer_obj >;
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

void ComponentIndexer_obj::__boot()
{
	nextID= (int)0;
	componentMap= ::haxe::ds::StringMap_obj::__new();
	indexMap= ::haxe::ds::IntMap_obj::__new();
}

} // end namespace tusk
} // end namespace macros
