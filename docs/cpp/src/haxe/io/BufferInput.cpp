#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_BufferInput
#include <haxe/io/BufferInput.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace haxe{
namespace io{

Void BufferInput_obj::__construct(::haxe::io::Input i,::haxe::io::Bytes buf,Dynamic __o_pos,Dynamic __o_available)
{
HX_STACK_FRAME("haxe.io.BufferInput","new",0x1ee6877c,"haxe.io.BufferInput.new","C:\\HaxeToolkit\\haxe\\std/haxe/io/BufferInput.hx",31,0x3eff50ad)
HX_STACK_THIS(this)
HX_STACK_ARG(i,"i")
HX_STACK_ARG(buf,"buf")
HX_STACK_ARG(__o_pos,"pos")
HX_STACK_ARG(__o_available,"available")
Dynamic pos = __o_pos.Default(0);
Dynamic available = __o_available.Default(0);
{
	HX_STACK_LINE(32)
	this->i = i;
	HX_STACK_LINE(33)
	this->buf = buf;
	HX_STACK_LINE(34)
	this->pos = pos;
	HX_STACK_LINE(35)
	this->available = available;
}
;
	return null();
}

//BufferInput_obj::~BufferInput_obj() { }

Dynamic BufferInput_obj::__CreateEmpty() { return  new BufferInput_obj; }
hx::ObjectPtr< BufferInput_obj > BufferInput_obj::__new(::haxe::io::Input i,::haxe::io::Bytes buf,Dynamic __o_pos,Dynamic __o_available)
{  hx::ObjectPtr< BufferInput_obj > _result_ = new BufferInput_obj();
	_result_->__construct(i,buf,__o_pos,__o_available);
	return _result_;}

Dynamic BufferInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BufferInput_obj > _result_ = new BufferInput_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void BufferInput_obj::refill( ){
{
		HX_STACK_FRAME("haxe.io.BufferInput","refill",0xd11f2a1a,"haxe.io.BufferInput.refill","C:\\HaxeToolkit\\haxe\\std/haxe/io/BufferInput.hx",38,0x3eff50ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		int tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		if ((tmp1)){
			HX_STACK_LINE(40)
			::haxe::io::Bytes tmp2 = this->buf;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			::haxe::io::Bytes tmp3 = this->buf;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			int tmp4 = this->pos;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			int tmp5 = this->available;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			tmp2->blit((int)0,tmp3,tmp4,tmp5);
			HX_STACK_LINE(41)
			this->pos = (int)0;
		}
		HX_STACK_LINE(43)
		::haxe::io::Input tmp2 = this->i;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		::haxe::io::Bytes tmp3 = this->buf;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		int tmp4 = this->available;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		::haxe::io::Bytes tmp5 = this->buf;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		int tmp6 = tmp5->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		int tmp7 = this->available;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		int tmp9 = tmp2->readBytes(tmp3,tmp4,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(43)
		hx::AddEq(this->available,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BufferInput_obj,refill,(void))

int BufferInput_obj::readByte( ){
	HX_STACK_FRAME("haxe.io.BufferInput","readByte",0xba4efce2,"haxe.io.BufferInput.readByte","C:\\HaxeToolkit\\haxe\\std/haxe/io/BufferInput.hx",46,0x3eff50ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	int tmp = this->available;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	if ((tmp1)){
		HX_STACK_LINE(47)
		this->refill();
	}
	HX_STACK_LINE(48)
	::haxe::io::Bytes tmp2 = this->buf;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	int tmp3 = this->pos;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(48)
	int tmp4 = tmp2->b->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(48)
	int c = tmp4;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(49)
	(this->pos)++;
	HX_STACK_LINE(50)
	(this->available)--;
	HX_STACK_LINE(51)
	int tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	return tmp5;
}


int BufferInput_obj::readBytes( ::haxe::io::Bytes buf,int pos,int len){
	HX_STACK_FRAME("haxe.io.BufferInput","readBytes",0x4ace4951,"haxe.io.BufferInput.readBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/BufferInput.hx",54,0x3eff50ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buf,"buf")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(55)
	int tmp = this->available;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	if ((tmp1)){
		HX_STACK_LINE(55)
		this->refill();
	}
	HX_STACK_LINE(56)
	int tmp2 = len;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	int tmp3 = this->available;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(56)
	if ((tmp4)){
		HX_STACK_LINE(56)
		tmp5 = this->available;
	}
	else{
		HX_STACK_LINE(56)
		tmp5 = len;
	}
	HX_STACK_LINE(56)
	int size = tmp5;		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(57)
	int tmp6 = pos;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(57)
	::haxe::io::Bytes tmp7 = this->buf;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(57)
	int tmp8 = this->pos;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(57)
	int tmp9 = size;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(57)
	buf->blit(tmp6,tmp7,tmp8,tmp9);
	HX_STACK_LINE(58)
	hx::AddEq(this->pos,size);
	HX_STACK_LINE(59)
	hx::SubEq(this->available,size);
	HX_STACK_LINE(60)
	int tmp10 = size;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(60)
	return tmp10;
}



BufferInput_obj::BufferInput_obj()
{
}

void BufferInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BufferInput);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_MEMBER_NAME(available,"available");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void BufferInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(buf,"buf");
	HX_VISIT_MEMBER_NAME(available,"available");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

Dynamic BufferInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return buf; }
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"refill") ) { return refill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { return available; }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BufferInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< ::haxe::io::Input >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { available=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BufferInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"));
	outFields->push(HX_HCSTRING("available","\xc9","\x59","\x83","\x77"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(BufferInput_obj,i),HX_HCSTRING("i","\x69","\x00","\x00","\x00")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(BufferInput_obj,buf),HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00")},
	{hx::fsInt,(int)offsetof(BufferInput_obj,available),HX_HCSTRING("available","\xc9","\x59","\x83","\x77")},
	{hx::fsInt,(int)offsetof(BufferInput_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("i","\x69","\x00","\x00","\x00"),
	HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"),
	HX_HCSTRING("available","\xc9","\x59","\x83","\x77"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("refill","\xb6","\x87","\xe3","\xff"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BufferInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BufferInput_obj::__mClass,"__mClass");
};

#endif

hx::Class BufferInput_obj::__mClass;

void BufferInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.BufferInput","\x8a","\x59","\x3e","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BufferInput_obj >;
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
