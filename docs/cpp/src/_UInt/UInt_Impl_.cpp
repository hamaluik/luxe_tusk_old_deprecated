#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED__UInt_UInt_Impl_
#include <_UInt/UInt_Impl_.h>
#endif
namespace _UInt{

Void UInt_Impl__obj::__construct()
{
	return null();
}

//UInt_Impl__obj::~UInt_Impl__obj() { }

Dynamic UInt_Impl__obj::__CreateEmpty() { return  new UInt_Impl__obj; }
hx::ObjectPtr< UInt_Impl__obj > UInt_Impl__obj::__new()
{  hx::ObjectPtr< UInt_Impl__obj > _result_ = new UInt_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic UInt_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UInt_Impl__obj > _result_ = new UInt_Impl__obj();
	_result_->__construct();
	return _result_;}

int UInt_Impl__obj::add( int a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","add",0x721d7cc2,"_UInt.UInt_Impl_.add","C:\\HaxeToolkit\\haxe\\std/UInt.hx",100,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(101)
	int tmp = (a + b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,add,return )

Float UInt_Impl__obj::div( int a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","div",0x721fc7f2,"_UInt.UInt_Impl_.div","C:\\HaxeToolkit\\haxe\\std/UInt.hx",104,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(105)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	{
		HX_STACK_LINE(105)
		int _int = a;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(105)
		bool tmp1 = (_int < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		if ((tmp1)){
			HX_STACK_LINE(105)
			tmp = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(105)
			tmp = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(105)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	{
		HX_STACK_LINE(105)
		int _int = b;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(105)
		bool tmp2 = (_int < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		if ((tmp2)){
			HX_STACK_LINE(105)
			tmp1 = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(105)
			tmp1 = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(105)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,div,return )

int UInt_Impl__obj::mul( int a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","mul",0x7226a6a5,"_UInt.UInt_Impl_.mul","C:\\HaxeToolkit\\haxe\\std/UInt.hx",108,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(109)
	int tmp = (a * b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,mul,return )

int UInt_Impl__obj::sub( int a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","sub",0x722b3421,"_UInt.UInt_Impl_.sub","C:\\HaxeToolkit\\haxe\\std/UInt.hx",112,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(113)
	int tmp = (a - b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,sub,return )

bool UInt_Impl__obj::gt( int a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","gt",0x5204beac,"_UInt.UInt_Impl_.gt","C:\\HaxeToolkit\\haxe\\std/UInt.hx",116,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(117)
	bool tmp = (a < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	bool aNeg = tmp;		HX_STACK_VAR(aNeg,"aNeg");
	HX_STACK_LINE(118)
	bool tmp1 = (b < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	bool bNeg = tmp1;		HX_STACK_VAR(bNeg,"bNeg");
	HX_STACK_LINE(120)
	bool tmp2 = (aNeg != bNeg);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	if ((tmp2)){
		HX_STACK_LINE(120)
		tmp3 = aNeg;
	}
	else{
		HX_STACK_LINE(121)
		tmp3 = (a > b);
	}
	HX_STACK_LINE(119)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,gt,return )

bool UInt_Impl__obj::gte( int a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","gte",0x72221839,"_UInt.UInt_Impl_.gte","C:\\HaxeToolkit\\haxe\\std/UInt.hx",124,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(125)
	bool tmp = (a < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	bool aNeg = tmp;		HX_STACK_VAR(aNeg,"aNeg");
	HX_STACK_LINE(126)
	bool tmp1 = (b < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	bool bNeg = tmp1;		HX_STACK_VAR(bNeg,"bNeg");
	HX_STACK_LINE(128)
	bool tmp2 = (aNeg != bNeg);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(128)
	if ((tmp2)){
		HX_STACK_LINE(128)
		tmp3 = aNeg;
	}
	else{
		HX_STACK_LINE(129)
		tmp3 = (a >= b);
	}
	HX_STACK_LINE(127)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,gte,return )

bool UInt_Impl__obj::lt( int a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","lt",0x5204c307,"_UInt.UInt_Impl_.lt","C:\\HaxeToolkit\\haxe\\std/UInt.hx",132,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(133)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	{
		HX_STACK_LINE(133)
		bool tmp1 = (b < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		bool aNeg = tmp1;		HX_STACK_VAR(aNeg,"aNeg");
		HX_STACK_LINE(133)
		bool tmp2 = (a < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		bool bNeg = tmp2;		HX_STACK_VAR(bNeg,"bNeg");
		HX_STACK_LINE(133)
		bool tmp3 = (aNeg != bNeg);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		if ((tmp3)){
			HX_STACK_LINE(133)
			tmp = aNeg;
		}
		else{
			HX_STACK_LINE(133)
			tmp = (b > a);
		}
	}
	HX_STACK_LINE(133)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,lt,return )

bool UInt_Impl__obj::lte( int a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","lte",0x7225e37e,"_UInt.UInt_Impl_.lte","C:\\HaxeToolkit\\haxe\\std/UInt.hx",136,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(137)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		bool tmp1 = (b < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		bool aNeg = tmp1;		HX_STACK_VAR(aNeg,"aNeg");
		HX_STACK_LINE(137)
		bool tmp2 = (a < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		bool bNeg = tmp2;		HX_STACK_VAR(bNeg,"bNeg");
		HX_STACK_LINE(137)
		bool tmp3 = (aNeg != bNeg);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		if ((tmp3)){
			HX_STACK_LINE(137)
			tmp = aNeg;
		}
		else{
			HX_STACK_LINE(137)
			tmp = (b >= a);
		}
	}
	HX_STACK_LINE(137)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,lte,return )

int UInt_Impl__obj::_and( int a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","and",0x721d8578,"_UInt.UInt_Impl_.and","C:\\HaxeToolkit\\haxe\\std/UInt.hx",140,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(141)
	int tmp = (int(a) & int(b));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,_and,return )

int UInt_Impl__obj::_or( int a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","or",0x5204c5a2,"_UInt.UInt_Impl_.or","C:\\HaxeToolkit\\haxe\\std/UInt.hx",144,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(145)
	int tmp = (int(a) | int(b));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,_or,return )

int UInt_Impl__obj::_xor( int a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","xor",0x722efa3c,"_UInt.UInt_Impl_.xor","C:\\HaxeToolkit\\haxe\\std/UInt.hx",148,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(149)
	int tmp = (int(a) ^ int(b));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,_xor,return )

int UInt_Impl__obj::shl( int a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","shl",0x722b28d8,"_UInt.UInt_Impl_.shl","C:\\HaxeToolkit\\haxe\\std/UInt.hx",152,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(153)
	int tmp = (int(a) << int(b));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,shl,return )

int UInt_Impl__obj::shr( int a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","shr",0x722b28de,"_UInt.UInt_Impl_.shr","C:\\HaxeToolkit\\haxe\\std/UInt.hx",156,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(157)
	int tmp = (int(a) >> int(b));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,shr,return )

int UInt_Impl__obj::ushr( int a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","ushr",0x74f35727,"_UInt.UInt_Impl_.ushr","C:\\HaxeToolkit\\haxe\\std/UInt.hx",160,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(161)
	int tmp = hx::UShr(a,b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,ushr,return )

int UInt_Impl__obj::mod( int a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","mod",0x7226a163,"_UInt.UInt_Impl_.mod","C:\\HaxeToolkit\\haxe\\std/UInt.hx",164,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(165)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	{
		HX_STACK_LINE(165)
		int _int = a;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(165)
		bool tmp1 = (_int < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		if ((tmp1)){
			HX_STACK_LINE(165)
			tmp = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(165)
			tmp = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(165)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	{
		HX_STACK_LINE(165)
		int _int = b;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(165)
		bool tmp2 = (_int < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		if ((tmp2)){
			HX_STACK_LINE(165)
			tmp1 = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(165)
			tmp1 = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(165)
	Float tmp2 = hx::Mod(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(165)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(165)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,mod,return )

Float UInt_Impl__obj::addWithFloat( int a,Float b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","addWithFloat",0xd518e494,"_UInt.UInt_Impl_.addWithFloat","C:\\HaxeToolkit\\haxe\\std/UInt.hx",168,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(169)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int _int = a;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(169)
		bool tmp1 = (_int < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		if ((tmp1)){
			HX_STACK_LINE(169)
			tmp = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(169)
			tmp = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(169)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(169)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,addWithFloat,return )

Float UInt_Impl__obj::mulWithFloat( int a,Float b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","mulWithFloat",0x7b2ae651,"_UInt.UInt_Impl_.mulWithFloat","C:\\HaxeToolkit\\haxe\\std/UInt.hx",172,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(173)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	{
		HX_STACK_LINE(173)
		int _int = a;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(173)
		bool tmp1 = (_int < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		if ((tmp1)){
			HX_STACK_LINE(173)
			tmp = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(173)
			tmp = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(173)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,mulWithFloat,return )

Float UInt_Impl__obj::divFloat( int a,Float b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","divFloat",0xda70604a,"_UInt.UInt_Impl_.divFloat","C:\\HaxeToolkit\\haxe\\std/UInt.hx",176,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(177)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	{
		HX_STACK_LINE(177)
		int _int = a;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(177)
		bool tmp1 = (_int < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		if ((tmp1)){
			HX_STACK_LINE(177)
			tmp = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(177)
			tmp = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(177)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(177)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(177)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,divFloat,return )

Float UInt_Impl__obj::floatDiv( Float a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","floatDiv",0x8e10e6d4,"_UInt.UInt_Impl_.floatDiv","C:\\HaxeToolkit\\haxe\\std/UInt.hx",180,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(181)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	{
		HX_STACK_LINE(181)
		int _int = b;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(181)
		bool tmp2 = (_int < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		if ((tmp2)){
			HX_STACK_LINE(181)
			tmp1 = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(181)
			tmp1 = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(181)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(181)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,floatDiv,return )

Float UInt_Impl__obj::subFloat( int a,Float b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","subFloat",0x284369bb,"_UInt.UInt_Impl_.subFloat","C:\\HaxeToolkit\\haxe\\std/UInt.hx",184,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(185)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		int _int = a;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(185)
		bool tmp1 = (_int < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		if ((tmp1)){
			HX_STACK_LINE(185)
			tmp = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(185)
			tmp = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(185)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,subFloat,return )

Float UInt_Impl__obj::floatSub( Float a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","floatSub",0x8e1c5303,"_UInt.UInt_Impl_.floatSub","C:\\HaxeToolkit\\haxe\\std/UInt.hx",188,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(189)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	{
		HX_STACK_LINE(189)
		int _int = b;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(189)
		bool tmp2 = (_int < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		if ((tmp2)){
			HX_STACK_LINE(189)
			tmp1 = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(189)
			tmp1 = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(189)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,floatSub,return )

bool UInt_Impl__obj::gtFloat( int a,Float b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","gtFloat",0x0930c750,"_UInt.UInt_Impl_.gtFloat","C:\\HaxeToolkit\\haxe\\std/UInt.hx",192,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(193)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(193)
		int _int = a;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(193)
		bool tmp1 = (_int < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		if ((tmp1)){
			HX_STACK_LINE(193)
			tmp = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(193)
			tmp = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(193)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(193)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(193)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,gtFloat,return )

bool UInt_Impl__obj::equalsInt( int a,Dynamic b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","equalsInt",0x8908c151,"_UInt.UInt_Impl_.equalsInt","C:\\HaxeToolkit\\haxe\\std/UInt.hx",196,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(197)
	bool tmp = (a == b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,equalsInt,return )

bool UInt_Impl__obj::notEqualsInt( int a,Dynamic b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","notEqualsInt",0xf1756d9c,"_UInt.UInt_Impl_.notEqualsInt","C:\\HaxeToolkit\\haxe\\std/UInt.hx",200,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(201)
	bool tmp = (a != b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,notEqualsInt,return )

bool UInt_Impl__obj::equalsFloat( int a,Dynamic b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","equalsFloat",0xb22ed67e,"_UInt.UInt_Impl_.equalsFloat","C:\\HaxeToolkit\\haxe\\std/UInt.hx",204,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(205)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	{
		HX_STACK_LINE(205)
		int _int = a;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(205)
		bool tmp1 = (_int < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		if ((tmp1)){
			HX_STACK_LINE(205)
			tmp = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(205)
			tmp = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(205)
	Dynamic tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,equalsFloat,return )

bool UInt_Impl__obj::notEqualsFloat( int a,Dynamic b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","notEqualsFloat",0x90576b89,"_UInt.UInt_Impl_.notEqualsFloat","C:\\HaxeToolkit\\haxe\\std/UInt.hx",208,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(209)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(209)
	{
		HX_STACK_LINE(209)
		int _int = a;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(209)
		bool tmp1 = (_int < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		if ((tmp1)){
			HX_STACK_LINE(209)
			tmp = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(209)
			tmp = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(209)
	Dynamic tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(209)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(209)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,notEqualsFloat,return )

bool UInt_Impl__obj::gteFloat( int a,Float b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","gteFloat",0x8362aea3,"_UInt.UInt_Impl_.gteFloat","C:\\HaxeToolkit\\haxe\\std/UInt.hx",212,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(213)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	{
		HX_STACK_LINE(213)
		int _int = a;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(213)
		bool tmp1 = (_int < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		if ((tmp1)){
			HX_STACK_LINE(213)
			tmp = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(213)
			tmp = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(213)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(213)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(213)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,gteFloat,return )

bool UInt_Impl__obj::floatGt( Float a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","floatGt",0x40ec920a,"_UInt.UInt_Impl_.floatGt","C:\\HaxeToolkit\\haxe\\std/UInt.hx",217,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(218)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	{
		HX_STACK_LINE(218)
		int _int = b;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(218)
		bool tmp2 = (_int < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(218)
		if ((tmp2)){
			HX_STACK_LINE(218)
			tmp1 = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(218)
			tmp1 = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(218)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,floatGt,return )

bool UInt_Impl__obj::floatGte( Float a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","floatGte",0x8e13371b,"_UInt.UInt_Impl_.floatGte","C:\\HaxeToolkit\\haxe\\std/UInt.hx",221,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(222)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(222)
		int _int = b;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(222)
		bool tmp2 = (_int < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(222)
		if ((tmp2)){
			HX_STACK_LINE(222)
			tmp1 = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(222)
			tmp1 = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(222)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,floatGte,return )

bool UInt_Impl__obj::ltFloat( int a,Float b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","ltFloat",0xd91c1915,"_UInt.UInt_Impl_.ltFloat","C:\\HaxeToolkit\\haxe\\std/UInt.hx",225,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(226)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	{
		HX_STACK_LINE(226)
		int _int = a;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(226)
		bool tmp1 = (_int < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(226)
		if ((tmp1)){
			HX_STACK_LINE(226)
			tmp = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(226)
			tmp = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(226)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(226)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,ltFloat,return )

bool UInt_Impl__obj::lteFloat( int a,Float b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","lteFloat",0xa15ee93e,"_UInt.UInt_Impl_.lteFloat","C:\\HaxeToolkit\\haxe\\std/UInt.hx",229,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(230)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	{
		HX_STACK_LINE(230)
		int _int = a;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(230)
		bool tmp1 = (_int < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		if ((tmp1)){
			HX_STACK_LINE(230)
			tmp = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(230)
			tmp = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(230)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(230)
	bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,lteFloat,return )

bool UInt_Impl__obj::floatLt( Float a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","floatLt",0x40ec9665,"_UInt.UInt_Impl_.floatLt","C:\\HaxeToolkit\\haxe\\std/UInt.hx",233,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(234)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	{
		HX_STACK_LINE(234)
		int _int = b;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(234)
		bool tmp2 = (_int < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(234)
		if ((tmp2)){
			HX_STACK_LINE(234)
			tmp1 = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(234)
			tmp1 = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(234)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(234)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,floatLt,return )

bool UInt_Impl__obj::floatLte( Float a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","floatLte",0x8e170260,"_UInt.UInt_Impl_.floatLte","C:\\HaxeToolkit\\haxe\\std/UInt.hx",237,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(238)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(238)
		int _int = b;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(238)
		bool tmp2 = (_int < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		if ((tmp2)){
			HX_STACK_LINE(238)
			tmp1 = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(238)
			tmp1 = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(238)
	bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(238)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,floatLte,return )

Float UInt_Impl__obj::modFloat( int a,Float b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","modFloat",0xa44aad39,"_UInt.UInt_Impl_.modFloat","C:\\HaxeToolkit\\haxe\\std/UInt.hx",241,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(242)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	{
		HX_STACK_LINE(242)
		int _int = a;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(242)
		bool tmp1 = (_int < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		if ((tmp1)){
			HX_STACK_LINE(242)
			tmp = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(242)
			tmp = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(242)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	Float tmp2 = hx::Mod(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(242)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,modFloat,return )

Float UInt_Impl__obj::floatMod( Float a,int b){
	HX_STACK_FRAME("_UInt.UInt_Impl_","floatMod",0x8e17c045,"_UInt.UInt_Impl_.floatMod","C:\\HaxeToolkit\\haxe\\std/UInt.hx",245,0xe7e858ab)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(246)
	Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(246)
	{
		HX_STACK_LINE(246)
		int _int = b;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(246)
		bool tmp2 = (_int < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		if ((tmp2)){
			HX_STACK_LINE(246)
			tmp1 = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(246)
			tmp1 = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(246)
	Float tmp2 = hx::Mod(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,floatMod,return )

int UInt_Impl__obj::negBits( int this1){
	HX_STACK_FRAME("_UInt.UInt_Impl_","negBits",0x115e4e97,"_UInt.UInt_Impl_.negBits","C:\\HaxeToolkit\\haxe\\std/UInt.hx",249,0xe7e858ab)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(250)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	int tmp1 = ~(int)(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt_Impl__obj,negBits,return )

int UInt_Impl__obj::prefixIncrement( int this1){
	HX_STACK_FRAME("_UInt.UInt_Impl_","prefixIncrement",0x6c79c25e,"_UInt.UInt_Impl_.prefixIncrement","C:\\HaxeToolkit\\haxe\\std/UInt.hx",253,0xe7e858ab)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(254)
	int tmp = ++(this1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(254)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt_Impl__obj,prefixIncrement,return )

int UInt_Impl__obj::postfixIncrement( int this1){
	HX_STACK_FRAME("_UInt.UInt_Impl_","postfixIncrement",0x55bafab9,"_UInt.UInt_Impl_.postfixIncrement","C:\\HaxeToolkit\\haxe\\std/UInt.hx",257,0xe7e858ab)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(258)
	int tmp = (this1)++;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt_Impl__obj,postfixIncrement,return )

int UInt_Impl__obj::prefixDecrement( int this1){
	HX_STACK_FRAME("_UInt.UInt_Impl_","prefixDecrement",0x4afcb242,"_UInt.UInt_Impl_.prefixDecrement","C:\\HaxeToolkit\\haxe\\std/UInt.hx",261,0xe7e858ab)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(262)
	int tmp = --(this1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt_Impl__obj,prefixDecrement,return )

int UInt_Impl__obj::postfixDecrement( int this1){
	HX_STACK_FRAME("_UInt.UInt_Impl_","postfixDecrement",0x343dea9d,"_UInt.UInt_Impl_.postfixDecrement","C:\\HaxeToolkit\\haxe\\std/UInt.hx",265,0xe7e858ab)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(266)
	int tmp = (this1)--;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt_Impl__obj,postfixDecrement,return )

::String UInt_Impl__obj::toString( int this1,Dynamic radix){
	HX_STACK_FRAME("_UInt.UInt_Impl_","toString",0xe8fc1e6b,"_UInt.UInt_Impl_.toString","C:\\HaxeToolkit\\haxe\\std/UInt.hx",270,0xe7e858ab)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(radix,"radix")
	HX_STACK_LINE(271)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(271)
	{
		HX_STACK_LINE(271)
		int _int = this1;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(271)
		bool tmp1 = (_int < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		if ((tmp1)){
			HX_STACK_LINE(271)
			tmp = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(271)
			tmp = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(271)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(271)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt_Impl__obj,toString,return )

int UInt_Impl__obj::toInt( int this1){
	HX_STACK_FRAME("_UInt.UInt_Impl_","toInt",0x49d5f315,"_UInt.UInt_Impl_.toInt","C:\\HaxeToolkit\\haxe\\std/UInt.hx",274,0xe7e858ab)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(275)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt_Impl__obj,toInt,return )

Float UInt_Impl__obj::toFloat( int this1){
	HX_STACK_FRAME("_UInt.UInt_Impl_","toFloat",0x25ff0142,"_UInt.UInt_Impl_.toFloat","C:\\HaxeToolkit\\haxe\\std/UInt.hx",278,0xe7e858ab)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(279)
	int _int = this1;		HX_STACK_VAR(_int,"int");
	HX_STACK_LINE(280)
	bool tmp = (_int < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	if ((tmp)){
		HX_STACK_LINE(281)
		Float tmp1 = (((Float)4294967296.0) + _int);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(281)
		return tmp1;
	}
	else{
		HX_STACK_LINE(286)
		Float tmp1 = (_int + ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		return tmp1;
	}
	HX_STACK_LINE(280)
	return ((Float)0.);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt_Impl__obj,toFloat,return )


UInt_Impl__obj::UInt_Impl__obj()
{
}

bool UInt_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gt") ) { outValue = gt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lt") ) { outValue = lt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"or") ) { outValue = _or_dyn(); return true;  }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"div") ) { outValue = div_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mul") ) { outValue = mul_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sub") ) { outValue = sub_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gte") ) { outValue = gte_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lte") ) { outValue = lte_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"and") ) { outValue = _and_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"xor") ) { outValue = _xor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"shl") ) { outValue = shl_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"shr") ) { outValue = shr_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mod") ) { outValue = mod_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ushr") ) { outValue = ushr_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gtFloat") ) { outValue = gtFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"floatGt") ) { outValue = floatGt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ltFloat") ) { outValue = ltFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"floatLt") ) { outValue = floatLt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"negBits") ) { outValue = negBits_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toFloat") ) { outValue = toFloat_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"divFloat") ) { outValue = divFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"floatDiv") ) { outValue = floatDiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"subFloat") ) { outValue = subFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"floatSub") ) { outValue = floatSub_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gteFloat") ) { outValue = gteFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"floatGte") ) { outValue = floatGte_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lteFloat") ) { outValue = lteFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"floatLte") ) { outValue = floatLte_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"modFloat") ) { outValue = modFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"floatMod") ) { outValue = floatMod_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"equalsInt") ) { outValue = equalsInt_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"equalsFloat") ) { outValue = equalsFloat_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addWithFloat") ) { outValue = addWithFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mulWithFloat") ) { outValue = mulWithFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"notEqualsInt") ) { outValue = notEqualsInt_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"notEqualsFloat") ) { outValue = notEqualsFloat_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"prefixIncrement") ) { outValue = prefixIncrement_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"prefixDecrement") ) { outValue = prefixDecrement_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"postfixIncrement") ) { outValue = postfixIncrement_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"postfixDecrement") ) { outValue = postfixDecrement_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UInt_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UInt_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class UInt_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("div","\x51","\x3d","\x4c","\x00"),
	HX_HCSTRING("mul","\x04","\x1c","\x53","\x00"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("gt","\x2d","\x5a","\x00","\x00"),
	HX_HCSTRING("gte","\x98","\x8d","\x4e","\x00"),
	HX_HCSTRING("lt","\x88","\x5e","\x00","\x00"),
	HX_HCSTRING("lte","\xdd","\x58","\x52","\x00"),
	HX_HCSTRING("and","\xd7","\xfa","\x49","\x00"),
	HX_HCSTRING("or","\x23","\x61","\x00","\x00"),
	HX_HCSTRING("xor","\x9b","\x6f","\x5b","\x00"),
	HX_HCSTRING("shl","\x37","\x9e","\x57","\x00"),
	HX_HCSTRING("shr","\x3d","\x9e","\x57","\x00"),
	HX_HCSTRING("ushr","\xe8","\x94","\xad","\x4d"),
	HX_HCSTRING("mod","\xc2","\x16","\x53","\x00"),
	HX_HCSTRING("addWithFloat","\x55","\x4b","\xd8","\x85"),
	HX_HCSTRING("mulWithFloat","\x12","\x4d","\xea","\x2b"),
	HX_HCSTRING("divFloat","\x8b","\x12","\xe3","\x29"),
	HX_HCSTRING("floatDiv","\x15","\x99","\x83","\xdd"),
	HX_HCSTRING("subFloat","\xfc","\x1b","\xb6","\x77"),
	HX_HCSTRING("floatSub","\x44","\x05","\x8f","\xdd"),
	HX_HCSTRING("gtFloat","\x2f","\xd8","\x4c","\xb2"),
	HX_HCSTRING("equalsInt","\xf0","\x07","\xf2","\xbd"),
	HX_HCSTRING("notEqualsInt","\x5d","\xd4","\x34","\xa2"),
	HX_HCSTRING("equalsFloat","\xdd","\x42","\xee","\xe8"),
	HX_HCSTRING("notEqualsFloat","\x8a","\xc4","\xce","\x7c"),
	HX_HCSTRING("gteFloat","\xe4","\x60","\xd5","\xd2"),
	HX_HCSTRING("floatGt","\xe9","\xa2","\x08","\xea"),
	HX_HCSTRING("floatGte","\x5c","\xe9","\x85","\xdd"),
	HX_HCSTRING("ltFloat","\xf4","\x29","\x38","\x82"),
	HX_HCSTRING("lteFloat","\x7f","\x9b","\xd1","\xf0"),
	HX_HCSTRING("floatLt","\x44","\xa7","\x08","\xea"),
	HX_HCSTRING("floatLte","\xa1","\xb4","\x89","\xdd"),
	HX_HCSTRING("modFloat","\x7a","\x5f","\xbd","\xf3"),
	HX_HCSTRING("floatMod","\x86","\x72","\x8a","\xdd"),
	HX_HCSTRING("negBits","\x76","\x5f","\x7a","\xba"),
	HX_HCSTRING("prefixIncrement","\x3d","\x4a","\x70","\x68"),
	HX_HCSTRING("postfixIncrement","\xfa","\x55","\x7b","\xd1"),
	HX_HCSTRING("prefixDecrement","\x21","\x3a","\xf3","\x46"),
	HX_HCSTRING("postfixDecrement","\xde","\x45","\xfe","\xaf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toInt","\x34","\xbe","\x11","\x14"),
	HX_HCSTRING("toFloat","\x21","\x12","\x1b","\xcf"),
	::String(null()) };

void UInt_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("_UInt.UInt_Impl_","\x8f","\xc6","\xc3","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UInt_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< UInt_Impl__obj >;
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

} // end namespace _UInt
