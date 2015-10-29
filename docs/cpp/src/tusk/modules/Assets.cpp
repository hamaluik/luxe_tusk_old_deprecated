#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_promhx_Deferred
#include <promhx/Deferred.h>
#endif
#ifndef INCLUDED_promhx_Promise
#include <promhx/Promise.h>
#endif
#ifndef INCLUDED_promhx_base_AsyncBase
#include <promhx/base/AsyncBase.h>
#endif
#ifndef INCLUDED_tusk_AppFixedTimestep
#include <tusk/AppFixedTimestep.h>
#endif
#ifndef INCLUDED_tusk_Tusk
#include <tusk/Tusk.h>
#endif
#ifndef INCLUDED_tusk_debug_Exception
#include <tusk/debug/Exception.h>
#endif
#ifndef INCLUDED_tusk_debug_ExceptionType
#include <tusk/debug/ExceptionType.h>
#endif
#ifndef INCLUDED_tusk_modules_Assets
#include <tusk/modules/Assets.h>
#endif
#ifndef INCLUDED_tusk_resources_Asset
#include <tusk/resources/Asset.h>
#endif
#ifndef INCLUDED_tusk_resources_Sound
#include <tusk/resources/Sound.h>
#endif
#ifndef INCLUDED_tusk_resources_Texture
#include <tusk/resources/Texture.h>
#endif
namespace tusk{
namespace modules{

Void Assets_obj::__construct(::tusk::Tusk tusk1)
{
HX_STACK_FRAME("tusk.modules.Assets","new",0x928168d1,"tusk.modules.Assets.new","tusk/modules/Assets.hx",13,0x6521c27d)
HX_STACK_THIS(this)
HX_STACK_ARG(tusk1,"tusk1")
{
	HX_STACK_LINE(15)
	this->assets = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(19)
	this->tusk = tusk1;
}
;
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new(::tusk::Tusk tusk1)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct(tusk1);
	return _result_;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool Assets_obj::isLoaded( ::String path){
	HX_STACK_FRAME("tusk.modules.Assets","isLoaded",0x88b8117e,"tusk.modules.Assets.isLoaded","tusk/modules/Assets.hx",27,0x6521c27d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(28)
	::haxe::ds::StringMap tmp = this->assets;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isLoaded,return )

::promhx::Promise Assets_obj::loadSound( ::String path){
	HX_STACK_FRAME("tusk.modules.Assets","loadSound",0xa76cdbfa,"tusk.modules.Assets.loadSound","tusk/modules/Assets.hx",37,0x6521c27d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(38)
	::promhx::Deferred tmp = ::promhx::Deferred_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	::promhx::Deferred def = tmp;		HX_STACK_VAR(def,"def");
	HX_STACK_LINE(39)
	::promhx::Promise tmp1 = def->promise();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	::promhx::Promise promise = tmp1;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(42)
	::String tmp2 = path;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	bool tmp3 = this->isLoaded(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	if ((tmp3)){
		HX_STACK_LINE(43)
		::String tmp4 = path;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		::tusk::resources::Sound tmp5 = this->getSound(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		def->resolve(tmp5);
		HX_STACK_LINE(44)
		::promhx::Promise tmp6 = promise;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		return tmp6;
	}
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),60,HX_HCSTRING("tusk.modules.Assets","\x5f","\xac","\xee","\x45"),HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		::tusk::debug::Exception tmp5 = ::tusk::debug::Exception_obj::__new(HX_HCSTRING("Sound loading isn't supported without snow!","\xb0","\x9b","\xce","\xb5"),null(),null(),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		Dynamic e = tmp5;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(60)
		Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		def->handleError(tmp6);
	}
	HX_STACK_LINE(63)
	::promhx::Promise tmp4 = promise;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(63)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadSound,return )

::tusk::resources::Sound Assets_obj::getSound( ::String path){
	HX_STACK_FRAME("tusk.modules.Assets","getSound",0xb882ca48,"tusk.modules.Assets.getSound","tusk/modules/Assets.hx",73,0x6521c27d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(74)
	::haxe::ds::StringMap tmp = this->assets;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	if ((tmp3)){
		HX_STACK_LINE(75)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),75,HX_HCSTRING("tusk.modules.Assets","\x5f","\xac","\xee","\x45"),HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		::tusk::debug::Exception tmp5 = ::tusk::debug::Exception_obj::__new(HX_HCSTRING("Sound '${path}' hasn't been loaded yet!","\xdb","\x13","\x4d","\x3b"),null(),::tusk::debug::ExceptionType_obj::AssetNotFound,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(77)
	try
	{
	HX_STACK_CATCHABLE(::String, 0);
	{
		HX_STACK_LINE(78)
		::haxe::ds::StringMap tmp4 = this->assets;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		::String tmp5 = path;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		::tusk::resources::Asset tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		::tusk::resources::Sound tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(78)
		tmp7 = hx::TCast< ::tusk::resources::Sound >::cast(tmp6);
		HX_STACK_LINE(78)
		return tmp7;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String e = __e;{
				HX_STACK_LINE(81)
				Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),81,HX_HCSTRING("tusk.modules.Assets","\x5f","\xac","\xee","\x45"),HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(81)
				::tusk::debug::Exception tmp5 = ::tusk::debug::Exception_obj::__new(HX_HCSTRING("Asset '${path}' isn't a sound!","\x83","\xb2","\x4c","\x59"),null(),::tusk::debug::ExceptionType_obj::InvalidAssetType,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(81)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(77)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getSound,return )

::promhx::Promise Assets_obj::loadTexture( ::String path,::haxe::io::Bytes bytes){
	HX_STACK_FRAME("tusk.modules.Assets","loadTexture",0xe99378c6,"tusk.modules.Assets.loadTexture","tusk/modules/Assets.hx",91,0x6521c27d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(92)
	::promhx::Deferred tmp = ::promhx::Deferred_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	::promhx::Deferred def = tmp;		HX_STACK_VAR(def,"def");
	HX_STACK_LINE(93)
	::promhx::Promise tmp1 = def->promise();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	::promhx::Promise promise = tmp1;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(96)
	::String tmp2 = path;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	bool tmp3 = this->isLoaded(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	if ((tmp3)){
		HX_STACK_LINE(97)
		::String tmp4 = path;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		::tusk::resources::Texture tmp5 = this->getTexture(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		def->resolve(tmp5);
		HX_STACK_LINE(98)
		::promhx::Promise tmp6 = promise;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		return tmp6;
	}
	HX_STACK_LINE(124)
	{
		HX_STACK_LINE(124)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),124,HX_HCSTRING("tusk.modules.Assets","\x5f","\xac","\xee","\x45"),HX_HCSTRING("loadTexture","\x55","\x87","\x7e","\x6f"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		::tusk::debug::Exception tmp5 = ::tusk::debug::Exception_obj::__new(HX_HCSTRING("Texture loading isn't supported without snow!","\xbc","\xd0","\xb6","\xaf"),null(),null(),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(124)
		Dynamic e = tmp5;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(124)
		Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(124)
		def->handleError(tmp6);
	}
	HX_STACK_LINE(127)
	::promhx::Promise tmp4 = promise;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(127)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadTexture,return )

::tusk::resources::Texture Assets_obj::getTexture( ::String path){
	HX_STACK_FRAME("tusk.modules.Assets","getTexture",0xdebc1694,"tusk.modules.Assets.getTexture","tusk/modules/Assets.hx",137,0x6521c27d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(138)
	::haxe::ds::StringMap tmp = this->assets;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(138)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(138)
	if ((tmp3)){
		HX_STACK_LINE(139)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),139,HX_HCSTRING("tusk.modules.Assets","\x5f","\xac","\xee","\x45"),HX_HCSTRING("getTexture","\xe5","\x4e","\x42","\xee"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		::tusk::debug::Exception tmp5 = ::tusk::debug::Exception_obj::__new(HX_HCSTRING("Texture '${path}' hasn't been loaded yet!","\xe7","\xd2","\x1a","\x59"),null(),::tusk::debug::ExceptionType_obj::AssetNotFound,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(141)
	try
	{
	HX_STACK_CATCHABLE(::String, 0);
	{
		HX_STACK_LINE(142)
		::haxe::ds::StringMap tmp4 = this->assets;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		::String tmp5 = path;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(142)
		::tusk::resources::Asset tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(142)
		::tusk::resources::Texture tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(142)
		tmp7 = hx::TCast< ::tusk::resources::Texture >::cast(tmp6);
		HX_STACK_LINE(142)
		return tmp7;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String e = __e;{
				HX_STACK_LINE(145)
				Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),145,HX_HCSTRING("tusk.modules.Assets","\x5f","\xac","\xee","\x45"),HX_HCSTRING("getTexture","\xe5","\x4e","\x42","\xee"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(145)
				::tusk::debug::Exception tmp5 = ::tusk::debug::Exception_obj::__new(HX_HCSTRING("Asset '${path}' isn't a texture!","\x37","\x67","\x10","\x18"),null(),::tusk::debug::ExceptionType_obj::InvalidAssetType,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(145)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(141)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getTexture,return )


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_MEMBER_NAME(tusk,"tusk");
	HX_MARK_MEMBER_NAME(assets,"assets");
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tusk,"tusk");
	HX_VISIT_MEMBER_NAME(assets,"assets");
}

Dynamic Assets_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tusk") ) { return tusk; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { return assets; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isLoaded") ) { return isLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadTexture") ) { return loadTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tusk") ) { tusk=inValue.Cast< ::tusk::Tusk >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { assets=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tusk","\x59","\xec","\x05","\x4d"));
	outFields->push(HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::tusk::Tusk*/ ,(int)offsetof(Assets_obj,tusk),HX_HCSTRING("tusk","\x59","\xec","\x05","\x4d")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Assets_obj,assets),HX_HCSTRING("assets","\x83","\x48","\x03","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tusk","\x59","\xec","\x05","\x4d"),
	HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"),
	HX_HCSTRING("isLoaded","\x8f","\xe3","\xd8","\xb0"),
	HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("loadTexture","\x55","\x87","\x7e","\x6f"),
	HX_HCSTRING("getTexture","\xe5","\x4e","\x42","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
};

#endif

hx::Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.modules.Assets","\x5f","\xac","\xee","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
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
