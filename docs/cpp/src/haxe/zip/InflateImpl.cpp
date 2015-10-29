#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Adler32
#include <haxe/crypto/Adler32.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_zip_HuffTools
#include <haxe/zip/HuffTools.h>
#endif
#ifndef INCLUDED_haxe_zip_Huffman
#include <haxe/zip/Huffman.h>
#endif
#ifndef INCLUDED_haxe_zip_InflateImpl
#include <haxe/zip/InflateImpl.h>
#endif
#ifndef INCLUDED_haxe_zip__InflateImpl_State
#include <haxe/zip/_InflateImpl/State.h>
#endif
#ifndef INCLUDED_haxe_zip__InflateImpl_Window
#include <haxe/zip/_InflateImpl/Window.h>
#endif
namespace haxe{
namespace zip{

Void InflateImpl_obj::__construct(::haxe::io::Input i,Dynamic __o_header,Dynamic __o_crc)
{
HX_STACK_FRAME("haxe.zip.InflateImpl","new",0x8adfb384,"haxe.zip.InflateImpl.new","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",116,0xc398dbb5)
HX_STACK_THIS(this)
HX_STACK_ARG(i,"i")
HX_STACK_ARG(__o_header,"header")
HX_STACK_ARG(__o_crc,"crc")
Dynamic header = __o_header.Default(true);
Dynamic crc = __o_crc.Default(true);
{
	HX_STACK_LINE(117)
	this->final = false;
	HX_STACK_LINE(118)
	::haxe::zip::HuffTools tmp = ::haxe::zip::HuffTools_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	this->htools = tmp;
	HX_STACK_LINE(119)
	::haxe::zip::Huffman tmp1 = this->buildFixedHuffman();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	this->huffman = tmp1;
	HX_STACK_LINE(120)
	this->huffdist = null();
	HX_STACK_LINE(121)
	this->len = (int)0;
	HX_STACK_LINE(122)
	this->dist = (int)0;
	HX_STACK_LINE(123)
	Dynamic tmp2 = header;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	::haxe::zip::_InflateImpl::State tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	if ((tmp2)){
		HX_STACK_LINE(123)
		tmp3 = ::haxe::zip::_InflateImpl::State_obj::Head;
	}
	else{
		HX_STACK_LINE(123)
		tmp3 = ::haxe::zip::_InflateImpl::State_obj::Block;
	}
	HX_STACK_LINE(123)
	this->state = tmp3;
	HX_STACK_LINE(124)
	this->input = i;
	HX_STACK_LINE(125)
	this->bits = (int)0;
	HX_STACK_LINE(126)
	this->nbits = (int)0;
	HX_STACK_LINE(127)
	this->needed = (int)0;
	HX_STACK_LINE(128)
	this->output = null();
	HX_STACK_LINE(129)
	this->outpos = (int)0;
	HX_STACK_LINE(130)
	this->lengths = Array_obj< int >::__new();
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(131)
		while((true)){
			HX_STACK_LINE(131)
			bool tmp4 = (_g < (int)19);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(131)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(131)
			if ((tmp5)){
				HX_STACK_LINE(131)
				break;
			}
			HX_STACK_LINE(131)
			int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(131)
			int i1 = tmp6;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(132)
			this->lengths->push((int)-1);
		}
	}
	HX_STACK_LINE(133)
	::haxe::zip::_InflateImpl::Window tmp4 = ::haxe::zip::_InflateImpl::Window_obj::__new(crc);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(133)
	this->window = tmp4;
}
;
	return null();
}

//InflateImpl_obj::~InflateImpl_obj() { }

Dynamic InflateImpl_obj::__CreateEmpty() { return  new InflateImpl_obj; }
hx::ObjectPtr< InflateImpl_obj > InflateImpl_obj::__new(::haxe::io::Input i,Dynamic __o_header,Dynamic __o_crc)
{  hx::ObjectPtr< InflateImpl_obj > _result_ = new InflateImpl_obj();
	_result_->__construct(i,__o_header,__o_crc);
	return _result_;}

Dynamic InflateImpl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InflateImpl_obj > _result_ = new InflateImpl_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::haxe::zip::Huffman InflateImpl_obj::buildFixedHuffman( ){
	HX_STACK_FRAME("haxe.zip.InflateImpl","buildFixedHuffman",0x8189428b,"haxe.zip.InflateImpl.buildFixedHuffman","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",136,0xc398dbb5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	::haxe::zip::Huffman tmp = ::haxe::zip::InflateImpl_obj::FIXED_HUFFMAN;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	if ((tmp1)){
		HX_STACK_LINE(138)
		::haxe::zip::Huffman tmp2 = ::haxe::zip::InflateImpl_obj::FIXED_HUFFMAN;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		return tmp2;
	}
	HX_STACK_LINE(139)
	Array< int > a = Array_obj< int >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			bool tmp2 = (_g < (int)288);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(140)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			if ((tmp3)){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(140)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			int n = tmp4;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(141)
			bool tmp5 = (n <= (int)143);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(141)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(141)
			if ((tmp5)){
				HX_STACK_LINE(141)
				tmp6 = (int)8;
			}
			else{
				HX_STACK_LINE(141)
				bool tmp7 = (n <= (int)255);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(141)
				if ((tmp7)){
					HX_STACK_LINE(141)
					tmp6 = (int)9;
				}
				else{
					HX_STACK_LINE(141)
					bool tmp8 = (n <= (int)279);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(141)
					if ((tmp8)){
						HX_STACK_LINE(141)
						tmp6 = (int)7;
					}
					else{
						HX_STACK_LINE(141)
						tmp6 = (int)8;
					}
				}
			}
			HX_STACK_LINE(141)
			a->push(tmp6);
		}
	}
	HX_STACK_LINE(142)
	::haxe::zip::HuffTools tmp2 = this->htools;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(142)
	::haxe::zip::Huffman tmp3 = tmp2->make(a,(int)0,(int)288,(int)10);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(142)
	::haxe::zip::InflateImpl_obj::FIXED_HUFFMAN = tmp3;
	HX_STACK_LINE(143)
	::haxe::zip::Huffman tmp4 = ::haxe::zip::InflateImpl_obj::FIXED_HUFFMAN;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(InflateImpl_obj,buildFixedHuffman,return )

int InflateImpl_obj::readBytes( ::haxe::io::Bytes b,int pos,int len){
	HX_STACK_FRAME("haxe.zip.InflateImpl","readBytes",0x749c2b59,"haxe.zip.InflateImpl.readBytes","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",146,0xc398dbb5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(147)
	this->needed = len;
	HX_STACK_LINE(148)
	this->outpos = pos;
	HX_STACK_LINE(149)
	this->output = b;
	HX_STACK_LINE(150)
	bool tmp = (len > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	if ((tmp)){
		HX_STACK_LINE(151)
		while((true)){
			HX_STACK_LINE(151)
			bool tmp1 = this->inflateLoop();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(151)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			if ((tmp2)){
				HX_STACK_LINE(151)
				break;
			}
		}
	}
	HX_STACK_LINE(153)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	int tmp2 = this->needed;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(153)
	int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(153)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(InflateImpl_obj,readBytes,return )

int InflateImpl_obj::getBits( int n){
	HX_STACK_FRAME("haxe.zip.InflateImpl","getBits",0xefbfefe0,"haxe.zip.InflateImpl.getBits","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",156,0xc398dbb5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(157)
	while((true)){
		HX_STACK_LINE(157)
		int tmp = this->nbits;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		if ((tmp3)){
			HX_STACK_LINE(157)
			break;
		}
		HX_STACK_LINE(158)
		::haxe::io::Input tmp4 = this->input;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(158)
		int tmp5 = tmp4->readByte();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(158)
		int tmp6 = this->nbits;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(158)
		int tmp7 = (int(tmp5) << int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(158)
		hx::OrEq(this->bits,tmp7);
		HX_STACK_LINE(159)
		hx::AddEq(this->nbits,(int)8);
	}
	HX_STACK_LINE(161)
	int tmp = this->bits;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	int tmp1 = (int((int)1) << int(n));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(161)
	int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	int tmp3 = (int(tmp) & int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(161)
	int b = tmp3;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(162)
	hx::SubEq(this->nbits,n);
	HX_STACK_LINE(163)
	hx::ShrEq(this->bits,n);
	HX_STACK_LINE(164)
	int tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(InflateImpl_obj,getBits,return )

bool InflateImpl_obj::getBit( ){
	HX_STACK_FRAME("haxe.zip.InflateImpl","getBit",0x24a99d33,"haxe.zip.InflateImpl.getBit","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",167,0xc398dbb5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(168)
	int tmp = this->nbits;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(168)
	if ((tmp1)){
		HX_STACK_LINE(169)
		this->nbits = (int)8;
		HX_STACK_LINE(170)
		::haxe::io::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		int tmp3 = tmp2->readByte();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		this->bits = tmp3;
	}
	HX_STACK_LINE(172)
	int tmp2 = this->bits;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	int tmp3 = (int(tmp2) & int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(172)
	bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(172)
	bool b = tmp4;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(173)
	(this->nbits)--;
	HX_STACK_LINE(174)
	hx::ShrEq(this->bits,(int)1);
	HX_STACK_LINE(175)
	bool tmp5 = b;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(175)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(InflateImpl_obj,getBit,return )

int InflateImpl_obj::getRevBits( int n){
	HX_STACK_FRAME("haxe.zip.InflateImpl","getRevBits",0xc652fd6f,"haxe.zip.InflateImpl.getRevBits","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",178,0xc398dbb5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(179)
	bool tmp = (n == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	if ((tmp)){
		HX_STACK_LINE(180)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(181)
		bool tmp2 = this->getBit();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		if ((tmp2)){
			HX_STACK_LINE(182)
			int tmp3 = (n - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(182)
			int tmp4 = (int((int)1) << int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(182)
			int tmp5 = (n - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(182)
			int tmp6 = this->getRevBits(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(182)
			tmp1 = (int(tmp4) | int(tmp6));
		}
		else{
			HX_STACK_LINE(184)
			int tmp3 = (n - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(184)
			tmp1 = this->getRevBits(tmp3);
		}
	}
	HX_STACK_LINE(179)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InflateImpl_obj,getRevBits,return )

Void InflateImpl_obj::resetBits( ){
{
		HX_STACK_FRAME("haxe.zip.InflateImpl","resetBits",0x6d1fda99,"haxe.zip.InflateImpl.resetBits","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",187,0xc398dbb5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(188)
		this->bits = (int)0;
		HX_STACK_LINE(189)
		this->nbits = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InflateImpl_obj,resetBits,(void))

Void InflateImpl_obj::addBytes( ::haxe::io::Bytes b,int p,int len){
{
		HX_STACK_FRAME("haxe.zip.InflateImpl","addBytes",0xfc4b68e6,"haxe.zip.InflateImpl.addBytes","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",192,0xc398dbb5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(193)
		::haxe::zip::_InflateImpl::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		::haxe::io::Bytes tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		int tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		tmp->addBytes(tmp1,tmp2,tmp3);
		HX_STACK_LINE(194)
		::haxe::io::Bytes tmp4 = this->output;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(194)
		int tmp5 = this->outpos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(194)
		::haxe::io::Bytes tmp6 = b;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(194)
		int tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(194)
		int tmp8 = len;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(194)
		tmp4->blit(tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(195)
		hx::SubEq(this->needed,len);
		HX_STACK_LINE(196)
		hx::AddEq(this->outpos,len);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(InflateImpl_obj,addBytes,(void))

Void InflateImpl_obj::addByte( int b){
{
		HX_STACK_FRAME("haxe.zip.InflateImpl","addByte",0x5986a6ed,"haxe.zip.InflateImpl.addByte","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",199,0xc398dbb5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(200)
		::haxe::zip::_InflateImpl::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		int tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		tmp->addByte(tmp1);
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			::haxe::io::Bytes tmp2 = this->output;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(201)
			int tmp3 = this->outpos;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(201)
			int tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			tmp2->b[tmp3] = tmp4;
		}
		HX_STACK_LINE(202)
		(this->needed)--;
		HX_STACK_LINE(203)
		(this->outpos)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InflateImpl_obj,addByte,(void))

Void InflateImpl_obj::addDistOne( int n){
{
		HX_STACK_FRAME("haxe.zip.InflateImpl","addDistOne",0x9881c3db,"haxe.zip.InflateImpl.addDistOne","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",206,0xc398dbb5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(207)
		::haxe::zip::_InflateImpl::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		int tmp1 = tmp->getLastChar();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		int c = tmp1;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(208)
		{
			HX_STACK_LINE(208)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(208)
			while((true)){
				HX_STACK_LINE(208)
				bool tmp2 = (_g < n);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(208)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(208)
				if ((tmp3)){
					HX_STACK_LINE(208)
					break;
				}
				HX_STACK_LINE(208)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(208)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(209)
				int tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(209)
				this->addByte(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InflateImpl_obj,addDistOne,(void))

Void InflateImpl_obj::addDist( int d,int len){
{
		HX_STACK_FRAME("haxe.zip.InflateImpl","addDist",0x5accef4b,"haxe.zip.InflateImpl.addDist","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",212,0xc398dbb5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(d,"d")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(213)
		::haxe::zip::_InflateImpl::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		::haxe::io::Bytes tmp1 = tmp->buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		::haxe::zip::_InflateImpl::Window tmp2 = this->window;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		int tmp3 = tmp2->pos;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		int tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(213)
		int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		int tmp6 = len;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(213)
		this->addBytes(tmp1,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InflateImpl_obj,addDist,(void))

int InflateImpl_obj::applyHuffman( ::haxe::zip::Huffman h){
	HX_STACK_FRAME("haxe.zip.InflateImpl","applyHuffman",0x495d53bb,"haxe.zip.InflateImpl.applyHuffman","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",216,0xc398dbb5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(h,"h")
	HX_STACK_LINE(217)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	switch( (int)(h->__Index())){
		case (int)0: {
			HX_STACK_LINE(217)
			int tmp1 = (::haxe::zip::Huffman(h))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(217)
			int n = tmp1;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(218)
			tmp = n;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(217)
			::haxe::zip::Huffman tmp1 = (::haxe::zip::Huffman(h))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(217)
			::haxe::zip::Huffman b = tmp1;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(217)
			::haxe::zip::Huffman tmp2 = (::haxe::zip::Huffman(h))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			::haxe::zip::Huffman a = tmp2;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(219)
			{
				HX_STACK_LINE(219)
				bool tmp3 = this->getBit();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(219)
				::haxe::zip::Huffman tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(219)
				if ((tmp3)){
					HX_STACK_LINE(219)
					tmp4 = b;
				}
				else{
					HX_STACK_LINE(219)
					tmp4 = a;
				}
				HX_STACK_LINE(219)
				tmp = this->applyHuffman(tmp4);
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(217)
			Array< ::Dynamic > tbl = (::haxe::zip::Huffman(h))->__Param(1);		HX_STACK_VAR(tbl,"tbl");
			HX_STACK_LINE(217)
			int tmp1 = (::haxe::zip::Huffman(h))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(217)
			int n = tmp1;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				int tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(220)
				int tmp3 = this->getBits(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(220)
				::haxe::zip::Huffman tmp4 = tbl->__get(tmp3).StaticCast< ::haxe::zip::Huffman >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(220)
				tmp = this->applyHuffman(tmp4);
			}
		}
		;break;
	}
	HX_STACK_LINE(217)
	return tmp;
	HX_STACK_LINE(217)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(InflateImpl_obj,applyHuffman,return )

Void InflateImpl_obj::inflateLengths( Array< int > a,int max){
{
		HX_STACK_FRAME("haxe.zip.InflateImpl","inflateLengths",0xf1ca5662,"haxe.zip.InflateImpl.inflateLengths","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",224,0xc398dbb5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(225)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(226)
		int prev = (int)0;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(227)
		while((true)){
			HX_STACK_LINE(227)
			bool tmp = (i < max);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(227)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(227)
			if ((tmp1)){
				HX_STACK_LINE(227)
				break;
			}
			HX_STACK_LINE(228)
			::haxe::zip::Huffman tmp2 = this->huffman;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(228)
			int tmp3 = this->applyHuffman(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(228)
			int n = tmp3;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(229)
			int tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(229)
			switch( (int)(tmp4)){
				case (int)0: case (int)1: case (int)2: case (int)3: case (int)4: case (int)5: case (int)6: case (int)7: case (int)8: case (int)9: case (int)10: case (int)11: case (int)12: case (int)13: case (int)14: case (int)15: {
					HX_STACK_LINE(231)
					prev = n;
					HX_STACK_LINE(232)
					int tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(232)
					a[i] = tmp5;
					HX_STACK_LINE(233)
					(i)++;
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(235)
					int tmp5 = (i + (int)3);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(235)
					int tmp6 = this->getBits((int)2);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(235)
					int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(235)
					int end = tmp7;		HX_STACK_VAR(end,"end");
					HX_STACK_LINE(236)
					bool tmp8 = (end > max);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(236)
					if ((tmp8)){
						HX_STACK_LINE(236)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid data","\x13","\x38","\x70","\x89"));
					}
					HX_STACK_LINE(237)
					while((true)){
						HX_STACK_LINE(237)
						bool tmp9 = (i < end);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(237)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(237)
						if ((tmp10)){
							HX_STACK_LINE(237)
							break;
						}
						HX_STACK_LINE(238)
						int tmp11 = prev;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(238)
						a[i] = tmp11;
						HX_STACK_LINE(239)
						(i)++;
					}
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(242)
					int tmp5 = this->getBits((int)3);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(242)
					int tmp6 = ((int)3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(242)
					hx::AddEq(i,tmp6);
					HX_STACK_LINE(243)
					bool tmp7 = (i > max);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(243)
					if ((tmp7)){
						HX_STACK_LINE(243)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid data","\x13","\x38","\x70","\x89"));
					}
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(245)
					int tmp5 = this->getBits((int)7);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(245)
					int tmp6 = ((int)11 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(245)
					hx::AddEq(i,tmp6);
					HX_STACK_LINE(246)
					bool tmp7 = (i > max);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(246)
					if ((tmp7)){
						HX_STACK_LINE(246)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid data","\x13","\x38","\x70","\x89"));
					}
				}
				;break;
				default: {
					HX_STACK_LINE(248)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid data","\x13","\x38","\x70","\x89"));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InflateImpl_obj,inflateLengths,(void))

bool InflateImpl_obj::inflateLoop( ){
	HX_STACK_FRAME("haxe.zip.InflateImpl","inflateLoop",0x6d5c65af,"haxe.zip.InflateImpl.inflateLoop","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",254,0xc398dbb5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(254)
	::haxe::zip::_InflateImpl::State tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(254)
	::haxe::zip::_InflateImpl::State _g = tmp;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(254)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(256)
			::haxe::io::Input tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(256)
			int tmp2 = tmp1->readByte();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(256)
			int cmf = tmp2;		HX_STACK_VAR(cmf,"cmf");
			HX_STACK_LINE(257)
			int tmp3 = (int(cmf) & int((int)15));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(257)
			int cm = tmp3;		HX_STACK_VAR(cm,"cm");
			HX_STACK_LINE(258)
			int tmp4 = (int(cmf) >> int((int)4));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(258)
			int cinfo = tmp4;		HX_STACK_VAR(cinfo,"cinfo");
			HX_STACK_LINE(259)
			bool tmp5 = (cm != (int)8);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(259)
			if ((tmp5)){
				HX_STACK_LINE(259)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid data","\x13","\x38","\x70","\x89"));
			}
			HX_STACK_LINE(260)
			::haxe::io::Input tmp6 = this->input;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(260)
			int tmp7 = tmp6->readByte();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(260)
			int flg = tmp7;		HX_STACK_VAR(flg,"flg");
			HX_STACK_LINE(262)
			int tmp8 = (int(flg) & int((int)32));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(262)
			bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(262)
			bool fdict = tmp9;		HX_STACK_VAR(fdict,"fdict");
			HX_STACK_LINE(264)
			int tmp10 = (int(cmf) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(264)
			int tmp11 = flg;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(264)
			int tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(264)
			int tmp13 = hx::Mod(tmp12,(int)31);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(264)
			bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(264)
			if ((tmp14)){
				HX_STACK_LINE(264)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid data","\x13","\x38","\x70","\x89"));
			}
			HX_STACK_LINE(265)
			bool tmp15 = fdict;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(265)
			if ((tmp15)){
				HX_STACK_LINE(265)
				HX_STACK_DO_THROW(HX_HCSTRING("Unsupported dictionary","\x41","\x65","\x81","\xac"));
			}
			HX_STACK_LINE(266)
			this->state = ::haxe::zip::_InflateImpl::State_obj::Block;
			HX_STACK_LINE(267)
			return true;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(269)
			::haxe::zip::_InflateImpl::Window tmp1 = this->window;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(269)
			::haxe::crypto::Adler32 tmp2 = tmp1->checksum();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(269)
			::haxe::crypto::Adler32 calc = tmp2;		HX_STACK_VAR(calc,"calc");
			HX_STACK_LINE(270)
			bool tmp3 = (calc == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(270)
			if ((tmp3)){
				HX_STACK_LINE(271)
				this->state = ::haxe::zip::_InflateImpl::State_obj::Done;
				HX_STACK_LINE(272)
				return true;
			}
			HX_STACK_LINE(274)
			::haxe::io::Input tmp4 = this->input;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(274)
			::haxe::crypto::Adler32 tmp5 = ::haxe::crypto::Adler32_obj::read(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(274)
			::haxe::crypto::Adler32 crc = tmp5;		HX_STACK_VAR(crc,"crc");
			HX_STACK_LINE(275)
			::haxe::crypto::Adler32 tmp6 = crc;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(275)
			bool tmp7 = calc->equals(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(275)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(275)
			if ((tmp8)){
				HX_STACK_LINE(275)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid CRC","\xeb","\xac","\xc2","\x76"));
			}
			HX_STACK_LINE(276)
			this->state = ::haxe::zip::_InflateImpl::State_obj::Done;
			HX_STACK_LINE(277)
			return true;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(280)
			return false;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(282)
			bool tmp1 = this->getBit();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(282)
			this->final = tmp1;
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				int tmp2 = this->getBits((int)2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(283)
				int _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(283)
				int tmp3 = _g1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(283)
				switch( (int)(tmp3)){
					case (int)0: {
						HX_STACK_LINE(285)
						::haxe::io::Input tmp4 = this->input;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(285)
						int tmp5 = tmp4->readUInt16();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(285)
						this->len = tmp5;
						HX_STACK_LINE(286)
						::haxe::io::Input tmp6 = this->input;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(286)
						int tmp7 = tmp6->readUInt16();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(286)
						int nlen = tmp7;		HX_STACK_VAR(nlen,"nlen");
						HX_STACK_LINE(287)
						int tmp8 = nlen;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(287)
						int tmp9 = this->len;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(287)
						int tmp10 = ((int)65535 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(287)
						bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(287)
						if ((tmp11)){
							HX_STACK_LINE(287)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid data","\x13","\x38","\x70","\x89"));
						}
						HX_STACK_LINE(288)
						this->state = ::haxe::zip::_InflateImpl::State_obj::Flat;
						HX_STACK_LINE(289)
						bool tmp12 = this->inflateLoop();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(289)
						bool r = tmp12;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(290)
						this->resetBits();
						HX_STACK_LINE(291)
						bool tmp13 = r;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(291)
						return tmp13;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(293)
						::haxe::zip::Huffman tmp4 = this->buildFixedHuffman();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(293)
						this->huffman = tmp4;
						HX_STACK_LINE(294)
						this->huffdist = null();
						HX_STACK_LINE(295)
						this->state = ::haxe::zip::_InflateImpl::State_obj::CData;
						HX_STACK_LINE(296)
						return true;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(298)
						int tmp4 = this->getBits((int)5);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(298)
						int tmp5 = (tmp4 + (int)257);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(298)
						int hlit = tmp5;		HX_STACK_VAR(hlit,"hlit");
						HX_STACK_LINE(299)
						int tmp6 = this->getBits((int)5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(299)
						int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(299)
						int hdist = tmp7;		HX_STACK_VAR(hdist,"hdist");
						HX_STACK_LINE(300)
						int tmp8 = this->getBits((int)4);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(300)
						int tmp9 = (tmp8 + (int)4);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(300)
						int hclen = tmp9;		HX_STACK_VAR(hclen,"hclen");
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(301)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(301)
							while((true)){
								HX_STACK_LINE(301)
								bool tmp10 = (_g2 < hclen);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(301)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(301)
								if ((tmp11)){
									HX_STACK_LINE(301)
									break;
								}
								HX_STACK_LINE(301)
								int tmp12 = (_g2)++;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(301)
								int i = tmp12;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(302)
								int tmp13 = ::haxe::zip::InflateImpl_obj::CODE_LENGTHS_POS->__get(i);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(302)
								int tmp14 = this->getBits((int)3);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(302)
								this->lengths[tmp13] = tmp14;
							}
						}
						HX_STACK_LINE(303)
						{
							HX_STACK_LINE(303)
							int _g2 = hclen;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(303)
							while((true)){
								HX_STACK_LINE(303)
								bool tmp10 = (_g2 < (int)19);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(303)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(303)
								if ((tmp11)){
									HX_STACK_LINE(303)
									break;
								}
								HX_STACK_LINE(303)
								int tmp12 = (_g2)++;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(303)
								int i = tmp12;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(304)
								int tmp13 = ::haxe::zip::InflateImpl_obj::CODE_LENGTHS_POS->__get(i);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(304)
								this->lengths[tmp13] = (int)0;
							}
						}
						HX_STACK_LINE(305)
						::haxe::zip::HuffTools tmp10 = this->htools;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(305)
						::haxe::zip::Huffman tmp11 = tmp10->make(this->lengths,(int)0,(int)19,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(305)
						this->huffman = tmp11;
						HX_STACK_LINE(306)
						Array< int > lengths = Array_obj< int >::__new();		HX_STACK_VAR(lengths,"lengths");
						HX_STACK_LINE(307)
						{
							HX_STACK_LINE(307)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(307)
							int tmp12 = (hlit + hdist);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(307)
							int _g2 = tmp12;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(307)
							while((true)){
								HX_STACK_LINE(307)
								bool tmp13 = (_g3 < _g2);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(307)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(307)
								if ((tmp14)){
									HX_STACK_LINE(307)
									break;
								}
								HX_STACK_LINE(307)
								int tmp15 = (_g3)++;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(307)
								int i = tmp15;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(308)
								lengths->push((int)0);
							}
						}
						HX_STACK_LINE(309)
						int tmp12 = (hlit + hdist);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(309)
						this->inflateLengths(lengths,tmp12);
						HX_STACK_LINE(310)
						::haxe::zip::HuffTools tmp13 = this->htools;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(310)
						int tmp14 = hlit;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(310)
						int tmp15 = hdist;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(310)
						::haxe::zip::Huffman tmp16 = tmp13->make(lengths,tmp14,tmp15,(int)16);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(310)
						this->huffdist = tmp16;
						HX_STACK_LINE(311)
						::haxe::zip::HuffTools tmp17 = this->htools;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(311)
						int tmp18 = hlit;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(311)
						::haxe::zip::Huffman tmp19 = tmp17->make(lengths,(int)0,tmp18,(int)16);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(311)
						this->huffman = tmp19;
						HX_STACK_LINE(312)
						this->state = ::haxe::zip::_InflateImpl::State_obj::CData;
						HX_STACK_LINE(313)
						return true;
					}
					;break;
					default: {
						HX_STACK_LINE(315)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid data","\x13","\x38","\x70","\x89"));
					}
				}
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(318)
			int tmp1 = this->len;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(318)
			int tmp2 = this->needed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(318)
			bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(318)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(318)
			if ((tmp3)){
				HX_STACK_LINE(318)
				tmp4 = this->len;
			}
			else{
				HX_STACK_LINE(318)
				tmp4 = this->needed;
			}
			HX_STACK_LINE(318)
			int rlen = tmp4;		HX_STACK_VAR(rlen,"rlen");
			HX_STACK_LINE(319)
			::haxe::io::Input tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(319)
			int tmp6 = rlen;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(319)
			::haxe::io::Bytes tmp7 = tmp5->read(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(319)
			::haxe::io::Bytes bytes = tmp7;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(320)
			hx::SubEq(this->len,rlen);
			HX_STACK_LINE(321)
			::haxe::io::Bytes tmp8 = bytes;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(321)
			int tmp9 = rlen;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(321)
			this->addBytes(tmp8,(int)0,tmp9);
			HX_STACK_LINE(322)
			int tmp10 = this->len;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(322)
			bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(322)
			if ((tmp11)){
				HX_STACK_LINE(322)
				bool tmp12 = this->final;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(322)
				::haxe::zip::_InflateImpl::State tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(322)
				if ((tmp12)){
					HX_STACK_LINE(322)
					tmp13 = ::haxe::zip::_InflateImpl::State_obj::Crc;
				}
				else{
					HX_STACK_LINE(322)
					tmp13 = ::haxe::zip::_InflateImpl::State_obj::Block;
				}
				HX_STACK_LINE(322)
				this->state = tmp13;
			}
			HX_STACK_LINE(323)
			int tmp12 = this->needed;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(323)
			bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(323)
			return tmp13;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(325)
			int tmp1 = this->len;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(325)
			int tmp2 = this->needed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(325)
			bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(325)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(325)
			if ((tmp3)){
				HX_STACK_LINE(325)
				tmp4 = this->len;
			}
			else{
				HX_STACK_LINE(325)
				tmp4 = this->needed;
			}
			HX_STACK_LINE(325)
			int rlen = tmp4;		HX_STACK_VAR(rlen,"rlen");
			HX_STACK_LINE(326)
			int tmp5 = rlen;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(326)
			this->addDistOne(tmp5);
			HX_STACK_LINE(327)
			hx::SubEq(this->len,rlen);
			HX_STACK_LINE(328)
			int tmp6 = this->len;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(328)
			bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(328)
			if ((tmp7)){
				HX_STACK_LINE(328)
				this->state = ::haxe::zip::_InflateImpl::State_obj::CData;
			}
			HX_STACK_LINE(329)
			int tmp8 = this->needed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(329)
			bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(329)
			return tmp9;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(331)
			while((true)){
				HX_STACK_LINE(331)
				int tmp1 = this->len;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(331)
				bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(331)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(331)
				if ((tmp2)){
					HX_STACK_LINE(331)
					int tmp4 = this->needed;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(331)
					int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(331)
					tmp3 = (tmp5 > (int)0);
				}
				else{
					HX_STACK_LINE(331)
					tmp3 = false;
				}
				HX_STACK_LINE(331)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(331)
				if ((tmp4)){
					HX_STACK_LINE(331)
					break;
				}
				HX_STACK_LINE(332)
				int tmp5 = this->len;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(332)
				int tmp6 = this->dist;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(332)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(332)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(332)
				if ((tmp7)){
					HX_STACK_LINE(332)
					tmp8 = this->len;
				}
				else{
					HX_STACK_LINE(332)
					tmp8 = this->dist;
				}
				HX_STACK_LINE(332)
				int rdist = tmp8;		HX_STACK_VAR(rdist,"rdist");
				HX_STACK_LINE(333)
				int tmp9 = this->needed;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(333)
				int tmp10 = rdist;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(333)
				bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(333)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(333)
				if ((tmp11)){
					HX_STACK_LINE(333)
					tmp12 = this->needed;
				}
				else{
					HX_STACK_LINE(333)
					tmp12 = rdist;
				}
				HX_STACK_LINE(333)
				int rlen = tmp12;		HX_STACK_VAR(rlen,"rlen");
				HX_STACK_LINE(334)
				int tmp13 = this->dist;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(334)
				int tmp14 = rlen;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(334)
				this->addDist(tmp13,tmp14);
				HX_STACK_LINE(335)
				hx::SubEq(this->len,rlen);
			}
			HX_STACK_LINE(337)
			int tmp1 = this->len;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(337)
			bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(337)
			if ((tmp2)){
				HX_STACK_LINE(337)
				this->state = ::haxe::zip::_InflateImpl::State_obj::CData;
			}
			HX_STACK_LINE(338)
			int tmp3 = this->needed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(338)
			bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(338)
			return tmp4;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(340)
			::haxe::zip::Huffman tmp1 = this->huffman;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(340)
			int tmp2 = this->applyHuffman(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(340)
			int n = tmp2;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(341)
			bool tmp3 = (n < (int)256);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(341)
			if ((tmp3)){
				HX_STACK_LINE(342)
				int tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(342)
				this->addByte(tmp4);
				HX_STACK_LINE(343)
				int tmp5 = this->needed;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(343)
				bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(343)
				return tmp6;
			}
			else{
				HX_STACK_LINE(344)
				bool tmp4 = (n == (int)256);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(344)
				if ((tmp4)){
					HX_STACK_LINE(345)
					bool tmp5 = this->final;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(345)
					::haxe::zip::_InflateImpl::State tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(345)
					if ((tmp5)){
						HX_STACK_LINE(345)
						tmp6 = ::haxe::zip::_InflateImpl::State_obj::Crc;
					}
					else{
						HX_STACK_LINE(345)
						tmp6 = ::haxe::zip::_InflateImpl::State_obj::Block;
					}
					HX_STACK_LINE(345)
					this->state = tmp6;
					HX_STACK_LINE(346)
					return true;
				}
				else{
					HX_STACK_LINE(348)
					hx::SubEq(n,(int)257);
					HX_STACK_LINE(349)
					int tmp5 = ::haxe::zip::InflateImpl_obj::LEN_EXTRA_BITS_TBL->__get(n);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(349)
					int extra_bits = tmp5;		HX_STACK_VAR(extra_bits,"extra_bits");
					HX_STACK_LINE(350)
					bool tmp6 = (extra_bits == (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(350)
					if ((tmp6)){
						HX_STACK_LINE(350)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid data","\x13","\x38","\x70","\x89"));
					}
					HX_STACK_LINE(351)
					int tmp7 = ::haxe::zip::InflateImpl_obj::LEN_BASE_VAL_TBL->__get(n);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(351)
					int tmp8 = extra_bits;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(351)
					int tmp9 = this->getBits(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(351)
					int tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(351)
					this->len = tmp10;
					HX_STACK_LINE(352)
					::haxe::zip::Huffman tmp11 = this->huffdist;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(352)
					bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(352)
					int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(352)
					if ((tmp12)){
						HX_STACK_LINE(352)
						tmp13 = this->getRevBits((int)5);
					}
					else{
						HX_STACK_LINE(352)
						::haxe::zip::Huffman tmp14 = this->huffdist;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(352)
						tmp13 = this->applyHuffman(tmp14);
					}
					HX_STACK_LINE(352)
					int dist_code = tmp13;		HX_STACK_VAR(dist_code,"dist_code");
					HX_STACK_LINE(353)
					int tmp14 = ::haxe::zip::InflateImpl_obj::DIST_EXTRA_BITS_TBL->__get(dist_code);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(353)
					extra_bits = tmp14;
					HX_STACK_LINE(354)
					bool tmp15 = (extra_bits == (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(354)
					if ((tmp15)){
						HX_STACK_LINE(354)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid data","\x13","\x38","\x70","\x89"));
					}
					HX_STACK_LINE(355)
					int tmp16 = ::haxe::zip::InflateImpl_obj::DIST_BASE_VAL_TBL->__get(dist_code);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(355)
					int tmp17 = extra_bits;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(355)
					int tmp18 = this->getBits(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(355)
					int tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(355)
					this->dist = tmp19;
					HX_STACK_LINE(356)
					int tmp20 = this->dist;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(356)
					::haxe::zip::_InflateImpl::Window tmp21 = this->window;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(356)
					int tmp22 = tmp21->available();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(356)
					bool tmp23 = (tmp20 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(356)
					if ((tmp23)){
						HX_STACK_LINE(356)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid data","\x13","\x38","\x70","\x89"));
					}
					HX_STACK_LINE(357)
					int tmp24 = this->dist;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(357)
					bool tmp25 = (tmp24 == (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(357)
					::haxe::zip::_InflateImpl::State tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(357)
					if ((tmp25)){
						HX_STACK_LINE(357)
						tmp26 = ::haxe::zip::_InflateImpl::State_obj::DistOne;
					}
					else{
						HX_STACK_LINE(357)
						tmp26 = ::haxe::zip::_InflateImpl::State_obj::Dist;
					}
					HX_STACK_LINE(357)
					this->state = tmp26;
					HX_STACK_LINE(358)
					return true;
				}
			}
		}
		;break;
	}
	HX_STACK_LINE(254)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(InflateImpl_obj,inflateLoop,return )

Array< int > InflateImpl_obj::LEN_EXTRA_BITS_TBL;

Array< int > InflateImpl_obj::LEN_BASE_VAL_TBL;

Array< int > InflateImpl_obj::DIST_EXTRA_BITS_TBL;

Array< int > InflateImpl_obj::DIST_BASE_VAL_TBL;

Array< int > InflateImpl_obj::CODE_LENGTHS_POS;

::haxe::zip::Huffman InflateImpl_obj::FIXED_HUFFMAN;

::haxe::io::Bytes InflateImpl_obj::run( ::haxe::io::Input i,Dynamic __o_bufsize){
Dynamic bufsize = __o_bufsize.Default(65536);
	HX_STACK_FRAME("haxe.zip.InflateImpl","run",0x8ae2ca6f,"haxe.zip.InflateImpl.run","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",363,0xc398dbb5)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(bufsize,"bufsize")
{
		HX_STACK_LINE(364)
		Dynamic tmp = bufsize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(364)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(364)
		::haxe::io::Bytes buf = tmp1;		HX_STACK_VAR(buf,"buf");
		HX_STACK_LINE(365)
		::haxe::io::BytesBuffer tmp2 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(365)
		::haxe::io::BytesBuffer output = tmp2;		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(366)
		::haxe::zip::InflateImpl tmp3 = ::haxe::zip::InflateImpl_obj::__new(i,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(366)
		::haxe::zip::InflateImpl inflate = tmp3;		HX_STACK_VAR(inflate,"inflate");
		HX_STACK_LINE(367)
		while((true)){
			HX_STACK_LINE(368)
			::haxe::io::Bytes tmp4 = buf;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(368)
			Dynamic tmp5 = bufsize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(368)
			int tmp6 = inflate->readBytes(tmp4,(int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(368)
			int len = tmp6;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(369)
			{
				HX_STACK_LINE(369)
				bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(369)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(369)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(369)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(369)
				if ((tmp9)){
					HX_STACK_LINE(369)
					tmp10 = (len < (int)0);
				}
				else{
					HX_STACK_LINE(369)
					tmp10 = true;
				}
				HX_STACK_LINE(369)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(369)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(369)
				if ((tmp11)){
					HX_STACK_LINE(369)
					int tmp13 = len;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(369)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(369)
					int tmp15 = buf->length;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(369)
					tmp12 = (tmp14 > tmp15);
				}
				else{
					HX_STACK_LINE(369)
					tmp12 = true;
				}
				HX_STACK_LINE(369)
				if ((tmp12)){
					HX_STACK_LINE(369)
					HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
				}
				HX_STACK_LINE(369)
				Array< unsigned char > b1 = output->b;		HX_STACK_VAR(b1,"b1");
				HX_STACK_LINE(369)
				Array< unsigned char > b2 = buf->b;		HX_STACK_VAR(b2,"b2");
				HX_STACK_LINE(369)
				{
					HX_STACK_LINE(369)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(369)
					int tmp13 = len;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(369)
					int _g = tmp13;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(369)
					while((true)){
						HX_STACK_LINE(369)
						bool tmp14 = (_g1 < _g);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(369)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(369)
						if ((tmp15)){
							HX_STACK_LINE(369)
							break;
						}
						HX_STACK_LINE(369)
						int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(369)
						int i1 = tmp16;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(369)
						unsigned char tmp17 = b2->__get(i1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(369)
						output->b->push(tmp17);
					}
				}
			}
			HX_STACK_LINE(370)
			bool tmp7 = (len < bufsize);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(370)
			if ((tmp7)){
				HX_STACK_LINE(371)
				break;
			}
		}
		HX_STACK_LINE(373)
		::haxe::io::Bytes tmp4 = output->getBytes();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(373)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InflateImpl_obj,run,return )


InflateImpl_obj::InflateImpl_obj()
{
}

void InflateImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InflateImpl);
	HX_MARK_MEMBER_NAME(nbits,"nbits");
	HX_MARK_MEMBER_NAME(bits,"bits");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(final,"final");
	HX_MARK_MEMBER_NAME(huffman,"huffman");
	HX_MARK_MEMBER_NAME(huffdist,"huffdist");
	HX_MARK_MEMBER_NAME(htools,"htools");
	HX_MARK_MEMBER_NAME(len,"len");
	HX_MARK_MEMBER_NAME(dist,"dist");
	HX_MARK_MEMBER_NAME(needed,"needed");
	HX_MARK_MEMBER_NAME(output,"output");
	HX_MARK_MEMBER_NAME(outpos,"outpos");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(lengths,"lengths");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_END_CLASS();
}

void InflateImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nbits,"nbits");
	HX_VISIT_MEMBER_NAME(bits,"bits");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(final,"final");
	HX_VISIT_MEMBER_NAME(huffman,"huffman");
	HX_VISIT_MEMBER_NAME(huffdist,"huffdist");
	HX_VISIT_MEMBER_NAME(htools,"htools");
	HX_VISIT_MEMBER_NAME(len,"len");
	HX_VISIT_MEMBER_NAME(dist,"dist");
	HX_VISIT_MEMBER_NAME(needed,"needed");
	HX_VISIT_MEMBER_NAME(output,"output");
	HX_VISIT_MEMBER_NAME(outpos,"outpos");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(lengths,"lengths");
	HX_VISIT_MEMBER_NAME(window,"window");
}

Dynamic InflateImpl_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { return len; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { return bits; }
		if (HX_FIELD_EQ(inName,"dist") ) { return dist; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { return nbits; }
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"final") ) { return final; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"htools") ) { return htools; }
		if (HX_FIELD_EQ(inName,"needed") ) { return needed; }
		if (HX_FIELD_EQ(inName,"output") ) { return output; }
		if (HX_FIELD_EQ(inName,"outpos") ) { return outpos; }
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"getBit") ) { return getBit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"huffman") ) { return huffman; }
		if (HX_FIELD_EQ(inName,"lengths") ) { return lengths; }
		if (HX_FIELD_EQ(inName,"getBits") ) { return getBits_dyn(); }
		if (HX_FIELD_EQ(inName,"addByte") ) { return addByte_dyn(); }
		if (HX_FIELD_EQ(inName,"addDist") ) { return addDist_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"huffdist") ) { return huffdist; }
		if (HX_FIELD_EQ(inName,"addBytes") ) { return addBytes_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"resetBits") ) { return resetBits_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getRevBits") ) { return getRevBits_dyn(); }
		if (HX_FIELD_EQ(inName,"addDistOne") ) { return addDistOne_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inflateLoop") ) { return inflateLoop_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"applyHuffman") ) { return applyHuffman_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inflateLengths") ) { return inflateLengths_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"buildFixedHuffman") ) { return buildFixedHuffman_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool InflateImpl_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FIXED_HUFFMAN") ) { outValue = FIXED_HUFFMAN; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"LEN_BASE_VAL_TBL") ) { outValue = LEN_BASE_VAL_TBL; return true;  }
		if (HX_FIELD_EQ(inName,"CODE_LENGTHS_POS") ) { outValue = CODE_LENGTHS_POS; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DIST_BASE_VAL_TBL") ) { outValue = DIST_BASE_VAL_TBL; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"LEN_EXTRA_BITS_TBL") ) { outValue = LEN_EXTRA_BITS_TBL; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DIST_EXTRA_BITS_TBL") ) { outValue = DIST_EXTRA_BITS_TBL; return true;  }
	}
	return false;
}

Dynamic InflateImpl_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { len=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { bits=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dist") ) { dist=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { nbits=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::haxe::zip::_InflateImpl::State >(); return inValue; }
		if (HX_FIELD_EQ(inName,"final") ) { final=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::haxe::io::Input >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"htools") ) { htools=inValue.Cast< ::haxe::zip::HuffTools >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needed") ) { needed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"output") ) { output=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outpos") ) { outpos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::haxe::zip::_InflateImpl::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"huffman") ) { huffman=inValue.Cast< ::haxe::zip::Huffman >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lengths") ) { lengths=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"huffdist") ) { huffdist=inValue.Cast< ::haxe::zip::Huffman >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool InflateImpl_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"FIXED_HUFFMAN") ) { FIXED_HUFFMAN=ioValue.Cast< ::haxe::zip::Huffman >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"LEN_BASE_VAL_TBL") ) { LEN_BASE_VAL_TBL=ioValue.Cast< Array< int > >(); return true; }
		if (HX_FIELD_EQ(inName,"CODE_LENGTHS_POS") ) { CODE_LENGTHS_POS=ioValue.Cast< Array< int > >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DIST_BASE_VAL_TBL") ) { DIST_BASE_VAL_TBL=ioValue.Cast< Array< int > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"LEN_EXTRA_BITS_TBL") ) { LEN_EXTRA_BITS_TBL=ioValue.Cast< Array< int > >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DIST_EXTRA_BITS_TBL") ) { DIST_EXTRA_BITS_TBL=ioValue.Cast< Array< int > >(); return true; }
	}
	return false;
}

void InflateImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nbits","\x74","\xca","\x2a","\x97"));
	outFields->push(HX_HCSTRING("bits","\x06","\xfb","\x16","\x41"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("final","\x76","\x5f","\x9a","\x00"));
	outFields->push(HX_HCSTRING("huffman","\x2d","\x6f","\x17","\xab"));
	outFields->push(HX_HCSTRING("huffdist","\x73","\x03","\x7d","\x03"));
	outFields->push(HX_HCSTRING("htools","\xb3","\x18","\x4c","\xa9"));
	outFields->push(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"));
	outFields->push(HX_HCSTRING("dist","\x66","\x67","\x69","\x42"));
	outFields->push(HX_HCSTRING("needed","\x35","\x0e","\xc9","\x65"));
	outFields->push(HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"));
	outFields->push(HX_HCSTRING("outpos","\xc6","\x09","\x81","\x0c"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("lengths","\xcd","\xb4","\x9a","\x87"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(InflateImpl_obj,nbits),HX_HCSTRING("nbits","\x74","\xca","\x2a","\x97")},
	{hx::fsInt,(int)offsetof(InflateImpl_obj,bits),HX_HCSTRING("bits","\x06","\xfb","\x16","\x41")},
	{hx::fsObject /*::haxe::zip::_InflateImpl::State*/ ,(int)offsetof(InflateImpl_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsBool,(int)offsetof(InflateImpl_obj,final),HX_HCSTRING("final","\x76","\x5f","\x9a","\x00")},
	{hx::fsObject /*::haxe::zip::Huffman*/ ,(int)offsetof(InflateImpl_obj,huffman),HX_HCSTRING("huffman","\x2d","\x6f","\x17","\xab")},
	{hx::fsObject /*::haxe::zip::Huffman*/ ,(int)offsetof(InflateImpl_obj,huffdist),HX_HCSTRING("huffdist","\x73","\x03","\x7d","\x03")},
	{hx::fsObject /*::haxe::zip::HuffTools*/ ,(int)offsetof(InflateImpl_obj,htools),HX_HCSTRING("htools","\xb3","\x18","\x4c","\xa9")},
	{hx::fsInt,(int)offsetof(InflateImpl_obj,len),HX_HCSTRING("len","\xd5","\x4b","\x52","\x00")},
	{hx::fsInt,(int)offsetof(InflateImpl_obj,dist),HX_HCSTRING("dist","\x66","\x67","\x69","\x42")},
	{hx::fsInt,(int)offsetof(InflateImpl_obj,needed),HX_HCSTRING("needed","\x35","\x0e","\xc9","\x65")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(InflateImpl_obj,output),HX_HCSTRING("output","\x01","\x0f","\x81","\x0c")},
	{hx::fsInt,(int)offsetof(InflateImpl_obj,outpos),HX_HCSTRING("outpos","\xc6","\x09","\x81","\x0c")},
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(InflateImpl_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(InflateImpl_obj,lengths),HX_HCSTRING("lengths","\xcd","\xb4","\x9a","\x87")},
	{hx::fsObject /*::haxe::zip::_InflateImpl::Window*/ ,(int)offsetof(InflateImpl_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(void *) &InflateImpl_obj::LEN_EXTRA_BITS_TBL,HX_HCSTRING("LEN_EXTRA_BITS_TBL","\x9e","\xa5","\xc6","\x5c")},
	{hx::fsObject /*Array< int >*/ ,(void *) &InflateImpl_obj::LEN_BASE_VAL_TBL,HX_HCSTRING("LEN_BASE_VAL_TBL","\xfc","\xeb","\x05","\x8d")},
	{hx::fsObject /*Array< int >*/ ,(void *) &InflateImpl_obj::DIST_EXTRA_BITS_TBL,HX_HCSTRING("DIST_EXTRA_BITS_TBL","\x0d","\xad","\x8a","\x51")},
	{hx::fsObject /*Array< int >*/ ,(void *) &InflateImpl_obj::DIST_BASE_VAL_TBL,HX_HCSTRING("DIST_BASE_VAL_TBL","\xab","\xe9","\x0b","\xb6")},
	{hx::fsObject /*Array< int >*/ ,(void *) &InflateImpl_obj::CODE_LENGTHS_POS,HX_HCSTRING("CODE_LENGTHS_POS","\x50","\xd8","\xe3","\xb4")},
	{hx::fsObject /*::haxe::zip::Huffman*/ ,(void *) &InflateImpl_obj::FIXED_HUFFMAN,HX_HCSTRING("FIXED_HUFFMAN","\xe2","\x41","\x83","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nbits","\x74","\xca","\x2a","\x97"),
	HX_HCSTRING("bits","\x06","\xfb","\x16","\x41"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("final","\x76","\x5f","\x9a","\x00"),
	HX_HCSTRING("huffman","\x2d","\x6f","\x17","\xab"),
	HX_HCSTRING("huffdist","\x73","\x03","\x7d","\x03"),
	HX_HCSTRING("htools","\xb3","\x18","\x4c","\xa9"),
	HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"),
	HX_HCSTRING("dist","\x66","\x67","\x69","\x42"),
	HX_HCSTRING("needed","\x35","\x0e","\xc9","\x65"),
	HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"),
	HX_HCSTRING("outpos","\xc6","\x09","\x81","\x0c"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("lengths","\xcd","\xb4","\x9a","\x87"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("buildFixedHuffman","\x67","\xa8","\xb3","\xa7"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("getBits","\xbc","\xaa","\x99","\x13"),
	HX_HCSTRING("getBit","\xd7","\xf1","\x19","\xa3"),
	HX_HCSTRING("getRevBits","\x13","\x74","\x34","\x53"),
	HX_HCSTRING("resetBits","\x75","\x04","\x03","\x87"),
	HX_HCSTRING("addBytes","\x8a","\x2e","\xf5","\x36"),
	HX_HCSTRING("addByte","\xc9","\x61","\x60","\x7d"),
	HX_HCSTRING("addDistOne","\x7f","\x3a","\x63","\x25"),
	HX_HCSTRING("addDist","\x27","\xaa","\xa6","\x7e"),
	HX_HCSTRING("applyHuffman","\x5f","\xbb","\x84","\xea"),
	HX_HCSTRING("inflateLengths","\x06","\xef","\x55","\xb9"),
	HX_HCSTRING("inflateLoop","\x8b","\xbe","\xc2","\x25"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InflateImpl_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::LEN_EXTRA_BITS_TBL,"LEN_EXTRA_BITS_TBL");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::LEN_BASE_VAL_TBL,"LEN_BASE_VAL_TBL");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::DIST_EXTRA_BITS_TBL,"DIST_EXTRA_BITS_TBL");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::DIST_BASE_VAL_TBL,"DIST_BASE_VAL_TBL");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::CODE_LENGTHS_POS,"CODE_LENGTHS_POS");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::FIXED_HUFFMAN,"FIXED_HUFFMAN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::LEN_EXTRA_BITS_TBL,"LEN_EXTRA_BITS_TBL");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::LEN_BASE_VAL_TBL,"LEN_BASE_VAL_TBL");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::DIST_EXTRA_BITS_TBL,"DIST_EXTRA_BITS_TBL");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::DIST_BASE_VAL_TBL,"DIST_BASE_VAL_TBL");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::CODE_LENGTHS_POS,"CODE_LENGTHS_POS");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::FIXED_HUFFMAN,"FIXED_HUFFMAN");
};

#endif

hx::Class InflateImpl_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LEN_EXTRA_BITS_TBL","\x9e","\xa5","\xc6","\x5c"),
	HX_HCSTRING("LEN_BASE_VAL_TBL","\xfc","\xeb","\x05","\x8d"),
	HX_HCSTRING("DIST_EXTRA_BITS_TBL","\x0d","\xad","\x8a","\x51"),
	HX_HCSTRING("DIST_BASE_VAL_TBL","\xab","\xe9","\x0b","\xb6"),
	HX_HCSTRING("CODE_LENGTHS_POS","\x50","\xd8","\xe3","\xb4"),
	HX_HCSTRING("FIXED_HUFFMAN","\xe2","\x41","\x83","\x5f"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

void InflateImpl_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.zip.InflateImpl","\x92","\xe1","\x1e","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InflateImpl_obj::__GetStatic;
	__mClass->mSetStaticField = &InflateImpl_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InflateImpl_obj >;
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

void InflateImpl_obj::__boot()
{
	LEN_EXTRA_BITS_TBL= Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)3).Add((int)3).Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)5).Add((int)5).Add((int)5).Add((int)5).Add((int)0).Add((int)-1).Add((int)-1);
	LEN_BASE_VAL_TBL= Array_obj< int >::__new().Add((int)3).Add((int)4).Add((int)5).Add((int)6).Add((int)7).Add((int)8).Add((int)9).Add((int)10).Add((int)11).Add((int)13).Add((int)15).Add((int)17).Add((int)19).Add((int)23).Add((int)27).Add((int)31).Add((int)35).Add((int)43).Add((int)51).Add((int)59).Add((int)67).Add((int)83).Add((int)99).Add((int)115).Add((int)131).Add((int)163).Add((int)195).Add((int)227).Add((int)258);
	DIST_EXTRA_BITS_TBL= Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)5).Add((int)5).Add((int)6).Add((int)6).Add((int)7).Add((int)7).Add((int)8).Add((int)8).Add((int)9).Add((int)9).Add((int)10).Add((int)10).Add((int)11).Add((int)11).Add((int)12).Add((int)12).Add((int)13).Add((int)13).Add((int)-1).Add((int)-1);
	DIST_BASE_VAL_TBL= Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)7).Add((int)9).Add((int)13).Add((int)17).Add((int)25).Add((int)33).Add((int)49).Add((int)65).Add((int)97).Add((int)129).Add((int)193).Add((int)257).Add((int)385).Add((int)513).Add((int)769).Add((int)1025).Add((int)1537).Add((int)2049).Add((int)3073).Add((int)4097).Add((int)6145).Add((int)8193).Add((int)12289).Add((int)16385).Add((int)24577);
	CODE_LENGTHS_POS= Array_obj< int >::__new().Add((int)16).Add((int)17).Add((int)18).Add((int)0).Add((int)8).Add((int)7).Add((int)9).Add((int)6).Add((int)10).Add((int)5).Add((int)11).Add((int)4).Add((int)12).Add((int)3).Add((int)13).Add((int)2).Add((int)14).Add((int)1).Add((int)15);
	FIXED_HUFFMAN= null();
}

} // end namespace haxe
} // end namespace zip
