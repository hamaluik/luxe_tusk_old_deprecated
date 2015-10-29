#include <hxcpp.h>

#ifndef INCLUDED_tusk_macros__AssetFilesBuilder_FileRef
#include <tusk/macros/_AssetFilesBuilder/FileRef.h>
#endif
namespace tusk{
namespace macros{
namespace _AssetFilesBuilder{

Void FileRef_obj::__construct(::String baseDir,::String value)
{
HX_STACK_FRAME("tusk.macros._AssetFilesBuilder.FileRef","new",0xaab61882,"tusk.macros._AssetFilesBuilder.FileRef.new","tusk/macros/AssetFilesBuilder.hx",59,0x2dc7f55c)
HX_STACK_THIS(this)
HX_STACK_ARG(baseDir,"baseDir")
HX_STACK_ARG(value,"value")
{
	HX_STACK_LINE(61)
	this->value = value;
	HX_STACK_LINE(63)
	int tmp = (baseDir.length + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	::String tmp1 = value.substr(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	::String tmp2 = tmp1.split(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"))->join(HX_HCSTRING("___","\x3f","\x69","\x48","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	::String tmp3 = tmp2.split(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))->join(HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	::String tmp4 = tmp3.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"))->join(HX_HCSTRING("__","\x20","\x53","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(63)
	this->name = tmp4;
	HX_STACK_LINE(65)
	::String tmp5 = (HX_HCSTRING("Reference to file '","\xd3","\xb0","\x1a","\x2a") + value);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(65)
	::String tmp6 = (tmp5 + HX_HCSTRING("' (auto)","\x8b","\x4b","\x31","\x0f"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(65)
	this->documentation = tmp6;
}
;
	return null();
}

//FileRef_obj::~FileRef_obj() { }

Dynamic FileRef_obj::__CreateEmpty() { return  new FileRef_obj; }
hx::ObjectPtr< FileRef_obj > FileRef_obj::__new(::String baseDir,::String value)
{  hx::ObjectPtr< FileRef_obj > _result_ = new FileRef_obj();
	_result_->__construct(baseDir,value);
	return _result_;}

Dynamic FileRef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FileRef_obj > _result_ = new FileRef_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


FileRef_obj::FileRef_obj()
{
}

void FileRef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileRef);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(documentation,"documentation");
	HX_MARK_END_CLASS();
}

void FileRef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(documentation,"documentation");
}

Dynamic FileRef_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"documentation") ) { return documentation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FileRef_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"documentation") ) { documentation=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileRef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("documentation","\xba","\x81","\x68","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FileRef_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(FileRef_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsString,(int)offsetof(FileRef_obj,documentation),HX_HCSTRING("documentation","\xba","\x81","\x68","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("documentation","\xba","\x81","\x68","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileRef_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileRef_obj::__mClass,"__mClass");
};

#endif

hx::Class FileRef_obj::__mClass;

void FileRef_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("tusk.macros._AssetFilesBuilder.FileRef","\x90","\x6f","\x63","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FileRef_obj >;
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
} // end namespace macros
} // end namespace _AssetFilesBuilder
