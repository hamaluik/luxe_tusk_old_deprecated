#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_crypto_Adler32
#include <haxe/crypto/Adler32.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace haxe{
namespace crypto{

Void Adler32_obj::__construct()
{
HX_STACK_FRAME("haxe.crypto.Adler32","new",0xc900c8e2,"haxe.crypto.Adler32.new","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Adler32.hx",32,0x51878987)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(33)
	this->a1 = (int)1;
	HX_STACK_LINE(34)
	this->a2 = (int)0;
}
;
	return null();
}

//Adler32_obj::~Adler32_obj() { }

Dynamic Adler32_obj::__CreateEmpty() { return  new Adler32_obj; }
hx::ObjectPtr< Adler32_obj > Adler32_obj::__new()
{  hx::ObjectPtr< Adler32_obj > _result_ = new Adler32_obj();
	_result_->__construct();
	return _result_;}

Dynamic Adler32_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Adler32_obj > _result_ = new Adler32_obj();
	_result_->__construct();
	return _result_;}

int Adler32_obj::get( ){
	HX_STACK_FRAME("haxe.crypto.Adler32","get",0xc8fb7918,"haxe.crypto.Adler32.get","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Adler32.hx",37,0x51878987)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	int tmp = this->a2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	int tmp1 = (int(tmp) << int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	int tmp2 = this->a1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	int tmp3 = (int(tmp1) | int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Adler32_obj,get,return )

Void Adler32_obj::update( ::haxe::io::Bytes b,int pos,int len){
{
		HX_STACK_FRAME("haxe.crypto.Adler32","update",0xb4b14ac7,"haxe.crypto.Adler32.update","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Adler32.hx",41,0x51878987)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(42)
		int tmp = this->a1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		int a1 = tmp;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(42)
		int tmp1 = this->a2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		int a2 = tmp1;		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			int _g1 = pos;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(43)
			int tmp2 = (pos + len);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(43)
			while((true)){
				HX_STACK_LINE(43)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(43)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(43)
				if ((tmp4)){
					HX_STACK_LINE(43)
					break;
				}
				HX_STACK_LINE(43)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(43)
				int p = tmp5;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(44)
				int tmp6 = b->b->__get(p);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(44)
				int c = tmp6;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(45)
				int tmp7 = (a1 + c);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(45)
				int tmp8 = hx::Mod(tmp7,(int)65521);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(45)
				a1 = tmp8;
				HX_STACK_LINE(46)
				int tmp9 = (a2 + a1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(46)
				int tmp10 = hx::Mod(tmp9,(int)65521);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(46)
				a2 = tmp10;
			}
		}
		HX_STACK_LINE(48)
		this->a1 = a1;
		HX_STACK_LINE(49)
		this->a2 = a2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Adler32_obj,update,(void))

bool Adler32_obj::equals( ::haxe::crypto::Adler32 a){
	HX_STACK_FRAME("haxe.crypto.Adler32","equals",0xed9eb2fd,"haxe.crypto.Adler32.equals","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Adler32.hx",52,0x51878987)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(53)
	int tmp = a->a1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	int tmp1 = this->a1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	if ((tmp2)){
		HX_STACK_LINE(53)
		int tmp4 = a->a2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		int tmp5 = this->a2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		tmp3 = (tmp4 == tmp6);
	}
	else{
		HX_STACK_LINE(53)
		tmp3 = false;
	}
	HX_STACK_LINE(53)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Adler32_obj,equals,return )

::String Adler32_obj::toString( ){
	HX_STACK_FRAME("haxe.crypto.Adler32","toString",0xfc23c0ea,"haxe.crypto.Adler32.toString","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Adler32.hx",56,0x51878987)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	int tmp = this->a2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	::String tmp1 = ::StringTools_obj::hex(tmp,(int)8);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	int tmp2 = this->a1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	::String tmp3 = ::StringTools_obj::hex(tmp2,(int)8);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	::String tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Adler32_obj,toString,return )

::haxe::crypto::Adler32 Adler32_obj::read( ::haxe::io::Input i){
	HX_STACK_FRAME("haxe.crypto.Adler32","read",0x1a53c494,"haxe.crypto.Adler32.read","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Adler32.hx",60,0x51878987)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(61)
	::haxe::crypto::Adler32 tmp = ::haxe::crypto::Adler32_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	::haxe::crypto::Adler32 a = tmp;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(62)
	int tmp1 = i->readByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	int a2a = tmp1;		HX_STACK_VAR(a2a,"a2a");
	HX_STACK_LINE(63)
	int tmp2 = i->readByte();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	int a2b = tmp2;		HX_STACK_VAR(a2b,"a2b");
	HX_STACK_LINE(64)
	int tmp3 = i->readByte();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	int a1a = tmp3;		HX_STACK_VAR(a1a,"a1a");
	HX_STACK_LINE(65)
	int tmp4 = i->readByte();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	int a1b = tmp4;		HX_STACK_VAR(a1b,"a1b");
	HX_STACK_LINE(66)
	int tmp5 = (int(a1a) << int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(66)
	int tmp6 = a1b;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(66)
	int tmp7 = (int(tmp5) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(66)
	a->a1 = tmp7;
	HX_STACK_LINE(67)
	int tmp8 = (int(a2a) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(67)
	int tmp9 = a2b;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(67)
	int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(67)
	a->a2 = tmp10;
	HX_STACK_LINE(68)
	::haxe::crypto::Adler32 tmp11 = a;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(68)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Adler32_obj,read,return )

int Adler32_obj::make( ::haxe::io::Bytes b){
	HX_STACK_FRAME("haxe.crypto.Adler32","make",0x1702b32c,"haxe.crypto.Adler32.make","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Adler32.hx",71,0x51878987)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(72)
	::haxe::crypto::Adler32 tmp = ::haxe::crypto::Adler32_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	::haxe::crypto::Adler32 a = tmp;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(73)
	::haxe::io::Bytes tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	int tmp2 = b->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	a->update(tmp1,(int)0,tmp2);
	HX_STACK_LINE(74)
	int tmp3 = a->get();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Adler32_obj,make,return )


Adler32_obj::Adler32_obj()
{
}

Dynamic Adler32_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"a1") ) { return a1; }
		if (HX_FIELD_EQ(inName,"a2") ) { return a2; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Adler32_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"make") ) { outValue = make_dyn(); return true;  }
	}
	return false;
}

Dynamic Adler32_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"a1") ) { a1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2") ) { a2=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Adler32_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a1","\xb0","\x54","\x00","\x00"));
	outFields->push(HX_HCSTRING("a2","\xb1","\x54","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Adler32_obj,a1),HX_HCSTRING("a1","\xb0","\x54","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Adler32_obj,a2),HX_HCSTRING("a2","\xb1","\x54","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("a1","\xb0","\x54","\x00","\x00"),
	HX_HCSTRING("a2","\xb1","\x54","\x00","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Adler32_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Adler32_obj::__mClass,"__mClass");
};

#endif

hx::Class Adler32_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	HX_HCSTRING("make","\xee","\x39","\x56","\x48"),
	::String(null()) };

void Adler32_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.crypto.Adler32","\xf0","\x6f","\xb6","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Adler32_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Adler32_obj >;
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
