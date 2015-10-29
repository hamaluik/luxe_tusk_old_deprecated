#include <hxcpp.h>

#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
#endif
namespace haxe{
namespace _Int64{

Void Int64_Impl__obj::__construct()
{
	return null();
}

//Int64_Impl__obj::~Int64_Impl__obj() { }

Dynamic Int64_Impl__obj::__CreateEmpty() { return  new Int64_Impl__obj; }
hx::ObjectPtr< Int64_Impl__obj > Int64_Impl__obj::__new()
{  hx::ObjectPtr< Int64_Impl__obj > _result_ = new Int64_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Int64_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int64_Impl__obj > _result_ = new Int64_Impl__obj();
	_result_->__construct();
	return _result_;}

cpp::Int64Struct Int64_Impl__obj::copy( cpp::Int64Struct this1){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","copy",0xdafd68ae,"haxe._Int64.Int64_Impl_.copy","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",39,0x97dcebb4)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(39)
	cpp::Int64Struct tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,copy,return )

cpp::Int64Struct Int64_Impl__obj::make( int high,int low){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","make",0xe18ee6e7,"haxe._Int64.Int64_Impl_.make","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",43,0x97dcebb4)
	HX_STACK_ARG(high,"high")
	HX_STACK_ARG(low,"low")
	HX_STACK_LINE(43)
	return cpp::Int64Struct(( ( (cpp::Int64)((unsigned int)high) ) << 32 ) | ((unsigned int)low));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,make,return )

cpp::Int64Struct Int64_Impl__obj::ofInt( int x){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","ofInt",0xa57c98ff,"haxe._Int64.Int64_Impl_.ofInt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",47,0x97dcebb4)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(47)
	return ((cpp::Int64)(x));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,ofInt,return )

int Int64_Impl__obj::toInt( cpp::Int64Struct x){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","toInt",0x8c706b1b,"haxe._Int64.Int64_Impl_.toInt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",55,0x97dcebb4)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(56)
	int tmp = (int((int)((x)&0xffffffff)) >> int((int)31));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	bool tmp2 = ((int)(((cpp::Int64)(x))>>32) != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	if ((tmp3)){
		HX_STACK_LINE(57)
		HX_STACK_DO_THROW(HX_HCSTRING("Overflow","\x62","\x9f","\xed","\x1a"));
	}
	HX_STACK_LINE(59)
	return (int)((x)&0xffffffff);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,toInt,return )

bool Int64_Impl__obj::is( Dynamic val){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","is",0xecc1a8a3,"haxe._Int64.Int64_Impl_.is","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",66,0x97dcebb4)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(66)
	return (cpp::Int64Struct::is(val));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,is,return )

int Int64_Impl__obj::getHigh( cpp::Int64Struct x){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","getHigh",0x66a1dbbf,"haxe._Int64.Int64_Impl_.getHigh","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",73,0x97dcebb4)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(73)
	return (int)(((cpp::Int64)(x))>>32);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,getHigh,return )

int Int64_Impl__obj::getLow( cpp::Int64Struct x){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","getLow",0x7d9a2ad7,"haxe._Int64.Int64_Impl_.getLow","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",80,0x97dcebb4)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(80)
	return (int)((x)&0xffffffff);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,getLow,return )

bool Int64_Impl__obj::isNeg( cpp::Int64Struct x){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","isNeg",0x39b0a76d,"haxe._Int64.Int64_Impl_.isNeg","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",86,0x97dcebb4)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(86)
	return ((x.get()) < 0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,isNeg,return )

bool Int64_Impl__obj::isZero( cpp::Int64Struct x){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","isZero",0x48d0716b,"haxe._Int64.Int64_Impl_.isZero","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",92,0x97dcebb4)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(92)
	return ((x.get()) == 0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,isZero,return )

int Int64_Impl__obj::compare( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","compare",0xd27a0d4c,"haxe._Int64.Int64_Impl_.compare","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",100,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(100)
	return ( (a.get()) < (b.get()) ? -1 : (a)==(b) ? 0 : 1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,compare,return )

int Int64_Impl__obj::ucompare( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","ucompare",0x873c5e49,"haxe._Int64.Int64_Impl_.ucompare","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",109,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(109)
	return ( (cpp::UInt64)(a.get()) < (cpp::UInt64)(b.get()) ? -1 : (a.get())==(b.get()) ? 0 : 1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,ucompare,return )

::String Int64_Impl__obj::toStr( cpp::Int64Struct x){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","toStr",0x8c7806dd,"haxe._Int64.Int64_Impl_.toStr","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",116,0x97dcebb4)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(116)
	cpp::Int64Struct tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	::String tmp1 = ::haxe::_Int64::Int64_Impl__obj::toString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,toStr,return )

::String Int64_Impl__obj::toString( cpp::Int64Struct this1){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","toString",0x1833ee25,"haxe._Int64.Int64_Impl_.toString","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",120,0x97dcebb4)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(120)
	return String( (this1).get() );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,toString,return )

Dynamic Int64_Impl__obj::divMod( cpp::Int64Struct dividend,cpp::Int64Struct divisor){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","divMod",0x9975972a,"haxe._Int64.Int64_Impl_.divMod","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",128,0x97dcebb4)
	HX_STACK_ARG(dividend,"dividend")
	HX_STACK_ARG(divisor,"divisor")
	HX_STACK_LINE(129)
	cpp::Int64Struct tmp = dividend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	cpp::Int64Struct tmp1 = divisor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(129)
	cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::div(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(129)
	cpp::Int64Struct q = tmp2;		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(131)
	if ((((divisor.get()) == 0))){
		HX_STACK_LINE(132)
		HX_STACK_DO_THROW(HX_HCSTRING("divide by zero","\x6a","\xd2","\xeb","\x57"));
	}
	HX_STACK_LINE(134)
	cpp::Int64Struct tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	{
		HX_STACK_LINE(134)
		cpp::Int64Struct b = ((q.get()) * (divisor.get()));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(134)
		tmp3 = ((dividend.get()) - (b.get()));
	}
	HX_STACK_LINE(134)
	cpp::Int64Struct m = tmp3;		HX_STACK_VAR(m,"m");
	struct _Function_1_1{
		inline static Dynamic Block( cpp::Int64Struct &m,cpp::Int64Struct &q){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",136,0x97dcebb4)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("quotient","\xab","\x68","\x60","\xb2") , q,false);
				__result->Add(HX_HCSTRING("modulus","\x37","\xf0","\xfa","\xf7") , m,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(136)
	Dynamic tmp4 = _Function_1_1::Block(m,q);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(136)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,divMod,return )

cpp::Int64Struct Int64_Impl__obj::neg( cpp::Int64Struct x){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","neg",0x3cb5a577,"haxe._Int64.Int64_Impl_.neg","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",143,0x97dcebb4)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(143)
	return (-(x.get()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,neg,return )

cpp::Int64Struct Int64_Impl__obj::preIncrement( cpp::Int64Struct this1){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","preIncrement",0xc892b785,"haxe._Int64.Int64_Impl_.preIncrement","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",151,0x97dcebb4)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(151)
	return (++(this1.get()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,preIncrement,return )

cpp::Int64Struct Int64_Impl__obj::postIncrement( cpp::Int64Struct this1){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","postIncrement",0x70724196,"haxe._Int64.Int64_Impl_.postIncrement","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",161,0x97dcebb4)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(161)
	return ((this1.get())++);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,postIncrement,return )

cpp::Int64Struct Int64_Impl__obj::preDecrement( cpp::Int64Struct this1){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","preDecrement",0xa715a769,"haxe._Int64.Int64_Impl_.preDecrement","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",170,0x97dcebb4)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(170)
	return (--(this1.get()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,preDecrement,return )

cpp::Int64Struct Int64_Impl__obj::postDecrement( cpp::Int64Struct this1){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","postDecrement",0x4ef5317a,"haxe._Int64.Int64_Impl_.postDecrement","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",180,0x97dcebb4)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(180)
	return ((this1.get())--);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,postDecrement,return )

cpp::Int64Struct Int64_Impl__obj::add( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","add",0x3cabc748,"haxe._Int64.Int64_Impl_.add","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",188,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(188)
	return ((a.get()) + (b.get()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,add,return )

cpp::Int64Struct Int64_Impl__obj::addInt( cpp::Int64Struct a,int b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","addInt",0x7979ba87,"haxe._Int64.Int64_Impl_.addInt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",192,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(192)
	cpp::Int64Struct tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		int tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		cpp::Int64Struct b1 = tmp2;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(192)
		tmp = ((a.get()) + (b1.get()));
	}
	HX_STACK_LINE(192)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,addInt,return )

cpp::Int64Struct Int64_Impl__obj::sub( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","sub",0x3cb97ea7,"haxe._Int64.Int64_Impl_.sub","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",198,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(198)
	return ((a.get()) - (b.get()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,sub,return )

cpp::Int64Struct Int64_Impl__obj::subInt( cpp::Int64Struct a,int b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","subInt",0x7463a888,"haxe._Int64.Int64_Impl_.subInt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",202,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(202)
	cpp::Int64Struct tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		int tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		cpp::Int64Struct b1 = tmp2;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(202)
		tmp = ((a.get()) - (b1.get()));
	}
	HX_STACK_LINE(202)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,subInt,return )

cpp::Int64Struct Int64_Impl__obj::intSub( int a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","intSub",0x78f1710a,"haxe._Int64.Int64_Impl_.intSub","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",205,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(205)
	cpp::Int64Struct tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	{
		HX_STACK_LINE(205)
		int tmp1 = a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		cpp::Int64Struct a1 = tmp2;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(205)
		tmp = ((a1.get()) - (b.get()));
	}
	HX_STACK_LINE(205)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,intSub,return )

cpp::Int64Struct Int64_Impl__obj::mul( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","mul",0x3cb4f12b,"haxe._Int64.Int64_Impl_.mul","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",211,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(211)
	return ((a.get()) * (b.get()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,mul,return )

cpp::Int64Struct Int64_Impl__obj::mulInt( cpp::Int64Struct a,int b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","mulInt",0x14dba084,"haxe._Int64.Int64_Impl_.mulInt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",215,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(215)
	cpp::Int64Struct tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(215)
		int tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		cpp::Int64Struct b1 = tmp2;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(215)
		tmp = ((a.get()) * (b1.get()));
	}
	HX_STACK_LINE(215)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,mulInt,return )

cpp::Int64Struct Int64_Impl__obj::div( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","div",0x3cae1278,"haxe._Int64.Int64_Impl_.div","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",220,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(221)
	if ((((b.get()) == 0))){
		HX_STACK_LINE(222)
		HX_STACK_DO_THROW(HX_HCSTRING("divide by zero","\x6a","\xd2","\xeb","\x57"));
	}
	HX_STACK_LINE(223)
	return ((a.get()) / (b.get()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,div,return )

cpp::Int64Struct Int64_Impl__obj::divInt( cpp::Int64Struct a,int b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","divInt",0x99728d57,"haxe._Int64.Int64_Impl_.divInt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",228,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(228)
	cpp::Int64Struct tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	int tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(228)
	cpp::Int64Struct tmp3 = ::haxe::_Int64::Int64_Impl__obj::div(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(228)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,divInt,return )

cpp::Int64Struct Int64_Impl__obj::intDiv( int a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","intDiv",0x78e604db,"haxe._Int64.Int64_Impl_.intDiv","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",231,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(231)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		int tmp1 = a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		cpp::Int64Struct tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		cpp::Int64Struct tmp4 = ::haxe::_Int64::Int64_Impl__obj::div(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(231)
		cpp::Int64Struct x = tmp4;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(231)
		int tmp5 = (int((int)((x)&0xffffffff)) >> int((int)31));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(231)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(231)
		bool tmp7 = ((int)(((cpp::Int64)(x))>>32) != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(231)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(231)
		if ((tmp8)){
			HX_STACK_LINE(231)
			HX_STACK_DO_THROW(HX_HCSTRING("Overflow","\x62","\x9f","\xed","\x1a"));
		}
		HX_STACK_LINE(231)
		tmp = (int)((x)&0xffffffff);
	}
	HX_STACK_LINE(231)
	cpp::Int64Struct tmp1 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(231)
	return tmp1;
	HX_STACK_LINE(231)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,intDiv,return )

cpp::Int64Struct Int64_Impl__obj::mod( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","mod",0x3cb4ebe9,"haxe._Int64.Int64_Impl_.mod","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",237,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(238)
	if ((((b.get()) == 0))){
		HX_STACK_LINE(239)
		HX_STACK_DO_THROW(HX_HCSTRING("divide by zero","\x6a","\xd2","\xeb","\x57"));
	}
	HX_STACK_LINE(240)
	return ((a.get()) % (b.get()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,mod,return )

cpp::Int64Struct Int64_Impl__obj::modInt( cpp::Int64Struct a,int b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","modInt",0x9b2a7086,"haxe._Int64.Int64_Impl_.modInt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",244,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(244)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	{
		HX_STACK_LINE(244)
		cpp::Int64Struct tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(244)
			int tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(244)
			cpp::Int64Struct tmp3 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(244)
			cpp::Int64Struct b1 = tmp3;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(244)
			if ((((b1.get()) == 0))){
				HX_STACK_LINE(244)
				HX_STACK_DO_THROW(HX_HCSTRING("divide by zero","\x6a","\xd2","\xeb","\x57"));
			}
			HX_STACK_LINE(244)
			tmp1 = ((a.get()) % (b1.get()));
		}
		HX_STACK_LINE(244)
		cpp::Int64Struct x = tmp1;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(244)
		int tmp2 = (int((int)((x)&0xffffffff)) >> int((int)31));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(244)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(244)
		bool tmp4 = ((int)(((cpp::Int64)(x))>>32) != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(244)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(244)
		if ((tmp5)){
			HX_STACK_LINE(244)
			HX_STACK_DO_THROW(HX_HCSTRING("Overflow","\x62","\x9f","\xed","\x1a"));
		}
		HX_STACK_LINE(244)
		tmp = (int)((x)&0xffffffff);
	}
	HX_STACK_LINE(244)
	cpp::Int64Struct tmp1 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	return tmp1;
	HX_STACK_LINE(244)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,modInt,return )

cpp::Int64Struct Int64_Impl__obj::intMod( int a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","intMod",0x78ecde4c,"haxe._Int64.Int64_Impl_.intMod","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",247,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(247)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	{
		HX_STACK_LINE(247)
		cpp::Int64Struct tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(247)
			int tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(247)
			cpp::Int64Struct tmp3 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(247)
			cpp::Int64Struct a1 = tmp3;		HX_STACK_VAR(a1,"a1");
			HX_STACK_LINE(247)
			if ((((b.get()) == 0))){
				HX_STACK_LINE(247)
				HX_STACK_DO_THROW(HX_HCSTRING("divide by zero","\x6a","\xd2","\xeb","\x57"));
			}
			HX_STACK_LINE(247)
			tmp1 = ((a1.get()) % (b.get()));
		}
		HX_STACK_LINE(247)
		cpp::Int64Struct x = tmp1;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(247)
		int tmp2 = (int((int)((x)&0xffffffff)) >> int((int)31));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		bool tmp4 = ((int)(((cpp::Int64)(x))>>32) != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(247)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(247)
		if ((tmp5)){
			HX_STACK_LINE(247)
			HX_STACK_DO_THROW(HX_HCSTRING("Overflow","\x62","\x9f","\xed","\x1a"));
		}
		HX_STACK_LINE(247)
		tmp = (int)((x)&0xffffffff);
	}
	HX_STACK_LINE(247)
	cpp::Int64Struct tmp1 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	return tmp1;
	HX_STACK_LINE(247)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,intMod,return )

bool Int64_Impl__obj::eq( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","eq",0xecc1a525,"haxe._Int64.Int64_Impl_.eq","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",253,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(253)
	return ((a.get()) == (b.get()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,eq,return )

bool Int64_Impl__obj::eqInt( cpp::Int64Struct a,int b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","eqInt",0xeac024ca,"haxe._Int64.Int64_Impl_.eqInt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",256,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(256)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(256)
		int tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(256)
		cpp::Int64Struct b1 = tmp2;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(256)
		tmp = ((a.get()) == (b1.get()));
	}
	HX_STACK_LINE(256)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,eqInt,return )

bool Int64_Impl__obj::neq( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","neq",0x3cb5a581,"haxe._Int64.Int64_Impl_.neq","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",262,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(262)
	return ((a.get()) != (b.get()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,neq,return )

bool Int64_Impl__obj::neqInt( cpp::Int64Struct a,int b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","neqInt",0x481bc5ee,"haxe._Int64.Int64_Impl_.neqInt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",265,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(265)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	{
		HX_STACK_LINE(265)
		int tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(265)
		cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		cpp::Int64Struct b1 = tmp2;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(265)
		tmp = ((a.get()) != (b1.get()));
	}
	HX_STACK_LINE(265)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,neqInt,return )

bool Int64_Impl__obj::lt( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","lt",0xecc1ab41,"haxe._Int64.Int64_Impl_.lt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",268,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(268)
	bool tmp = (( (a.get()) < (b.get()) ? -1 : (a)==(b) ? 0 : 1) < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,lt,return )

bool Int64_Impl__obj::ltInt( cpp::Int64Struct a,int b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","ltInt",0xf489d82e,"haxe._Int64.Int64_Impl_.ltInt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",271,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(271)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(271)
	{
		HX_STACK_LINE(271)
		int tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		cpp::Int64Struct b1 = tmp2;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(271)
		tmp = (( (a.get()) < (b1.get()) ? -1 : (a)==(b1) ? 0 : 1) < (int)0);
	}
	HX_STACK_LINE(271)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,ltInt,return )

bool Int64_Impl__obj::intLt( int a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","intLt",0x367f563e,"haxe._Int64.Int64_Impl_.intLt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",274,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(274)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	{
		HX_STACK_LINE(274)
		int tmp1 = a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(274)
		cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(274)
		cpp::Int64Struct a1 = tmp2;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(274)
		tmp = (( (a1.get()) < (b.get()) ? -1 : (a1)==(b) ? 0 : 1) < (int)0);
	}
	HX_STACK_LINE(274)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,intLt,return )

bool Int64_Impl__obj::lte( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","lte",0x3cb42e04,"haxe._Int64.Int64_Impl_.lte","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",277,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(277)
	bool tmp = (( (a.get()) < (b.get()) ? -1 : (a)==(b) ? 0 : 1) <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,lte,return )

bool Int64_Impl__obj::lteInt( cpp::Int64Struct a,int b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","lteInt",0x1679314b,"haxe._Int64.Int64_Impl_.lteInt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",280,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(280)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	{
		HX_STACK_LINE(280)
		int tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(280)
		cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(280)
		cpp::Int64Struct b1 = tmp2;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(280)
		tmp = (( (a.get()) < (b1.get()) ? -1 : (a)==(b1) ? 0 : 1) <= (int)0);
	}
	HX_STACK_LINE(280)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,lteInt,return )

bool Int64_Impl__obj::intLte( int a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","intLte",0x78ec2067,"haxe._Int64.Int64_Impl_.intLte","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",283,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(283)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	{
		HX_STACK_LINE(283)
		int tmp1 = a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(283)
		cpp::Int64Struct a1 = tmp2;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(283)
		tmp = (( (a1.get()) < (b.get()) ? -1 : (a1)==(b) ? 0 : 1) <= (int)0);
	}
	HX_STACK_LINE(283)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,intLte,return )

bool Int64_Impl__obj::gt( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","gt",0xecc1a6e6,"haxe._Int64.Int64_Impl_.gt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",286,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(286)
	bool tmp = (( (a.get()) < (b.get()) ? -1 : (a)==(b) ? 0 : 1) > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,gt,return )

bool Int64_Impl__obj::gtInt( cpp::Int64Struct a,int b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","gtInt",0x1388f1a9,"haxe._Int64.Int64_Impl_.gtInt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",289,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(289)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(289)
	{
		HX_STACK_LINE(289)
		int tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(289)
		cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		cpp::Int64Struct b1 = tmp2;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(289)
		tmp = (( (a.get()) < (b1.get()) ? -1 : (a)==(b1) ? 0 : 1) > (int)0);
	}
	HX_STACK_LINE(289)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,gtInt,return )

bool Int64_Impl__obj::intGt( int a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","intGt",0x367f51e3,"haxe._Int64.Int64_Impl_.intGt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",292,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(292)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(292)
	{
		HX_STACK_LINE(292)
		int tmp1 = a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		cpp::Int64Struct a1 = tmp2;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(292)
		tmp = (( (a1.get()) < (b.get()) ? -1 : (a1)==(b) ? 0 : 1) > (int)0);
	}
	HX_STACK_LINE(292)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,intGt,return )

bool Int64_Impl__obj::gte( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","gte",0x3cb062bf,"haxe._Int64.Int64_Impl_.gte","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",295,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(295)
	bool tmp = (( (a.get()) < (b.get()) ? -1 : (a)==(b) ? 0 : 1) >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,gte,return )

bool Int64_Impl__obj::gteInt( cpp::Int64Struct a,int b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","gteInt",0x16b06370,"haxe._Int64.Int64_Impl_.gteInt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",298,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(298)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	{
		HX_STACK_LINE(298)
		int tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(298)
		cpp::Int64Struct b1 = tmp2;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(298)
		tmp = (( (a.get()) < (b1.get()) ? -1 : (a)==(b1) ? 0 : 1) >= (int)0);
	}
	HX_STACK_LINE(298)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,gteInt,return )

bool Int64_Impl__obj::intGte( int a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","intGte",0x78e85522,"haxe._Int64.Int64_Impl_.intGte","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",301,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(301)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(301)
	{
		HX_STACK_LINE(301)
		int tmp1 = a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(301)
		cpp::Int64Struct tmp2 = ::haxe::_Int64::Int64_Impl__obj::ofInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		cpp::Int64Struct a1 = tmp2;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(301)
		tmp = (( (a1.get()) < (b.get()) ? -1 : (a1)==(b) ? 0 : 1) >= (int)0);
	}
	HX_STACK_LINE(301)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,intGte,return )

cpp::Int64Struct Int64_Impl__obj::complement( cpp::Int64Struct a){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","complement",0x2f16709f,"haxe._Int64.Int64_Impl_.complement","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",307,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(307)
	return (~(a.get()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,complement,return )

cpp::Int64Struct Int64_Impl__obj::_and( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","and",0x3cabcffe,"haxe._Int64.Int64_Impl_.and","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",313,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(313)
	return ((a) & (b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,_and,return )

cpp::Int64Struct Int64_Impl__obj::_or( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","or",0xecc1addc,"haxe._Int64.Int64_Impl_.or","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",319,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(319)
	return ((a) | (b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,_or,return )

cpp::Int64Struct Int64_Impl__obj::_xor( cpp::Int64Struct a,cpp::Int64Struct b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","xor",0x3cbd44c2,"haxe._Int64.Int64_Impl_.xor","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",325,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(325)
	return ((a) ^ (b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,_xor,return )

cpp::Int64Struct Int64_Impl__obj::shl( cpp::Int64Struct a,int b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","shl",0x3cb9735e,"haxe._Int64.Int64_Impl_.shl","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",331,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(331)
	return ((a) << ((int(b) & int((int)63))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,shl,return )

cpp::Int64Struct Int64_Impl__obj::shr( cpp::Int64Struct a,int b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","shr",0x3cb97364,"haxe._Int64.Int64_Impl_.shr","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",338,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(338)
	return ((a) >> ((int(b) & int((int)63))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,shr,return )

cpp::Int64Struct Int64_Impl__obj::ushr( cpp::Int64Struct a,int b){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","ushr",0xe6e641e1,"haxe._Int64.Int64_Impl_.ushr","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",345,0x97dcebb4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(345)
	return (((cpp::UInt64)(a)) >> ((int(b) & int((int)63))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_Impl__obj,ushr,return )

int Int64_Impl__obj::get_high( cpp::Int64Struct this1){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","get_high",0xa48e1064,"haxe._Int64.Int64_Impl_.get_high","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",349,0x97dcebb4)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(349)
	return (int)(((cpp::Int64)(this1))>>32);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,get_high,return )

int Int64_Impl__obj::get_low( cpp::Int64Struct this1){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","get_low",0x75d811d2,"haxe._Int64.Int64_Impl_.get_low","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Int64.hx",353,0x97dcebb4)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(353)
	return (int)((this1)&0xffffffff);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,get_low,return )


Int64_Impl__obj::Int64_Impl__obj()
{
}

bool Int64_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"is") ) { outValue = is_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"eq") ) { outValue = eq_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lt") ) { outValue = lt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gt") ) { outValue = gt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"or") ) { outValue = _or_dyn(); return true;  }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"neg") ) { outValue = neg_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sub") ) { outValue = sub_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mul") ) { outValue = mul_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"div") ) { outValue = div_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mod") ) { outValue = mod_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"neq") ) { outValue = neq_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lte") ) { outValue = lte_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gte") ) { outValue = gte_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"and") ) { outValue = _and_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"xor") ) { outValue = _xor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"shl") ) { outValue = shl_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"shr") ) { outValue = shr_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"make") ) { outValue = make_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ushr") ) { outValue = ushr_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ofInt") ) { outValue = ofInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isNeg") ) { outValue = isNeg_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toStr") ) { outValue = toStr_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"eqInt") ) { outValue = eqInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ltInt") ) { outValue = ltInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"intLt") ) { outValue = intLt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gtInt") ) { outValue = gtInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"intGt") ) { outValue = intGt_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getLow") ) { outValue = getLow_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isZero") ) { outValue = isZero_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"divMod") ) { outValue = divMod_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"addInt") ) { outValue = addInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"subInt") ) { outValue = subInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"intSub") ) { outValue = intSub_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mulInt") ) { outValue = mulInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"divInt") ) { outValue = divInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"intDiv") ) { outValue = intDiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"modInt") ) { outValue = modInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"intMod") ) { outValue = intMod_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"neqInt") ) { outValue = neqInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lteInt") ) { outValue = lteInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"intLte") ) { outValue = intLte_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gteInt") ) { outValue = gteInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"intGte") ) { outValue = intGte_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getHigh") ) { outValue = getHigh_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"compare") ) { outValue = compare_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_low") ) { outValue = get_low_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ucompare") ) { outValue = ucompare_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_high") ) { outValue = get_high_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"complement") ) { outValue = complement_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"preIncrement") ) { outValue = preIncrement_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"preDecrement") ) { outValue = preDecrement_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"postIncrement") ) { outValue = postIncrement_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"postDecrement") ) { outValue = postDecrement_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int64_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int64_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Int64_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("make","\xee","\x39","\x56","\x48"),
	HX_HCSTRING("ofInt","\x18","\xec","\x1d","\x2d"),
	HX_HCSTRING("toInt","\x34","\xbe","\x11","\x14"),
	HX_HCSTRING("is","\xea","\x5b","\x00","\x00"),
	HX_HCSTRING("getHigh","\x18","\xe7","\x90","\x17"),
	HX_HCSTRING("getLow","\x9e","\x8d","\x21","\xa3"),
	HX_HCSTRING("isNeg","\x86","\xfa","\x51","\xc1"),
	HX_HCSTRING("isZero","\x32","\xd4","\x57","\x6e"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("ucompare","\xd0","\x40","\x77","\xa7"),
	HX_HCSTRING("toStr","\xf6","\x59","\x19","\x14"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("divMod","\xf1","\xf9","\xfc","\xbe"),
	HX_HCSTRING("neg","\x50","\xd0","\x53","\x00"),
	HX_HCSTRING("preIncrement","\x8c","\xe9","\xfe","\xd7"),
	HX_HCSTRING("postIncrement","\xaf","\xd5","\xb1","\xdf"),
	HX_HCSTRING("preDecrement","\x70","\xd9","\x81","\xb6"),
	HX_HCSTRING("postDecrement","\x93","\xc5","\x34","\xbe"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addInt","\x4e","\x1d","\x01","\x9f"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("subInt","\x4f","\x0b","\xeb","\x99"),
	HX_HCSTRING("intSub","\xd1","\xd3","\x78","\x9e"),
	HX_HCSTRING("mul","\x04","\x1c","\x53","\x00"),
	HX_HCSTRING("mulInt","\x4b","\x03","\x63","\x3a"),
	HX_HCSTRING("div","\x51","\x3d","\x4c","\x00"),
	HX_HCSTRING("divInt","\x1e","\xf0","\xf9","\xbe"),
	HX_HCSTRING("intDiv","\xa2","\x67","\x6d","\x9e"),
	HX_HCSTRING("mod","\xc2","\x16","\x53","\x00"),
	HX_HCSTRING("modInt","\x4d","\xd3","\xb1","\xc0"),
	HX_HCSTRING("intMod","\x13","\x41","\x74","\x9e"),
	HX_HCSTRING("eq","\x6c","\x58","\x00","\x00"),
	HX_HCSTRING("eqInt","\xe3","\x77","\x61","\x72"),
	HX_HCSTRING("neq","\x5a","\xd0","\x53","\x00"),
	HX_HCSTRING("neqInt","\xb5","\x28","\xa3","\x6d"),
	HX_HCSTRING("lt","\x88","\x5e","\x00","\x00"),
	HX_HCSTRING("ltInt","\x47","\x2b","\x2b","\x7c"),
	HX_HCSTRING("intLt","\x57","\xa9","\x20","\xbe"),
	HX_HCSTRING("lte","\xdd","\x58","\x52","\x00"),
	HX_HCSTRING("lteInt","\x12","\x94","\x00","\x3c"),
	HX_HCSTRING("intLte","\x2e","\x83","\x73","\x9e"),
	HX_HCSTRING("gt","\x2d","\x5a","\x00","\x00"),
	HX_HCSTRING("gtInt","\xc2","\x44","\x2a","\x9b"),
	HX_HCSTRING("intGt","\xfc","\xa4","\x20","\xbe"),
	HX_HCSTRING("gte","\x98","\x8d","\x4e","\x00"),
	HX_HCSTRING("gteInt","\x37","\xc6","\x37","\x3c"),
	HX_HCSTRING("intGte","\xe9","\xb7","\x6f","\x9e"),
	HX_HCSTRING("complement","\xe6","\x42","\xb4","\xfd"),
	HX_HCSTRING("and","\xd7","\xfa","\x49","\x00"),
	HX_HCSTRING("or","\x23","\x61","\x00","\x00"),
	HX_HCSTRING("xor","\x9b","\x6f","\x5b","\x00"),
	HX_HCSTRING("shl","\x37","\x9e","\x57","\x00"),
	HX_HCSTRING("shr","\x3d","\x9e","\x57","\x00"),
	HX_HCSTRING("ushr","\xe8","\x94","\xad","\x4d"),
	HX_HCSTRING("get_high","\xeb","\xf2","\xc8","\xc4"),
	HX_HCSTRING("get_low","\x2b","\x1d","\xc7","\x26"),
	::String(null()) };

void Int64_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe._Int64.Int64_Impl_","\x15","\xd6","\x6c","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Int64_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Int64_Impl__obj >;
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
} // end namespace _Int64
