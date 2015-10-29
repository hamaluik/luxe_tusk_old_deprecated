#include <hxcpp.h>

#ifndef INCLUDED_tusk_AppFixedTimestep
#include <tusk/AppFixedTimestep.h>
#endif
#ifndef INCLUDED_tusk_SplashScreen
#include <tusk/SplashScreen.h>
#endif
#ifndef INCLUDED_tusk_Tusk
#include <tusk/Tusk.h>
#endif
#ifndef INCLUDED_tusk_Window
#include <tusk/Window.h>
#endif
#ifndef INCLUDED_tusk_math_Matrix4x4
#include <tusk/math/Matrix4x4.h>
#endif
#ifndef INCLUDED_tusk_resources_Asset
#include <tusk/resources/Asset.h>
#endif
#ifndef INCLUDED_tusk_resources_Material
#include <tusk/resources/Material.h>
#endif
namespace tusk{

Void SplashScreen_obj::__construct(::tusk::Tusk app,Dynamic onDone)
{
HX_STACK_FRAME("tusk.SplashScreen","new",0xa204267a,"tusk.SplashScreen.new","tusk/SplashScreen.hx",19,0xf13def55)
HX_STACK_THIS(this)
HX_STACK_ARG(app,"app")
HX_STACK_ARG(onDone,"onDone")
{
	HX_STACK_LINE(105)
	this->done = false;
	HX_STACK_LINE(104)
	this->cooldown = ((Float)3);
	HX_STACK_LINE(103)
	this->shakeDelay = ((Float)0.5);
	HX_STACK_LINE(101)
	this->shakeAmplitude = ((Float)10);
	HX_STACK_LINE(100)
	this->t = ((Float)0);
	HX_STACK_LINE(99)
	this->shaking = true;
	HX_STACK_LINE(98)
	this->started = false;
}
;
	return null();
}

//SplashScreen_obj::~SplashScreen_obj() { }

Dynamic SplashScreen_obj::__CreateEmpty() { return  new SplashScreen_obj; }
hx::ObjectPtr< SplashScreen_obj > SplashScreen_obj::__new(::tusk::Tusk app,Dynamic onDone)
{  hx::ObjectPtr< SplashScreen_obj > _result_ = new SplashScreen_obj();
	_result_->__construct(app,onDone);
	return _result_;}

Dynamic SplashScreen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SplashScreen_obj > _result_ = new SplashScreen_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void SplashScreen_obj::update( Float dt){
{
		HX_STACK_FRAME("tusk.SplashScreen","update",0xfcde7c2f,"tusk.SplashScreen.update","tusk/SplashScreen.hx",107,0xf13def55)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SplashScreen_obj,update,(void))

Void SplashScreen_obj::render( ::tusk::Window window){
{
		HX_STACK_FRAME("tusk.SplashScreen","render",0x7b02617c,"tusk.SplashScreen.render","tusk/SplashScreen.hx",150,0xf13def55)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SplashScreen_obj,render,(void))


SplashScreen_obj::SplashScreen_obj()
{
}

void SplashScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SplashScreen);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(onDone,"onDone");
	HX_MARK_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_MARK_MEMBER_NAME(modelMatrix,"modelMatrix");
	HX_MARK_MEMBER_NAME(mat,"mat");
	HX_MARK_MEMBER_NAME(posLocation,"posLocation");
	HX_MARK_MEMBER_NAME(uvLocation,"uvLocation");
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(shaking,"shaking");
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(shakeAmplitude,"shakeAmplitude");
	HX_MARK_MEMBER_NAME(shakeDelay,"shakeDelay");
	HX_MARK_MEMBER_NAME(cooldown,"cooldown");
	HX_MARK_MEMBER_NAME(done,"done");
	HX_MARK_END_CLASS();
}

void SplashScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(onDone,"onDone");
	HX_VISIT_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_VISIT_MEMBER_NAME(modelMatrix,"modelMatrix");
	HX_VISIT_MEMBER_NAME(mat,"mat");
	HX_VISIT_MEMBER_NAME(posLocation,"posLocation");
	HX_VISIT_MEMBER_NAME(uvLocation,"uvLocation");
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(shaking,"shaking");
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(shakeAmplitude,"shakeAmplitude");
	HX_VISIT_MEMBER_NAME(shakeDelay,"shakeDelay");
	HX_VISIT_MEMBER_NAME(cooldown,"cooldown");
	HX_VISIT_MEMBER_NAME(done,"done");
}

