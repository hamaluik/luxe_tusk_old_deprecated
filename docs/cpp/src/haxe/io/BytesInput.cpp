#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace haxe{
namespace io{

Void BytesInput_obj::__construct(::haxe::io::Bytes b,Dynamic pos,Dynamic len)
{
HX_STACK_FRAME("haxe.io.BytesInput","new",0x7fa18571,"haxe.io.BytesInput.new","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesInput.hx",38,0xd7d0a806)
HX_STACK_THIS(this)
HX_STACK_ARG(b,"b")
HX_STACK_ARG(pos,"pos")
HX_STACK_ARG(len,"len")
{
	HX_STACK_LINE(39)
	bool tmp = (pos == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	if ((tmp)){
		HX_STACK_LINE(39)
		pos = (int)0;
	}
	HX_STACK_LINE(40)
	bool tmp1 = (len == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	if ((tmp1)){
		HX_STACK_LINE(40)
		int tmp2 = (b->length - pos);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		len = tmp2;
	}
	HX_STACK_LINE(41)
	bool tmp2 = (pos < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	if ((tmp4)){
		HX_STACK_LINE(41)
		tmp5 = (len < (int)0);
	}
	else{
		HX_STACK_LINE(41)
		tmp5 = true;
	}
	HX_STACK_LINE(41)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(41)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(41)
	if ((tmp6)){
		HX_STACK_LINE(41)
		int tmp8 = (pos + len);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(41)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(41)
		int tmp10 = b->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		tmp7 = (tmp9 > tmp10);
	}
	else{
		HX_STACK_LINE(41)
		tmp7 = true;
	}
	HX_STACK_LINE(41)
	if ((tmp7)){
		HX_STACK_LINE(41)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(53)
	this->b = b->b;
	HX_STACK_LINE(54)
	this->pos = pos;
	HX_STACK_LINE(55)
	this->len = len;
	HX_STACK_LINE(56)
	this->totlen = len;
}
;
	return null();
}

//BytesInput_obj::~BytesInput_obj() { }

Dynamic BytesInput_obj::__CreateEmpty() { return  new BytesInput_obj; }
hx::ObjectPtr< BytesInput_obj > BytesInput_obj::__new(::haxe::io::Bytes b,Dynamic pos,Dynamic len)
{  hx::ObjectPtr< BytesInput_obj > _result_ = new BytesInput_obj();
	_result_->__construct(b,pos,len);
	return _result_;}

Dynamic BytesInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BytesInput_obj > _result_ = new BytesInput_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

int BytesInput_obj::get_position( ){
	HX_STACK_FRAME("haxe.io.BytesInput","get_position",0x9ad9f581,"haxe.io.BytesInput.get_position","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesInput.hx",63,0xd7d0a806)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	int tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BytesInput_obj,get_position,return )

int BytesInput_obj::get_length( ){
	HX_STACK_FRAME("haxe.io.BytesInput","get_length",0xbaeb83be,"haxe.io.BytesInput.get_length","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesInput.hx",71,0xd7d0a806)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	int tmp = this->totlen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BytesInput_obj,get_length,return )

int BytesInput_obj::set_position( int p){
	HX_STACK_FRAME("haxe.io.BytesInput","set_position",0xafd318f5,"haxe.io.BytesInput.set_position","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesInput.hx",79,0xd7d0a806)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(80)
	bool tmp = (p < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	if ((tmp)){
		HX_STACK_LINE(80)
		p = (int)0;
	}
	else{
		HX_STACK_LINE(81)
		int tmp1 = p;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		int tmp2 = this->totlen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		if ((tmp3)){
			HX_STACK_LINE(81)
			int tmp4 = this->totlen;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			p = tmp4;
		}
	}
	HX_STACK_LINE(85)
	int tmp1 = this->totlen;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	int tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	this->len = tmp3;
	HX_STACK_LINE(86)
	int tmp4 = this->pos = p;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BytesInput_obj,set_position,return )

int BytesInput_obj::readByte( ){
	HX_STACK_FRAME("haxe.io.BytesInput","readByte",0xb70e46cd,"haxe.io.BytesInput.readByte","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesInput.hx",90,0xd7d0a806)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	int tmp = this->len;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	if ((tmp1)){
		HX_STACK_LINE(95)
		::haxe::io::Eof tmp2 = ::haxe::io::Eof_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		HX_STACK_DO_THROW(tmp2);
	}
	HX_STACK_LINE(96)
	(this->len)--;
	HX_STACK_LINE(102)
	int tmp2 = (this->pos)++;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	int tmp3 = this->b->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(102)
	return tmp3;
}


int BytesInput_obj::readBytes( ::haxe::io::Bytes buf,int pos,int len){
	HX_STACK_FRAME("haxe.io.BytesInput","readBytes",0x756fad06,"haxe.io.BytesInput.readBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesInput.hx",111,0xd7d0a806)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buf,"buf")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(113)
	bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	if ((tmp2)){
		HX_STACK_LINE(113)
		tmp3 = (len < (int)0);
	}
	else{
		HX_STACK_LINE(113)
		tmp3 = true;
	}
	HX_STACK_LINE(113)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(113)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(113)
	if ((tmp4)){
		HX_STACK_LINE(113)
		int tmp6 = (pos + len);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(113)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(113)
		int tmp8 = buf->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(113)
		tmp5 = (tmp7 > tmp8);
	}
	else{
		HX_STACK_LINE(113)
		tmp5 = true;
	}
	HX_STACK_LINE(113)
	if ((tmp5)){
		HX_STACK_LINE(114)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(137)
	int tmp6 = this->len;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(137)
	bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(137)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(137)
	if ((tmp7)){
		HX_STACK_LINE(137)
		tmp8 = (len > (int)0);
	}
	else{
		HX_STACK_LINE(137)
		tmp8 = false;
	}
	HX_STACK_LINE(137)
	if ((tmp8)){
		HX_STACK_LINE(138)
		::haxe::io::Eof tmp9 = ::haxe::io::Eof_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(138)
		HX_STACK_DO_THROW(tmp9);
	}
	HX_STACK_LINE(139)
	int tmp9 = this->len;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(139)
	int tmp10 = len;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(139)
	bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(139)
	if ((tmp11)){
		HX_STACK_LINE(140)
		int tmp12 = this->len;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(140)
		len = tmp12;
	}
	HX_STACK_LINE(146)
	Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
	HX_STACK_LINE(147)
	Array< unsigned char > b2 = buf->b;		HX_STACK_VAR(b2,"b2");
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(148)
		while((true)){
			HX_STACK_LINE(148)
			bool tmp12 = (_g < len);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(148)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(148)
			if ((tmp13)){
				HX_STACK_LINE(148)
				break;
			}
			HX_STACK_LINE(148)
			int tmp14 = (_g)++;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(148)
			int i = tmp14;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(149)
			int tmp15 = (pos + i);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(149)
			int tmp16 = this->pos;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(149)
			int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(149)
			int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(149)
			unsigned char tmp19 = b1->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(149)
			b2[tmp15] = tmp19;
		}
	}
	HX_STACK_LINE(151)
	hx::AddEq(this->pos,len);
	HX_STACK_LINE(152)
	hx::SubEq(this->len,len);
	HX_STACK_LINE(154)
	int tmp12 = len;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(154)
	return tmp12;
}



BytesInput_obj::BytesInput_obj()
{
}

void BytesInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BytesInput);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(len,"len");
	HX_MARK_MEMBER_NAME(totlen,"totlen");
	HX_MARK_END_CLASS();
}

void BytesInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(len,"len");
	HX_VISIT_MEMBER_NAME(totlen,"totlen");
}

Dynamic BytesInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		if (HX_FIELD_EQ(inName,"len") ) { return len; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"totlen") ) { return totlen; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BytesInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"len") ) { len=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"totlen") ) { totlen=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BytesInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"));
	outFields->push(HX_HCSTRING("totlen","\xdc","\x4a","\xdf","\x97"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(BytesInput_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(BytesInput_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsInt,(int)offsetof(BytesInput_obj,len),HX_HCSTRING("len","\xd5","\x4b","\x52","\x00")},
	{hx::fsInt,(int)offsetof(BytesInput_obj,totlen),HX_HCSTRING("totlen","\xdc","\x4a","\xdf","\x97")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"),
	HX_HCSTRING("totlen","\xdc","\x4a","\xdf","\x97"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BytesInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BytesInput_obj::__mClass,"__mClass");
};

#endif

hx::Class BytesInput_obj::__mClass;

void BytesInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.BytesInput","\xff","\xf8","\x5b","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BytesInput_obj >;
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
} // end namespace io
