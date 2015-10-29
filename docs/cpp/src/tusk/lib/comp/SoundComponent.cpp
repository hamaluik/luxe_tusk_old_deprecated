#include <hxcpp.h>

#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_tusk_Component
#include <tusk/Component.h>
#endif
#ifndef INCLUDED_tusk_lib_comp_SoundComponent
#include <tusk/lib/comp/SoundComponent.h>
#endif
namespace tusk{
namespace lib{
namespace comp{

Void SoundComponent_obj::__construct(bool playing,::String id)
{
HX_STACK_FRAME("tusk.lib.comp.SoundComponent","new",0x56b6b841,"tusk.lib.comp.SoundComponent.new","tusk/lib/comp/SoundComponent.hx",8,0x38623f30)
HX_STACK_THIS(this)
HX_STACK_ARG(playing,"playing")
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(11)
	this->id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(10)
	this->playing = false;
	HX_STACK_LINE(9)
	this->loaded = false;
	HX_STACK_LINE(14)
	this->playing = playing;
	HX_STACK_LINE(15)
	this->id = id;
	HX_STACK_LINE(16)
	super::__construct();
}
;
	return null();
}

//SoundComponent_obj::~SoundComponent_obj() { }

Dynamic SoundComponent_obj::__CreateEmpty() { return  new SoundComponent_obj; }
hx::ObjectPtr< SoundComponent_obj > SoundComponent_obj::__new(bool playing,::String id)
{  hx::ObjectPtr< SoundComponent_obj > _result_ = new SoundComponent_obj();
	_result_->__construct(playing,id);
	return _result_;}

Dynamic SoundComponent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundComponent_obj > _result_ = new SoundComponent_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int SoundComponent_obj::get__tid( ){
	HX_STACK_FRAME("tusk.lib.comp.SoundComponent","get__tid",0x6be24a58,"tusk.lib.comp.SoundComponent.get__tid","tusk/macros/ComponentIndexer.hx",52,0x2304c9ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	return (int)2;
}


Void SoundComponent_obj::hxSerialize( ::haxe::Serializer s){
{
		HX_STACK_FRAME("tusk.lib.comp.SoundComponent","hxSerialize",0xd8583191,"tusk.lib.comp.SoundComponent.hxSerialize","tusk/Component.hx",6,0x68348cf7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(52)
		bool tmp = this->loaded;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		s->serialize(tmp);
		HX_STACK_LINE(52)
		bool tmp1 = this->playing;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		s->serialize(tmp1);
		HX_STACK_LINE(52)
		::String tmp2 = this->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		s->serialize(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundComponent_obj,hxSerialize,(void))

Void SoundComponent_obj::hxUnserialize( ::haxe::Serializer s){
{
		HX_STACK_FRAME("tusk.lib.comp.SoundComponent","hxUnserialize",0x61dfc658,"tusk.lib.comp.SoundComponent.hxUnserialize","tusk/Component.hx",6,0x68348cf7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(52)
		bool tmp = this->loaded;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		s->serialize(tmp);
		HX_STACK_LINE(52)
		bool tmp1 = this->playing;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		s->serialize(tmp1);
		HX_STACK_LINE(52)
		::String tmp2 = this->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		s->serialize(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundComponent_obj,hxUnserialize,(void))

int SoundComponent_obj::tid;


SoundComponent_obj::SoundComponent_obj()
{
}

void SoundComponent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundComponent);
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void SoundComponent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic SoundComponent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { return loaded; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { return playing; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get__tid") ) { return get__tid_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hxSerialize") ) { return hxSerialize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hxUnserialize") ) { return hxUnserialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundComponent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"));
	outFields->push(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(SoundComponent_obj,loaded),HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58")},
	{hx::fsBool,(int)offsetof(SoundComponent_obj,playing),HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a")},
	{hx::fsString,(int)offsetof(SoundComponent_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &SoundComponent_obj::tid,HX_HCSTRING("tid","\x4f","\x61","\x58","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"),
	HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("get__tid","\xd9","\x61","\xde","\xbe"),
	HX_HCSTRING("hxSerialize","\xb0","\x00","\x09","\x14"),
	HX_HCSTRING("hxUnserialize","\x37","\xdb","\xb9","\x86"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundComponent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SoundComponent_obj::tid,"tid");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundComponent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SoundComponent_obj::tid,"tid");
};

#endif

hx::Class SoundComponent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("tid","\x4f","\x61","\x58","\x00"),
	::String(null()) };

void SoundComponent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.lib.comp.SoundComponent","\xcf","\x83","\x8b","\xe8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundComponent_obj >;
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

void SoundComponent_obj::__boot()
{
	tid= (int)2;
}

} // end namespace tusk
} // end namespace lib
} // end namespace comp
