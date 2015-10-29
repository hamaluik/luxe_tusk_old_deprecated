#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif

Void EReg_obj::__construct(::String r,::String opt)
{
HX_STACK_FRAME("EReg","new",0x8b859e81,"EReg.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",28,0xa4513ee9)
HX_STACK_THIS(this)
HX_STACK_ARG(r,"r")
HX_STACK_ARG(opt,"opt")
{
	HX_STACK_LINE(29)
	Array< ::String > a = opt.split(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(30)
	bool tmp = (a->length > (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	this->global = tmp;
	HX_STACK_LINE(31)
	bool tmp1 = this->global;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	if ((tmp1)){
		HX_STACK_LINE(32)
		::String tmp2 = a->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		opt = tmp2;
	}
	HX_STACK_LINE(33)
	::String tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	::String tmp3 = opt;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	Dynamic tmp4 = ::EReg_obj::regexp_new_options(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	this->r = tmp4;
}
;
	return null();
}

//EReg_obj::~EReg_obj() { }

Dynamic EReg_obj::__CreateEmpty() { return  new EReg_obj; }
hx::ObjectPtr< EReg_obj > EReg_obj::__new(::String r,::String opt)
{  hx::ObjectPtr< EReg_obj > _result_ = new EReg_obj();
	_result_->__construct(r,opt);
	return _result_;}

Dynamic EReg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EReg_obj > _result_ = new EReg_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool EReg_obj::match( ::String s){
	HX_STACK_FRAME("EReg","match",0x18fda1a6,"EReg.match","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",36,0xa4513ee9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(37)
	Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	int tmp2 = s.length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	Dynamic tmp3 = ::EReg_obj::regexp_match(tmp,tmp1,(int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	bool p = tmp3;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(38)
	bool tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	if ((tmp4)){
		HX_STACK_LINE(39)
		this->last = s;
	}
	else{
		HX_STACK_LINE(41)
		this->last = null();
	}
	HX_STACK_LINE(42)
	bool tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,match,return )

::String EReg_obj::matched( int n){
	HX_STACK_FRAME("EReg","matched",0x8ce62f85,"EReg.matched","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",45,0xa4513ee9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(46)
	Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	Dynamic tmp2 = ::EReg_obj::regexp_matched(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	::String m = tmp2;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(47)
	::String tmp3 = m;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,matched,return )

::String EReg_obj::matchedLeft( ){
	HX_STACK_FRAME("EReg","matchedLeft",0x93fe0a2c,"EReg.matchedLeft","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",50,0xa4513ee9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	Dynamic tmp1 = ::EReg_obj::regexp_matched_pos(tmp,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	Dynamic p = tmp1;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(52)
	::String tmp2 = this->last;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	int tmp3 = p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	::String tmp4 = tmp2.substr((int)0,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(EReg_obj,matchedLeft,return )

::String EReg_obj::matchedRight( ){
	HX_STACK_FRAME("EReg","matchedRight",0x6157ea17,"EReg.matchedRight","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",55,0xa4513ee9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	Dynamic tmp1 = ::EReg_obj::regexp_matched_pos(tmp,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	Dynamic p = tmp1;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(57)
	int tmp2 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	int sz = tmp2;		HX_STACK_VAR(sz,"sz");
	HX_STACK_LINE(58)
	::String tmp3 = this->last;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	int tmp4 = sz;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	::String tmp5 = this->last;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(58)
	int tmp6 = tmp5.length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(58)
	int tmp7 = sz;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(58)
	int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(58)
	::String tmp9 = tmp3.substr(tmp4,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(58)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(EReg_obj,matchedRight,return )

Dynamic EReg_obj::matchedPos( ){
	HX_STACK_FRAME("EReg","matchedPos",0x7007a70f,"EReg.matchedPos","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",61,0xa4513ee9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Dynamic tmp1 = ::EReg_obj::regexp_matched_pos(tmp,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(EReg_obj,matchedPos,return )

bool EReg_obj::matchSub( ::String s,int pos,hx::Null< int >  __o_len){
int len = __o_len.Default(-1);
	HX_STACK_FRAME("EReg","matchSub",0xbc75cb7a,"EReg.matchSub","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",65,0xa4513ee9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
{
		HX_STACK_LINE(66)
		Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		int tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		bool tmp3 = (len < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		if ((tmp3)){
			HX_STACK_LINE(66)
			tmp4 = (s.length - pos);
		}
		else{
			HX_STACK_LINE(66)
			tmp4 = len;
		}
		HX_STACK_LINE(66)
		Dynamic tmp5 = ::EReg_obj::regexp_match(tmp,tmp1,tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(66)
		bool p = tmp5;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(67)
		bool tmp6 = p;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(67)
		if ((tmp6)){
			HX_STACK_LINE(68)
			this->last = s;
		}
		else{
			HX_STACK_LINE(70)
			this->last = null();
		}
		HX_STACK_LINE(71)
		bool tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(71)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(EReg_obj,matchSub,return )

Array< ::String > EReg_obj::split( ::String s){
	HX_STACK_FRAME("EReg","split",0x9749433b,"EReg.split","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",74,0xa4513ee9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(75)
	int pos = (int)0;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(76)
	int len = s.length;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(77)
	Array< ::String > a = Array_obj< ::String >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(78)
	bool first = true;		HX_STACK_VAR(first,"first");
	HX_STACK_LINE(79)
	while((true)){
		HX_STACK_LINE(80)
		Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		int tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		Dynamic tmp4 = ::EReg_obj::regexp_match(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		if ((tmp5)){
			HX_STACK_LINE(81)
			break;
		}
		HX_STACK_LINE(82)
		Dynamic tmp6 = this->r;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		Dynamic tmp7 = ::EReg_obj::regexp_matched_pos(tmp6,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		Dynamic p = tmp7;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(83)
		bool tmp8 = (p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		if ((tmp8)){
			HX_STACK_LINE(83)
			bool tmp10 = first;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(83)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(83)
			tmp9 = !(tmp11);
		}
		else{
			HX_STACK_LINE(83)
			tmp9 = false;
		}
		HX_STACK_LINE(83)
		if ((tmp9)){
			HX_STACK_LINE(84)
			bool tmp10 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) == s.length);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(84)
			if ((tmp10)){
				HX_STACK_LINE(85)
				break;
			}
			HX_STACK_LINE(86)
			hx::AddEq(p->__FieldRef(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")),(int)1);
		}
		HX_STACK_LINE(88)
		int tmp10 = pos;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(88)
		int tmp11 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) - pos);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(88)
		::String tmp12 = s.substr(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(88)
		a->push(tmp12);
		HX_STACK_LINE(89)
		int tmp13 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(89)
		int tmp14 = pos;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(89)
		int tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(89)
		int tot = tmp15;		HX_STACK_VAR(tot,"tot");
		HX_STACK_LINE(90)
		hx::AddEq(pos,tot);
		HX_STACK_LINE(91)
		hx::SubEq(len,tot);
		HX_STACK_LINE(92)
		first = false;
		HX_STACK_LINE(93)
		bool tmp16 = this->global;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(93)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(79)
		if ((tmp17)){
			HX_STACK_LINE(79)
			break;
		}
	}
	HX_STACK_LINE(94)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	::String tmp2 = s.substr(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	a->push(tmp2);
	HX_STACK_LINE(95)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,split,return )

::String EReg_obj::replace( ::String s,::String by){
	HX_STACK_FRAME("EReg","replace",0xae923ad5,"EReg.replace","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",98,0xa4513ee9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(by,"by")
	HX_STACK_LINE(99)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	::StringBuf b = tmp;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(100)
	int pos = (int)0;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(101)
	int len = s.length;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(102)
	Array< ::String > a = by.split(HX_HCSTRING("$","\x24","\x00","\x00","\x00"));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(103)
	bool first = true;		HX_STACK_VAR(first,"first");
	HX_STACK_LINE(104)
	while((true)){
		HX_STACK_LINE(105)
		Dynamic tmp1 = this->r;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		int tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(105)
		int tmp4 = len;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		Dynamic tmp5 = ::EReg_obj::regexp_match(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		if ((tmp6)){
			HX_STACK_LINE(106)
			break;
		}
		HX_STACK_LINE(107)
		Dynamic tmp7 = this->r;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(107)
		Dynamic tmp8 = ::EReg_obj::regexp_matched_pos(tmp7,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(107)
		Dynamic p = tmp8;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(108)
		bool tmp9 = (p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(108)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(108)
		if ((tmp9)){
			HX_STACK_LINE(108)
			bool tmp11 = first;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(108)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(108)
			tmp10 = !(tmp12);
		}
		else{
			HX_STACK_LINE(108)
			tmp10 = false;
		}
		HX_STACK_LINE(108)
		if ((tmp10)){
			HX_STACK_LINE(109)
			bool tmp11 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) == s.length);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(109)
			if ((tmp11)){
				HX_STACK_LINE(110)
				break;
			}
			HX_STACK_LINE(111)
			hx::AddEq(p->__FieldRef(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")),(int)1);
		}
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			int tmp11 = pos;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(113)
			int tmp12 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) - pos);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(113)
			::String tmp13 = s.substr(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(113)
			b->b->push(tmp13);
		}
		HX_STACK_LINE(114)
		bool tmp11 = (a->length > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(114)
		if ((tmp11)){
			HX_STACK_LINE(115)
			::String tmp12 = a->__get((int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(115)
			b->add(tmp12);
		}
		HX_STACK_LINE(116)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(117)
		while((true)){
			HX_STACK_LINE(117)
			bool tmp12 = (i < a->length);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(117)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(117)
			if ((tmp13)){
				HX_STACK_LINE(117)
				break;
			}
			HX_STACK_LINE(118)
			::String tmp14 = a->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(118)
			::String k = tmp14;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(119)
			Dynamic tmp15 = k.charCodeAt((int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(119)
			Dynamic c = tmp15;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(121)
			bool tmp16 = (c >= (int)49);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(121)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(121)
			if ((tmp16)){
				HX_STACK_LINE(121)
				tmp17 = (c <= (int)57);
			}
			else{
				HX_STACK_LINE(121)
				tmp17 = false;
			}
			HX_STACK_LINE(121)
			if ((tmp17)){
				HX_STACK_LINE(122)
				Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(122)
				try
				{
				HX_STACK_CATCHABLE(::String, 0);
				{
					HX_STACK_LINE(122)
					Dynamic tmp19 = this->r;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(122)
					Dynamic tmp20 = c;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(122)
					int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(122)
					int tmp22 = (tmp21 - (int)48);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(122)
					tmp18 = ::EReg_obj::regexp_matched_pos(tmp19,tmp22);
				}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(122)
							tmp18 = null();
						}
					}
					else {
					    HX_STACK_DO_THROW(__e);
					}
				}
				HX_STACK_LINE(122)
				Dynamic p1 = tmp18;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(123)
				bool tmp19 = (p1 == null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(123)
				if ((tmp19)){
					HX_STACK_LINE(124)
					b->add(HX_HCSTRING("$","\x24","\x00","\x00","\x00"));
					HX_STACK_LINE(125)
					::String tmp20 = k;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(125)
					b->add(tmp20);
				}
				else{
					HX_STACK_LINE(127)
					{
						HX_STACK_LINE(127)
						int tmp20 = p1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(127)
						int tmp21 = p1->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(127)
						::String tmp22 = s.substr(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(127)
						b->b->push(tmp22);
					}
					HX_STACK_LINE(128)
					{
						HX_STACK_LINE(128)
						int tmp20 = (k.length - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(128)
						::String tmp21 = k.substr((int)1,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(128)
						b->b->push(tmp21);
					}
				}
			}
			else{
				HX_STACK_LINE(130)
				bool tmp18 = (c == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(130)
				if ((tmp18)){
					HX_STACK_LINE(131)
					b->add(HX_HCSTRING("$","\x24","\x00","\x00","\x00"));
					HX_STACK_LINE(132)
					(i)++;
					HX_STACK_LINE(133)
					::String tmp19 = a->__get(i);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(133)
					::String k2 = tmp19;		HX_STACK_VAR(k2,"k2");
					HX_STACK_LINE(134)
					bool tmp20 = (k2 != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(134)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(134)
					if ((tmp20)){
						HX_STACK_LINE(134)
						tmp21 = (k2.length > (int)0);
					}
					else{
						HX_STACK_LINE(134)
						tmp21 = false;
					}
					HX_STACK_LINE(134)
					if ((tmp21)){
						HX_STACK_LINE(135)
						::String tmp22 = k2;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(135)
						b->add(tmp22);
					}
				}
				else{
					HX_STACK_LINE(137)
					::String tmp19 = (HX_HCSTRING("$","\x24","\x00","\x00","\x00") + k);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(137)
					b->add(tmp19);
				}
			}
			HX_STACK_LINE(138)
			(i)++;
		}
		HX_STACK_LINE(140)
		int tmp12 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(140)
		int tmp13 = pos;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(140)
		int tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(140)
		int tot = tmp14;		HX_STACK_VAR(tot,"tot");
		HX_STACK_LINE(141)
		hx::AddEq(pos,tot);
		HX_STACK_LINE(142)
		hx::SubEq(len,tot);
		HX_STACK_LINE(143)
		first = false;
		HX_STACK_LINE(144)
		bool tmp15 = this->global;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(144)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(104)
		if ((tmp16)){
			HX_STACK_LINE(104)
			break;
		}
	}
	HX_STACK_LINE(145)
	{
		HX_STACK_LINE(145)
		int tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		int tmp2 = len;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		::String tmp3 = s.substr(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(145)
		b->b->push(tmp3);
	}
	HX_STACK_LINE(146)
	::String tmp1 = b->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(EReg_obj,replace,return )

::String EReg_obj::map( ::String s,Dynamic f){
	HX_STACK_FRAME("EReg","map",0x8b84d8bd,"EReg.map","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",149,0xa4513ee9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(150)
	int offset = (int)0;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(151)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	::StringBuf buf = tmp;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(152)
	while((true)){
		HX_STACK_LINE(153)
		bool tmp1 = (offset >= s.length);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		if ((tmp1)){
			HX_STACK_LINE(154)
			break;
		}
		else{
			HX_STACK_LINE(155)
			::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(155)
			int tmp3 = offset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(155)
			bool tmp4 = this->matchSub(tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(155)
			if ((tmp5)){
				HX_STACK_LINE(156)
				int tmp6 = offset;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(156)
				::String tmp7 = s.substr(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(156)
				buf->add(tmp7);
				HX_STACK_LINE(157)
				break;
			}
		}
		HX_STACK_LINE(159)
		Dynamic tmp2 = this->r;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		Dynamic tmp3 = ::EReg_obj::regexp_matched_pos(tmp2,(int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		Dynamic p = tmp3;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(160)
		int tmp4 = offset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(160)
		int tmp5 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) - offset);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		::String tmp6 = s.substr(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(160)
		buf->add(tmp6);
		HX_STACK_LINE(161)
		::String tmp7 = f(hx::ObjectPtr<OBJ_>(this)).Cast< ::String >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(161)
		buf->add(tmp7);
		HX_STACK_LINE(162)
		bool tmp8 = (p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(162)
		if ((tmp8)){
			HX_STACK_LINE(163)
			int tmp9 = p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(163)
			::String tmp10 = s.substr(tmp9,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(163)
			buf->add(tmp10);
			HX_STACK_LINE(164)
			int tmp11 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(164)
			offset = tmp11;
		}
		else{
			HX_STACK_LINE(167)
			int tmp9 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(167)
			offset = tmp9;
		}
		HX_STACK_LINE(168)
		bool tmp9 = this->global;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(168)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(152)
		if ((tmp10)){
			HX_STACK_LINE(152)
			break;
		}
	}
	HX_STACK_LINE(169)
	bool tmp1 = this->global;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(169)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(169)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(169)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(169)
	if ((tmp4)){
		HX_STACK_LINE(169)
		tmp5 = (offset > (int)0);
	}
	else{
		HX_STACK_LINE(169)
		tmp5 = false;
	}
	HX_STACK_LINE(169)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(169)
	if ((tmp5)){
		HX_STACK_LINE(169)
		tmp6 = (offset < s.length);
	}
	else{
		HX_STACK_LINE(169)
		tmp6 = false;
	}
	HX_STACK_LINE(169)
	if ((tmp6)){
		HX_STACK_LINE(170)
		int tmp7 = offset;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		::String tmp8 = s.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(170)
		buf->add(tmp8);
	}
	HX_STACK_LINE(171)
	::String tmp7 = buf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(171)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(EReg_obj,map,return )

Dynamic EReg_obj::regexp_new_options;

Dynamic EReg_obj::regexp_match;

Dynamic EReg_obj::regexp_matched;

Dynamic EReg_obj::regexp_matched_pos;


EReg_obj::EReg_obj()
{
}

void EReg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EReg);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(global,"global");
	HX_MARK_END_CLASS();
}

void EReg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(global,"global");
}

Dynamic EReg_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return match_dyn(); }
		if (HX_FIELD_EQ(inName,"split") ) { return split_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { return global; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"matched") ) { return matched_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matchSub") ) { return matchSub_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"matchedPos") ) { return matchedPos_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"matchedLeft") ) { return matchedLeft_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"matchedRight") ) { return matchedRight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool EReg_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"regexp_match") ) { outValue = regexp_match; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"regexp_matched") ) { outValue = regexp_matched; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"regexp_new_options") ) { outValue = regexp_new_options; return true;  }
		if (HX_FIELD_EQ(inName,"regexp_matched_pos") ) { outValue = regexp_matched_pos; return true;  }
	}
	return false;
}

Dynamic EReg_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { global=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool EReg_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"regexp_match") ) { regexp_match=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"regexp_matched") ) { regexp_matched=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"regexp_new_options") ) { regexp_new_options=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"regexp_matched_pos") ) { regexp_matched_pos=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void EReg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"));
	outFields->push(HX_HCSTRING("global","\x63","\x31","\xb2","\xa7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EReg_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{hx::fsString,(int)offsetof(EReg_obj,last),HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{hx::fsBool,(int)offsetof(EReg_obj,global),HX_HCSTRING("global","\x63","\x31","\xb2","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &EReg_obj::regexp_new_options,HX_HCSTRING("regexp_new_options","\x89","\x34","\xba","\x56")},
	{hx::fsObject /*Dynamic*/ ,(void *) &EReg_obj::regexp_match,HX_HCSTRING("regexp_match","\x0f","\xcd","\x47","\xb6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &EReg_obj::regexp_matched,HX_HCSTRING("regexp_matched","\x2e","\xc7","\xa0","\xb1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &EReg_obj::regexp_matched_pos,HX_HCSTRING("regexp_matched_pos","\xc3","\x98","\x9f","\x7a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("global","\x63","\x31","\xb2","\xa7"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("matched","\xe4","\x3c","\x7c","\x89"),
	HX_HCSTRING("matchedLeft","\x0b","\xb3","\x2f","\x7c"),
	HX_HCSTRING("matchedRight","\x58","\x04","\x9a","\xa4"),
	HX_HCSTRING("matchedPos","\x10","\xff","\xc2","\xcb"),
	HX_HCSTRING("matchSub","\x3b","\x71","\x2b","\xc3"),
	HX_HCSTRING("split","\xda","\xea","\x6e","\x81"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_new_options,"regexp_new_options");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_match,"regexp_match");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_matched,"regexp_matched");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_matched_pos,"regexp_matched_pos");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_new_options,"regexp_new_options");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_match,"regexp_match");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_matched,"regexp_matched");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_matched_pos,"regexp_matched_pos");
};

#endif

hx::Class EReg_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("regexp_new_options","\x89","\x34","\xba","\x56"),
	HX_HCSTRING("regexp_match","\x0f","\xcd","\x47","\xb6"),
	HX_HCSTRING("regexp_matched","\x2e","\xc7","\xa0","\xb1"),
	HX_HCSTRING("regexp_matched_pos","\xc3","\x98","\x9f","\x7a"),
	::String(null()) };

void EReg_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("EReg","\x0f","\x4a","\xda","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EReg_obj::__GetStatic;
	__mClass->mSetStaticField = &EReg_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EReg_obj >;
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

void EReg_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",174,0xa4513ee9)
		{
			HX_STACK_LINE(174)
			Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"),HX_HCSTRING("regexp_new_options","\x89","\x34","\xba","\x56"),(int)2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(174)
			return tmp;
		}
		return null();
	}
};
	regexp_new_options= _Function_0_1::Block();
struct _Function_0_2{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",175,0xa4513ee9)
		{
			HX_STACK_LINE(175)
			Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"),HX_HCSTRING("regexp_match","\x0f","\xcd","\x47","\xb6"),(int)4);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(175)
			return tmp;
		}
		return null();
	}
};
	regexp_match= _Function_0_2::Block();
struct _Function_0_3{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",176,0xa4513ee9)
		{
			HX_STACK_LINE(176)
			Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"),HX_HCSTRING("regexp_matched","\x2e","\xc7","\xa0","\xb1"),(int)2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(176)
			return tmp;
		}
		return null();
	}
};
	regexp_matched= _Function_0_3::Block();
struct _Function_0_4{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",177,0xa4513ee9)
		{
			HX_STACK_LINE(177)
			Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"),HX_HCSTRING("regexp_matched_pos","\xc3","\x98","\x9f","\x7a"),(int)2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(177)
			return tmp;
		}
		return null();
	}
};
	regexp_matched_pos= _Function_0_4::Block();
}

