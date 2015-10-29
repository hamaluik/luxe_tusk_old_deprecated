#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif

Void StringBuf_obj::__construct()
{
HX_STACK_FRAME("StringBuf","new",0xaaa8f4b4,"StringBuf.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/StringBuf.hx",30,0xac74b422)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	this->b = Array_obj< ::String >::__new();
}
;
	return null();
}

//StringBuf_obj::~StringBuf_obj() { }

Dynamic StringBuf_obj::__CreateEmpty() { return  new StringBuf_obj; }
hx::ObjectPtr< StringBuf_obj > StringBuf_obj::__new()
{  hx::ObjectPtr< StringBuf_obj > _result_ = new StringBuf_obj();
	_result_->__construct();
	return _result_;}

Dynamic StringBuf_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StringBuf_obj > _result_ = new StringBuf_obj();
	_result_->__construct();
	return _result_;}

int StringBuf_obj::get_length( ){
	HX_STACK_FRAME("StringBuf","get_length",0xe673d2db,"StringBuf.get_length","C:\\HaxeToolkit\\haxe\\std/cpp/_std/StringBuf.hx",33,0xac74b422)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	int len = (int)0;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		Array< ::String > _g1 = this->b;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(35)
		while((true)){
			HX_STACK_LINE(35)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(35)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			if ((tmp1)){
				HX_STACK_LINE(35)
				break;
			}
			HX_STACK_LINE(35)
			::String tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			::String s = tmp2;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(35)
			++(_g);
			HX_STACK_LINE(36)
			bool tmp3 = (s == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			if ((tmp3)){
				HX_STACK_LINE(36)
				tmp4 = (int)4;
			}
			else{
				HX_STACK_LINE(36)
				tmp4 = s.length;
			}
			HX_STACK_LINE(36)
			hx::AddEq(len,tmp4);
		}
	}
	HX_STACK_LINE(37)
	int tmp = len;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(StringBuf_obj,get_length,return )

Void StringBuf_obj::add( Dynamic x){
{
		HX_STACK_FRAME("StringBuf","add",0xaa9f1675,"StringBuf.add","C:\\HaxeToolkit\\haxe\\std/cpp/_std/StringBuf.hx",40,0xac74b422)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(41)
		Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		this->b->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StringBuf_obj,add,(void))

Void StringBuf_obj::addSub( ::String s,int pos,Dynamic len){
{
		HX_STACK_FRAME("StringBuf","addSub",0x5b08020b,"StringBuf.addSub","C:\\HaxeToolkit\\haxe\\std/cpp/_std/StringBuf.hx",44,0xac74b422)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(45)
		int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		Dynamic tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::String tmp2 = s.substr(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		this->b->push(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(StringBuf_obj,addSub,(void))

Void StringBuf_obj::addChar( int c){
{
		HX_STACK_FRAME("StringBuf","addChar",0x415c7feb,"StringBuf.addChar","C:\\HaxeToolkit\\haxe\\std/cpp/_std/StringBuf.hx",48,0xac74b422)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(49)
		int tmp = c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		::String tmp1 = ::String::fromCharCode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		this->b->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StringBuf_obj,addChar,(void))

::String StringBuf_obj::toString( ){
	HX_STACK_FRAME("StringBuf","toString",0x68f17bd8,"StringBuf.toString","C:\\HaxeToolkit\\haxe\\std/cpp/_std/StringBuf.hx",52,0xac74b422)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	::String tmp = this->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(StringBuf_obj,toString,return )


StringBuf_obj::StringBuf_obj()
{
}

void StringBuf_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringBuf);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void StringBuf_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
}

Dynamic StringBuf_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"addSub") ) { return addSub_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addChar") ) { return addChar_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StringBuf_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringBuf_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(StringBuf_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addSub","\xdf","\xb9","\x08","\x9f"),
	HX_HCSTRING("addChar","\x97","\xa1","\xfc","\x7d"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringBuf_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringBuf_obj::__mClass,"__mClass");
};

#endif

hx::Class StringBuf_obj::__mClass;

void StringBuf_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StringBuf","\xc2","\xca","\x83","\x69");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StringBuf_obj >;
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

