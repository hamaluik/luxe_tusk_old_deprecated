#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_HashMethod
#include <haxe/crypto/HashMethod.h>
#endif
#ifndef INCLUDED_haxe_crypto_Hmac
#include <haxe/crypto/Hmac.h>
#endif
#ifndef INCLUDED_haxe_crypto_Md5
#include <haxe/crypto/Md5.h>
#endif
#ifndef INCLUDED_haxe_crypto_Sha1
#include <haxe/crypto/Sha1.h>
#endif
#ifndef INCLUDED_haxe_crypto_Sha256
#include <haxe/crypto/Sha256.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
namespace haxe{
namespace crypto{

Void Hmac_obj::__construct(::haxe::crypto::HashMethod hashMethod)
{
HX_STACK_FRAME("haxe.crypto.Hmac","new",0x000e1c3e,"haxe.crypto.Hmac.new","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Hmac.hx",42,0x8699d699)
HX_STACK_THIS(this)
HX_STACK_ARG(hashMethod,"hashMethod")
{
	HX_STACK_LINE(43)
	this->method = hashMethod;
	HX_STACK_LINE(44)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	switch( (int)(hashMethod->__Index())){
		case (int)0: case (int)1: case (int)2: {
			HX_STACK_LINE(45)
			tmp = (int)64;
		}
		;break;
	}
	HX_STACK_LINE(44)
	this->blockSize = tmp;
	HX_STACK_LINE(47)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	switch( (int)(hashMethod->__Index())){
		case (int)0: {
			HX_STACK_LINE(48)
			tmp1 = (int)16;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(49)
			tmp1 = (int)20;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(50)
			tmp1 = (int)32;
		}
		;break;
	}
	HX_STACK_LINE(47)
	this->length = tmp1;
}
;
	return null();
}

//Hmac_obj::~Hmac_obj() { }

Dynamic Hmac_obj::__CreateEmpty() { return  new Hmac_obj; }
hx::ObjectPtr< Hmac_obj > Hmac_obj::__new(::haxe::crypto::HashMethod hashMethod)
{  hx::ObjectPtr< Hmac_obj > _result_ = new Hmac_obj();
	_result_->__construct(hashMethod);
	return _result_;}

Dynamic Hmac_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hmac_obj > _result_ = new Hmac_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxe::io::Bytes Hmac_obj::doHash( ::haxe::io::Bytes b){
	HX_STACK_FRAME("haxe.crypto.Hmac","doHash",0x4b4fc7db,"haxe.crypto.Hmac.doHash","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Hmac.hx",54,0x8699d699)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(55)
	::haxe::io::Bytes tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		::haxe::crypto::HashMethod tmp1 = this->method;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		::haxe::crypto::HashMethod _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(56)
				::haxe::io::Bytes tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(56)
				tmp = ::haxe::crypto::Md5_obj::make(tmp2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(57)
				::haxe::io::Bytes tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				tmp = ::haxe::crypto::Sha1_obj::make(tmp2);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(58)
				::haxe::io::Bytes tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(58)
				tmp = ::haxe::crypto::Sha256_obj::make(tmp2);
			}
			;break;
		}
	}
	HX_STACK_LINE(55)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Hmac_obj,doHash,return )

