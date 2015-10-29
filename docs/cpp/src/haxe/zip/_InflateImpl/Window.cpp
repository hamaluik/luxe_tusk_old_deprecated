#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Adler32
#include <haxe/crypto/Adler32.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip__InflateImpl_Window
#include <haxe/zip/_InflateImpl/Window.h>
#endif
namespace haxe{
namespace zip{
namespace _InflateImpl{

Void Window_obj::__construct(bool hasCrc)
{
HX_STACK_FRAME("haxe.zip._InflateImpl.Window","new",0x88adb9f3,"haxe.zip._InflateImpl.Window.new","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",35,0xc398dbb5)
HX_STACK_THIS(this)
HX_STACK_ARG(hasCrc,"hasCrc")
{
	HX_STACK_LINE(36)
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::alloc((int)65536);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	this->buffer = tmp;
	HX_STACK_LINE(37)
	this->pos = (int)0;
	HX_STACK_LINE(38)
	bool tmp1 = hasCrc;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	if ((tmp1)){
		HX_STACK_LINE(38)
		::haxe::crypto::Adler32 tmp2 = ::haxe::crypto::Adler32_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		this->crc = tmp2;
	}
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(bool hasCrc)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(hasCrc);
	return _result_;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Window_obj::slide( ){
{
		HX_STACK_FRAME("haxe.zip._InflateImpl.Window","slide",0x409d7984,"haxe.zip._InflateImpl.Window.slide","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",41,0xc398dbb5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		::haxe::crypto::Adler32 tmp = this->crc;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		if ((tmp1)){
			HX_STACK_LINE(42)
			::haxe::crypto::Adler32 tmp2 = this->crc;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			::haxe::io::Bytes tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			tmp2->update(tmp3,(int)0,(int)32768);
		}
		HX_STACK_LINE(43)
		::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::alloc((int)65536);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		::haxe::io::Bytes b = tmp2;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(44)
		hx::SubEq(this->pos,(int)32768);
		HX_STACK_LINE(45)
		::haxe::io::Bytes tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		int tmp4 = this->pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		b->blit((int)0,tmp3,(int)32768,tmp4);
		HX_STACK_LINE(46)
		this->buffer = b;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,slide,(void))

Void Window_obj::addBytes( ::haxe::io::Bytes b,int p,int len){
{
		HX_STACK_FRAME("haxe.zip._InflateImpl.Window","addBytes",0xb984b017,"haxe.zip._InflateImpl.Window.addBytes","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",49,0xc398dbb5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(50)
		int tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		bool tmp3 = (tmp2 > (int)65536);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		if ((tmp3)){
			HX_STACK_LINE(50)
			this->slide();
		}
		HX_STACK_LINE(51)
		::haxe::io::Bytes tmp4 = this->buffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		int tmp5 = this->pos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		::haxe::io::Bytes tmp6 = b;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		int tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		int tmp8 = len;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(51)
		tmp4->blit(tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(52)
		hx::AddEq(this->pos,len);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Window_obj,addBytes,(void))

Void Window_obj::addByte( int c){
{
		HX_STACK_FRAME("haxe.zip._InflateImpl.Window","addByte",0xa74a10dc,"haxe.zip._InflateImpl.Window.addByte","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",55,0xc398dbb5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(56)
		int tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		bool tmp1 = (tmp == (int)65536);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		if ((tmp1)){
			HX_STACK_LINE(56)
			this->slide();
		}
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::haxe::io::Bytes tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(57)
			int tmp3 = this->pos;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			int tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			tmp2->b[tmp3] = tmp4;
		}
		HX_STACK_LINE(58)
		(this->pos)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,addByte,(void))

int Window_obj::getLastChar( ){
	HX_STACK_FRAME("haxe.zip._InflateImpl.Window","getLastChar",0xdd866f95,"haxe.zip._InflateImpl.Window.getLastChar","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",61,0xc398dbb5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	::haxe::io::Bytes tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	int tmp1 = this->pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	int tmp3 = tmp->b->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,getLastChar,return )

int Window_obj::available( ){
	HX_STACK_FRAME("haxe.zip._InflateImpl.Window","available",0x3285339c,"haxe.zip._InflateImpl.Window.available","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",65,0xc398dbb5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	int tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,available,return )

::haxe::crypto::Adler32 Window_obj::checksum( ){
	HX_STACK_FRAME("haxe.zip._InflateImpl.Window","checksum",0x2f923f50,"haxe.zip._InflateImpl.Window.checksum","C:\\HaxeToolkit\\haxe\\std/haxe/zip/InflateImpl.hx",69,0xc398dbb5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	::haxe::crypto::Adler32 tmp = this->crc;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	if ((tmp1)){
		HX_STACK_LINE(70)
		::haxe::crypto::Adler32 tmp2 = this->crc;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		::haxe::io::Bytes tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		int tmp4 = this->pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		tmp2->update(tmp3,(int)0,tmp4);
	}
	HX_STACK_LINE(71)
	::haxe::crypto::Adler32 tmp2 = this->crc;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,checksum,return )

int Window_obj::SIZE;

int Window_obj::BUFSIZE;


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(crc,"crc");
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(crc,"crc");
}

Dynamic Window_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		if (HX_FIELD_EQ(inName,"crc") ) { return crc; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slide") ) { return slide_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addByte") ) { return addByte_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addBytes") ) { return addBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"checksum") ) { return checksum_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { return available_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getLastChar") ) { return getLastChar_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"crc") ) { crc=inValue.Cast< ::haxe::crypto::Adler32 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("crc","\xd4","\x82","\x4b","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Window_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(Window_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsObject /*::haxe::crypto::Adler32*/ ,(int)offsetof(Window_obj,crc),HX_HCSTRING("crc","\xd4","\x82","\x4b","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Window_obj::SIZE,HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37")},
	{hx::fsInt,(void *) &Window_obj::BUFSIZE,HX_HCSTRING("BUFSIZE","\x54","\x4d","\xff","\x39")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("crc","\xd4","\x82","\x4b","\x00"),
	HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"),
	HX_HCSTRING("addBytes","\x8a","\x2e","\xf5","\x36"),
	HX_HCSTRING("addByte","\xc9","\x61","\x60","\x7d"),
	HX_HCSTRING("getLastChar","\x02","\x3b","\xfc","\xfa"),
	HX_HCSTRING("available","\xc9","\x59","\x83","\x77"),
	HX_HCSTRING("checksum","\xc3","\xbd","\x02","\xad"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Window_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(Window_obj::BUFSIZE,"BUFSIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Window_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(Window_obj::BUFSIZE,"BUFSIZE");
};

#endif

hx::Class Window_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37"),
	HX_HCSTRING("BUFSIZE","\x54","\x4d","\xff","\x39"),
	::String(null()) };

void Window_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.zip._InflateImpl.Window","\x81","\x44","\x4f","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Window_obj >;
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

void Window_obj::__boot()
{
	SIZE= (int)32768;
	BUFSIZE= (int)65536;
}

} // end namespace haxe
} // end namespace zip
} // end namespace _InflateImpl
