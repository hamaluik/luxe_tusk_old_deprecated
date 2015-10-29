#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_crypto_Sha256
#include <haxe/crypto/Sha256.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace haxe{
namespace crypto{

Void Sha256_obj::__construct()
{
HX_STACK_FRAME("haxe.crypto.Sha256","new",0x4d8a58be,"haxe.crypto.Sha256.new","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",56,0x031fa1d9)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Sha256_obj::~Sha256_obj() { }

Dynamic Sha256_obj::__CreateEmpty() { return  new Sha256_obj; }
hx::ObjectPtr< Sha256_obj > Sha256_obj::__new()
{  hx::ObjectPtr< Sha256_obj > _result_ = new Sha256_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sha256_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sha256_obj > _result_ = new Sha256_obj();
	_result_->__construct();
	return _result_;}

Array< int > Sha256_obj::doEncode( Array< int > m,int l){
	HX_STACK_FRAME("haxe.crypto.Sha256","doEncode",0xbba3dae3,"haxe.crypto.Sha256.doEncode","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",59,0x031fa1d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(60)
	Array< int > K = Array_obj< int >::__new().Add((int)1116352408).Add((int)1899447441).Add((int)-1245643825).Add((int)-373957723).Add((int)961987163).Add((int)1508970993).Add((int)-1841331548).Add((int)-1424204075).Add((int)-670586216).Add((int)310598401).Add((int)607225278).Add((int)1426881987).Add((int)1925078388).Add((int)-2132889090).Add((int)-1680079193).Add((int)-1046744716).Add((int)-459576895).Add((int)-272742522).Add((int)264347078).Add((int)604807628).Add((int)770255983).Add((int)1249150122).Add((int)1555081692).Add((int)1996064986).Add((int)-1740746414).Add((int)-1473132947).Add((int)-1341970488).Add((int)-1084653625).Add((int)-958395405).Add((int)-710438585).Add((int)113926993).Add((int)338241895).Add((int)666307205).Add((int)773529912).Add((int)1294757372).Add((int)1396182291).Add((int)1695183700).Add((int)1986661051).Add((int)-2117940946).Add((int)-1838011259).Add((int)-1564481375).Add((int)-1474664885).Add((int)-1035236496).Add((int)-949202525).Add((int)-778901479).Add((int)-694614492).Add((int)-200395387).Add((int)275423344).Add((int)430227734).Add((int)506948616).Add((int)659060556).Add((int)883997877).Add((int)958139571).Add((int)1322822218).Add((int)1537002063).Add((int)1747873779).Add((int)1955562222).Add((int)2024104815).Add((int)-2067236844).Add((int)-1933114872).Add((int)-1866530822).Add((int)-1538233109).Add((int)-1090935817).Add((int)-965641998);		HX_STACK_VAR(K,"K");
	HX_STACK_LINE(75)
	Array< int > HASH = Array_obj< int >::__new().Add((int)1779033703).Add((int)-1150833019).Add((int)1013904242).Add((int)-1521486534).Add((int)1359893119).Add((int)-1694144372).Add((int)528734635).Add((int)1541459225);		HX_STACK_VAR(HASH,"HASH");
	HX_STACK_LINE(80)
	Array< int > W = Array_obj< int >::__new();		HX_STACK_VAR(W,"W");
	HX_STACK_LINE(81)
	W[(int)64] = (int)0;
	HX_STACK_LINE(82)
	int a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(82)
	int b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(82)
	int c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(82)
	int d;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(82)
	int e;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(82)
	int f;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(82)
	int g;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(82)
	int h;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(83)
	int T1;		HX_STACK_VAR(T1,"T1");
	HX_STACK_LINE(83)
	int T2;		HX_STACK_VAR(T2,"T2");
	HX_STACK_LINE(84)
	int tmp = (int(l) >> int((int)5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	int tmp1 = hx::Mod(l,(int)32);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	int tmp2 = ((int)24 - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	int tmp3 = (int((int)128) << int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	hx::OrEq(m[tmp],tmp3);
	HX_STACK_LINE(85)
	int tmp4 = (l + (int)64);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(85)
	int tmp5 = (int(tmp4) >> int((int)9));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(85)
	int tmp6 = (int(tmp5) << int((int)4));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	int tmp7 = (tmp6 + (int)15);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	int tmp8 = l;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(85)
	m[tmp7] = tmp8;
	HX_STACK_LINE(86)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(87)
	while((true)){
		HX_STACK_LINE(87)
		bool tmp9 = (i < m->length);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(87)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(87)
		if ((tmp10)){
			HX_STACK_LINE(87)
			break;
		}
		HX_STACK_LINE(88)
		int tmp11 = HASH->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(88)
		a = tmp11;
		HX_STACK_LINE(88)
		int tmp12 = HASH->__get((int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(88)
		b = tmp12;
		HX_STACK_LINE(88)
		int tmp13 = HASH->__get((int)2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(88)
		c = tmp13;
		HX_STACK_LINE(88)
		int tmp14 = HASH->__get((int)3);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(88)
		d = tmp14;
		HX_STACK_LINE(88)
		int tmp15 = HASH->__get((int)4);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(88)
		e = tmp15;
		HX_STACK_LINE(88)
		int tmp16 = HASH->__get((int)5);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(88)
		f = tmp16;
		HX_STACK_LINE(88)
		int tmp17 = HASH->__get((int)6);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(88)
		g = tmp17;
		HX_STACK_LINE(88)
		int tmp18 = HASH->__get((int)7);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(88)
		h = tmp18;
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			while((true)){
				HX_STACK_LINE(89)
				bool tmp19 = (_g < (int)64);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(89)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(89)
				if ((tmp20)){
					HX_STACK_LINE(89)
					break;
				}
				HX_STACK_LINE(89)
				int tmp21 = (_g)++;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(89)
				int j = tmp21;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(90)
				bool tmp22 = (j < (int)16);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(90)
				if ((tmp22)){
					HX_STACK_LINE(91)
					int tmp23 = (j + i);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(91)
					int tmp24 = m->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(91)
					W[j] = tmp24;
				}
				else{
					HX_STACK_LINE(93)
					int tmp23 = (j - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(93)
					int tmp24 = W->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(93)
					int tmp25 = this->Gamma1256(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(93)
					int tmp26 = (j - (int)7);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(93)
					int tmp27 = W->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(93)
					int tmp28 = this->safeAdd(tmp25,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(93)
					int tmp29 = (j - (int)15);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(93)
					int tmp30 = W->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(93)
					int tmp31 = this->Gamma0256(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(93)
					int tmp32 = this->safeAdd(tmp28,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(93)
					int tmp33 = (j - (int)16);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(93)
					int tmp34 = W->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(93)
					int tmp35 = this->safeAdd(tmp32,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(93)
					W[j] = tmp35;
				}
				HX_STACK_LINE(94)
				int tmp23 = h;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(94)
				int tmp24 = e;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(94)
				int tmp25 = this->Sigma1256(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(94)
				int tmp26 = this->safeAdd(tmp23,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(94)
				int tmp27 = e;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(94)
				int tmp28 = f;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(94)
				int tmp29 = g;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(94)
				int tmp30 = this->Ch(tmp27,tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(94)
				int tmp31 = this->safeAdd(tmp26,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(94)
				int tmp32 = K->__get(j);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(94)
				int tmp33 = this->safeAdd(tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(94)
				int tmp34 = W->__get(j);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(94)
				int tmp35 = this->safeAdd(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(94)
				T1 = tmp35;
				HX_STACK_LINE(95)
				int tmp36 = a;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(95)
				int tmp37 = this->Sigma0256(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(95)
				int tmp38 = a;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(95)
				int tmp39 = b;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(95)
				int tmp40 = c;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(95)
				int tmp41 = this->Maj(tmp38,tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(95)
				int tmp42 = this->safeAdd(tmp37,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(95)
				T2 = tmp42;
				HX_STACK_LINE(96)
				h = g;
				HX_STACK_LINE(96)
				g = f;
				HX_STACK_LINE(96)
				f = e;
				HX_STACK_LINE(96)
				int tmp43 = d;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(96)
				int tmp44 = T1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(96)
				int tmp45 = this->safeAdd(tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(96)
				e = tmp45;
				HX_STACK_LINE(96)
				d = c;
				HX_STACK_LINE(96)
				c = b;
				HX_STACK_LINE(96)
				b = a;
				HX_STACK_LINE(96)
				int tmp46 = T1;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(96)
				int tmp47 = T2;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(96)
				int tmp48 = this->safeAdd(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(96)
				a = tmp48;
			}
		}
		HX_STACK_LINE(98)
		int tmp19 = a;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(98)
		int tmp20 = HASH->__get((int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(98)
		int tmp21 = this->safeAdd(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(98)
		HASH[(int)0] = tmp21;
		HX_STACK_LINE(99)
		int tmp22 = b;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(99)
		int tmp23 = HASH->__get((int)1);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(99)
		int tmp24 = this->safeAdd(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(99)
		HASH[(int)1] = tmp24;
		HX_STACK_LINE(100)
		int tmp25 = c;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(100)
		int tmp26 = HASH->__get((int)2);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(100)
		int tmp27 = this->safeAdd(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(100)
		HASH[(int)2] = tmp27;
		HX_STACK_LINE(101)
		int tmp28 = d;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(101)
		int tmp29 = HASH->__get((int)3);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(101)
		int tmp30 = this->safeAdd(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(101)
		HASH[(int)3] = tmp30;
		HX_STACK_LINE(102)
		int tmp31 = e;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(102)
		int tmp32 = HASH->__get((int)4);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(102)
		int tmp33 = this->safeAdd(tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(102)
		HASH[(int)4] = tmp33;
		HX_STACK_LINE(103)
		int tmp34 = f;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(103)
		int tmp35 = HASH->__get((int)5);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(103)
		int tmp36 = this->safeAdd(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(103)
		HASH[(int)5] = tmp36;
		HX_STACK_LINE(104)
		int tmp37 = g;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(104)
		int tmp38 = HASH->__get((int)6);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(104)
		int tmp39 = this->safeAdd(tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(104)
		HASH[(int)6] = tmp39;
		HX_STACK_LINE(105)
		int tmp40 = h;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(105)
		int tmp41 = HASH->__get((int)7);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(105)
		int tmp42 = this->safeAdd(tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(105)
		HASH[(int)7] = tmp42;
		HX_STACK_LINE(106)
		hx::AddEq(i,(int)16);
	}
	HX_STACK_LINE(108)
	return HASH;
}


HX_DEFINE_DYNAMIC_FUNC2(Sha256_obj,doEncode,return )

int Sha256_obj::S( int X,int n){
	HX_STACK_FRAME("haxe.crypto.Sha256","S",0x73211531,"haxe.crypto.Sha256.S","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",149,0x031fa1d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(150)
	int tmp = hx::UShr(X,n);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	int tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	int tmp2 = ((int)32 - n);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(150)
	int tmp3 = (int(tmp1) << int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(150)
	int tmp4 = (int(tmp) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(150)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Sha256_obj,S,return )

int Sha256_obj::R( int X,int n){
	HX_STACK_FRAME("haxe.crypto.Sha256","R",0x73211530,"haxe.crypto.Sha256.R","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",153,0x031fa1d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(154)
	int tmp = hx::UShr(X,n);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(Sha256_obj,R,return )

int Sha256_obj::Ch( int x,int y,int z){
	HX_STACK_FRAME("haxe.crypto.Sha256","Ch",0x49d16827,"haxe.crypto.Sha256.Ch","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",157,0x031fa1d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(158)
	int tmp = (int(x) & int(y));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	int tmp2 = ~(int)(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(158)
	int tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(158)
	int tmp4 = (int(tmp2) & int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(158)
	int tmp5 = (int(tmp) ^ int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(158)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC3(Sha256_obj,Ch,return )

int Sha256_obj::Maj( int x,int y,int z){
	HX_STACK_FRAME("haxe.crypto.Sha256","Maj",0x4d714ad4,"haxe.crypto.Sha256.Maj","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",161,0x031fa1d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(162)
	int tmp = (int(x) & int(y));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	int tmp1 = (int(x) & int(z));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	int tmp2 = (int(tmp) ^ int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(162)
	int tmp3 = (int(y) & int(z));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(162)
	int tmp4 = (int(tmp2) ^ int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(162)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(Sha256_obj,Maj,return )

int Sha256_obj::Sigma0256( int x){
	HX_STACK_FRAME("haxe.crypto.Sha256","Sigma0256",0xe96bbac6,"haxe.crypto.Sha256.Sigma0256","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",165,0x031fa1d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(166)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	int tmp1 = this->S(tmp,(int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(166)
	int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	int tmp3 = this->S(tmp2,(int)13);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	int tmp4 = (int(tmp1) ^ int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(166)
	int tmp6 = this->S(tmp5,(int)22);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(166)
	int tmp7 = (int(tmp4) ^ int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(166)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Sha256_obj,Sigma0256,return )

int Sha256_obj::Sigma1256( int x){
	HX_STACK_FRAME("haxe.crypto.Sha256","Sigma1256",0xea14f165,"haxe.crypto.Sha256.Sigma1256","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",169,0x031fa1d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(170)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	int tmp1 = this->S(tmp,(int)6);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(170)
	int tmp3 = this->S(tmp2,(int)11);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(170)
	int tmp4 = (int(tmp1) ^ int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(170)
	int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(170)
	int tmp6 = this->S(tmp5,(int)25);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(170)
	int tmp7 = (int(tmp4) ^ int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(170)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Sha256_obj,Sigma1256,return )

int Sha256_obj::Gamma0256( int x){
	HX_STACK_FRAME("haxe.crypto.Sha256","Gamma0256",0x36080648,"haxe.crypto.Sha256.Gamma0256","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",173,0x031fa1d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(174)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	int tmp1 = this->S(tmp,(int)7);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(174)
	int tmp3 = this->S(tmp2,(int)18);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(174)
	int tmp4 = (int(tmp1) ^ int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(174)
	int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(174)
	int tmp6 = this->R(tmp5,(int)3);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(174)
	int tmp7 = (int(tmp4) ^ int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(174)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Sha256_obj,Gamma0256,return )

int Sha256_obj::Gamma1256( int x){
	HX_STACK_FRAME("haxe.crypto.Sha256","Gamma1256",0x36b13ce7,"haxe.crypto.Sha256.Gamma1256","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",177,0x031fa1d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(178)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	int tmp1 = this->S(tmp,(int)17);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	int tmp3 = this->S(tmp2,(int)19);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(178)
	int tmp4 = (int(tmp1) ^ int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(178)
	int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(178)
	int tmp6 = this->R(tmp5,(int)10);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(178)
	int tmp7 = (int(tmp4) ^ int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(178)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Sha256_obj,Gamma1256,return )

int Sha256_obj::safeAdd( int x,int y){
	HX_STACK_FRAME("haxe.crypto.Sha256","safeAdd",0x335aca32,"haxe.crypto.Sha256.safeAdd","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",181,0x031fa1d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(182)
	int tmp = (int(x) & int((int)65535));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	int tmp1 = (int(y) & int((int)65535));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(182)
	int lsw = tmp2;		HX_STACK_VAR(lsw,"lsw");
	HX_STACK_LINE(183)
	int tmp3 = (int(x) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(183)
	int tmp4 = (int(y) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(183)
	int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(183)
	int tmp6 = (int(lsw) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(183)
	int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(183)
	int msw = tmp7;		HX_STACK_VAR(msw,"msw");
	HX_STACK_LINE(184)
	int tmp8 = (int(msw) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(184)
	int tmp9 = (int(lsw) & int((int)65535));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(184)
	int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(184)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(Sha256_obj,safeAdd,return )

::String Sha256_obj::hex( Array< int > a){
	HX_STACK_FRAME("haxe.crypto.Sha256","hex",0x4d85cb39,"haxe.crypto.Sha256.hex","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",187,0x031fa1d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(188)
	::String str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(189)
	{
		HX_STACK_LINE(189)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(189)
		while((true)){
			HX_STACK_LINE(189)
			bool tmp = (_g < a->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(189)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(189)
			if ((tmp1)){
				HX_STACK_LINE(189)
				break;
			}
			HX_STACK_LINE(189)
			int tmp2 = a->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(189)
			int num = tmp2;		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(189)
			++(_g);
			HX_STACK_LINE(190)
			int tmp3 = num;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(190)
			::String tmp4 = ::StringTools_obj::hex(tmp3,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(190)
			hx::AddEq(str,tmp4);
		}
	}
	HX_STACK_LINE(192)
	::String tmp = str.toLowerCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Sha256_obj,hex,return )

::String Sha256_obj::encode( ::String s){
	HX_STACK_FRAME("haxe.crypto.Sha256","encode",0x75947878,"haxe.crypto.Sha256.encode","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",29,0x031fa1d9)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(33)
	::haxe::crypto::Sha256 tmp = ::haxe::crypto::Sha256_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	::haxe::crypto::Sha256 sh = tmp;		HX_STACK_VAR(sh,"sh");
	HX_STACK_LINE(34)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	int tmp2 = (s.length * (int)8);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	Array< int > h = sh->doEncode(::haxe::crypto::Sha256_obj::str2blks(tmp1),tmp2);		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(35)
	::String tmp3 = sh->hex(h);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sha256_obj,encode,return )

::haxe::io::Bytes Sha256_obj::make( ::haxe::io::Bytes b){
	HX_STACK_FRAME("haxe.crypto.Sha256","make",0x8ad703d0,"haxe.crypto.Sha256.make","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",39,0x031fa1d9)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(43)
	::haxe::crypto::Sha256 tmp = ::haxe::crypto::Sha256_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	::haxe::io::Bytes tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	int tmp2 = (b->length * (int)8);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	Array< int > h = tmp->doEncode(::haxe::crypto::Sha256_obj::bytes2blks(tmp1),tmp2);		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(44)
	::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::alloc((int)32);		HX_STACK_VAR(tmp3,"tmp3");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sha256_obj,make,return )

Array< int > Sha256_obj::str2blks( ::String s){
	HX_STACK_FRAME("haxe.crypto.Sha256","str2blks",0x56dcd3b5,"haxe.crypto.Sha256.str2blks","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",115,0x031fa1d9)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(116)
	int tmp = (s.length + (int)8);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	int tmp1 = (int(tmp) >> int((int)6));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(116)
	int nblk = tmp2;		HX_STACK_VAR(nblk,"nblk");
	HX_STACK_LINE(117)
	Array< int > blks = Array_obj< int >::__new();		HX_STACK_VAR(blks,"blks");
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(119)
		int tmp3 = (nblk * (int)16);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		int _g = tmp3;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(119)
		while((true)){
			HX_STACK_LINE(119)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(119)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			if ((tmp5)){
				HX_STACK_LINE(119)
				break;
			}
			HX_STACK_LINE(119)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(119)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(120)
			blks[i] = (int)0;
		}
	}
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(121)
		int _g = s.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		while((true)){
			HX_STACK_LINE(121)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(121)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			if ((tmp4)){
				HX_STACK_LINE(121)
				break;
			}
			HX_STACK_LINE(121)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(122)
			int tmp6 = (int(i) >> int((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(122)
			int p = tmp6;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(123)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(123)
			Dynamic tmp8 = s.charCodeAt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(123)
			int tmp9 = (int(i) & int((int)3));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(123)
			int tmp10 = (int(tmp9) << int((int)3));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(123)
			int tmp11 = ((int)24 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(123)
			int tmp12 = (int(tmp8) << int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(123)
			hx::OrEq(blks[p],tmp12);
		}
	}
	HX_STACK_LINE(125)
	int i = s.length;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(126)
	int tmp3 = (int(i) >> int((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	int p = tmp3;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(127)
	int tmp4 = (int(i) & int((int)3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(127)
	int tmp5 = (int(tmp4) << int((int)3));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(127)
	int tmp6 = ((int)24 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(127)
	int tmp7 = (int((int)128) << int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(127)
	hx::OrEq(blks[p],tmp7);
	HX_STACK_LINE(128)
	int tmp8 = (nblk * (int)16);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(128)
	int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(128)
	int tmp10 = (s.length * (int)8);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(128)
	blks[tmp9] = tmp10;
	HX_STACK_LINE(129)
	return blks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sha256_obj,str2blks,return )

Array< int > Sha256_obj::bytes2blks( ::haxe::io::Bytes b){
	HX_STACK_FRAME("haxe.crypto.Sha256","bytes2blks",0xdc4d2e3b,"haxe.crypto.Sha256.bytes2blks","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Sha256.hx",132,0x031fa1d9)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(133)
	int tmp = (b->length + (int)8);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	int tmp1 = (int(tmp) >> int((int)6));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(133)
	int nblk = tmp2;		HX_STACK_VAR(nblk,"nblk");
	HX_STACK_LINE(134)
	Array< int > blks = Array_obj< int >::__new();		HX_STACK_VAR(blks,"blks");
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(136)
		int tmp3 = (nblk * (int)16);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		int _g = tmp3;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(136)
		while((true)){
			HX_STACK_LINE(136)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(136)
			if ((tmp5)){
				HX_STACK_LINE(136)
				break;
			}
			HX_STACK_LINE(136)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(136)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(137)
			blks[i] = (int)0;
		}
	}
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(138)
		int _g = b->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(138)
		while((true)){
			HX_STACK_LINE(138)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(138)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			if ((tmp4)){
				HX_STACK_LINE(138)
				break;
			}
			HX_STACK_LINE(138)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(138)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(139)
			int tmp6 = (int(i) >> int((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(139)
			int p = tmp6;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(140)
			int tmp7 = b->b->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(140)
			int tmp8 = (int(i) & int((int)3));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(140)
			int tmp9 = (int(tmp8) << int((int)3));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(140)
			int tmp10 = ((int)24 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(140)
			int tmp11 = (int(tmp7) << int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(140)
			hx::OrEq(blks[p],tmp11);
		}
	}
	HX_STACK_LINE(142)
	int i = b->length;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(143)
	int tmp3 = (int(i) >> int((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	int p = tmp3;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(144)
	int tmp4 = (int(i) & int((int)3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(144)
	int tmp5 = (int(tmp4) << int((int)3));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(144)
	int tmp6 = ((int)24 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(144)
	int tmp7 = (int((int)128) << int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(144)
	hx::OrEq(blks[p],tmp7);
	HX_STACK_LINE(145)
	int tmp8 = (nblk * (int)16);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(145)
	int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(145)
	int tmp10 = (b->length * (int)8);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(145)
	blks[tmp9] = tmp10;
	HX_STACK_LINE(146)
	return blks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sha256_obj,bytes2blks,return )


Sha256_obj::Sha256_obj()
{
}

Dynamic Sha256_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"S") ) { return S_dyn(); }
		if (HX_FIELD_EQ(inName,"R") ) { return R_dyn(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"Ch") ) { return Ch_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"Maj") ) { return Maj_dyn(); }
		if (HX_FIELD_EQ(inName,"hex") ) { return hex_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"safeAdd") ) { return safeAdd_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"doEncode") ) { return doEncode_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"Sigma0256") ) { return Sigma0256_dyn(); }
		if (HX_FIELD_EQ(inName,"Sigma1256") ) { return Sigma1256_dyn(); }
		if (HX_FIELD_EQ(inName,"Gamma0256") ) { return Gamma0256_dyn(); }
		if (HX_FIELD_EQ(inName,"Gamma1256") ) { return Gamma1256_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Sha256_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_HCSTRING("S","\x53","\x00","\x00","\x00"),
	HX_HCSTRING("R","\x52","\x00","\x00","\x00"),
	HX_HCSTRING("Ch","\xc5","\x3a","\x00","\x00"),
	HX_HCSTRING("Maj","\x76","\xc2","\x3a","\x00"),
	HX_HCSTRING("Sigma0256","\xe8","\x97","\xbd","\x23"),
	HX_HCSTRING("Sigma1256","\x87","\xce","\x66","\x24"),
	HX_HCSTRING("Gamma0256","\x6a","\xe3","\x59","\x70"),
	HX_HCSTRING("Gamma1256","\x09","\x1a","\x03","\x71"),
	HX_HCSTRING("safeAdd","\xd4","\xba","\x95","\x74"),
	HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sha256_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sha256_obj::__mClass,"__mClass");
};

#endif

hx::Class Sha256_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("make","\xee","\x39","\x56","\x48"),
	HX_HCSTRING("str2blks","\xd3","\x70","\x34","\x29"),
	HX_HCSTRING("bytes2blks","\xd9","\xce","\x9c","\xa9"),
	::String(null()) };

void Sha256_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.crypto.Sha256","\xcc","\xe1","\x0b","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sha256_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sha256_obj >;
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