::haxe::io::Bytes Hmac_obj::nullPad( ::haxe::io::Bytes s,int chunkLen){
	HX_STACK_FRAME("haxe.crypto.Hmac","nullPad",0x62118bea,"haxe.crypto.Hmac.nullPad","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Hmac.hx",62,0x8699d699)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(chunkLen,"chunkLen")
	HX_STACK_LINE(63)
	int tmp = chunkLen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	int tmp1 = hx::Mod(s->length,chunkLen);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	int r = tmp2;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(64)
	bool tmp3 = (r == chunkLen);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	if ((tmp3)){
		HX_STACK_LINE(64)
		tmp4 = (s->length != (int)0);
	}
	else{
		HX_STACK_LINE(64)
		tmp4 = false;
	}
	HX_STACK_LINE(64)
	if ((tmp4)){
		HX_STACK_LINE(65)
		::haxe::io::Bytes tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(65)
		return tmp5;
	}
	HX_STACK_LINE(66)
	::haxe::io::BytesBuffer tmp5 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(66)
	::haxe::io::BytesBuffer sb = tmp5;		HX_STACK_VAR(sb,"sb");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		Array< unsigned char > b1 = sb->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(67)
		Array< unsigned char > b2 = s->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(67)
			int _g = s->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(67)
			while((true)){
				HX_STACK_LINE(67)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(67)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(67)
				if ((tmp7)){
					HX_STACK_LINE(67)
					break;
				}
				HX_STACK_LINE(67)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(67)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(67)
				unsigned char tmp9 = b2->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(67)
				sb->b->push(tmp9);
			}
		}
	}
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		while((true)){
			HX_STACK_LINE(68)
			bool tmp6 = (_g < r);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(68)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(68)
			if ((tmp7)){
				HX_STACK_LINE(68)
				break;
			}
			HX_STACK_LINE(68)
			int tmp8 = (_g)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(68)
			int x = tmp8;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(69)
			sb->b->push((int)0);
		}
	}
	HX_STACK_LINE(70)
	::haxe::io::Bytes tmp6 = sb->getBytes();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(70)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(Hmac_obj,nullPad,return )

::haxe::io::Bytes Hmac_obj::make( ::haxe::io::Bytes key,::haxe::io::Bytes msg){
	HX_STACK_FRAME("haxe.crypto.Hmac","make",0x0b9e5050,"haxe.crypto.Hmac.make","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Hmac.hx",73,0x8699d699)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(msg,"msg")
	HX_STACK_LINE(74)
	int tmp = key->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	int tmp1 = this->blockSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	if ((tmp2)){
		HX_STACK_LINE(75)
		::haxe::io::Bytes tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			::haxe::crypto::HashMethod tmp4 = this->method;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			::haxe::crypto::HashMethod _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(75)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(75)
					::haxe::io::Bytes tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(75)
					tmp3 = ::haxe::crypto::Md5_obj::make(tmp5);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(75)
					::haxe::io::Bytes tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(75)
					tmp3 = ::haxe::crypto::Sha1_obj::make(tmp5);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(75)
					::haxe::io::Bytes tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(75)
					tmp3 = ::haxe::crypto::Sha256_obj::make(tmp5);
				}
				;break;
			}
		}
		HX_STACK_LINE(75)
		key = tmp3;
	}
	HX_STACK_LINE(77)
	::haxe::io::Bytes tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(77)
	int tmp4 = this->blockSize;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(77)
	::haxe::io::Bytes tmp5 = this->nullPad(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(77)
	key = tmp5;
	HX_STACK_LINE(79)
	::haxe::io::BytesBuffer tmp6 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	::haxe::io::BytesBuffer Ki = tmp6;		HX_STACK_VAR(Ki,"Ki");
	HX_STACK_LINE(80)
	::haxe::io::BytesBuffer tmp7 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(80)
	::haxe::io::BytesBuffer Ko = tmp7;		HX_STACK_VAR(Ko,"Ko");
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		int _g = key->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		while((true)){
			HX_STACK_LINE(81)
			bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(81)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(81)
			if ((tmp9)){
				HX_STACK_LINE(81)
				break;
			}
			HX_STACK_LINE(81)
			int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(81)
			int i = tmp10;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				int tmp11 = key->b->__get(i);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(82)
				int tmp12 = (int(tmp11) ^ int((int)92));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(82)
				Ko->b->push(tmp12);
			}
			HX_STACK_LINE(83)
			{
				HX_STACK_LINE(83)
				int tmp11 = key->b->__get(i);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(83)
				int tmp12 = (int(tmp11) ^ int((int)54));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(83)
				Ki->b->push(tmp12);
			}
		}
	}
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		Array< unsigned char > b1 = Ki->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(86)
		Array< unsigned char > b2 = msg->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(86)
			int _g = msg->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(86)
			while((true)){
				HX_STACK_LINE(86)
				bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(86)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(86)
				if ((tmp9)){
					HX_STACK_LINE(86)
					break;
				}
				HX_STACK_LINE(86)
				int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(86)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(86)
				unsigned char tmp11 = b2->__get(i);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(86)
				Ki->b->push(tmp11);
			}
		}
	}
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			::haxe::io::Bytes tmp9 = Ki->getBytes();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			::haxe::io::Bytes b = tmp9;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				::haxe::crypto::HashMethod tmp10 = this->method;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(87)
				::haxe::crypto::HashMethod _g = tmp10;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(87)
				switch( (int)(_g->__Index())){
					case (int)0: {
						HX_STACK_LINE(87)
						::haxe::io::Bytes tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(87)
						tmp8 = ::haxe::crypto::Md5_obj::make(tmp11);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(87)
						::haxe::io::Bytes tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(87)
						tmp8 = ::haxe::crypto::Sha1_obj::make(tmp11);
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(87)
						::haxe::io::Bytes tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(87)
						tmp8 = ::haxe::crypto::Sha256_obj::make(tmp11);
					}
					;break;
				}
			}
		}
		HX_STACK_LINE(87)
		::haxe::io::Bytes src = tmp8;		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(87)
		Array< unsigned char > b1 = Ko->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(87)
		Array< unsigned char > b2 = src->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(87)
			int _g = src->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(87)
			while((true)){
				HX_STACK_LINE(87)
				bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(87)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(87)
				if ((tmp10)){
					HX_STACK_LINE(87)
					break;
				}
				HX_STACK_LINE(87)
				int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(87)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(87)
				unsigned char tmp12 = b2->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(87)
				Ko->b->push(tmp12);
			}
		}
	}
	HX_STACK_LINE(88)
	::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		::haxe::io::Bytes tmp9 = Ko->getBytes();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(88)
		::haxe::io::Bytes b = tmp9;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			::haxe::crypto::HashMethod tmp10 = this->method;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(88)
			::haxe::crypto::HashMethod _g = tmp10;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(88)
					::haxe::io::Bytes tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(88)
					tmp8 = ::haxe::crypto::Md5_obj::make(tmp11);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(88)
					::haxe::io::Bytes tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(88)
					tmp8 = ::haxe::crypto::Sha1_obj::make(tmp11);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(88)
					::haxe::io::Bytes tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(88)
					tmp8 = ::haxe::crypto::Sha256_obj::make(tmp11);
				}
				;break;
			}
		}
	}
	HX_STACK_LINE(88)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Hmac_obj,make,return )


