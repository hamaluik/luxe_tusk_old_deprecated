#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace haxe{
namespace crypto{

Void BaseCode_obj::__construct(::haxe::io::Bytes base)
{
HX_STACK_FRAME("haxe.crypto.BaseCode","new",0xd63c60f5,"haxe.crypto.BaseCode.new","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/BaseCode.hx",33,0x52da3542)
HX_STACK_THIS(this)
HX_STACK_ARG(base,"base")
{
	HX_STACK_LINE(34)
	int len = base->length;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(35)
	int nbits = (int)1;		HX_STACK_VAR(nbits,"nbits");
	HX_STACK_LINE(36)
	while((true)){
		HX_STACK_LINE(36)
		int tmp = len;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		int tmp1 = (int((int)1) << int(nbits));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		if ((tmp3)){
			HX_STACK_LINE(36)
			break;
		}
		HX_STACK_LINE(37)
		(nbits)++;
	}
	HX_STACK_LINE(38)
	bool tmp = (nbits > (int)8);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	if ((tmp1)){
		HX_STACK_LINE(38)
		int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		int tmp4 = (int((int)1) << int(nbits));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		tmp2 = (tmp3 != tmp5);
	}
	else{
		HX_STACK_LINE(38)
		tmp2 = true;
	}
	HX_STACK_LINE(38)
	if ((tmp2)){
		HX_STACK_LINE(39)
		HX_STACK_DO_THROW(HX_HCSTRING("BaseCode : base length must be a power of two.","\x78","\xb6","\xc8","\xca"));
	}
	HX_STACK_LINE(40)
	this->base = base;
	HX_STACK_LINE(41)
	this->nbits = nbits;
}
;
	return null();
}

//BaseCode_obj::~BaseCode_obj() { }

Dynamic BaseCode_obj::__CreateEmpty() { return  new BaseCode_obj; }
hx::ObjectPtr< BaseCode_obj > BaseCode_obj::__new(::haxe::io::Bytes base)
{  hx::ObjectPtr< BaseCode_obj > _result_ = new BaseCode_obj();
	_result_->__construct(base);
	return _result_;}

Dynamic BaseCode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseCode_obj > _result_ = new BaseCode_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxe::io::Bytes BaseCode_obj::encodeBytes( ::haxe::io::Bytes b){
	HX_STACK_FRAME("haxe.crypto.BaseCode","encodeBytes",0x58a8e40a,"haxe.crypto.BaseCode.encodeBytes","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/BaseCode.hx",44,0x52da3542)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(48)
	int tmp = this->nbits;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	int nbits = tmp;		HX_STACK_VAR(nbits,"nbits");
	HX_STACK_LINE(49)
	::haxe::io::Bytes tmp1 = this->base;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	::haxe::io::Bytes base = tmp1;		HX_STACK_VAR(base,"base");
	HX_STACK_LINE(50)
	int tmp2 = (b->length * (int)8);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	int tmp3 = nbits;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(50)
	int size = tmp5;		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(51)
	int tmp6 = size;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(51)
	int tmp7 = (b->length * (int)8);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(51)
	int tmp8 = nbits;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(51)
	int tmp9 = hx::Mod(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(51)
	bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(51)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(51)
	if ((tmp10)){
		HX_STACK_LINE(51)
		tmp11 = (int)0;
	}
	else{
		HX_STACK_LINE(51)
		tmp11 = (int)1;
	}
	HX_STACK_LINE(51)
	int tmp12 = (tmp6 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(51)
	::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(51)
	::haxe::io::Bytes out = tmp13;		HX_STACK_VAR(out,"out");
	HX_STACK_LINE(52)
	int buf = (int)0;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(53)
	int curbits = (int)0;		HX_STACK_VAR(curbits,"curbits");
	HX_STACK_LINE(54)
	int tmp14 = (int((int)1) << int(nbits));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(54)
	int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(54)
	int mask = tmp15;		HX_STACK_VAR(mask,"mask");
	HX_STACK_LINE(55)
	int pin = (int)0;		HX_STACK_VAR(pin,"pin");
	HX_STACK_LINE(56)
	int pout = (int)0;		HX_STACK_VAR(pout,"pout");
	HX_STACK_LINE(57)
	while((true)){
		HX_STACK_LINE(57)
		bool tmp16 = (pout < size);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(57)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(57)
		if ((tmp17)){
			HX_STACK_LINE(57)
			break;
		}
		HX_STACK_LINE(58)
		while((true)){
			HX_STACK_LINE(58)
			bool tmp18 = (curbits < nbits);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(58)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(58)
			if ((tmp19)){
				HX_STACK_LINE(58)
				break;
			}
			HX_STACK_LINE(59)
			hx::AddEq(curbits,(int)8);
			HX_STACK_LINE(60)
			hx::ShlEq(buf,(int)8);
			HX_STACK_LINE(61)
			int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(61)
			{
				HX_STACK_LINE(61)
				int tmp21 = (pin)++;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(61)
				int pos = tmp21;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(61)
				tmp20 = b->b->__get(pos);
			}
			HX_STACK_LINE(61)
			hx::OrEq(buf,tmp20);
		}
		HX_STACK_LINE(63)
		hx::SubEq(curbits,nbits);
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			int tmp18 = (pout)++;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(64)
			int pos = tmp18;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(64)
			int tmp19 = (int(buf) >> int(curbits));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(64)
			int tmp20 = mask;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(64)
			int tmp21 = (int(tmp19) & int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(64)
			int tmp22 = base->b->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(64)
			out->b[pos] = tmp22;
		}
	}
	HX_STACK_LINE(66)
	bool tmp16 = (curbits > (int)0);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(66)
	if ((tmp16)){
		HX_STACK_LINE(67)
		int tmp17 = (pout)++;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(67)
		int pos = tmp17;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(67)
		int tmp18 = buf;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(67)
		int tmp19 = (nbits - curbits);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(67)
		int tmp20 = (int(tmp18) << int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(67)
		int tmp21 = mask;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(67)
		int tmp22 = (int(tmp20) & int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(67)
		int tmp23 = base->b->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(67)
		out->b[pos] = tmp23;
	}
	HX_STACK_LINE(68)
	::haxe::io::Bytes tmp17 = out;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(68)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(BaseCode_obj,encodeBytes,return )

Void BaseCode_obj::initTable( ){
{
		HX_STACK_FRAME("haxe.crypto.BaseCode","initTable",0xa1288133,"haxe.crypto.BaseCode.initTable","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/BaseCode.hx",72,0x52da3542)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		Array< int > tbl = Array_obj< int >::__new();		HX_STACK_VAR(tbl,"tbl");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			while((true)){
				HX_STACK_LINE(74)
				bool tmp = (_g < (int)256);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(74)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(74)
				if ((tmp1)){
					HX_STACK_LINE(74)
					break;
				}
				HX_STACK_LINE(74)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(74)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(75)
				tbl[i] = (int)-1;
			}
		}
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(76)
			::haxe::io::Bytes tmp = this->base;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(76)
			int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(76)
			while((true)){
				HX_STACK_LINE(76)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(76)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(76)
				if ((tmp2)){
					HX_STACK_LINE(76)
					break;
				}
				HX_STACK_LINE(76)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(76)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(77)
				::haxe::io::Bytes tmp4 = this->base;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(77)
				int tmp5 = tmp4->b->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(77)
				tbl[tmp5] = tmp6;
			}
		}
		HX_STACK_LINE(78)
		this->tbl = tbl;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseCode_obj,initTable,(void))

::haxe::io::Bytes BaseCode_obj::decodeBytes( ::haxe::io::Bytes b){
	HX_STACK_FRAME("haxe.crypto.BaseCode","decodeBytes",0x152c41f2,"haxe.crypto.BaseCode.decodeBytes","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/BaseCode.hx",81,0x52da3542)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(85)
	int tmp = this->nbits;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	int nbits = tmp;		HX_STACK_VAR(nbits,"nbits");
	HX_STACK_LINE(86)
	::haxe::io::Bytes tmp1 = this->base;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	::haxe::io::Bytes base = tmp1;		HX_STACK_VAR(base,"base");
	HX_STACK_LINE(87)
	bool tmp2 = (this->tbl == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	if ((tmp2)){
		HX_STACK_LINE(87)
		this->initTable();
	}
	HX_STACK_LINE(88)
	Array< int > tbl = this->tbl;		HX_STACK_VAR(tbl,"tbl");
	HX_STACK_LINE(89)
	int tmp3 = (b->length * nbits);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	int tmp4 = (int(tmp3) >> int((int)3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(89)
	int size = tmp4;		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(90)
	int tmp5 = size;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(90)
	::haxe::io::Bytes tmp6 = ::haxe::io::Bytes_obj::alloc(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(90)
	::haxe::io::Bytes out = tmp6;		HX_STACK_VAR(out,"out");
	HX_STACK_LINE(91)
	int buf = (int)0;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(92)
	int curbits = (int)0;		HX_STACK_VAR(curbits,"curbits");
	HX_STACK_LINE(93)
	int pin = (int)0;		HX_STACK_VAR(pin,"pin");
	HX_STACK_LINE(94)
	int pout = (int)0;		HX_STACK_VAR(pout,"pout");
	HX_STACK_LINE(95)
	while((true)){
		HX_STACK_LINE(95)
		bool tmp7 = (pout < size);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(95)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(95)
		if ((tmp8)){
			HX_STACK_LINE(95)
			break;
		}
		HX_STACK_LINE(96)
		while((true)){
			HX_STACK_LINE(96)
			bool tmp9 = (curbits < (int)8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(96)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(96)
			if ((tmp10)){
				HX_STACK_LINE(96)
				break;
			}
			HX_STACK_LINE(97)
			hx::AddEq(curbits,nbits);
			HX_STACK_LINE(98)
			hx::ShlEq(buf,nbits);
			HX_STACK_LINE(99)
			int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				int tmp12 = (pin)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(99)
				int pos = tmp12;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(99)
				tmp11 = b->b->__get(pos);
			}
			HX_STACK_LINE(99)
			int tmp12 = tbl->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(99)
			int i = tmp12;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(100)
			bool tmp13 = (i == (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(100)
			if ((tmp13)){
				HX_STACK_LINE(101)
				HX_STACK_DO_THROW(HX_HCSTRING("BaseCode : invalid encoded char","\xf9","\x14","\x33","\x18"));
			}
			HX_STACK_LINE(102)
			hx::OrEq(buf,i);
		}
		HX_STACK_LINE(104)
		hx::SubEq(curbits,(int)8);
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int tmp9 = (pout)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(105)
			int pos = tmp9;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(105)
			int tmp10 = (int(buf) >> int(curbits));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(105)
			int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(105)
			out->b[pos] = tmp11;
		}
	}
	HX_STACK_LINE(107)
	::haxe::io::Bytes tmp7 = out;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(107)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(BaseCode_obj,decodeBytes,return )

::String BaseCode_obj::encodeString( ::String s){
	HX_STACK_FRAME("haxe.crypto.BaseCode","encodeString",0x24df7852,"haxe.crypto.BaseCode.encodeString","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/BaseCode.hx",111,0x52da3542)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(115)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	::haxe::io::Bytes tmp2 = this->encodeBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	::String tmp3 = tmp2->toString();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BaseCode_obj,encodeString,return )

::String BaseCode_obj::decodeString( ::String s){
	HX_STACK_FRAME("haxe.crypto.BaseCode","decodeString",0x5b4e456a,"haxe.crypto.BaseCode.decodeString","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/BaseCode.hx",119,0x52da3542)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(123)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	::haxe::io::Bytes tmp2 = this->decodeBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	::String tmp3 = tmp2->toString();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BaseCode_obj,decodeString,return )

::String BaseCode_obj::encode( ::String s,::String base){
	HX_STACK_FRAME("haxe.crypto.BaseCode","encode",0x56322ca1,"haxe.crypto.BaseCode.encode","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/BaseCode.hx",127,0x52da3542)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(base,"base")
	HX_STACK_LINE(128)
	::String tmp = base;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	::haxe::crypto::BaseCode tmp2 = ::haxe::crypto::BaseCode_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	::haxe::crypto::BaseCode b = tmp2;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(129)
	::String tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(129)
	::String tmp4 = b->encodeString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(129)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BaseCode_obj,encode,return )

::String BaseCode_obj::decode( ::String s,::String base){
	HX_STACK_FRAME("haxe.crypto.BaseCode","decode",0xc13b97b9,"haxe.crypto.BaseCode.decode","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/BaseCode.hx",132,0x52da3542)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(base,"base")
	HX_STACK_LINE(133)
	::String tmp = base;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	::haxe::crypto::BaseCode tmp2 = ::haxe::crypto::BaseCode_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(133)
	::haxe::crypto::BaseCode b = tmp2;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(134)
	::String tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	::String tmp4 = b->decodeString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(134)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BaseCode_obj,decode,return )


BaseCode_obj::BaseCode_obj()
{
}

void BaseCode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseCode);
	HX_MARK_MEMBER_NAME(base,"base");
	HX_MARK_MEMBER_NAME(nbits,"nbits");
	HX_MARK_MEMBER_NAME(tbl,"tbl");
	HX_MARK_END_CLASS();
}

void BaseCode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(base,"base");
	HX_VISIT_MEMBER_NAME(nbits,"nbits");
	HX_VISIT_MEMBER_NAME(tbl,"tbl");
}

Dynamic BaseCode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tbl") ) { return tbl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"base") ) { return base; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { return nbits; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initTable") ) { return initTable_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"encodeBytes") ) { return encodeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"decodeBytes") ) { return decodeBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"encodeString") ) { return encodeString_dyn(); }
		if (HX_FIELD_EQ(inName,"decodeString") ) { return decodeString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool BaseCode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true;  }
	}
	return false;
}

Dynamic BaseCode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tbl") ) { tbl=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"base") ) { base=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { nbits=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseCode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("base","\x11","\xe8","\x10","\x41"));
	outFields->push(HX_HCSTRING("nbits","\x74","\xca","\x2a","\x97"));
	outFields->push(HX_HCSTRING("tbl","\x3e","\x5b","\x58","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(BaseCode_obj,base),HX_HCSTRING("base","\x11","\xe8","\x10","\x41")},
	{hx::fsInt,(int)offsetof(BaseCode_obj,nbits),HX_HCSTRING("nbits","\x74","\xca","\x2a","\x97")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(BaseCode_obj,tbl),HX_HCSTRING("tbl","\x3e","\x5b","\x58","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("base","\x11","\xe8","\x10","\x41"),
	HX_HCSTRING("nbits","\x74","\xca","\x2a","\x97"),
	HX_HCSTRING("tbl","\x3e","\x5b","\x58","\x00"),
	HX_HCSTRING("encodeBytes","\x75","\x36","\x2e","\xc9"),
	HX_HCSTRING("initTable","\xde","\xd2","\x75","\x26"),
	HX_HCSTRING("decodeBytes","\x5d","\x94","\xb1","\x85"),
	HX_HCSTRING("encodeString","\x87","\x43","\x02","\x29"),
	HX_HCSTRING("decodeString","\x9f","\x10","\x71","\x5f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseCode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseCode_obj::__mClass,"__mClass");
};

#endif

hx::Class BaseCode_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("decode","\x2e","\x5d","\xed","\x64"),
	::String(null()) };

void BaseCode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.crypto.BaseCode","\x83","\xc2","\xf9","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BaseCode_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BaseCode_obj >;
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
