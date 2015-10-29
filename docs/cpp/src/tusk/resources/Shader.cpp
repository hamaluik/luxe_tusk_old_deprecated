#include <hxcpp.h>

#ifndef INCLUDED_tusk_resources_Asset
#include <tusk/resources/Asset.h>
#endif
#ifndef INCLUDED_tusk_resources_Shader
#include <tusk/resources/Shader.h>
#endif
namespace tusk{
namespace resources{

Void Shader_obj::__construct(::String path,::String vertSrc,::String fragSrc)
{
HX_STACK_FRAME("tusk.resources.Shader","new",0x7a3012d5,"tusk.resources.Shader.new","tusk/resources/Shader.hx",43,0x4885fab9)
HX_STACK_THIS(this)
HX_STACK_ARG(path,"path")
HX_STACK_ARG(vertSrc,"vertSrc")
HX_STACK_ARG(fragSrc,"fragSrc")
{
	HX_STACK_LINE(44)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	super::__construct(tmp);
	HX_STACK_LINE(45)
	this->vertSrc = vertSrc;
	HX_STACK_LINE(46)
	this->fragSrc = fragSrc;
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(::String path,::String vertSrc,::String fragSrc)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(path,vertSrc,fragSrc);
	return _result_;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::String Shader_obj::compile( ){
	HX_STACK_FRAME("tusk.resources.Shader","compile",0xeb764668,"tusk.resources.Shader.compile","tusk/resources/Shader.hx",91,0x4885fab9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,compile,return )

int Shader_obj::getAttributeLocation( ::String attribute){
	HX_STACK_FRAME("tusk.resources.Shader","getAttributeLocation",0xdb9af6e6,"tusk.resources.Shader.getAttributeLocation","tusk/resources/Shader.hx",107,0x4885fab9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(attribute,"attribute")
	HX_STACK_LINE(107)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,getAttributeLocation,return )

int Shader_obj::getUniformLocation( ::String uniform){
	HX_STACK_FRAME("tusk.resources.Shader","getUniformLocation",0xc11528be,"tusk.resources.Shader.getUniformLocation","tusk/resources/Shader.hx",123,0x4885fab9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uniform,"uniform")
	HX_STACK_LINE(123)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,getUniformLocation,return )


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(vertSrc,"vertSrc");
	HX_MARK_MEMBER_NAME(fragSrc,"fragSrc");
	HX_MARK_MEMBER_NAME(program,"program");
	::tusk::resources::Asset_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertSrc,"vertSrc");
	HX_VISIT_MEMBER_NAME(fragSrc,"fragSrc");
	HX_VISIT_MEMBER_NAME(program,"program");
	::tusk::resources::Asset_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Shader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"vertSrc") ) { return vertSrc; }
		if (HX_FIELD_EQ(inName,"fragSrc") ) { return fragSrc; }
		if (HX_FIELD_EQ(inName,"program") ) { return program; }
		if (HX_FIELD_EQ(inName,"compile") ) { return compile_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { return getUniformLocation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getAttributeLocation") ) { return getAttributeLocation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"vertSrc") ) { vertSrc=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fragSrc") ) { fragSrc=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("vertSrc","\xb3","\x6e","\x8a","\x7d"));
	outFields->push(HX_HCSTRING("fragSrc","\xd2","\x10","\x6f","\x44"));
	outFields->push(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Shader_obj,vertSrc),HX_HCSTRING("vertSrc","\xb3","\x6e","\x8a","\x7d")},
	{hx::fsString,(int)offsetof(Shader_obj,fragSrc),HX_HCSTRING("fragSrc","\xd2","\x10","\x6f","\x44")},
	{hx::fsString,(int)offsetof(Shader_obj,program),HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("vertSrc","\xb3","\x6e","\x8a","\x7d"),
	HX_HCSTRING("fragSrc","\xd2","\x10","\x6f","\x44"),
	HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"),
	HX_HCSTRING("compile","\x73","\x25","\x6f","\x83"),
	HX_HCSTRING("getAttributeLocation","\xfb","\x4c","\xb5","\x01"),
	HX_HCSTRING("getUniformLocation","\x93","\x5f","\xd4","\x4f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#endif

hx::Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.resources.Shader","\x63","\x04","\xf7","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shader_obj >;
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
} // end namespace resources