Hmac_obj::Hmac_obj()
{
}

void Hmac_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Hmac);
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(blockSize,"blockSize");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void Hmac_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(blockSize,"blockSize");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic Hmac_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"doHash") ) { return doHash_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nullPad") ) { return nullPad_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blockSize") ) { return blockSize; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hmac_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::haxe::crypto::HashMethod >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blockSize") ) { blockSize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Hmac_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	outFields->push(HX_HCSTRING("blockSize","\xae","\x6c","\xe2","\x51"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::crypto::HashMethod*/ ,(int)offsetof(Hmac_obj,method),HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")},
	{hx::fsInt,(int)offsetof(Hmac_obj,blockSize),HX_HCSTRING("blockSize","\xae","\x6c","\xe2","\x51")},
	{hx::fsInt,(int)offsetof(Hmac_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"),
	HX_HCSTRING("blockSize","\xae","\x6c","\xe2","\x51"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("doHash","\xf9","\xd4","\x0b","\x15"),
	HX_HCSTRING("nullPad","\x0c","\xf9","\xe0","\x1c"),
	HX_HCSTRING("make","\xee","\x39","\x56","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hmac_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hmac_obj::__mClass,"__mClass");
};

#endif

hx::Class Hmac_obj::__mClass;

void Hmac_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.crypto.Hmac","\x4c","\xe5","\x87","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Hmac_obj >;
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
} // end namespace crypto
