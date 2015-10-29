#include <hxcpp.h>

#ifndef INCLUDED_tusk_AppFixedTimestep
#include <tusk/AppFixedTimestep.h>
#endif
#ifndef INCLUDED_tusk_Tusk
#include <tusk/Tusk.h>
#endif
#ifndef INCLUDED_tusk_modules_Sound
#include <tusk/modules/Sound.h>
#endif
#ifndef INCLUDED_tusk_resources_Asset
#include <tusk/resources/Asset.h>
#endif
#ifndef INCLUDED_tusk_resources_Sound
#include <tusk/resources/Sound.h>
#endif
namespace tusk{
namespace modules{

Void Sound_obj::__construct(::tusk::Tusk tusk1)
{
HX_STACK_FRAME("tusk.modules.Sound","new",0x0b2faee5,"tusk.modules.Sound.new","tusk/modules/Sound.hx",13,0x45dfaf2d)
HX_STACK_THIS(this)
HX_STACK_ARG(tusk1,"tusk1")
{
	HX_STACK_LINE(13)
	this->tusk = tusk1;
}
;
	return null();
}

//Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new(::tusk::Tusk tusk1)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(tusk1);
	return _result_;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Sound_obj::load( ::String path,Dynamic onLoadComplete,Dynamic onError){
{
		HX_STACK_FRAME("tusk.modules.Sound","load",0xbd3e7001,"tusk.modules.Sound.load","tusk/modules/Sound.hx",35,0x45dfaf2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(onLoadComplete,"onLoadComplete")
		HX_STACK_ARG(onError,"onError")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,load,(void))

Void Sound_obj::play( ::tusk::resources::Sound sound){
{
		HX_STACK_FRAME("tusk.modules.Sound","play",0xbfe103cf,"tusk.modules.Sound.play","tusk/modules/Sound.hx",42,0x45dfaf2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sound,"sound")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,play,(void))


Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(tusk,"tusk");
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tusk,"tusk");
}

Dynamic Sound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tusk") ) { return tusk; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tusk") ) { tusk=inValue.Cast< ::tusk::Tusk >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tusk","\x59","\xec","\x05","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::tusk::Tusk*/ ,(int)offsetof(Sound_obj,tusk),HX_HCSTRING("tusk","\x59","\xec","\x05","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tusk","\x59","\xec","\x05","\x4d"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#endif

hx::Class Sound_obj::__mClass;

void Sound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.modules.Sound","\x73","\x58","\xd3","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sound_obj >;
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
} // end namespace modules
