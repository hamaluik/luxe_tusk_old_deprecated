#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Md5
#include <haxe/crypto/Md5.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace haxe{
namespace crypto{

Void Md5_obj::__construct()
{
HX_STACK_FRAME("haxe.crypto.Md5","new",0x90507feb,"haxe.crypto.Md5.new","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",73,0xa59e361e)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Md5_obj::~Md5_obj() { }

Dynamic Md5_obj::__CreateEmpty() { return  new Md5_obj; }
hx::ObjectPtr< Md5_obj > Md5_obj::__new()
{  hx::ObjectPtr< Md5_obj > _result_ = new Md5_obj();
	_result_->__construct();
	return _result_;}

Dynamic Md5_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Md5_obj > _result_ = new Md5_obj();
	_result_->__construct();
	return _result_;}

int Md5_obj::bitOR( int a,int b){
	HX_STACK_FRAME("haxe.crypto.Md5","bitOR",0xbf34737b,"haxe.crypto.Md5.bitOR","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",76,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(77)
	int tmp = (int(a) & int((int)1));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	int tmp1 = (int(b) & int((int)1));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	int tmp2 = (int(tmp) | int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	int lsb = tmp2;		HX_STACK_VAR(lsb,"lsb");
	HX_STACK_LINE(78)
	int tmp3 = hx::UShr(a,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	int tmp4 = hx::UShr(b,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(78)
	int tmp5 = (int(tmp3) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(78)
	int msb31 = tmp5;		HX_STACK_VAR(msb31,"msb31");
	HX_STACK_LINE(79)
	int tmp6 = (int(msb31) << int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	int tmp7 = lsb;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(79)
	int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(79)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,bitOR,return )

int Md5_obj::bitXOR( int a,int b){
	HX_STACK_FRAME("haxe.crypto.Md5","bitXOR",0x8eb76a23,"haxe.crypto.Md5.bitXOR","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",82,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(83)
	int tmp = (int(a) & int((int)1));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	int tmp1 = (int(b) & int((int)1));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	int tmp2 = (int(tmp) ^ int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	int lsb = tmp2;		HX_STACK_VAR(lsb,"lsb");
	HX_STACK_LINE(84)
	int tmp3 = hx::UShr(a,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	int tmp4 = hx::UShr(b,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(84)
	int tmp5 = (int(tmp3) ^ int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(84)
	int msb31 = tmp5;		HX_STACK_VAR(msb31,"msb31");
	HX_STACK_LINE(85)
	int tmp6 = (int(msb31) << int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	int tmp7 = lsb;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(85)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,bitXOR,return )

int Md5_obj::bitAND( int a,int b){
	HX_STACK_FRAME("haxe.crypto.Md5","bitAND",0x8ea5f55f,"haxe.crypto.Md5.bitAND","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",88,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(89)
	int tmp = (int(a) & int((int)1));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	int tmp1 = (int(b) & int((int)1));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	int lsb = tmp2;		HX_STACK_VAR(lsb,"lsb");
	HX_STACK_LINE(90)
	int tmp3 = hx::UShr(a,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(90)
	int tmp4 = hx::UShr(b,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(90)
	int tmp5 = (int(tmp3) & int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(90)
	int msb31 = tmp5;		HX_STACK_VAR(msb31,"msb31");
	HX_STACK_LINE(91)
	int tmp6 = (int(msb31) << int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(91)
	int tmp7 = lsb;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(91)
	int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(91)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,bitAND,return )

int Md5_obj::addme( int x,int y){
	HX_STACK_FRAME("haxe.crypto.Md5","addme",0x2873c404,"haxe.crypto.Md5.addme","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",94,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(95)
	int tmp = (int(x) & int((int)65535));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	int tmp1 = (int(y) & int((int)65535));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	int lsw = tmp2;		HX_STACK_VAR(lsw,"lsw");
	HX_STACK_LINE(96)
	int tmp3 = (int(x) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	int tmp4 = (int(y) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(96)
	int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(96)
	int tmp6 = (int(lsw) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(96)
	int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(96)
	int msw = tmp7;		HX_STACK_VAR(msw,"msw");
	HX_STACK_LINE(97)
	int tmp8 = (int(msw) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(97)
	int tmp9 = (int(lsw) & int((int)65535));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(97)
	int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(97)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,addme,return )

::String Md5_obj::hex( Array< int > a){
	HX_STACK_FRAME("haxe.crypto.Md5","hex",0x904bf266,"haxe.crypto.Md5.hex","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",100,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(101)
	::String str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(102)
	::String hex_chr = HX_HCSTRING("0123456789abcdef","\x68","\x7e","\xd5","\xef");		HX_STACK_VAR(hex_chr,"hex_chr");
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		while((true)){
			HX_STACK_LINE(103)
			bool tmp = (_g < a->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(103)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			if ((tmp1)){
				HX_STACK_LINE(103)
				break;
			}
			HX_STACK_LINE(103)
			int tmp2 = a->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			int num = tmp2;		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(103)
			++(_g);
			HX_STACK_LINE(104)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(104)
			while((true)){
				HX_STACK_LINE(104)
				bool tmp3 = (_g1 < (int)4);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(104)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(104)
				if ((tmp4)){
					HX_STACK_LINE(104)
					break;
				}
				HX_STACK_LINE(104)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(104)
				int j = tmp5;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(105)
				int tmp6 = num;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(105)
				int tmp7 = (j * (int)8);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(105)
				int tmp8 = (tmp7 + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(105)
				int tmp9 = (int(tmp6) >> int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(105)
				int tmp10 = (int(tmp9) & int((int)15));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(105)
				::String tmp11 = hex_chr.charAt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(106)
				int tmp12 = num;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(106)
				int tmp13 = (j * (int)8);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(106)
				int tmp14 = (int(tmp12) >> int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(106)
				int tmp15 = (int(tmp14) & int((int)15));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(106)
				::String tmp16 = hex_chr.charAt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(105)
				::String tmp17 = (tmp11 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(105)
				hx::AddEq(str,tmp17);
			}
		}
	}
	HX_STACK_LINE(107)
	::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,hex,return )

int Md5_obj::rol( int num,int cnt){
	HX_STACK_FRAME("haxe.crypto.Md5","rol",0x9053919a,"haxe.crypto.Md5.rol","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",168,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(num,"num")
	HX_STACK_ARG(cnt,"cnt")
	HX_STACK_LINE(169)
	int tmp = (int(num) << int(cnt));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	int tmp1 = num;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	int tmp2 = ((int)32 - cnt);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(169)
	int tmp3 = hx::UShr(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(169)
	int tmp4 = (int(tmp) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(169)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,rol,return )

int Md5_obj::cmn( int q,int a,int b,int x,int s,int t){
	HX_STACK_FRAME("haxe.crypto.Md5","cmn",0x90482e0f,"haxe.crypto.Md5.cmn","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",172,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(q,"q")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(173)
	int tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	int tmp1 = q;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	int tmp2 = this->addme(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(173)
	int tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(173)
	int tmp5 = this->addme(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(173)
	int tmp6 = this->addme(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(173)
	int tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(173)
	int tmp8 = this->rol(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(173)
	int tmp9 = b;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(173)
	int tmp10 = this->addme(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(173)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC6(Md5_obj,cmn,return )

int Md5_obj::ff( int a,int b,int c,int d,int x,int s,int t){
	HX_STACK_FRAME("haxe.crypto.Md5","ff",0xde352415,"haxe.crypto.Md5.ff","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",176,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(177)
	int tmp = b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	int tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(177)
	int tmp2 = this->bitAND(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(177)
	int tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(177)
	int tmp4 = ~(int)(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(177)
	int tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(177)
	int tmp6 = this->bitAND(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(177)
	int tmp7 = this->bitOR(tmp2,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(177)
	int tmp8 = a;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(177)
	int tmp9 = b;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(177)
	int tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(177)
	int tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(177)
	int tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(177)
	int tmp13 = this->cmn(tmp7,tmp8,tmp9,tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(177)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,ff,return )

int Md5_obj::gg( int a,int b,int c,int d,int x,int s,int t){
	HX_STACK_FRAME("haxe.crypto.Md5","gg",0xde3524f5,"haxe.crypto.Md5.gg","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",180,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(181)
	int tmp = b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	int tmp1 = d;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	int tmp2 = this->bitAND(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(181)
	int tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(181)
	int tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(181)
	int tmp5 = ~(int)(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(181)
	int tmp6 = this->bitAND(tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(181)
	int tmp7 = this->bitOR(tmp2,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(181)
	int tmp8 = a;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(181)
	int tmp9 = b;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(181)
	int tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(181)
	int tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(181)
	int tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(181)
	int tmp13 = this->cmn(tmp7,tmp8,tmp9,tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(181)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,gg,return )

int Md5_obj::hh( int a,int b,int c,int d,int x,int s,int t){
	HX_STACK_FRAME("haxe.crypto.Md5","hh",0xde3525d5,"haxe.crypto.Md5.hh","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",184,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(185)
	int tmp = b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	int tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	int tmp2 = this->bitXOR(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	int tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(185)
	int tmp4 = this->bitXOR(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(185)
	int tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(185)
	int tmp6 = b;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(185)
	int tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(185)
	int tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(185)
	int tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(185)
	int tmp10 = this->cmn(tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(185)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,hh,return )

int Md5_obj::ii( int a,int b,int c,int d,int x,int s,int t){
	HX_STACK_FRAME("haxe.crypto.Md5","ii",0xde3526b5,"haxe.crypto.Md5.ii","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",188,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(189)
	int tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	int tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	int tmp2 = d;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	int tmp3 = ~(int)(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(189)
	int tmp4 = this->bitOR(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(189)
	int tmp5 = this->bitXOR(tmp,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(189)
	int tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(189)
	int tmp7 = b;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(189)
	int tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(189)
	int tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(189)
	int tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(189)
	int tmp11 = this->cmn(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(189)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,ii,return )

Array< int > Md5_obj::doEncode( Array< int > x){
	HX_STACK_FRAME("haxe.crypto.Md5","doEncode",0x943f9096,"haxe.crypto.Md5.doEncode","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",192,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(194)
	int a = (int)1732584193;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(195)
	int b = (int)-271733879;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(196)
	int c = (int)-1732584194;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(197)
	int d = (int)271733878;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(199)
	int step;		HX_STACK_VAR(step,"step");
	HX_STACK_LINE(201)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(202)
	while((true)){
		HX_STACK_LINE(202)
		bool tmp = (i < x->length);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		if ((tmp1)){
			HX_STACK_LINE(202)
			break;
		}
		HX_STACK_LINE(203)
		int olda = a;		HX_STACK_VAR(olda,"olda");
		HX_STACK_LINE(204)
		int oldb = b;		HX_STACK_VAR(oldb,"oldb");
		HX_STACK_LINE(205)
		int oldc = c;		HX_STACK_VAR(oldc,"oldc");
		HX_STACK_LINE(206)
		int oldd = d;		HX_STACK_VAR(oldd,"oldd");
		HX_STACK_LINE(208)
		step = (int)0;
		HX_STACK_LINE(209)
		int tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		int tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(209)
		int tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(209)
		int tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(209)
		int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(209)
		int tmp7 = x->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(209)
		int tmp8 = this->ff(tmp2,tmp3,tmp4,tmp5,tmp7,(int)7,(int)-680876936);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(209)
		a = tmp8;
		HX_STACK_LINE(210)
		int tmp9 = d;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(210)
		int tmp10 = a;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(210)
		int tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(210)
		int tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(210)
		int tmp13 = (i + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(210)
		int tmp14 = x->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(210)
		int tmp15 = this->ff(tmp9,tmp10,tmp11,tmp12,tmp14,(int)12,(int)-389564586);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(210)
		d = tmp15;
		HX_STACK_LINE(211)
		int tmp16 = c;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(211)
		int tmp17 = d;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(211)
		int tmp18 = a;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(211)
		int tmp19 = b;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(211)
		int tmp20 = (i + (int)2);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(211)
		int tmp21 = x->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(211)
		int tmp22 = this->ff(tmp16,tmp17,tmp18,tmp19,tmp21,(int)17,(int)606105819);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(211)
		c = tmp22;
		HX_STACK_LINE(212)
		int tmp23 = b;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(212)
		int tmp24 = c;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(212)
		int tmp25 = d;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(212)
		int tmp26 = a;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(212)
		int tmp27 = (i + (int)3);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(212)
		int tmp28 = x->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(212)
		int tmp29 = this->ff(tmp23,tmp24,tmp25,tmp26,tmp28,(int)22,(int)-1044525330);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(212)
		b = tmp29;
		HX_STACK_LINE(213)
		int tmp30 = a;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(213)
		int tmp31 = b;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(213)
		int tmp32 = c;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(213)
		int tmp33 = d;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(213)
		int tmp34 = (i + (int)4);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(213)
		int tmp35 = x->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(213)
		int tmp36 = this->ff(tmp30,tmp31,tmp32,tmp33,tmp35,(int)7,(int)-176418897);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(213)
		a = tmp36;
		HX_STACK_LINE(214)
		int tmp37 = d;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(214)
		int tmp38 = a;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(214)
		int tmp39 = b;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(214)
		int tmp40 = c;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(214)
		int tmp41 = (i + (int)5);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(214)
		int tmp42 = x->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(214)
		int tmp43 = this->ff(tmp37,tmp38,tmp39,tmp40,tmp42,(int)12,(int)1200080426);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(214)
		d = tmp43;
		HX_STACK_LINE(215)
		int tmp44 = c;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(215)
		int tmp45 = d;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(215)
		int tmp46 = a;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(215)
		int tmp47 = b;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(215)
		int tmp48 = (i + (int)6);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(215)
		int tmp49 = x->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(215)
		int tmp50 = this->ff(tmp44,tmp45,tmp46,tmp47,tmp49,(int)17,(int)-1473231341);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(215)
		c = tmp50;
		HX_STACK_LINE(216)
		int tmp51 = b;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(216)
		int tmp52 = c;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(216)
		int tmp53 = d;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(216)
		int tmp54 = a;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(216)
		int tmp55 = (i + (int)7);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(216)
		int tmp56 = x->__get(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(216)
		int tmp57 = this->ff(tmp51,tmp52,tmp53,tmp54,tmp56,(int)22,(int)-45705983);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(216)
		b = tmp57;
		HX_STACK_LINE(217)
		int tmp58 = a;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(217)
		int tmp59 = b;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(217)
		int tmp60 = c;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(217)
		int tmp61 = d;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(217)
		int tmp62 = (i + (int)8);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(217)
		int tmp63 = x->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(217)
		int tmp64 = this->ff(tmp58,tmp59,tmp60,tmp61,tmp63,(int)7,(int)1770035416);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(217)
		a = tmp64;
		HX_STACK_LINE(218)
		int tmp65 = d;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(218)
		int tmp66 = a;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(218)
		int tmp67 = b;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(218)
		int tmp68 = c;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(218)
		int tmp69 = (i + (int)9);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(218)
		int tmp70 = x->__get(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(218)
		int tmp71 = this->ff(tmp65,tmp66,tmp67,tmp68,tmp70,(int)12,(int)-1958414417);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(218)
		d = tmp71;
		HX_STACK_LINE(219)
		int tmp72 = c;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(219)
		int tmp73 = d;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(219)
		int tmp74 = a;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(219)
		int tmp75 = b;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(219)
		int tmp76 = (i + (int)10);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(219)
		int tmp77 = x->__get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(219)
		int tmp78 = this->ff(tmp72,tmp73,tmp74,tmp75,tmp77,(int)17,(int)-42063);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(219)
		c = tmp78;
		HX_STACK_LINE(220)
		int tmp79 = b;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(220)
		int tmp80 = c;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(220)
		int tmp81 = d;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(220)
		int tmp82 = a;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(220)
		int tmp83 = (i + (int)11);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(220)
		int tmp84 = x->__get(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(220)
		int tmp85 = this->ff(tmp79,tmp80,tmp81,tmp82,tmp84,(int)22,(int)-1990404162);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(220)
		b = tmp85;
		HX_STACK_LINE(221)
		int tmp86 = a;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(221)
		int tmp87 = b;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(221)
		int tmp88 = c;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(221)
		int tmp89 = d;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(221)
		int tmp90 = (i + (int)12);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(221)
		int tmp91 = x->__get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(221)
		int tmp92 = this->ff(tmp86,tmp87,tmp88,tmp89,tmp91,(int)7,(int)1804603682);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(221)
		a = tmp92;
		HX_STACK_LINE(222)
		int tmp93 = d;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(222)
		int tmp94 = a;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(222)
		int tmp95 = b;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(222)
		int tmp96 = c;		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(222)
		int tmp97 = (i + (int)13);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(222)
		int tmp98 = x->__get(tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(222)
		int tmp99 = this->ff(tmp93,tmp94,tmp95,tmp96,tmp98,(int)12,(int)-40341101);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(222)
		d = tmp99;
		HX_STACK_LINE(223)
		int tmp100 = c;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(223)
		int tmp101 = d;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(223)
		int tmp102 = a;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(223)
		int tmp103 = b;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(223)
		int tmp104 = (i + (int)14);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(223)
		int tmp105 = x->__get(tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(223)
		int tmp106 = this->ff(tmp100,tmp101,tmp102,tmp103,tmp105,(int)17,(int)-1502002290);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(223)
		c = tmp106;
		HX_STACK_LINE(224)
		int tmp107 = b;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(224)
		int tmp108 = c;		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(224)
		int tmp109 = d;		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(224)
		int tmp110 = a;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(224)
		int tmp111 = (i + (int)15);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(224)
		int tmp112 = x->__get(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(224)
		int tmp113 = this->ff(tmp107,tmp108,tmp109,tmp110,tmp112,(int)22,(int)1236535329);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(224)
		b = tmp113;
		HX_STACK_LINE(225)
		int tmp114 = a;		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(225)
		int tmp115 = b;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(225)
		int tmp116 = c;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(225)
		int tmp117 = d;		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(225)
		int tmp118 = (i + (int)1);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(225)
		int tmp119 = x->__get(tmp118);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(225)
		int tmp120 = this->gg(tmp114,tmp115,tmp116,tmp117,tmp119,(int)5,(int)-165796510);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(225)
		a = tmp120;
		HX_STACK_LINE(226)
		int tmp121 = d;		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(226)
		int tmp122 = a;		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(226)
		int tmp123 = b;		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(226)
		int tmp124 = c;		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(226)
		int tmp125 = (i + (int)6);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(226)
		int tmp126 = x->__get(tmp125);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(226)
		int tmp127 = this->gg(tmp121,tmp122,tmp123,tmp124,tmp126,(int)9,(int)-1069501632);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(226)
		d = tmp127;
		HX_STACK_LINE(227)
		int tmp128 = c;		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(227)
		int tmp129 = d;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(227)
		int tmp130 = a;		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(227)
		int tmp131 = b;		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(227)
		int tmp132 = (i + (int)11);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(227)
		int tmp133 = x->__get(tmp132);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(227)
		int tmp134 = this->gg(tmp128,tmp129,tmp130,tmp131,tmp133,(int)14,(int)643717713);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(227)
		c = tmp134;
		HX_STACK_LINE(228)
		int tmp135 = b;		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(228)
		int tmp136 = c;		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(228)
		int tmp137 = d;		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(228)
		int tmp138 = a;		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(228)
		int tmp139 = i;		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(228)
		int tmp140 = x->__get(tmp139);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(228)
		int tmp141 = this->gg(tmp135,tmp136,tmp137,tmp138,tmp140,(int)20,(int)-373897302);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(228)
		b = tmp141;
		HX_STACK_LINE(229)
		int tmp142 = a;		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(229)
		int tmp143 = b;		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(229)
		int tmp144 = c;		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(229)
		int tmp145 = d;		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(229)
		int tmp146 = (i + (int)5);		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(229)
		int tmp147 = x->__get(tmp146);		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(229)
		int tmp148 = this->gg(tmp142,tmp143,tmp144,tmp145,tmp147,(int)5,(int)-701558691);		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(229)
		a = tmp148;
		HX_STACK_LINE(230)
		int tmp149 = d;		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(230)
		int tmp150 = a;		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(230)
		int tmp151 = b;		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(230)
		int tmp152 = c;		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(230)
		int tmp153 = (i + (int)10);		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(230)
		int tmp154 = x->__get(tmp153);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(230)
		int tmp155 = this->gg(tmp149,tmp150,tmp151,tmp152,tmp154,(int)9,(int)38016083);		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(230)
		d = tmp155;
		HX_STACK_LINE(231)
		int tmp156 = c;		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(231)
		int tmp157 = d;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(231)
		int tmp158 = a;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(231)
		int tmp159 = b;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(231)
		int tmp160 = (i + (int)15);		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(231)
		int tmp161 = x->__get(tmp160);		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(231)
		int tmp162 = this->gg(tmp156,tmp157,tmp158,tmp159,tmp161,(int)14,(int)-660478335);		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(231)
		c = tmp162;
		HX_STACK_LINE(232)
		int tmp163 = b;		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(232)
		int tmp164 = c;		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(232)
		int tmp165 = d;		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(232)
		int tmp166 = a;		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(232)
		int tmp167 = (i + (int)4);		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(232)
		int tmp168 = x->__get(tmp167);		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(232)
		int tmp169 = this->gg(tmp163,tmp164,tmp165,tmp166,tmp168,(int)20,(int)-405537848);		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(232)
		b = tmp169;
		HX_STACK_LINE(233)
		int tmp170 = a;		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(233)
		int tmp171 = b;		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(233)
		int tmp172 = c;		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(233)
		int tmp173 = d;		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(233)
		int tmp174 = (i + (int)9);		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(233)
		int tmp175 = x->__get(tmp174);		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(233)
		int tmp176 = this->gg(tmp170,tmp171,tmp172,tmp173,tmp175,(int)5,(int)568446438);		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(233)
		a = tmp176;
		HX_STACK_LINE(234)
		int tmp177 = d;		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(234)
		int tmp178 = a;		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(234)
		int tmp179 = b;		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(234)
		int tmp180 = c;		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(234)
		int tmp181 = (i + (int)14);		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(234)
		int tmp182 = x->__get(tmp181);		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(234)
		int tmp183 = this->gg(tmp177,tmp178,tmp179,tmp180,tmp182,(int)9,(int)-1019803690);		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(234)
		d = tmp183;
		HX_STACK_LINE(235)
		int tmp184 = c;		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(235)
		int tmp185 = d;		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(235)
		int tmp186 = a;		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(235)
		int tmp187 = b;		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(235)
		int tmp188 = (i + (int)3);		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(235)
		int tmp189 = x->__get(tmp188);		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(235)
		int tmp190 = this->gg(tmp184,tmp185,tmp186,tmp187,tmp189,(int)14,(int)-187363961);		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(235)
		c = tmp190;
		HX_STACK_LINE(236)
		int tmp191 = b;		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(236)
		int tmp192 = c;		HX_STACK_VAR(tmp192,"tmp192");
		HX_STACK_LINE(236)
		int tmp193 = d;		HX_STACK_VAR(tmp193,"tmp193");
		HX_STACK_LINE(236)
		int tmp194 = a;		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(236)
		int tmp195 = (i + (int)8);		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(236)
		int tmp196 = x->__get(tmp195);		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(236)
		int tmp197 = this->gg(tmp191,tmp192,tmp193,tmp194,tmp196,(int)20,(int)1163531501);		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(236)
		b = tmp197;
		HX_STACK_LINE(237)
		int tmp198 = a;		HX_STACK_VAR(tmp198,"tmp198");
		HX_STACK_LINE(237)
		int tmp199 = b;		HX_STACK_VAR(tmp199,"tmp199");
		HX_STACK_LINE(237)
		int tmp200 = c;		HX_STACK_VAR(tmp200,"tmp200");
		HX_STACK_LINE(237)
		int tmp201 = d;		HX_STACK_VAR(tmp201,"tmp201");
		HX_STACK_LINE(237)
		int tmp202 = (i + (int)13);		HX_STACK_VAR(tmp202,"tmp202");
		HX_STACK_LINE(237)
		int tmp203 = x->__get(tmp202);		HX_STACK_VAR(tmp203,"tmp203");
		HX_STACK_LINE(237)
		int tmp204 = this->gg(tmp198,tmp199,tmp200,tmp201,tmp203,(int)5,(int)-1444681467);		HX_STACK_VAR(tmp204,"tmp204");
		HX_STACK_LINE(237)
		a = tmp204;
		HX_STACK_LINE(238)
		int tmp205 = d;		HX_STACK_VAR(tmp205,"tmp205");
		HX_STACK_LINE(238)
		int tmp206 = a;		HX_STACK_VAR(tmp206,"tmp206");
		HX_STACK_LINE(238)
		int tmp207 = b;		HX_STACK_VAR(tmp207,"tmp207");
		HX_STACK_LINE(238)
		int tmp208 = c;		HX_STACK_VAR(tmp208,"tmp208");
		HX_STACK_LINE(238)
		int tmp209 = (i + (int)2);		HX_STACK_VAR(tmp209,"tmp209");
		HX_STACK_LINE(238)
		int tmp210 = x->__get(tmp209);		HX_STACK_VAR(tmp210,"tmp210");
		HX_STACK_LINE(238)
		int tmp211 = this->gg(tmp205,tmp206,tmp207,tmp208,tmp210,(int)9,(int)-51403784);		HX_STACK_VAR(tmp211,"tmp211");
		HX_STACK_LINE(238)
		d = tmp211;
		HX_STACK_LINE(239)
		int tmp212 = c;		HX_STACK_VAR(tmp212,"tmp212");
		HX_STACK_LINE(239)
		int tmp213 = d;		HX_STACK_VAR(tmp213,"tmp213");
		HX_STACK_LINE(239)
		int tmp214 = a;		HX_STACK_VAR(tmp214,"tmp214");
		HX_STACK_LINE(239)
		int tmp215 = b;		HX_STACK_VAR(tmp215,"tmp215");
		HX_STACK_LINE(239)
		int tmp216 = (i + (int)7);		HX_STACK_VAR(tmp216,"tmp216");
		HX_STACK_LINE(239)
		int tmp217 = x->__get(tmp216);		HX_STACK_VAR(tmp217,"tmp217");
		HX_STACK_LINE(239)
		int tmp218 = this->gg(tmp212,tmp213,tmp214,tmp215,tmp217,(int)14,(int)1735328473);		HX_STACK_VAR(tmp218,"tmp218");
		HX_STACK_LINE(239)
		c = tmp218;
		HX_STACK_LINE(240)
		int tmp219 = b;		HX_STACK_VAR(tmp219,"tmp219");
		HX_STACK_LINE(240)
		int tmp220 = c;		HX_STACK_VAR(tmp220,"tmp220");
		HX_STACK_LINE(240)
		int tmp221 = d;		HX_STACK_VAR(tmp221,"tmp221");
		HX_STACK_LINE(240)
		int tmp222 = a;		HX_STACK_VAR(tmp222,"tmp222");
		HX_STACK_LINE(240)
		int tmp223 = (i + (int)12);		HX_STACK_VAR(tmp223,"tmp223");
		HX_STACK_LINE(240)
		int tmp224 = x->__get(tmp223);		HX_STACK_VAR(tmp224,"tmp224");
		HX_STACK_LINE(240)
		int tmp225 = this->gg(tmp219,tmp220,tmp221,tmp222,tmp224,(int)20,(int)-1926607734);		HX_STACK_VAR(tmp225,"tmp225");
		HX_STACK_LINE(240)
		b = tmp225;
		HX_STACK_LINE(241)
		int tmp226 = a;		HX_STACK_VAR(tmp226,"tmp226");
		HX_STACK_LINE(241)
		int tmp227 = b;		HX_STACK_VAR(tmp227,"tmp227");
		HX_STACK_LINE(241)
		int tmp228 = c;		HX_STACK_VAR(tmp228,"tmp228");
		HX_STACK_LINE(241)
		int tmp229 = d;		HX_STACK_VAR(tmp229,"tmp229");
		HX_STACK_LINE(241)
		int tmp230 = (i + (int)5);		HX_STACK_VAR(tmp230,"tmp230");
		HX_STACK_LINE(241)
		int tmp231 = x->__get(tmp230);		HX_STACK_VAR(tmp231,"tmp231");
		HX_STACK_LINE(241)
		int tmp232 = this->hh(tmp226,tmp227,tmp228,tmp229,tmp231,(int)4,(int)-378558);		HX_STACK_VAR(tmp232,"tmp232");
		HX_STACK_LINE(241)
		a = tmp232;
		HX_STACK_LINE(242)
		int tmp233 = d;		HX_STACK_VAR(tmp233,"tmp233");
		HX_STACK_LINE(242)
		int tmp234 = a;		HX_STACK_VAR(tmp234,"tmp234");
		HX_STACK_LINE(242)
		int tmp235 = b;		HX_STACK_VAR(tmp235,"tmp235");
		HX_STACK_LINE(242)
		int tmp236 = c;		HX_STACK_VAR(tmp236,"tmp236");
		HX_STACK_LINE(242)
		int tmp237 = (i + (int)8);		HX_STACK_VAR(tmp237,"tmp237");
		HX_STACK_LINE(242)
		int tmp238 = x->__get(tmp237);		HX_STACK_VAR(tmp238,"tmp238");
		HX_STACK_LINE(242)
		int tmp239 = this->hh(tmp233,tmp234,tmp235,tmp236,tmp238,(int)11,(int)-2022574463);		HX_STACK_VAR(tmp239,"tmp239");
		HX_STACK_LINE(242)
		d = tmp239;
		HX_STACK_LINE(243)
		int tmp240 = c;		HX_STACK_VAR(tmp240,"tmp240");
		HX_STACK_LINE(243)
		int tmp241 = d;		HX_STACK_VAR(tmp241,"tmp241");
		HX_STACK_LINE(243)
		int tmp242 = a;		HX_STACK_VAR(tmp242,"tmp242");
		HX_STACK_LINE(243)
		int tmp243 = b;		HX_STACK_VAR(tmp243,"tmp243");
		HX_STACK_LINE(243)
		int tmp244 = (i + (int)11);		HX_STACK_VAR(tmp244,"tmp244");
		HX_STACK_LINE(243)
		int tmp245 = x->__get(tmp244);		HX_STACK_VAR(tmp245,"tmp245");
		HX_STACK_LINE(243)
		int tmp246 = this->hh(tmp240,tmp241,tmp242,tmp243,tmp245,(int)16,(int)1839030562);		HX_STACK_VAR(tmp246,"tmp246");
		HX_STACK_LINE(243)
		c = tmp246;
		HX_STACK_LINE(244)
		int tmp247 = b;		HX_STACK_VAR(tmp247,"tmp247");
		HX_STACK_LINE(244)
		int tmp248 = c;		HX_STACK_VAR(tmp248,"tmp248");
		HX_STACK_LINE(244)
		int tmp249 = d;		HX_STACK_VAR(tmp249,"tmp249");
		HX_STACK_LINE(244)
		int tmp250 = a;		HX_STACK_VAR(tmp250,"tmp250");
		HX_STACK_LINE(244)
		int tmp251 = (i + (int)14);		HX_STACK_VAR(tmp251,"tmp251");
		HX_STACK_LINE(244)
		int tmp252 = x->__get(tmp251);		HX_STACK_VAR(tmp252,"tmp252");
		HX_STACK_LINE(244)
		int tmp253 = this->hh(tmp247,tmp248,tmp249,tmp250,tmp252,(int)23,(int)-35309556);		HX_STACK_VAR(tmp253,"tmp253");
		HX_STACK_LINE(244)
		b = tmp253;
		HX_STACK_LINE(245)
		int tmp254 = a;		HX_STACK_VAR(tmp254,"tmp254");
		HX_STACK_LINE(245)
		int tmp255 = b;		HX_STACK_VAR(tmp255,"tmp255");
		HX_STACK_LINE(245)
		int tmp256 = c;		HX_STACK_VAR(tmp256,"tmp256");
		HX_STACK_LINE(245)
		int tmp257 = d;		HX_STACK_VAR(tmp257,"tmp257");
		HX_STACK_LINE(245)
		int tmp258 = (i + (int)1);		HX_STACK_VAR(tmp258,"tmp258");
		HX_STACK_LINE(245)
		int tmp259 = x->__get(tmp258);		HX_STACK_VAR(tmp259,"tmp259");
		HX_STACK_LINE(245)
		int tmp260 = this->hh(tmp254,tmp255,tmp256,tmp257,tmp259,(int)4,(int)-1530992060);		HX_STACK_VAR(tmp260,"tmp260");
		HX_STACK_LINE(245)
		a = tmp260;
		HX_STACK_LINE(246)
		int tmp261 = d;		HX_STACK_VAR(tmp261,"tmp261");
		HX_STACK_LINE(246)
		int tmp262 = a;		HX_STACK_VAR(tmp262,"tmp262");
		HX_STACK_LINE(246)
		int tmp263 = b;		HX_STACK_VAR(tmp263,"tmp263");
		HX_STACK_LINE(246)
		int tmp264 = c;		HX_STACK_VAR(tmp264,"tmp264");
		HX_STACK_LINE(246)
		int tmp265 = (i + (int)4);		HX_STACK_VAR(tmp265,"tmp265");
		HX_STACK_LINE(246)
		int tmp266 = x->__get(tmp265);		HX_STACK_VAR(tmp266,"tmp266");
		HX_STACK_LINE(246)
		int tmp267 = this->hh(tmp261,tmp262,tmp263,tmp264,tmp266,(int)11,(int)1272893353);		HX_STACK_VAR(tmp267,"tmp267");
		HX_STACK_LINE(246)
		d = tmp267;
		HX_STACK_LINE(247)
		int tmp268 = c;		HX_STACK_VAR(tmp268,"tmp268");
		HX_STACK_LINE(247)
		int tmp269 = d;		HX_STACK_VAR(tmp269,"tmp269");
		HX_STACK_LINE(247)
		int tmp270 = a;		HX_STACK_VAR(tmp270,"tmp270");
		HX_STACK_LINE(247)
		int tmp271 = b;		HX_STACK_VAR(tmp271,"tmp271");
		HX_STACK_LINE(247)
		int tmp272 = (i + (int)7);		HX_STACK_VAR(tmp272,"tmp272");
		HX_STACK_LINE(247)
		int tmp273 = x->__get(tmp272);		HX_STACK_VAR(tmp273,"tmp273");
		HX_STACK_LINE(247)
		int tmp274 = this->hh(tmp268,tmp269,tmp270,tmp271,tmp273,(int)16,(int)-155497632);		HX_STACK_VAR(tmp274,"tmp274");
		HX_STACK_LINE(247)
		c = tmp274;
		HX_STACK_LINE(248)
		int tmp275 = b;		HX_STACK_VAR(tmp275,"tmp275");
		HX_STACK_LINE(248)
		int tmp276 = c;		HX_STACK_VAR(tmp276,"tmp276");
		HX_STACK_LINE(248)
		int tmp277 = d;		HX_STACK_VAR(tmp277,"tmp277");
		HX_STACK_LINE(248)
		int tmp278 = a;		HX_STACK_VAR(tmp278,"tmp278");
		HX_STACK_LINE(248)
		int tmp279 = (i + (int)10);		HX_STACK_VAR(tmp279,"tmp279");
		HX_STACK_LINE(248)
		int tmp280 = x->__get(tmp279);		HX_STACK_VAR(tmp280,"tmp280");
		HX_STACK_LINE(248)
		int tmp281 = this->hh(tmp275,tmp276,tmp277,tmp278,tmp280,(int)23,(int)-1094730640);		HX_STACK_VAR(tmp281,"tmp281");
		HX_STACK_LINE(248)
		b = tmp281;
		HX_STACK_LINE(249)
		int tmp282 = a;		HX_STACK_VAR(tmp282,"tmp282");
		HX_STACK_LINE(249)
		int tmp283 = b;		HX_STACK_VAR(tmp283,"tmp283");
		HX_STACK_LINE(249)
		int tmp284 = c;		HX_STACK_VAR(tmp284,"tmp284");
		HX_STACK_LINE(249)
		int tmp285 = d;		HX_STACK_VAR(tmp285,"tmp285");
		HX_STACK_LINE(249)
		int tmp286 = (i + (int)13);		HX_STACK_VAR(tmp286,"tmp286");
		HX_STACK_LINE(249)
		int tmp287 = x->__get(tmp286);		HX_STACK_VAR(tmp287,"tmp287");
		HX_STACK_LINE(249)
		int tmp288 = this->hh(tmp282,tmp283,tmp284,tmp285,tmp287,(int)4,(int)681279174);		HX_STACK_VAR(tmp288,"tmp288");
		HX_STACK_LINE(249)
		a = tmp288;
		HX_STACK_LINE(250)
		int tmp289 = d;		HX_STACK_VAR(tmp289,"tmp289");
		HX_STACK_LINE(250)
		int tmp290 = a;		HX_STACK_VAR(tmp290,"tmp290");
		HX_STACK_LINE(250)
		int tmp291 = b;		HX_STACK_VAR(tmp291,"tmp291");
		HX_STACK_LINE(250)
		int tmp292 = c;		HX_STACK_VAR(tmp292,"tmp292");
		HX_STACK_LINE(250)
		int tmp293 = i;		HX_STACK_VAR(tmp293,"tmp293");
		HX_STACK_LINE(250)
		int tmp294 = x->__get(tmp293);		HX_STACK_VAR(tmp294,"tmp294");
		HX_STACK_LINE(250)
		int tmp295 = this->hh(tmp289,tmp290,tmp291,tmp292,tmp294,(int)11,(int)-358537222);		HX_STACK_VAR(tmp295,"tmp295");
		HX_STACK_LINE(250)
		d = tmp295;
		HX_STACK_LINE(251)
		int tmp296 = c;		HX_STACK_VAR(tmp296,"tmp296");
		HX_STACK_LINE(251)
		int tmp297 = d;		HX_STACK_VAR(tmp297,"tmp297");
		HX_STACK_LINE(251)
		int tmp298 = a;		HX_STACK_VAR(tmp298,"tmp298");
		HX_STACK_LINE(251)
		int tmp299 = b;		HX_STACK_VAR(tmp299,"tmp299");
		HX_STACK_LINE(251)
		int tmp300 = (i + (int)3);		HX_STACK_VAR(tmp300,"tmp300");
		HX_STACK_LINE(251)
		int tmp301 = x->__get(tmp300);		HX_STACK_VAR(tmp301,"tmp301");
		HX_STACK_LINE(251)
		int tmp302 = this->hh(tmp296,tmp297,tmp298,tmp299,tmp301,(int)16,(int)-722521979);		HX_STACK_VAR(tmp302,"tmp302");
		HX_STACK_LINE(251)
		c = tmp302;
		HX_STACK_LINE(252)
		int tmp303 = b;		HX_STACK_VAR(tmp303,"tmp303");
		HX_STACK_LINE(252)
		int tmp304 = c;		HX_STACK_VAR(tmp304,"tmp304");
		HX_STACK_LINE(252)
		int tmp305 = d;		HX_STACK_VAR(tmp305,"tmp305");
		HX_STACK_LINE(252)
		int tmp306 = a;		HX_STACK_VAR(tmp306,"tmp306");
		HX_STACK_LINE(252)
		int tmp307 = (i + (int)6);		HX_STACK_VAR(tmp307,"tmp307");
		HX_STACK_LINE(252)
		int tmp308 = x->__get(tmp307);		HX_STACK_VAR(tmp308,"tmp308");
		HX_STACK_LINE(252)
		int tmp309 = this->hh(tmp303,tmp304,tmp305,tmp306,tmp308,(int)23,(int)76029189);		HX_STACK_VAR(tmp309,"tmp309");
		HX_STACK_LINE(252)
		b = tmp309;
		HX_STACK_LINE(253)
		int tmp310 = a;		HX_STACK_VAR(tmp310,"tmp310");
		HX_STACK_LINE(253)
		int tmp311 = b;		HX_STACK_VAR(tmp311,"tmp311");
		HX_STACK_LINE(253)
		int tmp312 = c;		HX_STACK_VAR(tmp312,"tmp312");
		HX_STACK_LINE(253)
		int tmp313 = d;		HX_STACK_VAR(tmp313,"tmp313");
		HX_STACK_LINE(253)
		int tmp314 = (i + (int)9);		HX_STACK_VAR(tmp314,"tmp314");
		HX_STACK_LINE(253)
		int tmp315 = x->__get(tmp314);		HX_STACK_VAR(tmp315,"tmp315");
		HX_STACK_LINE(253)
		int tmp316 = this->hh(tmp310,tmp311,tmp312,tmp313,tmp315,(int)4,(int)-640364487);		HX_STACK_VAR(tmp316,"tmp316");
		HX_STACK_LINE(253)
		a = tmp316;
		HX_STACK_LINE(254)
		int tmp317 = d;		HX_STACK_VAR(tmp317,"tmp317");
		HX_STACK_LINE(254)
		int tmp318 = a;		HX_STACK_VAR(tmp318,"tmp318");
		HX_STACK_LINE(254)
		int tmp319 = b;		HX_STACK_VAR(tmp319,"tmp319");
		HX_STACK_LINE(254)
		int tmp320 = c;		HX_STACK_VAR(tmp320,"tmp320");
		HX_STACK_LINE(254)
		int tmp321 = (i + (int)12);		HX_STACK_VAR(tmp321,"tmp321");
		HX_STACK_LINE(254)
		int tmp322 = x->__get(tmp321);		HX_STACK_VAR(tmp322,"tmp322");
		HX_STACK_LINE(254)
		int tmp323 = this->hh(tmp317,tmp318,tmp319,tmp320,tmp322,(int)11,(int)-421815835);		HX_STACK_VAR(tmp323,"tmp323");
		HX_STACK_LINE(254)
		d = tmp323;
		HX_STACK_LINE(255)
		int tmp324 = c;		HX_STACK_VAR(tmp324,"tmp324");
		HX_STACK_LINE(255)
		int tmp325 = d;		HX_STACK_VAR(tmp325,"tmp325");
		HX_STACK_LINE(255)
		int tmp326 = a;		HX_STACK_VAR(tmp326,"tmp326");
		HX_STACK_LINE(255)
		int tmp327 = b;		HX_STACK_VAR(tmp327,"tmp327");
		HX_STACK_LINE(255)
		int tmp328 = (i + (int)15);		HX_STACK_VAR(tmp328,"tmp328");
		HX_STACK_LINE(255)
		int tmp329 = x->__get(tmp328);		HX_STACK_VAR(tmp329,"tmp329");
		HX_STACK_LINE(255)
		int tmp330 = this->hh(tmp324,tmp325,tmp326,tmp327,tmp329,(int)16,(int)530742520);		HX_STACK_VAR(tmp330,"tmp330");
		HX_STACK_LINE(255)
		c = tmp330;
		HX_STACK_LINE(256)
		int tmp331 = b;		HX_STACK_VAR(tmp331,"tmp331");
		HX_STACK_LINE(256)
		int tmp332 = c;		HX_STACK_VAR(tmp332,"tmp332");
		HX_STACK_LINE(256)
		int tmp333 = d;		HX_STACK_VAR(tmp333,"tmp333");
		HX_STACK_LINE(256)
		int tmp334 = a;		HX_STACK_VAR(tmp334,"tmp334");
		HX_STACK_LINE(256)
		int tmp335 = (i + (int)2);		HX_STACK_VAR(tmp335,"tmp335");
		HX_STACK_LINE(256)
		int tmp336 = x->__get(tmp335);		HX_STACK_VAR(tmp336,"tmp336");
		HX_STACK_LINE(256)
		int tmp337 = this->hh(tmp331,tmp332,tmp333,tmp334,tmp336,(int)23,(int)-995338651);		HX_STACK_VAR(tmp337,"tmp337");
		HX_STACK_LINE(256)
		b = tmp337;
		HX_STACK_LINE(257)
		int tmp338 = a;		HX_STACK_VAR(tmp338,"tmp338");
		HX_STACK_LINE(257)
		int tmp339 = b;		HX_STACK_VAR(tmp339,"tmp339");
		HX_STACK_LINE(257)
		int tmp340 = c;		HX_STACK_VAR(tmp340,"tmp340");
		HX_STACK_LINE(257)
		int tmp341 = d;		HX_STACK_VAR(tmp341,"tmp341");
		HX_STACK_LINE(257)
		int tmp342 = i;		HX_STACK_VAR(tmp342,"tmp342");
		HX_STACK_LINE(257)
		int tmp343 = x->__get(tmp342);		HX_STACK_VAR(tmp343,"tmp343");
		HX_STACK_LINE(257)
		int tmp344 = this->ii(tmp338,tmp339,tmp340,tmp341,tmp343,(int)6,(int)-198630844);		HX_STACK_VAR(tmp344,"tmp344");
		HX_STACK_LINE(257)
		a = tmp344;
		HX_STACK_LINE(258)
		int tmp345 = d;		HX_STACK_VAR(tmp345,"tmp345");
		HX_STACK_LINE(258)
		int tmp346 = a;		HX_STACK_VAR(tmp346,"tmp346");
		HX_STACK_LINE(258)
		int tmp347 = b;		HX_STACK_VAR(tmp347,"tmp347");
		HX_STACK_LINE(258)
		int tmp348 = c;		HX_STACK_VAR(tmp348,"tmp348");
		HX_STACK_LINE(258)
		int tmp349 = (i + (int)7);		HX_STACK_VAR(tmp349,"tmp349");
		HX_STACK_LINE(258)
		int tmp350 = x->__get(tmp349);		HX_STACK_VAR(tmp350,"tmp350");
		HX_STACK_LINE(258)
		int tmp351 = this->ii(tmp345,tmp346,tmp347,tmp348,tmp350,(int)10,(int)1126891415);		HX_STACK_VAR(tmp351,"tmp351");
		HX_STACK_LINE(258)
		d = tmp351;
		HX_STACK_LINE(259)
		int tmp352 = c;		HX_STACK_VAR(tmp352,"tmp352");
		HX_STACK_LINE(259)
		int tmp353 = d;		HX_STACK_VAR(tmp353,"tmp353");
		HX_STACK_LINE(259)
		int tmp354 = a;		HX_STACK_VAR(tmp354,"tmp354");
		HX_STACK_LINE(259)
		int tmp355 = b;		HX_STACK_VAR(tmp355,"tmp355");
		HX_STACK_LINE(259)
		int tmp356 = (i + (int)14);		HX_STACK_VAR(tmp356,"tmp356");
		HX_STACK_LINE(259)
		int tmp357 = x->__get(tmp356);		HX_STACK_VAR(tmp357,"tmp357");
		HX_STACK_LINE(259)
		int tmp358 = this->ii(tmp352,tmp353,tmp354,tmp355,tmp357,(int)15,(int)-1416354905);		HX_STACK_VAR(tmp358,"tmp358");
		HX_STACK_LINE(259)
		c = tmp358;
		HX_STACK_LINE(260)
		int tmp359 = b;		HX_STACK_VAR(tmp359,"tmp359");
		HX_STACK_LINE(260)
		int tmp360 = c;		HX_STACK_VAR(tmp360,"tmp360");
		HX_STACK_LINE(260)
		int tmp361 = d;		HX_STACK_VAR(tmp361,"tmp361");
		HX_STACK_LINE(260)
		int tmp362 = a;		HX_STACK_VAR(tmp362,"tmp362");
		HX_STACK_LINE(260)
		int tmp363 = (i + (int)5);		HX_STACK_VAR(tmp363,"tmp363");
		HX_STACK_LINE(260)
		int tmp364 = x->__get(tmp363);		HX_STACK_VAR(tmp364,"tmp364");
		HX_STACK_LINE(260)
		int tmp365 = this->ii(tmp359,tmp360,tmp361,tmp362,tmp364,(int)21,(int)-57434055);		HX_STACK_VAR(tmp365,"tmp365");
		HX_STACK_LINE(260)
		b = tmp365;
		HX_STACK_LINE(261)
		int tmp366 = a;		HX_STACK_VAR(tmp366,"tmp366");
		HX_STACK_LINE(261)
		int tmp367 = b;		HX_STACK_VAR(tmp367,"tmp367");
		HX_STACK_LINE(261)
		int tmp368 = c;		HX_STACK_VAR(tmp368,"tmp368");
		HX_STACK_LINE(261)
		int tmp369 = d;		HX_STACK_VAR(tmp369,"tmp369");
		HX_STACK_LINE(261)
		int tmp370 = (i + (int)12);		HX_STACK_VAR(tmp370,"tmp370");
		HX_STACK_LINE(261)
		int tmp371 = x->__get(tmp370);		HX_STACK_VAR(tmp371,"tmp371");
		HX_STACK_LINE(261)
		int tmp372 = this->ii(tmp366,tmp367,tmp368,tmp369,tmp371,(int)6,(int)1700485571);		HX_STACK_VAR(tmp372,"tmp372");
		HX_STACK_LINE(261)
		a = tmp372;
		HX_STACK_LINE(262)
		int tmp373 = d;		HX_STACK_VAR(tmp373,"tmp373");
		HX_STACK_LINE(262)
		int tmp374 = a;		HX_STACK_VAR(tmp374,"tmp374");
		HX_STACK_LINE(262)
		int tmp375 = b;		HX_STACK_VAR(tmp375,"tmp375");
		HX_STACK_LINE(262)
		int tmp376 = c;		HX_STACK_VAR(tmp376,"tmp376");
		HX_STACK_LINE(262)
		int tmp377 = (i + (int)3);		HX_STACK_VAR(tmp377,"tmp377");
		HX_STACK_LINE(262)
		int tmp378 = x->__get(tmp377);		HX_STACK_VAR(tmp378,"tmp378");
		HX_STACK_LINE(262)
		int tmp379 = this->ii(tmp373,tmp374,tmp375,tmp376,tmp378,(int)10,(int)-1894986606);		HX_STACK_VAR(tmp379,"tmp379");
		HX_STACK_LINE(262)
		d = tmp379;
		HX_STACK_LINE(263)
		int tmp380 = c;		HX_STACK_VAR(tmp380,"tmp380");
		HX_STACK_LINE(263)
		int tmp381 = d;		HX_STACK_VAR(tmp381,"tmp381");
		HX_STACK_LINE(263)
		int tmp382 = a;		HX_STACK_VAR(tmp382,"tmp382");
		HX_STACK_LINE(263)
		int tmp383 = b;		HX_STACK_VAR(tmp383,"tmp383");
		HX_STACK_LINE(263)
		int tmp384 = (i + (int)10);		HX_STACK_VAR(tmp384,"tmp384");
		HX_STACK_LINE(263)
		int tmp385 = x->__get(tmp384);		HX_STACK_VAR(tmp385,"tmp385");
		HX_STACK_LINE(263)
		int tmp386 = this->ii(tmp380,tmp381,tmp382,tmp383,tmp385,(int)15,(int)-1051523);		HX_STACK_VAR(tmp386,"tmp386");
		HX_STACK_LINE(263)
		c = tmp386;
		HX_STACK_LINE(264)
		int tmp387 = b;		HX_STACK_VAR(tmp387,"tmp387");
		HX_STACK_LINE(264)
		int tmp388 = c;		HX_STACK_VAR(tmp388,"tmp388");
		HX_STACK_LINE(264)
		int tmp389 = d;		HX_STACK_VAR(tmp389,"tmp389");
		HX_STACK_LINE(264)
		int tmp390 = a;		HX_STACK_VAR(tmp390,"tmp390");
		HX_STACK_LINE(264)
		int tmp391 = (i + (int)1);		HX_STACK_VAR(tmp391,"tmp391");
		HX_STACK_LINE(264)
		int tmp392 = x->__get(tmp391);		HX_STACK_VAR(tmp392,"tmp392");
		HX_STACK_LINE(264)
		int tmp393 = this->ii(tmp387,tmp388,tmp389,tmp390,tmp392,(int)21,(int)-2054922799);		HX_STACK_VAR(tmp393,"tmp393");
		HX_STACK_LINE(264)
		b = tmp393;
		HX_STACK_LINE(265)
		int tmp394 = a;		HX_STACK_VAR(tmp394,"tmp394");
		HX_STACK_LINE(265)
		int tmp395 = b;		HX_STACK_VAR(tmp395,"tmp395");
		HX_STACK_LINE(265)
		int tmp396 = c;		HX_STACK_VAR(tmp396,"tmp396");
		HX_STACK_LINE(265)
		int tmp397 = d;		HX_STACK_VAR(tmp397,"tmp397");
		HX_STACK_LINE(265)
		int tmp398 = (i + (int)8);		HX_STACK_VAR(tmp398,"tmp398");
		HX_STACK_LINE(265)
		int tmp399 = x->__get(tmp398);		HX_STACK_VAR(tmp399,"tmp399");
		HX_STACK_LINE(265)
		int tmp400 = this->ii(tmp394,tmp395,tmp396,tmp397,tmp399,(int)6,(int)1873313359);		HX_STACK_VAR(tmp400,"tmp400");
		HX_STACK_LINE(265)
		a = tmp400;
		HX_STACK_LINE(266)
		int tmp401 = d;		HX_STACK_VAR(tmp401,"tmp401");
		HX_STACK_LINE(266)
		int tmp402 = a;		HX_STACK_VAR(tmp402,"tmp402");
		HX_STACK_LINE(266)
		int tmp403 = b;		HX_STACK_VAR(tmp403,"tmp403");
		HX_STACK_LINE(266)
		int tmp404 = c;		HX_STACK_VAR(tmp404,"tmp404");
		HX_STACK_LINE(266)
		int tmp405 = (i + (int)15);		HX_STACK_VAR(tmp405,"tmp405");
		HX_STACK_LINE(266)
		int tmp406 = x->__get(tmp405);		HX_STACK_VAR(tmp406,"tmp406");
		HX_STACK_LINE(266)
		int tmp407 = this->ii(tmp401,tmp402,tmp403,tmp404,tmp406,(int)10,(int)-30611744);		HX_STACK_VAR(tmp407,"tmp407");
		HX_STACK_LINE(266)
		d = tmp407;
		HX_STACK_LINE(267)
		int tmp408 = c;		HX_STACK_VAR(tmp408,"tmp408");
		HX_STACK_LINE(267)
		int tmp409 = d;		HX_STACK_VAR(tmp409,"tmp409");
		HX_STACK_LINE(267)
		int tmp410 = a;		HX_STACK_VAR(tmp410,"tmp410");
		HX_STACK_LINE(267)
		int tmp411 = b;		HX_STACK_VAR(tmp411,"tmp411");
		HX_STACK_LINE(267)
		int tmp412 = (i + (int)6);		HX_STACK_VAR(tmp412,"tmp412");
		HX_STACK_LINE(267)
		int tmp413 = x->__get(tmp412);		HX_STACK_VAR(tmp413,"tmp413");
		HX_STACK_LINE(267)
		int tmp414 = this->ii(tmp408,tmp409,tmp410,tmp411,tmp413,(int)15,(int)-1560198380);		HX_STACK_VAR(tmp414,"tmp414");
		HX_STACK_LINE(267)
		c = tmp414;
		HX_STACK_LINE(268)
		int tmp415 = b;		HX_STACK_VAR(tmp415,"tmp415");
		HX_STACK_LINE(268)
		int tmp416 = c;		HX_STACK_VAR(tmp416,"tmp416");
		HX_STACK_LINE(268)
		int tmp417 = d;		HX_STACK_VAR(tmp417,"tmp417");
		HX_STACK_LINE(268)
		int tmp418 = a;		HX_STACK_VAR(tmp418,"tmp418");
		HX_STACK_LINE(268)
		int tmp419 = (i + (int)13);		HX_STACK_VAR(tmp419,"tmp419");
		HX_STACK_LINE(268)
		int tmp420 = x->__get(tmp419);		HX_STACK_VAR(tmp420,"tmp420");
		HX_STACK_LINE(268)
		int tmp421 = this->ii(tmp415,tmp416,tmp417,tmp418,tmp420,(int)21,(int)1309151649);		HX_STACK_VAR(tmp421,"tmp421");
		HX_STACK_LINE(268)
		b = tmp421;
		HX_STACK_LINE(269)
		int tmp422 = a;		HX_STACK_VAR(tmp422,"tmp422");
		HX_STACK_LINE(269)
		int tmp423 = b;		HX_STACK_VAR(tmp423,"tmp423");
		HX_STACK_LINE(269)
		int tmp424 = c;		HX_STACK_VAR(tmp424,"tmp424");
		HX_STACK_LINE(269)
		int tmp425 = d;		HX_STACK_VAR(tmp425,"tmp425");
		HX_STACK_LINE(269)
		int tmp426 = (i + (int)4);		HX_STACK_VAR(tmp426,"tmp426");
		HX_STACK_LINE(269)
		int tmp427 = x->__get(tmp426);		HX_STACK_VAR(tmp427,"tmp427");
		HX_STACK_LINE(269)
		int tmp428 = this->ii(tmp422,tmp423,tmp424,tmp425,tmp427,(int)6,(int)-145523070);		HX_STACK_VAR(tmp428,"tmp428");
		HX_STACK_LINE(269)
		a = tmp428;
		HX_STACK_LINE(270)
		int tmp429 = d;		HX_STACK_VAR(tmp429,"tmp429");
		HX_STACK_LINE(270)
		int tmp430 = a;		HX_STACK_VAR(tmp430,"tmp430");
		HX_STACK_LINE(270)
		int tmp431 = b;		HX_STACK_VAR(tmp431,"tmp431");
		HX_STACK_LINE(270)
		int tmp432 = c;		HX_STACK_VAR(tmp432,"tmp432");
		HX_STACK_LINE(270)
		int tmp433 = (i + (int)11);		HX_STACK_VAR(tmp433,"tmp433");
		HX_STACK_LINE(270)
		int tmp434 = x->__get(tmp433);		HX_STACK_VAR(tmp434,"tmp434");
		HX_STACK_LINE(270)
		int tmp435 = this->ii(tmp429,tmp430,tmp431,tmp432,tmp434,(int)10,(int)-1120210379);		HX_STACK_VAR(tmp435,"tmp435");
		HX_STACK_LINE(270)
		d = tmp435;
		HX_STACK_LINE(271)
		int tmp436 = c;		HX_STACK_VAR(tmp436,"tmp436");
		HX_STACK_LINE(271)
		int tmp437 = d;		HX_STACK_VAR(tmp437,"tmp437");
		HX_STACK_LINE(271)
		int tmp438 = a;		HX_STACK_VAR(tmp438,"tmp438");
		HX_STACK_LINE(271)
		int tmp439 = b;		HX_STACK_VAR(tmp439,"tmp439");
		HX_STACK_LINE(271)
		int tmp440 = (i + (int)2);		HX_STACK_VAR(tmp440,"tmp440");
		HX_STACK_LINE(271)
		int tmp441 = x->__get(tmp440);		HX_STACK_VAR(tmp441,"tmp441");
		HX_STACK_LINE(271)
		int tmp442 = this->ii(tmp436,tmp437,tmp438,tmp439,tmp441,(int)15,(int)718787259);		HX_STACK_VAR(tmp442,"tmp442");
		HX_STACK_LINE(271)
		c = tmp442;
		HX_STACK_LINE(272)
		int tmp443 = b;		HX_STACK_VAR(tmp443,"tmp443");
		HX_STACK_LINE(272)
		int tmp444 = c;		HX_STACK_VAR(tmp444,"tmp444");
		HX_STACK_LINE(272)
		int tmp445 = d;		HX_STACK_VAR(tmp445,"tmp445");
		HX_STACK_LINE(272)
		int tmp446 = a;		HX_STACK_VAR(tmp446,"tmp446");
		HX_STACK_LINE(272)
		int tmp447 = (i + (int)9);		HX_STACK_VAR(tmp447,"tmp447");
		HX_STACK_LINE(272)
		int tmp448 = x->__get(tmp447);		HX_STACK_VAR(tmp448,"tmp448");
		HX_STACK_LINE(272)
		int tmp449 = this->ii(tmp443,tmp444,tmp445,tmp446,tmp448,(int)21,(int)-343485551);		HX_STACK_VAR(tmp449,"tmp449");
		HX_STACK_LINE(272)
		b = tmp449;
		HX_STACK_LINE(274)
		int tmp450 = a;		HX_STACK_VAR(tmp450,"tmp450");
		HX_STACK_LINE(274)
		int tmp451 = olda;		HX_STACK_VAR(tmp451,"tmp451");
		HX_STACK_LINE(274)
		int tmp452 = this->addme(tmp450,tmp451);		HX_STACK_VAR(tmp452,"tmp452");
		HX_STACK_LINE(274)
		a = tmp452;
		HX_STACK_LINE(275)
		int tmp453 = b;		HX_STACK_VAR(tmp453,"tmp453");
		HX_STACK_LINE(275)
		int tmp454 = oldb;		HX_STACK_VAR(tmp454,"tmp454");
		HX_STACK_LINE(275)
		int tmp455 = this->addme(tmp453,tmp454);		HX_STACK_VAR(tmp455,"tmp455");
		HX_STACK_LINE(275)
		b = tmp455;
		HX_STACK_LINE(276)
		int tmp456 = c;		HX_STACK_VAR(tmp456,"tmp456");
		HX_STACK_LINE(276)
		int tmp457 = oldc;		HX_STACK_VAR(tmp457,"tmp457");
		HX_STACK_LINE(276)
		int tmp458 = this->addme(tmp456,tmp457);		HX_STACK_VAR(tmp458,"tmp458");
		HX_STACK_LINE(276)
		c = tmp458;
		HX_STACK_LINE(277)
		int tmp459 = d;		HX_STACK_VAR(tmp459,"tmp459");
		HX_STACK_LINE(277)
		int tmp460 = oldd;		HX_STACK_VAR(tmp460,"tmp460");
		HX_STACK_LINE(277)
		int tmp461 = this->addme(tmp459,tmp460);		HX_STACK_VAR(tmp461,"tmp461");
		HX_STACK_LINE(277)
		d = tmp461;
		HX_STACK_LINE(279)
		hx::AddEq(i,(int)16);
	}
	HX_STACK_LINE(281)
	return Array_obj< int >::__new().Add(a).Add(b).Add(c).Add(d);
}


HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,doEncode,return )

::String Md5_obj::encode( ::String s){
	HX_STACK_FRAME("haxe.crypto.Md5","encode",0x979f4b6b,"haxe.crypto.Md5.encode","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",29,0xa59e361e)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(35)
	::haxe::crypto::Md5 tmp = ::haxe::crypto::Md5_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	::haxe::crypto::Md5 m = tmp;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(36)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	Array< int > h = m->doEncode(::haxe::crypto::Md5_obj::str2blks(tmp1));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(37)
	::String tmp2 = m->hex(h);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,encode,return )

::haxe::io::Bytes Md5_obj::make( ::haxe::io::Bytes b){
	HX_STACK_FRAME("haxe.crypto.Md5","make",0xb5732403,"haxe.crypto.Md5.make","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",41,0xa59e361e)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(47)
	::haxe::crypto::Md5 tmp = ::haxe::crypto::Md5_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	::haxe::io::Bytes tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	Array< int > h = tmp->doEncode(::haxe::crypto::Md5_obj::bytes2blks(tmp1));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(48)
	::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::alloc((int)16);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	::haxe::io::Bytes out = tmp2;		HX_STACK_VAR(out,"out");
	HX_STACK_LINE(49)
	int p = (int)0;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		while((true)){
			HX_STACK_LINE(50)
			bool tmp3 = (_g < (int)4);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			if ((tmp4)){
				HX_STACK_LINE(50)
				break;
			}
			HX_STACK_LINE(50)
			int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(50)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				int tmp6 = (p)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(51)
				int pos = tmp6;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(51)
				int tmp7 = h->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(51)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(51)
				out->b[pos] = tmp8;
			}
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				int tmp6 = (p)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				int pos = tmp6;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(52)
				int tmp7 = h->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(52)
				int tmp8 = (int(tmp7) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(52)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(52)
				out->b[pos] = tmp9;
			}
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				int tmp6 = (p)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(53)
				int pos = tmp6;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(53)
				int tmp7 = h->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(53)
				int tmp8 = (int(tmp7) >> int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(53)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(53)
				out->b[pos] = tmp9;
			}
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				int tmp6 = (p)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				int pos = tmp6;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(54)
				int tmp7 = h->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				int tmp8 = hx::UShr(tmp7,(int)24);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(54)
				out->b[pos] = tmp8;
			}
		}
	}
	HX_STACK_LINE(56)
	::haxe::io::Bytes tmp3 = out;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,make,return )

Array< int > Md5_obj::bytes2blks( ::haxe::io::Bytes b){
	HX_STACK_FRAME("haxe.crypto.Md5","bytes2blks",0xdb87f6ae,"haxe.crypto.Md5.bytes2blks","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",110,0xa59e361e)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(111)
	int tmp = (b->length + (int)8);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	int tmp1 = (int(tmp) >> int((int)6));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	int nblk = tmp2;		HX_STACK_VAR(nblk,"nblk");
	HX_STACK_LINE(112)
	Array< int > blks = Array_obj< int >::__new();		HX_STACK_VAR(blks,"blks");
	HX_STACK_LINE(115)
	int tmp3 = (nblk * (int)16);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	int blksSize = tmp3;		HX_STACK_VAR(blksSize,"blksSize");
	HX_STACK_LINE(117)
	int tmp4 = (blksSize - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(117)
	blks[tmp4] = (int)0;
	HX_STACK_LINE(124)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(125)
	while((true)){
		HX_STACK_LINE(125)
		bool tmp5 = (i < b->length);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(125)
		if ((tmp6)){
			HX_STACK_LINE(125)
			break;
		}
		HX_STACK_LINE(126)
		int tmp7 = (int(i) >> int((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(126)
		int tmp8 = b->b->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(126)
		int tmp9 = (int(b->length) << int((int)3));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(126)
		int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(126)
		int tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(126)
		int tmp12 = (int(tmp11) & int((int)3));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(126)
		int tmp13 = (int(tmp12) << int((int)3));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(126)
		int tmp14 = (int(tmp8) << int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(126)
		hx::OrEq(blks[tmp7],tmp14);
		HX_STACK_LINE(127)
		(i)++;
	}
	HX_STACK_LINE(129)
	int tmp5 = (int(i) >> int((int)2));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(129)
	int tmp6 = (b->length * (int)8);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(129)
	int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(129)
	int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(129)
	int tmp9 = hx::Mod(tmp8,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(129)
	int tmp10 = (tmp9 * (int)8);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(129)
	int tmp11 = (int((int)128) << int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(129)
	hx::OrEq(blks[tmp5],tmp11);
	HX_STACK_LINE(130)
	int tmp12 = (b->length * (int)8);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(130)
	int l = tmp12;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(131)
	int tmp13 = (nblk * (int)16);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(131)
	int tmp14 = (tmp13 - (int)2);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(131)
	int k = tmp14;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(132)
	int tmp15 = (int(l) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(132)
	blks[k] = tmp15;
	HX_STACK_LINE(133)
	int tmp16 = hx::UShr(l,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(133)
	int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(133)
	int tmp18 = (int(tmp17) << int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(133)
	hx::OrEq(blks[k],tmp18);
	HX_STACK_LINE(134)
	int tmp19 = hx::UShr(l,(int)16);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(134)
	int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(134)
	int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(134)
	hx::OrEq(blks[k],tmp21);
	HX_STACK_LINE(135)
	int tmp22 = hx::UShr(l,(int)24);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(135)
	int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(135)
	int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(135)
	hx::OrEq(blks[k],tmp24);
	HX_STACK_LINE(136)
	return blks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,bytes2blks,return )

Array< int > Md5_obj::str2blks( ::String str){
	HX_STACK_FRAME("haxe.crypto.Md5","str2blks",0x2f788968,"haxe.crypto.Md5.str2blks","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",139,0xa59e361e)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(140)
	int tmp = (str.length + (int)8);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	int tmp1 = (int(tmp) >> int((int)6));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(140)
	int nblk = tmp2;		HX_STACK_VAR(nblk,"nblk");
	HX_STACK_LINE(141)
	Array< int > blks = Array_obj< int >::__new();		HX_STACK_VAR(blks,"blks");
	HX_STACK_LINE(144)
	int tmp3 = (nblk * (int)16);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(144)
	int blksSize = tmp3;		HX_STACK_VAR(blksSize,"blksSize");
	HX_STACK_LINE(146)
	int tmp4 = (blksSize - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(146)
	blks[tmp4] = (int)0;
	HX_STACK_LINE(153)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(154)
	while((true)){
		HX_STACK_LINE(154)
		bool tmp5 = (i < str.length);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		if ((tmp6)){
			HX_STACK_LINE(154)
			break;
		}
		HX_STACK_LINE(155)
		int tmp7 = (int(i) >> int((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(155)
		int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(155)
		Dynamic tmp9 = str.charCodeAt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(155)
		int tmp10 = (str.length * (int)8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(155)
		int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(155)
		int tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(155)
		int tmp13 = hx::Mod(tmp12,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(155)
		int tmp14 = (tmp13 * (int)8);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(155)
		int tmp15 = (int(tmp9) << int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(155)
		hx::OrEq(blks[tmp7],tmp15);
		HX_STACK_LINE(156)
		(i)++;
	}
	HX_STACK_LINE(158)
	int tmp5 = (int(i) >> int((int)2));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(158)
	int tmp6 = (str.length * (int)8);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(158)
	int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(158)
	int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(158)
	int tmp9 = hx::Mod(tmp8,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(158)
	int tmp10 = (tmp9 * (int)8);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(158)
	int tmp11 = (int((int)128) << int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(158)
	hx::OrEq(blks[tmp5],tmp11);
	HX_STACK_LINE(159)
	int tmp12 = (str.length * (int)8);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(159)
	int l = tmp12;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(160)
	int tmp13 = (nblk * (int)16);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(160)
	int tmp14 = (tmp13 - (int)2);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(160)
	int k = tmp14;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(161)
	int tmp15 = (int(l) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(161)
	blks[k] = tmp15;
	HX_STACK_LINE(162)
	int tmp16 = hx::UShr(l,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(162)
	int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(162)
	int tmp18 = (int(tmp17) << int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(162)
	hx::OrEq(blks[k],tmp18);
	HX_STACK_LINE(163)
	int tmp19 = hx::UShr(l,(int)16);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(163)
	int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(163)
	int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(163)
	hx::OrEq(blks[k],tmp21);
	HX_STACK_LINE(164)
	int tmp22 = hx::UShr(l,(int)24);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(164)
	int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(164)
	int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(164)
	hx::OrEq(blks[k],tmp24);
	HX_STACK_LINE(165)
	return blks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,str2blks,return )


Md5_obj::Md5_obj()
{
}

Dynamic Md5_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { return ff_dyn(); }
		if (HX_FIELD_EQ(inName,"gg") ) { return gg_dyn(); }
		if (HX_FIELD_EQ(inName,"hh") ) { return hh_dyn(); }
		if (HX_FIELD_EQ(inName,"ii") ) { return ii_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { return hex_dyn(); }
		if (HX_FIELD_EQ(inName,"rol") ) { return rol_dyn(); }
		if (HX_FIELD_EQ(inName,"cmn") ) { return cmn_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bitOR") ) { return bitOR_dyn(); }
		if (HX_FIELD_EQ(inName,"addme") ) { return addme_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitXOR") ) { return bitXOR_dyn(); }
		if (HX_FIELD_EQ(inName,"bitAND") ) { return bitAND_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"doEncode") ) { return doEncode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Md5_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { outValue = make_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"str2blks") ) { outValue = str2blks_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytes2blks") ) { outValue = bytes2blks_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitOR","\x30","\x8b","\x04","\xb3"),
	HX_HCSTRING("bitXOR","\xce","\x10","\xfc","\xf0"),
	HX_HCSTRING("bitAND","\x0a","\x9c","\xea","\xf0"),
	HX_HCSTRING("addme","\xb9","\xdb","\x43","\x1c"),
	HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"),
	HX_HCSTRING("rol","\x0f","\xe2","\x56","\x00"),
	HX_HCSTRING("cmn","\x84","\x7e","\x4b","\x00"),
	HX_HCSTRING("ff","\x40","\x59","\x00","\x00"),
	HX_HCSTRING("gg","\x20","\x5a","\x00","\x00"),
	HX_HCSTRING("hh","\x00","\x5b","\x00","\x00"),
	HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),
	HX_HCSTRING("doEncode","\x01","\x78","\xfb","\x8d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Md5_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Md5_obj::__mClass,"__mClass");
};

#endif

hx::Class Md5_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("make","\xee","\x39","\x56","\x48"),
	HX_HCSTRING("bytes2blks","\xd9","\xce","\x9c","\xa9"),
	HX_HCSTRING("str2blks","\xd3","\x70","\x34","\x29"),
	::String(null()) };

void Md5_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.crypto.Md5","\x79","\xae","\xa9","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Md5_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Md5_obj >;
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
