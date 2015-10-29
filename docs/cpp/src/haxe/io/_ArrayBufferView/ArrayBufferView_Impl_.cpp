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
#ifndef INCLUDED_haxe_io__ArrayBufferView_ArrayBufferView_Impl_
#include <haxe/io/_ArrayBufferView/ArrayBufferView_Impl_.h>
#endif
namespace haxe{
namespace io{
namespace _ArrayBufferView{

Void ArrayBufferView_Impl__obj::__construct()
{
	return null();
}

//ArrayBufferView_Impl__obj::~ArrayBufferView_Impl__obj() { }

Dynamic ArrayBufferView_Impl__obj::__CreateEmpty() { return  new ArrayBufferView_Impl__obj; }
hx::ObjectPtr< ArrayBufferView_Impl__obj > ArrayBufferView_Impl__obj::__new()
{  hx::ObjectPtr< ArrayBufferView_Impl__obj > _result_ = new ArrayBufferView_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ArrayBufferView_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBufferView_Impl__obj > _result_ = new ArrayBufferView_Impl__obj();
	_result_->__construct();
	return _result_;}

bool ArrayBufferView_Impl__obj::get_EMULATED( ){
	HX_STACK_FRAME("haxe.io._ArrayBufferView.ArrayBufferView_Impl_","get_EMULATED",0x08b58c39,"haxe.io._ArrayBufferView.ArrayBufferView_Impl_.get_EMULATED","C:\\HaxeToolkit\\haxe\\std/haxe/io/ArrayBufferView.hx",36,0x2e38f619)
	HX_STACK_LINE(36)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_Impl__obj,get_EMULATED,return )

::haxe::io::ArrayBufferViewImpl ArrayBufferView_Impl__obj::_new( int size){
	HX_STACK_FRAME("haxe.io._ArrayBufferView.ArrayBufferView_Impl_","_new",0x61b66240,"haxe.io._ArrayBufferView.ArrayBufferView_Impl_._new","C:\\HaxeToolkit\\haxe\\std/haxe/io/ArrayBufferView.hx",43,0x2e38f619)
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(43)
	::haxe::io::ArrayBufferViewImpl this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(44)
	int tmp = size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	::haxe::io::ArrayBufferViewImpl tmp3 = ::haxe::io::ArrayBufferViewImpl_obj::__new(tmp1,(int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	this1 = tmp3;
	HX_STACK_LINE(43)
	::haxe::io::ArrayBufferViewImpl tmp4 = this1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_Impl__obj,_new,return )

int ArrayBufferView_Impl__obj::get_byteOffset( ::haxe::io::ArrayBufferViewImpl this1){
	HX_STACK_FRAME("haxe.io._ArrayBufferView.ArrayBufferView_Impl_","get_byteOffset",0xdd2762a3,"haxe.io._ArrayBufferView.ArrayBufferView_Impl_.get_byteOffset","C:\\HaxeToolkit\\haxe\\std/haxe/io/ArrayBufferView.hx",47,0x2e38f619)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(47)
	int tmp = this1->byteOffset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_Impl__obj,get_byteOffset,return )

int ArrayBufferView_Impl__obj::get_byteLength( ::haxe::io::ArrayBufferViewImpl this1){
	HX_STACK_FRAME("haxe.io._ArrayBufferView.ArrayBufferView_Impl_","get_byteLength",0x1bef5ff6,"haxe.io._ArrayBufferView.ArrayBufferView_Impl_.get_byteLength","C:\\HaxeToolkit\\haxe\\std/haxe/io/ArrayBufferView.hx",48,0x2e38f619)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(48)
	int tmp = this1->byteLength;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_Impl__obj,get_byteLength,return )

::haxe::io::Bytes ArrayBufferView_Impl__obj::get_buffer( ::haxe::io::ArrayBufferViewImpl this1){
	HX_STACK_FRAME("haxe.io._ArrayBufferView.ArrayBufferView_Impl_","get_buffer",0x0766eae8,"haxe.io._ArrayBufferView.ArrayBufferView_Impl_.get_buffer","C:\\HaxeToolkit\\haxe\\std/haxe/io/ArrayBufferView.hx",49,0x2e38f619)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(49)
	::haxe::io::Bytes tmp = this1->bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_Impl__obj,get_buffer,return )

::haxe::io::ArrayBufferViewImpl ArrayBufferView_Impl__obj::sub( ::haxe::io::ArrayBufferViewImpl this1,int begin,Dynamic length){
	HX_STACK_FRAME("haxe.io._ArrayBufferView.ArrayBufferView_Impl_","sub",0x992ddd81,"haxe.io._ArrayBufferView.ArrayBufferView_Impl_.sub","C:\\HaxeToolkit\\haxe\\std/haxe/io/ArrayBufferView.hx",51,0x2e38f619)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(52)
	::haxe::io::ArrayBufferViewImpl tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		int tmp1 = begin;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		Dynamic tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		::haxe::io::ArrayBufferViewImpl tmp3 = this1->sub(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		::haxe::io::ArrayBufferViewImpl a = tmp3;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(52)
		tmp = a;
	}
	HX_STACK_LINE(52)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferView_Impl__obj,sub,return )

::haxe::io::ArrayBufferViewImpl ArrayBufferView_Impl__obj::subarray( ::haxe::io::ArrayBufferViewImpl this1,Dynamic begin,Dynamic end){
	HX_STACK_FRAME("haxe.io._ArrayBufferView.ArrayBufferView_Impl_","subarray",0x9c09fc78,"haxe.io._ArrayBufferView.ArrayBufferView_Impl_.subarray","C:\\HaxeToolkit\\haxe\\std/haxe/io/ArrayBufferView.hx",55,0x2e38f619)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(56)
	::haxe::io::ArrayBufferViewImpl tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		Dynamic tmp1 = begin;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		Dynamic tmp2 = end;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		::haxe::io::ArrayBufferViewImpl tmp3 = this1->subarray(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		::haxe::io::ArrayBufferViewImpl a = tmp3;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(56)
		tmp = a;
	}
	HX_STACK_LINE(56)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferView_Impl__obj,subarray,return )

::haxe::io::ArrayBufferViewImpl ArrayBufferView_Impl__obj::getData( ::haxe::io::ArrayBufferViewImpl this1){
	HX_STACK_FRAME("haxe.io._ArrayBufferView.ArrayBufferView_Impl_","getData",0x3a4cce61,"haxe.io._ArrayBufferView.ArrayBufferView_Impl_.getData","C:\\HaxeToolkit\\haxe\\std/haxe/io/ArrayBufferView.hx",59,0x2e38f619)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(60)
	::haxe::io::ArrayBufferViewImpl tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_Impl__obj,getData,return )

::haxe::io::ArrayBufferViewImpl ArrayBufferView_Impl__obj::fromData( ::haxe::io::ArrayBufferViewImpl a){
	HX_STACK_FRAME("haxe.io._ArrayBufferView.ArrayBufferView_Impl_","fromData",0x34b7cd13,"haxe.io._ArrayBufferView.ArrayBufferView_Impl_.fromData","C:\\HaxeToolkit\\haxe\\std/haxe/io/ArrayBufferView.hx",63,0x2e38f619)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(64)
	::haxe::io::ArrayBufferViewImpl tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_Impl__obj,fromData,return )

::haxe::io::ArrayBufferViewImpl ArrayBufferView_Impl__obj::fromBytes( ::haxe::io::Bytes bytes,hx::Null< int >  __o_pos,Dynamic length){
int pos = __o_pos.Default(0);
	HX_STACK_FRAME("haxe.io._ArrayBufferView.ArrayBufferView_Impl_","fromBytes",0xd52b9d62,"haxe.io._ArrayBufferView.ArrayBufferView_Impl_.fromBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/ArrayBufferView.hx",67,0x2e38f619)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(68)
		bool tmp = (length == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		if ((tmp)){
			HX_STACK_LINE(68)
			int tmp1 = (bytes->length - pos);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(68)
			length = tmp1;
		}
		HX_STACK_LINE(69)
		bool tmp1 = (pos < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		if ((tmp3)){
			HX_STACK_LINE(69)
			tmp4 = (length < (int)0);
		}
		else{
			HX_STACK_LINE(69)
			tmp4 = true;
		}
		HX_STACK_LINE(69)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		if ((tmp5)){
			HX_STACK_LINE(69)
			int tmp7 = (pos + length);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(69)
			int tmp9 = bytes->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(69)
			tmp6 = (tmp8 > tmp9);
		}
		else{
			HX_STACK_LINE(69)
			tmp6 = true;
		}
		HX_STACK_LINE(69)
		if ((tmp6)){
			HX_STACK_LINE(69)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(70)
		::haxe::io::ArrayBufferViewImpl tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			::haxe::io::ArrayBufferViewImpl tmp8 = ::haxe::io::ArrayBufferViewImpl_obj::__new(bytes,pos,length);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(70)
			::haxe::io::ArrayBufferViewImpl a = tmp8;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(70)
			tmp7 = a;
		}
		HX_STACK_LINE(70)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferView_Impl__obj,fromBytes,return )


ArrayBufferView_Impl__obj::ArrayBufferView_Impl__obj()
{
}

bool ArrayBufferView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { outValue = sub_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { outValue = getData_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { outValue = subarray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromData") ) { outValue = fromData_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_buffer") ) { outValue = get_buffer_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_EMULATED") ) { outValue = get_EMULATED_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_byteOffset") ) { outValue = get_byteOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { outValue = get_byteLength_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayBufferView_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_EMULATED","\x5a","\xc8","\xa7","\x8b"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_byteOffset","\x04","\xa9","\x39","\xae"),
	HX_HCSTRING("get_byteLength","\x57","\xa6","\x01","\xed"),
	HX_HCSTRING("get_buffer","\xc9","\x2c","\x1c","\xc1"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("subarray","\x19","\x54","\x81","\x07"),
	HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14"),
	HX_HCSTRING("fromData","\xb4","\x24","\x2f","\xa0"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	::String(null()) };

void ArrayBufferView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io._ArrayBufferView.ArrayBufferView_Impl_","\xef","\x3f","\x1e","\x38");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayBufferView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ArrayBufferView_Impl__obj >;
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
} // end namespace _ArrayBufferView
