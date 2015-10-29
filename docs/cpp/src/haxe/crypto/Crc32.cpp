#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Crc32
#include <haxe/crypto/Crc32.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace haxe{
namespace crypto{

Void Crc32_obj::__construct()
{
HX_STACK_FRAME("haxe.crypto.Crc32","new",0x50ecd2a0,"haxe.crypto.Crc32.new","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Crc32.hx",32,0x1de4b149)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	this->crc = (int)-1;
}
;
	return null();
}

//Crc32_obj::~Crc32_obj() { }

Dynamic Crc32_obj::__CreateEmpty() { return  new Crc32_obj; }
hx::ObjectPtr< Crc32_obj > Crc32_obj::__new()
{  hx::ObjectPtr< Crc32_obj > _result_ = new Crc32_obj();
	_result_->__construct();
	return _result_;}

Dynamic Crc32_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Crc32_obj > _result_ = new Crc32_obj();
	_result_->__construct();
	return _result_;}

Void Crc32_obj::byte( int b){
{
		HX_STACK_FRAME("haxe.crypto.Crc32","byte",0x766c14c8,"haxe.crypto.Crc32.byte","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Crc32.hx",35,0x1de4b149)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(36)
		int tmp = this->crc;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		int tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		int tmp2 = (int(tmp) ^ int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			while((true)){
				HX_STACK_LINE(37)
				bool tmp5 = (_g < (int)8);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(37)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(37)
				if ((tmp6)){
					HX_STACK_LINE(37)
					break;
				}
				HX_STACK_LINE(37)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(37)
				int j = tmp7;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(38)
				int tmp8 = (int(tmp4) & int((int)1));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(38)
				bool tmp9 = (tmp8 == (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(38)
				if ((tmp9)){
					HX_STACK_LINE(39)
					int tmp10 = hx::UShr(tmp4,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(39)
					int tmp11 = (int(tmp10) ^ int((int)-306674912));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(39)
					tmp4 = tmp11;
				}
				else{
					HX_STACK_LINE(41)
					hx::UShrEq(tmp4,(int)1);
				}
			}
		}
		HX_STACK_LINE(43)
		int tmp5 = this->crc;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		int tmp6 = hx::UShr(tmp5,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		int tmp7 = tmp4;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		int tmp8 = (int(tmp6) ^ int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		this->crc = tmp8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Crc32_obj,byte,(void))

Void Crc32_obj::update( ::haxe::io::Bytes b,int pos,int len){
{
		HX_STACK_FRAME("haxe.crypto.Crc32","update",0x58c76bc9,"haxe.crypto.Crc32.update","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Crc32.hx",46,0x1de4b149)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(47)
		Array< unsigned char > b1 = b->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			int _g1 = pos;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(48)
			int tmp = (pos + len);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(48)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			while((true)){
				HX_STACK_LINE(48)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(48)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(48)
				if ((tmp2)){
					HX_STACK_LINE(48)
					break;
				}
				HX_STACK_LINE(48)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(48)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(49)
				int tmp4 = this->crc;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(49)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(49)
				unsigned char tmp6 = b1->__unsafe_get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(49)
				int tmp7 = ((int)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(49)
				int tmp8 = (int(tmp4) ^ int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(49)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(49)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(50)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(50)
					while((true)){
						HX_STACK_LINE(50)
						bool tmp11 = (_g2 < (int)8);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(50)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(50)
						if ((tmp12)){
							HX_STACK_LINE(50)
							break;
						}
						HX_STACK_LINE(50)
						int tmp13 = (_g2)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(50)
						int j = tmp13;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(51)
						int tmp14 = (int(tmp10) & int((int)1));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(51)
						bool tmp15 = (tmp14 == (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(51)
						if ((tmp15)){
							HX_STACK_LINE(52)
							int tmp16 = hx::UShr(tmp10,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(52)
							int tmp17 = (int(tmp16) ^ int((int)-306674912));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(52)
							tmp10 = tmp17;
						}
						else{
							HX_STACK_LINE(54)
							hx::UShrEq(tmp10,(int)1);
						}
					}
				}
				HX_STACK_LINE(56)
				int tmp11 = this->crc;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(56)
				int tmp12 = hx::UShr(tmp11,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(56)
				int tmp13 = tmp10;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(56)
				int tmp14 = (int(tmp12) ^ int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(56)
				this->crc = tmp14;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Crc32_obj,update,(void))

int Crc32_obj::get( ){
	HX_STACK_FRAME("haxe.crypto.Crc32","get",0x50e782d6,"haxe.crypto.Crc32.get","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Crc32.hx",60,0x1de4b149)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	int tmp = this->crc;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	int tmp1 = (int(tmp) ^ int((int)-1));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Crc32_obj,get,return )

int Crc32_obj::make( ::haxe::io::Bytes data){
	HX_STACK_FRAME("haxe.crypto.Crc32","make",0x7d9f2fae,"haxe.crypto.Crc32.make","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Crc32.hx",67,0x1de4b149)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(68)
	int init = (int)-1;		HX_STACK_VAR(init,"init");
	HX_STACK_LINE(69)
	int crc = init;		HX_STACK_VAR(crc,"crc");
	HX_STACK_LINE(70)
	Array< unsigned char > b = data->b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(71)
		int _g = data->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		while((true)){
			HX_STACK_LINE(71)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(71)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(71)
			if ((tmp1)){
				HX_STACK_LINE(71)
				break;
			}
			HX_STACK_LINE(71)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(72)
			int tmp3 = crc;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			unsigned char tmp5 = b->__unsafe_get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			int tmp6 = ((int)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			int tmp7 = (int(tmp3) ^ int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(72)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(72)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(73)
				while((true)){
					HX_STACK_LINE(73)
					bool tmp10 = (_g2 < (int)8);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(73)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(73)
					if ((tmp11)){
						HX_STACK_LINE(73)
						break;
					}
					HX_STACK_LINE(73)
					int tmp12 = (_g2)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(73)
					int j = tmp12;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(74)
					int tmp13 = (int(tmp9) & int((int)1));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(74)
					bool tmp14 = (tmp13 == (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(74)
					if ((tmp14)){
						HX_STACK_LINE(75)
						int tmp15 = hx::UShr(tmp9,(int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(75)
						int tmp16 = (int(tmp15) ^ int((int)-306674912));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(75)
						tmp9 = tmp16;
					}
					else{
						HX_STACK_LINE(77)
						hx::UShrEq(tmp9,(int)1);
					}
				}
			}
			HX_STACK_LINE(79)
			int tmp10 = hx::UShr(crc,(int)8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(79)
			int tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(79)
			int tmp12 = (int(tmp10) ^ int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(79)
			crc = tmp12;
		}
	}
	HX_STACK_LINE(81)
	int tmp = (int(crc) ^ int(init));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Crc32_obj,make,return )


Crc32_obj::Crc32_obj()
{
}

Dynamic Crc32_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"crc") ) { return crc; }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"byte") ) { return byte_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Crc32_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { outValue = make_dyn(); return true;  }
	}
	return false;
}

Dynamic Crc32_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"crc") ) { crc=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Crc32_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("crc","\xd4","\x82","\x4b","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Crc32_obj,crc),HX_HCSTRING("crc","\xd4","\x82","\x4b","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("crc","\xd4","\x82","\x4b","\x00"),
	HX_HCSTRING("byte","\x08","\x1f","\x23","\x41"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Crc32_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Crc32_obj::__mClass,"__mClass");
};

#endif

hx::Class Crc32_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("make","\xee","\x39","\x56","\x48"),
	::String(null()) };

void Crc32_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.crypto.Crc32","\xae","\x42","\xaf","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Crc32_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Crc32_obj >;
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
