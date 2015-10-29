#include <hxcpp.h>

#ifndef INCLUDED_tusk_math_Matrix4x4
#include <tusk/math/Matrix4x4.h>
#endif
#ifndef INCLUDED_tusk_resources_Asset
#include <tusk/resources/Asset.h>
#endif
#ifndef INCLUDED_tusk_resources_Material
#include <tusk/resources/Material.h>
#endif
#ifndef INCLUDED_tusk_resources_Shader
#include <tusk/resources/Shader.h>
#endif
namespace tusk{
namespace resources{

Void Material_obj::__construct(::String path,::tusk::resources::Shader shader)
{
HX_STACK_FRAME("tusk.resources.Material","new",0x06b4a4d7,"tusk.resources.Material.new","tusk/resources/Material.hx",22,0x6f1fba77)
HX_STACK_THIS(this)
HX_STACK_ARG(path,"path")
HX_STACK_ARG(shader,"shader")
{
	HX_STACK_LINE(23)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	super::__construct(tmp);
	HX_STACK_LINE(24)
	this->shader = shader;
	HX_STACK_LINE(25)
	::tusk::resources::Shader tmp1 = this->shader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	::String tmp2 = tmp1->program;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	if ((tmp3)){
		HX_STACK_LINE(26)
		::tusk::resources::Shader tmp4 = this->shader;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(26)
		tmp4->compile();
	}
}
;
	return null();
}

//Material_obj::~Material_obj() { }

Dynamic Material_obj::__CreateEmpty() { return  new Material_obj; }
hx::ObjectPtr< Material_obj > Material_obj::__new(::String path,::tusk::resources::Shader shader)
{  hx::ObjectPtr< Material_obj > _result_ = new Material_obj();
	_result_->__construct(path,shader);
	return _result_;}

Dynamic Material_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Material_obj > _result_ = new Material_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Material_obj::setMatrix4x4( ::String name,::tusk::math::Matrix4x4 matrix,hx::Null< bool >  __o_transpose){
bool transpose = __o_transpose.Default(false);
	HX_STACK_FRAME("tusk.resources.Material","setMatrix4x4",0x0dae6af6,"tusk.resources.Material.setMatrix4x4","tusk/resources/Material.hx",36,0x6f1fba77)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(transpose,"transpose")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Material_obj,setMatrix4x4,(void))

Void Material_obj::setTexture( ::String name,int ndx){
{
		HX_STACK_FRAME("tusk.resources.Material","setTexture",0xd454a5c2,"tusk.resources.Material.setTexture","tusk/resources/Material.hx",43,0x6f1fba77)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(ndx,"ndx")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,setTexture,(void))


Material_obj::Material_obj()
{
}

void Material_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Material);
	HX_MARK_MEMBER_NAME(shader,"shader");
	::tusk::resources::Asset_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Material_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	::tusk::resources::Asset_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Material_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setTexture") ) { return setTexture_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setMatrix4x4") ) { return setMatrix4x4_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Material_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::tusk::resources::Shader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Material_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::tusk::resources::Shader*/ ,(int)offsetof(Material_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("setMatrix4x4","\x4d","\x06","\x2c","\xd2"),
	HX_HCSTRING("setTexture","\x59","\xed","\xbf","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Material_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Material_obj::__mClass,"__mClass");
};

#endif

hx::Class Material_obj::__mClass;

void Material_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.resources.Material","\x65","\xed","\x85","\xa2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Material_obj >;
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
