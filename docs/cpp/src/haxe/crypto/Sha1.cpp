#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_crypto_Sha1
#include <haxe/crypto/Sha1.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace haxe{
namespace crypto{

Void Sha1_obj::__construct()
{
HX_STACK_FRAME("haxe.crypto.Sha1","new",0xdb44b09c,"haxe.crypto.Sha1.new","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha1.hx",58,0x2f3077fb)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Sha1_obj::~Sha1_obj() { }

Dynamic Sha1_obj::__CreateEmpty() { return  new Sha1_obj; }
hx::ObjectPtr< Sha1_obj > Sha1_obj::__new()
{  hx::ObjectPtr< Sha1_obj > _result_ = new Sha1_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sha1_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sha1_obj > _result_ = new Sha1_obj();
	_result_->__construct();
	return _result_;}

Array< int > Sha1_obj::doEncode( Array< int > x){
	HX_STACK_FRAME("haxe.crypto.Sha1","doEncode",0xfb483e45,"haxe.crypto.Sha1.doEncode","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha1.hx",61,0x2f3077fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(62)
	Array< int > w = Array_obj< int >::__new();		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(64)
	int a = (int)1732584193;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(65)
	int b = (int)-271733879;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(66)
	int c = (int)-1732584194;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(67)
	int d = (int)271733878;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(68)
	int e = (int)-1009589776;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(70)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(71)
	while((true)){
		HX_STACK_LINE(71)
		bool tmp = (i < x->length);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		if ((tmp1)){
			HX_STACK_LINE(71)
			break;
		}
		HX_STACK_LINE(72)
		int olda = a;		HX_STACK_VAR(olda,"olda");
		HX_STACK_LINE(73)
		int oldb = b;		HX_STACK_VAR(oldb,"oldb");
		HX_STACK_LINE(74)
		int oldc = c;		HX_STACK_VAR(oldc,"oldc");
		HX_STACK_LINE(75)
		int oldd = d;		HX_STACK_VAR(oldd,"oldd");
		HX_STACK_LINE(76)
		int olde = e;		HX_STACK_VAR(olde,"olde");
		HX_STACK_LINE(78)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(79)
		while((true)){
			HX_STACK_LINE(79)
			bool tmp2 = (j < (int)80);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(79)
			if ((tmp3)){
				HX_STACK_LINE(79)
				break;
			}
			HX_STACK_LINE(80)
			bool tmp4 = (j < (int)16);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(80)
			if ((tmp4)){
				HX_STACK_LINE(81)
				int tmp5 = (i + j);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(81)
				int tmp6 = x->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(81)
				w[j] = tmp6;
			}
			else{
				HX_STACK_LINE(83)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(83)
				{
					HX_STACK_LINE(83)
					int tmp6 = (j - (int)3);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(83)
					int tmp7 = w->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(83)
					int tmp8 = (j - (int)8);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(83)
					int tmp9 = w->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(83)
					int tmp10 = (int(tmp7) ^ int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(83)
					int tmp11 = (j - (int)14);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(83)
					int tmp12 = w->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(83)
					int tmp13 = (int(tmp10) ^ int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(83)
					int tmp14 = (j - (int)16);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(83)
					int tmp15 = w->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(83)
					int tmp16 = (int(tmp13) ^ int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(83)
					int num = tmp16;		HX_STACK_VAR(num,"num");
					HX_STACK_LINE(83)
					int tmp17 = (int(num) << int((int)1));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(83)
					int tmp18 = num;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(83)
					int tmp19 = (int)31;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(83)
					int tmp20 = hx::UShr(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(83)
					tmp5 = (int(tmp17) | int(tmp20));
				}
				HX_STACK_LINE(83)
				w[j] = tmp5;
			}
			HX_STACK_LINE(84)
			int tmp5 = (int(a) << int((int)5));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			int tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			int tmp7 = (int)27;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			int tmp8 = hx::UShr(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(84)
			int tmp9 = (int(tmp5) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(84)
			int tmp10 = j;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(84)
			int tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(84)
			int tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(84)
			int tmp13 = d;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(84)
			int tmp14 = this->ft(tmp10,tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(84)
			int tmp15 = (tmp9 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(84)
			int tmp16 = e;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(84)
			int tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(84)
			int tmp18 = w->__get(j);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(84)
			int tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(84)
			int tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(84)
			int tmp21 = this->kt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(84)
			int tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(84)
			int t = tmp22;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(85)
			e = d;
			HX_STACK_LINE(86)
			d = c;
			HX_STACK_LINE(87)
			int tmp23 = (int(b) << int((int)30));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(87)
			int tmp24 = b;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(87)
			int tmp25 = (int)2;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(87)
			int tmp26 = hx::UShr(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(87)
			int tmp27 = (int(tmp23) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(87)
			c = tmp27;
			HX_STACK_LINE(88)
			b = a;
			HX_STACK_LINE(89)
			a = t;
			HX_STACK_LINE(90)
			(j)++;
		}
		HX_STACK_LINE(92)
		hx::AddEq(a,olda);
		HX_STACK_LINE(93)
		hx::AddEq(b,oldb);
		HX_STACK_LINE(94)
		hx::AddEq(c,oldc);
		HX_STACK_LINE(95)
		hx::AddEq(d,oldd);
		HX_STACK_LINE(96)
		hx::AddEq(e,olde);
		HX_STACK_LINE(97)
		hx::AddEq(i,(int)16);
	}
	HX_STACK_LINE(99)
	return Array_obj< int >::__new().Add(a).Add(b).Add(c).Add(d).Add(e);
}


HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,doEncode,return )

int Sha1_obj::rol( int num,int cnt){
	HX_STACK_FRAME("haxe.crypto.Sha1","rol",0xdb47c24b,"haxe.crypto.Sha1.rol","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha1.hx",144,0x2f3077fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(num,"num")
	HX_STACK_ARG(cnt,"cnt")
	HX_STACK_LINE(145)
	int tmp = (int(num) << int(cnt));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	int tmp1 = num;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	int tmp2 = ((int)32 - cnt);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	int tmp3 = hx::UShr(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(145)
	int tmp4 = (int(tmp) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(145)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Sha1_obj,rol,return )

int Sha1_obj::ft( int t,int b,int c,int d){
	HX_STACK_FRAME("haxe.crypto.Sha1","ft",0x7aab5492,"haxe.crypto.Sha1.ft","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha1.hx",151,0x2f3077fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(152)
	bool tmp = (t < (int)20);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	if ((tmp)){
		HX_STACK_LINE(152)
		int tmp1 = (int(b) & int(c));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		int tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		int tmp3 = ~(int)(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		int tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(152)
		int tmp5 = (int(tmp3) & int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(152)
		int tmp6 = (int(tmp1) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(152)
		return tmp6;
	}
	HX_STACK_LINE(153)
	bool tmp1 = (t < (int)40);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	if ((tmp1)){
		HX_STACK_LINE(153)
		int tmp2 = (int(b) ^ int(c));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		int tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		int tmp4 = (int(tmp2) ^ int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		return tmp4;
	}
	HX_STACK_LINE(154)
	bool tmp2 = (t < (int)60);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	if ((tmp2)){
		HX_STACK_LINE(154)
		int tmp3 = (int(b) & int(c));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		int tmp4 = (int(b) & int(d));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		int tmp5 = (int(tmp3) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		int tmp6 = (int(c) & int(d));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		int tmp7 = (int(tmp5) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		return tmp7;
	}
	HX_STACK_LINE(155)
	int tmp3 = (int(b) ^ int(c));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(155)
	int tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(155)
	int tmp5 = (int(tmp3) ^ int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(155)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC4(Sha1_obj,ft,return )

int Sha1_obj::kt( int t){
	HX_STACK_FRAME("haxe.crypto.Sha1","kt",0x7aab58ed,"haxe.crypto.Sha1.kt","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha1.hx",161,0x2f3077fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(162)
	bool tmp = (t < (int)20);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(163)
		return (int)1518500249;
	}
	HX_STACK_LINE(164)
	bool tmp1 = (t < (int)40);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	if ((tmp1)){
		HX_STACK_LINE(165)
		return (int)1859775393;
	}
	HX_STACK_LINE(166)
	bool tmp2 = (t < (int)60);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	if ((tmp2)){
		HX_STACK_LINE(167)
		return (int)-1894007588;
	}
	HX_STACK_LINE(168)
	return (int)-899497514;
}


HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,kt,return )

::String Sha1_obj::hex( Array< int > a){
	HX_STACK_FRAME("haxe.crypto.Sha1","hex",0xdb402317,"haxe.crypto.Sha1.hex","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha1.hx",171,0x2f3077fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(172)
	::String str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(173)
	{
		HX_STACK_LINE(173)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(173)
		while((true)){
			HX_STACK_LINE(173)
			bool tmp = (_g < a->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(173)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(173)
			if ((tmp1)){
				HX_STACK_LINE(173)
				break;
			}
			HX_STACK_LINE(173)
			int tmp2 = a->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(173)
			int num = tmp2;		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(173)
			++(_g);
			HX_STACK_LINE(174)
			int tmp3 = num;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(174)
			::String tmp4 = ::StringTools_obj::hex(tmp3,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(174)
			hx::AddEq(str,tmp4);
		}
	}
	HX_STACK_LINE(176)
	::String tmp = str.toLowerCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,hex,return )

::String Sha1_obj::encode( ::String s){
	HX_STACK_FRAME("haxe.crypto.Sha1","encode",0xcc67df5a,"haxe.crypto.Sha1.encode","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha1.hx",29,0x2f3077fb)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(33)
	::haxe::crypto::Sha1 tmp = ::haxe::crypto::Sha1_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	::haxe::crypto::Sha1 sh = tmp;		HX_STACK_VAR(sh,"sh");
	HX_STACK_LINE(34)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	Array< int > h = sh->doEncode(::haxe::crypto::Sha1_obj::str2blks(tmp1));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(35)
	::String tmp2 = sh->hex(h);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,encode,return )

::haxe::io::Bytes Sha1_obj::make( ::haxe::io::Bytes b){
	HX_STACK_FRAME("haxe.crypto.Sha1","make",0x00298e32,"haxe.crypto.Sha1.make","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha1.hx",39,0x2f3077fb)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(43)
	::haxe::crypto::Sha1 tmp = ::haxe::crypto::Sha1_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	::haxe::io::Bytes tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	Array< int > h = tmp->doEncode(::haxe::crypto::Sha1_obj::bytes2blks(tmp1));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(44)
	::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::alloc((int)20);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	::haxe::io::Bytes out = tmp2;		HX_STACK_VAR(out,"out");
	HX_STACK_LINE(45)
	int p = (int)0;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			bool tmp3 = (_g < (int)5);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			if ((tmp4)){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(46)
			int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				int tmp6 = (p)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(47)
				int pos = tmp6;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(47)
				int tmp7 = h->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(47)
				int tmp8 = hx::UShr(tmp7,(int)24);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(47)
				out->b[pos] = tmp8;
			}
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				int tmp6 = (p)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(48)
				int pos = tmp6;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(48)
				int tmp7 = h->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(48)
				int tmp8 = (int(tmp7) >> int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(48)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(48)
				out->b[pos] = tmp9;
			}
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				int tmp6 = (p)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(49)
				int pos = tmp6;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(49)
				int tmp7 = h->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(49)
				int tmp8 = (int(tmp7) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(49)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(49)
				out->b[pos] = tmp9;
			}
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				int tmp6 = (p)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(50)
				int pos = tmp6;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(50)
				int tmp7 = h->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(50)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(50)
				out->b[pos] = tmp8;
			}
		}
	}
	HX_STACK_LINE(52)
	::haxe::io::Bytes tmp3 = out;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,make,return )

Array< int > Sha1_obj::str2blks( ::String s){
	HX_STACK_FRAME("haxe.crypto.Sha1","str2blks",0x96813717,"haxe.crypto.Sha1.str2blks","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha1.hx",107,0x2f3077fb)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(108)
	int tmp = (s.length + (int)8);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	int tmp1 = (int(tmp) >> int((int)6));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(108)
	int nblk = tmp2;		HX_STACK_VAR(nblk,"nblk");
	HX_STACK_LINE(109)
	Array< int > blks = Array_obj< int >::__new();		HX_STACK_VAR(blks,"blks");
	HX_STACK_LINE(111)
	{
		HX_STACK_LINE(111)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(111)
		int tmp3 = (nblk * (int)16);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		int _g = tmp3;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(111)
		while((true)){
			HX_STACK_LINE(111)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(111)
			if ((tmp5)){
				HX_STACK_LINE(111)
				break;
			}
			HX_STACK_LINE(111)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(111)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(112)
			blks[i] = (int)0;
		}
	}
	HX_STACK_LINE(113)
	{
		HX_STACK_LINE(113)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(113)
		int _g = s.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		while((true)){
			HX_STACK_LINE(113)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(113)
			if ((tmp4)){
				HX_STACK_LINE(113)
				break;
			}
			HX_STACK_LINE(113)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(113)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(114)
			int tmp6 = (int(i) >> int((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(114)
			int p = tmp6;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(115)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			Dynamic tmp8 = s.charCodeAt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(115)
			int tmp9 = (int(i) & int((int)3));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(115)
			int tmp10 = (int(tmp9) << int((int)3));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(115)
			int tmp11 = ((int)24 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(115)
			int tmp12 = (int(tmp8) << int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(115)
			hx::OrEq(blks[p],tmp12);
		}
	}
	HX_STACK_LINE(117)
	int i = s.length;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(118)
	int tmp3 = (int(i) >> int((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(118)
	int p = tmp3;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(119)
	int tmp4 = (int(i) & int((int)3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(119)
	int tmp5 = (int(tmp4) << int((int)3));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(119)
	int tmp6 = ((int)24 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(119)
	int tmp7 = (int((int)128) << int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(119)
	hx::OrEq(blks[p],tmp7);
	HX_STACK_LINE(120)
	int tmp8 = (nblk * (int)16);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(120)
	int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(120)
	int tmp10 = (s.length * (int)8);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(120)
	blks[tmp9] = tmp10;
	HX_STACK_LINE(121)
	return blks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,str2blks,return )

Array< int > Sha1_obj::bytes2blks( ::haxe::io::Bytes b){
	HX_STACK_FRAME("haxe.crypto.Sha1","bytes2blks",0x985aae1d,"haxe.crypto.Sha1.bytes2blks","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha1.hx",124,0x2f3077fb)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(125)
	int tmp = (b->length + (int)8);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	int tmp1 = (int(tmp) >> int((int)6));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	int nblk = tmp2;		HX_STACK_VAR(nblk,"nblk");
	HX_STACK_LINE(126)
	Array< int > blks = Array_obj< int >::__new();		HX_STACK_VAR(blks,"blks");
	HX_STACK_LINE(128)
	{
		HX_STACK_LINE(128)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(128)
		int tmp3 = (nblk * (int)16);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		int _g = tmp3;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(128)
		while((true)){
			HX_STACK_LINE(128)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			if ((tmp5)){
				HX_STACK_LINE(128)
				break;
			}
			HX_STACK_LINE(128)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(128)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(129)
			blks[i] = (int)0;
		}
	}
	HX_STACK_LINE(130)
	{
		HX_STACK_LINE(130)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(130)
		int _g = b->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(130)
		while((true)){
			HX_STACK_LINE(130)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(130)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(130)
			if ((tmp4)){
				HX_STACK_LINE(130)
				break;
			}
			HX_STACK_LINE(130)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(130)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(131)
			int tmp6 = (int(i) >> int((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(131)
			int p = tmp6;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(132)
			int tmp7 = b->b->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(132)
			int tmp8 = (int(i) & int((int)3));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(132)
			int tmp9 = (int(tmp8) << int((int)3));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(132)
			int tmp10 = ((int)24 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(132)
			int tmp11 = (int(tmp7) << int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(132)
			hx::OrEq(blks[p],tmp11);
		}
	}
	HX_STACK_LINE(134)
	int i = b->length;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(135)
	int tmp3 = (int(i) >> int((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(135)
	int p = tmp3;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(136)
	int tmp4 = (int(i) & int((int)3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(136)
	int tmp5 = (int(tmp4) << int((int)3));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(136)
	int tmp6 = ((int)24 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(136)
	int tmp7 = (int((int)128) << int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(136)
	hx::OrEq(blks[p],tmp7);
	HX_STACK_LINE(137)
	int tmp8 = (nblk * (int)16);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(137)
	int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(137)
	int tmp10 = (b->length * (int)8);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(137)
	blks[tmp9] = tmp10;
	HX_STACK_LINE(138)
	return blks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sha1_obj,bytes2blks,return )


Sha1_obj::Sha1_obj()
{
}

Dynamic Sha1_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ft") ) { return ft_dyn(); }
		if (HX_FIELD_EQ(inName,"kt") ) { return kt_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"rol") ) { return rol_dyn(); }
		if (HX_FIELD_EQ(inName,"hex") ) { return hex_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"doEncode") ) { return doEncode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Sha1_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_HCSTRING("doEncode","\x01","\x78","\xfb","\x8d"),
	HX_HCSTRING("rol","\x0f","\xe2","\x56","\x00"),
	HX_HCSTRING("ft","\x4e","\x59","\x00","\x00"),
	HX_HCSTRING("kt","\xa9","\x5d","\x00","\x00"),
	HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sha1_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sha1_obj::__mClass,"__mClass");
};

#endif

hx::Class Sha1_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("make","\xee","\x39","\x56","\x48"),
	HX_HCSTRING("str2blks","\xd3","\x70","\x34","\x29"),
	HX_HCSTRING("bytes2blks","\xd9","\xce","\x9c","\xa9"),
	::String(null()) };

void Sha1_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.crypto.Sha1","\xaa","\x72","\xc9","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sha1_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sha1_obj >;
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
