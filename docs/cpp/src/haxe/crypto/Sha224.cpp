#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_crypto_Sha224
#include <haxe/crypto/Sha224.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace haxe{
namespace crypto{

Void Sha224_obj::__construct()
{
HX_STACK_FRAME("haxe.crypto.Sha224","new",0xf3ab1a9f,"haxe.crypto.Sha224.new","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha224.hx",56,0x47997718)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Sha224_obj::~Sha224_obj() { }

Dynamic Sha224_obj::__CreateEmpty() { return  new Sha224_obj; }
hx::ObjectPtr< Sha224_obj > Sha224_obj::__new()
{  hx::ObjectPtr< Sha224_obj > _result_ = new Sha224_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sha224_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sha224_obj > _result_ = new Sha224_obj();
	_result_->__construct();
	return _result_;}

Array< int > Sha224_obj::doEncode( ::String str,int strlen){
	HX_STACK_FRAME("haxe.crypto.Sha224","doEncode",0xb873a962,"haxe.crypto.Sha224.doEncode","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha224.hx",59,0x47997718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(strlen,"strlen")
	HX_STACK_LINE(60)
	Array< int > K = Array_obj< int >::__new().Add((int)1116352408).Add((int)1899447441).Add((int)-1245643825).Add((int)-373957723).Add((int)961987163).Add((int)1508970993).Add((int)-1841331548).Add((int)-1424204075).Add((int)-670586216).Add((int)310598401).Add((int)607225278).Add((int)1426881987).Add((int)1925078388).Add((int)-2132889090).Add((int)-1680079193).Add((int)-1046744716).Add((int)-459576895).Add((int)-272742522).Add((int)264347078).Add((int)604807628).Add((int)770255983).Add((int)1249150122).Add((int)1555081692).Add((int)1996064986).Add((int)-1740746414).Add((int)-1473132947).Add((int)-1341970488).Add((int)-1084653625).Add((int)-958395405).Add((int)-710438585).Add((int)113926993).Add((int)338241895).Add((int)666307205).Add((int)773529912).Add((int)1294757372).Add((int)1396182291).Add((int)1695183700).Add((int)1986661051).Add((int)-2117940946).Add((int)-1838011259).Add((int)-1564481375).Add((int)-1474664885).Add((int)-1035236496).Add((int)-949202525).Add((int)-778901479).Add((int)-694614492).Add((int)-200395387).Add((int)275423344).Add((int)430227734).Add((int)506948616).Add((int)659060556).Add((int)883997877).Add((int)958139571).Add((int)1322822218).Add((int)1537002063).Add((int)1747873779).Add((int)1955562222).Add((int)2024104815).Add((int)-2067236844).Add((int)-1933114872).Add((int)-1866530822).Add((int)-1538233109).Add((int)-1090935817).Add((int)-965641998);		HX_STACK_VAR(K,"K");
	HX_STACK_LINE(78)
	Array< int > HASH = Array_obj< int >::__new().Add((int)-1056596264).Add((int)914150663).Add((int)812702999).Add((int)-150054599).Add((int)-4191439).Add((int)1750603025).Add((int)1694076839).Add((int)-1090891868);		HX_STACK_VAR(HASH,"HASH");
	HX_STACK_LINE(82)
	Array< int > W = Array_obj< int >::__new();		HX_STACK_VAR(W,"W");
	HX_STACK_LINE(83)
	W[(int)64] = (int)0;
	HX_STACK_LINE(85)
	int a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(85)
	int b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(85)
	int c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(85)
	int d;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(85)
	int e;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(85)
	int f;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(85)
	int g;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(85)
	int h;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(85)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(85)
	int j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(86)
	int T1;		HX_STACK_VAR(T1,"T1");
	HX_STACK_LINE(86)
	int T2;		HX_STACK_VAR(T2,"T2");
	HX_STACK_LINE(87)
	int i1 = (int)0;		HX_STACK_VAR(i1,"i1");
	HX_STACK_LINE(88)
	::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	Array< int > blocks = ::haxe::crypto::Sha224_obj::str2blks(tmp);		HX_STACK_VAR(blocks,"blocks");
	HX_STACK_LINE(89)
	int tmp1 = (int(strlen) >> int((int)5));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	int tmp2 = hx::Mod(strlen,(int)32);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	int tmp3 = ((int)24 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	int tmp4 = (int((int)128) << int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(89)
	hx::OrEq(blocks[tmp1],tmp4);
	HX_STACK_LINE(90)
	int tmp5 = (strlen + (int)64);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(90)
	int tmp6 = (int(tmp5) >> int((int)9));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(90)
	int tmp7 = (int(tmp6) << int((int)4));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(90)
	int tmp8 = (tmp7 + (int)15);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(90)
	int tmp9 = strlen;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(90)
	blocks[tmp8] = tmp9;
	HX_STACK_LINE(92)
	while((true)){
		HX_STACK_LINE(92)
		bool tmp10 = (i1 < blocks->length);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(92)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(92)
		if ((tmp11)){
			HX_STACK_LINE(92)
			break;
		}
		HX_STACK_LINE(93)
		int tmp12 = HASH->__get((int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(93)
		a = tmp12;
		HX_STACK_LINE(94)
		int tmp13 = HASH->__get((int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(94)
		b = tmp13;
		HX_STACK_LINE(95)
		int tmp14 = HASH->__get((int)2);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(95)
		c = tmp14;
		HX_STACK_LINE(96)
		int tmp15 = HASH->__get((int)3);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(96)
		d = tmp15;
		HX_STACK_LINE(97)
		int tmp16 = HASH->__get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(97)
		e = tmp16;
		HX_STACK_LINE(98)
		int tmp17 = HASH->__get((int)5);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(98)
		f = tmp17;
		HX_STACK_LINE(99)
		int tmp18 = HASH->__get((int)6);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(99)
		g = tmp18;
		HX_STACK_LINE(100)
		int tmp19 = HASH->__get((int)7);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(100)
		h = tmp19;
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(102)
			while((true)){
				HX_STACK_LINE(102)
				bool tmp20 = (_g < (int)64);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(102)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(102)
				if ((tmp21)){
					HX_STACK_LINE(102)
					break;
				}
				HX_STACK_LINE(102)
				int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(102)
				int j1 = tmp22;		HX_STACK_VAR(j1,"j1");
				HX_STACK_LINE(103)
				bool tmp23 = (j1 < (int)16);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(103)
				if ((tmp23)){
					HX_STACK_LINE(104)
					int tmp24 = (j1 + i1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(104)
					int tmp25 = blocks->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(104)
					W[j1] = tmp25;
				}
				else{
					HX_STACK_LINE(106)
					int tmp24 = (j1 - (int)2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(106)
					int tmp25 = W->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(106)
					int tmp26 = this->Gamma1(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(106)
					int tmp27 = (j1 - (int)7);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(106)
					int tmp28 = W->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(106)
					int tmp29 = ::haxe::crypto::Sha224_obj::safeAdd(tmp26,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(106)
					int tmp30 = (j1 - (int)15);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(106)
					int tmp31 = W->__get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(106)
					int tmp32 = this->Gamma0(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(106)
					int tmp33 = ::haxe::crypto::Sha224_obj::safeAdd(tmp29,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(106)
					int tmp34 = (j1 - (int)16);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(106)
					int tmp35 = W->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(106)
					int tmp36 = ::haxe::crypto::Sha224_obj::safeAdd(tmp33,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(106)
					W[j1] = tmp36;
				}
				HX_STACK_LINE(109)
				int tmp24 = h;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(109)
				int tmp25 = e;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(109)
				int tmp26 = this->Sigma1(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(109)
				int tmp27 = ::haxe::crypto::Sha224_obj::safeAdd(tmp24,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(109)
				int tmp28 = e;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(109)
				int tmp29 = f;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(109)
				int tmp30 = g;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(109)
				int tmp31 = this->Ch(tmp28,tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(109)
				int tmp32 = ::haxe::crypto::Sha224_obj::safeAdd(tmp27,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(109)
				int tmp33 = K->__get(j1);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(109)
				int tmp34 = ::haxe::crypto::Sha224_obj::safeAdd(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(109)
				int tmp35 = W->__get(j1);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(109)
				int tmp36 = ::haxe::crypto::Sha224_obj::safeAdd(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(109)
				T1 = tmp36;
				HX_STACK_LINE(110)
				int tmp37 = a;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(110)
				int tmp38 = this->Sigma0(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(110)
				int tmp39 = a;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(110)
				int tmp40 = b;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(110)
				int tmp41 = c;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(110)
				int tmp42 = this->Maj(tmp39,tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(110)
				int tmp43 = ::haxe::crypto::Sha224_obj::safeAdd(tmp38,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(110)
				T2 = tmp43;
				HX_STACK_LINE(112)
				h = g;
				HX_STACK_LINE(113)
				g = f;
				HX_STACK_LINE(114)
				f = e;
				HX_STACK_LINE(115)
				int tmp44 = d;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(115)
				int tmp45 = T1;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(115)
				int tmp46 = ::haxe::crypto::Sha224_obj::safeAdd(tmp44,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(115)
				e = tmp46;
				HX_STACK_LINE(116)
				d = c;
				HX_STACK_LINE(117)
				c = b;
				HX_STACK_LINE(118)
				b = a;
				HX_STACK_LINE(119)
				int tmp47 = T1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(119)
				int tmp48 = T2;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(119)
				int tmp49 = ::haxe::crypto::Sha224_obj::safeAdd(tmp47,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(119)
				a = tmp49;
			}
		}
		HX_STACK_LINE(122)
		int tmp20 = a;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(122)
		int tmp21 = HASH->__get((int)0);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(122)
		int tmp22 = ::haxe::crypto::Sha224_obj::safeAdd(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(122)
		HASH[(int)0] = tmp22;
		HX_STACK_LINE(123)
		int tmp23 = b;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(123)
		int tmp24 = HASH->__get((int)1);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(123)
		int tmp25 = ::haxe::crypto::Sha224_obj::safeAdd(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(123)
		HASH[(int)1] = tmp25;
		HX_STACK_LINE(124)
		int tmp26 = c;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(124)
		int tmp27 = HASH->__get((int)2);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(124)
		int tmp28 = ::haxe::crypto::Sha224_obj::safeAdd(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(124)
		HASH[(int)2] = tmp28;
		HX_STACK_LINE(125)
		int tmp29 = d;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(125)
		int tmp30 = HASH->__get((int)3);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(125)
		int tmp31 = ::haxe::crypto::Sha224_obj::safeAdd(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(125)
		HASH[(int)3] = tmp31;
		HX_STACK_LINE(126)
		int tmp32 = e;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(126)
		int tmp33 = HASH->__get((int)4);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(126)
		int tmp34 = ::haxe::crypto::Sha224_obj::safeAdd(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(126)
		HASH[(int)4] = tmp34;
		HX_STACK_LINE(127)
		int tmp35 = f;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(127)
		int tmp36 = HASH->__get((int)5);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(127)
		int tmp37 = ::haxe::crypto::Sha224_obj::safeAdd(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(127)
		HASH[(int)5] = tmp37;
		HX_STACK_LINE(128)
		int tmp38 = g;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(128)
		int tmp39 = HASH->__get((int)6);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(128)
		int tmp40 = ::haxe::crypto::Sha224_obj::safeAdd(tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(128)
		HASH[(int)6] = tmp40;
		HX_STACK_LINE(129)
		int tmp41 = h;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(129)
		int tmp42 = HASH->__get((int)7);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(129)
		int tmp43 = ::haxe::crypto::Sha224_obj::safeAdd(tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(129)
		HASH[(int)7] = tmp43;
		HX_STACK_LINE(130)
		hx::AddEq(i1,(int)16);
	}
	HX_STACK_LINE(132)
	return HASH;
}


HX_DEFINE_DYNAMIC_FUNC2(Sha224_obj,doEncode,return )

int Sha224_obj::ROTR( int X,int n){
	HX_STACK_FRAME("haxe.crypto.Sha224","ROTR",0x2f79675c,"haxe.crypto.Sha224.ROTR","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha224.hx",158,0x47997718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(159)
	int tmp = hx::UShr(X,n);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	int tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	int tmp2 = ((int)32 - n);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	int tmp3 = (int(tmp1) << int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(159)
	int tmp4 = (int(tmp) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(159)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Sha224_obj,ROTR,return )

int Sha224_obj::SHR( int X,int n){
	HX_STACK_FRAME("haxe.crypto.Sha224","SHR",0xf396845c,"haxe.crypto.Sha224.SHR","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha224.hx",163,0x47997718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(164)
	int tmp = hx::UShr(X,n);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(Sha224_obj,SHR,return )

int Sha224_obj::Ch( int x,int y,int z){
	HX_STACK_FRAME("haxe.crypto.Sha224","Ch",0x8e4b3d66,"haxe.crypto.Sha224.Ch","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha224.hx",168,0x47997718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(169)
	int tmp = (int(x) & int(y));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	int tmp2 = ~(int)(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(169)
	int tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(169)
	int tmp4 = (int(tmp2) & int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(169)
	int tmp5 = (int(tmp) ^ int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(169)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC3(Sha224_obj,Ch,return )

int Sha224_obj::Maj( int x,int y,int z){
	HX_STACK_FRAME("haxe.crypto.Sha224","Maj",0xf3920cb5,"haxe.crypto.Sha224.Maj","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha224.hx",173,0x47997718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(174)
	int tmp = (int(x) & int(y));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	int tmp1 = (int(x) & int(z));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	int tmp2 = (int(tmp) ^ int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(174)
	int tmp3 = (int(y) & int(z));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(174)
	int tmp4 = (int(tmp2) ^ int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(174)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(Sha224_obj,Maj,return )

int Sha224_obj::Sigma0( int x){
	HX_STACK_FRAME("haxe.crypto.Sha224","Sigma0",0x7991472c,"haxe.crypto.Sha224.Sigma0","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha224.hx",177,0x47997718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(178)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	int tmp1 = this->ROTR(tmp,(int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	int tmp3 = this->ROTR(tmp2,(int)13);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(178)
	int tmp4 = (int(tmp1) ^ int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(178)
	int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(178)
	int tmp6 = this->ROTR(tmp5,(int)22);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(178)
	int tmp7 = (int(tmp4) ^ int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(178)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Sha224_obj,Sigma0,return )

int Sha224_obj::Sigma1( int x){
	HX_STACK_FRAME("haxe.crypto.Sha224","Sigma1",0x7991472d,"haxe.crypto.Sha224.Sigma1","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha224.hx",181,0x47997718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(182)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	int tmp1 = this->ROTR(tmp,(int)6);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(182)
	int tmp3 = this->ROTR(tmp2,(int)11);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(182)
	int tmp4 = (int(tmp1) ^ int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(182)
	int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(182)
	int tmp6 = this->ROTR(tmp5,(int)25);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(182)
	int tmp7 = (int(tmp4) ^ int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(182)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Sha224_obj,Sigma1,return )

int Sha224_obj::Gamma0( int x){
	HX_STACK_FRAME("haxe.crypto.Sha224","Gamma0",0x160b966a,"haxe.crypto.Sha224.Gamma0","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha224.hx",185,0x47997718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(186)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	int tmp1 = this->ROTR(tmp,(int)7);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(186)
	int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(186)
	int tmp3 = this->ROTR(tmp2,(int)18);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(186)
	int tmp4 = (int(tmp1) ^ int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(186)
	int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(186)
	int tmp6 = this->SHR(tmp5,(int)3);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(186)
	int tmp7 = (int(tmp4) ^ int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(186)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Sha224_obj,Gamma0,return )

int Sha224_obj::Gamma1( int x){
	HX_STACK_FRAME("haxe.crypto.Sha224","Gamma1",0x160b966b,"haxe.crypto.Sha224.Gamma1","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha224.hx",189,0x47997718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(190)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	int tmp1 = this->ROTR(tmp,(int)17);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	int tmp3 = this->ROTR(tmp2,(int)19);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(190)
	int tmp4 = (int(tmp1) ^ int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(190)
	int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(190)
	int tmp6 = this->SHR(tmp5,(int)10);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(190)
	int tmp7 = (int(tmp4) ^ int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(190)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Sha224_obj,Gamma1,return )

::String Sha224_obj::hex( Array< int > a){
	HX_STACK_FRAME("haxe.crypto.Sha224","hex",0xf3a68d1a,"haxe.crypto.Sha224.hex","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha224.hx",193,0x47997718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(194)
	::String str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(195)
	{
		HX_STACK_LINE(195)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(195)
		while((true)){
			HX_STACK_LINE(195)
			bool tmp = (_g < a->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(195)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(195)
			if ((tmp1)){
				HX_STACK_LINE(195)
				break;
			}
			HX_STACK_LINE(195)
			int tmp2 = a->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(195)
			int num = tmp2;		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(195)
			++(_g);
			HX_STACK_LINE(196)
			int tmp3 = num;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(196)
			::String tmp4 = ::StringTools_obj::hex(tmp3,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			hx::AddEq(str,tmp4);
		}
	}
	HX_STACK_LINE(198)
	::String tmp = str.substring((int)0,(int)56);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	::String tmp1 = tmp.toLowerCase();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Sha224_obj,hex,return )

::String Sha224_obj::encode( ::String s){
	HX_STACK_FRAME("haxe.crypto.Sha224","encode",0x8a5b5937,"haxe.crypto.Sha224.encode","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha224.hx",29,0x47997718)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(33)
	::haxe::crypto::Sha224 tmp = ::haxe::crypto::Sha224_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	::haxe::crypto::Sha224 sh = tmp;		HX_STACK_VAR(sh,"sh");
	HX_STACK_LINE(34)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	int tmp2 = (s.length * (int)8);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	Array< int > h = sh->doEncode(tmp1,tmp2);		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(35)
	::String tmp3 = sh->hex(h);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sha224_obj,encode,return )

::haxe::io::Bytes Sha224_obj::make( ::haxe::io::Bytes b){
	HX_STACK_FRAME("haxe.crypto.Sha224","make",0x415fe6cf,"haxe.crypto.Sha224.make","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha224.hx",39,0x47997718)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(43)
	::haxe::crypto::Sha224 tmp = ::haxe::crypto::Sha224_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	::String tmp1 = b->toString();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	int tmp2 = (b->length * (int)8);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	Array< int > h = tmp->doEncode(tmp1,tmp2);		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(44)
	::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::alloc((int)28);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	::haxe::io::Bytes out = tmp3;		HX_STACK_VAR(out,"out");
	HX_STACK_LINE(45)
	int p = (int)0;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			bool tmp4 = (_g < (int)8);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			if ((tmp5)){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(46)
			int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(46)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				int tmp7 = (p)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(47)
				int pos = tmp7;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(47)
				int tmp8 = h->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(47)
				int tmp9 = hx::UShr(tmp8,(int)24);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(47)
				out->b[pos] = tmp9;
			}
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				int tmp7 = (p)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(48)
				int pos = tmp7;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(48)
				int tmp8 = h->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(48)
				int tmp9 = (int(tmp8) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(48)
				int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(48)
				out->b[pos] = tmp10;
			}
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				int tmp7 = (p)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(49)
				int pos = tmp7;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(49)
				int tmp8 = h->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(49)
				int tmp9 = (int(tmp8) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(49)
				int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(49)
				out->b[pos] = tmp10;
			}
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				int tmp7 = (p)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(50)
				int pos = tmp7;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(50)
				int tmp8 = h->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(50)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(50)
				out->b[pos] = tmp9;
			}
		}
	}
	HX_STACK_LINE(52)
	::haxe::io::Bytes tmp4 = out;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sha224_obj,make,return )

Array< int > Sha224_obj::str2blks( ::String s){
	HX_STACK_FRAME("haxe.crypto.Sha224","str2blks",0x53aca234,"haxe.crypto.Sha224.str2blks","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha224.hx",135,0x47997718)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(136)
	int tmp = (s.length + (int)8);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	int tmp1 = (int(tmp) >> int((int)6));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	int nblk = tmp2;		HX_STACK_VAR(nblk,"nblk");
	HX_STACK_LINE(137)
	Array< int > blks = Array_obj< int >::__new();		HX_STACK_VAR(blks,"blks");
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(138)
		int tmp3 = (nblk * (int)16);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		int _g = tmp3;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(138)
		while((true)){
			HX_STACK_LINE(138)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(138)
			if ((tmp5)){
				HX_STACK_LINE(138)
				break;
			}
			HX_STACK_LINE(138)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(138)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(139)
			blks[i] = (int)0;
		}
	}
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(140)
		int _g = s.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			if ((tmp4)){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(140)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(141)
			int tmp6 = (int(i) >> int((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(141)
			int p = tmp6;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(142)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(142)
			Dynamic tmp8 = s.charCodeAt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(142)
			int tmp9 = (int(i) & int((int)3));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(142)
			int tmp10 = (int(tmp9) << int((int)3));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(142)
			int tmp11 = ((int)24 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(142)
			int tmp12 = (int(tmp8) << int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(142)
			hx::OrEq(blks[p],tmp12);
		}
	}
	HX_STACK_LINE(144)
	int i = s.length;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(145)
	int tmp3 = (int(i) >> int((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(145)
	int p = tmp3;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(146)
	int tmp4 = (int(i) & int((int)3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(146)
	int tmp5 = (int(tmp4) << int((int)3));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(146)
	int tmp6 = ((int)24 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(146)
	int tmp7 = (int((int)128) << int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(146)
	hx::OrEq(blks[p],tmp7);
	HX_STACK_LINE(147)
	int tmp8 = (nblk * (int)16);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(147)
	int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(147)
	int tmp10 = (s.length * (int)8);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(147)
	blks[tmp9] = tmp10;
	HX_STACK_LINE(148)
	return blks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sha224_obj,str2blks,return )

int Sha224_obj::safeAdd( int x,int y){
	HX_STACK_FRAME("haxe.crypto.Sha224","safeAdd",0x4c989093,"haxe.crypto.Sha224.safeAdd","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha224.hx",151,0x47997718)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(152)
	int tmp = (int(x) & int((int)65535));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	int tmp1 = (int(y) & int((int)65535));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	int lsw = tmp2;		HX_STACK_VAR(lsw,"lsw");
	HX_STACK_LINE(153)
	int tmp3 = hx::UShr(x,(int)16);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(153)
	int tmp4 = hx::UShr(y,(int)16);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(153)
	int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(153)
	int tmp6 = hx::UShr(lsw,(int)16);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(153)
	int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(153)
	int msw = tmp7;		HX_STACK_VAR(msw,"msw");
	HX_STACK_LINE(154)
	int tmp8 = (int(msw) & int((int)65535));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(154)
	int tmp9 = (int(tmp8) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(154)
	int tmp10 = (int(lsw) & int((int)65535));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(154)
	int tmp11 = (int(tmp9) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(154)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Sha224_obj,safeAdd,return )


Sha224_obj::Sha224_obj()
{
}

Dynamic Sha224_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"Ch") ) { return Ch_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"SHR") ) { return SHR_dyn(); }
		if (HX_FIELD_EQ(inName,"Maj") ) { return Maj_dyn(); }
		if (HX_FIELD_EQ(inName,"hex") ) { return hex_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ROTR") ) { return ROTR_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Sigma0") ) { return Sigma0_dyn(); }
		if (HX_FIELD_EQ(inName,"Sigma1") ) { return Sigma1_dyn(); }
		if (HX_FIELD_EQ(inName,"Gamma0") ) { return Gamma0_dyn(); }
		if (HX_FIELD_EQ(inName,"Gamma1") ) { return Gamma1_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"doEncode") ) { return doEncode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Sha224_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { outValue = make_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"safeAdd") ) { outValue = safeAdd_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"str2blks") ) { outValue = str2blks_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("doEncode","\x01","\x78","\xfb","\x8d"),
	HX_HCSTRING("ROTR","\x7b","\xba","\x6f","\x36"),
	HX_HCSTRING("SHR","\x1d","\x3a","\x3f","\x00"),
	HX_HCSTRING("Ch","\xc5","\x3a","\x00","\x00"),
	HX_HCSTRING("Maj","\x76","\xc2","\x3a","\x00"),
	HX_HCSTRING("Sigma0","\x0b","\xe0","\x19","\xe9"),
	HX_HCSTRING("Sigma1","\x0c","\xe0","\x19","\xe9"),
	HX_HCSTRING("Gamma0","\x49","\x2f","\x94","\x85"),
	HX_HCSTRING("Gamma1","\x4a","\x2f","\x94","\x85"),
	HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sha224_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sha224_obj::__mClass,"__mClass");
};

#endif

hx::Class Sha224_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("make","\xee","\x39","\x56","\x48"),
	HX_HCSTRING("str2blks","\xd3","\x70","\x34","\x29"),
	HX_HCSTRING("safeAdd","\xd4","\xba","\x95","\x74"),
	::String(null()) };

void Sha224_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.crypto.Sha224","\x2d","\xdf","\x0b","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sha224_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sha224_obj >;
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