Dynamic SplashScreen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { return t; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		if (HX_FIELD_EQ(inName,"mat") ) { return mat; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { return done; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onDone") ) { return onDone; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		if (HX_FIELD_EQ(inName,"shaking") ) { return shaking; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cooldown") ) { return cooldown; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uvLocation") ) { return uvLocation; }
		if (HX_FIELD_EQ(inName,"shakeDelay") ) { return shakeDelay; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"modelMatrix") ) { return modelMatrix; }
		if (HX_FIELD_EQ(inName,"posLocation") ) { return posLocation; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shakeAmplitude") ) { return shakeAmplitude; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { return projectionMatrix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SplashScreen_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::tusk::Tusk >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mat") ) { mat=inValue.Cast< ::tusk::resources::Material >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { done=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onDone") ) { onDone=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shaking") ) { shaking=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cooldown") ) { cooldown=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uvLocation") ) { uvLocation=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shakeDelay") ) { shakeDelay=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"modelMatrix") ) { modelMatrix=inValue.Cast< ::tusk::math::Matrix4x4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posLocation") ) { posLocation=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shakeAmplitude") ) { shakeAmplitude=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { projectionMatrix=inValue.Cast< ::tusk::math::Matrix4x4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SplashScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));
	outFields->push(HX_HCSTRING("modelMatrix","\xca","\x72","\x9c","\xb1"));
	outFields->push(HX_HCSTRING("mat","\xa0","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("posLocation","\xe9","\x3b","\x03","\x43"));
	outFields->push(HX_HCSTRING("uvLocation","\xb6","\x59","\x47","\xdc"));
	outFields->push(HX_HCSTRING("started","\x41","\x29","\x1b","\x35"));
	outFields->push(HX_HCSTRING("shaking","\x83","\x05","\x2a","\x64"));
	outFields->push(HX_HCSTRING("t","\x74","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("shakeAmplitude","\x9d","\x0d","\xbe","\x79"));
	outFields->push(HX_HCSTRING("shakeDelay","\xdd","\x1a","\x7c","\xed"));
	outFields->push(HX_HCSTRING("cooldown","\xab","\x4b","\xa2","\xf9"));
	outFields->push(HX_HCSTRING("done","\x82","\xf0","\x6d","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::tusk::Tusk*/ ,(int)offsetof(SplashScreen_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SplashScreen_obj,onDone),HX_HCSTRING("onDone","\x41","\xf9","\xf7","\xe4")},
	{hx::fsObject /*::tusk::math::Matrix4x4*/ ,(int)offsetof(SplashScreen_obj,projectionMatrix),HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0")},
	{hx::fsObject /*::tusk::math::Matrix4x4*/ ,(int)offsetof(SplashScreen_obj,modelMatrix),HX_HCSTRING("modelMatrix","\xca","\x72","\x9c","\xb1")},
	{hx::fsObject /*::tusk::resources::Material*/ ,(int)offsetof(SplashScreen_obj,mat),HX_HCSTRING("mat","\xa0","\x0a","\x53","\x00")},
	{hx::fsInt,(int)offsetof(SplashScreen_obj,posLocation),HX_HCSTRING("posLocation","\xe9","\x3b","\x03","\x43")},
	{hx::fsInt,(int)offsetof(SplashScreen_obj,uvLocation),HX_HCSTRING("uvLocation","\xb6","\x59","\x47","\xdc")},
	{hx::fsBool,(int)offsetof(SplashScreen_obj,started),HX_HCSTRING("started","\x41","\x29","\x1b","\x35")},
	{hx::fsBool,(int)offsetof(SplashScreen_obj,shaking),HX_HCSTRING("shaking","\x83","\x05","\x2a","\x64")},
	{hx::fsFloat,(int)offsetof(SplashScreen_obj,t),HX_HCSTRING("t","\x74","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(SplashScreen_obj,shakeAmplitude),HX_HCSTRING("shakeAmplitude","\x9d","\x0d","\xbe","\x79")},
	{hx::fsFloat,(int)offsetof(SplashScreen_obj,shakeDelay),HX_HCSTRING("shakeDelay","\xdd","\x1a","\x7c","\xed")},
	{hx::fsFloat,(int)offsetof(SplashScreen_obj,cooldown),HX_HCSTRING("cooldown","\xab","\x4b","\xa2","\xf9")},
	{hx::fsBool,(int)offsetof(SplashScreen_obj,done),HX_HCSTRING("done","\x82","\xf0","\x6d","\x42")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("onDone","\x41","\xf9","\xf7","\xe4"),
	HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),
	HX_HCSTRING("modelMatrix","\xca","\x72","\x9c","\xb1"),
	HX_HCSTRING("mat","\xa0","\x0a","\x53","\x00"),
	HX_HCSTRING("posLocation","\xe9","\x3b","\x03","\x43"),
	HX_HCSTRING("uvLocation","\xb6","\x59","\x47","\xdc"),
	HX_HCSTRING("started","\x41","\x29","\x1b","\x35"),
	HX_HCSTRING("shaking","\x83","\x05","\x2a","\x64"),
	HX_HCSTRING("t","\x74","\x00","\x00","\x00"),
	HX_HCSTRING("shakeAmplitude","\x9d","\x0d","\xbe","\x79"),
	HX_HCSTRING("shakeDelay","\xdd","\x1a","\x7c","\xed"),
	HX_HCSTRING("cooldown","\xab","\x4b","\xa2","\xf9"),
	HX_HCSTRING("done","\x82","\xf0","\x6d","\x42"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SplashScreen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SplashScreen_obj::__mClass,"__mClass");
};

#endif

hx::Class SplashScreen_obj::__mClass;

void SplashScreen_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.SplashScreen","\x88","\x21","\x25","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SplashScreen_obj >;
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
