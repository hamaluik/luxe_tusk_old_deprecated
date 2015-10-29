#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif
namespace haxe{
namespace io{

Void BytesBuffer_obj::__construct()
{
HX_STACK_FRAME("haxe.io.BytesBuffer","new",0x022790dd,"haxe.io.BytesBuffer.new","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesBuffer.hx",54,0xb51c4e6c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(54)
	this->b = Array_obj< unsigned char >::__new();
}
;
	return null();
}

//BytesBuffer_obj::~BytesBuffer_obj() { }

Dynamic BytesBuffer_obj::__CreateEmpty() { return  new BytesBuffer_obj; }
hx::ObjectPtr< BytesBuffer_obj > BytesBuffer_obj::__new()
{  hx::ObjectPtr< BytesBuffer_obj > _result_ = new BytesBuffer_obj();
	_result_->__construct();
	return _result_;}

Dynamic BytesBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BytesBuffer_obj > _result_ = new BytesBuffer_obj();
	_result_->__construct();
	return _result_;}

int BytesBuffer_obj::get_length( ){
	HX_STACK_FRAME("haxe.io.BytesBuffer","get_length",0x8154fdd2,"haxe.io.BytesBuffer.get_length","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesBuffer.hx",64,0xb51c4e6c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	int tmp = this->b->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BytesBuffer_obj,get_length,return )

Void BytesBuffer_obj::addByte( int byte){
{
		HX_STACK_FRAME("haxe.io.BytesBuffer","addByte",0x4d2aa4c6,"haxe.io.BytesBuffer.addByte","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesBuffer.hx",76,0xb51c4e6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byte,"byte")
		HX_STACK_LINE(84)
		unsigned char tmp = byte;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		this->b->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BytesBuffer_obj,addByte,(void))

Void BytesBuffer_obj::add( ::haxe::io::Bytes src){
{
		HX_STACK_FRAME("haxe.io.BytesBuffer","add",0x021db29e,"haxe.io.BytesBuffer.add","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesBuffer.hx",94,0xb51c4e6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(src,"src")
		HX_STACK_LINE(111)
		Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(112)
		Array< unsigned char > b2 = src->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(113)
			int _g = src->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(113)
			while((true)){
				HX_STACK_LINE(113)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(113)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(113)
				if ((tmp1)){
					HX_STACK_LINE(113)
					break;
				}
				HX_STACK_LINE(113)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(113)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(114)
				unsigned char tmp3 = b2->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(114)
				this->b->push(tmp3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BytesBuffer_obj,add,(void))

Void BytesBuffer_obj::addString( ::String v){
{
		HX_STACK_FRAME("haxe.io.BytesBuffer","addString",0xd2731a0f,"haxe.io.BytesBuffer.addString","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesBuffer.hx",124,0xb51c4e6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(124)
		::String tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		::haxe::io::Bytes src = tmp1;		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(124)
		Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(124)
		Array< unsigned char > b2 = src->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(124)
			int _g = src->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(124)
			while((true)){
				HX_STACK_LINE(124)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(124)
				if ((tmp3)){
					HX_STACK_LINE(124)
					break;
				}
				HX_STACK_LINE(124)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(124)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(124)
				unsigned char tmp5 = b2->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(124)
				this->b->push(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BytesBuffer_obj,addString,(void))

Void BytesBuffer_obj::addInt32( int v){
{
		HX_STACK_FRAME("haxe.io.BytesBuffer","addInt32",0x38ae13d0,"haxe.io.BytesBuffer.addInt32","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesBuffer.hx",128,0xb51c4e6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			int tmp = (int(v) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(132)
			this->b->push(tmp);
		}
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			int tmp = (int(v) >> int((int)8));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(133)
			int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(133)
			this->b->push(tmp1);
		}
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			int tmp = (int(v) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(134)
			int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(134)
			this->b->push(tmp1);
		}
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			int tmp = hx::UShr(v,(int)24);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(135)
			this->b->push(tmp);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BytesBuffer_obj,addInt32,(void))

Void BytesBuffer_obj::addInt64( cpp::Int64Struct v){
{
		HX_STACK_FRAME("haxe.io.BytesBuffer","addInt64",0x38ae166f,"haxe.io.BytesBuffer.addInt64","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesBuffer.hx",139,0xb51c4e6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(140)
		this->addInt32((int)((v)&0xffffffff));
		HX_STACK_LINE(141)
		this->addInt32((int)(((cpp::Int64)(v))>>32));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BytesBuffer_obj,addInt64,(void))

Void BytesBuffer_obj::addFloat( Float v){
{
		HX_STACK_FRAME("haxe.io.BytesBuffer","addFloat",0x7d24461e,"haxe.io.BytesBuffer.addFloat","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesBuffer.hx",144,0xb51c4e6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(148)
		Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		int tmp1 = ::haxe::io::FPHelper_obj::floatToI32(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		this->addInt32(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BytesBuffer_obj,addFloat,(void))

Void BytesBuffer_obj::addDouble( Float v){
{
		HX_STACK_FRAME("haxe.io.BytesBuffer","addDouble",0xf40e1c4f,"haxe.io.BytesBuffer.addDouble","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesBuffer.hx",152,0xb51c4e6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(156)
		Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		cpp::Int64Struct tmp1 = ::haxe::io::FPHelper_obj::doubleToI64(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		this->addInt64(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BytesBuffer_obj,addDouble,(void))

Void BytesBuffer_obj::addBytes( ::haxe::io::Bytes src,int pos,int len){
{
		HX_STACK_FRAME("haxe.io.BytesBuffer","addBytes",0x382588ed,"haxe.io.BytesBuffer.addBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesBuffer.hx",160,0xb51c4e6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(src,"src")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(162)
		bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(162)
		if ((tmp2)){
			HX_STACK_LINE(162)
			tmp3 = (len < (int)0);
		}
		else{
			HX_STACK_LINE(162)
			tmp3 = true;
		}
		HX_STACK_LINE(162)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		if ((tmp4)){
			HX_STACK_LINE(162)
			int tmp6 = (pos + len);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(162)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(162)
			int tmp8 = src->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(162)
			tmp5 = (tmp7 > tmp8);
		}
		else{
			HX_STACK_LINE(162)
			tmp5 = true;
		}
		HX_STACK_LINE(162)
		if ((tmp5)){
			HX_STACK_LINE(162)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(180)
		Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(181)
		Array< unsigned char > b2 = src->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(182)
		{
			HX_STACK_LINE(182)
			int _g1 = pos;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(182)
			int tmp6 = (pos + len);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(182)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(182)
			while((true)){
				HX_STACK_LINE(182)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(182)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				if ((tmp8)){
					HX_STACK_LINE(182)
					break;
				}
				HX_STACK_LINE(182)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(182)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(183)
				unsigned char tmp10 = b2->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(183)
				this->b->push(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BytesBuffer_obj,addBytes,(void))

::haxe::io::Bytes BytesBuffer_obj::getBytes( ){
	HX_STACK_FRAME("haxe.io.BytesBuffer","getBytes",0x1e9f7258,"haxe.io.BytesBuffer.getBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesBuffer.hx",191,0xb51c4e6c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	int tmp = this->b->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::__new(tmp,this->b);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(214)
	this->b = null();
	HX_STACK_LINE(215)
	::haxe::io::Bytes tmp2 = bytes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(BytesBuffer_obj,getBytes,return )


BytesBuffer_obj::BytesBuffer_obj()
{
}

void BytesBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BytesBuffer);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void BytesBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
}

Dynamic BytesBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addByte") ) { return addByte_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addInt32") ) { return addInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"addInt64") ) { return addInt64_dyn(); }
		if (HX_FIELD_EQ(inName,"addFloat") ) { return addFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"addBytes") ) { return addBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addString") ) { return addString_dyn(); }
		if (HX_FIELD_EQ(inName,"addDouble") ) { return addDouble_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BytesBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< unsigned char > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BytesBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(BytesBuffer_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("addByte","\xc9","\x61","\x60","\x7d"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addString","\xd2","\x5d","\x54","\xc9"),
	HX_HCSTRING("addInt32","\x6d","\xb9","\x7d","\x37"),
	HX_HCSTRING("addInt64","\x0c","\xbc","\x7d","\x37"),
	HX_HCSTRING("addFloat","\xbb","\xeb","\xf3","\x7b"),
	HX_HCSTRING("addDouble","\x12","\x60","\xef","\xea"),
	HX_HCSTRING("addBytes","\x8a","\x2e","\xf5","\x36"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BytesBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BytesBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class BytesBuffer_obj::__mClass;

void BytesBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.BytesBuffer","\x6b","\xde","\xc4","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BytesBuffer_obj >;
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
