#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Compress
#include <haxe/zip/Compress.h>
#endif
#ifndef INCLUDED_haxe_zip_Tools
#include <haxe/zip/Tools.h>
#endif
namespace haxe{
namespace zip{

Void Tools_obj::__construct()
{
	return null();
}

//Tools_obj::~Tools_obj() { }

Dynamic Tools_obj::__CreateEmpty() { return  new Tools_obj; }
hx::ObjectPtr< Tools_obj > Tools_obj::__new()
{  hx::ObjectPtr< Tools_obj > _result_ = new Tools_obj();
	_result_->__construct();
	return _result_;}

Dynamic Tools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tools_obj > _result_ = new Tools_obj();
	_result_->__construct();
	return _result_;}

Void Tools_obj::compress( Dynamic f,int level){
{
		HX_STACK_FRAME("haxe.zip.Tools","compress",0xbc5b96aa,"haxe.zip.Tools.compress","C:\\HaxeToolkit\\haxe\\std/haxe/zip/Tools.hx",26,0x0e1bdaa1)
		HX_STACK_ARG(f,"f")
		HX_STACK_ARG(level,"level")
		HX_STACK_LINE(27)
		bool tmp = f->__Field(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		if ((tmp)){
			HX_STACK_LINE(28)
			return null();
		}
		HX_STACK_LINE(32)
		::haxe::io::Bytes tmp1 = f->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		int tmp2 = level;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		::haxe::io::Bytes tmp3 = ::haxe::zip::Compress_obj::run(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		::haxe::io::Bytes data = tmp3;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(33)
		f->__FieldRef(HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67")) = true;
		HX_STACK_LINE(34)
		int tmp4 = (data->length - (int)6);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		::haxe::io::Bytes tmp5 = data->sub((int)2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		f->__FieldRef(HX_HCSTRING("data","\x2a","\x56","\x63","\x42")) = tmp5;
		HX_STACK_LINE(35)
		int tmp6 = f->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		f->__FieldRef(HX_HCSTRING("dataSize","\x0b","\x80","\xc7","\x8b")) = tmp6;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,compress,(void))


Tools_obj::Tools_obj()
{
}

bool Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"compress") ) { outValue = compress_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tools_obj::__mClass,"__mClass");
};

#endif

hx::Class Tools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	::String(null()) };

void Tools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.zip.Tools","\x66","\x12","\x1e","\xf5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Tools_obj >;
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
} // end namespace zip
