#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
namespace haxe{

Void Utf8_obj::__construct(Dynamic size)
{
HX_STACK_FRAME("haxe.Utf8","new",0x67cc940b,"haxe.Utf8.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Utf8.hx",29,0xf320feca)
HX_STACK_THIS(this)
HX_STACK_ARG(size,"size")
{
	HX_STACK_LINE(30)
	this->__s = Array_obj< int >::__new();
	HX_STACK_LINE(31)
	bool tmp = (size != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	if ((tmp)){
		HX_STACK_LINE(31)
		tmp1 = (size > (int)0);
	}
	else{
		HX_STACK_LINE(31)
		tmp1 = false;
	}
	HX_STACK_LINE(31)
	if ((tmp1)){
		HX_STACK_LINE(32)
		int tmp2 = (size - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		this->__s[tmp2] = (int)0;
	}
}
;
	return null();
}

//Utf8_obj::~Utf8_obj() { }

Dynamic Utf8_obj::__CreateEmpty() { return  new Utf8_obj; }
hx::ObjectPtr< Utf8_obj > Utf8_obj::__new(Dynamic size)
{  hx::ObjectPtr< Utf8_obj > _result_ = new Utf8_obj();
	_result_->__construct(size);
	return _result_;}

Dynamic Utf8_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utf8_obj > _result_ = new Utf8_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Utf8_obj::addChar( int c){
{
		HX_STACK_FRAME("haxe.Utf8","addChar",0x9a1816c2,"haxe.Utf8.addChar","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Utf8.hx",35,0xf320feca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(36)
		int tmp = c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		this->__s->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,addChar,(void))

::String Utf8_obj::toString( ){
	HX_STACK_FRAME("haxe.Utf8","toString",0xb459e121,"haxe.Utf8.toString","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Utf8.hx",39,0xf320feca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	::String tmp = ::__hxcpp_char_array_to_utf8_string(this->__s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Utf8_obj,toString,return )

::String Utf8_obj::encode( ::String s){
	HX_STACK_FRAME("haxe.Utf8","encode",0xe30e8b4b,"haxe.Utf8.encode","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Utf8.hx",45,0xf320feca)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(46)
	::String tmp = ::__hxcpp_char_bytes_to_utf8_string(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,encode,return )

::String Utf8_obj::decode( ::String s){
	HX_STACK_FRAME("haxe.Utf8","decode",0x4e17f663,"haxe.Utf8.decode","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Utf8.hx",51,0xf320feca)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(52)
	::String tmp = ::__hxcpp_utf8_string_to_char_bytes(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,decode,return )

Void Utf8_obj::iter( ::String s,Dynamic chars){
{
		HX_STACK_FRAME("haxe.Utf8","iter",0x67f2370d,"haxe.Utf8.iter","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Utf8.hx",55,0xf320feca)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(chars,"chars")
		HX_STACK_LINE(56)
		Array< int > array = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				bool tmp = (_g < array->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(57)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(57)
				if ((tmp1)){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				int tmp2 = array->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				int a = tmp2;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(57)
				++(_g);
				HX_STACK_LINE(58)
				int tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(58)
				chars(tmp3).Cast< Void >();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,iter,(void))

int Utf8_obj::charCodeAt( ::String s,int index){
	HX_STACK_FRAME("haxe.Utf8","charCodeAt",0xce7cbeab,"haxe.Utf8.charCodeAt","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Utf8.hx",61,0xf320feca)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(62)
	Array< int > array = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(63)
	int tmp = array->__get(index);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,charCodeAt,return )

bool Utf8_obj::validate( ::String s){
	HX_STACK_FRAME("haxe.Utf8","validate",0x80cee10b,"haxe.Utf8.validate","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Utf8.hx",66,0xf320feca)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(67)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(68)
		::__hxcpp_utf8_string_to_char_array(s);
		HX_STACK_LINE(69)
		return true;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(71)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,validate,return )

int Utf8_obj::length( ::String s){
	HX_STACK_FRAME("haxe.Utf8","length",0x88322e1b,"haxe.Utf8.length","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Utf8.hx",74,0xf320feca)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(75)
	Array< int > array = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(76)
	int tmp = array->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,length,return )

int Utf8_obj::compare( ::String a,::String b){
	HX_STACK_FRAME("haxe.Utf8","compare",0x9f848dd0,"haxe.Utf8.compare","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Utf8.hx",79,0xf320feca)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(80)
	Array< int > a_ = ::__hxcpp_utf8_string_to_char_array(a);		HX_STACK_VAR(a_,"a_");
	HX_STACK_LINE(81)
	Array< int > b_ = ::__hxcpp_utf8_string_to_char_array(b);		HX_STACK_VAR(b_,"b_");
	HX_STACK_LINE(82)
	bool tmp = (a_->length < b_->length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	if ((tmp)){
		HX_STACK_LINE(82)
		tmp1 = a_->length;
	}
	else{
		HX_STACK_LINE(82)
		tmp1 = b_->length;
	}
	HX_STACK_LINE(82)
	int min = tmp1;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		while((true)){
			HX_STACK_LINE(83)
			bool tmp2 = (_g < min);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			if ((tmp3)){
				HX_STACK_LINE(83)
				break;
			}
			HX_STACK_LINE(83)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(85)
			int tmp5 = a_->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(85)
			int tmp6 = b_->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(85)
			bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			if ((tmp7)){
				HX_STACK_LINE(85)
				return (int)-1;
			}
			HX_STACK_LINE(86)
			int tmp8 = a_->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(86)
			int tmp9 = b_->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(86)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(86)
			if ((tmp10)){
				HX_STACK_LINE(86)
				return (int)1;
			}
		}
	}
	HX_STACK_LINE(88)
	bool tmp2 = (a_->length == b_->length);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(88)
	if ((tmp2)){
		HX_STACK_LINE(88)
		tmp3 = (int)0;
	}
	else{
		HX_STACK_LINE(88)
		bool tmp4 = (a_->length < b_->length);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		if ((tmp4)){
			HX_STACK_LINE(88)
			tmp3 = (int)-1;
		}
		else{
			HX_STACK_LINE(88)
			tmp3 = (int)1;
		}
	}
	HX_STACK_LINE(88)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,compare,return )

::String Utf8_obj::sub( ::String s,int pos,int len){
	HX_STACK_FRAME("haxe.Utf8","sub",0x67d06d2b,"haxe.Utf8.sub","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Utf8.hx",91,0xf320feca)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(92)
	Array< int > array = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(93)
	bool tmp = (len < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	if ((tmp)){
		HX_STACK_LINE(93)
		tmp1 = array->length;
	}
	else{
		HX_STACK_LINE(93)
		tmp1 = (pos + len);
	}
	HX_STACK_LINE(93)
	int last = tmp1;		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(94)
	bool tmp2 = (last > array->length);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	if ((tmp2)){
		HX_STACK_LINE(94)
		last = array->length;
	}
	HX_STACK_LINE(95)
	int tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	int tmp4 = last;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	Array< int > sub = array->slice(tmp3,tmp4);		HX_STACK_VAR(sub,"sub");
	HX_STACK_LINE(96)
	::String tmp5 = ::__hxcpp_char_array_to_utf8_string(sub);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(96)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8_obj,sub,return )


Utf8_obj::Utf8_obj()
{
}

void Utf8_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Utf8);
	HX_MARK_MEMBER_NAME(__s,"__s");
	HX_MARK_END_CLASS();
}

void Utf8_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__s,"__s");
}

Dynamic Utf8_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { return __s; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addChar") ) { return addChar_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Utf8_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { outValue = sub_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"iter") ) { outValue = iter_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"length") ) { outValue = length_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { outValue = compare_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { outValue = validate_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"charCodeAt") ) { outValue = charCodeAt_dyn(); return true;  }
	}
	return false;
}

Dynamic Utf8_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { __s=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Utf8_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__s","\x53","\x69","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Utf8_obj,__s),HX_HCSTRING("__s","\x53","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__s","\x53","\x69","\x48","\x00"),
	HX_HCSTRING("addChar","\x97","\xa1","\xfc","\x7d"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#endif

hx::Class Utf8_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("decode","\x2e","\x5d","\xed","\x64"),
	HX_HCSTRING("iter","\x18","\xc5","\xbf","\x45"),
	HX_HCSTRING("charCodeAt","\xf6","\xe6","\x54","\x35"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	::String(null()) };

void Utf8_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Utf8","\x99","\x32","\x41","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utf8_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Utf8_obj >;
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
