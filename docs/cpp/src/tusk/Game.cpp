#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_tusk_Entity
#include <tusk/Entity.h>
#endif
#ifndef INCLUDED_tusk_Game
#include <tusk/Game.h>
#endif
#ifndef INCLUDED_tusk_Processor
#include <tusk/Processor.h>
#endif
#ifndef INCLUDED_tusk_debug_Exception
#include <tusk/debug/Exception.h>
#endif
#ifndef INCLUDED_tusk_debug_ExceptionType
#include <tusk/debug/ExceptionType.h>
#endif
namespace tusk{

Void Game_obj::__construct()
{
HX_STACK_FRAME("tusk.Game","new",0x4bdb50b9,"tusk.Game.new","tusk/Game.hx",31,0x13a75af6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	this->processors = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(33)
	this->entities = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Game_obj::~Game_obj() { }

Dynamic Game_obj::__CreateEmpty() { return  new Game_obj; }
hx::ObjectPtr< Game_obj > Game_obj::__new()
{  hx::ObjectPtr< Game_obj > _result_ = new Game_obj();
	_result_->__construct();
	return _result_;}

Dynamic Game_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game_obj > _result_ = new Game_obj();
	_result_->__construct();
	return _result_;}

::String Game_obj::get_title( ){
	HX_STACK_FRAME("tusk.Game","get_title",0xaf023b08,"tusk.Game.get_title","tusk/Game.hx",18,0x13a75af6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	return HX_HCSTRING("Unbranded Tusk Game","\x06","\xd5","\x6d","\x80");
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,get_title,return )

Void Game_obj::___connectRoutes( ){
{
		HX_STACK_FRAME("tusk.Game","___connectRoutes",0x41854dbc,"tusk.Game.___connectRoutes","tusk/Game.hx",40,0x13a75af6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,___connectRoutes,(void))

Void Game_obj::___disconnectRoutes( ){
{
		HX_STACK_FRAME("tusk.Game","___disconnectRoutes",0xcd80f9de,"tusk.Game.___disconnectRoutes","tusk/Game.hx",42,0x13a75af6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,___disconnectRoutes,(void))

bool Game_obj::processorExists( ::hx::Class type){
	HX_STACK_FRAME("tusk.Game","processorExists",0x44ff3aa7,"tusk.Game.processorExists","tusk/Game.hx",49,0x13a75af6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		Array< ::Dynamic > _g1 = this->processors;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(51)
		while((true)){
			HX_STACK_LINE(51)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			if ((tmp1)){
				HX_STACK_LINE(51)
				break;
			}
			HX_STACK_LINE(51)
			::tusk::Processor tmp2 = _g1->__get(_g).StaticCast< ::tusk::Processor >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			::tusk::Processor processor = tmp2;		HX_STACK_VAR(processor,"processor");
			HX_STACK_LINE(51)
			++(_g);
			HX_STACK_LINE(52)
			::tusk::Processor tmp3 = processor;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			::hx::Class tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			if ((tmp6)){
				HX_STACK_LINE(53)
				return true;
			}
		}
	}
	HX_STACK_LINE(56)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,processorExists,return )

Void Game_obj::useProcessor( ::tusk::Processor processor){
{
		HX_STACK_FRAME("tusk.Game","useProcessor",0xe4135c92,"tusk.Game.useProcessor","tusk/Game.hx",64,0x13a75af6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(processor,"processor")
		HX_STACK_LINE(65)
		::tusk::Processor tmp = processor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		::hx::Class tmp1 = ::Type_obj::getClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		bool tmp2 = this->processorExists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		if ((tmp2)){
			HX_STACK_LINE(66)
			::tusk::Processor tmp3 = processor;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			::String tmp5 = ::Type_obj::getClassName(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			::String tmp6 = (HX_HCSTRING("Can't add processor '","\x97","\xbd","\xf4","\x72") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			::String tmp7 = (tmp6 + HX_HCSTRING("' because it already exists!","\x7b","\x21","\x14","\x4d"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(66)
			Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Game.hx","\xec","\xf9","\xa4","\x56"),66,HX_HCSTRING("tusk.Game","\x47","\x80","\x6c","\xdb"),HX_HCSTRING("useProcessor","\x0b","\x30","\xa7","\x42"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(66)
			::tusk::debug::Exception tmp9 = ::tusk::debug::Exception_obj::__new(tmp7,null(),null(),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(66)
			HX_STACK_DO_THROW(tmp9);
		}
		HX_STACK_LINE(68)
		processor->___connectRoutes();
		HX_STACK_LINE(69)
		::tusk::Processor tmp3 = processor;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		this->processors->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,useProcessor,(void))

::tusk::Processor Game_obj::getProcessor( ::hx::Class type){
	HX_STACK_FRAME("tusk.Game","getProcessor",0x83ce8663,"tusk.Game.getProcessor","tusk/Game.hx",77,0x13a75af6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		Array< ::Dynamic > _g1 = this->processors;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(78)
		while((true)){
			HX_STACK_LINE(78)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(78)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			if ((tmp1)){
				HX_STACK_LINE(78)
				break;
			}
			HX_STACK_LINE(78)
			::tusk::Processor tmp2 = _g1->__get(_g).StaticCast< ::tusk::Processor >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			::tusk::Processor processor = tmp2;		HX_STACK_VAR(processor,"processor");
			HX_STACK_LINE(78)
			++(_g);
			HX_STACK_LINE(79)
			::tusk::Processor tmp3 = processor;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(79)
			::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			::hx::Class tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(79)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(79)
			if ((tmp6)){
				HX_STACK_LINE(80)
				::tusk::Processor tmp7 = processor;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(80)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(83)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,getProcessor,return )

Void Game_obj::onStart( Dynamic data){
{
		HX_STACK_FRAME("tusk.Game","onStart",0xbe3a339c,"tusk.Game.onStart","tusk/Game.hx",90,0x13a75af6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,onStart,(void))

Void Game_obj::onDestroy( Dynamic data){
{
		HX_STACK_FRAME("tusk.Game","onDestroy",0x574eaeb4,"tusk.Game.onDestroy","tusk/Game.hx",96,0x13a75af6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,onDestroy,(void))

Void Game_obj::onUpdate( Dynamic data){
{
		HX_STACK_FRAME("tusk.Game","onUpdate",0x35be198f,"tusk.Game.onUpdate","tusk/Game.hx",102,0x13a75af6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,onUpdate,(void))

Void Game_obj::onRender( Dynamic data){
{
		HX_STACK_FRAME("tusk.Game","onRender",0xb3e1fedc,"tusk.Game.onRender","tusk/Game.hx",108,0x13a75af6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,onRender,(void))


Game_obj::Game_obj()
{
}

void Game_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game);
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(processors,"processors");
	HX_MARK_MEMBER_NAME(entities,"entities");
	HX_MARK_END_CLASS();
}

void Game_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(processors,"processors");
	HX_VISIT_MEMBER_NAME(entities,"entities");
}

Dynamic Game_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return inCallProp == hx::paccAlways ? get_title() : title; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { return onStart_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { return entities; }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"onRender") ) { return onRender_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_title") ) { return get_title_dyn(); }
		if (HX_FIELD_EQ(inName,"onDestroy") ) { return onDestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"processors") ) { return processors; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useProcessor") ) { return useProcessor_dyn(); }
		if (HX_FIELD_EQ(inName,"getProcessor") ) { return getProcessor_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"processorExists") ) { return processorExists_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"___connectRoutes") ) { return ___connectRoutes_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"___disconnectRoutes") ) { return ___disconnectRoutes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Game_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { entities=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"processors") ) { processors=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("processors","\xe1","\xea","\x39","\xd7"));
	outFields->push(HX_HCSTRING("entities","\x41","\x96","\x95","\x92"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Game_obj,title),HX_HCSTRING("title","\x98","\x15","\x3b","\x10")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Game_obj,processors),HX_HCSTRING("processors","\xe1","\xea","\x39","\xd7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Game_obj,entities),HX_HCSTRING("entities","\x41","\x96","\x95","\x92")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("title","\x98","\x15","\x3b","\x10"),
	HX_HCSTRING("get_title","\xef","\x71","\xe4","\x53"),
	HX_HCSTRING("processors","\xe1","\xea","\x39","\xd7"),
	HX_HCSTRING("entities","\x41","\x96","\x95","\x92"),
	HX_HCSTRING("___connectRoutes","\xb5","\xd1","\x7a","\x1d"),
	HX_HCSTRING("___disconnectRoutes","\x85","\x77","\x35","\x54"),
	HX_HCSTRING("processorExists","\xce","\x18","\x4c","\xcc"),
	HX_HCSTRING("useProcessor","\x0b","\x30","\xa7","\x42"),
	HX_HCSTRING("getProcessor","\xdc","\x59","\x62","\xe2"),
	HX_HCSTRING("onStart","\xc3","\x12","\x49","\x1a"),
	HX_HCSTRING("onDestroy","\x9b","\xe5","\x30","\xfc"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("onRender","\xd5","\x61","\xd6","\xe4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Game_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Game_obj::__mClass,"__mClass");
};

#endif

hx::Class Game_obj::__mClass;

void Game_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.Game","\x47","\x80","\x6c","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Game_obj >;
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

} // end namespace tusk
