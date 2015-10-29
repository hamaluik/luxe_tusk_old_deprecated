#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_ArrayBufferViewImpl
#include <haxe/io/ArrayBufferViewImpl.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
namespace haxe{
namespace io{

Void ArrayBufferViewImpl_obj::__construct(::haxe::io::Bytes bytes,int pos,int length)
{
HX_STACK_FRAME("haxe.io.ArrayBufferViewImpl","new",0x853f5310,"haxe.io.ArrayBufferViewImpl.new","C:\\HaxeToolkit\\haxe\\std/haxe/io/ArrayBufferView.hx",9,0x2e38f619)
HX_STACK_THIS(this)
HX_STACK_ARG(bytes,"bytes")
HX_STACK_ARG(pos,"pos")
HX_STACK_ARG(length,"length")
{
	HX_STACK_LINE(10)
	this->bytes = bytes;
	HX_STACK_LINE(11)
	this->byteOffset = pos;
	HX_STACK_LINE(12)
	this->byteLength = length;
}
;
	return null();
}

//ArrayBufferViewImpl_obj::~ArrayBufferViewImpl_obj() { }

Dynamic ArrayBufferViewImpl_obj::__CreateEmpty() { return  new ArrayBufferViewImpl_obj; }
hx::ObjectPtr< ArrayBufferViewImpl_obj > ArrayBufferViewImpl_obj::__new(::haxe::io::Bytes bytes,int pos,int length)
{  hx::ObjectPtr< ArrayBufferViewImpl_obj > _result_ = new ArrayBufferViewImpl_obj();
	_result_->__construct(bytes,pos,length);
	return _result_;}

Dynamic ArrayBufferViewImpl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBufferViewImpl_obj > _result_ = new ArrayBufferViewImpl_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::haxe::io::ArrayBufferViewImpl ArrayBufferViewImpl_obj::sub( int begin,Dynamic length){
	HX_STACK_FRAME("haxe.io.ArrayBufferViewImpl","sub",0x85432c30,"haxe.io.ArrayBufferViewImpl.sub","C:\\HaxeToolkit\\haxe\\std/haxe/io/ArrayBufferView.hx",14,0x2e38f619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(15)
	bool tmp = (length == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	if ((tmp)){
		HX_STACK_LINE(15)
		int tmp1 = this->byteLength;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		length = tmp3;
	}
	HX_STACK_LINE(16)
	bool tmp1 = (begin < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(16)
	if ((tmp3)){
		HX_STACK_LINE(16)
		tmp4 = (length < (int)0);
	}
	else{
		HX_STACK_LINE(16)
		tmp4 = true;
	}
	HX_STACK_LINE(16)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(16)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(16)
	if ((tmp5)){
		HX_STACK_LINE(16)
		int tmp7 = (begin + length);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(16)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(16)
		int tmp9 = this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(16)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(16)
		tmp6 = (tmp8 > tmp10);
	}
	else{
		HX_STACK_LINE(16)
		tmp6 = true;
	}
	HX_STACK_LINE(16)
	if ((tmp6)){
		HX_STACK_LINE(16)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(17)
	::haxe::io::Bytes tmp7 = this->bytes;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(17)
	int tmp8 = this->byteOffset;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(17)
	int tmp9 = begin;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(17)
	int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(17)
	Dynamic tmp11 = length;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(17)
	::haxe::io::ArrayBufferViewImpl tmp12 = ::haxe::io::ArrayBufferViewImpl_obj::__new(tmp7,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(17)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferViewImpl_obj,sub,return )

::haxe::io::ArrayBufferViewImpl ArrayBufferViewImpl_obj::subarray( Dynamic begin,Dynamic end){
	HX_STACK_FRAME("haxe.io.ArrayBufferViewImpl","subarray",0x926e1369,"haxe.io.ArrayBufferViewImpl.subarray","C:\\HaxeToolkit\\haxe\\std/haxe/io/ArrayBufferView.hx",19,0x2e38f619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(20)
	bool tmp = (begin == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	if ((tmp)){
		HX_STACK_LINE(20)
		begin = (int)0;
	}
	HX_STACK_LINE(21)
	bool tmp1 = (end == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	if ((tmp1)){
		HX_STACK_LINE(21)
		int tmp2 = this->byteLength;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		Dynamic tmp3 = begin;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(21)
		int tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(21)
		end = tmp4;
	}
	HX_STACK_LINE(22)
	Dynamic tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	int tmp3 = (end - begin);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	::haxe::io::ArrayBufferViewImpl tmp4 = this->sub(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferViewImpl_obj,subarray,return )


ArrayBufferViewImpl_obj::ArrayBufferViewImpl_obj()
{
}

void ArrayBufferViewImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferViewImpl);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_END_CLASS();
}

void ArrayBufferViewImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
}

Dynamic ArrayBufferViewImpl_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { return subarray_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return byteOffset; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return byteLength; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayBufferViewImpl_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayBufferViewImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	outFields->push(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(ArrayBufferViewImpl_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{hx::fsInt,(int)offsetof(ArrayBufferViewImpl_obj,byteOffset),HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")},
	{hx::fsInt,(int)offsetof(ArrayBufferViewImpl_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("subarray","\x19","\x54","\x81","\x07"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferViewImpl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferViewImpl_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayBufferViewImpl_obj::__mClass;

void ArrayBufferViewImpl_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.ArrayBufferViewImpl","\x1e","\xcb","\xbc","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayBufferViewImpl_obj >;
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
} // end namespace io
